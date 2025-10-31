// Name: shape_design.c_crushModel_FUN_00469bd0
// Address: 00469bd0
// Address Range: [[00469bd0, 00469c6e]]
// Convention: __cdecl
// Signature: void shape_design.c_crushModel_FUN_00469bd0(void)
// Cross-references:
//   shape_design.c_showShapeEditorMenu_FUN_0046f290 (0046f290) at 0046f704 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Model_crushed_Hit_a_key_0061d090
//   int g_VertexCount
//   undefined4 DAT_01626410
// Function calls:
//   engine_2d.c_drawText_FUN_00401fd0
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_windll.cpp_clearScreen_FUN_005b3e70
//   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90

#include "nocturne.h"

void __cdecl shape_design_c_crushModel_FUN_00469bd0(void)

{
  int iVar1;
  float local_14;
  
  local_14 = 9999.0;
  for (iVar1 = 0; iVar1 < g_VertexCount; iVar1 = iVar1 + 1) {
    if (g_LoadedVertices[iVar1].vertex.y < local_14) {
      local_14 = g_LoadedVertices[iVar1].vertex.y;
    }
  }
  for (iVar1 = 0; iVar1 < g_VertexCount; iVar1 = iVar1 + 1) {
    g_LoadedVertices[iVar1].vertex.y = local_14;
  }
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_drawText_FUN_00401fd0("Model crushed.  Hit a key...",0,0);
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
  return;
}


// Assembly code:
// 00469bd0: PUSH EBX
//   Label: shape_design.c_crushModel_FUN_00469bd0
// 00469bd1: PUSH ESI
// 00469bd2: PUSH EDI
// 00469bd3: PUSH EBP
// 00469bd4: MOV EBP,ESP
// 00469bd6: SUB ESP,0x8
// 00469bdc: MOV dword ptr [EBP + -0x4],0x461c3c00
//   XREF to: Stack[-0x14] (WRITE)
// 00469be3: MOV dword ptr [EBP + -0x8],0x0
//   XREF to: Stack[-0x18] (WRITE)
// 00469bea: JMP 0x00469bf2
//   XREF to: 00469bf2 (UNCONDITIONAL_JUMP)
// 00469bec: MOV EAX,dword ptr [EBP + -0x8]
//   Label: LAB_00469bec
//   XREF to: Stack[-0x18] (READ)
// 00469bef: INC dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ_WRITE)
// 00469bf2: MOV EAX,dword ptr [EBP + -0x8]
//   Label: LAB_00469bf2
//   XREF to: Stack[-0x18] (READ)
// 00469bf5: CMP EAX,dword ptr [0x01626408]
//   XREF to: 01626408 (READ)
// 00469bfb: JGE 0x00469c1e
//   XREF to: 00469c1e (CONDITIONAL_JUMP)
// 00469bfd: IMUL EAX,dword ptr [EBP + -0x8],0x14
//   XREF to: Stack[-0x18] (READ)
// 00469c01: FLD float ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 00469c07: FCOMP float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00469c0a: FNSTSW AX
// 00469c0c: SAHF
// 00469c0d: JNC 0x00469c1c
//   XREF to: 00469c1c (CONDITIONAL_JUMP)
// 00469c0f: IMUL EAX,dword ptr [EBP + -0x8],0x14
//   XREF to: Stack[-0x18] (READ)
// 00469c13: MOV EAX,dword ptr [EAX + 0x1626410]
//   XREF to: 01626410 (DATA)
// 00469c19: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00469c1c: JMP 0x00469bec
//   Label: LAB_00469c1c
//   XREF to: 00469bec (UNCONDITIONAL_JUMP)
// 00469c1e: MOV dword ptr [EBP + -0x8],0x0
//   Label: LAB_00469c1e
//   XREF to: Stack[-0x18] (WRITE)
// 00469c25: JMP 0x00469c2d
//   XREF to: 00469c2d (UNCONDITIONAL_JUMP)
// 00469c27: MOV EAX,dword ptr [EBP + -0x8]
//   Label: LAB_00469c27
//   XREF to: Stack[-0x18] (READ)
// 00469c2a: INC dword ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ_WRITE)
// 00469c2d: MOV EAX,dword ptr [EBP + -0x8]
//   Label: LAB_00469c2d
//   XREF to: Stack[-0x18] (READ)
// 00469c30: CMP EAX,dword ptr [0x01626408]
//   XREF to: 01626408 (READ)
// 00469c36: JGE 0x00469c47
//   XREF to: 00469c47 (CONDITIONAL_JUMP)
// 00469c38: IMUL EDX,dword ptr [EBP + -0x8],0x14
//   XREF to: Stack[-0x18] (READ)
// 00469c3c: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00469c3f: MOV dword ptr [EDX + 0x1626410],EAX
//   XREF to: 01626410 (DATA)
// 00469c45: JMP 0x00469c27
//   XREF to: 00469c27 (UNCONDITIONAL_JUMP)
// 00469c47: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   Label: LAB_00469c47
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 00469c4c: PUSH 0x0
// 00469c4e: PUSH 0x0
// 00469c50: MOV EAX,0x61d090
//   XREF to: 0061d090 (PARAM)
// 00469c55: PUSH EAX
//   XREF to: 0061d090 (DATA)
// 00469c56: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00469c5b: ADD ESP,0xc
// 00469c5e: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 00469c63: CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
// 00469c68: MOV ESP,EBP
// 00469c6a: POP EBP
// 00469c6b: POP EDI
// 00469c6c: POP ESI
// 00469c6d: POP EBX
// 00469c6e: RET
