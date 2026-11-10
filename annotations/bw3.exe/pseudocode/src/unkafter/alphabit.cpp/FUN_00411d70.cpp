// Name: unkafter_alphabit.cpp_FUN_00411d70
// Address: 00411d70
// Address Range: [[00411d70, 0041231e]]
// Convention: unknown
// Signature: void unkafter_alphabit_cpp_FUN_00411d70(int *param_1,int param_2)

#include "nocturne.h"

void unkafter_alphabit_cpp_FUN_00411d70(int *param_1,int param_2)

{
  int iVar1;
  CAlphaBitmap *this_ptr;
  
  if (param_2 == 0) {
    engine_alphabit_cpp_FUN_0040d400((CAlphaBitmap *)(param_1 + 1));
    engine_alphabit_cpp_FUN_0040d400(CAlphaBitmap_ARRAY_007dffc0);
    engine_alphabit_cpp_FUN_0040d400(CAlphaBitmap_ARRAY_007dffc0 + 1);
    engine_alphabit_cpp_FUN_0040d400(CAlphaBitmap_ARRAY_007dffc0 + 2);
    iVar1 = 0;
    engine_alphabit_cpp_FUN_0040d400(CAlphaBitmap_ARRAY_007dffc0 + 3);
    if (0 < param_1[7]) {
      this_ptr = (CAlphaBitmap *)(param_1 + 0x15);
      do {
        engine_alphabit_cpp_FUN_0040d400(this_ptr);
        iVar1 = iVar1 + 1;
        this_ptr = (CAlphaBitmap *)&this_ptr[2].opa;
      } while (iVar1 < param_1[7]);
    }
    param_1[7] = 0;
    sound_sndmain_cpp_killAllSfx_FUN_00556c60();
    param_1[6] = 0;
    param_1[0xc] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0x14] = 0;
    param_1[0x30a] = 0;
    DAT_007dffb8 = 0xffffffff;
    return;
  }
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00462580
            ((CKeyFramedModelInstance *)(param_1 + 0x23b));
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00462580
            ((CKeyFramedModelInstance *)(param_1 + 0x29a));
  param_1[0x13] = 1;
  param_1[0xd] = 1;
  param_1[7] = 0;
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460
            ((CAlphaBitmap *)(param_1 + 1),"radioback",0x280,0x1e0);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460
            (CAlphaBitmap_ARRAY_007dffc0,"radiopointer2",0xd,0x12);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460
            (CAlphaBitmap_ARRAY_007dffc0 + 1,"radiotuners2",0x2a,0xc);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460
            (CAlphaBitmap_ARRAY_007dffc0 + 2,"radiotunersleft",0x15,0xc);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460
            (CAlphaBitmap_ARRAY_007dffc0 + 3,"radiotunersright",0x15,0xc);
  (**(code **)(*param_1 + 0x28))(param_1,0,"poweron",0x3d,0x3a,1,0x1f9,0x195,0);
  (**(code **)(*param_1 + 0x28))(param_1,1,"poweroff",0x3d,0x3a,1,0x1f9,0x195,0);
  (**(code **)(*param_1 + 0x28))(param_1,2,"playreverse",0x2d,0x4c,2,0x128,0x8a,0);
  (**(code **)(*param_1 + 0x28))(param_1,3,"playstop",0x2d,0x4c,2,0x128,0x8a,0);
  (**(code **)(*param_1 + 0x28))(param_1,4,"playforward",0x2d,0x4c,2,0x128,0x8a,0);
  (**(code **)(*param_1 + 0x28))(param_1,5,0x5b6661,0x16,0x20,3,0x171,0x12e,0);
  (**(code **)(*param_1 + 0x28))(param_1,6,0x5b6668,0x16,0x20,3,0x195,0x12e,0);
  (**(code **)(*param_1 + 0x28))(param_1,7,0x5b666f,0x16,0x20,3,0x1bd,0x12e,0);
  (**(code **)(*param_1 + 0x28))(param_1,8,0x5b6676,0x16,0x20,3,0x1e3,0x12e,0);
  (**(code **)(*param_1 + 0x28))(param_1,9,0x5b667d,0x16,0x20,3,0x20a,0x12e,0);
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
  iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                    (0x01C6E360,"AudioPuzzleTelOsMah");
  if (iVar1 == 0) {
    iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                      (0x01C6E360,"AudioPuzzleMary");
    if (iVar1 != 0) {
      param_1[0x306] = 1;
      param_1[0x307] = 4;
      param_1[0x308] = 1;
      param_1[0x309] = 2;
      param_1[0x301] = 2;
      param_1[0x305] = 3;
      param_1[0x30a] = 0;
      return;
    }
  }
  else {
    param_1[0x306] = 4;
    param_1[0x307] = 2;
    param_1[0x308] = 4;
    param_1[0x309] = 0;
    param_1[0x301] = 1;
    param_1[0x305] = 1;
  }
  param_1[0x30a] = 0;
  return;
}
