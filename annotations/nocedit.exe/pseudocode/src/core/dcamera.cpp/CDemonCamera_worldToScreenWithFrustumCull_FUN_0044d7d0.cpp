// Name: core_dcamera.cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044d7d0
// Address: 0044d7d0
// Address Range: [[0044d7d0, 0044da86]]
// Convention: __cdecl
// Signature: CVector3i * core_dcamera.cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044d7d0(CDemonCamera * this_ptr, CVector3i * output_ptr, CVector3i * input_ptr)
// Cross-references:
//   core_dcamera.cpp_CDemonCamera_precomputeLight_FUN_0044de10 (0044de10) at 0044e265 [UNCONDITIONAL_CALL]
//   core_dcamera.cpp_CDemonCamera_renderLightCoronas_FUN_00450ac0 (00450ac0) at 00450d16 [UNCONDITIONAL_CALL]
//   core_dcamera.cpp_CDemonCamera_renderLightCoronas_FUN_004518f0 (004518f0) at 0045193e [UNCONDITIONAL_CALL]
//   core_dcamera.cpp_renderCoronaProjectedTextureScanline_FUN_004507a0 (004507a0) at 00450890 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_beginFadeIn_FUN_004e0920 (004e0920) at 004e0883 [UNCONDITIONAL_CALL]
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CVector3i g_CameraOutOfBoundsCoord
//   undefined4 g_CameraOutOfBoundsZ
//   CDemonRenderer g_CDemonRendererInstance
// Function calls:
//   engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0048ce00

#include "nocturne.h"

CVector3i * __cdecl
core_dcamera_cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044d7d0
          (CDemonCamera *this_ptr,CVector3i *output_ptr,CVector3i *input_ptr)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  BADSPACEBASE *in_ESP;
  CVector3i *unaff_ESI;
  undefined4 *puVar6;
  byte bVar7;
  int aiStackY_1014 [1016];
  int iStack_2c;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  bVar7 = 0;
  iVar4 = engine_drender_cpp_CDemonRenderer_getAlphaMask_FUN_0048ce00(g_CDemonRendererPtr);
  if (iVar4 == 0) {
    local_20 = output_ptr->x - (this_ptr->camera_origin).x;
    local_1c = output_ptr->y - (this_ptr->camera_origin).y;
    local_18 = output_ptr->z - (this_ptr->camera_origin).z;
    lVar1 = (longlong)(this_ptr->source_matrix).m[0][2] * (longlong)local_20;
    lVar2 = (longlong)(this_ptr->source_matrix).m[1][2] * (longlong)local_1c;
    lVar3 = (longlong)(this_ptr->source_matrix).m[2][2] * (longlong)local_18;
    iVar5 = ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
            ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
            ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    if (0 < iVar5) {
      lVar1 = (longlong)(this_ptr->source_matrix).m[0][0] * (longlong)local_20;
      lVar2 = (longlong)(this_ptr->source_matrix).m[1][0] * (longlong)local_1c;
      lVar3 = (longlong)(this_ptr->source_matrix).m[2][0] * (longlong)local_18;
      local_14 = ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
                 ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
                 ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
      if ((local_14 < iVar5) && (-iVar5 < local_14)) {
        lVar1 = (longlong)(this_ptr->source_matrix).m[0][1] * (longlong)local_20;
        lVar2 = (longlong)(this_ptr->source_matrix).m[1][1] * (longlong)local_1c;
        lVar3 = (longlong)(this_ptr->source_matrix).m[2][1] * (longlong)local_18;
        local_10 = ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
                   ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
                   ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
        if ((local_10 < iVar5) && (-iVar5 < local_10)) {
LAB_0044da32:
          local_14 = (this_ptr->saved_viewport_rect).right +
                     (int)(((longlong)local_14 * (longlong)(this_ptr->saved_viewport_rect).left) /
                          (longlong)iVar5);
          local_10 = (this_ptr->saved_viewport_rect).bottom +
                     (int)(((longlong)local_10 * (longlong)(this_ptr->saved_viewport_rect).top) /
                          (longlong)iVar5);
          iStack_2c = local_14;
          *(undefined4 *)(&stack0xffffffd8 + (uint)bVar7 * -8) =
               *(undefined4 *)((int)&stack0xfffffff0 + (uint)bVar7 * -8);
          *(undefined4 *)(&stack0xffffffdc + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
               *(undefined4 *)(&stack0xfffffff4 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
          puVar6 = (undefined4 *)((int)unaff_ESI + (uint)bVar7 * -8 + 4);
          unaff_ESI->x = iStack_2c;
          *puVar6 = *(undefined4 *)(&stack0xffffffd8 + (uint)bVar7 * -8);
          puVar6[(uint)bVar7 * -2 + 1] =
               *(undefined4 *)(&stack0xffffffdc + (uint)bVar7 * -8 + (uint)bVar7 * -8);
          return unaff_ESI;
        }
      }
    }
  }
  else {
    local_20 = output_ptr->x - this_ptr->alpha_translations[iVar4].x;
    local_1c = output_ptr->y - this_ptr->alpha_translations[iVar4].y;
    local_18 = output_ptr->z - this_ptr->alpha_translations[iVar4].z;
    lVar1 = (longlong)this_ptr->alpha_transform_matrices[2][iVar4] * (longlong)local_20;
    lVar2 = (longlong)this_ptr->alpha_transform_matrices[5][iVar4] * (longlong)local_1c;
    lVar3 = (longlong)this_ptr->alpha_transform_matrices[8][iVar4] * (longlong)local_18;
    iVar5 = ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
            ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
            ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    if (0 < iVar5) {
      lVar1 = (longlong)this_ptr->alpha_transform_matrices[0][iVar4] * (longlong)local_20;
      lVar2 = (longlong)this_ptr->alpha_transform_matrices[3][iVar4] * (longlong)local_1c;
      lVar3 = (longlong)this_ptr->alpha_transform_matrices[6][iVar4] * (longlong)local_18;
      local_14 = ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
                 ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
                 ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
      if ((local_14 < iVar5) && (-iVar5 < local_14)) {
        lVar1 = (longlong)this_ptr->alpha_transform_matrices[1][iVar4] * (longlong)local_20;
        lVar2 = (longlong)this_ptr->alpha_transform_matrices[4][iVar4] * (longlong)local_1c;
        lVar3 = (longlong)this_ptr->alpha_transform_matrices[7][iVar4] * (longlong)local_18;
        local_10 = ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
                   ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
                   ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
        if ((local_10 < iVar5) && (-iVar5 < local_10)) goto LAB_0044da32;
      }
    }
  }
  iStack_2c = g_CameraOutOfBoundsCoord.x;
  *(undefined4 *)(&stack0xffffffd8 + (uint)bVar7 * -8) =
       *(undefined4 *)((int)&g_CameraOutOfBoundsCoord + (uint)bVar7 * -8 + 4);
  *(undefined4 *)(&stack0xffffffdc + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
       *(undefined4 *)((uint)bVar7 * -8 + 0x151bfa0 + (uint)bVar7 * -8);
  puVar6 = (undefined4 *)((int)unaff_ESI + (uint)bVar7 * -8 + 4);
  unaff_ESI->x = iStack_2c;
  *puVar6 = *(undefined4 *)(&stack0xffffffd8 + (uint)bVar7 * -8);
  puVar6[(uint)bVar7 * -2 + 1] =
       *(undefined4 *)(&stack0xffffffdc + (uint)bVar7 * -8 + (uint)bVar7 * -8);
  return unaff_ESI;
}


// Assembly code:
// 0044d7d0: PUSH EBX
//   Label: core_dcamera.cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044d7d0
// 0044d7d1: PUSH EDI
// 0044d7d2: PUSH EBP
// 0044d7d3: SUB ESP,0x24
// 0044d7d6: MOV EDI,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x8] (READ)
// 0044d7da: MOV EBP,ESI
// 0044d7dc: MOV ESI,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x4] (READ)
// 0044d7e0: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0044d7e6: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 0044d7e7: CALL engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0048ce00
//   XREF to: 0048ce00 (UNCONDITIONAL_CALL)
// 0044d7ec: MOV ECX,EAX
// 0044d7ee: ADD ESP,0x4
// 0044d7f1: TEST EAX,EAX
// 0044d7f3: JNZ 0x0044d914
//   XREF to: 0044d914 (CONDITIONAL_JUMP)
// 0044d7f9: MOV EAX,dword ptr [EDI]
// 0044d7fb: SUB EAX,dword ptr [ESI + 0x16c]
// 0044d801: MOV EDX,dword ptr [ESI + 0x170]
// 0044d807: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0044d80b: MOV EAX,dword ptr [EDI + 0x4]
// 0044d80e: SUB EAX,EDX
// 0044d810: MOV ECX,dword ptr [ESI + 0x174]
// 0044d816: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0044d81a: MOV EAX,dword ptr [EDI + 0x8]
// 0044d81d: SUB EAX,ECX
// 0044d81f: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x24] (READ)
// 0044d823: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0044d827: MOV EAX,dword ptr [ESI + 0x180]
// 0044d82d: IMUL EDX
// 0044d82f: SHRD EAX,EDX,0x10
// 0044d833: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x20] (READ)
// 0044d837: MOV ECX,EAX
// 0044d839: MOV EAX,dword ptr [ESI + 0x18c]
// 0044d83f: IMUL EDX
// 0044d841: SHRD EAX,EDX,0x10
// 0044d845: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x1c] (READ)
// 0044d849: ADD ECX,EAX
// 0044d84b: MOV EAX,dword ptr [ESI + 0x198]
// 0044d851: IMUL EDX
// 0044d853: SHRD EAX,EDX,0x10
// 0044d857: ADD ECX,EAX
// 0044d859: MOV dword ptr [ESP + 0x20],ECX
//   XREF to: Stack[-0x10] (WRITE)
// 0044d85d: TEST ECX,ECX
// 0044d85f: JG 0x0044d87b
//   XREF to: 0044d87b (CONDITIONAL_JUMP)
// 0044d861: MOV EDI,ESP
//   Label: LAB_0044d861
// 0044d863: MOV ESI,0x151bf98
//   XREF to: 0151bf98 (DATA)
// 0044d868: MOVSD ES:EDI,ESI
//   XREF to: 0151bf98 (READ)
// 0044d869: MOVSD ES:EDI,ESI
//   XREF to: 0151bf9c (READ)
// 0044d86a: MOVSD ES:EDI,ESI
//   XREF to: 0151bfa0 (READ)
// 0044d86b: MOV ESI,ESP
// 0044d86d: MOV EDI,EBP
// 0044d86f: MOVSD ES:EDI,ESI
// 0044d870: MOVSD ES:EDI,ESI
// 0044d871: MOVSD ES:EDI,ESI
// 0044d872: MOV EAX,EBP
// 0044d874: ADD ESP,0x24
// 0044d877: POP EBP
// 0044d878: POP EDI
// 0044d879: POP EBX
// 0044d87a: RET
// 0044d87b: MOV EDX,dword ptr [ESP + 0xc]
//   Label: LAB_0044d87b
//   XREF to: Stack[-0x24] (READ)
// 0044d87f: MOV EAX,dword ptr [ESI + 0x178]
// 0044d885: IMUL EDX
// 0044d887: SHRD EAX,EDX,0x10
// 0044d88b: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x20] (READ)
// 0044d88f: MOV ECX,EAX
// 0044d891: MOV EAX,dword ptr [ESI + 0x184]
// 0044d897: IMUL EDX
// 0044d899: SHRD EAX,EDX,0x10
// 0044d89d: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x1c] (READ)
// 0044d8a1: ADD ECX,EAX
// 0044d8a3: MOV EAX,dword ptr [ESI + 0x190]
// 0044d8a9: IMUL EDX
// 0044d8ab: SHRD EAX,EDX,0x10
// 0044d8af: ADD ECX,EAX
// 0044d8b1: MOV EDI,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x10] (READ)
// 0044d8b5: MOV dword ptr [ESP + 0x18],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 0044d8b9: CMP ECX,EDI
// 0044d8bb: JGE 0x0044d861
//   XREF to: 0044d861 (CONDITIONAL_JUMP)
// 0044d8bd: MOV EBX,EDI
// 0044d8bf: NEG EBX
// 0044d8c1: CMP EBX,ECX
// 0044d8c3: JGE 0x0044d861
//   XREF to: 0044d861 (CONDITIONAL_JUMP)
// 0044d8c5: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x24] (READ)
// 0044d8c9: MOV EAX,dword ptr [ESI + 0x17c]
// 0044d8cf: IMUL EDX
// 0044d8d1: SHRD EAX,EDX,0x10
// 0044d8d5: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x20] (READ)
// 0044d8d9: MOV ECX,EAX
// 0044d8db: MOV EAX,dword ptr [ESI + 0x188]
// 0044d8e1: IMUL EDX
// 0044d8e3: SHRD EAX,EDX,0x10
// 0044d8e7: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x1c] (READ)
// 0044d8eb: ADD ECX,EAX
// 0044d8ed: MOV EAX,dword ptr [ESI + 0x194]
// 0044d8f3: IMUL EDX
// 0044d8f5: SHRD EAX,EDX,0x10
// 0044d8f9: ADD ECX,EAX
// 0044d8fb: MOV dword ptr [ESP + 0x1c],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 0044d8ff: CMP ECX,EDI
// 0044d901: JGE 0x0044d861
//   XREF to: 0044d861 (CONDITIONAL_JUMP)
// 0044d907: CMP EBX,ECX
// 0044d909: JL 0x0044da32
//   XREF to: 0044da32 (CONDITIONAL_JUMP)
// 0044d90f: JMP 0x0044d861
//   XREF to: 0044d861 (UNCONDITIONAL_JUMP)
// 0044d914: SHL EAX,0x2
//   Label: LAB_0044d914
// 0044d917: SUB EAX,ECX
// 0044d919: SHL EAX,0x2
// 0044d91c: LEA EDX,[ESI + EAX*0x1]
// 0044d91f: MOV EAX,dword ptr [EDI]
// 0044d921: MOV EBX,dword ptr [EDX + 0x11ec]
// 0044d927: SUB EAX,EBX
// 0044d929: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0044d92d: MOV EBX,dword ptr [EDX + 0x11f0]
// 0044d933: MOV EAX,dword ptr [EDI + 0x4]
// 0044d936: SUB EAX,EBX
// 0044d938: SHL ECX,0x2
// 0044d93b: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0044d93f: MOV EAX,dword ptr [EDI + 0x8]
// 0044d942: MOV EDI,dword ptr [EDX + 0x11f4]
// 0044d948: ADD ECX,ESI
// 0044d94a: SUB EAX,EDI
// 0044d94c: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x24] (READ)
// 0044d950: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0044d954: MOV EAX,dword ptr [ECX + 0x128c]
// 0044d95a: IMUL EDX
// 0044d95c: SHRD EAX,EDX,0x10
// 0044d960: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x20] (READ)
// 0044d964: MOV EDI,EAX
// 0044d966: MOV EAX,dword ptr [ECX + 0x12ec]
// 0044d96c: IMUL EDX
// 0044d96e: SHRD EAX,EDX,0x10
// 0044d972: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x1c] (READ)
// 0044d976: ADD EDI,EAX
// 0044d978: MOV EAX,dword ptr [ECX + 0x134c]
// 0044d97e: IMUL EDX
// 0044d980: SHRD EAX,EDX,0x10
// 0044d984: ADD EDI,EAX
// 0044d986: MOV dword ptr [ESP + 0x20],EDI
//   XREF to: Stack[-0x10] (WRITE)
// 0044d98a: TEST EDI,EDI
// 0044d98c: JLE 0x0044d861
//   XREF to: 0044d861 (CONDITIONAL_JUMP)
// 0044d992: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x24] (READ)
// 0044d996: MOV EAX,dword ptr [ECX + 0x124c]
// 0044d99c: IMUL EDX
// 0044d99e: SHRD EAX,EDX,0x10
// 0044d9a2: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x20] (READ)
// 0044d9a6: MOV EDI,EAX
// 0044d9a8: MOV EAX,dword ptr [ECX + 0x12ac]
// 0044d9ae: IMUL EDX
// 0044d9b0: SHRD EAX,EDX,0x10
// 0044d9b4: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x1c] (READ)
// 0044d9b8: ADD EDI,EAX
// 0044d9ba: MOV EAX,dword ptr [ECX + 0x130c]
// 0044d9c0: IMUL EDX
// 0044d9c2: SHRD EAX,EDX,0x10
// 0044d9c6: ADD EDI,EAX
// 0044d9c8: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x10] (READ)
// 0044d9cc: MOV dword ptr [ESP + 0x18],EDI
//   XREF to: Stack[-0x18] (WRITE)
// 0044d9d0: CMP EDI,EDX
// 0044d9d2: JGE 0x0044d861
//   XREF to: 0044d861 (CONDITIONAL_JUMP)
// 0044d9d8: MOV EBX,EDX
// 0044d9da: NEG EBX
// 0044d9dc: CMP EBX,EDI
// 0044d9de: JGE 0x0044d861
//   XREF to: 0044d861 (CONDITIONAL_JUMP)
// 0044d9e4: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x24] (READ)
// 0044d9e8: MOV EAX,dword ptr [ECX + 0x126c]
// 0044d9ee: IMUL EDX
// 0044d9f0: SHRD EAX,EDX,0x10
// 0044d9f4: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x20] (READ)
// 0044d9f8: MOV EDI,EAX
// 0044d9fa: MOV EAX,dword ptr [ECX + 0x12cc]
// 0044da00: IMUL EDX
// 0044da02: SHRD EAX,EDX,0x10
// 0044da06: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x1c] (READ)
// 0044da0a: ADD EDI,EAX
// 0044da0c: MOV EAX,dword ptr [ECX + 0x132c]
// 0044da12: IMUL EDX
// 0044da14: SHRD EAX,EDX,0x10
// 0044da18: ADD EDI,EAX
// 0044da1a: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x10] (READ)
// 0044da1e: MOV dword ptr [ESP + 0x1c],EDI
//   XREF to: Stack[-0x14] (WRITE)
// 0044da22: CMP EDI,EDX
// 0044da24: JGE 0x0044d861
//   XREF to: 0044d861 (CONDITIONAL_JUMP)
// 0044da2a: CMP EBX,EDI
// 0044da2c: JGE 0x0044d861
//   XREF to: 0044d861 (CONDITIONAL_JUMP)
// 0044da32: MOV EBX,dword ptr [ESP + 0x20]
//   Label: LAB_0044da32
//   XREF to: Stack[-0x10] (READ)
// 0044da36: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x18] (READ)
// 0044da3a: MOV EDX,dword ptr [ESI + 0x1c0]
// 0044da40: IMUL EDX
// 0044da42: IDIV EBX
// 0044da44: MOV EDX,dword ptr [ESI + 0x1c8]
// 0044da4a: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x10] (READ)
// 0044da4e: ADD EDX,EAX
// 0044da50: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x14] (READ)
// 0044da54: MOV dword ptr [ESP + 0x18],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 0044da58: MOV EDX,dword ptr [ESI + 0x1c4]
// 0044da5e: IMUL EDX
// 0044da60: IDIV EBX
// 0044da62: MOV EDX,dword ptr [ESI + 0x1cc]
// 0044da68: MOV EDI,ESP
// 0044da6a: ADD EDX,EAX
// 0044da6c: LEA ESI,[ESP + 0x18]
//   XREF to: Stack[-0x18] (DATA)
// 0044da70: MOV dword ptr [ESP + 0x1c],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 0044da74: MOVSD ES:EDI,ESI
// 0044da75: MOVSD ES:EDI,ESI
// 0044da76: MOVSD ES:EDI,ESI
// 0044da77: MOV ESI,ESP
// 0044da79: MOV EDI,EBP
// 0044da7b: MOVSD ES:EDI,ESI
// 0044da7c: MOVSD ES:EDI,ESI
// 0044da7d: MOVSD ES:EDI,ESI
// 0044da7e: MOV EAX,EBP
// 0044da80: ADD ESP,0x24
// 0044da83: POP EBP
// 0044da84: POP EDI
// 0044da85: POP EBX
// 0044da86: RET
