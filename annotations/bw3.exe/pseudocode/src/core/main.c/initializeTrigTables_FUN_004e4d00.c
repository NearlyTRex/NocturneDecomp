// Name: core_main.c_initializeTrigTables_FUN_004e4d00
// Address: 004e4d00
// Address Range: [[004e4d00, 004e4d7f]]
// Convention: __cdecl
// Signature: void __cdecl core_main_c_initializeTrigTables_FUN_004e4d00(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_main_c_initializeTrigTables_FUN_004e4d00(void)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  double dVar8;
  
  iVar2 = 0;
  fVar3 = (float10)_DAT_005c6ec2;
  fVar4 = (float10)_DAT_005c6ebe;
  fVar5 = (float10)_DAT_005c6eba;
  iVar1 = 0;
  do {
    fVar6 = (float10)iVar2 * fVar5 * fVar4;
    fVar7 = (float10)fsin(fVar6);
    fVar6 = (float10)fcos(fVar6);
    round((double)(fVar7 * fVar3));
    dVar8 = round((double)(fVar6 * fVar3));
    *(uint *)(iVar1 + 0x1d71e3c) = 0x4e4d48;
    iVar2 = iVar2 + 1;
    *(int *)(iVar1 + 0x1d72240) = (int)ROUND(dVar8);
    iVar1 = iVar1 + 4;
  } while (iVar2 < 0x101);
  return;
}
