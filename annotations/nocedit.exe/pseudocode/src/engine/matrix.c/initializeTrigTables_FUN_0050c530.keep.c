// Name: engine_matrix.c_initializeTrigTables_FUN_0050c530
// Address: 0050c530
// MANUAL RECONSTRUCTION
// Address Range: [[0050c530, 0050c5af]]
// Convention: __cdecl
// Signature: void __cdecl engine_matrix_c_initializeTrigTables_FUN_0050c530(void)

#include "nocturne.h"

void __cdecl engine_matrix_c_initializeTrigTables_FUN_0050c530(void)

{
  int iVar1;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar1;

  iVar1 = 0;
  fVar3 = (float10)65536;
  fVar4 = (float10)0.0078125;
  fVar5 = (float10)3.1415926535000001;
  do {
    fVar6 = (float10)iVar1 * fVar5 * fVar4;
    fVar7 = (float10)fsin(fVar6);
    fVar1 = (float10)fcos(fVar6);
    g_SinTable[iVar1] = (int)ROUND(ROUND(fVar7 * fVar3));
    g_CosTable[iVar1] = (int)ROUND(ROUND(fVar1 * fVar3));
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x101);
  return;
}
