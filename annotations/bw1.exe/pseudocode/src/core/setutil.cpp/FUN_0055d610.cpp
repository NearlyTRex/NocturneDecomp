// Name: core_setutil.cpp_FUN_0055d610
// Address: 0055d610
// Address Range: [[0055d610, 0055d6f6]]
// Convention: unknown
// Signature: void core_setutil_cpp_FUN_0055d610(int param_1,int param_2,int param_3,float param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_setutil_cpp_FUN_0055d610(int param_1,int param_2,int param_3,float param_4)

{
  int *piVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_c;
  
  fVar2 = (float10)param_1 * (float10)_DAT_005f147d * (float10)_DAT_005f1481 *
          (float10)_DAT_005f1489;
  iStack_c = param_2;
  fVar3 = (float10)fsin(fVar2);
  fVar2 = (float10)fcos(fVar2);
  fVar4 = (float10)param_4;
  fVar5 = (float10)param_2 * (float10)_DAT_005f1491 * (float10)_DAT_005f1481 *
          (float10)_DAT_005f1499;
  fVar6 = (float10)fcos(fVar5);
  fVar5 = (float10)fsin(fVar5);
  iStack_38 = (int)ROUND((float)(fVar3 * fVar4 * fVar6) * _DAT_00605158);
  iStack_34 = (int)ROUND((float)(fVar5 * fVar4) * _DAT_00605158);
  iStack_30 = (int)ROUND((float)(fVar2 * fVar4 * fVar6) * _DAT_00605158);
  param_3 = param_3 * 0x30;
  engine_special_cpp_FUN_00580173
            ((SProjectedVertex *)(*DAT_00612560 + param_3),(CVector3i *)&iStack_38);
  piVar1 = DAT_00612560;
  *(uint *)(*DAT_00612560 + 0x18 + param_3) = 0x800000;
  *(uint *)(param_3 + 0x1c + *piVar1) = 0x800000;
  return;
}
