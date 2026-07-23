// Name: engine_matrix.c_initializeTrigTables_FUN_004cc9d0
// Address: 004cc9d0
// Address Range: [[004cc9d0, 004cca4f]]
// Convention: __cdecl
// Signature: undefined8 __cdecl engine_matrix_c_initializeTrigTables_FUN_004cc9d0(void)

#include "nocturne.h"

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
  fVar4 = (float10)65536;
  fVar5 = (float10)0.0078125;
  fVar6 = (float10)3.1415926535000001;
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
