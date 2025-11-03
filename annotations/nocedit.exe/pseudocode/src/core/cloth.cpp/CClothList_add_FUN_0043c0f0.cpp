// Name: core_cloth.cpp_CClothList_add_FUN_0043c0f0
// Address: 0043c0f0
// Address Range: [[0043c0f0, 0043c164]]
// Convention: __cdecl
// Signature: void core_cloth.cpp_CClothList_add_FUN_0043c0f0(CClothList * this_ptr)
// Cross-references:
//   core_actor.cpp_CActorProperty_editInteractive_FUN_0040eed0 (0040eed0) at 0040fd67 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_ctor_FUN_005bb120 (005bb120) at 005bb497 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_cloth_cpp_006185de
//   TerminatedCString s_CClothList_add_list_is_f_006185f0
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

void __cdecl core_cloth_cpp_CClothList_add_FUN_0043c0f0(CClothList *this_ptr)

{
  CClothList CVar1;
  CClothList *pCVar2;
  CClothList *in_stack_0000000c;
  
  if (9 < *(int *)this_ptr) {
    g_CurrentFilename = "..\\core\\cloth.cpp";
    g_CurrentLineNumber = 0x5d1;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CClothList::add - list is full");
  }
  pCVar2 = this_ptr + *(int *)this_ptr * 0x28 + 4;
  do {
    CVar1 = *in_stack_0000000c;
    *pCVar2 = CVar1;
    if (CVar1 == (CClothList)0x0) break;
    CVar1 = in_stack_0000000c[1];
    in_stack_0000000c = in_stack_0000000c + 2;
    pCVar2[1] = CVar1;
    pCVar2 = pCVar2 + 2;
  } while (CVar1 != (CClothList)0x0);
  *(undefined4 *)(this_ptr + *(int *)this_ptr * 4 + 0x194) = 0;
  *(int *)this_ptr = *(int *)this_ptr + 1;
  return;
}


// Assembly code:
// 0043c0f0: PUSH EBX
//   Label: core_cloth.cpp_CClothList_add_FUN_0043c0f0
// 0043c0f1: PUSH ESI
// 0043c0f2: PUSH EDI
// 0043c0f3: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0043c0f7: CMP dword ptr [EBX],0xa
// 0043c0fa: JGE 0x0043c140
//   XREF to: 0043c140 (CONDITIONAL_JUMP)
// 0043c0fc: MOV EDX,dword ptr [EBX]
//   Label: LAB_0043c0fc
// 0043c0fe: LEA EAX,[EDX*0x4 + 0x0]
// 0043c105: ADD EAX,EDX
// 0043c107: LEA EDI,[EBX + 0x4]
// 0043c10a: SHL EAX,0x3
// 0043c10d: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0043c111: ADD EDI,EAX
// 0043c113: PUSH EDI
// 0043c114: MOV AL,byte ptr [ESI]
//   Label: LAB_0043c114
// 0043c116: MOV byte ptr [EDI],AL
// 0043c118: CMP AL,0x0
// 0043c11a: JZ 0x0043c12c
//   XREF to: 0043c12c (CONDITIONAL_JUMP)
// 0043c11c: MOV AL,byte ptr [ESI + 0x1]
// 0043c11f: ADD ESI,0x2
// 0043c122: MOV byte ptr [EDI + 0x1],AL
// 0043c125: ADD EDI,0x2
// 0043c128: CMP AL,0x0
// 0043c12a: JNZ 0x0043c114
//   XREF to: 0043c114 (CONDITIONAL_JUMP)
// 0043c12c: POP EDI
//   Label: LAB_0043c12c
// 0043c12d: MOV EAX,dword ptr [EBX]
// 0043c12f: MOV dword ptr [EBX + EAX*0x4 + 0x194],0x0
// 0043c13a: INC dword ptr [EBX]
// 0043c13c: POP EDI
// 0043c13d: POP ESI
// 0043c13e: POP EBX
// 0043c13f: RET
// 0043c140: MOV ECX,0x6185de
//   Label: LAB_0043c140
//   XREF to: 006185de (PARAM)
// 0043c145: MOV ESI,0x5d1
// 0043c14a: PUSH 0x6185f0
//   XREF to: 006185f0 (DATA)
// 0043c14f: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0043c155: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 0043c15b: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0043c160: ADD ESP,0x4
// 0043c163: JMP 0x0043c0fc
//   XREF to: 0043c0fc (UNCONDITIONAL_JUMP)
