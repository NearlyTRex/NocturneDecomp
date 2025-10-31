// Name: core_script.cpp_FUN_00566cc0
// Address: 00566cc0
// Address Range: [[00566cc0, 00566f90]]
// Convention: unknown
// Signature: undefined core_script.cpp_FUN_00566cc0()
// Cross-references:
//   core_script.cpp_CScript_Unk20_FUN_00565130 (00565130) at 005655d7 [UNCONDITIONAL_CALL]
// Function calls:
//   core_script.cpp_CScript_editorIndex2X_FUN_00566b30
//   core_script.cpp_CScript_editorX2Index_FUN_00566a90
//   crt_string.c_strnicmp_FUN_005ff070
//   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0

#include "nocturne.h"

/* Signature: undefined1 core_script.cpp_FUN_00566cc0(undefined4 param_1, undefined4 param_2,
   undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4
   param_7, undefined4 param_8) */

undefined4 core_script_cpp_FUN_00566cc0(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
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
  undefined4 *in_stack_00000030;
  undefined4 *in_stack_00000034;
  undefined4 *in_stack_00000038;
  undefined4 *in_stack_0000003c;
  undefined4 *in_stack_00000040;
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


// Assembly code:
// 00566cc0: PUSH EBX
//   Label: core_script.cpp_FUN_00566cc0
// 00566cc1: PUSH ESI
// 00566cc2: PUSH EDI
// 00566cc3: PUSH EBP
// 00566cc4: SUB ESP,0x18
// 00566cc7: MOV EBX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0xc] (READ)
// 00566ccb: MOV EDX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x8] (READ)
// 00566ccf: TEST EDX,EDX
// 00566cd1: JNZ 0x00566cdd
//   XREF to: 00566cdd (CONDITIONAL_JUMP)
// 00566cd3: XOR EAX,EAX
//   Label: LAB_00566cd3
// 00566cd5: ADD ESP,0x18
// 00566cd8: POP EBP
// 00566cd9: POP EDI
// 00566cda: POP ESI
// 00566cdb: POP EBX
// 00566cdc: RET
// 00566cdd: MOV EDI,EDX
//   Label: LAB_00566cdd
// 00566cdf: SUB ECX,ECX
// 00566ce1: DEC ECX
// 00566ce2: XOR EAX,EAX
// 00566ce4: SCASB.REPNE ES:EDI
// 00566ce6: NOT ECX
// 00566ce8: DEC ECX
// 00566ce9: MOV EBP,ECX
// 00566ceb: CMP ECX,0x1
// 00566cee: JL 0x00566cd3
//   XREF to: 00566cd3 (CONDITIONAL_JUMP)
// 00566cf0: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 00566cf4: ADD EAX,0x38
// 00566cf7: PUSH EAX
// 00566cf8: CALL shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0
//   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)
// 00566cfd: ADD ESP,0x4
// 00566d00: CMP EAX,0x1
// 00566d03: JL 0x00566cd3
//   XREF to: 00566cd3 (CONDITIONAL_JUMP)
// 00566d05: TEST EBX,EBX
// 00566d07: JL 0x00566df5
//   XREF to: 00566df5 (CONDITIONAL_JUMP)
// 00566d0d: CMP dword ptr [ESP + 0x38],0x0
//   Label: LAB_00566d0d
//   XREF to: Stack[0x10] (READ)
// 00566d12: JGE 0x00566d27
//   XREF to: 00566d27 (CONDITIONAL_JUMP)
// 00566d14: CMP dword ptr [ESP + 0x48],0x0
//   XREF to: Stack[0x20] (READ)
// 00566d19: JL 0x00566e08
//   XREF to: 00566e08 (CONDITIONAL_JUMP)
// 00566d1f: XOR EAX,EAX
// 00566d21: XOR EBX,EBX
// 00566d23: MOV dword ptr [ESP + 0x38],EAX
//   Label: LAB_00566d23
//   XREF to: Stack[0x10] (WRITE)
// 00566d27: PUSH EBX
//   Label: LAB_00566d27
// 00566d28: MOV EDX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x10] (READ)
// 00566d2c: PUSH EDX
// 00566d2d: MOV ECX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x4] (READ)
// 00566d31: PUSH ECX
// 00566d32: CALL core_script.cpp_CScript_editorX2Index_FUN_00566a90
//   XREF to: 00566a90 (UNCONDITIONAL_CALL)
// 00566d37: ADD ESP,0xc
// 00566d3a: MOV EBX,EAX
// 00566d3c: MOV ESI,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 00566d40: MOV EDI,dword ptr [ESP + 0x48]
//   XREF to: Stack[0x20] (READ)
// 00566d44: ADD ESI,0x38
// 00566d47: TEST EDI,EDI
// 00566d49: JLE 0x00566e68
//   XREF to: 00566e68 (CONDITIONAL_JUMP)
// 00566d4f: MOV dword ptr [ESP],ESI
//   XREF to: Stack[-0x28] (DATA)
// 00566d52: XOR EDI,EDI
// 00566d54: MOV dword ptr [ESP + 0x4],ESI
//   XREF to: Stack[-0x24] (WRITE)
// 00566d58: MOV dword ptr [ESP + 0xc],EDI
//   XREF to: Stack[-0x1c] (WRITE)
// 00566d5c: MOV ESI,dword ptr [ESP + 0x4]
//   Label: LAB_00566d5c
//   XREF to: Stack[-0x24] (READ)
// 00566d60: PUSH ESI
// 00566d61: CALL shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0
//   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)
// 00566d66: ADD ESP,0x4
// 00566d69: ADD EAX,0x2
// 00566d6c: CMP EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00566d70: JLE 0x00566cd3
//   XREF to: 00566cd3 (CONDITIONAL_JUMP)
// 00566d76: PUSH ESI
// 00566d77: CALL shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0
//   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)
// 00566d7c: ADD ESP,0x4
// 00566d7f: CMP EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x10] (READ)
// 00566d83: JG 0x00566d8d
//   XREF to: 00566d8d (CONDITIONAL_JUMP)
// 00566d85: XOR ECX,ECX
// 00566d87: XOR EBX,EBX
// 00566d89: MOV dword ptr [ESP + 0x38],ECX
//   XREF to: Stack[0x10] (WRITE)
// 00566d8d: MOV ESI,dword ptr [ESP + 0x38]
//   Label: LAB_00566d8d
//   XREF to: Stack[0x10] (READ)
// 00566d91: PUSH ESI
// 00566d92: MOV EDI,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x28] (READ)
// 00566d96: PUSH EDI
// 00566d97: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 00566d9c: ADD ESP,0x8
// 00566d9f: MOV EDI,EAX
// 00566da1: MOV EDX,EAX
// 00566da3: SUB ECX,ECX
// 00566da5: DEC ECX
// 00566da6: XOR EAX,EAX
// 00566da8: SCASB.REPNE ES:EDI
// 00566daa: NOT ECX
// 00566dac: DEC ECX
// 00566dad: MOV dword ptr [ESP + 0x14],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 00566db1: LEA EAX,[EBX + EBP*0x1]
// 00566db4: MOV EDI,EDX
// 00566db6: MOV ESI,EAX
// 00566db8: ADD EDI,EBX
// 00566dba: CMP EAX,ECX
// 00566dbc: JG 0x00566ddc
//   XREF to: 00566ddc (CONDITIONAL_JUMP)
// 00566dbe: PUSH EBP
//   Label: LAB_00566dbe
// 00566dbf: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x8] (READ)
// 00566dc3: PUSH EAX
// 00566dc4: PUSH EDI
// 00566dc5: CALL crt_string.c_strnicmp_FUN_005ff070
//   XREF to: 005ff070 (UNCONDITIONAL_CALL)
// 00566dca: ADD ESP,0xc
// 00566dcd: TEST EAX,EAX
// 00566dcf: JZ 0x00566e23
//   XREF to: 00566e23 (CONDITIONAL_JUMP)
// 00566dd1: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x14] (READ)
// 00566dd5: INC ESI
// 00566dd6: INC EDI
// 00566dd7: INC EBX
// 00566dd8: CMP ESI,EAX
// 00566dda: JLE 0x00566dbe
//   XREF to: 00566dbe (CONDITIONAL_JUMP)
// 00566ddc: MOV EDX,dword ptr [ESP + 0x38]
//   Label: LAB_00566ddc
//   XREF to: Stack[0x10] (READ)
// 00566de0: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00566de4: XOR EBX,EBX
// 00566de6: INC EDX
// 00566de7: INC ECX
// 00566de8: MOV dword ptr [ESP + 0x38],EDX
//   XREF to: Stack[0x10] (WRITE)
// 00566dec: MOV dword ptr [ESP + 0xc],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 00566df0: JMP 0x00566d5c
//   XREF to: 00566d5c (UNCONDITIONAL_JUMP)
// 00566df5: MOV ECX,dword ptr [ESP + 0x38]
//   Label: LAB_00566df5
//   XREF to: Stack[0x10] (READ)
// 00566df9: DEC ECX
// 00566dfa: MOV EBX,0x270f
// 00566dff: MOV dword ptr [ESP + 0x38],ECX
//   XREF to: Stack[0x10] (WRITE)
// 00566e03: JMP 0x00566d0d
//   XREF to: 00566d0d (UNCONDITIONAL_JUMP)
// 00566e08: MOV EAX,dword ptr [ESP + 0x2c]
//   Label: LAB_00566e08
//   XREF to: Stack[0x4] (READ)
// 00566e0c: ADD EAX,0x38
// 00566e0f: PUSH EAX
// 00566e10: CALL shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0
//   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)
// 00566e15: ADD ESP,0x4
// 00566e18: DEC EAX
// 00566e19: MOV EBX,0x270f
// 00566e1e: JMP 0x00566d23
//   XREF to: 00566d23 (UNCONDITIONAL_JUMP)
// 00566e23: PUSH EBX
//   Label: LAB_00566e23
// 00566e24: MOV EDX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x10] (READ)
// 00566e28: PUSH EDX
// 00566e29: MOV ECX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x4] (READ)
// 00566e2d: PUSH ECX
// 00566e2e: CALL core_script.cpp_CScript_editorIndex2X_FUN_00566b30
//   XREF to: 00566b30 (UNCONDITIONAL_CALL)
// 00566e33: ADD ESP,0xc
// 00566e36: PUSH ESI
// 00566e37: MOV EBX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x10] (READ)
// 00566e3b: PUSH EBX
// 00566e3c: MOV ESI,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x4] (READ)
// 00566e40: MOV EDX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x14] (READ)
// 00566e44: PUSH ESI
// 00566e45: MOV dword ptr [EDX],EAX
// 00566e47: CALL core_script.cpp_CScript_editorIndex2X_FUN_00566b30
//   XREF to: 00566b30 (UNCONDITIONAL_CALL)
// 00566e4c: ADD ESP,0xc
// 00566e4f: MOV EDX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x1c] (READ)
// 00566e53: MOV dword ptr [EDX],EAX
// 00566e55: MOV EDX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x18] (READ)
// 00566e59: MOV EAX,0x1
// 00566e5e: MOV dword ptr [EDX],EBX
// 00566e60: ADD ESP,0x18
// 00566e63: POP EBP
// 00566e64: POP EDI
// 00566e65: POP ESI
// 00566e66: POP EBX
// 00566e67: RET
// 00566e68: PUSH ESI
//   Label: LAB_00566e68
// 00566e69: CALL shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0
//   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)
// 00566e6e: ADD ESP,0x4
// 00566e71: CMP EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x10] (READ)
// 00566e75: JLE 0x00566ef7
//   XREF to: 00566ef7 (CONDITIONAL_JUMP)
// 00566e7b: MOV EAX,dword ptr [ESP + 0x2c]
//   Label: LAB_00566e7b
//   XREF to: Stack[0x4] (READ)
// 00566e7f: XOR ECX,ECX
// 00566e81: ADD EAX,0x38
// 00566e84: MOV dword ptr [ESP + 0x8],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 00566e88: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00566e8c: MOV EAX,dword ptr [ESP + 0x10]
//   Label: LAB_00566e8c
//   XREF to: Stack[-0x18] (READ)
// 00566e90: PUSH EAX
// 00566e91: CALL shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0
//   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)
// 00566e96: ADD ESP,0x4
// 00566e99: ADD EAX,0x2
// 00566e9c: CMP EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (READ)
// 00566ea0: JLE 0x00566cd3
//   XREF to: 00566cd3 (CONDITIONAL_JUMP)
// 00566ea6: CMP dword ptr [ESP + 0x38],0x0
//   XREF to: Stack[0x10] (READ)
// 00566eab: JL 0x00566f2b
//   XREF to: 00566f2b (CONDITIONAL_JUMP)
// 00566eb1: MOV EDI,dword ptr [ESP + 0x38]
//   Label: LAB_00566eb1
//   XREF to: Stack[0x10] (READ)
// 00566eb5: PUSH EDI
// 00566eb6: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x18] (READ)
// 00566eba: PUSH EAX
// 00566ebb: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 00566ec0: ADD ESP,0x8
// 00566ec3: MOV EDI,EAX
// 00566ec5: MOV EDX,EAX
// 00566ec7: SUB ECX,ECX
// 00566ec9: DEC ECX
// 00566eca: XOR EAX,EAX
// 00566ecc: SCASB.REPNE ES:EDI
// 00566ece: NOT ECX
// 00566ed0: DEC ECX
// 00566ed1: MOV EAX,ECX
// 00566ed3: SUB EAX,EBP
// 00566ed5: CMP EBX,EAX
// 00566ed7: JG 0x00566f42
//   XREF to: 00566f42 (CONDITIONAL_JUMP)
// 00566ed9: MOV EDI,dword ptr [ESP + 0x30]
//   Label: LAB_00566ed9
//   XREF to: Stack[0x8] (READ)
// 00566edd: LEA ESI,[EBX + EDX*0x1]
// 00566ee0: TEST EBX,EBX
//   Label: LAB_00566ee0
// 00566ee2: JLE 0x00566f0f
//   XREF to: 00566f0f (CONDITIONAL_JUMP)
// 00566ee4: PUSH EBP
// 00566ee5: PUSH EDI
// 00566ee6: PUSH ESI
// 00566ee7: CALL crt_string.c_strnicmp_FUN_005ff070
//   XREF to: 005ff070 (UNCONDITIONAL_CALL)
// 00566eec: ADD ESP,0xc
// 00566eef: TEST EAX,EAX
// 00566ef1: JZ 0x00566f46
//   XREF to: 00566f46 (CONDITIONAL_JUMP)
// 00566ef3: DEC EBX
// 00566ef4: DEC ESI
// 00566ef5: JMP 0x00566ee0
//   XREF to: 00566ee0 (UNCONDITIONAL_JUMP)
// 00566ef7: PUSH ESI
//   Label: LAB_00566ef7
// 00566ef8: CALL shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0
//   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)
// 00566efd: ADD ESP,0x4
// 00566f00: DEC EAX
// 00566f01: MOV EBX,0x270f
// 00566f06: MOV dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[0x10] (WRITE)
// 00566f0a: JMP 0x00566e7b
//   XREF to: 00566e7b (UNCONDITIONAL_JUMP)
// 00566f0f: MOV EDX,dword ptr [ESP + 0x38]
//   Label: LAB_00566f0f
//   XREF to: Stack[0x10] (READ)
// 00566f13: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (READ)
// 00566f17: MOV EBX,0x270f
// 00566f1c: DEC EDX
// 00566f1d: INC ECX
// 00566f1e: MOV dword ptr [ESP + 0x38],EDX
//   XREF to: Stack[0x10] (WRITE)
// 00566f22: MOV dword ptr [ESP + 0x8],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 00566f26: JMP 0x00566e8c
//   XREF to: 00566e8c (UNCONDITIONAL_JUMP)
// 00566f2b: MOV ESI,dword ptr [ESP + 0x10]
//   Label: LAB_00566f2b
//   XREF to: Stack[-0x18] (READ)
// 00566f2f: PUSH ESI
// 00566f30: CALL shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0
//   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)
// 00566f35: ADD ESP,0x4
// 00566f38: DEC EAX
// 00566f39: MOV dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[0x10] (WRITE)
// 00566f3d: JMP 0x00566eb1
//   XREF to: 00566eb1 (UNCONDITIONAL_JUMP)
// 00566f42: MOV EBX,EAX
//   Label: LAB_00566f42
// 00566f44: JMP 0x00566ed9
//   XREF to: 00566ed9 (UNCONDITIONAL_JUMP)
// 00566f46: PUSH EBX
//   Label: LAB_00566f46
// 00566f47: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x10] (READ)
// 00566f4b: PUSH EAX
// 00566f4c: MOV EDX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x4] (READ)
// 00566f50: PUSH EDX
// 00566f51: CALL core_script.cpp_CScript_editorIndex2X_FUN_00566b30
//   XREF to: 00566b30 (UNCONDITIONAL_CALL)
// 00566f56: ADD ESP,0xc
// 00566f59: ADD EBX,EBP
// 00566f5b: PUSH EBX
// 00566f5c: MOV ECX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x10] (READ)
// 00566f60: PUSH ECX
// 00566f61: MOV EBX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x4] (READ)
// 00566f65: MOV EDX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x14] (READ)
// 00566f69: PUSH EBX
// 00566f6a: MOV dword ptr [EDX],EAX
// 00566f6c: CALL core_script.cpp_CScript_editorIndex2X_FUN_00566b30
//   XREF to: 00566b30 (UNCONDITIONAL_CALL)
// 00566f71: ADD ESP,0xc
// 00566f74: MOV EDX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x1c] (READ)
// 00566f78: MOV dword ptr [EDX],EAX
// 00566f7a: MOV EDX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x18] (READ)
// 00566f7e: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x10] (READ)
// 00566f82: MOV dword ptr [EDX],EAX
// 00566f84: MOV EAX,0x1
// 00566f89: ADD ESP,0x18
// 00566f8c: POP EBP
// 00566f8d: POP EDI
// 00566f8e: POP ESI
// 00566f8f: POP EBX
// 00566f90: RET
