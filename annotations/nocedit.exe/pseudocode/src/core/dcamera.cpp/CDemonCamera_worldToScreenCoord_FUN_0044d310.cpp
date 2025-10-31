// Name: core_dcamera.cpp_CDemonCamera_worldToScreenCoord_FUN_0044d310
// Address: 0044d310
// Address Range: [[0044d310, 0044d36b]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_CDemonCamera_worldToScreenCoord_FUN_0044d310(CDemonCamera * this_ptr, CVector3i * output_ptr, CVector3i * input_ptr)

#include "nocturne.h"

void __cdecl
core_dcamera_cpp_CDemonCamera_worldToScreenCoord_FUN_0044d310
          (CDemonCamera *this_ptr,CVector3i *output_ptr,CVector3i *input_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *unaff_ESI;
  
  iVar1 = output_ptr->z;
  iVar2 = (this_ptr->saved_viewport_rect).top;
  iVar3 = output_ptr->z;
  iVar4 = output_ptr->y;
  iVar5 = (this_ptr->saved_viewport_rect).bottom;
  *unaff_ESI = (int)(((longlong)(output_ptr->x - (this_ptr->saved_viewport_rect).right) *
                     (longlong)iVar1) / (longlong)(this_ptr->saved_viewport_rect).left);
  unaff_ESI[1] = (int)(((longlong)(iVar4 - iVar5) * (longlong)iVar3) / (longlong)iVar2);
  unaff_ESI[2] = iVar1;
  return;
}


// Assembly code:
// 0044d310: PUSH EBX
//   Label: core_dcamera.cpp_CDemonCamera_worldToScreenCoord_FUN_0044d310
// 0044d311: PUSH EDI
// 0044d312: SUB ESP,0xc
// 0044d315: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0044d319: MOV ECX,ESI
// 0044d31b: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0044d31f: MOV EAX,dword ptr [EDI + 0x8]
// 0044d322: MOV EDX,dword ptr [ESI + 0x1c8]
// 0044d328: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 0044d32c: MOV EAX,dword ptr [EDI]
// 0044d32e: MOV EBX,dword ptr [ESI + 0x1c0]
// 0044d334: SUB EAX,EDX
// 0044d336: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0xc] (READ)
// 0044d33a: IMUL EDX
// 0044d33c: IDIV EBX
// 0044d33e: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x14] (DATA)
// 0044d341: MOV EBX,dword ptr [ESI + 0x1c4]
// 0044d347: MOV EDX,dword ptr [EDI + 0x8]
// 0044d34a: MOV EAX,dword ptr [EDI + 0x4]
// 0044d34d: MOV EDI,dword ptr [ESI + 0x1cc]
// 0044d353: MOV ESI,ESP
// 0044d355: SUB EAX,EDI
// 0044d357: MOV EDI,ECX
// 0044d359: IMUL EDX
// 0044d35b: IDIV EBX
// 0044d35d: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 0044d361: MOVSD ES:EDI,ESI
// 0044d362: MOVSD ES:EDI,ESI
// 0044d363: MOVSD ES:EDI,ESI
// 0044d364: MOV EAX,ECX
// 0044d366: ADD ESP,0xc
// 0044d369: POP EDI
// 0044d36a: POP EBX
// 0044d36b: RET
