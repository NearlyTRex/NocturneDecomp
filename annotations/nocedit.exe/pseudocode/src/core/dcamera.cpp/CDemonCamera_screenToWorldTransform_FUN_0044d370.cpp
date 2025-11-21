// Name: core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370
// Address: 0044d370
// Address Range: [[0044d370, 0044d472]]
// Convention: __cdecl
// Signature: CVector3i * core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370(CDemonCamera * this_ptr, CVector3i * output_ptr, CVector3i * input_ptr)
// Cross-references:
//   core_dcamera.cpp_CDemonCamera_computeVisibleFrustumBounds_FUN_00454060 (00454060) at 0045422d [UNCONDITIONAL_CALL]
//   core_dcamera.cpp_CDemonCamera_precomputeNormals_FUN_0044e360 (0044e360) at 0044e44f [UNCONDITIONAL_CALL]
//   core_dcamera.cpp_CDemonCamera_screenToWorldRay_FUN_00452900 (00452900) at 0045293e [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_processFrame_FUN_004da100 (004da100) at 004da30a [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_00535c60 (00535c60) at 00535ca5 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionAndEditGore_FUN_0053e220 (0053e220) at 0053e617 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_FUN_005800d0 (005800d0) at 00580145 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_Something2MemoryConstructorMaybe_FUN_0057fd00 (0057fd00) at 0057fdf4 [UNCONDITIONAL_CALL]
//   core_sound.cpp_updateListeners_FUN_005b1870 (005b1870) at 005b1d43 [UNCONDITIONAL_CALL]

#include "nocturne.h"

CVector3i * __cdecl
core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370
          (CDemonCamera *this_ptr,CVector3i *output_ptr,CVector3i *input_ptr)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  CVector3i *unaff_ESI;
  
  iVar1 = output_ptr->z;
  iVar6 = (int)(((longlong)(output_ptr->x - (this_ptr->saved_viewport_rect).right) * (longlong)iVar1
                ) / (longlong)(this_ptr->saved_viewport_rect).left);
  iVar7 = (int)(((longlong)(output_ptr->y - (this_ptr->saved_viewport_rect).bottom) *
                (longlong)iVar1) / (longlong)(this_ptr->saved_viewport_rect).top);
  lVar3 = (longlong)iVar7 * (longlong)(this_ptr->inverted_matrix).m[1][0] +
          (longlong)iVar6 * (longlong)(this_ptr->inverted_matrix).m[0][0] +
          (longlong)iVar1 * (longlong)(this_ptr->inverted_matrix).m[2][0];
  lVar4 = (longlong)iVar7 * (longlong)(this_ptr->inverted_matrix).m[1][1] +
          (longlong)iVar6 * (longlong)(this_ptr->inverted_matrix).m[0][1] +
          (longlong)iVar1 * (longlong)(this_ptr->inverted_matrix).m[2][1];
  iVar2 = (this_ptr->camera_origin).y;
  lVar5 = (longlong)iVar7 * (longlong)(this_ptr->inverted_matrix).m[1][2] +
          (longlong)iVar6 * (longlong)(this_ptr->inverted_matrix).m[0][2] +
          (longlong)iVar1 * (longlong)(this_ptr->inverted_matrix).m[2][2];
  iVar1 = (this_ptr->camera_origin).z;
  unaff_ESI->x = (this_ptr->camera_origin).x +
                 ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
  unaff_ESI->y = iVar2 + ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10);
  unaff_ESI->z = iVar1 + ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10);
  return unaff_ESI;
}


// Assembly code:
// 0044d370: PUSH EBX
//   Label: core_dcamera.cpp_CDemonCamera_screenToWorldTransform_FUN_0044d370
// 0044d371: PUSH EDI
// 0044d372: PUSH EBP
// 0044d373: SUB ESP,0x1c
// 0044d376: MOV EBP,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 0044d37a: MOV dword ptr [ESP + 0x18],ESI
//   XREF to: Stack[-0x10] (WRITE)
// 0044d37e: MOV ESI,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x8] (READ)
// 0044d382: MOV EAX,dword ptr [ESI + 0x8]
// 0044d385: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0044d389: MOV EAX,dword ptr [ESI]
// 0044d38b: MOV EDX,dword ptr [EBP + 0x1c8]
// 0044d391: MOV EBX,dword ptr [EBP + 0x1c0]
// 0044d397: SUB EAX,EDX
// 0044d399: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (READ)
// 0044d39d: LEA EDI,[EBP + 0x19c]
// 0044d3a3: IMUL EDX
// 0044d3a5: IDIV EBX
// 0044d3a7: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x28] (DATA)
// 0044d3aa: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (READ)
// 0044d3ae: MOV EAX,dword ptr [ESI + 0x4]
// 0044d3b1: MOV ECX,dword ptr [EBP + 0x1cc]
// 0044d3b7: MOV EBX,dword ptr [EBP + 0x1c4]
// 0044d3bd: SUB EAX,ECX
// 0044d3bf: MOV ESI,ESP
// 0044d3c1: IMUL EDX
// 0044d3c3: IDIV EBX
// 0044d3c5: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0044d3c9: MOV EAX,dword ptr [ESI]
//   XREF to: Stack[-0x28] (DATA)
// 0044d3cb: IMUL dword ptr [EDI]
// 0044d3cd: MOV EBX,EAX
// 0044d3cf: MOV ECX,EDX
// 0044d3d1: MOV EAX,dword ptr [ESI + 0x4]
//   XREF to: Stack[-0x24] (READ)
// 0044d3d4: IMUL dword ptr [EDI + 0xc]
// 0044d3d7: ADD EBX,EAX
// 0044d3d9: ADC ECX,EDX
// 0044d3db: MOV EAX,dword ptr [ESI + 0x8]
//   XREF to: Stack[-0x20] (READ)
// 0044d3de: IMUL dword ptr [EDI + 0x18]
// 0044d3e1: ADD EAX,EBX
// 0044d3e3: ADC EDX,ECX
// 0044d3e5: SHRD EAX,EDX,0x10
// 0044d3e9: MOV EBX,dword ptr [EBP + 0x16c]
// 0044d3ef: MOV ESI,ESP
// 0044d3f1: ADD EBX,EAX
// 0044d3f3: LEA EDI,[EBP + 0x1a0]
// 0044d3f9: MOV dword ptr [ESP + 0xc],EBX
//   XREF to: Stack[-0x1c] (WRITE)
// 0044d3fd: MOV EAX,dword ptr [ESI]
//   XREF to: Stack[-0x28] (DATA)
// 0044d3ff: IMUL dword ptr [EDI]
// 0044d401: MOV EBX,EAX
// 0044d403: MOV ECX,EDX
// 0044d405: MOV EAX,dword ptr [ESI + 0x4]
//   XREF to: Stack[-0x24] (READ)
// 0044d408: IMUL dword ptr [EDI + 0xc]
// 0044d40b: ADD EBX,EAX
// 0044d40d: ADC ECX,EDX
// 0044d40f: MOV EAX,dword ptr [ESI + 0x8]
//   XREF to: Stack[-0x20] (READ)
// 0044d412: IMUL dword ptr [EDI + 0x18]
// 0044d415: ADD EAX,EBX
// 0044d417: ADC EDX,ECX
// 0044d419: SHRD EAX,EDX,0x10
// 0044d41d: MOV EBX,dword ptr [EBP + 0x170]
// 0044d423: MOV ESI,ESP
// 0044d425: ADD EBX,EAX
// 0044d427: LEA EDI,[EBP + 0x1a4]
// 0044d42d: MOV dword ptr [ESP + 0x10],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 0044d431: MOV EAX,dword ptr [ESI]
//   XREF to: Stack[-0x28] (DATA)
// 0044d433: IMUL dword ptr [EDI]
// 0044d435: MOV EBX,EAX
// 0044d437: MOV ECX,EDX
// 0044d439: MOV EAX,dword ptr [ESI + 0x4]
//   XREF to: Stack[-0x24] (READ)
// 0044d43c: IMUL dword ptr [EDI + 0xc]
// 0044d43f: ADD EBX,EAX
// 0044d441: ADC ECX,EDX
// 0044d443: MOV EAX,dword ptr [ESI + 0x8]
//   XREF to: Stack[-0x20] (READ)
// 0044d446: IMUL dword ptr [EDI + 0x18]
// 0044d449: ADD EAX,EBX
// 0044d44b: ADC EDX,ECX
// 0044d44d: SHRD EAX,EDX,0x10
// 0044d451: MOV EBX,dword ptr [EBP + 0x174]
// 0044d457: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x10] (READ)
// 0044d45b: ADD EBX,EAX
// 0044d45d: LEA ESI,[ESP + 0xc]
//   XREF to: Stack[-0x1c] (DATA)
// 0044d461: MOV dword ptr [ESP + 0x14],EBX
//   XREF to: Stack[-0x14] (WRITE)
// 0044d465: MOVSD ES:EDI,ESI
// 0044d466: MOVSD ES:EDI,ESI
// 0044d467: MOVSD ES:EDI,ESI
// 0044d468: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x10] (READ)
// 0044d46c: ADD ESP,0x1c
// 0044d46f: POP EBP
// 0044d470: POP EDI
// 0044d471: POP EBX
// 0044d472: RET
