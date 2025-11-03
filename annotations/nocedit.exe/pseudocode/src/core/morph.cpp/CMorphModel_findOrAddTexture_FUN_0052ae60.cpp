// Name: core_morph.cpp_CMorphModel_findOrAddTexture_FUN_0052ae60
// Address: 0052ae60
// Address Range: [[0052ae60, 0052af22]]
// Convention: __cdecl
// Signature: int core_morph.cpp_CMorphModel_findOrAddTexture_FUN_0052ae60(CMorphModel * this_ptr, char * filename)
// Cross-references:
//   core_morph.cpp_CMorphModel_FUN_0052aca0 (0052aca0) at 0052ad69 [UNCONDITIONAL_CALL]
//   core_morph.cpp_CMorphModel_setFaceList_FUN_0052aac0 (0052aac0) at 0052ab77 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_morph_cpp_0063a3a7
//   TerminatedCString s_CMorphModel_findOrAddTex_0063a3b9
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_memory.c_memset_FUN_005fde40
//   crt_string.c_stricmp_FUN_005fe7f0

#include "nocturne.h"

int __cdecl
core_morph_cpp_CMorphModel_findOrAddTexture_FUN_0052ae60(CMorphModel *this_ptr,char *filename)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  iVar3 = 0;
  if (0 < *(int *)(this_ptr->field2_0x58 + 0xc)) {
    pcVar4 = this_ptr->field2_0x58 + 0x18;
    do {
      iVar2 = crt_string_c_stricmp_FUN_005fe7f0(pcVar4,filename);
      if (iVar2 == 0) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
      pcVar4 = pcVar4 + 0x48;
    } while (iVar3 < *(int *)(this_ptr->field2_0x58 + 0xc));
  }
  if (0x13 < *(int *)(this_ptr->field2_0x58 + 0xc)) {
    g_CurrentFilename = "..\\core\\morph.cpp";
    g_CurrentLineNumber = 0x1d0;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMorphModel::findOrAddTexture - too many textures!");
  }
  crt_memory_c_memset_FUN_005fde40
            (this_ptr->field2_0x58 + *(int *)(this_ptr->field2_0x58 + 0xc) * 0x48 + 0x10,0,0x48);
  pcVar4 = this_ptr->field2_0x58 + *(int *)(this_ptr->field2_0x58 + 0xc) * 0x48 + 0x18;
  do {
    cVar1 = *filename;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = filename[1];
    filename = filename + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  iVar3 = *(int *)(this_ptr->field2_0x58 + 0xc);
  *(int *)(this_ptr->field2_0x58 + 0xc) = iVar3 + 1;
  return iVar3;
}


// Assembly code:
// 0052ae60: PUSH EBX
//   Label: core_morph.cpp_CMorphModel_findOrAddTexture_FUN_0052ae60
// 0052ae61: PUSH ESI
// 0052ae62: PUSH EDI
// 0052ae63: PUSH EBP
// 0052ae64: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0052ae68: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0052ae6c: MOV EDX,dword ptr [EBX + 0x64]
// 0052ae6f: XOR ESI,ESI
// 0052ae71: TEST EDX,EDX
// 0052ae73: JLE 0x0052ae95
//   XREF to: 0052ae95 (CONDITIONAL_JUMP)
// 0052ae75: LEA EDI,[EBX + 0x70]
// 0052ae78: PUSH EBP
//   Label: LAB_0052ae78
// 0052ae79: PUSH EDI
// 0052ae7a: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 0052ae7f: ADD ESP,0x8
// 0052ae82: TEST EAX,EAX
// 0052ae84: JZ 0x0052af1c
//   XREF to: 0052af1c (CONDITIONAL_JUMP)
// 0052ae8a: INC ESI
// 0052ae8b: MOV ECX,dword ptr [EBX + 0x64]
// 0052ae8e: ADD EDI,0x48
// 0052ae91: CMP ESI,ECX
// 0052ae93: JL 0x0052ae78
//   XREF to: 0052ae78 (CONDITIONAL_JUMP)
// 0052ae95: CMP dword ptr [EBX + 0x64],0x14
//   Label: LAB_0052ae95
// 0052ae99: JL 0x0052aebd
//   XREF to: 0052aebd (CONDITIONAL_JUMP)
// 0052ae9b: MOV EDI,0x63a3a7
//   XREF to: 0063a3a7 (DATA)
// 0052aea0: MOV EAX,0x1d0
// 0052aea5: PUSH 0x63a3b9
//   XREF to: 0063a3b9 (DATA)
// 0052aeaa: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 0052aeb0: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 0052aeb5: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0052aeba: ADD ESP,0x4
// 0052aebd: MOV ESI,dword ptr [EBX + 0x64]
//   Label: LAB_0052aebd
// 0052aec0: LEA EAX,[ESI*0x8 + 0x0]
// 0052aec7: PUSH 0x48
// 0052aec9: ADD EAX,ESI
// 0052aecb: LEA EDI,[EBX + 0x68]
// 0052aece: SHL EAX,0x3
// 0052aed1: PUSH 0x0
// 0052aed3: ADD EAX,EDI
// 0052aed5: PUSH EAX
// 0052aed6: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 0052aedb: MOV ESI,dword ptr [EBX + 0x64]
// 0052aede: LEA EAX,[ESI*0x8 + 0x0]
// 0052aee5: ADD EAX,ESI
// 0052aee7: SHL EAX,0x3
// 0052aeea: ADD ESP,0xc
// 0052aeed: ADD EDI,EAX
// 0052aeef: MOV ESI,EBP
// 0052aef1: ADD EDI,0x8
// 0052aef4: PUSH EDI
// 0052aef5: MOV AL,byte ptr [ESI]
//   Label: LAB_0052aef5
// 0052aef7: MOV byte ptr [EDI],AL
// 0052aef9: CMP AL,0x0
// 0052aefb: JZ 0x0052af0d
//   XREF to: 0052af0d (CONDITIONAL_JUMP)
// 0052aefd: MOV AL,byte ptr [ESI + 0x1]
// 0052af00: ADD ESI,0x2
// 0052af03: MOV byte ptr [EDI + 0x1],AL
// 0052af06: ADD EDI,0x2
// 0052af09: CMP AL,0x0
// 0052af0b: JNZ 0x0052aef5
//   XREF to: 0052aef5 (CONDITIONAL_JUMP)
// 0052af0d: POP EDI
//   Label: LAB_0052af0d
// 0052af0e: MOV EAX,dword ptr [EBX + 0x64]
// 0052af11: LEA ESI,[EAX + 0x1]
// 0052af14: MOV dword ptr [EBX + 0x64],ESI
// 0052af17: POP EBP
// 0052af18: POP EDI
// 0052af19: POP ESI
// 0052af1a: POP EBX
// 0052af1b: RET
// 0052af1c: MOV EAX,ESI
//   Label: LAB_0052af1c
// 0052af1e: POP EBP
// 0052af1f: POP EDI
// 0052af20: POP ESI
// 0052af21: POP EBX
// 0052af22: RET
