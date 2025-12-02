// Name: core_dcamera.cpp_CDemonCamera_screenToWorldWithAlpha_FUN_0044d600
// Address: 0044d600
// Address Range: [[0044d600, 0044d7c6]]
// Convention: __cdecl
// Signature: CVector3i * core_dcamera.cpp_CDemonCamera_screenToWorldWithAlpha_FUN_0044d600(CDemonCamera * this_ptr, CVector3i * output_ptr, CVector3i * input_ptr)
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer g_CDemonRendererInstance
// Function calls:
//   engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0048ce00

#include "nocturne.h"

CVector3i * __cdecl
core_dcamera_cpp_CDemonCamera_screenToWorldWithAlpha_FUN_0044d600
          (CDemonCamera *this_ptr,CVector3i *output_ptr,CVector3i *input_ptr)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  BADSPACEBASE *in_ESP;
  CVector3i *unaff_EBP;
  undefined4 *puVar5;
  byte bVar6;
  int aiStackY_1000 [1013];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar6 = 0;
  local_20 = output_ptr->z;
  local_28 = output_ptr->x;
  local_24 = output_ptr->y;
  iVar4 = engine_drender_cpp_CDemonRenderer_getAlphaMask_FUN_0048ce00(g_CDemonRendererPtr);
  if (iVar4 == 0) {
    lVar1 = (longlong)local_20 * (longlong)(this_ptr->inverted_matrix).m[1].x +
            (longlong)local_24 * (longlong)(this_ptr->inverted_matrix).m[0].x +
            (longlong)local_1c * (longlong)(this_ptr->inverted_matrix).m[2].x;
    local_18 = (this_ptr->camera_origin).x +
               ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)local_20 * (longlong)(this_ptr->inverted_matrix).m[1].y +
            (longlong)local_24 * (longlong)(this_ptr->inverted_matrix).m[0].y +
            (longlong)local_1c * (longlong)(this_ptr->inverted_matrix).m[2].y;
    local_14 = (this_ptr->camera_origin).y +
               ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  }
  else {
    lVar1 = (longlong)this_ptr->alpha_transform_matrices[9][iVar4] * (longlong)local_24;
    lVar2 = (longlong)this_ptr->alpha_transform_matrices[0xc][iVar4] * (longlong)local_20;
    lVar3 = (longlong)
            *(int *)((int)((this_ptr->transform_state).saved_source_matrix.m + -10) + iVar4 * 4) *
            (longlong)local_1c;
    local_18 = this_ptr->alpha_translations[iVar4].x +
               ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
               ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
               ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10);
    lVar1 = (longlong)this_ptr->alpha_transform_matrices[10][iVar4] * (longlong)local_24;
    lVar2 = (longlong)this_ptr->alpha_transform_matrices[0xd][iVar4] * (longlong)local_20;
    lVar3 = (longlong)
            *(int *)((int)(this_ptr->transform_state).saved_source_matrix.m + iVar4 * 4 + -0x58) *
            (longlong)local_1c;
    local_14 = this_ptr->alpha_translations[iVar4].y +
               ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
               ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
               ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
  }
  puVar5 = (undefined4 *)((int)unaff_EBP + (uint)bVar6 * -8 + 4);
  unaff_EBP->x = local_18;
  *puVar5 = *(undefined4 *)((int)&stack0xffffffec + (uint)bVar6 * -8);
  puVar5[(uint)bVar6 * -2 + 1] =
       *(undefined4 *)(&stack0xfffffff0 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  return unaff_EBP;
}


// Assembly code:
// 0044d600: PUSH EBX
//   Label: core_dcamera.cpp_CDemonCamera_screenToWorldWithAlpha_FUN_0044d600
// 0044d601: PUSH EDI
// 0044d602: PUSH EBP
// 0044d603: SUB ESP,0x1c
// 0044d606: MOV EBP,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 0044d60a: MOV ECX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x8] (READ)
// 0044d60e: MOV dword ptr [ESP + 0x18],ESI
//   XREF to: Stack[-0x10] (WRITE)
// 0044d612: MOV EAX,dword ptr [ECX + 0x8]
// 0044d615: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0044d619: MOV EAX,dword ptr [ECX]
// 0044d61b: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x28] (DATA)
// 0044d61e: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0044d624: MOV EAX,dword ptr [ECX + 0x4]
// 0044d627: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 0044d628: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0044d62c: CALL engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0048ce00
//   XREF to: 0048ce00 (UNCONDITIONAL_CALL)
// 0044d631: MOV EBX,EAX
// 0044d633: ADD ESP,0x4
// 0044d636: TEST EAX,EAX
// 0044d638: JNZ 0x0044d6f0
//   XREF to: 0044d6f0 (CONDITIONAL_JUMP)
// 0044d63e: MOV ESI,ESP
// 0044d640: LEA EDI,[EBP + 0x19c]
// 0044d646: MOV EAX,dword ptr [ESI]
//   XREF to: Stack[-0x28] (DATA)
// 0044d648: IMUL dword ptr [EDI]
// 0044d64a: MOV EBX,EAX
// 0044d64c: MOV ECX,EDX
// 0044d64e: MOV EAX,dword ptr [ESI + 0x4]
//   XREF to: Stack[-0x24] (READ)
// 0044d651: IMUL dword ptr [EDI + 0xc]
// 0044d654: ADD EBX,EAX
// 0044d656: ADC ECX,EDX
// 0044d658: MOV EAX,dword ptr [ESI + 0x8]
//   XREF to: Stack[-0x20] (READ)
// 0044d65b: IMUL dword ptr [EDI + 0x18]
// 0044d65e: ADD EAX,EBX
// 0044d660: ADC EDX,ECX
// 0044d662: SHRD EAX,EDX,0x10
// 0044d666: MOV ECX,dword ptr [EBP + 0x16c]
// 0044d66c: MOV ESI,ESP
// 0044d66e: ADD ECX,EAX
// 0044d670: LEA EDI,[EBP + 0x1a0]
// 0044d676: MOV dword ptr [ESP + 0xc],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 0044d67a: MOV EAX,dword ptr [ESI]
//   XREF to: Stack[-0x28] (DATA)
// 0044d67c: IMUL dword ptr [EDI]
// 0044d67e: MOV EBX,EAX
// 0044d680: MOV ECX,EDX
// 0044d682: MOV EAX,dword ptr [ESI + 0x4]
//   XREF to: Stack[-0x24] (READ)
// 0044d685: IMUL dword ptr [EDI + 0xc]
// 0044d688: ADD EBX,EAX
// 0044d68a: ADC ECX,EDX
// 0044d68c: MOV EAX,dword ptr [ESI + 0x8]
//   XREF to: Stack[-0x20] (READ)
// 0044d68f: IMUL dword ptr [EDI + 0x18]
// 0044d692: ADD EAX,EBX
// 0044d694: ADC EDX,ECX
// 0044d696: SHRD EAX,EDX,0x10
// 0044d69a: MOV ECX,dword ptr [EBP + 0x170]
// 0044d6a0: MOV ESI,ESP
// 0044d6a2: ADD ECX,EAX
// 0044d6a4: LEA EDI,[EBP + 0x1a4]
// 0044d6aa: MOV dword ptr [ESP + 0x10],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 0044d6ae: MOV EAX,dword ptr [ESI]
//   XREF to: Stack[-0x28] (DATA)
// 0044d6b0: IMUL dword ptr [EDI]
// 0044d6b2: MOV EBX,EAX
// 0044d6b4: MOV ECX,EDX
// 0044d6b6: MOV EAX,dword ptr [ESI + 0x4]
//   XREF to: Stack[-0x24] (READ)
// 0044d6b9: IMUL dword ptr [EDI + 0xc]
// 0044d6bc: ADD EBX,EAX
// 0044d6be: ADC ECX,EDX
// 0044d6c0: MOV EAX,dword ptr [ESI + 0x8]
//   XREF to: Stack[-0x20] (READ)
// 0044d6c3: IMUL dword ptr [EDI + 0x18]
// 0044d6c6: ADD EAX,EBX
// 0044d6c8: ADC EDX,ECX
// 0044d6ca: SHRD EAX,EDX,0x10
// 0044d6ce: MOV ECX,dword ptr [EBP + 0x174]
// 0044d6d4: ADD ECX,EAX
//   Label: LAB_0044d6d4
// 0044d6d6: MOV dword ptr [ESP + 0x14],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 0044d6da: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x10] (READ)
// 0044d6de: LEA ESI,[ESP + 0xc]
//   XREF to: Stack[-0x1c] (DATA)
// 0044d6e2: MOVSD ES:EDI,ESI
// 0044d6e3: MOVSD ES:EDI,ESI
// 0044d6e4: MOVSD ES:EDI,ESI
// 0044d6e5: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x10] (READ)
// 0044d6e9: ADD ESP,0x1c
// 0044d6ec: POP EBP
// 0044d6ed: POP EDI
// 0044d6ee: POP EBX
// 0044d6ef: RET
// 0044d6f0: LEA ECX,[EAX*0x4 + 0x0]
//   Label: LAB_0044d6f0
// 0044d6f7: ADD ECX,EBP
// 0044d6f9: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 0044d6fc: MOV EAX,dword ptr [ECX + 0x136c]
// 0044d702: IMUL EDX
// 0044d704: SHRD EAX,EDX,0x10
// 0044d708: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x24] (READ)
// 0044d70c: MOV ESI,EAX
// 0044d70e: MOV EAX,dword ptr [ECX + 0x13cc]
// 0044d714: IMUL EDX
// 0044d716: SHRD EAX,EDX,0x10
// 0044d71a: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (READ)
// 0044d71e: ADD ESI,EAX
// 0044d720: MOV EAX,dword ptr [ECX + 0x142c]
// 0044d726: IMUL EDX
// 0044d728: SHRD EAX,EDX,0x10
// 0044d72c: ADD ESI,EAX
// 0044d72e: MOV EAX,EBX
// 0044d730: SHL EAX,0x2
// 0044d733: SUB EAX,EBX
// 0044d735: SHL EAX,0x2
// 0044d738: ADD EBP,EAX
// 0044d73a: MOV EAX,dword ptr [EBP + 0x11ec]
// 0044d740: ADD EAX,ESI
// 0044d742: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 0044d745: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0044d749: MOV EAX,dword ptr [ECX + 0x138c]
// 0044d74f: IMUL EDX
// 0044d751: SHRD EAX,EDX,0x10
// 0044d755: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x24] (READ)
// 0044d759: MOV EBX,EAX
// 0044d75b: MOV EAX,dword ptr [ECX + 0x13ec]
// 0044d761: IMUL EDX
// 0044d763: SHRD EAX,EDX,0x10
// 0044d767: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (READ)
// 0044d76b: ADD EBX,EAX
// 0044d76d: MOV EAX,dword ptr [ECX + 0x144c]
// 0044d773: IMUL EDX
// 0044d775: SHRD EAX,EDX,0x10
// 0044d779: ADD EAX,EBX
// 0044d77b: MOV EBX,dword ptr [EBP + 0x11f0]
// 0044d781: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 0044d784: ADD EBX,EAX
// 0044d786: MOV EAX,dword ptr [ECX + 0x13ac]
// 0044d78c: MOV dword ptr [ESP + 0x10],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 0044d790: IMUL EDX
// 0044d792: SHRD EAX,EDX,0x10
// 0044d796: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x24] (READ)
// 0044d79a: MOV EBX,EAX
// 0044d79c: MOV EAX,dword ptr [ECX + 0x140c]
// 0044d7a2: IMUL EDX
// 0044d7a4: SHRD EAX,EDX,0x10
// 0044d7a8: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (READ)
// 0044d7ac: ADD EBX,EAX
// 0044d7ae: MOV EAX,dword ptr [ECX + 0x146c]
// 0044d7b4: IMUL EDX
// 0044d7b6: SHRD EAX,EDX,0x10
// 0044d7ba: MOV ECX,dword ptr [EBP + 0x11f4]
// 0044d7c0: ADD EAX,EBX
// 0044d7c2: JMP 0x0044d6d4
//   XREF to: 0044d6d4 (UNCONDITIONAL_JUMP)
