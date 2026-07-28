// Name: engine_matrix.c_initializeTrigTables_FUN_004cc9d0
// Address: 004cc9d0
// Address Range: [[004cc9d0, 004cca4f]]
// Convention: __cdecl
// Signature: void __cdecl engine_matrix_c_initializeTrigTables_FUN_004cc9d0(void)

#include "nocturne.h"

void __cdecl engine_matrix_c_initializeTrigTables_FUN_004cc9d0(void)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  double dVar8;
  
  iVar1 = 0;
  fVar3 = (float10)65536;
  fVar4 = (float10)0.0078125;
  fVar5 = (float10)3.1415926535000001;
  iVar2 = 0;
  do {
    fVar6 = (float10)iVar1 * fVar5 * fVar4;
    fVar7 = (float10)fsin(fVar6);
    fVar6 = (float10)fcos(fVar6);
    round((double)(fVar7 * fVar3));
    dVar8 = round((double)(fVar6 * fVar3));
    *(uint *)(iVar2 + 0x1cc4910) = 0x4cca1e;
    iVar1 = iVar1 + 1;
    *(int *)(iVar2 + 0x1cc4d14) = (int)ROUND(dVar8);
    iVar2 = iVar2 + 4;
  } while (iVar1 < 0x101);
  return;
}
