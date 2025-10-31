// Name: core_dcamera.cpp_CDemonCamera_worldToCameraSpace_FUN_0044da90
// Address: 0044da90
// Address Range: [[0044da90, 0044dbc7]]
// Convention: __cdecl
// Signature: CVector3i * core_dcamera.cpp_CDemonCamera_worldToCameraSpace_FUN_0044da90(CDemonCamera * this_ptr, CVector3i * output_vector, CVector3i * input_vector)
// Globals:
//   CVector3i g_CameraOutOfBoundsCoord
//   undefined4 g_CameraOutOfBoundsZ

#include "nocturne.h"

CVector3i * __cdecl
core_dcamera_cpp_CDemonCamera_worldToCameraSpace_FUN_0044da90
          (CDemonCamera *this_ptr,CVector3i *output_vector,CVector3i *input_vector)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  BADSPACEBASE *in_ESP;
  CVector3i *unaff_ESI;
  CVector3i *pCVar5;
  CVector3i local_30;
  int local_24;
  int iStack_20;
  int local_18;
  int local_14;
  int local_10;
  
  pCVar5 = &local_30;
  local_18 = output_vector->x - (this_ptr->camera_origin).x;
  local_14 = output_vector->y - (this_ptr->camera_origin).y;
  local_10 = output_vector->z - (this_ptr->camera_origin).z;
  lVar2 = (longlong)(this_ptr->source_matrix).m[0][2] * (longlong)local_18;
  lVar3 = (longlong)(this_ptr->source_matrix).m[1][2] * (longlong)local_14;
  lVar4 = (longlong)(this_ptr->source_matrix).m[2][2] * (longlong)local_10;
  local_30.z = ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
               ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
               ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10);
  if (0 < local_30.z) {
    lVar2 = (longlong)(this_ptr->source_matrix).m[0][0] * (longlong)local_18;
    lVar3 = (longlong)(this_ptr->source_matrix).m[1][0] * (longlong)local_14;
    lVar4 = (longlong)(this_ptr->source_matrix).m[2][0] * (longlong)local_10;
    local_30.x = ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
                 ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
                 ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10);
    if ((local_30.x < local_30.z) && (-local_30.z < local_30.x)) {
      lVar2 = (longlong)(this_ptr->source_matrix).m[0][1] * (longlong)local_18;
      lVar3 = (longlong)(this_ptr->source_matrix).m[1][1] * (longlong)local_14;
      lVar4 = (longlong)(this_ptr->source_matrix).m[2][1] * (longlong)local_10;
      local_30.y = ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
                   ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
                   ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10);
      if ((local_30.y < local_30.z) && (-local_30.z < local_30.y)) goto LAB_0044db11;
    }
  }
  pCVar5 = &g_CameraOutOfBoundsCoord;
LAB_0044db11:
  local_24 = pCVar5->x;
  iStack_20 = pCVar5->y;
  iVar1 = pCVar5->z;
  unaff_ESI->x = pCVar5->x;
  unaff_ESI->y = iStack_20;
  unaff_ESI->z = iVar1;
  return unaff_ESI;
}


// Assembly code:
// 0044da90: PUSH EBX
//   Label: core_dcamera.cpp_CDemonCamera_worldToCameraSpace_FUN_0044da90
// 0044da91: PUSH EDI
// 0044da92: PUSH EBP
// 0044da93: SUB ESP,0x24
// 0044da96: MOV ECX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x4] (READ)
// 0044da9a: MOV EBX,ESI
// 0044da9c: MOV ESI,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x8] (READ)
// 0044daa0: MOV EAX,dword ptr [ESI]
// 0044daa2: SUB EAX,dword ptr [ECX + 0x16c]
// 0044daa8: MOV EDI,dword ptr [ECX + 0x170]
// 0044daae: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0044dab2: MOV EAX,dword ptr [ESI + 0x4]
// 0044dab5: SUB EAX,EDI
// 0044dab7: MOV EBP,dword ptr [ECX + 0x174]
// 0044dabd: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0044dac1: MOV EAX,dword ptr [ESI + 0x8]
// 0044dac4: SUB EAX,EBP
// 0044dac6: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x18] (READ)
// 0044daca: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 0044dace: MOV EAX,dword ptr [ECX + 0x180]
// 0044dad4: IMUL EDX
// 0044dad6: SHRD EAX,EDX,0x10
// 0044dada: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x14] (READ)
// 0044dade: MOV ESI,EAX
// 0044dae0: MOV EAX,dword ptr [ECX + 0x18c]
// 0044dae6: IMUL EDX
// 0044dae8: SHRD EAX,EDX,0x10
// 0044daec: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x10] (READ)
// 0044daf0: ADD ESI,EAX
// 0044daf2: MOV EAX,dword ptr [ECX + 0x198]
// 0044daf8: IMUL EDX
// 0044dafa: SHRD EAX,EDX,0x10
// 0044dafe: ADD ESI,EAX
// 0044db00: MOV dword ptr [ESP + 0x8],ESI
//   XREF to: Stack[-0x28] (WRITE)
// 0044db04: TEST ESI,ESI
// 0044db06: JG 0x0044db26
//   XREF to: 0044db26 (CONDITIONAL_JUMP)
// 0044db08: LEA EDI,[ESP + 0xc]
//   Label: LAB_0044db08
//   XREF to: Stack[-0x24] (DATA)
// 0044db0c: MOV ESI,0x151bf98
//   XREF to: 0151bf98 (DATA)
// 0044db11: MOVSD ES:EDI,ESI
//   Label: LAB_0044db11
//   XREF to: 0151bf98 (READ)
// 0044db12: MOVSD ES:EDI,ESI
//   XREF to: 0151bf9c (READ)
// 0044db13: MOVSD ES:EDI,ESI
//   XREF to: 0151bfa0 (READ)
// 0044db14: LEA ESI,[ESP + 0xc]
//   XREF to: Stack[-0x24] (DATA)
// 0044db18: MOV EDI,EBX
// 0044db1a: MOVSD ES:EDI,ESI
// 0044db1b: MOVSD ES:EDI,ESI
// 0044db1c: MOVSD ES:EDI,ESI
// 0044db1d: MOV EAX,EBX
// 0044db1f: ADD ESP,0x24
// 0044db22: POP EBP
// 0044db23: POP EDI
// 0044db24: POP EBX
// 0044db25: RET
// 0044db26: MOV EDX,dword ptr [ESP + 0x18]
//   Label: LAB_0044db26
//   XREF to: Stack[-0x18] (READ)
// 0044db2a: MOV EAX,dword ptr [ECX + 0x178]
// 0044db30: IMUL EDX
// 0044db32: SHRD EAX,EDX,0x10
// 0044db36: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x14] (READ)
// 0044db3a: MOV ESI,EAX
// 0044db3c: MOV EAX,dword ptr [ECX + 0x184]
// 0044db42: IMUL EDX
// 0044db44: SHRD EAX,EDX,0x10
// 0044db48: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x10] (READ)
// 0044db4c: ADD ESI,EAX
// 0044db4e: MOV EAX,dword ptr [ECX + 0x190]
// 0044db54: IMUL EDX
// 0044db56: SHRD EAX,EDX,0x10
// 0044db5a: ADD ESI,EAX
// 0044db5c: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x28] (READ)
// 0044db60: MOV dword ptr [ESP],ESI
//   XREF to: Stack[-0x30] (DATA)
// 0044db63: CMP ESI,EDX
// 0044db65: JGE 0x0044db08
//   XREF to: 0044db08 (CONDITIONAL_JUMP)
// 0044db67: MOV EDI,EDX
// 0044db69: NEG EDI
// 0044db6b: CMP EDI,ESI
// 0044db6d: JGE 0x0044db08
//   XREF to: 0044db08 (CONDITIONAL_JUMP)
// 0044db6f: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x18] (READ)
// 0044db73: MOV EAX,dword ptr [ECX + 0x17c]
// 0044db79: IMUL EDX
// 0044db7b: SHRD EAX,EDX,0x10
// 0044db7f: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x14] (READ)
// 0044db83: MOV ESI,EAX
// 0044db85: MOV EAX,dword ptr [ECX + 0x188]
// 0044db8b: IMUL EDX
// 0044db8d: SHRD EAX,EDX,0x10
// 0044db91: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x10] (READ)
// 0044db95: ADD ESI,EAX
// 0044db97: MOV EAX,dword ptr [ECX + 0x194]
// 0044db9d: IMUL EDX
// 0044db9f: SHRD EAX,EDX,0x10
// 0044dba3: ADD ESI,EAX
// 0044dba5: MOV EBP,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x28] (READ)
// 0044dba9: MOV dword ptr [ESP + 0x4],ESI
//   XREF to: Stack[-0x2c] (WRITE)
// 0044dbad: CMP ESI,EBP
// 0044dbaf: JGE 0x0044db08
//   XREF to: 0044db08 (CONDITIONAL_JUMP)
// 0044dbb5: CMP EDI,ESI
// 0044dbb7: JGE 0x0044db08
//   XREF to: 0044db08 (CONDITIONAL_JUMP)
// 0044dbbd: LEA EDI,[ESP + 0xc]
//   XREF to: Stack[-0x24] (DATA)
// 0044dbc1: MOV ESI,ESP
// 0044dbc3: JMP 0x0044db11
//   XREF to: 0044db11 (UNCONDITIONAL_JUMP)
