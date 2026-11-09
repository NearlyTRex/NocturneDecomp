// Name: core_menu.cpp_FUN_004eacb0
// Address: 004eacb0
// Address Range: [[004eacb0, 004eaded]]
// Convention: __cdecl
// Signature: int __cdecl core_menu_cpp_FUN_004eacb0(EInputCodeType *key_code_ptr,char *description)

#include "nocturne.h"

int __cdecl core_menu_cpp_FUN_004eacb0(EInputCodeType *key_code_ptr,char *description)

{
  int iVar1;
  EInputCodeType EVar2;
  
  iVar1 = *(int *)&g_CGamePtr->field_0xd4;
  if (iVar1 == 0) {
    EVar2 = *key_code_ptr;
    if (EVar2 < DIJ_BUTTON8) {
      if (((EVar2 < DIJ_BUTTON3) && (EVar2 < DIM_RBUTTON)) && (EVar2 != DIM_LBUTTON)) {
        return 0;
      }
    }
    else if (DIJ_BUTTON8 < EVar2) {
      if (EVar2 < DIJ_RIGHT) {
        if ((((DIJ_BUTTON9 < EVar2) && (DIJ_BUTTON10 < EVar2)) && (DIM_MBUTTON < EVar2)) &&
           (EVar2 != DIJ_LEFT)) {
          return 0;
        }
      }
      else if (((DIJ_RIGHT < EVar2) && (DIJ_UP < EVar2)) &&
              ((DIJ_DOWN < EVar2 && ((DIM_XAXIS < EVar2 && (EVar2 != DIM_YAXIS)))))) {
        return 0;
      }
    }
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 == 2) {
        EVar2 = *key_code_ptr;
        if (DIJ_BUTTON10 < EVar2) {
          if (EVar2 < (DIM_MBUTTON|DIK_ESCAPE)) {
            return 1;
          }
          if (EVar2 < DIM_XAXIS) {
            return 0;
          }
          if (EVar2 < DIM_YAXIS) {
            return 1;
          }
          if (EVar2 == DIM_YAXIS) {
            return 1;
          }
          return 0;
        }
        if (0x1ff < EVar2) {
          if (EVar2 < DIM_RBUTTON) {
            return 1;
          }
          if (EVar2 == DIM_RBUTTON) {
            return 1;
          }
        }
      }
      return 0;
    }
    EVar2 = *key_code_ptr;
    if (EVar2 < DIJ_BUTTON7) {
      if (EVar2 < DIJ_BUTTON3) {
        if (EVar2 < DIJ_BUTTON1) {
          return 0;
        }
        return 1;
      }
    }
    else if (DIJ_BUTTON7 < EVar2) {
      if (EVar2 < DIJ_LEFT) {
        if (((DIJ_BUTTON8 < EVar2) && (DIJ_BUTTON9 < EVar2)) && (EVar2 != DIJ_BUTTON10)) {
          return 0;
        }
      }
      else if ((((DIJ_LEFT < EVar2) && (DIJ_RIGHT < EVar2)) && (DIJ_UP < EVar2)) &&
              (EVar2 != DIJ_DOWN)) {
        return 0;
      }
    }
  }
  return 1;
}
