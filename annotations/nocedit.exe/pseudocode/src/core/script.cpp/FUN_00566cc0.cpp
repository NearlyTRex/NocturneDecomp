// Name: core_script.cpp_FUN_00566cc0
// Address: 00566cc0
// Address Range: [[00566cc0, 00566f90]]
// Convention: unknown
// Signature: undefined core_script.cpp_FUN_00566cc0()

#include "nocturne.h"

/* Signature: byte core_script.cpp_FUN_00566cc0(uint param_1, uint param_2,
   uint param_3, uint param_4, uint param_5, uint param_6, uint
   param_7, uint param_8) */

uint core_script_cpp_FUN_00566cc0(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  CStrList *count;
  int unaff_ESI;
  CBitFont *font_ptr;
  int unaff_EDI;
  byte bVar8;
  CBitFont *unaff_retaddr;
  CStrList *in_stack_00000004;
  char *in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  int in_stack_00000018;
  CBitFont *in_stack_00000020;
  CBitFont *in_stack_00000024;
  char *in_stack_00000028;
  int in_stack_0000002c;
  uint *in_stack_00000030;
  uint *in_stack_00000034;
  uint *in_stack_00000038;
  uint *in_stack_0000003c;
  uint *in_stack_00000040;
  CStrList *in_stack_ffffffec;
  
  bVar8 = 0;
  if (in_stack_00000008 != (char *)0x0) {
    uVar7 = 0xffffffff;
    pcVar6 = in_stack_00000008;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    count = (CStrList *)(~uVar7 - 1);
    if ((0 < (int)count) &&
       (iVar2 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0
                          ((CBitFont *)&in_stack_00000004[3].data_array), 0 < iVar2)) {
      if (in_stack_0000000c < 0) {
        in_stack_00000014 = in_stack_00000014 + -1;
      }
      if (in_stack_00000014 < 0) {
        if ((int)in_stack_00000024 < 0) {
          in_stack_00000018 =
               shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0
                         ((CBitFont *)(in_stack_00000008 + 0x38));
          in_stack_00000018 = in_stack_00000018 + -1;
        }
        else {
          in_stack_00000018 = 0;
        }
      }
      iVar2 = core_script_cpp_CScript_editorX2Index_FUN_00566a90();
      font_ptr = (CBitFont *)(in_stack_00000010 + 0x38);
      if (in_stack_0000002c < 1) {
        iVar3 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0(font_ptr);
        if (iVar3 <= (int)in_stack_00000020) {
          shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0(font_ptr);
          iVar2 = 9999;
        }
        while (iVar3 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0
                                 ((CBitFont *)(in_stack_00000018 + 0x38)), unaff_ESI < iVar3 + 2) {
          if ((int)in_stack_00000028 < 0) {
            in_stack_0000002c = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0(unaff_retaddr);
            in_stack_0000002c = in_stack_0000002c + -1;
          }
          pcVar6 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                             (in_stack_00000004,in_stack_0000002c);
          uVar7 = 0xffffffff;
          pcVar4 = pcVar6;
          do {
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1;
            cVar1 = *pcVar4;
            pcVar4 = pcVar4 + (uint)bVar8 * -2 + 1;
          } while (cVar1 != '\0');
          iVar3 = (~uVar7 - 1) - (int)count;
          if (iVar3 < iVar2) {
            iVar2 = iVar3;
          }
          pcVar6 = pcVar6 + iVar2;
          for (; 0 < iVar2; iVar2 = iVar2 + -1) {
            iVar3 = crt_string_c_strnicmp_FUN_005ff070(pcVar6,in_stack_00000028,(int)count);
            if (iVar3 == 0) {
              uVar5 = core_script_cpp_CScript_editorIndex2X_FUN_00566b30();
              *in_stack_00000030 = uVar5;
              uVar5 = core_script_cpp_CScript_editorIndex2X_FUN_00566b30();
              *in_stack_0000003c = uVar5;
              *in_stack_00000038 = in_stack_00000030;
              return 1;
            }
            pcVar6 = pcVar6 + -1;
          }
          iVar2 = 9999;
        }
      }
      else {
        while (iVar3 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0(font_ptr),
              unaff_EDI < iVar3 + 2) {
          iVar3 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0(font_ptr);
          if (iVar3 <= (int)in_stack_00000024) {
            iVar2 = 0;
            in_stack_00000024 = (CBitFont *)0x0;
          }
          font_ptr = in_stack_00000024;
          pcVar4 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                             (in_stack_ffffffec,(int)in_stack_00000024);
          uVar7 = 0xffffffff;
          pcVar6 = pcVar4;
          do {
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1;
            cVar1 = *pcVar6;
            pcVar6 = pcVar6 + (uint)bVar8 * -2 + 1;
          } while (cVar1 != '\0');
          iVar3 = (int)&count->item_count + iVar2;
          pcVar4 = pcVar4 + iVar2;
          if (iVar3 <= (int)(~uVar7 - 1)) {
            do {
              font_ptr = in_stack_00000020;
              in_stack_ffffffec = count;
              iVar2 = crt_string_c_strnicmp_FUN_005ff070
                                (pcVar4,(char *)in_stack_00000020,(int)count);
              if (iVar2 == 0) {
                uVar5 = core_script_cpp_CScript_editorIndex2X_FUN_00566b30();
                *in_stack_00000034 = uVar5;
                uVar5 = core_script_cpp_CScript_editorIndex2X_FUN_00566b30();
                *in_stack_00000040 = uVar5;
                *in_stack_0000003c = in_stack_00000030;
                return 1;
              }
              iVar3 = iVar3 + 1;
              pcVar4 = pcVar4 + 1;
            } while (iVar3 <= (int)in_stack_00000008);
          }
          iVar2 = 0;
        }
      }
    }
  }
  return 0;
}
