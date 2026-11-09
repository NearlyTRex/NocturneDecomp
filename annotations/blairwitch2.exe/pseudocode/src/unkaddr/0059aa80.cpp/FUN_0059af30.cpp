// Name: unkaddr_0059aa80.cpp_FUN_0059af30
// Address: 0059af30
// Address Range: [[0059af30, 0059b3bd]]
// Convention: unknown
// Signature: void unkaddr_0059aa80_cpp_FUN_0059af30(int *param_1,int param_2)

#include "nocturne.h"

void unkaddr_0059aa80_cpp_FUN_0059af30(int *param_1,int param_2)

{
  int iVar1;
  CAlphaBitmap *this_ptr;
  
  if (param_2 == 0) {
    engine_alphabit_cpp_FUN_0040d540((CAlphaBitmap *)(param_1 + 1));
    engine_alphabit_cpp_FUN_0040d540(CAlphaBitmap_ARRAY_026677ec);
    iVar1 = 0;
    engine_alphabit_cpp_FUN_0040d540(CAlphaBitmap_ARRAY_026677ec + 1);
    if (0 < param_1[7]) {
      this_ptr = (CAlphaBitmap *)(param_1 + 0x13);
      do {
        engine_alphabit_cpp_FUN_0040d540(this_ptr);
        iVar1 = iVar1 + 1;
        this_ptr = (CAlphaBitmap *)&this_ptr[2].field_0x4;
      } while (iVar1 < param_1[7]);
    }
    param_1[7] = 0;
    return;
  }
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
            ((CKeyFramedModelInstance *)(param_1 + 0x15d));
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
            ((CKeyFramedModelInstance *)(param_1 + 0x1bc));
  param_1[0x11] = 1;
  param_1[0xc] = 1;
  param_1[7] = 0;
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d5a0
            ((CAlphaBitmap *)(param_1 + 1),"radioback",0x280,0x1e0);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d5a0
            (CAlphaBitmap_ARRAY_026677ec,"radiopointer2",0xd,0x12);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d5a0
            (CAlphaBitmap_ARRAY_026677ec + 1,"radiotuners2",0x2a,0xc);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d5a0
            (CAlphaBitmap_ARRAY_026677ec + 2,"radiotunersleft",0x15,0xc);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d5a0
            (CAlphaBitmap_ARRAY_026677ec + 3,"radiotunersright",0x15,0xc);
  (**(code **)(*param_1 + 0x28))(param_1,0,"poweron",0x3d,0x3a,1,0x1f9,0x195,0);
  (**(code **)(*param_1 + 0x28))(param_1,1,"poweroff",0x3d,0x3a,1,0x1f9,0x195,0);
  (**(code **)(*param_1 + 0x28))(param_1,2,"playreverse",0x2d,0x4c,2,0x128,0x8a,0);
  (**(code **)(*param_1 + 0x28))(param_1,3,"playstop",0x2d,0x4c,2,0x128,0x8a,0);
  (**(code **)(*param_1 + 0x28))(param_1,4,"playforward",0x2d,0x4c,2,0x128,0x8a,0);
  (**(code **)(*param_1 + 0x28))(param_1,5,0x5ef4a6,0x16,0x20,3,0x171,0x12e,0);
  (**(code **)(*param_1 + 0x28))(param_1,6,0x5ef4ad,0x16,0x20,3,0x195,0x12e,0);
  (**(code **)(*param_1 + 0x28))(param_1,7,0x5ef4b4,0x16,0x20,3,0x1bd,0x12e,0);
  (**(code **)(*param_1 + 0x28))(param_1,8,0x5ef4bb,0x16,0x20,3,0x1e3,0x12e,0);
  (**(code **)(*param_1 + 0x28))(param_1,9,0x5ef4c2,0x16,0x20,3,0x20a,0x12e,0);
  (**(code **)(*param_1 + 0x28))(param_1,10,"lighton",0x14,0x15,0,0x135,0x62,0);
  (**(code **)(*param_1 + 0x28))(param_1,0xb,"lightoff",0x14,0x15,0,0x135,0x62,0);
  (**(code **)(*param_1 + 0x28))(param_1,0xc,"knobArrow1",0x27,0x27,2,0x4b,0x1a3,0);
  (**(code **)(*param_1 + 0x28))(param_1,0xd,"knobArrow2",0x27,0x27,2,0x4b,0x1a3,0);
  (**(code **)(*param_1 + 0x28))(param_1,0xe,"knobArrow3",0x27,0x27,2,0x4b,0x1a3,0);
  (**(code **)(*param_1 + 0x28))(param_1,0xf,"knobArrow4",0x27,0x27,2,0x4b,0x1a3,0);
  (**(code **)(*param_1 + 0x28))(param_1,0x10,"knobArrow5",0x27,0x27,2,0x4b,0x1a3,0);
  (**(code **)(*param_1 + 0x28))(param_1,0x11,"knobArrow1",0x27,0x27,2,0xaf,0x1a3,0);
  (**(code **)(*param_1 + 0x28))(param_1,0x12,"knobArrow2",0x27,0x27,2,0xaf,0x1a3,0);
  (**(code **)(*param_1 + 0x28))(param_1,0x13,"knobArrow3",0x27,0x27,2,0xaf,0x1a3,0);
  (**(code **)(*param_1 + 0x28))(param_1,0x14,"knobArrow4",0x27,0x27,2,0xaf,0x1a3,0);
  (**(code **)(*param_1 + 0x28))(param_1,0x15,"knobArrow5",0x27,0x27,2,0xaf,0x1a3,0);
  (**(code **)(*param_1 + 0x28))(param_1,0x16,"knobArrow1",0x27,0x27,2,0x111,0x1a3,0);
  (**(code **)(*param_1 + 0x28))(param_1,0x17,"knobArrow2",0x27,0x27,2,0x111,0x1a3,0);
  (**(code **)(*param_1 + 0x28))(param_1,0x18,"knobArrow3",0x27,0x27,2,0x111,0x1a3,0);
  (**(code **)(*param_1 + 0x28))(param_1,0x19,"knobArrow4",0x27,0x27,2,0x111,0x1a3,0);
  (**(code **)(*param_1 + 0x28))(param_1,0x1a,"knobArrow5",0x27,0x27,2,0x111,0x1a3,0);
  return;
}
