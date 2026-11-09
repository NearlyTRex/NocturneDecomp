// Name: core_charactr.cpp_FUN_004333e0
// Address: 004333e0
// Address Range: [[004333e0, 00433571]]
// Convention: unknown
// Signature: undefined4 core_charactr_cpp_FUN_004333e0(CCharacter *param_1,float param_2,char *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_charactr_cpp_FUN_004333e0(CCharacter *param_1,float param_2,char *param_3)

{
  float fVar1;
  uint uVar2;
  CPathMap *path_map;
  int iVar3;
  CVector3f *direction;
  float fVar4;
  uint uVar5;
  float fVar6;
  
  if ((param_3 == (char *)0x0) || (*param_3 == '\0')) {
    *(uint *)&param_1->field_0x2780 = 0;
    *(uint *)&param_1->field_0x2784 = 0;
    *(uint *)&param_1->field_0x277c = 0;
    return 0;
  }
  param_2 = *(float *)&param_1->field_0x2784 - param_2;
  *(float *)&param_1->field_0x2784 = param_2;
  if (0.0 < param_2) goto LAB_004334b3;
  iVar3 = *(int *)&param_1->field_0x277c;
  if ((iVar3 == 0) ||
     (fVar4 = *(float *)(iVar3 + 0x20) - *(float *)&param_1->field_0x20,
     fVar1 = *(float *)(iVar3 + 0x24) - *(float *)&param_1->field_0x24,
     fVar6 = *(float *)(iVar3 + 0x28) - *(float *)&param_1->field_0x28,
     (float)_DAT_005b8746 <= SQRT(fVar6 * fVar6 + fVar1 * fVar1 + fVar4 * fVar4))) {
    if (*(int *)&param_1->field_0x2780 == 0) goto LAB_00433466;
    if (*(int *)&param_1->field_0x277c == 0) goto LAB_00433470;
    uVar2 = core_charactr_cpp_FUN_004349d0(param_1,*(int *)&param_1->field_0x277c);
  }
  else {
    *(uint *)&param_1->field_0x2780 = 0;
LAB_00433466:
    *(uint *)&param_1->field_0x277c = 0;
LAB_00433470:
    uVar2 = core_charactr_cpp_FUN_004348b0(param_1,param_3);
    *(uint *)&param_1->field_0x277c = uVar2;
  }
  *(uint *)&param_1->field_0x2780 = uVar2;
  if (*(int *)&param_1->field_0x2780 == 0) {
    uVar5 = 0x41200000;
    uVar2 = 0x40800000;
  }
  else {
    uVar5 = 0x40000000;
    uVar2 = 0x3f800000;
  }
  uVar2 = core_actor_cpp_FUN_0040ce40(uVar2,uVar5);
  *(uint *)&param_1->field_0x2784 = uVar2;
LAB_004334b3:
  iVar3 = *(int *)&param_1->field_0x2780;
  if (iVar3 == 0) {
    return 0;
  }
  fVar6 = 0.0;
  fVar4 = 0.0;
  direction = (CVector3f *)&DAT_02cfd900;
  path_map = (CPathMap *)(**(code **)(*(int *)(iVar3 + 0x154) + 0xc4))(iVar3);
  iVar3 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                    (param_1,(CVector3f *)(*(int *)&param_1->field_0x2780 + 0x20),path_map,direction
                     ,fVar4,fVar6);
  if (iVar3 != 0) {
    if (iVar3 < 0) {
      *(uint *)&param_1->field_0x2780 = 0;
      return 0;
    }
    return 0;
  }
  return 1;
}
