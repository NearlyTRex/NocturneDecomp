// Name: core_skeleton.cpp_CDeformableModel_loadStream_FUN_0059b970
// Address: 0059b970
// Address Range: [[0059b970, 0059c1ea]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_CDeformableModel_loadStream_FUN_0059b970(CDeformableModel * this_ptr, FILE * file_handle)
// Cross-references:
//   core_skeleton.cpp_CDeformableModel_load_FUN_0059b8d0 (0059b8d0) at 0059b91c [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_d_0064e8bb
//   TerminatedCString s_core_skeleton_cpp_0064e8bf
//   TerminatedCString s_Deformable_model_file_is_0064e8d4
//   TerminatedCString s_core_skeleton_cpp_0064e8f5
//   TerminatedCString s_Can_t_load_model_of_vers_0064e90a
//   TerminatedCString s_d_d_d_d_d_0064e955
//   TerminatedCString s_d_d_d_d_0064e965
//   TerminatedCString s_d_d_d_d_d_0064e972
//   TerminatedCString s_d_d_d_d_d_d_0064e982
//   TerminatedCString s_anon_0064e995
//   TerminatedCString s_d_0064e99c
//   TerminatedCString s_d_d_0064e9a9
//   TerminatedCString s_d_0064e9ba
//   TerminatedCString s_d_d_0064e9be
//   TerminatedCString s_d_d_d_0064e9c5
//   TerminatedCString s_d_0064e9d7
//   TerminatedCString s_d_0064e9db
//   TerminatedCString s_d_f_f_f_f_0064e9df
//   TerminatedCString s_d_d_d_d_d_d_d_d_d_d_0064e9ef
//   TerminatedCString s_d_0064ea0e
//   TerminatedCString s_anon_0064ea12
//   TerminatedCString s_f_f_f_0064ea19
//   TerminatedCString s_f_f_f_0064ea23
//   TerminatedCString s_f_f_f_0064ea2d
//   TerminatedCString s_d_0064ea37
//   TerminatedCString s_core_skeleton_cpp_0064ea3b
//   TerminatedCString s_CDeformableModel_loadStr_0064ea50
//   undefined4 DAT_00681864
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_skeleton.cpp_CDeformableModel_allocLOD_FUN_0059a510
//   core_skeleton.cpp_CDeformableModel_allocMemory_FUN_0059a3f0
//   core_skeleton.cpp_CDeformableModel_computePartDominantBones_FUN_0059d460
//   crt_stdio.c_fgetc_FUN_005fe840
//   crt_stdio.c_fscanf_FUN_005fe7c0

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CDeformableModel_loadStream_FUN_0059b970
          (CDeformableModel *this_ptr,FILE *file_handle)

{
  CDeformableModel *this_ptr_00;
  int iVar1;
  int iVar2;
  SPart *pSVar3;
  float *pfVar4;
  int iVar5;
  CVector3f *pCVar6;
  int unaff_EBX;
  BADSPACEBASE *in_ESP;
  uchar unaff_BP;
  SVert *pSVar7;
  undefined2 *puVar8;
  int unaff_ESI;
  uchar unaff_DI;
  int in_stack_0000000c;
  int *local_70;
  undefined1 local_6c [4];
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  int local_60;
  undefined1 local_5c [4];
  int local_58;
  undefined2 local_54 [2];
  undefined1 local_50 [4];
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined1 local_28 [4];
  int local_24;
  int local_20;
  int local_1c;
  undefined1 local_14 [4];
  
  this_ptr_00 = this_ptr;
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file_handle);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  iVar1 = crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%d\n",local_64);
  if (iVar1 == 1) goto LAB_0059b9d7;
LAB_0059b9b4:
  do {
    g_CurrentFilename = "..\\core\\skeleton.cpp";
    g_CurrentLineNumber = 0x4c7;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Deformable model file is corrupt");
LAB_0059b9d7:
    if (DAT_00681864 < local_60) {
      g_CurrentFilename = "..\\core\\skeleton.cpp";
      g_CurrentLineNumber = 0x4ca;
      core_main_c_displayErrorAndQuit_FUN_00506f10
                ("Can't load model of version %d, this .exe can only handle up to version %d",local_60,DAT_00681864);
    }
    if (local_60 < 3) {
      do {
        iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file_handle);
        if (iVar1 < 0) break;
      } while (iVar1 != 10);
      iVar1 = crt_stdio_c_fscanf_FUN_005fe7c0
                        (file_handle,"%d,%d,%d,%d,%d,%d\n",&local_48,&local_44,&local_40,&local_3c,
                         &local_58,&local_38);
      if (iVar1 != 6) goto LAB_0059b9b4;
      core_skeleton_cpp_CDeformableModel_allocMemory_FUN_0059a3f0(this_ptr_00,1,1,local_38,local_34)
      ;
      core_skeleton_cpp_CDeformableModel_allocLOD_FUN_0059a510
                (this_ptr_00,0,local_40,local_3c,local_38);
    }
    else {
      if (local_60 < 5) {
        do {
          iVar1 = crt_stdio_c_fgetc_FUN_005fe840((FILE *)0x59bafd);
          if (iVar1 < 0) break;
        } while (iVar1 != 10);
        iVar1 = crt_stdio_c_fscanf_FUN_005fe7c0
                          (file_handle,"%d,%d,%d,%d\n",local_50,&local_48,local_54,local_5c);
        if (iVar1 != 4) goto LAB_0059b9b4;
        local_48 = 1;
      }
      else {
        do {
          iVar1 = crt_stdio_c_fgetc_FUN_005fe840((FILE *)0x59ba2b);
          if (iVar1 < 0) break;
        } while (iVar1 != 10);
        iVar1 = crt_stdio_c_fscanf_FUN_005fe7c0
                          (file_handle,"%d,%d,%d,%d,%d\n",local_50,&local_4c,&local_48,local_54,
                           local_5c);
        if (iVar1 != 5) goto LAB_0059b9b4;
      }
      core_skeleton_cpp_CDeformableModel_allocMemory_FUN_0059a3f0
                (this_ptr_00,local_4c,local_48,local_44,local_58);
      do {
        iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file_handle);
        if (iVar1 < 0) break;
      } while (iVar1 != 10);
      for (iVar1 = 0; iVar1 < this_ptr_00->num_lods; iVar1 = iVar1 + 1) {
        iVar2 = crt_stdio_c_fscanf_FUN_005fe7c0
                          (file_handle,"%d,%d,%d,%d,%d\n",local_28,&local_24,&local_20,
                           this_ptr_00->lod_info + iVar1,
                           &this_ptr_00->lod_info[iVar1].shadow_only_flag);
        if (iVar2 != 5) goto LAB_0059b9b4;
        core_skeleton_cpp_CDeformableModel_allocLOD_FUN_0059a510
                  (this_ptr_00,iVar1,local_24,local_20,local_1c);
      }
    }
    do {
      iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file_handle);
      if (iVar1 < 0) break;
    } while (iVar1 != 10);
    iVar1 = crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%[^\n]\n",this_ptr_00->model_name);
    if (iVar1 != 1) goto LAB_0059b9b4;
    do {
      iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file_handle);
      if (iVar1 < 0) break;
    } while (iVar1 != 10);
    if (local_44 < 3) {
      for (iVar1 = 0; iVar1 < this_ptr_00->num_parts; iVar1 = iVar1 + 1) {
        pSVar3 = this_ptr_00->parts + iVar1;
        iVar2 = crt_stdio_c_fscanf_FUN_005fe7c0
                          (file_handle,"\"%[^\"]\",%d,%d,%d\n",pSVar3,pSVar3->tri_counts,
                           pSVar3->cap_tri_counts,&pSVar3->adj_part_count);
        if (iVar2 != 4) goto LAB_0059b9b4;
        for (iVar2 = 0; iVar2 < this_ptr_00->parts[iVar1].adj_part_count; iVar2 = iVar2 + 1) {
          iVar5 = crt_stdio_c_fscanf_FUN_005fe7c0
                            (file_handle,"%d\n",
                             this_ptr_00->parts[iVar1].adj_part_list + iVar2);
          if (iVar5 != 1) goto LAB_0059b9b4;
        }
      }
    }
    else {
      for (iVar1 = 0; iVar1 < this_ptr_00->num_parts; iVar1 = iVar1 + 1) {
        pSVar3 = this_ptr_00->parts + iVar1;
        if (local_48 < 6) {
          crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"\"%[^\"]\", %d\n",pSVar3,&pSVar3->adj_part_count);
        }
        else {
          crt_stdio_c_fscanf_FUN_005fe7c0
                    (file_handle,"\"%[^\"]\", %d, %d\n",pSVar3,&pSVar3->dominant_bone,
                     &pSVar3->adj_part_count);
        }
        for (iVar2 = 0; iVar2 < this_ptr_00->parts[iVar1].adj_part_count; iVar2 = iVar2 + 1) {
          local_70 = this_ptr_00->parts[iVar1].adj_part_list + iVar2;
          crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%d\n");
        }
        for (iVar2 = 0; iVar2 < this_ptr_00->num_lods; iVar2 = iVar2 + 1) {
          crt_stdio_c_fscanf_FUN_005fe7c0
                    (file_handle,"%d,%d\n",this_ptr_00->parts[iVar1].tri_counts + iVar2,
                     this_ptr_00->parts[iVar1].cap_tri_counts + iVar2);
        }
      }
    }
    do {
      iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file_handle);
      if (iVar1 < 0) break;
    } while (iVar1 != 10);
    for (; unaff_EBX < this_ptr_00->num_lods; unaff_EBX = unaff_EBX + 1) {
      for (this_ptr = (CDeformableModel *)0x0; (int)this_ptr < this_ptr_00->vertex_count[unaff_EBX];
          this_ptr = (CDeformableModel *)((int)&this_ptr->num_lods + 1)) {
        pSVar7 = this_ptr_00->vertex_data_ptr[unaff_EBX] + (int)this_ptr;
        iVar1 = crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%d\n",local_14);
        if (iVar1 != 1) goto LAB_0059b9b4;
        pSVar7->num_bone_influences = unaff_BP;
        for (iVar1 = 0; iVar1 < (int)(uint)pSVar7->num_bone_influences; iVar1 = iVar1 + 1) {
          pfVar4 = pSVar7->bone_weights + iVar1 * 3 + 3;
          iVar2 = crt_stdio_c_fscanf_FUN_005fe7c0
                            (file_handle,"%d,%f,%f,%f,%f\n",&stack0xfffffff0,
                             pSVar7->bone_weights + iVar1,pfVar4,pfVar4 + 1,pfVar4 + 2);
          if (iVar2 != 5) goto LAB_0059b9b4;
          pSVar7->bone_indices[iVar1] = unaff_DI;
        }
      }
    }
    do {
      iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file_handle);
      if (iVar1 < 0) break;
    } while (iVar1 != 10);
    for (; in_stack_0000000c < this_ptr_00->num_lods; in_stack_0000000c = in_stack_0000000c + 1) {
      iVar1 = 0;
      while( true ) {
        if (this_ptr_00->tri_count[in_stack_0000000c] +
            this_ptr_00->cap_tri_count[in_stack_0000000c] <= iVar1) break;
        iVar2 = crt_stdio_c_fscanf_FUN_005fe7c0
                          (file_handle,"%d,%d,%d,%d,%d,%d,%d,%d,%d,%d\n",&stack0xfffffff4,&local_58,
                           local_64,&local_70,local_54,&local_60,local_6c,local_50,local_5c,local_68
                          );
        if (iVar2 != 10) goto LAB_0059b9b4;
        this_ptr_00->index_data_ptr[in_stack_0000000c][iVar1] = unaff_ESI;
        iVar2 = 0;
        do {
          puVar8 = (undefined2 *)((int)this_ptr->lod_info + iVar2 * 2 + -4);
          *puVar8 = local_54[iVar2 * 2];
          unaff_EBX = *(int *)(local_5c + iVar2 * 4 + -4) >> 8;
          puVar8[3] = (short)((uint)*(int *)(local_5c + iVar2 * 4 + -4) >> 8);
          iVar5 = iVar2 * 4;
          iVar2 = iVar2 + 1;
          puVar8[6] = (short)((uint)*(undefined4 *)(local_6c + iVar5 + -4) >> 8);
        } while (iVar2 < 3);
        iVar1 = iVar1 + 1;
      }
    }
    do {
      iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file_handle);
      if (iVar1 < 0) break;
    } while (iVar1 != 10);
    for (iVar1 = 0; iVar1 < this_ptr_00->num_lods; iVar1 = iVar1 + 1) {
      for (iVar2 = 0; iVar2 < this_ptr_00->cap_tri_count[iVar1]; iVar2 = iVar2 + 1) {
        iVar5 = crt_stdio_c_fscanf_FUN_005fe7c0
                          (file_handle,"%d\n",this_ptr_00->cap_index_ptr[iVar1] + iVar2);
        if (iVar5 != 1) goto LAB_0059b9b4;
      }
    }
    do {
      iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file_handle);
      if (iVar1 < 0) break;
    } while (iVar1 != 10);
    for (iVar1 = 0; iVar1 < this_ptr_00->num_texture_sets; iVar1 = iVar1 + 1) {
      while (0 < this_ptr_00->num_textures) {
        iVar2 = crt_stdio_c_fscanf_FUN_005fe7c0
                          (file_handle,"%[^\n]\n",
                           this_ptr_00->texture_sets[iVar1].textures[0].texture_variants[0].
                           texture_name);
        if (iVar2 != 1) goto LAB_0059b9b4;
        in_stack_0000000c = in_stack_0000000c + 1;
      }
    }
    do {
      iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file_handle);
      if (iVar1 < 0) break;
    } while (iVar1 != 10);
    for (iVar1 = 0; iVar1 < local_44; iVar1 = iVar1 + 1) {
      pCVar6 = this_ptr_00->vertex_pool + iVar1;
      iVar2 = crt_stdio_c_fscanf_FUN_005fe7c0
                        (file_handle,"%f,%f,%f\n",pCVar6,&pCVar6->y,&pCVar6->z);
      if (iVar2 != 3) goto LAB_0059b9b4;
    }
    if (local_48 < 2) {
      (this_ptr_00->model_scale).z = 1.0;
      (this_ptr_00->model_scale).y = (this_ptr_00->model_scale).z;
      (this_ptr_00->model_scale).x = (this_ptr_00->model_scale).y;
      break;
    }
    do {
      iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file_handle);
      if (iVar1 < 0) break;
    } while (iVar1 != 10);
    iVar1 = crt_stdio_c_fscanf_FUN_005fe7c0
                      (file_handle,"%f,%f,%f\n",&this_ptr_00->model_scale,
                       &(this_ptr_00->model_scale).y,&(this_ptr_00->model_scale).z);
  } while (iVar1 != 3);
  if (local_48 < 4) {
    this_ptr_00->bbox_pool[0].min.z = 0.0;
    this_ptr_00->bbox_pool[0].min.y = this_ptr_00->bbox_pool[0].min.z;
    this_ptr_00->bbox_pool[0].min.x = this_ptr_00->bbox_pool[0].min.y;
  }
  else {
    do {
      iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file_handle);
      if (iVar1 < 0) break;
    } while (iVar1 != 10);
    crt_stdio_c_fscanf_FUN_005fe7c0
              (file_handle,"%f,%f,%f\n",this_ptr_00->bbox_pool,&this_ptr_00->bbox_pool[0].min.y,
               &this_ptr_00->bbox_pool[0].min.z);
  }
  if (6 < local_48) {
    do {
      iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file_handle);
      if (iVar1 < 0) break;
    } while (iVar1 != 10);
    for (iVar1 = 0; iVar1 < local_44; iVar1 = iVar1 + 1) {
      crt_stdio_c_fscanf_FUN_005fe7c0
                (file_handle,"%d\n",this_ptr_00->bone_to_part_map + iVar1);
    }
  }
  if (local_48 < 7) {
    core_skeleton_cpp_CDeformableModel_computePartDominantBones_FUN_0059d460(this_ptr_00);
  }
  if ((file_handle->_flag & 0x20) != 0) {
    g_CurrentFilename = "..\\core\\skeleton.cpp";
    g_CurrentLineNumber = 0x596;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDeformableModel::loadStream - error reading file!");
    return;
  }
  return;
}


// Assembly code:
// 0059b970: PUSH EBX
//   Label: core_skeleton.cpp_CDeformableModel_loadStream_FUN_0059b970
// 0059b971: PUSH ESI
// 0059b972: PUSH EDI
// 0059b973: PUSH EBP
// 0059b974: SUB ESP,0x80
// 0059b97a: MOV EBX,dword ptr [ESP + 0x94]
//   XREF to: Stack[0x4] (READ)
// 0059b981: MOV ESI,dword ptr [ESP + 0x98]
//   XREF to: Stack[0x8] (READ)
// 0059b988: MOV EDI,ESI
// 0059b98a: PUSH EDI
//   Label: LAB_0059b98a
// 0059b98b: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0059b990: ADD ESP,0x4
// 0059b993: TEST EAX,EAX
// 0059b995: JL 0x0059b99c
//   XREF to: 0059b99c (CONDITIONAL_JUMP)
// 0059b997: CMP EAX,0xa
// 0059b99a: JNZ 0x0059b98a
//   XREF to: 0059b98a (CONDITIONAL_JUMP)
// 0059b99c: LEA EAX,[ESP + 0x28]
//   Label: LAB_0059b99c
//   XREF to: Stack[-0x68] (DATA)
// 0059b9a0: PUSH EAX
// 0059b9a1: PUSH 0x64e8bb
//   XREF to: 0064e8bb (DATA)
// 0059b9a6: PUSH ESI
// 0059b9a7: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0059b9ac: ADD ESP,0xc
// 0059b9af: CMP EAX,0x1
// 0059b9b2: JZ 0x0059b9d7
//   XREF to: 0059b9d7 (CONDITIONAL_JUMP)
// 0059b9b4: MOV EDX,0x64e8bf
//   Label: LAB_0059b9b4
//   XREF to: 0064e8bf (PARAM)
// 0059b9b9: MOV ECX,0x4c7
// 0059b9be: PUSH 0x64e8d4
//   XREF to: 0064e8d4 (DATA)
// 0059b9c3: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 0059b9c9: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 0059b9cf: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0059b9d4: ADD ESP,0x4
// 0059b9d7: MOV EAX,dword ptr [ESP + 0x28]
//   Label: LAB_0059b9d7
//   XREF to: Stack[-0x68] (READ)
// 0059b9db: MOV EDI,dword ptr [0x00681864]
//   XREF to: 00681864 (READ)
// 0059b9e1: CMP EAX,EDI
// 0059b9e3: JLE 0x0059ba0d
//   XREF to: 0059ba0d (CONDITIONAL_JUMP)
// 0059b9e5: PUSH EDI
// 0059b9e6: MOV ECX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x68] (READ)
// 0059b9ea: PUSH ECX
// 0059b9eb: MOV EBP,0x64e8f5
//   XREF to: 0064e8f5 (DATA)
// 0059b9f0: MOV EAX,0x4ca
// 0059b9f5: PUSH 0x64e90a
//   XREF to: 0064e90a (DATA)
// 0059b9fa: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 0059ba00: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 0059ba05: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0059ba0a: ADD ESP,0xc
// 0059ba0d: MOV EDI,dword ptr [ESP + 0x28]
//   Label: LAB_0059ba0d
//   XREF to: Stack[-0x68] (READ)
// 0059ba11: CMP EDI,0x3
// 0059ba14: JL 0x0059bb41
//   XREF to: 0059bb41 (CONDITIONAL_JUMP)
// 0059ba1a: CMP EDI,0x5
// 0059ba1d: JL 0x0059baf5
//   XREF to: 0059baf5 (CONDITIONAL_JUMP)
// 0059ba23: MOV EDI,ESI
// 0059ba25: PUSH EDI
//   Label: LAB_0059ba25
// 0059ba26: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0059ba2b: ADD ESP,0x4
// 0059ba2e: TEST EAX,EAX
// 0059ba30: JL 0x0059ba37
//   XREF to: 0059ba37 (CONDITIONAL_JUMP)
// 0059ba32: CMP EAX,0xa
// 0059ba35: JNZ 0x0059ba25
//   XREF to: 0059ba25 (CONDITIONAL_JUMP)
// 0059ba37: LEA EAX,[ESP + 0x24]
//   Label: LAB_0059ba37
//   XREF to: Stack[-0x6c] (DATA)
// 0059ba3b: PUSH EAX
// 0059ba3c: LEA EAX,[ESP + 0x30]
//   XREF to: Stack[-0x64] (DATA)
// 0059ba40: PUSH EAX
// 0059ba41: LEA EAX,[ESP + 0x40]
//   XREF to: Stack[-0x58] (DATA)
// 0059ba45: PUSH EAX
// 0059ba46: LEA EAX,[ESP + 0x40]
//   XREF to: Stack[-0x5c] (DATA)
// 0059ba4a: PUSH EAX
// 0059ba4b: LEA EAX,[ESP + 0x40]
//   XREF to: Stack[-0x60] (DATA)
// 0059ba4f: PUSH EAX
// 0059ba50: PUSH 0x64e955
//   XREF to: 0064e955 (DATA)
// 0059ba55: PUSH ESI
// 0059ba56: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0059ba5b: ADD ESP,0x1c
// 0059ba5e: CMP EAX,0x5
// 0059ba61: JNZ 0x0059b9b4
//   XREF to: 0059b9b4 (CONDITIONAL_JUMP)
// 0059ba67: MOV EDX,dword ptr [ESP + 0x24]
//   Label: LAB_0059ba67
//   XREF to: Stack[-0x6c] (READ)
// 0059ba6b: PUSH EDX
// 0059ba6c: MOV ECX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x58] (READ)
// 0059ba70: PUSH ECX
// 0059ba71: MOV EDI,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x5c] (READ)
// 0059ba75: PUSH EDI
// 0059ba76: MOV EBP,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x60] (READ)
// 0059ba7a: PUSH EBP
// 0059ba7b: PUSH EBX
// 0059ba7c: MOV EDI,ESI
// 0059ba7e: CALL core_skeleton.cpp_CDeformableModel_allocMemory_FUN_0059a3f0
//   XREF to: 0059a3f0 (UNCONDITIONAL_CALL)
// 0059ba83: ADD ESP,0x14
// 0059ba86: PUSH EDI
//   Label: LAB_0059ba86
// 0059ba87: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0059ba8c: ADD ESP,0x4
// 0059ba8f: TEST EAX,EAX
// 0059ba91: JL 0x0059ba98
//   XREF to: 0059ba98 (CONDITIONAL_JUMP)
// 0059ba93: CMP EAX,0xa
// 0059ba96: JNZ 0x0059ba86
//   XREF to: 0059ba86 (CONDITIONAL_JUMP)
// 0059ba98: XOR EDI,EDI
//   Label: LAB_0059ba98
// 0059ba9a: CMP EDI,dword ptr [EBX]
//   Label: LAB_0059ba9a
// 0059ba9c: JGE 0x0059bbbb
//   XREF to: 0059bbbb (CONDITIONAL_JUMP)
// 0059baa2: LEA EDX,[EDI*0x8 + 0x0]
// 0059baa9: LEA EAX,[EBX + 0x4]
// 0059baac: ADD EAX,EDX
// 0059baae: LEA EDX,[EAX + 0x4]
// 0059bab1: PUSH EDX
// 0059bab2: PUSH EAX
// 0059bab3: LEA EAX,[ESP + 0x60]
//   XREF to: Stack[-0x38] (DATA)
// 0059bab7: PUSH EAX
// 0059bab8: LEA EAX,[ESP + 0x60]
//   XREF to: Stack[-0x3c] (DATA)
// 0059babc: PUSH EAX
// 0059babd: LEA EAX,[ESP + 0x60]
//   XREF to: Stack[-0x40] (DATA)
// 0059bac1: PUSH EAX
// 0059bac2: PUSH 0x64e972
//   XREF to: 0064e972 (DATA)
// 0059bac7: PUSH ESI
// 0059bac8: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0059bacd: ADD ESP,0x1c
// 0059bad0: CMP EAX,0x5
// 0059bad3: JNZ 0x0059b9b4
//   XREF to: 0059b9b4 (CONDITIONAL_JUMP)
// 0059bad9: MOV EBP,dword ptr [ESP + 0x58]
//   XREF to: Stack[-0x38] (READ)
// 0059badd: PUSH EBP
// 0059bade: MOV EAX,dword ptr [ESP + 0x58]
//   XREF to: Stack[-0x3c] (READ)
// 0059bae2: PUSH EAX
// 0059bae3: MOV EDX,dword ptr [ESP + 0x58]
//   XREF to: Stack[-0x40] (READ)
// 0059bae7: PUSH EDX
// 0059bae8: PUSH EDI
// 0059bae9: PUSH EBX
// 0059baea: CALL core_skeleton.cpp_CDeformableModel_allocLOD_FUN_0059a510
//   XREF to: 0059a510 (UNCONDITIONAL_CALL)
// 0059baef: INC EDI
// 0059baf0: ADD ESP,0x14
// 0059baf3: JMP 0x0059ba9a
//   XREF to: 0059ba9a (UNCONDITIONAL_JUMP)
// 0059baf5: MOV EDI,ESI
//   Label: LAB_0059baf5
// 0059baf7: PUSH EDI
//   Label: LAB_0059baf7
// 0059baf8: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0059bafd: ADD ESP,0x4
// 0059bb00: TEST EAX,EAX
// 0059bb02: JL 0x0059bb09
//   XREF to: 0059bb09 (CONDITIONAL_JUMP)
// 0059bb04: CMP EAX,0xa
// 0059bb07: JNZ 0x0059baf7
//   XREF to: 0059baf7 (CONDITIONAL_JUMP)
// 0059bb09: LEA EAX,[ESP + 0x24]
//   Label: LAB_0059bb09
//   XREF to: Stack[-0x6c] (DATA)
// 0059bb0d: PUSH EAX
// 0059bb0e: LEA EAX,[ESP + 0x30]
//   XREF to: Stack[-0x64] (DATA)
// 0059bb12: PUSH EAX
// 0059bb13: LEA EAX,[ESP + 0x40]
//   XREF to: Stack[-0x58] (DATA)
// 0059bb17: PUSH EAX
// 0059bb18: LEA EAX,[ESP + 0x3c]
//   XREF to: Stack[-0x60] (DATA)
// 0059bb1c: PUSH EAX
// 0059bb1d: PUSH 0x64e965
//   XREF to: 0064e965 (DATA)
// 0059bb22: PUSH ESI
// 0059bb23: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0059bb28: ADD ESP,0x18
// 0059bb2b: CMP EAX,0x4
// 0059bb2e: JNZ 0x0059b9b4
//   XREF to: 0059b9b4 (CONDITIONAL_JUMP)
// 0059bb34: MOV dword ptr [ESP + 0x34],0x1
//   XREF to: Stack[-0x5c] (WRITE)
// 0059bb3c: JMP 0x0059ba67
//   XREF to: 0059ba67 (UNCONDITIONAL_JUMP)
// 0059bb41: MOV EDI,ESI
//   Label: LAB_0059bb41
// 0059bb43: PUSH EDI
//   Label: LAB_0059bb43
// 0059bb44: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0059bb49: ADD ESP,0x4
// 0059bb4c: TEST EAX,EAX
// 0059bb4e: JL 0x0059bb55
//   XREF to: 0059bb55 (CONDITIONAL_JUMP)
// 0059bb50: CMP EAX,0xa
// 0059bb53: JNZ 0x0059bb43
//   XREF to: 0059bb43 (CONDITIONAL_JUMP)
// 0059bb55: LEA EAX,[ESP + 0x4c]
//   Label: LAB_0059bb55
//   XREF to: Stack[-0x44] (DATA)
// 0059bb59: PUSH EAX
// 0059bb5a: LEA EAX,[ESP + 0x30]
//   XREF to: Stack[-0x64] (DATA)
// 0059bb5e: PUSH EAX
// 0059bb5f: LEA EAX,[ESP + 0x50]
//   XREF to: Stack[-0x48] (DATA)
// 0059bb63: PUSH EAX
// 0059bb64: LEA EAX,[ESP + 0x50]
//   XREF to: Stack[-0x4c] (DATA)
// 0059bb68: PUSH EAX
// 0059bb69: LEA EAX,[ESP + 0x50]
//   XREF to: Stack[-0x50] (DATA)
// 0059bb6d: PUSH EAX
// 0059bb6e: LEA EAX,[ESP + 0x50]
//   XREF to: Stack[-0x54] (DATA)
// 0059bb72: PUSH EAX
// 0059bb73: PUSH 0x64e982
//   XREF to: 0064e982 (DATA)
// 0059bb78: PUSH ESI
// 0059bb79: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0059bb7e: ADD ESP,0x20
// 0059bb81: CMP EAX,0x6
// 0059bb84: JNZ 0x0059b9b4
//   XREF to: 0059b9b4 (CONDITIONAL_JUMP)
// 0059bb8a: MOV EBP,dword ptr [ESP + 0x4c]
//   XREF to: Stack[-0x44] (READ)
// 0059bb8e: PUSH EBP
// 0059bb8f: MOV EAX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[-0x48] (READ)
// 0059bb93: PUSH EAX
// 0059bb94: PUSH 0x1
// 0059bb96: PUSH 0x1
// 0059bb98: PUSH EBX
// 0059bb99: CALL core_skeleton.cpp_CDeformableModel_allocMemory_FUN_0059a3f0
//   XREF to: 0059a3f0 (UNCONDITIONAL_CALL)
// 0059bb9e: ADD ESP,0x14
// 0059bba1: MOV EDX,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x4c] (READ)
// 0059bba5: PUSH EDX
// 0059bba6: MOV ECX,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x50] (READ)
// 0059bbaa: PUSH ECX
// 0059bbab: MOV EDI,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x54] (READ)
// 0059bbaf: PUSH EDI
// 0059bbb0: PUSH 0x0
// 0059bbb2: PUSH EBX
// 0059bbb3: CALL core_skeleton.cpp_CDeformableModel_allocLOD_FUN_0059a510
//   XREF to: 0059a510 (UNCONDITIONAL_CALL)
// 0059bbb8: ADD ESP,0x14
// 0059bbbb: MOV EDI,ESI
//   Label: LAB_0059bbbb
// 0059bbbd: PUSH EDI
//   Label: LAB_0059bbbd
// 0059bbbe: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0059bbc3: ADD ESP,0x4
// 0059bbc6: TEST EAX,EAX
// 0059bbc8: JL 0x0059bbcf
//   XREF to: 0059bbcf (CONDITIONAL_JUMP)
// 0059bbca: CMP EAX,0xa
// 0059bbcd: JNZ 0x0059bbbd
//   XREF to: 0059bbbd (CONDITIONAL_JUMP)
// 0059bbcf: LEA EAX,[EBX + 0x8f5c]
//   Label: LAB_0059bbcf
// 0059bbd5: PUSH EAX
// 0059bbd6: PUSH 0x64e995
//   XREF to: 0064e995 (DATA)
// 0059bbdb: PUSH ESI
// 0059bbdc: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0059bbe1: ADD ESP,0xc
// 0059bbe4: CMP EAX,0x1
// 0059bbe7: JNZ 0x0059b9b4
//   XREF to: 0059b9b4 (CONDITIONAL_JUMP)
// 0059bbed: MOV EDI,ESI
// 0059bbef: PUSH EDI
//   Label: LAB_0059bbef
// 0059bbf0: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0059bbf5: ADD ESP,0x4
// 0059bbf8: TEST EAX,EAX
// 0059bbfa: JL 0x0059bc01
//   XREF to: 0059bc01 (CONDITIONAL_JUMP)
// 0059bbfc: CMP EAX,0xa
// 0059bbff: JNZ 0x0059bbef
//   XREF to: 0059bbef (CONDITIONAL_JUMP)
// 0059bc01: CMP dword ptr [ESP + 0x28],0x3
//   Label: LAB_0059bc01
//   XREF to: Stack[-0x68] (READ)
// 0059bc06: JL 0x0059bce0
//   XREF to: 0059bce0 (CONDITIONAL_JUMP)
// 0059bc0c: XOR EDI,EDI
// 0059bc0e: CMP EDI,dword ptr [EBX + 0x7140]
//   Label: LAB_0059bc0e
// 0059bc14: JGE 0x0059bd75
//   XREF to: 0059bd75 (CONDITIONAL_JUMP)
// 0059bc1a: LEA EAX,[EDI*0x4 + 0x0]
// 0059bc21: SUB EAX,EDI
// 0059bc23: LEA EBP,[EBX + 0x7144]
// 0059bc29: SHL EAX,0x5
// 0059bc2c: ADD EAX,EBP
// 0059bc2e: MOV ECX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x68] (READ)
// 0059bc32: LEA EDX,[EAX + 0x48]
// 0059bc35: CMP ECX,0x6
// 0059bc38: JGE 0x0059bc8c
//   XREF to: 0059bc8c (CONDITIONAL_JUMP)
// 0059bc3a: PUSH EDX
// 0059bc3b: PUSH EAX
// 0059bc3c: PUSH 0x64e99c
//   XREF to: 0064e99c (DATA)
// 0059bc41: PUSH ESI
// 0059bc42: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0059bc47: ADD ESP,0x10
// 0059bc4a: XOR EBP,EBP
//   Label: LAB_0059bc4a
// 0059bc4c: LEA EAX,[EDI*0x4 + 0x0]
//   Label: LAB_0059bc4c
// 0059bc53: SUB EAX,EDI
// 0059bc55: SHL EAX,0x5
// 0059bc58: LEA EDX,[EBX + EAX*0x1]
// 0059bc5b: CMP EBP,dword ptr [EDX + 0x718c]
// 0059bc61: JGE 0x0059bca2
//   XREF to: 0059bca2 (CONDITIONAL_JUMP)
// 0059bc63: LEA EDX,[EBX + 0x7144]
// 0059bc69: ADD EAX,EDX
// 0059bc6b: LEA EDX,[EBP*0x4 + 0x0]
// 0059bc72: ADD EAX,0x4c
// 0059bc75: ADD EAX,EDX
// 0059bc77: PUSH EAX
// 0059bc78: PUSH 0x64e9ba
//   XREF to: 0064e9ba (DATA)
// 0059bc7d: PUSH ESI
// 0059bc7e: INC EBP
// 0059bc7f: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0059bc84: ADD ESP,0xc
// 0059bc87: JMP 0x0059bc4c
//   XREF to: 0059bc4c (UNCONDITIONAL_JUMP)
// 0059bc89: INC EDI
//   Label: LAB_0059bc89
// 0059bc8a: JMP 0x0059bc0e
//   XREF to: 0059bc0e (UNCONDITIONAL_JUMP)
// 0059bc8c: PUSH EDX
//   Label: LAB_0059bc8c
// 0059bc8d: LEA EDX,[EAX + 0x5c]
// 0059bc90: PUSH EDX
// 0059bc91: PUSH EAX
// 0059bc92: PUSH 0x64e9a9
//   XREF to: 0064e9a9 (DATA)
// 0059bc97: PUSH ESI
// 0059bc98: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0059bc9d: ADD ESP,0x14
// 0059bca0: JMP 0x0059bc4a
//   XREF to: 0059bc4a (UNCONDITIONAL_JUMP)
// 0059bca2: XOR EBP,EBP
//   Label: LAB_0059bca2
// 0059bca4: CMP EBP,dword ptr [EBX]
//   Label: LAB_0059bca4
// 0059bca6: JGE 0x0059bc89
//   XREF to: 0059bc89 (CONDITIONAL_JUMP)
// 0059bca8: LEA EDX,[EDI*0x4 + 0x0]
// 0059bcaf: SUB EDX,EDI
// 0059bcb1: LEA EAX,[EBX + 0x7144]
// 0059bcb7: SHL EDX,0x5
// 0059bcba: ADD EAX,EDX
// 0059bcbc: LEA ECX,[EAX + 0x34]
// 0059bcbf: LEA EDX,[EBP*0x4 + 0x0]
// 0059bcc6: ADD ECX,EDX
// 0059bcc8: ADD EAX,0x20
// 0059bccb: PUSH ECX
// 0059bccc: ADD EAX,EDX
// 0059bcce: PUSH EAX
// 0059bccf: PUSH 0x64e9be
//   XREF to: 0064e9be (DATA)
// 0059bcd4: PUSH ESI
// 0059bcd5: INC EBP
// 0059bcd6: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0059bcdb: ADD ESP,0x10
// 0059bcde: JMP 0x0059bca4
//   XREF to: 0059bca4 (UNCONDITIONAL_JUMP)
// 0059bce0: XOR EDI,EDI
//   Label: LAB_0059bce0
// 0059bce2: CMP EDI,dword ptr [EBX + 0x7140]
//   Label: LAB_0059bce2
// 0059bce8: JGE 0x0059bd75
//   XREF to: 0059bd75 (CONDITIONAL_JUMP)
// 0059bcee: LEA EAX,[EDI*0x4 + 0x0]
// 0059bcf5: SUB EAX,EDI
// 0059bcf7: LEA EDX,[EBX + 0x7144]
// 0059bcfd: SHL EAX,0x5
// 0059bd00: ADD EAX,EDX
// 0059bd02: LEA EDX,[EAX + 0x48]
// 0059bd05: PUSH EDX
// 0059bd06: LEA EDX,[EAX + 0x34]
// 0059bd09: PUSH EDX
// 0059bd0a: LEA EDX,[EAX + 0x20]
// 0059bd0d: PUSH EDX
// 0059bd0e: PUSH EAX
// 0059bd0f: PUSH 0x64e9c5
//   XREF to: 0064e9c5 (DATA)
// 0059bd14: PUSH ESI
// 0059bd15: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0059bd1a: ADD ESP,0x18
// 0059bd1d: CMP EAX,0x4
// 0059bd20: JNZ 0x0059b9b4
//   XREF to: 0059b9b4 (CONDITIONAL_JUMP)
// 0059bd26: XOR EBP,EBP
// 0059bd28: LEA EAX,[EDI*0x4 + 0x0]
//   Label: LAB_0059bd28
// 0059bd2f: SUB EAX,EDI
// 0059bd31: SHL EAX,0x5
// 0059bd34: LEA EDX,[EBX + EAX*0x1]
// 0059bd37: CMP EBP,dword ptr [EDX + 0x718c]
// 0059bd3d: JGE 0x0059bd6f
//   XREF to: 0059bd6f (CONDITIONAL_JUMP)
// 0059bd3f: LEA EDX,[EBX + 0x7144]
// 0059bd45: ADD EDX,EAX
// 0059bd47: LEA EAX,[EBP*0x4 + 0x0]
// 0059bd4e: ADD EDX,0x4c
// 0059bd51: ADD EAX,EDX
// 0059bd53: PUSH EAX
// 0059bd54: PUSH 0x64e9d7
//   XREF to: 0064e9d7 (DATA)
// 0059bd59: PUSH ESI
// 0059bd5a: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0059bd5f: ADD ESP,0xc
// 0059bd62: CMP EAX,0x1
// 0059bd65: JNZ 0x0059b9b4
//   XREF to: 0059b9b4 (CONDITIONAL_JUMP)
// 0059bd6b: ADD EBP,EAX
// 0059bd6d: JMP 0x0059bd28
//   XREF to: 0059bd28 (UNCONDITIONAL_JUMP)
// 0059bd6f: INC EDI
//   Label: LAB_0059bd6f
// 0059bd70: JMP 0x0059bce2
//   XREF to: 0059bce2 (UNCONDITIONAL_JUMP)
// 0059bd75: MOV EDI,ESI
//   Label: LAB_0059bd75
// 0059bd77: PUSH EDI
//   Label: LAB_0059bd77
// 0059bd78: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0059bd7d: ADD ESP,0x4
// 0059bd80: TEST EAX,EAX
// 0059bd82: JL 0x0059bd89
//   XREF to: 0059bd89 (CONDITIONAL_JUMP)
// 0059bd84: CMP EAX,0xa
// 0059bd87: JNZ 0x0059bd77
//   XREF to: 0059bd77 (CONDITIONAL_JUMP)
// 0059bd89: XOR EAX,EAX
//   Label: LAB_0059bd89
// 0059bd8b: MOV dword ptr [ESP + 0x6c],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0059bd8f: MOV EAX,dword ptr [ESP + 0x6c]
//   Label: LAB_0059bd8f
//   XREF to: Stack[-0x24] (READ)
// 0059bd93: CMP EAX,dword ptr [EBX]
// 0059bd95: JGE 0x0059be5b
//   XREF to: 0059be5b (CONDITIONAL_JUMP)
// 0059bd9b: XOR ECX,ECX
// 0059bd9d: MOV dword ptr [ESP + 0x74],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 0059bda1: MOV EDI,dword ptr [ESP + 0x6c]
//   Label: LAB_0059bda1
//   XREF to: Stack[-0x24] (READ)
// 0059bda5: SHL EDI,0x2
// 0059bda8: ADD EDI,EBX
// 0059bdaa: MOV EAX,dword ptr [ESP + 0x74]
//   XREF to: Stack[-0x1c] (READ)
// 0059bdae: CMP EAX,dword ptr [EDI + 0x2c]
// 0059bdb1: JGE 0x0059be49
//   XREF to: 0059be49 (CONDITIONAL_JUMP)
// 0059bdb7: MOV EDX,EAX
// 0059bdb9: SHL EAX,0x2
// 0059bdbc: SUB EAX,EDX
// 0059bdbe: SHL EAX,0x2
// 0059bdc1: ADD EAX,EDX
// 0059bdc3: MOV EBP,dword ptr [EDI + 0x40]
// 0059bdc6: SHL EAX,0x2
// 0059bdc9: ADD EBP,EAX
// 0059bdcb: LEA EAX,[ESP + 0x5c]
//   XREF to: Stack[-0x34] (DATA)
// 0059bdcf: PUSH EAX
// 0059bdd0: PUSH 0x64e9db
//   XREF to: 0064e9db (DATA)
// 0059bdd5: PUSH ESI
// 0059bdd6: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0059bddb: ADD ESP,0xc
// 0059bdde: CMP EAX,0x1
// 0059bde1: JNZ 0x0059b9b4
//   XREF to: 0059b9b4 (CONDITIONAL_JUMP)
// 0059bde7: MOV AL,byte ptr [ESP + 0x5c]
//   XREF to: Stack[-0x34] (READ)
// 0059bdeb: XOR EDI,EDI
// 0059bded: MOV byte ptr [EBP],AL
// 0059bdf0: XOR EAX,EAX
//   Label: LAB_0059bdf0
// 0059bdf2: MOV AL,byte ptr [EBP]
// 0059bdf5: CMP EDI,EAX
// 0059bdf7: JGE 0x0059be52
//   XREF to: 0059be52 (CONDITIONAL_JUMP)
// 0059bdf9: LEA EAX,[EDI*0x4 + 0x0]
// 0059be00: SUB EAX,EDI
// 0059be02: LEA EDX,[EBP + 0x10]
// 0059be05: SHL EAX,0x2
// 0059be08: ADD EAX,EDX
// 0059be0a: LEA EDX,[EAX + 0x8]
// 0059be0d: PUSH EDX
// 0059be0e: LEA EDX,[EAX + 0x4]
// 0059be11: PUSH EDX
// 0059be12: PUSH EAX
// 0059be13: LEA EDX,[EBP + 0x4]
// 0059be16: LEA EAX,[EDI*0x4 + 0x0]
// 0059be1d: ADD EAX,EDX
// 0059be1f: PUSH EAX
// 0059be20: LEA EAX,[ESP + 0x70]
//   XREF to: Stack[-0x30] (DATA)
// 0059be24: PUSH EAX
// 0059be25: PUSH 0x64e9df
//   XREF to: 0064e9df (DATA)
// 0059be2a: PUSH ESI
// 0059be2b: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0059be30: ADD ESP,0x1c
// 0059be33: CMP EAX,0x5
// 0059be36: JNZ 0x0059b9b4
//   XREF to: 0059b9b4 (CONDITIONAL_JUMP)
// 0059be3c: LEA EDX,[EDI + EBP*0x1]
// 0059be3f: MOV AL,byte ptr [ESP + 0x60]
//   XREF to: Stack[-0x30] (READ)
// 0059be43: INC EDI
// 0059be44: MOV byte ptr [EDX + 0x1],AL
// 0059be47: JMP 0x0059bdf0
//   XREF to: 0059bdf0 (UNCONDITIONAL_JUMP)
// 0059be49: INC dword ptr [ESP + 0x6c]
//   Label: LAB_0059be49
//   XREF to: Stack[-0x24] (READ_WRITE)
// 0059be4d: JMP 0x0059bd8f
//   XREF to: 0059bd8f (UNCONDITIONAL_JUMP)
// 0059be52: INC dword ptr [ESP + 0x74]
//   Label: LAB_0059be52
//   XREF to: Stack[-0x1c] (READ_WRITE)
// 0059be56: JMP 0x0059bda1
//   XREF to: 0059bda1 (UNCONDITIONAL_JUMP)
// 0059be5b: MOV EDI,ESI
//   Label: LAB_0059be5b
// 0059be5d: PUSH EDI
//   Label: LAB_0059be5d
// 0059be5e: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0059be63: ADD ESP,0x4
// 0059be66: TEST EAX,EAX
// 0059be68: JL 0x0059be6f
//   XREF to: 0059be6f (CONDITIONAL_JUMP)
// 0059be6a: CMP EAX,0xa
// 0059be6d: JNZ 0x0059be5d
//   XREF to: 0059be5d (CONDITIONAL_JUMP)
// 0059be6f: XOR ECX,ECX
//   Label: LAB_0059be6f
// 0059be71: MOV dword ptr [ESP + 0x7c],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 0059be75: MOV EAX,dword ptr [ESP + 0x7c]
//   Label: LAB_0059be75
//   XREF to: Stack[-0x14] (READ)
// 0059be79: CMP EAX,dword ptr [EBX]
// 0059be7b: JGE 0x0059bf56
//   XREF to: 0059bf56 (CONDITIONAL_JUMP)
// 0059be81: XOR EDI,EDI
// 0059be83: MOV EBP,dword ptr [ESP + 0x7c]
//   Label: LAB_0059be83
//   XREF to: Stack[-0x14] (READ)
// 0059be87: SHL EBP,0x2
// 0059be8a: ADD EBP,EBX
// 0059be8c: MOV EAX,dword ptr [EBP + 0x54]
// 0059be8f: ADD EAX,dword ptr [EBP + 0x68]
// 0059be92: CMP EDI,EAX
// 0059be94: JGE 0x0059bf4d
//   XREF to: 0059bf4d (CONDITIONAL_JUMP)
// 0059be9a: LEA EAX,[EDI*0x8 + 0x0]
// 0059bea1: LEA EDX,[EDI + EAX*0x1]
// 0059bea4: MOV EAX,dword ptr [EBP + 0x7c]
// 0059bea7: ADD EDX,EDX
// 0059bea9: ADD EAX,EDX
// 0059beab: MOV dword ptr [ESP + 0x70],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0059beaf: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x88] (DATA)
// 0059beb3: PUSH EAX
// 0059beb4: LEA EAX,[ESP + 0x18]
//   XREF to: Stack[-0x7c] (DATA)
// 0059beb8: PUSH EAX
// 0059beb9: LEA EAX,[ESP + 0x28]
//   XREF to: Stack[-0x70] (DATA)
// 0059bebd: PUSH EAX
// 0059bebe: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x8c] (DATA)
// 0059bec2: PUSH EAX
// 0059bec3: LEA EAX,[ESP + 0x20]
//   XREF to: Stack[-0x80] (DATA)
// 0059bec7: PUSH EAX
// 0059bec8: LEA EAX,[ESP + 0x30]
//   XREF to: Stack[-0x74] (DATA)
// 0059becc: PUSH EAX
// 0059becd: LEA EAX,[ESP + 0x18]
//   XREF to: Stack[-0x90] (DATA)
// 0059bed1: PUSH EAX
// 0059bed2: LEA EAX,[ESP + 0x28]
//   XREF to: Stack[-0x84] (DATA)
// 0059bed6: PUSH EAX
// 0059bed7: LEA EAX,[ESP + 0x38]
//   XREF to: Stack[-0x78] (DATA)
// 0059bedb: PUSH EAX
// 0059bedc: LEA EAX,[ESP + 0x88]
//   XREF to: Stack[-0x2c] (DATA)
// 0059bee3: PUSH EAX
// 0059bee4: PUSH 0x64e9ef
//   XREF to: 0064e9ef (DATA)
// 0059bee9: PUSH ESI
// 0059beea: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0059beef: ADD ESP,0x30
// 0059bef2: CMP EAX,0xa
// 0059bef5: JNZ 0x0059b9b4
//   XREF to: 0059b9b4 (CONDITIONAL_JUMP)
// 0059befb: LEA EAX,[EDI*0x4 + 0x0]
// 0059bf02: MOV EDX,dword ptr [EBP + 0x90]
// 0059bf08: ADD EDX,EAX
// 0059bf0a: MOV EAX,dword ptr [ESP + 0x64]
//   XREF to: Stack[-0x2c] (READ)
// 0059bf0e: MOV dword ptr [EDX],EAX
// 0059bf10: XOR EAX,EAX
// 0059bf12: MOV EDX,dword ptr [ESP + 0x70]
//   Label: LAB_0059bf12
//   XREF to: Stack[-0x20] (READ)
// 0059bf16: LEA EBP,[EAX + EAX*0x1]
// 0059bf19: ADD EBP,EDX
// 0059bf1b: MOV CX,word ptr [ESP + EAX*0x4 + 0x18]
//   XREF to: Stack[-0x74] (DATA)
// 0059bf20: MOV word ptr [EBP],CX
// 0059bf24: MOV ECX,dword ptr [ESP + EAX*0x4 + 0xc]
//   XREF to: Stack[-0x80] (DATA)
// 0059bf28: SAR ECX,0x8
// 0059bf2b: MOV dword ptr [ESP + 0x68],ECX
//   XREF to: Stack[-0x28] (WRITE)
// 0059bf2f: MOV ECX,dword ptr [ESP + 0x68]
//   XREF to: Stack[-0x28] (READ)
// 0059bf33: MOV word ptr [EBP + 0x6],CX
// 0059bf37: MOV EDX,dword ptr [ESP + EAX*0x4]
//   XREF to: Stack[-0x90] (DATA)
// 0059bf3a: SAR EDX,0x8
// 0059bf3d: INC EAX
// 0059bf3e: MOV word ptr [EBP + 0xc],DX
// 0059bf42: CMP EAX,0x3
// 0059bf45: JL 0x0059bf12
//   XREF to: 0059bf12 (CONDITIONAL_JUMP)
// 0059bf47: INC EDI
// 0059bf48: JMP 0x0059be83
//   XREF to: 0059be83 (UNCONDITIONAL_JUMP)
// 0059bf4d: INC dword ptr [ESP + 0x7c]
//   Label: LAB_0059bf4d
//   XREF to: Stack[-0x14] (READ_WRITE)
// 0059bf51: JMP 0x0059be75
//   XREF to: 0059be75 (UNCONDITIONAL_JUMP)
// 0059bf56: MOV EDI,ESI
//   Label: LAB_0059bf56
// 0059bf58: PUSH EDI
//   Label: LAB_0059bf58
// 0059bf59: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0059bf5e: ADD ESP,0x4
// 0059bf61: TEST EAX,EAX
// 0059bf63: JL 0x0059bf6a
//   XREF to: 0059bf6a (CONDITIONAL_JUMP)
// 0059bf65: CMP EAX,0xa
// 0059bf68: JNZ 0x0059bf58
//   XREF to: 0059bf58 (CONDITIONAL_JUMP)
// 0059bf6a: XOR EBP,EBP
//   Label: LAB_0059bf6a
// 0059bf6c: CMP EBP,dword ptr [EBX]
//   Label: LAB_0059bf6c
// 0059bf6e: JGE 0x0059bfae
//   XREF to: 0059bfae (CONDITIONAL_JUMP)
// 0059bf70: XOR EDI,EDI
// 0059bf72: LEA EAX,[EBP*0x4 + 0x0]
//   Label: LAB_0059bf72
// 0059bf79: ADD EAX,EBX
// 0059bf7b: CMP EDI,dword ptr [EAX + 0x68]
// 0059bf7e: JGE 0x0059bfab
//   XREF to: 0059bfab (CONDITIONAL_JUMP)
// 0059bf80: LEA EDX,[EDI*0x4 + 0x0]
// 0059bf87: MOV EAX,dword ptr [EAX + 0xa4]
// 0059bf8d: ADD EAX,EDX
// 0059bf8f: PUSH EAX
// 0059bf90: PUSH 0x64ea0e
//   XREF to: 0064ea0e (DATA)
// 0059bf95: PUSH ESI
// 0059bf96: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0059bf9b: ADD ESP,0xc
// 0059bf9e: CMP EAX,0x1
// 0059bfa1: JNZ 0x0059b9b4
//   XREF to: 0059b9b4 (CONDITIONAL_JUMP)
// 0059bfa7: ADD EDI,EAX
// 0059bfa9: JMP 0x0059bf72
//   XREF to: 0059bf72 (UNCONDITIONAL_JUMP)
// 0059bfab: INC EBP
//   Label: LAB_0059bfab
// 0059bfac: JMP 0x0059bf6c
//   XREF to: 0059bf6c (UNCONDITIONAL_JUMP)
// 0059bfae: MOV EDI,ESI
//   Label: LAB_0059bfae
// 0059bfb0: PUSH EDI
//   Label: LAB_0059bfb0
// 0059bfb1: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0059bfb6: ADD ESP,0x4
// 0059bfb9: TEST EAX,EAX
// 0059bfbb: JL 0x0059bfc2
//   XREF to: 0059bfc2 (CONDITIONAL_JUMP)
// 0059bfbd: CMP EAX,0xa
// 0059bfc0: JNZ 0x0059bfb0
//   XREF to: 0059bfb0 (CONDITIONAL_JUMP)
// 0059bfc2: XOR EBP,EBP
//   Label: LAB_0059bfc2
// 0059bfc4: CMP EBP,dword ptr [EBX + 0xb8]
//   Label: LAB_0059bfc4
// 0059bfca: JGE 0x0059c030
//   XREF to: 0059c030 (CONDITIONAL_JUMP)
// 0059bfcc: XOR EDI,EDI
// 0059bfce: MOV dword ptr [ESP + 0x78],EDI
//   XREF to: Stack[-0x18] (WRITE)
// 0059bfd2: MOV EAX,dword ptr [ESP + 0x78]
//   Label: LAB_0059bfd2
//   XREF to: Stack[-0x18] (READ)
// 0059bfd6: CMP EAX,dword ptr [EBX + 0xbc]
// 0059bfdc: JGE 0x0059c02d
//   XREF to: 0059c02d (CONDITIONAL_JUMP)
// 0059bfde: LEA EAX,[EBP*0x4 + 0x0]
// 0059bfe5: SUB EAX,EBP
// 0059bfe7: SHL EAX,0x7
// 0059bfea: MOV EDI,EAX
// 0059bfec: SHL EAX,0x4
// 0059bfef: LEA EDX,[EBX + 0xc0]
// 0059bff5: SUB EAX,EDI
// 0059bff7: LEA EDI,[EDX + EAX*0x1]
// 0059bffa: MOV EDX,dword ptr [ESP + 0x78]
//   XREF to: Stack[-0x18] (READ)
// 0059bffe: LEA EAX,[EDX*0x8 + 0x0]
// 0059c005: ADD EAX,EDX
// 0059c007: SHL EAX,0x3
// 0059c00a: ADD EAX,EDI
// 0059c00c: ADD EAX,0x8
// 0059c00f: PUSH EAX
// 0059c010: PUSH 0x64ea12
//   XREF to: 0064ea12 (DATA)
// 0059c015: PUSH ESI
// 0059c016: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0059c01b: ADD ESP,0xc
// 0059c01e: CMP EAX,0x1
// 0059c021: JNZ 0x0059b9b4
//   XREF to: 0059b9b4 (CONDITIONAL_JUMP)
// 0059c027: ADD dword ptr [ESP + 0x78],EAX
//   XREF to: Stack[-0x18] (READ_WRITE)
// 0059c02b: JMP 0x0059bfd2
//   XREF to: 0059bfd2 (UNCONDITIONAL_JUMP)
// 0059c02d: INC EBP
//   Label: LAB_0059c02d
// 0059c02e: JMP 0x0059bfc4
//   XREF to: 0059bfc4 (UNCONDITIONAL_JUMP)
// 0059c030: MOV EDI,ESI
//   Label: LAB_0059c030
// 0059c032: PUSH EDI
//   Label: LAB_0059c032
// 0059c033: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0059c038: ADD ESP,0x4
// 0059c03b: TEST EAX,EAX
// 0059c03d: JL 0x0059c044
//   XREF to: 0059c044 (CONDITIONAL_JUMP)
// 0059c03f: CMP EAX,0xa
// 0059c042: JNZ 0x0059c032
//   XREF to: 0059c032 (CONDITIONAL_JUMP)
// 0059c044: XOR EDI,EDI
//   Label: LAB_0059c044
// 0059c046: CMP EDI,dword ptr [ESP + 0x2c]
//   Label: LAB_0059c046
//   XREF to: Stack[-0x64] (READ)
// 0059c04a: JGE 0x0059c083
//   XREF to: 0059c083 (CONDITIONAL_JUMP)
// 0059c04c: LEA EAX,[EDI*0x4 + 0x0]
// 0059c053: SUB EAX,EDI
// 0059c055: LEA EDX,[EBX + 0x7c90]
// 0059c05b: SHL EAX,0x2
// 0059c05e: ADD EAX,EDX
// 0059c060: LEA EDX,[EAX + 0x8]
// 0059c063: PUSH EDX
// 0059c064: LEA EDX,[EAX + 0x4]
// 0059c067: PUSH EDX
// 0059c068: PUSH EAX
// 0059c069: PUSH 0x64ea19
//   XREF to: 0064ea19 (DATA)
// 0059c06e: PUSH ESI
// 0059c06f: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0059c074: ADD ESP,0x14
// 0059c077: CMP EAX,0x3
// 0059c07a: JNZ 0x0059b9b4
//   XREF to: 0059b9b4 (CONDITIONAL_JUMP)
// 0059c080: INC EDI
// 0059c081: JMP 0x0059c046
//   XREF to: 0059c046 (UNCONDITIONAL_JUMP)
// 0059c083: CMP dword ptr [ESP + 0x28],0x2
//   Label: LAB_0059c083
//   XREF to: Stack[-0x68] (READ)
// 0059c088: JL 0x0059c158
//   XREF to: 0059c158 (CONDITIONAL_JUMP)
// 0059c08e: MOV EDI,ESI
// 0059c090: PUSH EDI
//   Label: LAB_0059c090
// 0059c091: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0059c096: ADD ESP,0x4
// 0059c099: TEST EAX,EAX
// 0059c09b: JL 0x0059c0a2
//   XREF to: 0059c0a2 (CONDITIONAL_JUMP)
// 0059c09d: CMP EAX,0xa
// 0059c0a0: JNZ 0x0059c090
//   XREF to: 0059c090 (CONDITIONAL_JUMP)
// 0059c0a2: LEA EAX,[EBX + 0x7c8c]
//   Label: LAB_0059c0a2
// 0059c0a8: PUSH EAX
// 0059c0a9: LEA EAX,[EBX + 0x7c88]
// 0059c0af: PUSH EAX
// 0059c0b0: LEA EAX,[EBX + 0x7c84]
// 0059c0b6: PUSH EAX
// 0059c0b7: PUSH 0x64ea23
//   XREF to: 0064ea23 (DATA)
// 0059c0bc: PUSH ESI
// 0059c0bd: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0059c0c2: ADD ESP,0x14
// 0059c0c5: CMP EAX,0x3
// 0059c0c8: JNZ 0x0059b9b4
//   XREF to: 0059b9b4 (CONDITIONAL_JUMP)
// 0059c0ce: CMP dword ptr [ESP + 0x28],0x4
//   Label: LAB_0059c0ce
//   XREF to: Stack[-0x68] (READ)
// 0059c0d3: JL 0x0059c17f
//   XREF to: 0059c17f (CONDITIONAL_JUMP)
// 0059c0d9: MOV EDI,ESI
// 0059c0db: PUSH EDI
//   Label: LAB_0059c0db
// 0059c0dc: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0059c0e1: ADD ESP,0x4
// 0059c0e4: TEST EAX,EAX
// 0059c0e6: JL 0x0059c0ed
//   XREF to: 0059c0ed (CONDITIONAL_JUMP)
// 0059c0e8: CMP EAX,0xa
// 0059c0eb: JNZ 0x0059c0db
//   XREF to: 0059c0db (CONDITIONAL_JUMP)
// 0059c0ed: LEA EAX,[EBX + 0x8148]
//   Label: LAB_0059c0ed
// 0059c0f3: PUSH EAX
// 0059c0f4: LEA EAX,[EBX + 0x8144]
// 0059c0fa: PUSH EAX
// 0059c0fb: LEA EAX,[EBX + 0x8140]
// 0059c101: PUSH EAX
// 0059c102: PUSH 0x64ea2d
//   XREF to: 0064ea2d (DATA)
// 0059c107: PUSH ESI
// 0059c108: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0059c10d: ADD ESP,0x14
// 0059c110: CMP dword ptr [ESP + 0x28],0x7
//   Label: LAB_0059c110
//   XREF to: Stack[-0x68] (READ)
// 0059c115: JL 0x0059c19c
//   XREF to: 0059c19c (CONDITIONAL_JUMP)
// 0059c11b: MOV EDI,ESI
// 0059c11d: PUSH EDI
//   Label: LAB_0059c11d
// 0059c11e: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0059c123: ADD ESP,0x4
// 0059c126: TEST EAX,EAX
// 0059c128: JL 0x0059c12f
//   XREF to: 0059c12f (CONDITIONAL_JUMP)
// 0059c12a: CMP EAX,0xa
// 0059c12d: JNZ 0x0059c11d
//   XREF to: 0059c11d (CONDITIONAL_JUMP)
// 0059c12f: XOR EDI,EDI
//   Label: LAB_0059c12f
// 0059c131: CMP EDI,dword ptr [ESP + 0x2c]
//   Label: LAB_0059c131
//   XREF to: Stack[-0x64] (READ)
// 0059c135: JGE 0x0059c19c
//   XREF to: 0059c19c (CONDITIONAL_JUMP)
// 0059c137: LEA EAX,[EDI*0x4 + 0x0]
// 0059c13e: LEA EDX,[EBX + 0x8c3c]
// 0059c144: ADD EAX,EDX
// 0059c146: PUSH EAX
// 0059c147: PUSH 0x64ea37
//   XREF to: 0064ea37 (DATA)
// 0059c14c: PUSH ESI
// 0059c14d: INC EDI
// 0059c14e: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0059c153: ADD ESP,0xc
// 0059c156: JMP 0x0059c131
//   XREF to: 0059c131 (UNCONDITIONAL_JUMP)
// 0059c158: MOV dword ptr [EBX + 0x7c8c],0x3f800000
//   Label: LAB_0059c158
// 0059c162: MOV EAX,dword ptr [EBX + 0x7c8c]
// 0059c168: MOV dword ptr [EBX + 0x7c88],EAX
// 0059c16e: MOV EAX,dword ptr [EBX + 0x7c88]
// 0059c174: MOV dword ptr [EBX + 0x7c84],EAX
// 0059c17a: JMP 0x0059c0ce
//   XREF to: 0059c0ce (UNCONDITIONAL_JUMP)
// 0059c17f: LEA EAX,[EBX + 0x8140]
//   Label: LAB_0059c17f
// 0059c185: MOV dword ptr [EAX + 0x8],0x0
// 0059c18c: MOV EDX,dword ptr [EAX + 0x8]
// 0059c18f: MOV dword ptr [EAX + 0x4],EDX
// 0059c192: MOV EDX,dword ptr [EAX + 0x4]
// 0059c195: MOV dword ptr [EAX],EDX
// 0059c197: JMP 0x0059c110
//   XREF to: 0059c110 (UNCONDITIONAL_JUMP)
// 0059c19c: CMP dword ptr [ESP + 0x28],0x7
//   Label: LAB_0059c19c
//   XREF to: Stack[-0x68] (READ)
// 0059c1a1: JGE 0x0059c1ac
//   XREF to: 0059c1ac (CONDITIONAL_JUMP)
// 0059c1a3: PUSH EBX
// 0059c1a4: CALL core_skeleton.cpp_CDeformableModel_computePartDominantBones_FUN_0059d460
//   XREF to: 0059d460 (UNCONDITIONAL_CALL)
// 0059c1a9: ADD ESP,0x4
// 0059c1ac: TEST byte ptr [ESI + 0xc],0x20
//   Label: LAB_0059c1ac
// 0059c1b0: JNZ 0x0059c1bd
//   XREF to: 0059c1bd (CONDITIONAL_JUMP)
// 0059c1b2: ADD ESP,0x80
// 0059c1b8: POP EBP
// 0059c1b9: POP EDI
// 0059c1ba: POP ESI
// 0059c1bb: POP EBX
// 0059c1bc: RET
// 0059c1bd: MOV EBX,0x64ea3b
//   Label: LAB_0059c1bd
//   XREF to: 0064ea3b (PARAM)
// 0059c1c2: MOV ESI,0x596
// 0059c1c7: PUSH 0x64ea50
//   XREF to: 0064ea50 (DATA)
// 0059c1cc: MOV dword ptr [0x02f0ca48],EBX
//   XREF to: 02f0ca48 (WRITE)
// 0059c1d2: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 0059c1d8: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0059c1dd: ADD ESP,0x4
// 0059c1e0: ADD ESP,0x80
// 0059c1e6: POP EBP
// 0059c1e7: POP EDI
// 0059c1e8: POP ESI
// 0059c1e9: POP EBX
// 0059c1ea: RET
