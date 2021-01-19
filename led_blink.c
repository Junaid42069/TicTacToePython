/*
 * File:   led_blink.c
 * Author:  Akash kadam
 *
 * Created on 19 January, 2021, 7:10 PM
 */


    TRISB=0X00;  //SETTING PORT B AS OUTPUT.
    while(1)
    {
        
        PORTB=0XFF;
        __delay_ms(500);
        PORTB=0X00;
        __delay_ms(500);
    }
    return;
}
