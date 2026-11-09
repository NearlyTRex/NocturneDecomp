// Name: core_doc.cpp_FUN_00476260
// Address: 00476260
// Address Range: [[00476260, 004763b2]]
// Convention: unknown
// Signature: int core_doc_cpp_FUN_00476260(int param_1,int param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_doc_cpp_FUN_00476260(int param_1,int param_2,uint param_3)

{
  SMotion *pSVar1;
  float fVar2;
  int iVar3;
  
  if (param_2 != 0) {
    engine_console_cpp_FUN_00445430
              (g_CConsolePtr,"CDoc::startGettingGrabbed by %s, type %d\n",param_2,param_3);
    pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                       ((CMotionController *)(param_1 + 0x158));
    engine_console_cpp_FUN_00445430(g_CConsolePtr,"  current motion is %s\n",pSVar1);
    if (((*(int *)(param_1 + 0x1ff78) == 0) && (*(int *)(param_1 + 0x1ff74) == 0)) &&
       (*(int *)(param_1 + 0x1ff80) == 0)) {
      fVar2 = core_motion_cpp_FUN_00525020((CMotionController *)(param_1 + 0x158));
      if ((*(int *)(param_1 + 0x2c98) == 0xc) || (*(int *)(param_1 + 0x2c98) == 0xd)) {
        if ((fVar2 <= (float)_DAT_005da64c) || (_DAT_005da654 <= (double)fVar2)) {
LAB_0047631f:
          iVar3 = core_hero_cpp_FUN_004eadf0(param_1,param_2,param_3);
          if (iVar3 != 0) {
            if (*(int *)(param_1 + 0x20004) != *(int *)(param_1 + 0x25b0)) {
              (**(code **)(*(int *)(param_1 + 0x154) + 0x128))(param_1,0,0);
            }
            if (*(int *)(param_1 + 0x20004) != *(int *)(param_1 + 0x2628)) {
              (**(code **)(*(int *)(param_1 + 0x154) + 0x128))(param_1,1,0);
            }
            *(uint *)(param_1 + 0x200a8) = 0;
          }
          return iVar3;
        }
      }
      else if (*(int *)(param_1 + 0x1ff5c) != 3) {
        if (*(int *)(param_1 + 0x1ff5c) != 0) {
          return 0;
        }
        goto LAB_0047631f;
      }
    }
  }
  return 0;
}
