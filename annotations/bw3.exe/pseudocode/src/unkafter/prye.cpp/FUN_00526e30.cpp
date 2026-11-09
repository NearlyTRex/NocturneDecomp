// Name: unkafter_prye.cpp_FUN_00526e30
// Address: 00526e30
// Address Range: [[00526e30, 00526f4f]]
// Convention: unknown
// Signature: int unkafter_prye_cpp_FUN_00526e30(int param_1,int param_2,undefined4 param_3)

#include "nocturne.h"

int unkafter_prye_cpp_FUN_00526e30(int param_1,int param_2,uint param_3)

{
  SMotion *pSVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 != 0) {
    engine_console_cpp_FUN_00441ff0
              (g_CConsolePtr,"@@CPrye::startGettingGrabbed by %s, type %d\n" + 2,param_2,param_3);
    pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                       ((CMotionController *)(param_1 + 0x158));
    engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"  current motion is %s\n",pSVar1);
    if ((((*(int *)(param_1 + 0x20b98) == 0) && (*(int *)(param_1 + 0x20b94) == 0)) &&
        (*(int *)(param_1 + 0x20ba0) == 0)) &&
       (((((iVar2 = *(int *)(param_1 + 0x20b64), iVar2 == 0 || (iVar2 == 3)) ||
          ((iVar2 == 7 || ((iVar2 == 10 || (iVar2 == 0xb)))))) || (iVar2 == 0xc)) || (iVar2 == 0xd))
       )) {
      iVar2 = core_hero_cpp_FUN_004d2af0(param_1,param_2,param_3);
      if (iVar2 != 0) {
        if ((*(int *)(param_1 + 0x25b0) != *(int *)(param_1 + 0x20c24)) &&
           (iVar3 = core_actor_cpp_castToClassHash_FUN_0040c840
                              (*(int *)(param_1 + 0x25b0),DAT_007e1a50), iVar3 == 0)) {
          (**(code **)(*(int *)(param_1 + 0x154) + 0x128))(param_1,0,0);
        }
        if (*(int *)(param_1 + 0x20c24) != *(int *)(param_1 + 0x2628)) {
          (**(code **)(*(int *)(param_1 + 0x154) + 0x128))(param_1,1,0);
        }
        *(uint *)(param_1 + 0x20cc8) = 0;
      }
      return iVar2;
    }
  }
  return 0;
}
