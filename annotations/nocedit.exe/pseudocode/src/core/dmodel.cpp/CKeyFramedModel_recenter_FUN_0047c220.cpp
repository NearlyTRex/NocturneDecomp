// Name: core_dmodel.cpp_CKeyFramedModel_recenter_FUN_0047c220
// Address: 0047c220
// Address Range: [[0047c220, 0047c2c1]]
// Convention: __cdecl
// Signature: void core_dmodel.cpp_CKeyFramedModel_recenter_FUN_0047c220(CKeyFramedModel * this_ptr, int frame_index)
// Cross-references:
//   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 (0047cbc0) at 0047de67 [UNCONDITIONAL_CALL]
// Globals:
//   float FLOAT_00620557 = 0.5
// Function calls:
//   core_dmodel.cpp_CKeyFramedModel_applyBias_FUN_0047c370
//   core_dmodel.cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010

#include "nocturne.h"

void __cdecl
core_dmodel_cpp_CKeyFramedModel_recenter_FUN_0047c220(CKeyFramedModel *this_ptr,int frame_index)

{
  CVector3f *pCVar1;
  BADSPACEBASE *in_ESP;
  int in_stack_0000000c;
  float local_c;
  float local_8;
  
  core_dmodel_cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010(this_ptr);
  pCVar1 = this_ptr->frame_bounds + in_stack_0000000c * 2;
  local_c = -((pCVar1->x + pCVar1[1].x) * FLOAT_00620557);
  local_8 = -((pCVar1->y + pCVar1[1].y) * FLOAT_00620557);
  core_dmodel_cpp_CKeyFramedModel_applyBias_FUN_0047c370(this_ptr,(CVector3f *)&local_c);
  return;
}


// Assembly code:
// 0047c220: PUSH EBX
//   Label: core_dmodel.cpp_CKeyFramedModel_recenter_FUN_0047c220
// 0047c221: SUB ESP,0x24
// 0047c224: MOV EBX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 0047c228: PUSH EBX
// 0047c229: CALL core_dmodel.cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010
//   XREF to: 00478010 (UNCONDITIONAL_CALL)
// 0047c22e: ADD ESP,0x4
// 0047c231: MOV EDX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x8] (READ)
// 0047c235: LEA EAX,[EDX*0x4 + 0x0]
// 0047c23c: SUB EAX,EDX
// 0047c23e: LEA EDX,[EAX*0x8 + 0x0]
// 0047c245: MOV EAX,dword ptr [EBX + 0x5690]
// 0047c24b: ADD EAX,EDX
// 0047c24d: LEA EDX,[EAX + 0xc]
// 0047c250: FLD float ptr [EAX]
// 0047c252: FADD float ptr [EDX]
// 0047c254: FST float ptr [ESP + 0xc]
//   XREF to: Stack[-0x1c] (WRITE)
// 0047c258: FLD float ptr [EAX + 0x4]
// 0047c25b: FADD float ptr [EDX + 0x4]
// 0047c25e: FXCH
// 0047c260: FLD float ptr [0x00620557]
//   XREF to: 00620557 (READ)
// 0047c266: FXCH
// 0047c268: FMUL ST1
// 0047c26a: FXCH ST2
// 0047c26c: FST float ptr [ESP + 0x10]
//   XREF to: Stack[-0x18] (WRITE)
// 0047c270: FLD float ptr [EAX + 0x8]
// 0047c273: FADD float ptr [EDX + 0x8]
// 0047c276: FXCH
// 0047c278: FMUL ST2
// 0047c27a: FXCH
// 0047c27c: FST float ptr [ESP + 0x14]
//   XREF to: Stack[-0x14] (WRITE)
// 0047c280: FMULP ST2
// 0047c282: LEA EAX,[ESP + 0x18]
//   XREF to: Stack[-0x10] (DATA)
// 0047c286: FXCH ST2
// 0047c288: FSTP float ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 0047c28b: FXCH
// 0047c28d: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x24] (WRITE)
// 0047c291: PUSH EAX
// 0047c292: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x24] (READ)
// 0047c296: FLD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x28] (READ)
// 0047c29a: FCHS
// 0047c29c: FXCH
// 0047c29e: FCHS
// 0047c2a0: PUSH EBX
// 0047c2a1: FXCH
// 0047c2a3: FSTP float ptr [ESP + 0x20]
//   XREF to: Stack[-0x10] (WRITE)
// 0047c2a7: FSTP float ptr [ESP + 0x24]
//   XREF to: Stack[-0xc] (WRITE)
// 0047c2ab: FST float ptr [ESP + 0x10]
//   XREF to: Stack[-0x20] (WRITE)
// 0047c2af: FCHS
// 0047c2b1: FSTP float ptr [ESP + 0x28]
//   XREF to: Stack[-0x8] (WRITE)
// 0047c2b5: CALL core_dmodel.cpp_CKeyFramedModel_applyBias_FUN_0047c370
//   XREF to: 0047c370 (UNCONDITIONAL_CALL)
// 0047c2ba: ADD ESP,0x8
// 0047c2bd: ADD ESP,0x24
// 0047c2c0: POP EBX
// 0047c2c1: RET
