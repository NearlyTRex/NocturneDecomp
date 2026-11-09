// Name: core_dog1.cpp_FUN_005abfa0
// Address: 005abfa0
// Address Range: [[005abfa0, 005ac0be]]
// Convention: unknown
// Signature: void core_dog1_cpp_FUN_005abfa0(CCharacter *param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dog1_cpp_FUN_005abfa0(CCharacter *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  byte bVar4;
  float afStackY_1030 [1015];
  uint uStack_48;
  uint uStack_3c;
  uint uStack_30;
  float fStack_2c;
  uint uStack_24;
  float fStack_20;
  float fStack_14;
  
  bVar4 = 0;
  iVar3 = (**(code **)(*(int *)&param_1->field_0x2b0 + 0x17c))(param_1);
  if (iVar3 == 0) {
    return;
  }
  core_charactr_cpp_CCharacter_turnTowardPoint_FUN_00423850
            (param_1,(CVector3f *)(*(int *)&param_1[1].field_0x18 + 0x20));
  fVar1 = *(float *)&param_1->field_0x20 - *(float *)(*(int *)&param_1[1].field_0x18 + 0x20);
  fVar2 = *(float *)&param_1->field_0x28 - *(float *)(*(int *)&param_1[1].field_0x18 + 0x28);
  fStack_14 = SQRT(fVar2 * fVar2 + fVar1 * fVar1);
  core_motion_cpp_FUN_005035c0(&param_1->field_0x2b4);
  if (_DAT_00600c4c < fStack_14) {
    core_actor_cpp_FUN_00408de0(param_1,*(int *)&param_1[1].field_0x18 + 0x20);
    uStack_30 = uStack_48;
    (&stack0xffffffd4)[(uint)bVar4 * 0xfffffffe] =
         (float)*(uint *)(&stack0xffffffbc + (uint)bVar4 * -8);
    *(uint *)(&stack0xffffffd8 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
         *(uint *)(&stack0xffffffc0 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
    fStack_2c = 0.0;
    core_vecdir_cpp_FUN_005838f0(&stack0xffffffd0);
    uStack_24 = uStack_3c;
    *(uint *)((int)&stack0xffffffe0 + (uint)bVar4 * -8) =
         *(uint *)(&stack0xffffffc8 + (uint)bVar4 * -8);
    *(uint *)(&stack0xffffffe4 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
         *(uint *)(&stack0xffffffcc + (uint)bVar4 * -8 + (uint)bVar4 * -8);
    if (ABS(fStack_20) < (float)_DAT_005f0da6) {
      unkaddr_0059d350_cpp_FUN_0059d8e0(&param_1[1].field_0x98,"LeapAttack");
      return;
    }
    *(float *)&param_1[1].field_0x934 = _DAT_00600c4c;
    unkaddr_0059d350_cpp_FUN_0059d8e0(&param_1[1].field_0x98,"Chasing");
    return;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            ((CMotionController *)&param_1->field_0x2b4,4,1);
  return;
}
