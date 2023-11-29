#include "FastLED.h"      //add FastLED library

#define NUM_LEDS 512      //set of LEDS
#define DATA_PIN 3        //set Arduino pin number
CRGB leds[NUM_LEDS];

void setup() {
  FastLED.addLeds<WS2812B, DATA_PIN, RGB>(leds, NUM_LEDS);  //configure LEDs
  FastLED.setBrightness(5);                                 //set brightness (0-255)
  FastLED.clear();
  delay(1000);
        for (int k = 485; k <= 495; k ++){                         //row 2
      leds[k].setHue(0);}
    for (int k = 224; k <= 233; k ++){
      leds[k].setHue(0);}


    //leds[479].setHue();                                      //row 3
    //leds[478].setHue();
    //leds[477].setHue();
    //leds[476].setHue();
    //leds[475].setHue();
    leds[474].setHue(0);
    leds[473].setHue(0);
    leds[472].setHue(0);
    leds[471].setHue(0);
    leds[470].setHue(0);
    leds[469].setHue(0);
    leds[468].setHue(0);
    leds[467].setHue(0);
    leds[466].setHue(0);
    leds[465].setHue(0);
    leds[464].setHue(60);
    leds[223].setHue(0);
    leds[222].setHue(0);
    leds[221].setHue(0);
    leds[220].setHue(0);
    leds[219].setHue(0);
    leds[218].setHue(0);
    leds[217].setHue(0);
    leds[216].setHue(0);
    leds[215].setHue(0);
    leds[214].setHue(0);
    //leds[213].setHue();
    //leds[212].setHue();
    //leds[211].setHue();
    //leds[210].setHue();
    //leds[209].setHue();
    //leds[208].setHue();


    //leds[448].setHue();                                      //row 4
    //leds[449].setHue();
    //leds[450].setHue();
    //leds[451].setHue();
    //leds[452].setHue();
    leds[453].setHue(0);
    leds[454].setHue(0);
    leds[455].setHue(0);
    leds[456].setHue(0);
    leds[457].setHue(0);
    leds[458].setHue(0);
    leds[459].setHue(0);
    leds[460].setHue(0);
    leds[461].setHue(60);
    leds[462].setHue(60);
    leds[463].setHue(60);
    leds[192].setHue(60);
    leds[193].setHue(60);
    leds[194].setHue(0);
    leds[195].setHue(0);
    leds[196].setHue(0);
    leds[197].setHue(0);
    leds[198].setHue(0);
    leds[199].setHue(0);
    leds[200].setHue(0);
    leds[201].setHue(0);
    //leds[202].setHue();
    //leds[203].setHue();
    //leds[204].setHue();
    //leds[205].setHue();
    //leds[206].setHue();
    //leds[207].setHue();


    //leds[447].setHue();                                      //row 5
    //leds[446].setHue();
    //leds[445].setHue();
    //leds[444].setHue();
    //leds[443].setHue();
    leds[442].setHue(0);
    leds[441].setHue(0);
    leds[440].setHue(0);
    leds[439].setHue(0);
    leds[438].setHue(0);
    leds[437].setHue(0);
    leds[436].setHue(60);
    leds[435].setHue(60);
    leds[434].setHue(60);
    leds[433].setHue(160);
    leds[432].setHue(160);
    leds[191].setHue(160);
    leds[190].setHue(60);
    leds[189].setHue(60);
    leds[188].setHue(60);
    leds[187].setHue(0);
    leds[186].setHue(0);
    leds[185].setHue(0);
    leds[184].setHue(0);
    leds[183].setHue(0);
    leds[182].setHue(0);
    //leds[181].setHue();
    //leds[180].setHue();
    //leds[179].setHue();
    //leds[178].setHue();
    //leds[177].setHue();
    //leds[176].setHue();


    //leds[416].setHue();                                      //row 6
    //leds[417].setHue();
    //leds[418].setHue();
    //leds[419].setHue();
    //leds[420].setHue();
    leds[421].setHue(0);
    leds[422].setHue(0);
    leds[423].setHue(0);
    leds[424].setHue(0);
    leds[425].setHue(0);
    leds[426].setHue(60);
    leds[427].setHue(60);
    leds[428].setHue(60);
    leds[429].setHue(160);
    leds[430].setHue(160);
    leds[431].setHue(160);
    leds[160].setHue(160);
    leds[161].setHue(160);
    leds[162].setHue(60);
    leds[163].setHue(60);
    leds[164].setHue(60);
    leds[165].setHue(0);
    leds[166].setHue(0);
    leds[167].setHue(0);
    leds[168].setHue(0);
    leds[169].setHue(0);
    //leds[170].setHue();
    //leds[171].setHue();
    //leds[172].setHue();
    //leds[173].setHue();
    //leds[174].setHue();
    //leds[175].setHue();


    //leds[415].setHue();                                      //row 7
    //leds[414].setHue();
    //leds[413].setHue();
    //leds[412].setHue();
    //leds[411].setHue();
    leds[410].setHue(0);
    leds[409].setHue(0);
    leds[408].setHue(0);
    leds[407].setHue(60);
    leds[406].setHue(60);
    leds[405].setHue(60);
    leds[404].setHue(60);
    leds[403] = CRGB::DarkSlateGrey;
    leds[402] = CRGB::DarkSlateGrey;
    leds[401] = CRGB::DarkSlateGrey;
    leds[400] = CRGB::DarkSlateGrey;
    leds[159].setHue(160);
    leds[158].setHue(160);
    leds[157].setHue(160);
    leds[156].setHue(60);
    leds[155].setHue(60);
    leds[154].setHue(60);
    leds[153].setHue(60);
    leds[152].setHue(0);
    leds[151].setHue(0);
    leds[150].setHue(0);
    //leds[149].setHue();
    //leds[148].setHue();
    //leds[147].setHue();
    //leds[146].setHue();
    //leds[145].setHue();
    //leds[144].setHue();


    //leds[384].setHue();                                      //row 8
    //leds[385].setHue();
    //leds[386].setHue();
    //leds[387].setHue();
    //leds[388].setHue();
    leds[389].setHue(0);
    leds[390].setHue(0);
    leds[391].setHue(60);
    leds[392].setHue(60);
    leds[393].setHue(60);
    leds[394].setHue(60);
    leds[395].setHue(60);
    leds[396].setHue(160);
    leds[397].setHue(160);
    leds[398].setHue(160);
    leds[399].setHue(160);
    leds[128] = CRGB::DarkSlateGrey;
    leds[129] = CRGB::DarkSlateGrey;
    leds[130].setHue(160);
    leds[131].setHue(60);
    leds[132].setHue(60);
    leds[133].setHue(60);
    leds[134].setHue(60);
    leds[135].setHue(60);
    leds[136].setHue(0);
    leds[137].setHue(0);
    //leds[138].setHue();
    //leds[139].setHue();
    //leds[140].setHue();
    //leds[141].setHue();
    //leds[142].setHue();
    //leds[143].setHue();


    //leds[383].setHue();                                      //row 9
    //leds[382].setHue();
    //leds[381].setHue();
    //leds[380].setHue();
    //leds[379].setHue();
    leds[378].setHue(0);
    leds[377].setHue(0);
    leds[376].setHue(0);
    leds[375].setHue(60);
    leds[374].setHue(60);
    leds[373].setHue(60);
    leds[372].setHue(60);
    leds[371].setHue(160);
    leds[370].setHue(160);
    leds[369].setHue(160);
    leds[368].setHue(160);
    leds[127].setHue(160);
    leds[126].setHue(160);
    leds[125] = CRGB::DarkSlateGrey;
    leds[124].setHue(60);
    leds[123].setHue(60);
    leds[122].setHue(60);
    leds[121].setHue(60);
    leds[120].setHue(0);
    leds[119].setHue(0);
    leds[118].setHue(0);
    //leds[117].setHue();
    //leds[116].setHue();
    //leds[115].setHue();
    //leds[114].setHue();
    //leds[113].setHue();
    //leds[112].setHue();


    //leds[352].setHue();                                      //row 10
    //leds[353].setHue();
    //leds[354].setHue();
    //leds[355].setHue();
    //leds[356].setHue();
    leds[357].setHue(0);
    leds[358].setHue(0);
    leds[359].setHue(0);
    leds[360].setHue(0);
    leds[361].setHue(0);
    leds[362].setHue(60);
    leds[363].setHue(60);
    leds[364].setHue(60);
    leds[365].setHue(160);
    leds[366].setHue(160);
    leds[367].setHue(160);
    leds[96].setHue(160);
    leds[97].setHue(160);
    leds[98].setHue(60);
    leds[99].setHue(60);
    leds[100].setHue(60);
    leds[101].setHue(0);
    leds[102].setHue(0);
    leds[103].setHue(0);
    leds[104].setHue(0);
    leds[105].setHue(0);
    //leds[106].setHue();
    //leds[107].setHue();
    //leds[108].setHue();
    //leds[109].setHue();
    //leds[110].setHue();
    //leds[111].setHue();


    //leds[351].setHue();                                      //row 11
    //leds[350].setHue();
    //leds[349].setHue();
    //leds[348].setHue();
    //leds[347].setHue();
    leds[346].setHue(0);
    leds[345].setHue(0);
    leds[344].setHue(0);
    leds[343].setHue(0);
    leds[342].setHue(0);
    leds[341].setHue(0);
    leds[340].setHue(60);
    leds[339].setHue(60);
    leds[338].setHue(60);
    leds[337].setHue(160);
    leds[336].setHue(160);
    leds[95].setHue(160);
    leds[94].setHue(60);
    leds[93].setHue(60);
    leds[92].setHue(60);
    leds[91].setHue(0);
    leds[90].setHue(0);
    leds[89].setHue(0);
    leds[88].setHue(0);
    leds[87].setHue(0);
    leds[86].setHue(0);
    //leds[85].setHue();
    //leds[84].setHue();
    //leds[83].setHue();
    //leds[82].setHue();
    //leds[81].setHue();
    //leds[80].setHue();


    //leds[320].setHue();                                      //row 12
    //leds[321].setHue();
    //leds[322].setHue();
    //leds[323].setHue();
    //leds[324].setHue();
    leds[325].setHue(0);
    leds[326].setHue(0);
    leds[327].setHue(0);
    leds[328].setHue(0);
    leds[329].setHue(0);
    leds[330].setHue(0);
    leds[331].setHue(0);
    leds[332].setHue(0);
    leds[333].setHue(60);
    leds[334].setHue(60);
    leds[335].setHue(60);
    leds[64].setHue(60);
    leds[65].setHue(60);
    leds[66].setHue(0);
    leds[67].setHue(0);
    leds[68].setHue(0);
    leds[69].setHue(0);
    leds[70].setHue(0);
    leds[71].setHue(0);
    leds[72].setHue(0);
    leds[73].setHue(0);
    //leds[74].setHue();
    //leds[75].setHue();
    //leds[76].setHue();
    //leds[77].setHue();
    //leds[78].setHue();
    //leds[79].setHue();


    //leds[319].setHue();                                      //row 13
    //leds[318].setHue();
    //leds[317].setHue();
    //leds[316].setHue();
    //leds[315].setHue();
    leds[314].setHue(0);
    leds[313].setHue(0);
    leds[312].setHue(0);
    leds[311].setHue(0);
    leds[310].setHue(0);
    leds[309].setHue(0);
    leds[308].setHue(0);
    leds[307].setHue(0);
    leds[306].setHue(0);
    leds[305].setHue(0);
    leds[304].setHue(60);
    leds[63].setHue(0);
    leds[62].setHue(0);
    leds[61].setHue(0);
    leds[60].setHue(0);
    leds[59].setHue(0);
    leds[58].setHue(0);
    leds[57].setHue(0);
    leds[56].setHue(0);
    leds[55].setHue(0);
    leds[54].setHue(0);
    //leds[53].setHue();
    //leds[52].setHue();
    //leds[51].setHue();
    //leds[50].setHue();
    //leds[49].setHue();
    //leds[48].setHue();


    for (int k = 293; k <= 303; k ++){                         //row 14
      leds[k].setHue(0);}
    for (int k = 32; k <= 41; k ++){
      leds[k].setHue(0);}

    FastLED.show();
}

void loop() {
  
}