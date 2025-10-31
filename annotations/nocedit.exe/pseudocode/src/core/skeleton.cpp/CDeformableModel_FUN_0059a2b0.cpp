// Name: core_skeleton.cpp_CDeformableModel_FUN_0059a2b0
// Address: 0059a2b0
// Address Range: [[0059a2b0, 0059a3e3]]
// Convention: unknown
// Signature: undefined core_skeleton.cpp_CDeformableModel_FUN_0059a2b0()
// Cross-references:
//   core_skeledit.cpp_FUN_0058b660 (0058b660) at 0058b68f [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058c190 (0058c190) at 0058c1eb [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModel_allocLOD_FUN_0059a510 (0059a510) at 0059a6f7 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModel_allocMemory_FUN_0059a3f0 (0059a3f0) at 0059a405 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModel_dtor_FUN_0059a270 (0059a270) at 0059a276 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModel_freeAllModels_FUN_005a1dc0 (005a1dc0) at 005a1dce [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_skeleton_cpp_0064e4ba
//   TerminatedCString s_core_skeleton_cpp_0064e4cf
//   TerminatedCString s_core_skeleton_cpp_0064e4e4
//   TerminatedCString s_core_skeleton_cpp_0064e4f9
//   WatcomTypeInfo g_SVertTypeInfo
//   char* g_CurrentDebugFilename = 0067d200
//   int g_CurrentDebugLine
// Function calls:
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   crt_memory.c_memset_FUN_005fde40

#include "nocturne.h"

/* Signature: undefined1 core_skeleton.cpp_CDeformableModel_FUN_0059a2b0(CDeformableModel* param_1)
    */

void core_skeleton_cpp_CDeformableModel_FUN_0059a2b0(void)

{
  void *ptr;
  int *piVar1;
  int iVar2;
  int *in_stack_00000004;
  
  iVar2 = 0;
  piVar1 = in_stack_00000004;
  if (0 < *in_stack_00000004) {
    do {
      g_CurrentDebugFilename = "..\\core\\skeleton.cpp";
      g_CurrentDebugLine = 0x23a;
      ptr = crt_memory_c_freeSingleInstance_FUN_005fe632((void *)piVar1[0x10],&g_SVertTypeInfo);
      crt_memory_c_free_FUN_005fe659(ptr);
      piVar1[0x10] = 0;
      g_CurrentDebugFilename = "..\\core\\skeleton.cpp";
      g_CurrentDebugLine = 0x23d;
      crt_memory_c_free_FUN_005fe659((void *)piVar1[0x1f]);
      piVar1[0x1f] = 0;
      g_CurrentDebugFilename = "..\\core\\skeleton.cpp";
      g_CurrentDebugLine = 0x240;
      crt_memory_c_free_FUN_005fe659((void *)piVar1[0x24]);
      g_CurrentDebugFilename = "..\\core\\skeleton.cpp";
      piVar1[0x24] = 0;
      g_CurrentDebugLine = 0x243;
      crt_memory_c_free_FUN_005fe659((void *)piVar1[0x29]);
      piVar1[0x29] = 0;
      piVar1[0xb] = 0;
      piVar1[0x15] = 0;
      piVar1[0x1a] = 0;
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar2 < *in_stack_00000004);
  }
  in_stack_00000004[0x2e] = 0;
  in_stack_00000004[0x2f] = 0;
  crt_memory_c_memset_FUN_005fde40(in_stack_00000004 + 0x30,0,0x7080);
  in_stack_00000004[0x1c50] = 0;
  *in_stack_00000004 = 0;
  return;
}


// Assembly code:
// 0059a2b0: PUSH ESI
//   Label: core_skeleton.cpp_CDeformableModel_FUN_0059a2b0
// 0059a2b1: PUSH EDI
// 0059a2b2: PUSH EBP
// 0059a2b3: MOV EDI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0059a2b7: MOV EDX,dword ptr [EDI]
// 0059a2b9: XOR ESI,ESI
// 0059a2bb: TEST EDX,EDX
// 0059a2bd: JLE 0x0059a3a6
//   XREF to: 0059a3a6 (CONDITIONAL_JUMP)
// 0059a2c3: PUSH EBX
// 0059a2c4: MOV EBX,EDI
// 0059a2c6: MOV ECX,0x64e4ba
//   Label: LAB_0059a2c6
//   XREF to: 0064e4ba (PARAM)
// 0059a2cb: PUSH 0x662ed0
//   XREF to: 00662ed0 (DATA)
// 0059a2d0: MOV EAX,dword ptr [EBX + 0x40]
// 0059a2d3: MOV EBP,0x23a
// 0059a2d8: PUSH EAX
// 0059a2d9: MOV dword ptr [0x0067d20c],ECX
//   XREF to: 0067d20c (WRITE)
// 0059a2df: MOV dword ptr [0x02f0d944],EBP
//   XREF to: 02f0d944 (WRITE)
// 0059a2e5: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 0059a2ea: ADD ESP,0x8
// 0059a2ed: PUSH EAX
// 0059a2ee: ADD EBX,0x4
// 0059a2f1: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 0059a2f6: MOV EDX,0x64e4cf
//   XREF to: 0064e4cf (PARAM)
// 0059a2fb: MOV ECX,0x23d
// 0059a300: ADD ESP,0x4
// 0059a303: MOV EBP,dword ptr [EBX + 0x78]
// 0059a306: MOV dword ptr [EBX + 0x3c],0x0
// 0059a30d: PUSH EBP
// 0059a30e: MOV dword ptr [0x0067d20c],EDX
//   XREF to: 0067d20c (WRITE)
// 0059a314: MOV dword ptr [0x02f0d944],ECX
//   XREF to: 02f0d944 (WRITE)
// 0059a31a: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 0059a31f: MOV EAX,0x64e4e4
//   XREF to: 0064e4e4 (PARAM)
// 0059a324: MOV EDX,0x240
// 0059a329: MOV EBP,0x64e4f9
//   XREF to: 0064e4f9 (DATA)
// 0059a32e: ADD ESP,0x4
// 0059a331: MOV ECX,dword ptr [EBX + 0x8c]
// 0059a337: MOV dword ptr [EBX + 0x78],0x0
// 0059a33e: PUSH ECX
// 0059a33f: MOV [0x0067d20c],EAX
//   XREF to: 0067d20c (WRITE)
// 0059a344: MOV dword ptr [0x02f0d944],EDX
//   XREF to: 02f0d944 (WRITE)
// 0059a34a: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 0059a34f: MOV EAX,0x243
// 0059a354: ADD ESP,0x4
// 0059a357: MOV EDX,dword ptr [EBX + 0xa0]
// 0059a35d: MOV dword ptr [0x0067d20c],EBP
//   XREF to: 0067d20c (WRITE)
// 0059a363: PUSH EDX
// 0059a364: MOV dword ptr [EBX + 0x8c],0x0
// 0059a36e: MOV [0x02f0d944],EAX
//   XREF to: 02f0d944 (WRITE)
// 0059a373: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 0059a378: MOV dword ptr [EBX + 0xa0],0x0
// 0059a382: MOV dword ptr [EBX + 0x28],0x0
// 0059a389: MOV dword ptr [EBX + 0x50],0x0
// 0059a390: MOV dword ptr [EBX + 0x64],0x0
// 0059a397: INC ESI
// 0059a398: MOV ECX,dword ptr [EDI]
// 0059a39a: ADD ESP,0x4
// 0059a39d: CMP ESI,ECX
// 0059a39f: JL 0x0059a2c6
//   XREF to: 0059a2c6 (CONDITIONAL_JUMP)
// 0059a3a5: POP EBX
// 0059a3a6: PUSH 0x7080
//   Label: LAB_0059a3a6
// 0059a3ab: PUSH 0x0
// 0059a3ad: LEA EAX,[EDI + 0xc0]
// 0059a3b3: MOV dword ptr [EDI + 0xb8],0x0
// 0059a3bd: PUSH EAX
// 0059a3be: MOV dword ptr [EDI + 0xbc],0x0
// 0059a3c8: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 0059a3cd: MOV dword ptr [EDI + 0x7140],0x0
// 0059a3d7: ADD ESP,0xc
// 0059a3da: MOV dword ptr [EDI],0x0
// 0059a3e0: POP EBP
// 0059a3e1: POP EDI
// 0059a3e2: POP ESI
// 0059a3e3: RET
