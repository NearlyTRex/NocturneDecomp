// Name: unkafter_superopt.cpp_FUN_004133c0
// Address: 004133c0
// Address Range: [[004133c0, 00413cc6]]
// Convention: unknown
// Signature: void unkafter_superopt_cpp_FUN_004133c0(int *param_1,int param_2)

#include "nocturne.h"

void unkafter_superopt_cpp_FUN_004133c0(int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  CAlphaBitmap *pCVar4;
  
  if (param_2 == 0) {
    engine_alphabit_cpp_FUN_0040d400((CAlphaBitmap *)(param_1 + 1));
    engine_alphabit_cpp_FUN_0040d400(CAlphaBitmap_ARRAY_007e0010);
    engine_alphabit_cpp_FUN_0040d400(CAlphaBitmap_ARRAY_007e0010 + 1);
    engine_alphabit_cpp_FUN_0040d400(CAlphaBitmap_ARRAY_007e0010 + 2);
    engine_alphabit_cpp_FUN_0040d400(CAlphaBitmap_ARRAY_007e0010 + 3);
    engine_alphabit_cpp_FUN_0040d400(CAlphaBitmap_ARRAY_007e0010 + 4);
    piVar2 = param_1;
    do {
      piVar1 = piVar2 + 1;
      piVar2[0x24d] = 0;
      piVar2 = piVar1;
    } while (piVar1 != param_1 + 4);
    piVar2 = param_1;
    do {
      piVar1 = piVar2 + 1;
      piVar2[0xe] = -1;
      piVar2 = piVar1;
    } while (piVar1 != param_1 + 3);
    piVar2 = param_1;
    do {
      piVar1 = piVar2 + 1;
      piVar2[0x11] = 0;
      piVar2 = piVar1;
    } while (piVar1 != param_1 + 3);
    iVar3 = 0;
    if (0 < param_1[8]) {
      pCVar4 = (CAlphaBitmap *)(param_1 + 0x1c);
      do {
        engine_alphabit_cpp_FUN_0040d400(pCVar4);
        iVar3 = iVar3 + 1;
        pCVar4 = (CAlphaBitmap *)&pCVar4[2].opa;
      } while (iVar3 < param_1[8]);
    }
    piVar2 = param_1;
    do {
      piVar1 = piVar2 + 1;
      piVar2[0x16] = 0;
      piVar2 = piVar1;
    } while (piVar1 != param_1 + 6);
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0x15] = 0;
    param_1[9] = 0;
    param_1[0xd] = 0;
    param_1[6] = 0;
    DAT_007dffb8 = 0xffffffff;
    param_1[0x24c] = -1;
    return;
  }
  param_1[0x247] = 0x1d;
  param_1[0x243] = 0x1e;
  param_1[0x248] = 0x1d;
  param_1[0x244] = 0x1e;
  param_1[0x249] = 0x1d;
  param_1[0x245] = 0x1e;
  param_1[0x24a] = 0x1d;
  param_1[0x246] = 0x1e;
  param_1[0x24b] = 0x1d;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0x15] = 0;
  param_1[9] = 0;
  param_1[0xd] = 0;
  param_1[0x242] = 0x1e;
  DAT_007dffb8 = 0xffffffff;
  param_1[0x24c] = -1;
  piVar2 = param_1;
  do {
    piVar1 = piVar2 + 1;
    piVar2[0x24d] = 0;
    piVar2 = piVar1;
  } while (piVar1 != param_1 + 4);
  piVar2 = param_1;
  do {
    piVar1 = piVar2 + 1;
    piVar2[0xe] = -1;
    piVar2 = piVar1;
  } while (piVar1 != param_1 + 3);
  piVar2 = param_1;
  do {
    piVar1 = piVar2 + 1;
    piVar2[0x11] = 0;
    piVar2 = piVar1;
  } while (piVar1 != param_1 + 3);
  piVar2 = param_1;
  do {
    piVar1 = piVar2 + 1;
    piVar2[0x16] = 0;
    piVar2 = piVar1;
  } while (piVar1 != param_1 + 6);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460
            ((CAlphaBitmap *)(param_1 + 1),"chembackground",0x280,0x1e0);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460
            (CAlphaBitmap_ARRAY_007e0010,"dropperempty",0x20,0x20);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460
            (CAlphaBitmap_ARRAY_007e0010 + 1,"dropper_25",0x20,0x20);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460
            (CAlphaBitmap_ARRAY_007e0010 + 2,"dropper_75",0x20,0x20);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460
            (CAlphaBitmap_ARRAY_007e0010 + 3,"dropperfull",0x20,0x20);
  iVar3 = 0;
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460
            (CAlphaBitmap_ARRAY_007e0010 + 4,"dropperhighlight",0x20,0x20);
  if (0 < param_1[8]) {
    pCVar4 = (CAlphaBitmap *)(param_1 + 0x1c);
    do {
      engine_alphabit_cpp_FUN_0040d400(pCVar4);
      iVar3 = iVar3 + 1;
      pCVar4 = (CAlphaBitmap *)&pCVar4[2].opa;
    } while (iVar3 < param_1[8]);
  }
  (**(code **)(*param_1 + 0x28))(param_1,1,"bullet1",0x7a,0x72,1,0x9d,0x157,0);
  (**(code **)(*param_1 + 0x28))(param_1,2,"bullet1cor",0x7a,0x72,1,0x9d,0x157,0);
  (**(code **)(*param_1 + 0x28))(param_1,3,"bullet1wet",0x7a,0x72,1,0x9d,0x157,0);
  (**(code **)(*param_1 + 0x28))(param_1,4,"bullet2",0x7a,0x72,1,0x9d,0x157,0);
  (**(code **)(*param_1 + 0x28))(param_1,5,"bullet2cor",0x7a,0x72,1,0x9d,0x157,0);
  (**(code **)(*param_1 + 0x28))(param_1,6,"bullet2wet",0x7a,0x72,1,0x9d,0x157,0);
  (**(code **)(*param_1 + 0x28))(param_1,7,"bullet3",0x7a,0x72,1,0x9d,0x157,0);
  (**(code **)(*param_1 + 0x28))(param_1,8,"bullet3cor",0x7a,0x72,1,0x9d,0x157,0);
  (**(code **)(*param_1 + 0x28))(param_1,9,"bullet3wet",0x7a,0x72,1,0x9d,0x157,0);
  (**(code **)(*param_1 + 0x28))(param_1,10,"dollar1",0x75,0x6c,1,0x165,0xde,0);
  (**(code **)(*param_1 + 0x28))(param_1,0xb,"dollar1cor",0x75,0x6c,1,0x165,0xde,0);
  (**(code **)(*param_1 + 0x28))(param_1,0xc,"dollar1wet",0x75,0x6c,1,0x165,0xde,0);
  (**(code **)(*param_1 + 0x28))(param_1,0xd,"dollar2",0x75,0x6c,1,0x165,0xde,0);
  (**(code **)(*param_1 + 0x28))(param_1,0xe,"dollar2cor",0x75,0x6c,1,0x165,0xde,0);
  (**(code **)(*param_1 + 0x28))(param_1,0xf,"dollar2wet",0x75,0x6c,1,0x165,0xde,0);
  (**(code **)(*param_1 + 0x28))(param_1,0x10,"dollar3",0x75,0x6c,1,0x165,0xde,0);
  (**(code **)(*param_1 + 0x28))(param_1,0x11,"dollar3cor",0x75,0x6c,1,0x165,0xde,0);
  (**(code **)(*param_1 + 0x28))(param_1,0x12,"dollar3wet",0x75,0x6c,1,0x165,0xde,0);
  (**(code **)(*param_1 + 0x28))(param_1,0x13,"nickel1",0x7e,0x78,1,0x1cd,0x14b,0);
  (**(code **)(*param_1 + 0x28))(param_1,0x14,"nickel1cor",0x7e,0x78,1,0x1cd,0x14b,0);
  (**(code **)(*param_1 + 0x28))(param_1,0x15,"nickel1wet",0x7e,0x78,1,0x1cd,0x14b,0);
  (**(code **)(*param_1 + 0x28))(param_1,0x16,"nickel2",0x7e,0x78,1,0x1cd,0x14b,0);
  (**(code **)(*param_1 + 0x28))(param_1,0x17,"nickel2cor",0x7e,0x78,1,0x1cd,0x14b,0);
  (**(code **)(*param_1 + 0x28))(param_1,0x18,"nickel2wet",0x7e,0x78,1,0x1cd,0x14b,0);
  (**(code **)(*param_1 + 0x28))(param_1,0x19,"nickel3",0x7e,0x78,1,0x1cd,0x14b,0);
  (**(code **)(*param_1 + 0x28))(param_1,0x1a,"nickel3cor",0x7e,0x78,1,0x1cd,0x14b,0);
  (**(code **)(*param_1 + 0x28))(param_1,0x1b,"nickel3wet",0x7e,0x78,1,0x1cd,0x14b,0);
  (**(code **)(*param_1 + 0x28))(param_1,0x1c,0x5b695e,0x80,0x76,1,0x144,0x164,0);
  (**(code **)(*param_1 + 0x28))(param_1,0x1d,"penny1cor",0x80,0x76,1,0x144,0x164,0);
  (**(code **)(*param_1 + 0x28))(param_1,0x1e,0x5b696f,0x80,0x76,1,0x144,0x164,0);
  (**(code **)(*param_1 + 0x28))(param_1,0x1f,0x5b6979,0x80,0x76,1,0x144,0x164,0);
  (**(code **)(*param_1 + 0x28))(param_1,0x20,"penny2cor",0x80,0x76,1,0x144,0x164,0);
  (**(code **)(*param_1 + 0x28))(param_1,0x21,0x5b698a,0x80,0x76,1,0x144,0x164,0);
  (**(code **)(*param_1 + 0x28))(param_1,0x22,0x5b6994,0x80,0x76,1,0x144,0x164,0);
  (**(code **)(*param_1 + 0x28))(param_1,0x23,"penny3cor",0x80,0x76,1,0x144,0x164,0);
  (**(code **)(*param_1 + 0x28))(param_1,0x24,0x5b69a5,0x80,0x76,1,0x144,0x164,0);
  (**(code **)(*param_1 + 0x28))(param_1,0x25,0x5b69af,0x30,0x19,1,8,0xa0,1);
  (**(code **)(*param_1 + 0x28))(param_1,0x26,0x5b69b6,0x30,0x19,1,0x4f,0x82,1);
  (**(code **)(*param_1 + 0x28))(param_1,0x27,0x5b69bd,0x30,0x19,1,0x95,99,1);
  (**(code **)(*param_1 + 0x28))(param_1,0x28,0x5b69c4,0x30,0x19,1,0xd7,0x44,1);
  (**(code **)(*param_1 + 0x28))(param_1,0x29,0x5b69cb,0x30,0x19,1,0x117,0x27,1);
  (**(code **)(*param_1 + 0x28))(param_1,0x2a,0x5b69d2,0x30,0x19,1,0x156,0xd,1);
  (**(code **)(*param_1 + 0x28))(param_1,0x2b,"chem_exit",0x1e,0x20,1,0x262,0x1b8,1);
  (**(code **)(*param_1 + 0x28))(param_1,0x2c,"chem_reset",0x1e,0x20,1,0x262,10,1);
  iVar3 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,2);
  param_1[0x11] = iVar3;
  iVar3 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,2);
  param_1[0x12] = iVar3;
  iVar3 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,2);
  param_1[0x13] = iVar3;
  iVar3 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,2);
  param_1[0x14] = iVar3;
  piVar2 = param_1;
  do {
    piVar1 = piVar2 + 1;
    piVar2[0x16] = 0;
    piVar2 = piVar1;
  } while (piVar1 != param_1 + 6);
  return;
}
