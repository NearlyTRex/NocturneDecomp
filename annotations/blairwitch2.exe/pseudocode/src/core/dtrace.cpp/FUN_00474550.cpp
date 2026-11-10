// Name: core_dtrace.cpp_FUN_00474550
// Address: 00474550
// Address Range: [[00474550, 004746a1]]
// Convention: unknown
// Signature: void core_dtrace_cpp_FUN_00474550(CDemonRaytrace *param_1,int *param_2,int param_3,int param_4,int param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dtrace_cpp_FUN_00474550(CDemonRaytrace *param_1,int *param_2,int param_3,int param_4,int param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  CVector3f CStack_34;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  fVar1 = (param_1->cell_size).x;
  fVar2 = (param_1->cell_size).y;
  fVar3 = (param_1->cell_size).z;
  iStack_1c = 0;
  fVar4 = (param_1->bbox_min).x;
  iStack_28 = 0;
  fVar5 = (param_1->bbox_min).y;
  fVar6 = (param_1->bbox_min).z;
  do {
    iVar8 = 0;
    iStack_24 = iStack_28;
    iStack_20 = iStack_28;
    do {
      if ((*param_2 != 0) && (*(char *)(*param_2 + iStack_24) != '\0')) {
        iVar7 = 0;
        iStack_18 = iStack_20;
        do {
          if ((*(byte *)(*param_2 + iStack_18) & (&DAT_00613888)[iVar7]) != 0) {
            CStack_34.x = (float)iVar7 * (param_1->cell_size).x * _DAT_005d1b6f +
                          (float)param_3 * fVar1 + fVar4;
            iStack_14 = iStack_1c;
            CStack_34.y = (float)iVar8 * (param_1->cell_size).y * _DAT_005d1b6f +
                          (float)param_4 * fVar2 + fVar5;
            CStack_34.z = (float)iStack_1c * (param_1->cell_size).z * _DAT_005d1b6f +
                          (float)param_5 * fVar3 + fVar6;
            core_dtrace_cpp_FUN_00474020(param_1,&CStack_34);
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < 8);
      }
      iVar8 = iVar8 + 1;
      iStack_20 = iStack_20 + 1;
      iStack_24 = iStack_24 + 1;
    } while (iVar8 < 8);
    iStack_1c = iStack_1c + 1;
    iStack_28 = iStack_28 + 8;
  } while (iStack_1c < 8);
  return;
}
