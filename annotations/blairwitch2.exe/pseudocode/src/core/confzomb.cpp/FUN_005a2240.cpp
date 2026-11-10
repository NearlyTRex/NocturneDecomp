// Name: core_confzomb.cpp_FUN_005a2240
// Address: 005a2240
// Address Range: [[005a2240, 005a249e]]
// Convention: unknown
// Signature: void core_confzomb_cpp_FUN_005a2240(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_confzomb_cpp_FUN_005a2240(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  CClothList *this_ptr;
  byte bVar5;
  float afStackY_102c [1014];
  CVector3f *wind_velocity;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  CVector3f CStack_2c;
  float fStack_20;
  float afStack_1c [4];
  
  bVar5 = 0;
  unkafter_superopt_cpp_FUN_005a8180(param_1 + 0x264,param_2);
  iVar3 = unkaddr_0059d350_cpp_FUN_0059daa0(param_1 + 0x10af8,&DAT_005efe97);
  if (iVar3 != 0) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)(param_1 + 0x2b4),8,1);
  }
  iVar3 = param_1 + 0x10af8;
  iVar4 = unkaddr_0059d350_cpp_FUN_0059daa0(iVar3,&DAT_005efe9c);
  if (((((iVar4 != 0) ||
        (iVar4 = unkaddr_0059d350_cpp_FUN_0059daa0(iVar3,"Chasing"), iVar4 != 0)) ||
       (iVar4 = unkaddr_0059d350_cpp_FUN_0059daa0(iVar3,"MeleeAttack"), iVar4 != 0)) ||
      (iVar3 = unkaddr_0059d350_cpp_FUN_0059daa0(iVar3,"RangeAttack"), iVar3 != 0)) &&
     ((*(int *)(param_1 + 0x113b8) == 0 && ((*(uint *)(param_1 + 0x113c4) & 0x7fffffff) == 0)))) {
    unkafter_basicene_cpp_FUN_005a01a0(param_1,*(uint *)(param_1 + 0x113c4),0x3f800000,0x3f000000);
    unkafter_basicene_cpp_FUN_0059f570(param_1);
  }
  iVar3 = param_1 + 0x10af8;
  iVar4 = unkaddr_0059d350_cpp_FUN_0059daa0(iVar3,"Death");
  if (((iVar4 == 0) &&
      (iVar4 = unkaddr_0059d350_cpp_FUN_0059daa0(iVar3,"Animation"), iVar4 == 0)) &&
     (iVar3 = unkaddr_0059d350_cpp_FUN_0059daa0(iVar3,&DAT_005efed1), iVar3 == 0)) {
    (**(code **)(*(int *)(param_1 + 0x2b0) + 0x17c))(param_1);
  }
  if (*(int *)(param_1 + 0x10a78) != 0) {
    iVar3 = param_1 + 0x10af8;
    iVar4 = unkaddr_0059d350_cpp_FUN_0059daa0(iVar3,"Chasing");
    if (((iVar4 != 0) &&
        (iVar4 = unkaddr_0059d350_cpp_FUN_0059dae0
                           (iVar3,"ChaseComplete","MeleeAttack"), iVar4 != 0)) &&
       (fVar1 = *(float *)(*(int *)(param_1 + 0x10a78) + 0x20) - *(float *)(param_1 + 0x20),
       fVar2 = *(float *)(*(int *)(param_1 + 0x10a78) + 0x28) - *(float *)(param_1 + 0x28),
       SQRT(fVar2 * fVar2 + fVar1 * fVar1) < _DAT_005fef90)) {
      *(float *)(param_1 + 0x11394) = _DAT_005fef90;
      unkaddr_0059d350_cpp_FUN_0059d7f0(iVar3,"ChaseComplete","RangeAttack");
    }
  }
  fStack_38 = *(float *)(param_1 + 0x11354) * _DAT_005eff13;
  fStack_34 = *(float *)(param_1 + 0x11358) * _DAT_005eff13;
  fStack_30 = *(float *)(param_1 + 0x1135c) * _DAT_005eff13;
  fStack_44 = fStack_38;
  *(uint *)((int)&stack0xffffffc0 + (uint)bVar5 * -8) =
       *(uint *)((int)&stack0xffffffcc + (uint)bVar5 * -8);
  *(uint *)((int)&stack0xffffffc4 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       *(uint *)((int)&stack0xffffffd0 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  wind_velocity = &CStack_2c;
  this_ptr = (CClothList *)(param_1 + 0x2d0c);
  fStack_20 = fStack_44 * param_2;
  afStack_1c[0] = fStack_40 * param_2;
  afStack_1c[1] = fStack_3c * param_2;
  CStack_2c.x = fStack_44 * param_2;
  *(float *)((int)&CStack_2c + (uint)bVar5 * -8 + 4) = afStack_1c[(uint)bVar5 * -2];
  *(float *)((int)&CStack_2c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
       afStack_1c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  core_cloth_cpp_CClothList_setWindVelocity_FUN_005b1890(this_ptr,wind_velocity);
  return;
}
