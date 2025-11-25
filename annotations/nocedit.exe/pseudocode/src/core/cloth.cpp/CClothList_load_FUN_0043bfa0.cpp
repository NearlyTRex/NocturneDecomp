// Name: core_cloth.cpp_CClothList_load_FUN_0043bfa0
// Address: 0043bfa0
// Address Range: [[0043bfa0, 0043c06e]]
// Convention: __cdecl
// Signature: void core_cloth.cpp_CClothList_load_FUN_0043bfa0(CClothList * this_ptr)
// Cross-references:
//   core_succubus.cpp_CSuccubus_FUN_005c6b60 (005c6b60) at 005c6bd2 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_cloth_cpp_00618562
//   TerminatedCString s_core_cloth_cpp_00618574
//   TerminatedCString s_core_cloth_cpp_00618586
//   TerminatedCString s_CClothList_load_out_of_m_00618598
//   char* g_CurrentDebugFilename = 0067d200
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   int g_CurrentDebugLine
// Function calls:
//   core_cloth.cpp_CallToUnknownSomethingFreeMem_FUN_00438c00
//   core_cloth.cpp_CCloth_load_FUN_00438cf0
//   core_cloth.cpp_FUN_00438ba0
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

void __cdecl core_cloth_cpp_CClothList_load_FUN_0043bfa0(CClothList *this_ptr)

{
  CClothList *pCVar1;
  void *pvVar2;
  CClothList *pCVar3;
  int iVar4;
  CClothList *filename;
  
  iVar4 = 0;
  if (0 < *(int *)this_ptr) {
    filename = this_ptr + 4;
    pCVar3 = this_ptr;
    do {
      g_CurrentDebugLine = 0x5a7;
      g_CurrentDebugFilename = "..\\core\\cloth.cpp";
      if (*(int *)(pCVar3 + 0x194) != 0) {
        pvVar2 = (void *)core_cloth_cpp_CallToUnknownSomethingFreeMem_FUN_00438c00();
        shape_memdbg_cpp_debugFree_FUN_0050f210(pvVar2);
      }
      pvVar2 = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x3fe70,"..\\core\\cloth.cpp",0x5a8);
      if (pvVar2 != (void *)0x0) {
        pvVar2 = (void *)core_cloth_cpp_FUN_00438ba0();
      }
      *(void **)(pCVar3 + 0x194) = pvVar2;
      if (pvVar2 == (void *)0x0) {
        g_CurrentFilename = "..\\core\\cloth.cpp";
        g_CurrentLineNumber = 0x5a9;
        core_main_c_displayErrorAndQuit_FUN_00506f10("CClothList::load - out of memory for CCloth object.");
      }
      pCVar1 = pCVar3 + 0x194;
      pCVar3 = pCVar3 + 4;
      iVar4 = iVar4 + 1;
      core_cloth_cpp_CCloth_load_FUN_00438cf0(*(CCloth **)pCVar1,(char *)filename);
      filename = filename + 0x28;
    } while (iVar4 < *(int *)this_ptr);
  }
  return;
}


// Assembly code:
// 0043bfa0: PUSH EBX
//   Label: core_cloth.cpp_CClothList_load_FUN_0043bfa0
// 0043bfa1: PUSH ESI
// 0043bfa2: PUSH EDI
// 0043bfa3: PUSH EBP
// 0043bfa4: MOV EBP,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0043bfa8: MOV EDX,dword ptr [EBP]
// 0043bfab: XOR ESI,ESI
// 0043bfad: TEST EDX,EDX
// 0043bfaf: JLE 0x0043c051
//   XREF to: 0043c051 (CONDITIONAL_JUMP)
// 0043bfb5: LEA EDI,[EBP + 0x4]
// 0043bfb8: MOV EBX,EBP
// 0043bfba: MOV ECX,0x5a7
//   Label: LAB_0043bfba
// 0043bfbf: MOV EDX,0x618562
//   XREF to: 00618562 (PARAM)
// 0043bfc4: MOV EAX,dword ptr [EBX + 0x194]
// 0043bfca: MOV dword ptr [0x02f0d944],ECX
//   XREF to: 02f0d944 (WRITE)
// 0043bfd0: MOV dword ptr [0x0067d20c],EDX
//   XREF to: 0067d20c (WRITE)
// 0043bfd6: TEST EAX,EAX
// 0043bfd8: JNZ 0x0043c056
//   XREF to: 0043c056 (CONDITIONAL_JUMP)
// 0043bfde: PUSH 0x5a8
//   Label: LAB_0043bfde
// 0043bfe3: PUSH 0x618574
//   XREF to: 00618574 (DATA)
// 0043bfe8: PUSH 0x3fe70
// 0043bfed: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 0043bff2: ADD ESP,0xc
// 0043bff5: TEST EAX,EAX
// 0043bff7: JZ 0x0043c002
//   XREF to: 0043c002 (CONDITIONAL_JUMP)
// 0043bff9: PUSH EAX
// 0043bffa: CALL core_cloth.cpp_FUN_00438ba0
//   XREF to: 00438ba0 (UNCONDITIONAL_CALL)
// 0043bfff: ADD ESP,0x4
// 0043c002: MOV dword ptr [EBX + 0x194],EAX
//   Label: LAB_0043c002
// 0043c008: TEST EAX,EAX
// 0043c00a: JNZ 0x0043c02f
//   XREF to: 0043c02f (CONDITIONAL_JUMP)
// 0043c00c: MOV EDX,0x618586
//   XREF to: 00618586 (PARAM)
// 0043c011: MOV ECX,0x5a9
// 0043c016: PUSH 0x618598
//   XREF to: 00618598 (DATA)
// 0043c01b: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 0043c021: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 0043c027: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0043c02c: ADD ESP,0x4
// 0043c02f: PUSH EDI
//   Label: LAB_0043c02f
// 0043c030: MOV ECX,dword ptr [EBX + 0x194]
// 0043c036: PUSH ECX
// 0043c037: ADD EBX,0x4
// 0043c03a: INC ESI
// 0043c03b: CALL core_cloth.cpp_CCloth_load_FUN_00438cf0
//   XREF to: 00438cf0 (UNCONDITIONAL_CALL)
// 0043c040: ADD EDI,0x28
// 0043c043: MOV EAX,dword ptr [EBP]
// 0043c046: ADD ESP,0x8
// 0043c049: CMP ESI,EAX
// 0043c04b: JL 0x0043bfba
//   XREF to: 0043bfba (CONDITIONAL_JUMP)
// 0043c051: POP EBP
//   Label: LAB_0043c051
// 0043c052: POP EDI
// 0043c053: POP ESI
// 0043c054: POP EBX
// 0043c055: RET
// 0043c056: PUSH 0x0
//   Label: LAB_0043c056
// 0043c058: PUSH EAX
// 0043c059: CALL core_cloth.cpp_CallToUnknownSomethingFreeMem_FUN_00438c00
//   XREF to: 00438c00 (UNCONDITIONAL_CALL)
// 0043c05e: ADD ESP,0x8
// 0043c061: PUSH EAX
// 0043c062: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 0043c067: ADD ESP,0x4
// 0043c06a: JMP 0x0043bfde
//   XREF to: 0043bfde (UNCONDITIONAL_JUMP)
