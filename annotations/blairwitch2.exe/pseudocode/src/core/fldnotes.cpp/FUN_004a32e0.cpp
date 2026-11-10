// Name: core_fldnotes.cpp_FUN_004a32e0
// Address: 004a32e0
// Address Range: [[004a32e0, 004a3514]]
// Convention: unknown
// Signature: undefined4 core_fldnotes_cpp_FUN_004a32e0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_fldnotes_cpp_FUN_004a32e0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  CStrList *this_ptr;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = _DAT_01cab7e8;
  *(uint *)(param_1 + 0x144) = *(uint *)(param_2 + 0x10);
  if ((iVar8 != 0) ||
     (((iVar8 = *(int *)(param_1 + 0x140), iVar8 != 0 && (iVar8 != 2)) && (iVar8 != 5)))) {
    if (*(int *)(param_1 + 0x140) == 3) {
      iVar8 = core_fldnotes_cpp_FUN_004a28b0(param_2,"<image box 32 32>");
      if (iVar8 < 1) {
        return 0;
      }
    }
    else if ((*(int *)(param_1 + 0x140) == 4) &&
            (iVar8 = core_fldnotes_cpp_FUN_004a28b0(param_2,"<image check 32 32>"), iVar8 < 1
            )) {
      return 0;
    }
    if ((-1 < *(int *)(param_1 + 0x158)) &&
       (iVar8 = core_fldnotes_cpp_FUN_004a4070
                          (SNotesMap_ARRAY_01cacb50 + *(int *)(param_1 + 0x158),param_2), iVar8 == 0
       )) {
      return 0;
    }
    iVar2 = param_1 + 0x40;
    iVar6 = -1;
    this_ptr = (CStrList *)(param_1 + 0x148);
    iVar8 = 0;
LAB_004a3356:
    if (iVar8 < this_ptr->item_count) {
      iVar7 = 0;
      pcVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_00481240(this_ptr,iVar8);
      cVar1 = *pcVar3;
      while (cVar1 != '\0') {
        if (iVar6 != *(int *)(param_2 + 0x10)) {
          if (*(char *)(param_1 + 0x40) != '\0') {
            iVar4 = core_fldnotes_cpp_FUN_004a28b0(param_2,&DAT_005d5ce8);
            if (iVar4 < 1) {
              return 0;
            }
            iVar4 = core_fldnotes_cpp_FUN_004a28b0(param_2,iVar2);
            if (iVar4 < 1) {
              return 0;
            }
            if (iVar6 != -1) {
              pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("(cont.)");
              iVar6 = core_fldnotes_cpp_FUN_004a28b0(param_2,pcVar5);
              if (iVar6 < 1) {
                return 0;
              }
            }
            iVar6 = core_fldnotes_cpp_FUN_004a28b0(param_2,"</ul><br>");
            if (iVar6 < 1) {
              return 0;
            }
          }
          iVar6 = *(int *)(param_2 + 0x10);
        }
        iVar4 = core_fldnotes_cpp_FUN_004a28b0(param_2,pcVar3);
        if (iVar4 < 0) {
          return 0;
        }
        if (iVar4 < 1) {
          iVar7 = iVar7 + 1;
          if (1 < iVar7) {
            core_fldnotes_cpp_FUN_004a28b0(param_2,"ERROR: item won't fit<br>");
            iVar8 = iVar8 + 1;
            goto LAB_004a3356;
          }
        }
        else {
          pcVar3 = pcVar3 + iVar4;
        }
        cVar1 = *pcVar3;
      }
      iVar8 = iVar8 + 1;
      goto LAB_004a3356;
    }
    iVar8 = core_fldnotes_cpp_FUN_004a28b0(param_2,&DAT_005d5d19,iVar8,this_ptr,iVar2);
    if (iVar8 < 1) {
      return 0;
    }
    iVar8 = core_fldnotes_cpp_FUN_004a28b0(param_2,&DAT_005d5d1e);
    if (iVar8 < 1) {
      return 0;
    }
  }
  return 1;
}
