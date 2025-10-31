// Name: core_script.cpp_FUN_00565ae0
// Address: 00565ae0
// Address Range: [[00565ae0, 00565c6c]]
// Convention: unknown
// Signature: undefined core_script.cpp_FUN_00565ae0()
// Cross-references:
//   core_script.cpp_CScript_Unk20_FUN_00565130 (00565130) at 005658a9 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_0310fd44
//   undefined4 DAT_0310fd48
//   undefined1 DAT_031101c0
//   undefined1 DAT_031101c1
//   undefined4 DAT_031101c2
//   undefined4 DAT_031101c3
// Function calls:
//   core_script.cpp_CScript_CallingScriptEditorX2_2_FUN_00566910
//   core_script.cpp_CScript_editorIndex2X_FUN_00566b30
//   core_script.cpp_CScript_editorPutLine_FUN_005662a0
//   core_script.cpp_CScript_editorX2Index_FUN_00566a90
//   core_script.cpp_CScript_Unk18_FUN_005669a0
//   core_script.cpp_FUN_00561c70
//   core_script.cpp_FUN_00562920
//   core_script.cpp_FUN_005644e0
//   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0

#include "nocturne.h"

/* Signature: undefined1 core_script.cpp_FUN_00565ae0(undefined4 param_1, undefined4 param_2,
   undefined4 param_3) */

void core_script_cpp_FUN_00565ae0(void)

{
  char cVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  byte bVar6;
  int in_stack_00000004;
  int in_stack_0000000c;
  char acStack_5d4 [500];
  char acStack_3e0 [500];
  char acStack_1ec [480];
  
  bVar6 = 0;
  if (-1 < in_stack_0000000c) {
    iVar2 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0
                      ((CBitFont *)(in_stack_00000004 + 0x38));
    if (in_stack_0000000c < iVar2) {
      core_script_cpp_CScript_editorX2Index_FUN_00566a90();
      shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                ((CStrList *)(in_stack_00000004 + 0x38),in_stack_0000000c);
      iVar2 = core_script_cpp_FUN_00561c70();
      if (0 < iVar2) {
        iVar2 = core_script_cpp_FUN_00562920();
        if (iVar2 != 0) {
          pcVar3 = acStack_1ec;
          pcVar4 = &DAT_031101c0;
          do {
            cVar1 = *pcVar3;
            *pcVar4 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar3[1];
            pcVar3 = pcVar3 + 2;
            pcVar4[1] = cVar1;
            pcVar4 = pcVar4 + 2;
          } while (cVar1 != '\0');
          pcVar3 = acStack_3e0;
          iVar2 = -1;
          pcVar4 = &DAT_031101c0;
          do {
            pcVar5 = pcVar4;
            if (iVar2 == 0) break;
            iVar2 = iVar2 + -1;
            pcVar5 = pcVar4 + (uint)bVar6 * -2 + 1;
            cVar1 = *pcVar4;
            pcVar4 = pcVar5;
          } while (cVar1 != '\0');
          pcVar5 = pcVar5 + -1;
          do {
            cVar1 = *pcVar3;
            *pcVar5 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar3[1];
            pcVar3 = pcVar3 + 2;
            pcVar5[1] = cVar1;
            pcVar5 = pcVar5 + 2;
          } while (cVar1 != '\0');
          pcVar3 = acStack_5d4;
          iVar2 = -1;
          pcVar4 = &DAT_031101c0;
          do {
            pcVar5 = pcVar4;
            if (iVar2 == 0) break;
            iVar2 = iVar2 + -1;
            pcVar5 = pcVar4 + (uint)bVar6 * -2 + 1;
            cVar1 = *pcVar4;
            pcVar4 = pcVar5;
          } while (cVar1 != '\0');
          pcVar5 = pcVar5 + -1;
          do {
            cVar1 = *pcVar3;
            *pcVar5 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar3[1];
            pcVar3 = pcVar3 + 2;
            pcVar5[1] = cVar1;
            pcVar5 = pcVar5 + 2;
          } while (cVar1 != '\0');
          core_script_cpp_CScript_editorPutLine_FUN_005662a0();
          DAT_0310fd48 = in_stack_0000000c;
          iVar2 = -1;
          pcVar3 = acStack_1ec + 4;
          do {
            if (iVar2 == 0) break;
            iVar2 = iVar2 + -1;
            cVar1 = *pcVar3;
            pcVar3 = pcVar3 + (uint)bVar6 * -2 + 1;
          } while (cVar1 != '\0');
          iVar2 = -1;
          pcVar3 = acStack_3e0 + 4;
          do {
            if (iVar2 == 0) break;
            iVar2 = iVar2 + -1;
            cVar1 = *pcVar3;
            pcVar3 = pcVar3 + (uint)bVar6 * -2 + 1;
          } while (cVar1 != '\0');
          DAT_0310fd44 = core_script_cpp_CScript_editorIndex2X_FUN_00566b30();
          core_script_cpp_FUN_005644e0();
          core_script_cpp_CScript_CallingScriptEditorX2_2_FUN_00566910();
          core_script_cpp_CScript_Unk18_FUN_005669a0();
          return;
        }
      }
    }
  }
  return;
}


// Assembly code:
// 00565ae0: PUSH EBX
//   Label: core_script.cpp_FUN_00565ae0
// 00565ae1: PUSH ESI
// 00565ae2: PUSH EBP
// 00565ae3: SUB ESP,0x2a2c
// 00565ae9: MOV EBX,dword ptr [ESP + 0x2a3c]
//   XREF to: Stack[0x4] (READ)
// 00565af0: MOV EBP,dword ptr [ESP + 0x2a44]
//   XREF to: Stack[0xc] (READ)
// 00565af7: TEST EBP,EBP
// 00565af9: JGE 0x00565b05
//   XREF to: 00565b05 (CONDITIONAL_JUMP)
// 00565afb: ADD ESP,0x2a2c
//   Label: LAB_00565afb
// 00565b01: POP EBP
// 00565b02: POP ESI
// 00565b03: POP EBX
// 00565b04: RET
// 00565b05: LEA ESI,[EBX + 0x38]
//   Label: LAB_00565b05
// 00565b08: PUSH ESI
// 00565b09: CALL shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0
//   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)
// 00565b0e: ADD ESP,0x4
// 00565b11: CMP EBP,EAX
// 00565b13: JGE 0x00565afb
//   XREF to: 00565afb (CONDITIONAL_JUMP)
// 00565b15: MOV EDX,dword ptr [ESP + 0x2a40]
//   XREF to: Stack[0x8] (READ)
// 00565b1c: PUSH EDX
// 00565b1d: PUSH EBP
// 00565b1e: PUSH EBX
// 00565b1f: CALL core_script.cpp_CScript_editorX2Index_FUN_00566a90
//   XREF to: 00566a90 (UNCONDITIONAL_CALL)
// 00565b24: ADD ESP,0xc
// 00565b27: MOV ECX,ESP
// 00565b29: PUSH ECX
// 00565b2a: LEA ECX,[ESP + 0x212c]
//   XREF to: Stack[-0x910] (DATA)
// 00565b31: PUSH ECX
// 00565b32: PUSH EAX
// 00565b33: LEA EAX,[ESP + 0x245c]
//   XREF to: Stack[-0x5e8] (DATA)
// 00565b3a: PUSH EAX
// 00565b3b: LEA EAX,[ESP + 0x2654]
//   XREF to: Stack[-0x3f4] (DATA)
// 00565b42: PUSH EAX
// 00565b43: LEA EAX,[ESP + 0x284c]
//   XREF to: Stack[-0x200] (DATA)
// 00565b4a: PUSH EAX
// 00565b4b: PUSH EBP
// 00565b4c: PUSH ESI
// 00565b4d: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 00565b52: ADD ESP,0x8
// 00565b55: PUSH EAX
// 00565b56: CALL core_script.cpp_FUN_00561c70
//   XREF to: 00561c70 (UNCONDITIONAL_CALL)
// 00565b5b: ADD ESP,0x1c
// 00565b5e: TEST EAX,EAX
// 00565b60: JLE 0x00565afb
//   XREF to: 00565afb (CONDITIONAL_JUMP)
// 00565b62: MOV ECX,ESP
// 00565b64: PUSH ECX
// 00565b65: LEA ECX,[ESP + 0x212c]
//   XREF to: Stack[-0x910] (DATA)
// 00565b6c: PUSH ECX
// 00565b6d: PUSH EAX
// 00565b6e: LEA EAX,[ESP + 0x2650]
//   XREF to: Stack[-0x3f4] (DATA)
// 00565b75: PUSH EAX
// 00565b76: CALL core_script.cpp_FUN_00562920
//   XREF to: 00562920 (UNCONDITIONAL_CALL)
// 00565b7b: ADD ESP,0x10
// 00565b7e: TEST EAX,EAX
// 00565b80: JZ 0x00565afb
//   XREF to: 00565afb (CONDITIONAL_JUMP)
// 00565b86: PUSH EDI
// 00565b87: LEA ESI,[ESP + 0x283c]
//   XREF to: Stack[-0x200] (DATA)
// 00565b8e: MOV EDI,0x31101c0
//   XREF to: 031101c0 (DATA)
// 00565b93: PUSH EDI
//   XREF to: 031101c0 (DATA)
// 00565b94: MOV AL,byte ptr [ESI]
//   Label: LAB_00565b94
//   XREF to: Stack[-0x200] (DATA)
// 00565b96: MOV byte ptr [EDI],AL
//   XREF to: 031101c0 (WRITE)
//   XREF to: 031101c2 (WRITE)
// 00565b98: CMP AL,0x0
// 00565b9a: JZ 0x00565bac
//   XREF to: 00565bac (CONDITIONAL_JUMP)
// 00565b9c: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x1ff] (READ)
// 00565b9f: ADD ESI,0x2
// 00565ba2: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 031101c1 (WRITE)
//   XREF to: 031101c3 (WRITE)
// 00565ba5: ADD EDI,0x2
// 00565ba8: CMP AL,0x0
// 00565baa: JNZ 0x00565b94
//   XREF to: 00565b94 (CONDITIONAL_JUMP)
// 00565bac: POP EDI
//   Label: LAB_00565bac
// 00565bad: LEA ESI,[ESP + 0x2648]
//   XREF to: Stack[-0x3f4] (DATA)
// 00565bb4: PUSH EDI
//   XREF to: 031101c0 (DATA)
// 00565bb5: SUB ECX,ECX
// 00565bb7: DEC ECX
// 00565bb8: MOV AL,0x0
// 00565bba: SCASB.REPNE ES:EDI
//   XREF to: 031101c0 (READ)
//   XREF to: 031101c1 (READ)
// 00565bbc: DEC EDI
// 00565bbd: MOV AL,byte ptr [ESI]
//   Label: LAB_00565bbd
//   XREF to: Stack[-0x3f4] (DATA)
// 00565bbf: MOV byte ptr [EDI],AL
//   XREF to: 031101c0 (WRITE)
//   XREF to: 031101c1 (WRITE)
//   XREF to: 031101c2 (WRITE)
// 00565bc1: CMP AL,0x0
// 00565bc3: JZ 0x00565bd5
//   XREF to: 00565bd5 (CONDITIONAL_JUMP)
// 00565bc5: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x3f3] (READ)
// 00565bc8: ADD ESI,0x2
// 00565bcb: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 031101c1 (WRITE)
//   XREF to: 031101c2 (WRITE)
//   XREF to: 031101c3 (WRITE)
// 00565bce: ADD EDI,0x2
// 00565bd1: CMP AL,0x0
// 00565bd3: JNZ 0x00565bbd
//   XREF to: 00565bbd (CONDITIONAL_JUMP)
// 00565bd5: POP EDI
//   Label: LAB_00565bd5
// 00565bd6: LEA ESI,[ESP + 0x2454]
//   XREF to: Stack[-0x5e8] (DATA)
// 00565bdd: PUSH EDI
//   XREF to: 031101c0 (DATA)
// 00565bde: SUB ECX,ECX
// 00565be0: DEC ECX
// 00565be1: MOV AL,0x0
// 00565be3: SCASB.REPNE ES:EDI
//   XREF to: 031101c0 (READ)
//   XREF to: 031101c1 (READ)
// 00565be5: DEC EDI
// 00565be6: MOV AL,byte ptr [ESI]
//   Label: LAB_00565be6
//   XREF to: Stack[-0x5e8] (DATA)
// 00565be8: MOV byte ptr [EDI],AL
//   XREF to: 031101c0 (WRITE)
//   XREF to: 031101c1 (WRITE)
//   XREF to: 031101c2 (WRITE)
// 00565bea: CMP AL,0x0
// 00565bec: JZ 0x00565bfe
//   XREF to: 00565bfe (CONDITIONAL_JUMP)
// 00565bee: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x5e7] (READ)
// 00565bf1: ADD ESI,0x2
// 00565bf4: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 031101c1 (WRITE)
//   XREF to: 031101c2 (WRITE)
//   XREF to: 031101c3 (WRITE)
// 00565bf7: ADD EDI,0x2
// 00565bfa: CMP AL,0x0
// 00565bfc: JNZ 0x00565be6
//   XREF to: 00565be6 (CONDITIONAL_JUMP)
// 00565bfe: POP EDI
//   Label: LAB_00565bfe
// 00565bff: PUSH EBP
// 00565c00: PUSH EBX
// 00565c01: CALL core_script.cpp_CScript_editorPutLine_FUN_005662a0
//   XREF to: 005662a0 (UNCONDITIONAL_CALL)
// 00565c06: ADD ESP,0x8
// 00565c09: LEA EDI,[ESP + 0x283c]
//   XREF to: Stack[-0x200] (DATA)
// 00565c10: MOV dword ptr [0x0310fd48],EBP
//   XREF to: 0310fd48 (WRITE)
// 00565c16: SUB ECX,ECX
// 00565c18: DEC ECX
// 00565c19: XOR EAX,EAX
// 00565c1b: SCASB.REPNE ES:EDI
// 00565c1d: NOT ECX
// 00565c1f: DEC ECX
// 00565c20: LEA EDI,[ESP + 0x2648]
//   XREF to: Stack[-0x3f4] (DATA)
// 00565c27: MOV ESI,ECX
// 00565c29: SUB ECX,ECX
// 00565c2b: DEC ECX
// 00565c2c: XOR EAX,EAX
// 00565c2e: SCASB.REPNE ES:EDI
// 00565c30: NOT ECX
// 00565c32: DEC ECX
// 00565c33: ADD ECX,ESI
// 00565c35: PUSH ECX
// 00565c36: MOV ECX,dword ptr [0x0310fd48]
//   XREF to: 0310fd48 (READ)
// 00565c3c: PUSH ECX
// 00565c3d: PUSH EBX
// 00565c3e: CALL core_script.cpp_CScript_editorIndex2X_FUN_00566b30
//   XREF to: 00566b30 (UNCONDITIONAL_CALL)
// 00565c43: ADD ESP,0xc
// 00565c46: MOV [0x0310fd44],EAX
//   XREF to: 0310fd44 (WRITE)
// 00565c4b: CALL core_script.cpp_FUN_005644e0
//   XREF to: 005644e0 (UNCONDITIONAL_CALL)
// 00565c50: PUSH EBX
// 00565c51: CALL core_script.cpp_CScript_CallingScriptEditorX2_2_FUN_00566910
//   XREF to: 00566910 (UNCONDITIONAL_CALL)
// 00565c56: ADD ESP,0x4
// 00565c59: PUSH EBX
// 00565c5a: CALL core_script.cpp_CScript_Unk18_FUN_005669a0
//   XREF to: 005669a0 (UNCONDITIONAL_CALL)
// 00565c5f: ADD ESP,0x4
// 00565c62: POP EDI
// 00565c63: ADD ESP,0x2a2c
// 00565c69: POP EBP
// 00565c6a: POP ESI
// 00565c6b: POP EBX
// 00565c6c: RET
