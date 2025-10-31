// Name: core_charactr.cpp_FUN_0042f930
// Address: 0042f930
// Address Range: [[0042f930, 0042f984]]
// Convention: unknown
// Signature: undefined core_charactr.cpp_FUN_0042f930()
// Globals:
//   undefined4 DAT_0065b810
// Function calls:
//   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_charactr_cpp_FUN_0042f930(void)

{
  BADSPACEBASE *in_ESP;
  int *in_stack_00000004;
  int in_stack_00000008;
  float *in_stack_0000000c;
  CVector3i local_10;
  
  local_10.x = (int)ROUND(*in_stack_0000000c * _DAT_0065b810);
  local_10.y = (int)ROUND(in_stack_0000000c[1] * _DAT_0065b810);
  local_10.z = (int)ROUND(in_stack_0000000c[2] * _DAT_0065b810);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            ((SProjectedVertex *)(in_stack_00000008 * 0x30 + *in_stack_00000004),&local_10);
  return;
}


// Assembly code:
// 0042f930: PUSH EBX
//   Label: core_charactr.cpp_FUN_0042f930
// 0042f931: SUB ESP,0xc
// 0042f934: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0042f938: MOV EBX,ESP
// 0042f93a: FLD float ptr [EAX]
// 0042f93c: FMUL float ptr [0x0065b810]
//   XREF to: 0065b810 (READ)
// 0042f942: FISTP dword ptr [EBX]
//   XREF to: Stack[-0x10] (DATA)
// 0042f944: FLD float ptr [EAX + 0x4]
// 0042f947: FMUL float ptr [0x0065b810]
//   XREF to: 0065b810 (READ)
// 0042f94d: FISTP dword ptr [EBX + 0x4]
//   XREF to: Stack[-0xc] (WRITE)
// 0042f950: FLD float ptr [EAX + 0x8]
// 0042f953: FMUL float ptr [0x0065b810]
//   XREF to: 0065b810 (READ)
// 0042f959: FISTP dword ptr [EBX + 0x8]
//   XREF to: Stack[-0x8] (WRITE)
// 0042f95c: MOV EAX,ESP
// 0042f95e: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0042f962: PUSH EAX
// 0042f963: LEA EAX,[EDX*0x4 + 0x0]
// 0042f96a: SUB EAX,EDX
// 0042f96c: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0042f970: SHL EAX,0x4
// 0042f973: MOV EDX,dword ptr [EDX]
// 0042f975: ADD EAX,EDX
// 0042f977: PUSH EAX
// 0042f978: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 0042f97d: ADD ESP,0x8
// 0042f980: ADD ESP,0xc
// 0042f983: POP EBX
// 0042f984: RET
