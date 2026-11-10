// Name: core_fldnotes.cpp_FUN_004a5200
// Address: 004a5200
// Address Range: [[004a5200, 004a52e8]]
// Convention: unknown
// Signature: undefined4 core_fldnotes_cpp_FUN_004a5200(undefined4 param_1,undefined4 param_2,undefined4 param_3,char *param_4)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004a5233) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_fldnotes_cpp_FUN_004a5200(uint param_1,uint param_2,uint param_3,char *param_4)

{
  int iVar1;
  int iVar2;
  SNotesSection *pSVar3;
  
  iVar2 = 0;
  if (0 < _DAT_01cab9f0) {
    pSVar3 = SNotesSection_ARRAY_01cab9f4;
    do {
      iVar1 = core_fldnotes_cpp_FUN_004a35e0(pSVar3,param_2);
      if (iVar1 != 0) goto LAB_004a5238;
      iVar2 = iVar2 + 1;
      pSVar3 = pSVar3 + 1;
    } while (iVar2 < _DAT_01cab9f0);
  }
  iVar1 = 0;
LAB_004a5238:
  if (iVar1 == 0) {
    _sprintf(param_4,"No such entry '%s'");
    return 0;
  }
  if ((*(int *)(iVar1 + 0x140) != 5) && (*(int *)(iVar1 + 0x140) != 6)) {
    _sprintf(param_4,"'%s' is not a map");
    return 0;
  }
  iVar2 = core_fldnotes_cpp_FUN_004a3b50(SNotesMap_ARRAY_01cacb50 + *(int *)(iVar1 + 0x158),param_3)
  ;
  if (iVar2 != 0) {
    return 1;
  }
  _sprintf(param_4,"No such annotion '%s' found on map '%s'");
  return 0;
}
