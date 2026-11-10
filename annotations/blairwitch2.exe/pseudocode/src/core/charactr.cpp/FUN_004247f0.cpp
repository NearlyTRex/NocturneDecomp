// Name: core_charactr.cpp_FUN_004247f0
// Address: 004247f0
// Address Range: [[004247f0, 00424b4f]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_004247f0(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_charactr_cpp_FUN_004247f0(CDemonActor *param_1)

{
  float fVar1;
  CDemonActor *pCVar2;
  int iVar3;
  CDeformableModel *this_ptr;
  CDemonActor *pCVar4;
  float fVar5;
  uint uVar6;
  
  iVar3 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280);
  if ((iVar3 != 0) || (*(int *)&param_1[0x62].field_0xf0 == -1)) {
    return;
  }
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00547810
                       ((CDeformableModelInstance *)(param_1 + 1));
  if (*(int *)&param_1[0x62].field_0xf0 == -2) {
    iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100(this_ptr,&DAT_005ccca6,0)
    ;
    *(int *)&param_1[0x62].field_0xf0 = iVar3;
    if (iVar3 == -1) {
      return;
    }
    iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100(this_ptr,&DAT_005cccab,0)
    ;
    *(int *)&param_1[0x62].field_0x114 = iVar3;
    if (iVar3 == -1) {
      *(uint *)&param_1[0x62].field_0xf0 = 0xffffffff;
      return;
    }
    iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100(this_ptr,&DAT_005cccae,1)
    ;
    *(int *)&param_1[0x62].field_0x118 = iVar3;
    iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100(this_ptr,&DAT_005cccb1,1)
    ;
    *(int *)&param_1[0x62].field_0x11c = iVar3;
    iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100(this_ptr,&DAT_005cccb4,1)
    ;
    *(int *)&param_1[0x62].field_0x120 = iVar3;
    iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                      (this_ptr,"e1_left",0);
    *(int *)&param_1[0x62].field_0xf4 = iVar3;
    iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                      (this_ptr,"e2_left",0);
    *(int *)&param_1[0x62].field_0xf8 = iVar3;
    iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                      (this_ptr,"e3_left",0);
    *(int *)&param_1[0x62].field_0xfc = iVar3;
    iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                      (this_ptr,"e4_left",0);
    *(int *)&param_1[0x62].field_0x100 = iVar3;
    iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                      (this_ptr,"e1_right",0);
    *(int *)&param_1[0x62].field_0x104 = iVar3;
    iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                      (this_ptr,"e2_right",0);
    *(int *)&param_1[0x62].field_0x108 = iVar3;
    iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                      (this_ptr,"e3_right",0);
    *(int *)&param_1[0x62].field_0x10c = iVar3;
    iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                      (this_ptr,"e4_right",0);
    *(int *)&param_1[0x62].field_0x110 = iVar3;
  }
  pCVar4 = param_1;
  do {
    if (*(int *)&pCVar4[0x62].field_0xf4 != -1) {
      *(uint *)
       ((int)(&param_1[0xd].orient_matrix + 4) + *(int *)&pCVar4[0x62].field_0xf4 * 4 + 4) = 0;
    }
    if (*(int *)&pCVar4[0x62].field_0x104 != -1) {
      *(uint *)
       ((int)(&param_1[0xd].orient_matrix + 4) + *(int *)&pCVar4[0x62].field_0x104 * 4 + 4) = 0;
    }
    pCVar2 = pCVar4 + 0x62;
    pCVar4 = (CDemonActor *)(pCVar4->actor_name + 4);
    *(uint *)((int)(&param_1[0xd].orient_matrix + 4) + *(int *)&pCVar2->field_0x114 * 4 + 4) =
         0;
  } while (pCVar4 != (CDemonActor *)(param_1->actor_name + 0x10));
  fVar1 = (float)_DAT_01c2a370 * _DAT_005cccfe;
  *(float *)&param_1[0x62].field_0xe8 = *(float *)&param_1[0x62].field_0xe8 - fVar1;
  if (*(int *)&param_1[0x62].field_0xe4 == 1) {
    if (*(float *)&param_1[0x62].field_0xe8 <= 0.0) {
      fVar5 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(5.0,8.0);
      *(uint *)&param_1[0x62].field_0xd8 = 0;
      *(uint *)&param_1[0x62].field_0xdc = 0;
      *(uint *)&param_1[0x62].field_0xe4 = 0;
      *(float *)&param_1[0x62].field_0xe8 = fVar5;
    }
  }
  else if (*(float *)&param_1[0x62].field_0xe8 <= 0.0) {
    *(uint *)&param_1[0x62].field_0xdc = 3;
    *(uint *)&param_1[0x62].field_0xe4 = 1;
    *(uint *)&param_1[0x62].field_0xe8 = 0x3d4ccccd;
    *(uint *)&param_1[0x62].field_0xd8 = 3;
  }
  *(float *)&param_1[0x62].field_0xec = *(float *)&param_1[0x62].field_0xec - fVar1;
  if (*(float *)&param_1[0x62].field_0xec <= 0.0) {
    pCVar4 = g_CScriptPtr->who_is_speaking;
    if (param_1 == pCVar4) {
      *(uint *)&pCVar4[0x62].field_0xec = 0x3e19999a;
      uVar6 = rand();
      *(uint *)&pCVar4[0x62].field_0xe0 = uVar6 & 3;
    }
    else {
      *(uint *)&param_1[0x62].field_0xe0 = 0;
      *(uint *)&param_1[0x62].field_0xec = 0;
    }
  }
  if (*(int *)(&param_1[0x62].field_0xf4 + *(int *)&param_1[0x62].field_0xd8 * 4) != -1) {
    core_charactr_cpp_FUN_004246e0
              (this_ptr,*(uint *)&param_1[0x62].field_0xf0,
               *(int *)(&param_1[0x62].field_0xf4 + *(int *)&param_1[0x62].field_0xd8 * 4));
  }
  if (*(int *)(&param_1[0x62].field_0x104 + *(int *)&param_1[0x62].field_0xdc * 4) != -1) {
    core_charactr_cpp_FUN_004246e0
              (this_ptr,*(uint *)&param_1[0x62].field_0xf0,
               *(int *)(&param_1[0x62].field_0x104 + *(int *)&param_1[0x62].field_0xdc * 4));
  }
  core_charactr_cpp_FUN_004246e0
            (this_ptr,*(uint *)&param_1[0x62].field_0xf0,
             *(uint *)(&param_1[0x62].field_0x114 + *(int *)&param_1[0x62].field_0xe0 * 4));
  return;
}
