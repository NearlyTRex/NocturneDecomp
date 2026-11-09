// Name: core_confzomb.cpp_FUN_005a1f40
// Address: 005a1f40
// Address Range: [[005a1f40, 005a2123]]
// Convention: unknown
// Signature: void core_confzomb_cpp_FUN_005a1f40(CCharacter *param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_confzomb_cpp_FUN_005a1f40(CCharacter *param_1)

{
  byte *puVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  byte bVar5;
  float afStackY_1040 [1015];
  uint uStack_58;
  uint uStack_4c;
  uint uStack_40;
  float fStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_28;
  float fStack_24;
  uint uStack_20;
  
  bVar5 = 0;
  iVar4 = core_motion_cpp_FUN_005035c0(&param_1->field_0x2b4);
  if (*(int *)(iVar4 + 0x24) == 2) {
    if (*(float *)&param_1->field_0x2bc < _DAT_005efe5f) {
      core_charactr_cpp_CCharacter_turnTowardPoint_FUN_00423850
                (param_1,(CVector3f *)(*(int *)&param_1[1].field_0x18 + 0x20));
    }
    if (_DAT_005efe63 < *(float *)&param_1->field_0x2bc) {
      *(uint *)&param_1->field_0x2510 = 0;
      *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
      *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
      fVar2 = *(float *)&param_1->field_0x20 - *(float *)(*(int *)&param_1[1].field_0x18 + 0x20);
      fVar3 = *(float *)&param_1->field_0x28 - *(float *)(*(int *)&param_1[1].field_0x18 + 0x28);
      puVar1 = &param_1[1].field_0x98;
      if (SQRT(fVar3 * fVar3 + fVar2 * fVar2) <= _DAT_005fef90) {
        *(uint *)&param_1[1].field_0x934 = _DAT_005fef94;
        unkaddr_0059d350_cpp_FUN_0059d7f0(puVar1,"ChaseComplete","MeleeAttack");
        unkaddr_0059d350_cpp_FUN_0059d8e0(puVar1,"MeleeAttack");
        return;
      }
      *(float *)&param_1[1].field_0x934 = _DAT_005fef90;
      unkaddr_0059d350_cpp_FUN_0059d7f0(puVar1,"ChaseComplete","RangeAttack");
      unkaddr_0059d350_cpp_FUN_0059dcb0(puVar1,0x3dcccccd);
      unkaddr_0059d350_cpp_FUN_0059d8e0(puVar1,"Chasing");
    }
    return;
  }
  core_actor_cpp_FUN_00408de0(param_1,*(int *)&param_1[1].field_0x18 + 0x20);
  uStack_4c = uStack_58;
  *(uint *)((int)&stack0xffffffb8 + (uint)bVar5 * 0xfffffffe * 4) =
       *(uint *)(&stack0xffffffac + (uint)bVar5 * -8);
  *(uint *)(&stack0xffffffbc + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       *(uint *)(&stack0xffffffb0 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  core_vecdir_cpp_FUN_005838f0(&stack0xffffffb4);
  uStack_28 = uStack_34;
  (&stack0xffffffdc)[(uint)bVar5 * 0xfffffffe] =
       (float)*(uint *)((int)&stack0xffffffd0 + (uint)bVar5 * 0xfffffffe * 4);
  *(uint *)((int)&stack0xffffffe0 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       *(uint *)(&stack0xffffffd4 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  if (&stack0xffffffc0 != &stack0xffffffd8) {
    uStack_40 = uStack_28;
    fStack_3c = fStack_24;
    uStack_38 = uStack_20;
  }
  if ((float)_DAT_005efe57 < fStack_3c) {
    *(uint *)&param_1->field_0x2510 = 0;
    *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
    *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
    core_charactr_cpp_CCharacter_turnTowardPoint_FUN_00423850
              (param_1,(CVector3f *)(*(int *)&param_1[1].field_0x18 + 0x20));
    return;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            ((CMotionController *)&param_1->field_0x2b4,2,1);
  return;
}
