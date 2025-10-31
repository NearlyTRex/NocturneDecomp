// Name: core_dtrace.cpp_CDemonRaytrace_convertCubeIndexToPosition_FUN_00499ba0
// Address: 00499ba0
// Address Range: [[00499ba0, 00499c1a]]
// Convention: __cdecl
// Signature: CVector3f * core_dtrace.cpp_CDemonRaytrace_convertCubeIndexToPosition_FUN_00499ba0(CDemonRaytrace * this_ptr, CVector3f * output_position, int cube_index)
// Cross-references:
//   core_dtrace.cpp_CDemonRaytrace_loadBinary_FUN_004947a0 (004947a0) at 00494b1b [UNCONDITIONAL_CALL]

#include "nocturne.h"

CVector3f * __cdecl
core_dtrace_cpp_CDemonRaytrace_convertCubeIndexToPosition_FUN_00499ba0
          (CDemonRaytrace *this_ptr,CVector3f *output_position,int cube_index)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = cube_index / ((this_ptr->grid_coord).y * (this_ptr->grid_coord).z);
  iVar1 = (this_ptr->grid_coord).z;
  iVar4 = cube_index - (this_ptr->grid_coord).y * iVar2 * iVar1;
  iVar3 = iVar4 / iVar1;
  output_position->x = (float)iVar2 * (this_ptr->cell_size).x + (this_ptr->bbox_min).x;
  output_position->y = (this_ptr->bbox_min).y + (float)iVar3 * (this_ptr->cell_size).y;
  output_position->z =
       (float)(iVar4 - iVar1 * iVar3) * (this_ptr->cell_size).z + (this_ptr->bbox_min).z;
  return output_position;
}


// Assembly code:
// 00499ba0: PUSH EBX
//   Label: core_dtrace.cpp_CDemonRaytrace_convertCubeIndexToPosition_FUN_00499ba0
// 00499ba1: PUSH ESI
// 00499ba2: PUSH EDI
// 00499ba3: PUSH EBP
// 00499ba4: SUB ESP,0x4
// 00499ba7: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 00499bab: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 00499baf: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 00499bb3: MOV EDI,dword ptr [ECX + 0x44]
// 00499bb6: IMUL EDI,dword ptr [ECX + 0x48]
// 00499bba: MOV EDX,EBX
// 00499bbc: MOV EAX,EBX
// 00499bbe: SAR EDX,0x1f
// 00499bc1: IDIV EDI
// 00499bc3: MOV EDI,EAX
// 00499bc5: MOV EAX,dword ptr [ECX + 0x44]
// 00499bc8: IMUL EAX,EDI
// 00499bcb: MOV EBP,dword ptr [ECX + 0x48]
// 00499bce: IMUL EAX,EBP
// 00499bd1: SUB EBX,EAX
// 00499bd3: MOV EDX,EBX
// 00499bd5: MOV EAX,EBX
// 00499bd7: SAR EDX,0x1f
// 00499bda: IDIV EBP
// 00499bdc: MOV EDX,EBP
// 00499bde: IMUL EDX,EAX
// 00499be1: MOV dword ptr [ESP],EDI
//   XREF to: Stack[-0x14] (DATA)
// 00499be4: FILD dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 00499be7: FMUL float ptr [ECX + 0x28]
// 00499bea: FADD float ptr [ECX + 0x10]
// 00499bed: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x14] (DATA)
// 00499bf0: FSTP float ptr [ESI]
// 00499bf2: FILD dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 00499bf5: FMUL float ptr [ECX + 0x2c]
// 00499bf8: FLD float ptr [ECX + 0x14]
// 00499bfb: SUB EBX,EDX
// 00499bfd: FADDP
// 00499bff: MOV dword ptr [ESP],EBX
//   XREF to: Stack[-0x14] (DATA)
// 00499c02: FSTP float ptr [ESI + 0x4]
// 00499c05: FILD dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 00499c08: FMUL float ptr [ECX + 0x30]
// 00499c0b: FADD float ptr [ECX + 0x18]
// 00499c0e: MOV EAX,ESI
// 00499c10: FSTP float ptr [ESI + 0x8]
// 00499c13: ADD ESP,0x4
// 00499c16: POP EBP
// 00499c17: POP EDI
// 00499c18: POP ESI
// 00499c19: POP EBX
// 00499c1a: RET
