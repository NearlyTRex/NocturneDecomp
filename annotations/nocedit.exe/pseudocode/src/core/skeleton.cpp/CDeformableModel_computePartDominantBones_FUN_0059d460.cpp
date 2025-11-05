// Name: core_skeleton.cpp_CDeformableModel_computePartDominantBones_FUN_0059d460
// Address: 0059d460
// Address Range: [[0059d460, 0059d9d4]]
// Convention: __cdecl
// Signature: int core_skeleton.cpp_CDeformableModel_computePartDominantBones_FUN_0059d460(CDeformableModel * this_ptr)
// Cross-references:
//   core_skeleton.cpp_CDeformableModel_loadStream_FUN_0059b970 (0059b970) at 0059c1a4 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_skeleton_cpp_0064eca9
//   TerminatedCString s_core_skeleton_cpp_0064ecbe
//   TerminatedCString s_CDeformableModel_compute_0064ecd3
//   TerminatedCString s_core_skeleton_cpp_0064ed0f
//   float FLOAT_00662ea0 = 0.00390625
//   char* g_CurrentDebugFilename = 0067d200
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   int g_CurrentDebugLine
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_skeleton.cpp_CDeformableModel_captureTextures_FUN_0059a780
//   core_skeleton.cpp_CDeformableModel_computeBoneDominantPart_FUN_0059c2f0
//   core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810
//   core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40
//   core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0059ddc0
//   core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_005a0480
//   core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80
//   core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

int __cdecl
core_skeleton_cpp_CDeformableModel_computePartDominantBones_FUN_0059d460(CDeformableModel *this_ptr)

{
  float *pfVar1;
  uchar *puVar2;
  STextureSet *pSVar3;
  CDeformableModel *model_ptr;
  CSkeleton *pCVar4;
  CDeformableModelInstance *this_ptr_00;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  SVert *pSVar9;
  SVert *pSVar10;
  int unaff_EBX;
  int iVar11;
  int iVar12;
  BADSPACEBASE *in_ESP;
  SVert *pSVar13;
  CDeformableModel *pCVar14;
  ushort *puVar15;
  CMotionController *unaff_retaddr;
  SLod *in_stack_00000008;
  float in_stack_0000000c;
  float fStack_210;
  CVector3f *in_stack_fffffdfc;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  int local_14;
  
  model_ptr = this_ptr;
  if (this_ptr->num_parts < 2) {
    this_ptr->parts[0].dominant_bone = 0;
    pSVar3 = this_ptr->texture_sets;
    do {
      in_stack_00000008 = this_ptr->lod_info;
      this_ptr->bone_to_part_map[0] = 0;
      this_ptr = (CDeformableModel *)in_stack_00000008;
    } while (in_stack_00000008 != (SLod *)(pSVar3->textures[2].texture_variants[2].texture_name + 8)
            );
  }
  else {
    core_skeleton_cpp_CDeformableModel_captureTextures_FUN_0059a780(this_ptr);
    pCVar4 = core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810(this_ptr);
    local_1c = (float)pCVar4->bone_count;
    this_ptr_00 = (CDeformableModelInstance *)
                  shape_memdbg_cpp_debugAlloc_FUN_0050f1b0
                            (0x22b4,"..\\core\\skeleton.cpp",0x7d2);
    if (this_ptr_00 != (CDeformableModelInstance *)0x0) {
      this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_0059ddc0(this_ptr_00);
    }
    if (this_ptr_00 == (CDeformableModelInstance *)0x0) {
      g_CurrentFilename = "..\\core\\skeleton.cpp";
      g_CurrentLineNumber = 0x7d3;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CDeformableModel::computePartDominantBones - out of memory!");
    }
    core_skeleton_cpp_CDeformableModelInstance_initializeFromModel_FUN_005a0480
              (this_ptr_00,this_ptr);
    core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80(this_ptr_00);
    core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40(this_ptr_00);
    iVar11 = 0;
    core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0(this_ptr_00,0);
    local_14 = 0;
    pCVar14 = this_ptr;
    if (0 < this_ptr->num_parts) {
      do {
        iVar5 = pCVar14->parts[0].tri_counts[0] + iVar11;
        if (0 < unaff_EBX) {
          iVar12 = 0;
          do {
            iVar6 = iVar12 + 4;
            *(undefined4 *)((int)&fStack_210 + iVar12) = 0;
            iVar12 = iVar6;
          } while (iVar6 < unaff_EBX * 4);
        }
        if (iVar11 < iVar5) {
          this_ptr = (CDeformableModel *)(iVar11 * 0x12);
          do {
            puVar15 = (ushort *)
                      ((int)&this_ptr->lod_info[0].pixel_height +
                      (int)&model_ptr->tri_data_ptr[0][-1].v_coord_1);
            piVar7 = (int *)((uint)*puVar15 * 0xc + (int)unaff_retaddr[0x68].tween_progress);
            local_2c = (float)*piVar7 * FLOAT_00662ea0;
            local_28 = (float)piVar7[1] * FLOAT_00662ea0;
            local_24 = (float)piVar7[2] * FLOAT_00662ea0;
            piVar8 = (int *)((int)unaff_retaddr[0x68].tween_progress + (uint)puVar15[1] * 0xc);
            local_50 = (float)*piVar8 * FLOAT_00662ea0;
            local_4c = (float)piVar8[1] * FLOAT_00662ea0;
            local_48 = (float)piVar8[2] * FLOAT_00662ea0;
            piVar8 = (int *)((uint)puVar15[2] * 0xc + (int)unaff_retaddr[0x68].tween_progress);
            local_20 = (float)*piVar8 * FLOAT_00662ea0;
            local_1c = (float)piVar8[1] * FLOAT_00662ea0;
            local_18 = (float)piVar8[2] * FLOAT_00662ea0;
            local_38 = (float)*piVar8 * FLOAT_00662ea0 - local_50;
            local_34 = (float)piVar8[1] * FLOAT_00662ea0 - local_4c;
            local_30 = (float)piVar8[2] * FLOAT_00662ea0 - local_48;
            if (&local_80 != &local_38) {
              local_80 = local_38;
              local_7c = local_34;
              local_78 = local_30;
            }
            local_5c = local_50 - (float)*piVar7 * FLOAT_00662ea0;
            local_58 = local_4c - (float)piVar7[1] * FLOAT_00662ea0;
            local_54 = local_48 - (float)piVar7[2] * FLOAT_00662ea0;
            if (&local_68 != &local_5c) {
              local_68 = local_5c;
              local_64 = local_58;
              local_60 = local_54;
            }
            local_74 = local_7c * local_60 - local_78 * local_64;
            local_70 = local_78 * local_68 - local_80 * local_60;
            local_6c = local_80 * local_64 - local_7c * local_68;
            if (&local_44 != &local_74) {
              local_44 = local_74;
              local_40 = local_70;
              local_3c = local_6c;
            }
            in_stack_0000000c =
                 SQRT(local_3c * local_3c + local_44 * local_44 + local_40 * local_40);
            in_stack_00000008 = (SLod *)(puVar15 + 3);
            do {
              pSVar13 = model_ptr->vertex_data_ptr[0] + *puVar15;
              pSVar9 = pSVar13;
              pSVar10 = pSVar13;
              for (iVar11 = 0; iVar11 < (int)(uint)pSVar13->num_bone_influences; iVar11 = iVar11 + 1
                  ) {
                pfVar1 = pSVar9->bone_weights;
                puVar2 = pSVar10->bone_indices;
                pSVar9 = (SVert *)pSVar9->bone_weights;
                pSVar10 = (SVert *)pSVar10->bone_indices;
                (&fStack_210)[*puVar2] = *pfVar1 * in_stack_0000000c + (&fStack_210)[*puVar2];
              }
              puVar15 = puVar15 + 1;
            } while ((SLod *)puVar15 != in_stack_00000008);
            this_ptr = (CDeformableModel *)((int)&this_ptr->lod_info[1].shadow_only_flag + 2);
          } while ((int)this_ptr < iVar5 * 0x12);
        }
        iVar12 = 1;
        iVar11 = 0;
        if (1 < unaff_EBX) {
          iVar6 = 4;
          do {
            if ((&fStack_210)[iVar11] < *(float *)((int)&fStack_210 + iVar6)) {
              iVar11 = iVar12;
            }
            iVar12 = iVar12 + 1;
            iVar6 = iVar6 + 4;
          } while (iVar12 < unaff_EBX);
        }
        pCVar14->parts[0].dominant_bone = iVar11;
        local_14 = local_14 + 1;
        iVar11 = iVar5;
        pCVar14 = (CDeformableModel *)(pCVar14->tri_count + 3);
      } while (local_14 < model_ptr->num_parts);
    }
    g_CurrentDebugLine = 0x815;
    g_CurrentDebugFilename = "..\\core\\skeleton.cpp";
    if (unaff_retaddr != (CMotionController *)0x0) {
      (*unaff_retaddr->vtable->dtor)(unaff_retaddr);
    }
    iVar11 = 0;
    pCVar14 = model_ptr;
    if (0 < (int)in_stack_00000008) {
      do {
        fStack_210 = 8.25123e-39;
        iVar5 = core_skeleton_cpp_CDeformableModel_computeBoneDominantPart_FUN_0059c2f0
                          (model_ptr,iVar11,in_stack_fffffdfc);
        iVar11 = iVar11 + 1;
        pCVar14->bone_to_part_map[0] = iVar5;
        pCVar14 = (CDeformableModel *)pCVar14->lod_info;
      } while (iVar11 < (int)in_stack_0000000c);
      return iVar5;
    }
  }
  return (int)in_stack_00000008;
}


// Assembly code:
// 0059d460: PUSH EBX
//   Label: core_skeleton.cpp_CDeformableModel_computePartDominantBones_FUN_0059d460
// 0059d461: PUSH ESI
// 0059d462: PUSH EDI
// 0059d463: PUSH EBP
// 0059d464: SUB ESP,0x220
// 0059d46a: MOV EBP,dword ptr [ESP + 0x234]
//   XREF to: Stack[0x4] (READ)
// 0059d471: CMP dword ptr [EBP + 0x7140],0x2
// 0059d478: JGE 0x0059d4ab
//   XREF to: 0059d4ab (CONDITIONAL_JUMP)
// 0059d47a: MOV EAX,EBP
// 0059d47c: MOV dword ptr [EBP + 0x71a0],0x0
// 0059d486: ADD EBP,0x190
// 0059d48c: ADD EAX,0x4
//   Label: LAB_0059d48c
// 0059d48f: MOV dword ptr [EAX + 0x8c38],0x0
// 0059d499: CMP EAX,EBP
// 0059d49b: JNZ 0x0059d48c
//   XREF to: 0059d48c (CONDITIONAL_JUMP)
// 0059d49d: LEA EAX,[EAX]
// 0059d4a0: ADD ESP,0x220
//   Label: LAB_0059d4a0
// 0059d4a6: POP EBP
// 0059d4a7: POP EDI
// 0059d4a8: POP ESI
// 0059d4a9: POP EBX
// 0059d4aa: RET
// 0059d4ab: PUSH EBP
//   Label: LAB_0059d4ab
// 0059d4ac: CALL core_skeleton.cpp_CDeformableModel_captureTextures_FUN_0059a780
//   XREF to: 0059a780 (UNCONDITIONAL_CALL)
// 0059d4b1: ADD ESP,0x4
// 0059d4b4: PUSH EBP
// 0059d4b5: CALL core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810
//   XREF to: 0059a810 (UNCONDITIONAL_CALL)
// 0059d4ba: ADD ESP,0x4
// 0059d4bd: PUSH 0x7d2
// 0059d4c2: PUSH 0x64eca9
//   XREF to: 0064eca9 (DATA)
// 0059d4c7: MOV EAX,dword ptr [EAX + 0x28558]
// 0059d4cd: PUSH 0x22b4
// 0059d4d2: MOV dword ptr [ESP + 0x218],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0059d4d9: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 0059d4de: ADD ESP,0xc
// 0059d4e1: TEST EAX,EAX
// 0059d4e3: JZ 0x0059d4ee
//   XREF to: 0059d4ee (CONDITIONAL_JUMP)
// 0059d4e5: PUSH EAX
// 0059d4e6: CALL core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0059ddc0
//   XREF to: 0059ddc0 (UNCONDITIONAL_CALL)
// 0059d4eb: ADD ESP,0x4
// 0059d4ee: MOV dword ptr [ESP + 0x210],EAX
//   Label: LAB_0059d4ee
//   XREF to: Stack[-0x20] (WRITE)
// 0059d4f5: TEST EAX,EAX
// 0059d4f7: JNZ 0x0059d51c
//   XREF to: 0059d51c (CONDITIONAL_JUMP)
// 0059d4f9: MOV ECX,0x64ecbe
//   XREF to: 0064ecbe (PARAM)
// 0059d4fe: MOV EBX,0x7d3
// 0059d503: PUSH 0x64ecd3
//   XREF to: 0064ecd3 (DATA)
// 0059d508: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0059d50e: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 0059d514: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0059d519: ADD ESP,0x4
// 0059d51c: PUSH EBP
//   Label: LAB_0059d51c
// 0059d51d: MOV ESI,dword ptr [ESP + 0x214]
//   XREF to: Stack[-0x20] (READ)
// 0059d524: PUSH ESI
// 0059d525: CALL core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_005a0480
//   XREF to: 005a0480 (UNCONDITIONAL_CALL)
// 0059d52a: ADD ESP,0x8
// 0059d52d: PUSH ESI
// 0059d52e: CALL core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80
//   XREF to: 0059df80 (UNCONDITIONAL_CALL)
// 0059d533: ADD ESP,0x4
// 0059d536: PUSH ESI
// 0059d537: CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40
//   XREF to: 0059fb40 (UNCONDITIONAL_CALL)
// 0059d53c: ADD ESP,0x4
// 0059d53f: PUSH 0x0
// 0059d541: PUSH ESI
// 0059d542: XOR EBX,EBX
// 0059d544: CALL core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0
//   XREF to: 005a01d0 (UNCONDITIONAL_CALL)
// 0059d549: ADD ESP,0x8
// 0059d54c: MOV ESI,dword ptr [EBP + 0x7140]
// 0059d552: MOV dword ptr [ESP + 0x1fc],EBX
//   XREF to: Stack[-0x34] (WRITE)
// 0059d559: TEST ESI,ESI
// 0059d55b: JLE 0x0059d8c9
//   XREF to: 0059d8c9 (CONDITIONAL_JUMP)
// 0059d561: MOV dword ptr [ESP + 0x204],EBP
//   XREF to: Stack[-0x2c] (WRITE)
// 0059d568: MOV EAX,dword ptr [ESP + 0x204]
//   Label: LAB_0059d568
//   XREF to: Stack[-0x2c] (READ)
// 0059d56f: MOV EAX,dword ptr [EAX + 0x7164]
// 0059d575: ADD EAX,EBX
// 0059d577: MOV EDX,dword ptr [ESP + 0x20c]
//   XREF to: Stack[-0x24] (READ)
// 0059d57e: MOV dword ptr [ESP + 0x200],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 0059d585: TEST EDX,EDX
// 0059d587: JLE 0x0059d59b
//   XREF to: 0059d59b (CONDITIONAL_JUMP)
// 0059d589: SHL EDX,0x2
// 0059d58c: XOR EAX,EAX
// 0059d58e: ADD EAX,0x4
//   Label: LAB_0059d58e
// 0059d591: XOR ESI,ESI
// 0059d593: MOV dword ptr [ESP + EAX*0x1 + -0x4],ESI
//   XREF to: Stack[-0x230] (DATA)
// 0059d597: CMP EAX,EDX
// 0059d599: JL 0x0059d58e
//   XREF to: 0059d58e (CONDITIONAL_JUMP)
// 0059d59b: MOV EDI,dword ptr [ESP + 0x200]
//   Label: LAB_0059d59b
//   XREF to: Stack[-0x30] (READ)
// 0059d5a2: CMP EBX,EDI
// 0059d5a4: JGE 0x0059d952
//   XREF to: 0059d952 (CONDITIONAL_JUMP)
// 0059d5aa: IMUL EBX,EBX,0x12
// 0059d5ad: IMUL EAX,EDI,0x12
// 0059d5b0: MOV dword ptr [ESP + 0x214],EBX
//   XREF to: Stack[-0x1c] (WRITE)
// 0059d5b7: MOV dword ptr [ESP + 0x208],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0059d5be: MOV ESI,dword ptr [ESP + 0x214]
//   Label: LAB_0059d5be
//   XREF to: Stack[-0x1c] (READ)
// 0059d5c5: MOV EDX,dword ptr [EBP + 0x7c]
// 0059d5c8: ADD EDX,ESI
// 0059d5ca: XOR EAX,EAX
// 0059d5cc: MOV AX,word ptr [EDX]
// 0059d5cf: IMUL EAX,EAX,0xc
// 0059d5d2: MOV ECX,dword ptr [ESP + 0x210]
//   XREF to: Stack[-0x20] (READ)
// 0059d5d9: MOV ECX,dword ptr [ECX + 0x2234]
// 0059d5df: LEA EBX,[ESP + 0x1e4]
//   XREF to: Stack[-0x4c] (DATA)
// 0059d5e6: ADD EAX,ECX
// 0059d5e8: FILD dword ptr [EAX]
// 0059d5ea: FMUL float ptr [0x00662ea0]
//   XREF to: 00662ea0 (READ)
// 0059d5f0: FSTP float ptr [EBX]
//   XREF to: Stack[-0x4c] (DATA)
// 0059d5f2: FILD dword ptr [EAX + 0x4]
// 0059d5f5: FMUL float ptr [0x00662ea0]
//   XREF to: 00662ea0 (READ)
// 0059d5fb: FSTP float ptr [EBX + 0x4]
//   XREF to: Stack[-0x48] (WRITE)
// 0059d5fe: FILD dword ptr [EAX + 0x8]
// 0059d601: FMUL float ptr [0x00662ea0]
//   XREF to: 00662ea0 (READ)
// 0059d607: FSTP float ptr [EBX + 0x8]
//   XREF to: Stack[-0x44] (WRITE)
// 0059d60a: XOR EAX,EAX
// 0059d60c: MOV AX,word ptr [EDX + 0x2]
// 0059d610: IMUL ECX,EAX,0xc
// 0059d613: MOV EAX,dword ptr [ESP + 0x210]
//   XREF to: Stack[-0x20] (READ)
// 0059d61a: MOV EAX,dword ptr [EAX + 0x2234]
// 0059d620: LEA EBX,[ESP + 0x1c0]
//   XREF to: Stack[-0x70] (DATA)
// 0059d627: ADD EAX,ECX
// 0059d629: FILD dword ptr [EAX]
// 0059d62b: FMUL float ptr [0x00662ea0]
//   XREF to: 00662ea0 (READ)
// 0059d631: FSTP float ptr [EBX]
//   XREF to: Stack[-0x70] (DATA)
// 0059d633: FILD dword ptr [EAX + 0x4]
// 0059d636: FMUL float ptr [0x00662ea0]
//   XREF to: 00662ea0 (READ)
// 0059d63c: FSTP float ptr [EBX + 0x4]
//   XREF to: Stack[-0x6c] (WRITE)
// 0059d63f: FILD dword ptr [EAX + 0x8]
// 0059d642: FMUL float ptr [0x00662ea0]
//   XREF to: 00662ea0 (READ)
// 0059d648: FSTP float ptr [EBX + 0x8]
//   XREF to: Stack[-0x68] (WRITE)
// 0059d64b: XOR EAX,EAX
// 0059d64d: MOV AX,word ptr [EDX + 0x4]
// 0059d651: IMUL EAX,EAX,0xc
// 0059d654: MOV ECX,dword ptr [ESP + 0x210]
//   XREF to: Stack[-0x20] (READ)
// 0059d65b: MOV ECX,dword ptr [ECX + 0x2234]
// 0059d661: LEA EBX,[ESP + 0x1f0]
//   XREF to: Stack[-0x40] (DATA)
// 0059d668: ADD EAX,ECX
// 0059d66a: FILD dword ptr [EAX]
// 0059d66c: FMUL float ptr [0x00662ea0]
//   XREF to: 00662ea0 (READ)
// 0059d672: FSTP float ptr [EBX]
//   XREF to: Stack[-0x40] (DATA)
// 0059d674: FILD dword ptr [EAX + 0x4]
// 0059d677: FMUL float ptr [0x00662ea0]
//   XREF to: 00662ea0 (READ)
// 0059d67d: FSTP float ptr [EBX + 0x4]
//   XREF to: Stack[-0x3c] (WRITE)
// 0059d680: FILD dword ptr [EAX + 0x8]
// 0059d683: FMUL float ptr [0x00662ea0]
//   XREF to: 00662ea0 (READ)
// 0059d689: FSTP float ptr [EBX + 0x8]
//   XREF to: Stack[-0x38] (WRITE)
// 0059d68c: FLD float ptr [ESP + 0x1f0]
//   XREF to: Stack[-0x40] (READ)
// 0059d693: FLD float ptr [ESP + 0x1f4]
//   XREF to: Stack[-0x3c] (READ)
// 0059d69a: FLD float ptr [ESP + 0x1f8]
//   XREF to: Stack[-0x38] (READ)
// 0059d6a1: LEA EAX,[ESP + 0x1d8]
//   XREF to: Stack[-0x58] (DATA)
// 0059d6a8: LEA ECX,[ESP + 0x190]
//   XREF to: Stack[-0xa0] (DATA)
// 0059d6af: FXCH ST2
// 0059d6b1: FSUB float ptr [ESP + 0x1c0]
//   XREF to: Stack[-0x70] (READ)
// 0059d6b8: FXCH
// 0059d6ba: FSUB float ptr [ESP + 0x1c4]
//   XREF to: Stack[-0x6c] (READ)
// 0059d6c1: FXCH ST2
// 0059d6c3: FSUB float ptr [ESP + 0x1c8]
//   XREF to: Stack[-0x68] (READ)
// 0059d6ca: FXCH
// 0059d6cc: FSTP float ptr [ESP + 0x1d8]
//   XREF to: Stack[-0x58] (WRITE)
// 0059d6d3: FXCH
// 0059d6d5: FSTP float ptr [ESP + 0x1dc]
//   XREF to: Stack[-0x54] (WRITE)
// 0059d6dc: FSTP float ptr [ESP + 0x1e0]
//   XREF to: Stack[-0x50] (WRITE)
// 0059d6e3: CMP ECX,EAX
// 0059d6e5: JZ 0x0059d711
//   XREF to: 0059d711 (CONDITIONAL_JUMP)
// 0059d6e7: MOV EAX,dword ptr [ESP + 0x1d8]
//   XREF to: Stack[-0x58] (DATA)
// 0059d6ee: MOV dword ptr [ESP + 0x190],EAX
//   XREF to: Stack[-0xa0] (WRITE)
// 0059d6f5: MOV EAX,dword ptr [ESP + 0x1dc]
//   XREF to: Stack[-0x54] (READ)
// 0059d6fc: MOV dword ptr [ESP + 0x194],EAX
//   XREF to: Stack[-0x9c] (WRITE)
// 0059d703: MOV EAX,dword ptr [ESP + 0x1e0]
//   XREF to: Stack[-0x50] (READ)
// 0059d70a: MOV dword ptr [ESP + 0x198],EAX
//   XREF to: Stack[-0x98] (WRITE)
// 0059d711: FLD float ptr [ESP + 0x1c0]
//   Label: LAB_0059d711
//   XREF to: Stack[-0x70] (READ)
// 0059d718: FLD float ptr [ESP + 0x1c4]
//   XREF to: Stack[-0x6c] (READ)
// 0059d71f: FLD float ptr [ESP + 0x1c8]
//   XREF to: Stack[-0x68] (READ)
// 0059d726: LEA ECX,[ESP + 0x1b4]
//   XREF to: Stack[-0x7c] (DATA)
// 0059d72d: LEA EAX,[ESP + 0x1a8]
//   XREF to: Stack[-0x88] (DATA)
// 0059d734: FXCH ST2
// 0059d736: FSUB float ptr [ESP + 0x1e4]
//   XREF to: Stack[-0x4c] (READ)
// 0059d73d: FXCH
// 0059d73f: FSUB float ptr [ESP + 0x1e8]
//   XREF to: Stack[-0x48] (READ)
// 0059d746: FXCH ST2
// 0059d748: FSUB float ptr [ESP + 0x1ec]
//   XREF to: Stack[-0x44] (READ)
// 0059d74f: FXCH ST2
// 0059d751: FSTP float ptr [ESP + 0x1b8]
//   XREF to: Stack[-0x78] (WRITE)
// 0059d758: FXCH
// 0059d75a: FSTP float ptr [ESP + 0x1bc]
//   XREF to: Stack[-0x74] (WRITE)
// 0059d761: FSTP float ptr [ESP + 0x1b4]
//   XREF to: Stack[-0x7c] (WRITE)
// 0059d768: CMP EAX,ECX
// 0059d76a: JZ 0x0059d796
//   XREF to: 0059d796 (CONDITIONAL_JUMP)
// 0059d76c: MOV EAX,dword ptr [ESP + 0x1b4]
//   XREF to: Stack[-0x7c] (READ)
// 0059d773: MOV dword ptr [ESP + 0x1a8],EAX
//   XREF to: Stack[-0x88] (WRITE)
// 0059d77a: MOV EAX,dword ptr [ESP + 0x1b8]
//   XREF to: Stack[-0x78] (READ)
// 0059d781: MOV dword ptr [ESP + 0x1ac],EAX
//   XREF to: Stack[-0x84] (WRITE)
// 0059d788: MOV EAX,dword ptr [ESP + 0x1bc]
//   XREF to: Stack[-0x74] (READ)
// 0059d78f: MOV dword ptr [ESP + 0x1b0],EAX
//   XREF to: Stack[-0x80] (WRITE)
// 0059d796: FLD float ptr [ESP + 0x194]
//   Label: LAB_0059d796
//   XREF to: Stack[-0x9c] (READ)
// 0059d79d: FMUL float ptr [ESP + 0x1b0]
//   XREF to: Stack[-0x80] (READ)
// 0059d7a4: FLD float ptr [ESP + 0x198]
//   XREF to: Stack[-0x98] (READ)
// 0059d7ab: FMUL float ptr [ESP + 0x1a8]
//   XREF to: Stack[-0x88] (READ)
// 0059d7b2: FLD float ptr [ESP + 0x190]
//   XREF to: Stack[-0xa0] (READ)
// 0059d7b9: FMUL float ptr [ESP + 0x1ac]
//   XREF to: Stack[-0x84] (READ)
// 0059d7c0: FLD float ptr [ESP + 0x198]
//   XREF to: Stack[-0x98] (READ)
// 0059d7c7: FMUL float ptr [ESP + 0x1ac]
//   XREF to: Stack[-0x84] (READ)
// 0059d7ce: FLD float ptr [ESP + 0x190]
//   XREF to: Stack[-0xa0] (READ)
// 0059d7d5: FMUL float ptr [ESP + 0x1b0]
//   XREF to: Stack[-0x80] (READ)
// 0059d7dc: FLD float ptr [ESP + 0x194]
//   XREF to: Stack[-0x9c] (READ)
// 0059d7e3: FMUL float ptr [ESP + 0x1a8]
//   XREF to: Stack[-0x88] (READ)
// 0059d7ea: LEA ECX,[ESP + 0x19c]
//   XREF to: Stack[-0x94] (DATA)
// 0059d7f1: LEA EAX,[ESP + 0x1cc]
//   XREF to: Stack[-0x64] (DATA)
// 0059d7f8: FXCH ST2
// 0059d7fa: FSUBP ST5,ST0
// 0059d7fc: FSUBP ST3,ST0
// 0059d7fe: FSUBP
// 0059d800: FXCH
// 0059d802: FSTP float ptr [ESP + 0x1a0]
//   XREF to: Stack[-0x90] (WRITE)
// 0059d809: FSTP float ptr [ESP + 0x1a4]
//   XREF to: Stack[-0x8c] (WRITE)
// 0059d810: FSTP float ptr [ESP + 0x19c]
//   XREF to: Stack[-0x94] (WRITE)
// 0059d817: CMP EAX,ECX
// 0059d819: JNZ 0x0059d98f
//   XREF to: 0059d98f (CONDITIONAL_JUMP)
// 0059d81f: FLD float ptr [ESP + 0x1d0]
//   Label: LAB_0059d81f
//   XREF to: Stack[-0x60] (READ)
// 0059d826: FMUL ST0
// 0059d828: FLD float ptr [ESP + 0x1cc]
//   XREF to: Stack[-0x64] (READ)
// 0059d82f: FMUL ST0
// 0059d831: FADDP
// 0059d833: FLD float ptr [ESP + 0x1d4]
//   XREF to: Stack[-0x5c] (READ)
// 0059d83a: FMUL ST0
// 0059d83c: FADDP
// 0059d83e: FSQRT
// 0059d840: MOV EDI,EDX
// 0059d842: ADD EDX,0x6
// 0059d845: MOV dword ptr [ESP + 0x218],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 0059d84c: FSTP float ptr [ESP + 0x21c]
//   XREF to: Stack[-0x14] (WRITE)
// 0059d853: XOR ESI,ESI
//   Label: LAB_0059d853
// 0059d855: MOV SI,word ptr [EDI]
// 0059d858: IMUL ESI,ESI,0x34
// 0059d85b: MOV EAX,dword ptr [EBP + 0x40]
// 0059d85e: ADD ESI,EAX
// 0059d860: XOR ECX,ECX
// 0059d862: MOV EAX,ESI
// 0059d864: MOV EDX,ESI
// 0059d866: XOR EBX,EBX
//   Label: LAB_0059d866
// 0059d868: MOV BL,byte ptr [ESI]
// 0059d86a: CMP ECX,EBX
// 0059d86c: JGE 0x0059d9be
//   XREF to: 0059d9be (CONDITIONAL_JUMP)
// 0059d872: FLD float ptr [EAX + 0x4]
// 0059d875: XOR EBX,EBX
// 0059d877: FMUL float ptr [ESP + 0x21c]
//   XREF to: Stack[-0x14] (READ)
// 0059d87e: MOV BL,byte ptr [EDX + 0x1]
// 0059d881: ADD EAX,0x4
// 0059d884: INC EDX
// 0059d885: FADD float ptr [ESP + EBX*0x4]
// 0059d888: INC ECX
// 0059d889: FSTP float ptr [ESP + EBX*0x4]
// 0059d88c: JMP 0x0059d866
//   XREF to: 0059d866 (UNCONDITIONAL_JUMP)
// 0059d88e: MOV EAX,dword ptr [ESP + 0x204]
//   Label: LAB_0059d88e
//   XREF to: Stack[-0x2c] (READ)
// 0059d895: MOV dword ptr [EAX + 0x71a0],EDI
// 0059d89b: LEA EDI,[EAX + 0x60]
// 0059d89e: MOV EBX,dword ptr [ESP + 0x200]
//   XREF to: Stack[-0x30] (READ)
// 0059d8a5: MOV EAX,dword ptr [ESP + 0x1fc]
//   XREF to: Stack[-0x34] (READ)
// 0059d8ac: MOV EDX,dword ptr [EBP + 0x7140]
// 0059d8b2: INC EAX
// 0059d8b3: MOV dword ptr [ESP + 0x204],EDI
//   XREF to: Stack[-0x2c] (WRITE)
// 0059d8ba: MOV dword ptr [ESP + 0x1fc],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 0059d8c1: CMP EAX,EDX
// 0059d8c3: JL 0x0059d568
//   XREF to: 0059d568 (CONDITIONAL_JUMP)
// 0059d8c9: MOV EBX,0x815
//   Label: LAB_0059d8c9
// 0059d8ce: MOV ECX,0x64ed0f
//   XREF to: 0064ed0f (PARAM)
// 0059d8d3: MOV ESI,dword ptr [ESP + 0x210]
//   XREF to: Stack[-0x20] (READ)
// 0059d8da: MOV dword ptr [0x02f0d944],EBX
//   XREF to: 02f0d944 (WRITE)
// 0059d8e0: MOV dword ptr [0x0067d20c],ECX
//   XREF to: 0067d20c (WRITE)
// 0059d8e6: TEST ESI,ESI
// 0059d8e8: JZ 0x0059d8f5
//   XREF to: 0059d8f5 (CONDITIONAL_JUMP)
// 0059d8ea: PUSH 0x2
// 0059d8ec: MOV EAX,dword ptr [ESI + 0x50]
// 0059d8ef: PUSH ESI
// 0059d8f0: CALL dword ptr [EAX]
// 0059d8f2: ADD ESP,0x8
// 0059d8f5: MOV EAX,dword ptr [ESP + 0x20c]
//   Label: LAB_0059d8f5
//   XREF to: Stack[-0x24] (READ)
// 0059d8fc: XOR EBX,EBX
// 0059d8fe: TEST EAX,EAX
// 0059d900: JLE 0x0059d4a0
//   XREF to: 0059d4a0 (CONDITIONAL_JUMP)
// 0059d906: MOV ESI,EBP
// 0059d908: PUSH EBX
//   Label: LAB_0059d908
// 0059d909: PUSH EBP
// 0059d90a: ADD ESI,0x4
// 0059d90d: CALL core_skeleton.cpp_CDeformableModel_computeBoneDominantPart_FUN_0059c2f0
//   XREF to: 0059c2f0 (UNCONDITIONAL_CALL)
// 0059d912: ADD ESP,0x8
// 0059d915: INC EBX
// 0059d916: MOV ECX,dword ptr [ESP + 0x20c]
// 0059d91d: MOV dword ptr [ESI + 0x8c38],EAX
// 0059d923: CMP EBX,ECX
// 0059d925: JL 0x0059d908
//   XREF to: 0059d908 (CONDITIONAL_JUMP)
// 0059d927: ADD ESP,0x220
// 0059d92d: POP EBP
// 0059d92e: POP EDI
// 0059d92f: POP ESI
// 0059d930: POP EBX
// 0059d931: RET
// 0059d932: MOV EAX,dword ptr [ESP + 0x214]
//   Label: LAB_0059d932
//   XREF to: Stack[-0x1c] (READ)
// 0059d939: ADD EAX,0x12
// 0059d93c: MOV EDX,dword ptr [ESP + 0x208]
//   XREF to: Stack[-0x28] (READ)
// 0059d943: MOV dword ptr [ESP + 0x214],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0059d94a: CMP EAX,EDX
// 0059d94c: JL 0x0059d5be
//   XREF to: 0059d5be (CONDITIONAL_JUMP)
// 0059d952: MOV EBX,0x1
//   Label: LAB_0059d952
// 0059d957: MOV ECX,dword ptr [ESP + 0x20c]
//   XREF to: Stack[-0x24] (READ)
// 0059d95e: XOR EDI,EDI
// 0059d960: CMP ECX,EBX
// 0059d962: JLE 0x0059d88e
//   XREF to: 0059d88e (CONDITIONAL_JUMP)
// 0059d968: MOV EDX,0x4
// 0059d96d: FLD float ptr [ESP + EDX*0x1]
//   Label: LAB_0059d96d
// 0059d970: FCOMP float ptr [ESP + EDI*0x4]
//   XREF to: Stack[-0x230] (DATA)
// 0059d973: FNSTSW AX
// 0059d975: SAHF
// 0059d976: JBE 0x0059d97a
//   XREF to: 0059d97a (CONDITIONAL_JUMP)
// 0059d978: MOV EDI,EBX
// 0059d97a: MOV EAX,dword ptr [ESP + 0x20c]
//   Label: LAB_0059d97a
//   XREF to: Stack[-0x24] (READ)
// 0059d981: INC EBX
// 0059d982: ADD EDX,0x4
// 0059d985: CMP EBX,EAX
// 0059d987: JGE 0x0059d88e
//   XREF to: 0059d88e (CONDITIONAL_JUMP)
// 0059d98d: JMP 0x0059d96d
//   XREF to: 0059d96d (UNCONDITIONAL_JUMP)
// 0059d98f: MOV EAX,dword ptr [ESP + 0x19c]
//   Label: LAB_0059d98f
//   XREF to: Stack[-0x94] (READ)
// 0059d996: MOV dword ptr [ESP + 0x1cc],EAX
//   XREF to: Stack[-0x64] (WRITE)
// 0059d99d: MOV EAX,dword ptr [ESP + 0x1a0]
//   XREF to: Stack[-0x90] (READ)
// 0059d9a4: MOV dword ptr [ESP + 0x1d0],EAX
//   XREF to: Stack[-0x60] (WRITE)
// 0059d9ab: MOV EAX,dword ptr [ESP + 0x1a4]
//   XREF to: Stack[-0x8c] (READ)
// 0059d9b2: MOV dword ptr [ESP + 0x1d4],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 0059d9b9: JMP 0x0059d81f
//   XREF to: 0059d81f (UNCONDITIONAL_JUMP)
// 0059d9be: MOV EDX,dword ptr [ESP + 0x218]
//   Label: LAB_0059d9be
//   XREF to: Stack[-0x18] (READ)
// 0059d9c5: ADD EDI,0x2
// 0059d9c8: CMP EDI,EDX
// 0059d9ca: JZ 0x0059d932
//   XREF to: 0059d932 (CONDITIONAL_JUMP)
// 0059d9d0: JMP 0x0059d853
//   XREF to: 0059d853 (UNCONDITIONAL_JUMP)
