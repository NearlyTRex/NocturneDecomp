// Name: core_dcamera.cpp_updateFogScrollOffset_FUN_0044bfb0
// Address: 0044bfb0
// Address Range: [[0044bfb0, 0044c02e]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_updateFogScrollOffset_FUN_0044bfb0(SFogGrid * fog_ptr, int time_major, int time_minor)
// Cross-references:
//   core_dcamera.cpp_CDemonCamera_compositeLightmapToFramebuffer_FUN_00453270 (00453270) at 004532d2 [UNCONDITIONAL_CALL]
//   core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_004529b0 (004529b0) at 00452ba5 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl
core_dcamera_cpp_updateFogScrollOffset_FUN_0044bfb0(SFogGrid *fog_ptr,int time_major,int time_minor)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  
  lVar2 = (longlong)(time_major * 0x10000 + time_minor) * 0x100;
  uVar3 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
  lVar2 = (longlong)(int)uVar3 * (longlong)(fog_ptr->scroll_vector).x;
  uVar4 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
  iVar1 = (fog_ptr->scroll_vector).y;
  (fog_ptr->sampling_offset).x = uVar4;
  (fog_ptr->sampling_offset).x = -uVar4;
  lVar2 = (longlong)(int)uVar3 * (longlong)iVar1;
  uVar4 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
  iVar1 = (fog_ptr->scroll_vector).z;
  (fog_ptr->sampling_offset).y = uVar4;
  (fog_ptr->sampling_offset).y = -uVar4;
  lVar2 = (longlong)(int)uVar3 * (longlong)iVar1;
  uVar3 = (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
  (fog_ptr->sampling_offset).z = uVar3;
  (fog_ptr->sampling_offset).z = -uVar3;
  return;
}


// Assembly code:
// 0044bfb0: PUSH EBX
//   Label: core_dcamera.cpp_updateFogScrollOffset_FUN_0044bfb0
// 0044bfb1: PUSH ESI
// 0044bfb2: PUSH EDI
// 0044bfb3: PUSH EBP
// 0044bfb4: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0044bfb8: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0044bfbc: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0044bfc0: SHL EAX,0x10
// 0044bfc3: ADD EAX,EDX
// 0044bfc5: MOV EDX,0x100
// 0044bfca: IMUL EDX
// 0044bfcc: SHRD EAX,EDX,0x10
// 0044bfd0: MOV EDX,dword ptr [EBX + 0x100c]
// 0044bfd6: MOV ECX,EAX
// 0044bfd8: IMUL EDX
// 0044bfda: SHRD EAX,EDX,0x10
// 0044bfde: MOV ESI,EAX
// 0044bfe0: MOV EDX,dword ptr [EBX + 0x1010]
// 0044bfe6: MOV dword ptr [EBX + 0x1000],EAX
// 0044bfec: NEG ESI
// 0044bfee: MOV EAX,ECX
// 0044bff0: MOV dword ptr [EBX + 0x1000],ESI
// 0044bff6: IMUL EDX
// 0044bff8: SHRD EAX,EDX,0x10
// 0044bffc: MOV EDI,EAX
// 0044bffe: MOV EDX,dword ptr [EBX + 0x1014]
// 0044c004: MOV dword ptr [EBX + 0x1004],EAX
// 0044c00a: NEG EDI
// 0044c00c: MOV EAX,ECX
// 0044c00e: MOV dword ptr [EBX + 0x1004],EDI
// 0044c014: IMUL EDX
// 0044c016: SHRD EAX,EDX,0x10
// 0044c01a: MOV EBP,EAX
// 0044c01c: MOV dword ptr [EBX + 0x1008],EAX
// 0044c022: NEG EBP
// 0044c024: MOV dword ptr [EBX + 0x1008],EBP
// 0044c02a: POP EBP
// 0044c02b: POP EDI
// 0044c02c: POP ESI
// 0044c02d: POP EBX
// 0044c02e: RET
