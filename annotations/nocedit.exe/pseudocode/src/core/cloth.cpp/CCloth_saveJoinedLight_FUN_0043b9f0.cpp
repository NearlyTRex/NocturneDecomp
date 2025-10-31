// Name: core_cloth.cpp_CCloth_saveJoinedLight_FUN_0043b9f0
// Address: 0043b9f0
// Address Range: [[0043b9f0, 0043bad4]]
// Convention: __cdecl
// Signature: int core_cloth.cpp_CCloth_saveJoinedLight_FUN_0043b9f0(CCloth * this_ptr)
// Cross-references:
//   core_cloth.cpp_MultipleCallSaveJoinedLight_FUN_0043c320 (0043c320) at 0043c346 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 s_..\core\cloth.cpp_006184ca
//   TerminatedCString s_CCloth_saveJoinedLight_C_006184dc
//   TerminatedCString s_core_cloth_cpp_00618516
//   TerminatedCString s_CCloth_saveJoinedLight_M_00618528
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer g_CDemonRendererInstance
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

int __cdecl core_cloth_cpp_CCloth_saveJoinedLight_FUN_0043b9f0(CCloth *this_ptr)

{
  int iVar1;
  CDemonRenderer *pCVar2;
  CCloth *pCVar3;
  CCloth *pCVar4;
  char *pcVar5;
  int iVar6;
  int in_stack_00000008;
  
  if (in_stack_00000008 == 0) {
    g_CurrentFilename = "?..\\core\\cloth.cpp" + 1;
    g_CurrentLineNumber = 0x4e3;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CCloth::saveJoinedLight - Can't save light with no model!");
  }
  iVar1 = *(int *)(in_stack_00000008 + 0x2230);
  if (iVar1 < 0) {
    g_CurrentFilename = "..\\core\\cloth.cpp";
    g_CurrentLineNumber = 0x4e8;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CCloth::saveJoinedLight - Model wasn't drawn");
  }
  pCVar4 = *(CCloth **)(this_ptr->padding_0x0 + 0x3f028);
  iVar6 = 0;
  if (0 < (int)pCVar4) {
    pcVar5 = this_ptr->padding_0x0 + iVar1 * 400;
    pCVar3 = this_ptr;
    do {
      pCVar2 = g_CDemonRendererPtr;
      iVar1 = *(int *)(pcVar5 + 0x3f1bc);
      *(float *)(pCVar3->padding_0x0 + 0x3f98c) =
           g_CDemonRendererPtr->vertex_buffer_ptr[iVar1].light;
      *(int *)(pCVar3->padding_0x0 + 0x3fb1c) = pCVar2->vertex_buffer_ptr[iVar1].color;
      pCVar4 = (CCloth *)(pCVar3->padding_0x0 + 4);
      *(float *)(pCVar3->padding_0x0 + 0x3fcac) = pCVar2->vertex_buffer_ptr[iVar1].fog;
      iVar6 = iVar6 + 1;
      pcVar5 = pcVar5 + 4;
      pCVar3 = pCVar4;
    } while (iVar6 < *(int *)(this_ptr->padding_0x0 + 0x3f028));
  }
  return (int)pCVar4;
}


// Assembly code:
// 0043b9f0: PUSH EBX
//   Label: core_cloth.cpp_CCloth_saveJoinedLight_FUN_0043b9f0
// 0043b9f1: PUSH ESI
// 0043b9f2: PUSH EDI
// 0043b9f3: PUSH EBP
// 0043b9f4: MOV EBP,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0043b9f8: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0043b9fc: TEST EDI,EDI
// 0043b9fe: JZ 0x0043ba85
//   XREF to: 0043ba85 (CONDITIONAL_JUMP)
// 0043ba04: MOV EDI,dword ptr [EDI + 0x2230]
//   Label: LAB_0043ba04
// 0043ba0a: TEST EDI,EDI
// 0043ba0c: JL 0x0043baad
//   XREF to: 0043baad (CONDITIONAL_JUMP)
// 0043ba12: MOV EAX,dword ptr [EBP + 0x3f028]
//   Label: LAB_0043ba12
// 0043ba18: XOR ESI,ESI
// 0043ba1a: TEST EAX,EAX
// 0043ba1c: JLE 0x0043ba80
//   XREF to: 0043ba80 (CONDITIONAL_JUMP)
// 0043ba1e: LEA EAX,[EDI*0x4 + 0x0]
// 0043ba25: SUB EAX,EDI
// 0043ba27: SHL EAX,0x3
// 0043ba2a: ADD EAX,EDI
// 0043ba2c: SHL EAX,0x4
// 0043ba2f: LEA EBX,[EAX + EBP*0x1]
// 0043ba32: MOV EAX,EBP
// 0043ba34: MOV ECX,dword ptr [EBX + 0x3f1bc]
//   Label: LAB_0043ba34
// 0043ba3a: IMUL ECX,ECX,0x30
// 0043ba3d: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0043ba43: MOV EDI,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 0043ba45: MOV EDI,dword ptr [ECX + EDI*0x1 + 0x20]
// 0043ba49: MOV dword ptr [EAX + 0x3f98c],EDI
// 0043ba4f: MOV EDI,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 0043ba51: MOV EDI,dword ptr [ECX + EDI*0x1 + 0x24]
// 0043ba55: MOV dword ptr [EAX + 0x3fb1c],EDI
// 0043ba5b: MOV EDX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 0043ba5d: ADD EAX,0x4
// 0043ba60: MOV EDX,dword ptr [ECX + EDX*0x1 + 0x28]
// 0043ba64: MOV dword ptr [EAX + 0x3fca8],EDX
// 0043ba6a: INC ESI
// 0043ba6b: MOV EDX,dword ptr [EBP + 0x3f028]
// 0043ba71: ADD EBX,0x4
// 0043ba74: CMP ESI,EDX
// 0043ba76: JL 0x0043ba34
//   XREF to: 0043ba34 (CONDITIONAL_JUMP)
// 0043ba78: LEA EAX,[EAX]
// 0043ba7e: MOV EDX,EDX
// 0043ba80: POP EBP
//   Label: LAB_0043ba80
// 0043ba81: POP EDI
// 0043ba82: POP ESI
// 0043ba83: POP EBX
// 0043ba84: RET
// 0043ba85: MOV EDX,0x6184ca
//   Label: LAB_0043ba85
//   XREF to: 006184ca (PARAM)
// 0043ba8a: MOV ECX,0x4e3
// 0043ba8f: PUSH 0x6184dc
//   XREF to: 006184dc (DATA)
// 0043ba94: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 0043ba9a: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 0043baa0: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0043baa5: ADD ESP,0x4
// 0043baa8: JMP 0x0043ba04
//   XREF to: 0043ba04 (UNCONDITIONAL_JUMP)
// 0043baad: MOV EBX,0x618516
//   Label: LAB_0043baad
//   XREF to: 00618516 (PARAM)
// 0043bab2: MOV ESI,0x4e8
// 0043bab7: PUSH 0x618528
//   XREF to: 00618528 (DATA)
// 0043babc: MOV dword ptr [0x02f0ca48],EBX
//   XREF to: 02f0ca48 (WRITE)
// 0043bac2: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 0043bac8: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0043bacd: ADD ESP,0x4
// 0043bad0: JMP 0x0043ba12
//   XREF to: 0043ba12 (UNCONDITIONAL_JUMP)
