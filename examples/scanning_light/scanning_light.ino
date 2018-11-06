#include "BitLed.h"

void setup()
{
    BitLedOpen();
    uint8_t tmp[] = {0x01, 0x03, 0x07, 0x0F, 0x1F}, color[] = {BitRed, BitGreen, BitBlue, BitRed, BitBlue};
    BitShow(tmp, color);
    delay(1000);
    BitLedExit();
}

void loop()
{
    // put your main code here, to run repeatedly:

}
