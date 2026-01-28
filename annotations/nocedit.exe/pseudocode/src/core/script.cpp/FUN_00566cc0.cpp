// Name: core_script.cpp_FUN_00566cc0
// Address: 00566cc0
// Address Range: [[00566cc0, 00566f90]]
// Convention: unknown
// Signature: undefined4 core_script_cpp_FUN_00566cc0(void)

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
  uint uVar6;
  int count;
  CBitFont *pCVar7;
  char *pcVar8;
  byte bVar9;
  int in_stack_00000004;
  char *in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  uint *in_stack_00000014;
  int *in_stack_00000018;
  uint *in_stack_0000001c;
  int in_stack_00000020;
  int local_20;
  int local_1c;
  
  bVar9 = 0;
  if (in_stack_00000008 != (char *)0x0) {
    uVar6 = 0xffffffff;
    pcVar4 = in_stack_00000008;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    count = ~uVar6 - 1;
    if ((0 < count) &&
       (iVar2 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0
                          ((CBitFont *)(in_stack_00000004 + 0x38)), 0 < iVar2)) {
      if (in_stack_0000000c < 0) {
        in_stack_00000010 = in_stack_00000010 + -1;
      }
      if (in_stack_00000010 < 0) {
        if (in_stack_00000020 < 0) {
          in_stack_00000010 =
               shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0
                         ((CBitFont *)(in_stack_00000004 + 0x38));
          in_stack_00000010 = in_stack_00000010 + -1;
        }
        else {
          in_stack_00000010 = 0;
        }
      }
      iVar2 = core_script_cpp_CScript_editorX2Index_FUN_00566a90();
      pCVar7 = (CBitFont *)(in_stack_00000004 + 0x38);
      if (in_stack_00000020 < 1) {
        iVar3 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0(pCVar7);
        if (iVar3 <= in_stack_00000010) {
          in_stack_00000010 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0(pCVar7);
          in_stack_00000010 = in_stack_00000010 + -1;
          iVar2 = 9999;
        }
        pCVar7 = (CBitFont *)(in_stack_00000004 + 0x38);
        for (local_20 = 0; iVar3 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0(pCVar7),
            local_20 < iVar3 + 2; local_20 = local_20 + 1) {
          if (in_stack_00000010 < 0) {
            in_stack_00000010 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0(pCVar7);
            in_stack_00000010 = in_stack_00000010 + -1;
          }
          pcVar4 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                             ((CStrList *)pCVar7,in_stack_00000010);
          uVar6 = 0xffffffff;
          pcVar8 = pcVar4;
          do {
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            cVar1 = *pcVar8;
            pcVar8 = pcVar8 + (uint)bVar9 * -2 + 1;
          } while (cVar1 != '\0');
          iVar3 = (~uVar6 - 1) - count;
          if (iVar3 < iVar2) {
            iVar2 = iVar3;
          }
          pcVar4 = pcVar4 + iVar2;
          for (; 0 < iVar2; iVar2 = iVar2 + -1) {
            iVar3 = crt_string_c_strnicmp_FUN_005ff070(pcVar4,in_stack_00000008,count);
            if (iVar3 == 0) {
              uVar5 = core_script_cpp_CScript_editorIndex2X_FUN_00566b30();
              *in_stack_00000014 = uVar5;
              uVar5 = core_script_cpp_CScript_editorIndex2X_FUN_00566b30();
              *in_stack_0000001c = uVar5;
              *in_stack_00000018 = in_stack_00000010;
              return 1;
            }
            pcVar4 = pcVar4 + -1;
          }
          iVar2 = 9999;
          in_stack_00000010 = in_stack_00000010 + -1;
        }
      }
      else {
        for (local_1c = 0; iVar3 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0(pCVar7),
            local_1c < iVar3 + 2; local_1c = local_1c + 1) {
          iVar3 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0(pCVar7);
          if (iVar3 <= in_stack_00000010) {
            iVar2 = 0;
            in_stack_00000010 = 0;
          }
          pcVar4 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                             ((CStrList *)pCVar7,in_stack_00000010);
          uVar6 = 0xffffffff;
          pcVar8 = pcVar4;
          do {
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            cVar1 = *pcVar8;
            pcVar8 = pcVar8 + (uint)bVar9 * -2 + 1;
          } while (cVar1 != '\0');
          pcVar4 = pcVar4 + iVar2;
          for (iVar2 = iVar2 + count; iVar2 <= (int)(~uVar6 - 1); iVar2 = iVar2 + 1) {
            iVar3 = crt_string_c_strnicmp_FUN_005ff070(pcVar4,in_stack_00000008,count);
            if (iVar3 == 0) {
              uVar5 = core_script_cpp_CScript_editorIndex2X_FUN_00566b30();
              *in_stack_00000014 = uVar5;
              uVar5 = core_script_cpp_CScript_editorIndex2X_FUN_00566b30();
              *in_stack_0000001c = uVar5;
              *in_stack_00000018 = in_stack_00000010;
              return 1;
            }
            pcVar4 = pcVar4 + 1;
          }
          iVar2 = 0;
          in_stack_00000010 = in_stack_00000010 + 1;
        }
      }
    }
  }
  return 0;
}
