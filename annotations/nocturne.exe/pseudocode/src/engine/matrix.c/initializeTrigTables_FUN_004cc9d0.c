// Name: engine_matrix.c_initializeTrigTables_FUN_004cc9d0
// Address: 004cc9d0
// Address Range: [[004cc9d0, 004cca4f]]
// Convention: __cdecl
// Signature: undefined8 __cdecl engine_matrix_c_initializeTrigTables_FUN_004cc9d0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong __cdecl engine_matrix_c_initializeTrigTables_FUN_004cc9d0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  
  iVar1 = 0;
  fVar4 = (float10)_DAT_005881d3;
  fVar5 = (float10)_DAT_005881cb;
  fVar6 = (float10)_DAT_005881c3;
  iVar2 = 0;
  do {
    fVar7 = (float10)iVar1 * fVar6 * fVar5;
    fVar8 = (float10)fsin(fVar7);
    fVar7 = (float10)fcos(fVar7);
    iVar3 = iVar2 + 4;
    round(fVar8 * fVar4);
    fVar7 = (float10)round(fVar7 * fVar4);
    *(uint *)(iVar2 + 0x1cc4910) = 0x4cca1e;
    iVar1 = iVar1 + 1;
    *(int *)(iVar2 + 0x1cc4d14) = (int)ROUND(fVar7);
    iVar2 = iVar3;
  } while (iVar1 < 0x101);
  return CONCAT44(iVar3,(int)ROUND(fVar7));
}
