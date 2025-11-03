// Name: core_skeleton.cpp_CDeformableModel_initVertexWRecip_FUN_0059ab90
// Address: 0059ab90
// Address Range: [[0059ab90, 0059abe0]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_CDeformableModel_initVertexWRecip_FUN_0059ab90(CDeformableModel * this_ptr, int lod_index)
// Cross-references:
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a02f0 (005a02f0) at 005a031a [UNCONDITIONAL_CALL]
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer g_CDemonRendererInstance
//   float g_PerspectiveReciprocal

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CDeformableModel_initVertexWRecip_FUN_0059ab90
          (CDeformableModel *this_ptr,int lod_index)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = 0;
  if (0 < this_ptr->vertex_count[lod_index]) {
    do {
      *(float *)((int)&g_CDemonRendererPtr->vertex_buffer_ptr->w_recip + iVar1) =
           g_PerspectiveReciprocal;
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x30;
    } while (iVar2 < this_ptr->vertex_count[lod_index]);
  }
  return;
}


// Assembly code:
// 0059ab90: PUSH EBX
//   Label: core_skeleton.cpp_CDeformableModel_initVertexWRecip_FUN_0059ab90
// 0059ab91: PUSH ESI
// 0059ab92: PUSH EDI
// 0059ab93: PUSH EBP
// 0059ab94: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0059ab9a: MOV EBP,dword ptr [0x02d051f4]
//   XREF to: 02d051f4 (READ)
// 0059aba0: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0059aba4: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0059aba8: SHL ESI,0x2
// 0059abab: ADD ESI,ECX
// 0059abad: XOR EAX,EAX
// 0059abaf: MOV EBX,dword ptr [ESI + 0x2c]
// 0059abb2: XOR EDX,EDX
// 0059abb4: TEST EBX,EBX
// 0059abb6: JLE 0x0059abd0
//   XREF to: 0059abd0 (CONDITIONAL_JUMP)
// 0059abb8: MOV ECX,dword ptr [EDI]
//   Label: LAB_0059abb8
//   XREF to: 02c6d578 (READ)
// 0059abba: MOV dword ptr [ECX + EAX*0x1 + 0x2c],EBP
// 0059abbe: INC EDX
// 0059abbf: MOV ECX,dword ptr [ESI + 0x2c]
// 0059abc2: ADD EAX,0x30
// 0059abc5: CMP EDX,ECX
// 0059abc7: JL 0x0059abb8
//   XREF to: 0059abb8 (CONDITIONAL_JUMP)
// 0059abc9: LEA EAX,[EAX]
// 0059abcf: NOP
// 0059abd0: MOV dword ptr [0x02d051f4],EBP
//   Label: LAB_0059abd0
//   XREF to: 02d051f4 (WRITE)
// 0059abd6: MOV dword ptr [0x006703ec],EDI
//   XREF to: 006703ec (WRITE)
// 0059abdc: POP EBP
// 0059abdd: POP EDI
// 0059abde: POP ESI
// 0059abdf: POP EBX
// 0059abe0: RET
