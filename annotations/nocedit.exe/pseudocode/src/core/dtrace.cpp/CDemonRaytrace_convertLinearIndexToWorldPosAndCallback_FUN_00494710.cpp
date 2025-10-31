// Name: core_dtrace.cpp_CDemonRaytrace_convertLinearIndexToWorldPosAndCallback_FUN_00494710
// Address: 00494710
// Address Range: [[00494710, 0049479e]]
// Convention: __cdecl
// Signature: void core_dtrace.cpp_CDemonRaytrace_convertLinearIndexToWorldPosAndCallback_FUN_00494710(CDemonRaytrace * this_ptr, void * callback_data, int linear_index, void * user_data)
// Cross-references:
//   core_dtrace.cpp_CDemonRaytrace_loadBinary_FUN_004947a0 (004947a0) at 00494c26 [UNCONDITIONAL_CALL]
// Function calls:
//   core_dpart.cpp_CDemonPart_loadFromFile_FUN_004825c0

#include "nocturne.h"

void __cdecl
core_dtrace_cpp_CDemonRaytrace_convertLinearIndexToWorldPosAndCallback_FUN_00494710
          (CDemonRaytrace *this_ptr,void *callback_data,int linear_index,void *user_data)

{
  int iVar1;
  int iVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  CVector3f local_1c;
  int local_10;
  
  iVar2 = linear_index / ((this_ptr->grid_coord).y * (this_ptr->grid_coord).z);
  iVar1 = (this_ptr->grid_coord).z;
  local_10 = linear_index - (this_ptr->grid_coord).y * iVar2 * iVar1;
  iVar3 = local_10 / iVar1;
  local_1c.x = (float)iVar2 * (this_ptr->cell_size).x + (this_ptr->bbox_min).x;
  local_1c.y = (float)iVar3 * (this_ptr->cell_size).y + (this_ptr->bbox_min).y;
  local_10 = local_10 - iVar1 * iVar3;
  local_1c.z = (float)local_10 * (this_ptr->cell_size).z + (this_ptr->bbox_min).z;
  core_dpart_cpp_CDemonPart_loadFromFile_FUN_004825c0
            ((CDemonPart *)callback_data,(FILE *)user_data,&local_1c);
  return;
}


// Assembly code:
// 00494710: PUSH EBX
//   Label: core_dtrace.cpp_CDemonRaytrace_convertLinearIndexToWorldPosAndCallback_FUN_00494710
// 00494711: PUSH ESI
// 00494712: PUSH EDI
// 00494713: SUB ESP,0x10
// 00494716: MOV ECX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 0049471a: MOV EBX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0xc] (READ)
// 0049471e: MOV ESI,dword ptr [ECX + 0x44]
// 00494721: IMUL ESI,dword ptr [ECX + 0x48]
// 00494725: MOV EDX,EBX
// 00494727: MOV EAX,EBX
// 00494729: SAR EDX,0x1f
// 0049472c: IDIV ESI
// 0049472e: MOV ESI,EAX
// 00494730: MOV EAX,dword ptr [ECX + 0x44]
// 00494733: IMUL EAX,ESI
// 00494736: MOV EDI,dword ptr [ECX + 0x48]
// 00494739: IMUL EAX,EDI
// 0049473c: SUB EBX,EAX
// 0049473e: MOV EDX,EBX
// 00494740: MOV EAX,EBX
// 00494742: SAR EDX,0x1f
// 00494745: IDIV EDI
// 00494747: MOV EDX,EDI
// 00494749: IMUL EDX,EAX
// 0049474c: MOV dword ptr [ESP + 0xc],ESI
//   XREF to: Stack[-0x10] (WRITE)
// 00494750: FILD dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x10] (READ)
// 00494754: FMUL float ptr [ECX + 0x28]
// 00494757: FADD float ptr [ECX + 0x10]
// 0049475a: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 0049475e: FSTP float ptr [ESP]
//   XREF to: Stack[-0x1c] (DATA)
// 00494761: FILD dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x10] (READ)
// 00494765: FMUL float ptr [ECX + 0x2c]
// 00494768: FADD float ptr [ECX + 0x14]
// 0049476b: SUB EBX,EDX
// 0049476d: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x18] (WRITE)
// 00494771: MOV dword ptr [ESP + 0xc],EBX
//   XREF to: Stack[-0x10] (WRITE)
// 00494775: MOV EAX,ESP
// 00494777: FILD dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x10] (READ)
// 0049477b: FMUL float ptr [ECX + 0x30]
// 0049477e: PUSH EAX
// 0049477f: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x10] (READ)
// 00494783: MOV EDX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x8] (READ)
// 00494787: PUSH EAX
// 00494788: FADD float ptr [ECX + 0x18]
// 0049478b: PUSH EDX
// 0049478c: FSTP float ptr [ESP + 0x14]
//   XREF to: Stack[-0x14] (WRITE)
// 00494790: CALL core_dpart.cpp_CDemonPart_loadFromFile_FUN_004825c0
//   XREF to: 004825c0 (UNCONDITIONAL_CALL)
// 00494795: ADD ESP,0xc
// 00494798: ADD ESP,0x10
// 0049479b: POP EDI
// 0049479c: POP ESI
// 0049479d: POP EBX
// 0049479e: RET
