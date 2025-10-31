// Name: core_dmodel.cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010
// Address: 00478010
// Address Range: [[00478010, 00478187]]
// Convention: __cdecl
// Signature: void core_dmodel.cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010(CKeyFramedModel * model_ptr)
// Cross-references:
//   core_dmodel.cpp_CKeyFramedModel_applyBias_FUN_0047c370 (0047c370) at 0047c460 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_applyVertexBias_FUN_0047c2d0 (0047c2d0) at 0047c2db [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_importFromS3D_FUN_00479330 (00479330) at 00479eec [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_load_FUN_00476db0 (00476db0) at 00476e95 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_recenter_FUN_0047c220 (0047c220) at 0047c229 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_scaleToHeight_FUN_0047c470 (0047c470) at 0047c476 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_scale_FUN_0047c4d0 (0047c4d0) at 0047c4f7 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 (0047cbc0) at 0047d53e [UNCONDITIONAL_CALL]
// Globals:
//   double g_FixedPointScale = 0.00390625
// Function calls:
//   core_box.cpp_CBoundingBox3D_expand_FUN_00420240

#include "nocturne.h"

void __cdecl
core_dmodel_cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010(CKeyFramedModel *model_ptr)

{
  CVector3i *pCVar1;
  CVector3i *pCVar2;
  CVector3i *pCVar3;
  CBoundingBox3D *this_ptr;
  CVector3i **ppCVar4;
  float fVar5;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  int iVar6;
  CBoundingBox3D *local_14;
  
  if (0 < model_ptr->frame_count) {
    local_14 = (CBoundingBox3D *)&model_ptr->bounds_min;
    do {
      this_ptr = (CBoundingBox3D *)model_ptr->frame_bounds;
      ppCVar4 = model_ptr->vertex_list;
      fVar5 = (float)g_FixedPointScale;
      pCVar1 = *ppCVar4;
      pCVar2 = ppCVar4[1];
      pCVar3 = ppCVar4[2];
      if (this_ptr != (CBoundingBox3D *)&stack0xffffffd8) {
        (this_ptr->min).x = (float)(int)pCVar1 * fVar5;
        (this_ptr->min).y = (float)(int)pCVar2 * fVar5;
        (this_ptr->min).z = (float)(int)pCVar3 * fVar5;
      }
      if (&this_ptr->max != (CVector3f *)&stack0xffffffd8) {
        (this_ptr->max).x = (float)(int)pCVar1 * fVar5;
        (this_ptr->max).y = (float)(int)pCVar2 * fVar5;
        (this_ptr->max).z = (float)(int)pCVar3 * fVar5;
      }
      iVar6 = 1;
      if (1 < model_ptr->vertex_count) {
        do {
          iVar6 = iVar6 + 1;
          core_box_cpp_CBoundingBox3D_expand_FUN_00420240(this_ptr,(CVector3f *)&stack0xffffffd8);
        } while (iVar6 < model_ptr->vertex_count);
      }
      if (this_ptr != local_14) {
        (local_14->min).x = (this_ptr->min).x;
        (local_14->min).y = (this_ptr->min).y;
        (local_14->min).z = (this_ptr->min).z;
      }
      if ((CBoundingBox3D *)&local_14->max != this_ptr) {
        (local_14->max).x = (this_ptr->min).x;
        (local_14->max).y = (this_ptr->min).y;
        (local_14->max).z = (this_ptr->min).z;
      }
      core_box_cpp_CBoundingBox3D_expand_FUN_00420240(local_14,(CVector3f *)this_ptr);
      core_box_cpp_CBoundingBox3D_expand_FUN_00420240(local_14,&this_ptr->max);
      local_14 = local_14 + 1;
      unaff_EBP = unaff_EBP + 1;
    } while (unaff_EBP < model_ptr->frame_count);
  }
  return;
}


// Assembly code:
// 00478010: PUSH EBX
//   Label: core_dmodel.cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010
// 00478011: PUSH ESI
// 00478012: PUSH EDI
// 00478013: PUSH EBP
// 00478014: SUB ESP,0x18
// 00478017: MOV EBP,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 0047801b: XOR EDX,EDX
// 0047801d: MOV ECX,dword ptr [EBP + 0x100]
// 00478023: MOV dword ptr [ESP + 0x10],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 00478027: TEST ECX,ECX
// 00478029: JLE 0x00478168
//   XREF to: 00478168 (CONDITIONAL_JUMP)
// 0047802f: LEA EAX,[EBP + 0x5678]
// 00478035: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 00478039: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0047803d: MOV EAX,dword ptr [ESP + 0x10]
//   Label: LAB_0047803d
//   XREF to: Stack[-0x18] (READ)
// 00478041: IMUL EAX,dword ptr [EBP + 0x104]
// 00478048: IMUL EAX,EAX,0xc
// 0047804b: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0047804f: MOV EDI,dword ptr [EBP + 0x5690]
// 00478055: ADD EDI,EBX
// 00478057: MOV EBX,dword ptr [EBP + 0x10c]
// 0047805d: ADD EBX,EAX
// 0047805f: FLD double ptr [0x0061f79b]
//   XREF to: 0061f79b (READ)
// 00478065: FILD dword ptr [EBX]
// 00478067: FMUL ST1
// 00478069: FSTP float ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 0047806c: FILD dword ptr [EBX + 0x4]
// 0047806f: FMUL ST1
// 00478071: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x24] (WRITE)
// 00478075: FILD dword ptr [EBX + 0x8]
// 00478078: FMULP
// 0047807a: MOV ESI,EDI
// 0047807c: MOV EAX,ESP
// 0047807e: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (WRITE)
// 00478082: CMP EDI,EAX
// 00478084: JNZ 0x00478170
//   XREF to: 00478170 (CONDITIONAL_JUMP)
// 0047808a: MOV EAX,ESP
//   Label: LAB_0047808a
// 0047808c: ADD ESI,0xc
// 0047808f: CMP ESI,EAX
// 00478091: JZ 0x004780a6
//   XREF to: 004780a6 (CONDITIONAL_JUMP)
// 00478093: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 00478096: MOV dword ptr [ESI],EAX
// 00478098: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x24] (READ)
// 0047809c: MOV dword ptr [ESI + 0x4],EAX
// 0047809f: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (READ)
// 004780a3: MOV dword ptr [ESI + 0x8],EAX
// 004780a6: MOV ESI,0x1
//   Label: LAB_004780a6
// 004780ab: CMP ESI,dword ptr [EBP + 0x104]
// 004780b1: JGE 0x004780f3
//   XREF to: 004780f3 (CONDITIONAL_JUMP)
// 004780b3: FILD dword ptr [EBX + 0xc]
//   Label: LAB_004780b3
// 004780b6: FMUL double ptr [0x0061f79b]
//   XREF to: 0061f79b (READ)
// 004780bc: FSTP float ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 004780bf: FILD dword ptr [EBX + 0x10]
// 004780c2: FMUL double ptr [0x0061f79b]
//   XREF to: 0061f79b (READ)
// 004780c8: MOV EAX,ESP
// 004780ca: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x24] (WRITE)
// 004780ce: FILD dword ptr [EBX + 0x14]
// 004780d1: FMUL double ptr [0x0061f79b]
//   XREF to: 0061f79b (READ)
// 004780d7: PUSH EAX
// 004780d8: ADD EBX,0xc
// 004780db: INC ESI
// 004780dc: PUSH EDI
// 004780dd: FSTP float ptr [ESP + 0x10]
//   XREF to: Stack[-0x20] (WRITE)
// 004780e1: CALL core_box.cpp_CBoundingBox3D_expand_FUN_00420240
//   XREF to: 00420240 (UNCONDITIONAL_CALL)
// 004780e6: MOV EDX,dword ptr [EBP + 0x104]
// 004780ec: ADD ESP,0x8
// 004780ef: CMP ESI,EDX
// 004780f1: JL 0x004780b3
//   XREF to: 004780b3 (CONDITIONAL_JUMP)
// 004780f3: CMP dword ptr [ESP + 0x10],0x0
//   Label: LAB_004780f3
//   XREF to: Stack[-0x18] (READ)
// 004780f8: JNZ 0x0047812b
//   XREF to: 0047812b (CONDITIONAL_JUMP)
// 004780fa: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x14] (READ)
// 004780fe: MOV EBX,EDI
// 00478100: CMP EDI,EAX
// 00478102: JZ 0x00478114
//   XREF to: 00478114 (CONDITIONAL_JUMP)
// 00478104: MOV EDX,dword ptr [EDI]
// 00478106: MOV dword ptr [EAX],EDX
// 00478108: MOV EDX,dword ptr [EDI + 0x4]
// 0047810b: MOV dword ptr [EAX + 0x4],EDX
// 0047810e: MOV EDX,dword ptr [EDI + 0x8]
// 00478111: MOV dword ptr [EAX + 0x8],EDX
// 00478114: ADD EAX,0xc
//   Label: LAB_00478114
// 00478117: CMP EAX,EBX
// 00478119: JZ 0x0047812b
//   XREF to: 0047812b (CONDITIONAL_JUMP)
// 0047811b: MOV EDX,dword ptr [EBX]
// 0047811d: MOV dword ptr [EAX],EDX
// 0047811f: MOV EDX,dword ptr [EBX + 0x4]
// 00478122: MOV dword ptr [EAX + 0x4],EDX
// 00478125: MOV EDX,dword ptr [EBX + 0x8]
// 00478128: MOV dword ptr [EAX + 0x8],EDX
// 0047812b: PUSH EDI
//   Label: LAB_0047812b
// 0047812c: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x14] (READ)
// 00478130: PUSH EBX
// 00478131: CALL core_box.cpp_CBoundingBox3D_expand_FUN_00420240
//   XREF to: 00420240 (UNCONDITIONAL_CALL)
// 00478136: ADD ESP,0x8
// 00478139: ADD EDI,0xc
// 0047813c: PUSH EDI
// 0047813d: PUSH EBX
// 0047813e: CALL core_box.cpp_CBoundingBox3D_expand_FUN_00420240
//   XREF to: 00420240 (UNCONDITIONAL_CALL)
// 00478143: ADD ESP,0x8
// 00478146: MOV EDX,dword ptr [EBP + 0x100]
// 0047814c: MOV EDI,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00478150: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x18] (READ)
// 00478154: ADD EDI,0x18
// 00478157: INC EAX
// 00478158: MOV dword ptr [ESP + 0xc],EDI
//   XREF to: Stack[-0x1c] (WRITE)
// 0047815c: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00478160: CMP EAX,EDX
// 00478162: JL 0x0047803d
//   XREF to: 0047803d (CONDITIONAL_JUMP)
// 00478168: ADD ESP,0x18
//   Label: LAB_00478168
// 0047816b: POP EBP
// 0047816c: POP EDI
// 0047816d: POP ESI
// 0047816e: POP EBX
// 0047816f: RET
// 00478170: MOV EAX,dword ptr [ESP]
//   Label: LAB_00478170
//   XREF to: Stack[-0x28] (DATA)
// 00478173: MOV dword ptr [EDI],EAX
// 00478175: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x24] (READ)
// 00478179: MOV dword ptr [EDI + 0x4],EAX
// 0047817c: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (READ)
// 00478180: MOV dword ptr [EDI + 0x8],EAX
// 00478183: JMP 0x0047808a
//   XREF to: 0047808a (UNCONDITIONAL_JUMP)
