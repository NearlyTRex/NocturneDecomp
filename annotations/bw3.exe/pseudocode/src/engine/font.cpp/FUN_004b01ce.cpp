// Name: engine_font.cpp_FUN_004b01ce
// Address: 004b01ce
// Address Range: [[004b01ce, 004b047d]]
// Convention: unknown
// Signature: void engine_font_cpp_FUN_004b01ce(CBitFont *param_1,CBitFont *param_2)

#include "nocturne.h"

void engine_font_cpp_FUN_004b01ce(CBitFont *param_1,CBitFont *param_2)

{
  CBitFont CVar1;
  int iVar2;
  CBitFont *pCVar3;
  CBitFont *pCVar4;
  char acStack_25c [256];
  byte auStack_15c [256];
  CInStreamFile CStack_5c;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  
  unkafter_turret_cpp_CInStreamFile_ctor_FUN_005738c0(&CStack_5c);
  pCVar3 = param_2;
  pCVar4 = param_1 + 0x144;
  do {
    CVar1 = *pCVar3;
    *pCVar4 = CVar1;
    if (CVar1 == (CBitFont)0x0) break;
    CVar1 = pCVar3[1];
    pCVar3 = pCVar3 + 2;
    pCVar4[1] = CVar1;
    pCVar4 = pCVar4 + 2;
  } while (CVar1 != (CBitFont)0x0);
  strupr((char *)(param_1 + 0x144));
  iVar2 = support_trstream_cpp_FUN_00573fc0(&CStack_5c,0x5c1fb2,param_2,1);
  if (iVar2 != 0) {
    unkafter_turret_cpp_FUN_00573790(&CStack_5c,auStack_15c,0xff);
    unkafter_turret_cpp_FUN_00572590(&CStack_5c,0x5c1fb6,acStack_25c);
    unkafter_turret_cpp_FUN_00573790(&CStack_5c,auStack_15c,0xff);
    unkafter_turret_cpp_FUN_00572590(&CStack_5c,0x5c1fba,&iStack_30,&iStack_2c);
    unkafter_turret_cpp_FUN_00573790(&CStack_5c,auStack_15c,0xff);
    unkafter_turret_cpp_FUN_00572590(&CStack_5c,0x5c1fc1,&iStack_28,&iStack_24);
    unkafter_turret_cpp_FUN_00573790(&CStack_5c,auStack_15c,0xff);
    unkafter_turret_cpp_FUN_00572590(&CStack_5c,0x5c1fc8,&iStack_20);
    unkafter_turret_cpp_FUN_00573790(&CStack_5c,auStack_15c,0xff);
    unkafter_turret_cpp_FUN_00572590(&CStack_5c,0x5c1fcc,&uStack_1c);
    unkafter_turret_cpp_FUN_00573790(&CStack_5c,auStack_15c,0xff);
    unkafter_turret_cpp_FUN_00572590(&CStack_5c,0x5c1fd0,&uStack_18,&uStack_14);
    unkafter_turret_cpp_FUN_00573db0(&CStack_5c);
    if ((iStack_28 == 0x20) && (iStack_24 == 0xff)) {
      engine_font_cpp_CBitFont_openFontFile_FUN_004af8f0
                (param_1,acStack_25c,iStack_30,iStack_2c,iStack_20);
    }
    else {
      engine_font_cpp_CBitFont_loadNewBitmap_FUN_004b0190
                (param_1,acStack_25c,iStack_30,iStack_2c,iStack_28,iStack_24,iStack_20);
    }
    *(uint *)(param_1 + 0x3668) = uStack_1c;
    *(uint *)(param_1 + 0x41fc) = uStack_18;
    *(uint *)(param_1 + 0x4200) = uStack_14;
  }
  unkafter_turret_cpp_CInStreamFile_dtor_FUN_00573a40(&CStack_5c,0);
  return;
}
