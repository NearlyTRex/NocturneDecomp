// Name: core_set.cpp_CDemonSet_FUN_0056fac0
// Address: 0056fac0
// Address Range: [[0056fac0, 0056fb7f]]
// Convention: __cdecl
// Signature: float core_set.cpp_CDemonSet_FUN_0056fac0(CDemonSet * this_ptr)
// Cross-references:
//   core_sound.cpp_FUN_005b1fd0 (005b1fd0) at 005b20f2 [UNCONDITIONAL_CALL]
// Function calls:
//   core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030

#include "nocturne.h"

float __cdecl core_set_cpp_CDemonSet_FUN_0056fac0(CDemonSet *this_ptr)

{
  SRoom *pSVar1;
  BADSPACEBASE *in_ESP;
  int iVar2;
  CMatrix3x3f *matrix;
  float *in_stack_00000008;
  CVector3f local_30;
  CVector3f local_24;
  SRoom *local_18;
  
  iVar2 = 0;
  if (0 < this_ptr->room_count) {
    local_18 = this_ptr->rooms;
    matrix = &this_ptr->rooms[0].rotation_matrix;
    do {
      pSVar1 = local_18 + iVar2;
      local_24.x = *in_stack_00000008 - (pSVar1->position).x;
      local_24.y = in_stack_00000008[1] - (pSVar1->position).y;
      local_24.z = in_stack_00000008[2] - (pSVar1->position).z;
      core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030(matrix,&local_30,&local_24);
      if (((ABS(local_30.x) <= (pSVar1->extents).x) && (ABS(local_30.z) <= (pSVar1->extents).y)) &&
         (ABS(local_24.x) <= (pSVar1->extents).z)) {
        return (float)pSVar1->field4_0x40;
      }
      iVar2 = iVar2 + 1;
      matrix = (CMatrix3x3f *)((int)(matrix + 1) + 0x20);
    } while (iVar2 < this_ptr->room_count);
  }
  return (float)this_ptr->room_reverb_type;
}


// Assembly code:
// 0056fac0: PUSH EBX
//   Label: core_set.cpp_CDemonSet_FUN_0056fac0
// 0056fac1: PUSH ESI
// 0056fac2: PUSH EDI
// 0056fac3: PUSH EBP
// 0056fac4: MOV EBP,ESP
// 0056fac6: SUB ESP,0x1c
// 0056fac9: AND ESP,0xfffffff8
// 0056facc: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0056facf: MOV EDX,dword ptr [EAX + 0x15aebc]
// 0056fad5: XOR ESI,ESI
// 0056fad7: TEST EDX,EDX
// 0056fad9: JLE 0x0056fb46
//   XREF to: 0056fb46 (CONDITIONAL_JUMP)
// 0056fadb: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0056fade: ADD EAX,0x15aec0
// 0056fae3: ADD EDI,0x15aed8
// 0056fae9: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0056faed: IMUL EBX,ESI,0x44
//   Label: LAB_0056faed
// 0056faf0: ADD EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x18] (READ)
// 0056faf4: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0056faf7: FLD float ptr [EAX]
// 0056faf9: FSUB float ptr [EBX]
// 0056fafb: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x24] (WRITE)
// 0056faff: FLD float ptr [EAX + 0x4]
// 0056fb02: FSUB float ptr [EBX + 0x4]
// 0056fb05: FSTP float ptr [ESP + 0x10]
//   XREF to: Stack[-0x20] (WRITE)
// 0056fb09: FLD float ptr [EAX + 0x8]
// 0056fb0c: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x24] (DATA)
// 0056fb10: PUSH EAX
// 0056fb11: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x30] (DATA)
// 0056fb15: PUSH EAX
// 0056fb16: FSUB float ptr [EBX + 0x8]
// 0056fb19: PUSH EDI
// 0056fb1a: FSTP float ptr [ESP + 0x20]
//   XREF to: Stack[-0x1c] (WRITE)
// 0056fb1e: CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
//   XREF to: 00472030 (UNCONDITIONAL_CALL)
// 0056fb23: ADD ESP,0xc
// 0056fb26: FLD float ptr [EBX + 0xc]
// 0056fb29: FLD float ptr [ESP]
//   XREF to: Stack[-0x30] (DATA)
// 0056fb2c: FABS
// 0056fb2e: FCOMPP
// 0056fb30: FNSTSW AX
// 0056fb32: SAHF
// 0056fb33: JBE 0x0056fb56
//   XREF to: 0056fb56 (CONDITIONAL_JUMP)
// 0056fb35: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0056fb35
//   XREF to: Stack[0x4] (READ)
// 0056fb38: INC ESI
// 0056fb39: MOV ECX,dword ptr [EAX + 0x15aebc]
// 0056fb3f: ADD EDI,0x44
// 0056fb42: CMP ESI,ECX
// 0056fb44: JL 0x0056faed
//   XREF to: 0056faed (CONDITIONAL_JUMP)
// 0056fb46: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0056fb46
//   XREF to: Stack[0x4] (READ)
// 0056fb49: MOV EAX,dword ptr [EAX + 0x15aeb8]
// 0056fb4f: MOV ESP,EBP
// 0056fb51: POP EBP
// 0056fb52: POP EDI
// 0056fb53: POP ESI
// 0056fb54: POP EBX
// 0056fb55: RET
// 0056fb56: FLD float ptr [ESP + 0x4]
//   Label: LAB_0056fb56
//   XREF to: Stack[-0x2c] (READ)
// 0056fb5a: FABS
// 0056fb5c: FLD float ptr [EBX + 0x10]
// 0056fb5f: FCOMPP
// 0056fb61: FNSTSW AX
// 0056fb63: SAHF
// 0056fb64: JC 0x0056fb35
//   XREF to: 0056fb35 (CONDITIONAL_JUMP)
// 0056fb66: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x28] (READ)
// 0056fb6a: FABS
// 0056fb6c: FLD float ptr [EBX + 0x14]
// 0056fb6f: FCOMPP
// 0056fb71: FNSTSW AX
// 0056fb73: SAHF
// 0056fb74: JC 0x0056fb35
//   XREF to: 0056fb35 (CONDITIONAL_JUMP)
// 0056fb76: MOV EAX,dword ptr [EBX + 0x40]
// 0056fb79: MOV ESP,EBP
// 0056fb7b: POP EBP
// 0056fb7c: POP EDI
// 0056fb7d: POP ESI
// 0056fb7e: POP EBX
// 0056fb7f: RET
