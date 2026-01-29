// Name: core_skeledit.cpp_CDeformableModel_exportModelToS3D_FUN_00595fc0
// Address: 00595fc0
// Address Range: [[00595fc0, 0059685b]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_CDeformableModel_exportModelToS3D_FUN_00595fc0 (CDeformableModel *this_ptr,char *output_filename,int lod_level,CMatrix3x4f *bone_matrices )

#include "nocturne.h"

void __cdecl
core_skeledit_cpp_CDeformableModel_exportModelToS3D_FUN_00595fc0
          (CDeformableModel *this_ptr,char *output_filename,int lod_level,CMatrix3x4f *bone_matrices
          )

{
  _FILE *p_Var1;
  int *dest;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  CDeformableModel *in_stack_00000004;
  uint in_stack_fffffcc0;
  int aiStack_140 [30];
  CStrList local_c8;
  CStrList local_b8;
  CVector3f local_a8;
  int local_9c;
  int local_98;
  int local_94;
  SPart *local_90;
  int local_8c;
  int local_88;
  int local_84;
  CDeformableModel *local_80;
  int local_7c;
  int local_78;
  int local_74;
  _FILE *local_70;
  int local_6c;
  int local_68;
  CDeformableModel *local_64;
  CDeformableModel *local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  
  __STK(0x38c);
  local_70 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                       ((char *)this_ptr,(char *)0x0,"wt","..\\core\\skeledit.cpp",
                        0x155d);
  if (local_70 == (_FILE *)0x0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't create %s");
    return;
  }
  dest = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                   (in_stack_00000004->vertex_count[(int)output_filename] << 2,
                    "..\\core\\skeledit.cpp",0x1565);
  if (dest == (int *)0x0) {
    g_CurrentFilename = "..\\core\\skeledit.cpp";
    g_CurrentLineNumber = 0x1566;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory");
  }
  local_94 = shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                       (g_CEditorToolsPtr,"Export capped faces?");
  shape_edittool_cpp_CStrList_ctor_FUN_004a2a20(&local_b8);
  shape_edittool_cpp_CStrList_ctor_FUN_004a2a20(&local_c8);
  iVar4 = (int)output_filename * 4;
  local_3c = 0;
  iVar6 = (int)in_stack_00000004->lod_info + iVar4 + -4;
  local_40 = *(int *)(iVar6 + 0x54);
  local_84 = 0;
  if (0 < in_stack_00000004->num_parts) {
    local_80 = in_stack_00000004;
    local_78 = 0;
    local_98 = iVar6;
    local_7c = iVar6;
    local_74 = iVar6;
    local_58 = iVar6;
    local_54 = iVar4;
    local_50 = iVar4;
    local_18 = iVar6;
    do {
      memset(dest,0,*(int *)(local_98 + 0x2c) << 2);
      local_44 = local_3c;
      local_68 = local_7c;
      local_24 = local_3c * 0x12;
      local_30 = 0;
      if (0 < *(int *)(local_7c + 0x7164)) {
        do {
          iVar4 = 0;
          do {
            puVar2 = (ushort *)(*(int *)(local_18 + 0x7c) + local_24 + iVar4);
            iVar4 = iVar4 + 2;
            dest[*puVar2] = 1;
          } while (iVar4 != 6);
          local_30 = local_30 + 1;
          local_44 = local_44 + 1;
          local_24 = local_24 + 0x12;
        } while (local_30 < *(int *)(local_7c + 0x7164));
      }
      local_48 = local_40;
      if (local_94 != 0) {
        local_20 = 0;
        local_5c = local_74;
        local_34 = local_40 * 0x12;
        if (0 < *(int *)(local_74 + 0x7178)) {
          do {
            iVar4 = 0;
            do {
              puVar2 = (ushort *)(*(int *)(iVar6 + 0x7c) + local_34 + iVar4);
              iVar4 = iVar4 + 2;
              dest[*puVar2] = 1;
            } while (iVar4 != 6);
            local_20 = local_20 + 1;
            local_48 = local_48 + 1;
            local_34 = local_34 + 0x12;
          } while (local_20 < *(int *)(local_74 + 0x7178));
        }
      }
      *(uint *)((int)aiStack_140 + local_78) = 0;
      local_1c = 0;
      if (0 < *(int *)(local_58 + 0x2c)) {
        local_4c = local_78;
        piVar5 = dest;
        do {
          if (*piVar5 == 0) {
            *piVar5 = -1;
          }
          else {
            *(int *)((int)aiStack_140 + local_4c) = *(int *)((int)aiStack_140 + local_4c) + 1;
            *piVar5 = local_b8.item_count;
            core_skeleton_cpp_CDeformableModel_skinSingleVertex_FUN_0059aa00
                      (in_stack_00000004,&local_a8,(int)output_filename,local_1c,
                       (CMatrix3x4f *)lod_level);
            sprintf
                      (&stack0xfffffcc0,"%g,%g,%g",SUB84((double)local_a8.x,0),
                       (int)((ulonglong)(double)local_a8.x >> 0x20),(double)local_a8.y,
                       (double)local_a8.z);
            shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_b8,&stack0xfffffcc0);
          }
          local_1c = local_1c + 1;
          piVar5 = piVar5 + 1;
        } while (local_1c < *(int *)(local_58 + 0x2c));
      }
      local_60 = local_80;
      local_28 = local_3c << 2;
      local_2c = local_3c * 0x12;
      for (iVar4 = 0; iVar4 < *(int *)((int)local_60->parts[0].tri_counts + local_50);
          iVar4 = iVar4 + 1) {
        puVar2 = (ushort *)(*(int *)((int)in_stack_00000004->tri_data_ptr + local_50) + local_2c);
        local_14 = (uint)puVar2[3];
        sprintf
                  (&stack0xfffffcc0,"%d, %d,%g,%g, %d,%g,%g, %d,%g,%g",
                   *(uint *)
                    (*(int *)((int)in_stack_00000004->index_data_ptr + local_50) + local_28),
                   dest[*puVar2],(double)local_14 * 0.00390625,
                   (double)puVar2[6] * 0.00390625,dest[puVar2[1]],
                   (double)puVar2[4] * 0.00390625,SUB84((double)puVar2[7] * 0.00390625,0),
                   (int)((ulonglong)((double)puVar2[7] * 0.00390625) >> 0x20),dest[puVar2[2]],
                   (double)puVar2[5] * 0.00390625,(double)puVar2[8] * 0.00390625);
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_c8,&stack0xfffffcc0);
        local_28 = local_28 + 4;
        local_2c = local_2c + 0x12;
        local_3c = local_3c + 1;
      }
      if (local_3c != local_44) {
        g_CurrentFilename = "..\\core\\skeledit.cpp";
        g_CurrentLineNumber = 0x15a8;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze");
      }
      if (local_94 != 0) {
        local_6c = local_3c << 2;
        local_64 = local_80;
        local_38 = local_40 * 0x12;
        for (iVar4 = 0; iVar4 < *(int *)((int)local_64->parts[0].cap_tri_counts + local_54);
            iVar4 = iVar4 + 1) {
          puVar2 = (ushort *)(*(int *)((int)in_stack_00000004->tri_data_ptr + local_54) + local_38);
          local_14 = (uint)puVar2[3];
          sprintf
                    (&stack0xfffffcc0,"%d, %d,%g,%g, %d,%g,%g, %d,%g,%g",
                     *(uint *)
                      (*(int *)((int)in_stack_00000004->index_data_ptr + local_54) + local_6c),
                     dest[*puVar2],(double)local_14 * 0.00390625,
                     (double)puVar2[6] * 0.00390625,dest[puVar2[1]],
                     (double)puVar2[4] * 0.00390625,
                     SUB84((double)puVar2[7] * 0.00390625,0),
                     (int)((ulonglong)((double)puVar2[7] * 0.00390625) >> 0x20),dest[puVar2[2]]
                     ,(double)puVar2[5] * 0.00390625,(double)puVar2[8] * 0.00390625);
          shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_c8,&stack0xfffffcc0);
          local_38 = local_38 + 0x12;
          local_40 = local_40 + 1;
        }
        if (local_40 != local_48) {
          g_CurrentFilename = "..\\core\\skeledit.cpp";
          g_CurrentLineNumber = 0x15b5;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze");
        }
      }
      local_7c = local_7c + 0x60;
      local_74 = local_74 + 0x60;
      local_78 = local_78 + 4;
      local_80 = (CDeformableModel *)(local_80->tri_count + 3);
      local_84 = local_84 + 1;
    } while (local_84 < in_stack_00000004->num_parts);
  }
  g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
  g_CurrentDebugLine = 0x15b9;
  shape_memdbg_cpp_free_FUN_005fe659(dest);
  _fprintf(local_70,"// S3D version\n");
  _fprintf(local_70,"103\n");
  _fprintf(local_70,"// numTextures,numTris,numVerts,numParts,numFrames,numLights,numCameras\n");
  _fprintf(local_70,"%d,%d,%d,%d,1,0,0\n",in_stack_00000004->num_textures,local_c8.item_count,
             local_b8.item_count);
  local_88 = 0;
  _fprintf(local_70,"// partList: firstVert,numVerts,firstTri,numTris,\"name\"\n");
  local_8c = 0;
  iVar6 = 0;
  if (0 < in_stack_00000004->num_parts) {
    local_90 = in_stack_00000004->parts;
    iVar3 = (int)in_stack_00000004->lod_info + (int)output_filename * 4 + -4;
    iVar4 = 0;
    do {
      local_9c = *(int *)(iVar3 + 0x7164) + *(int *)(iVar3 + 0x7178);
      iVar3 = iVar3 + 0x60;
      iVar6 = iVar6 + 1;
      _fprintf(local_70,"%d,%d,%d,%d,\"%s\"\n",local_88,*(uint *)((int)aiStack_140 + iVar4),
                 local_8c,local_9c);
      local_88 = local_88 + *(int *)((int)aiStack_140 + iVar4);
      local_8c = local_8c + local_9c;
      local_90 = local_90 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar6 < in_stack_00000004->num_parts);
  }
  _fprintf(local_70,"// texture list: name\n");
  iVar6 = 0;
  if (0 < in_stack_00000004->num_textures) {
    do {
      _fprintf(local_70,"%s\n");
      iVar6 = iVar6 + 1;
    } while (iVar6 < in_stack_00000004->num_textures);
  }
  _fprintf(local_70,"// triList: materialIndex,vertices(index, texX, texY)\n");
  p_Var1 = local_70;
  iVar6 = 0;
  if (0 < local_c8.item_count) {
    do {
      shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_c8,iVar6);
      iVar6 = iVar6 + 1;
      _fprintf(p_Var1,"%s\n");
    } while (iVar6 < local_c8.item_count);
  }
  iVar6 = 0;
  _fprintf(local_70,"// vertList: x,y,z\n");
  p_Var1 = local_70;
  if (0 < local_b8.item_count) {
    do {
      shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_b8,iVar6);
      iVar6 = iVar6 + 1;
      _fprintf(p_Var1,"%s\n");
    } while (iVar6 < local_b8.item_count);
  }
  _fprintf(local_70,"// lightList: \"name\", type, x,y,z, r,g,b, (type-specific info)\n");
  _fprintf(local_70,"// cameraList: \"name\", x,y,z, p,b,h, fov(rad)\n");
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_70,"..\\core\\skeledit.cpp",0x15ea);
  shape_edittool_cpp_CStrList_dtor_FUN_004a2a40(&local_c8,0,in_stack_fffffcc0);
  shape_edittool_cpp_CStrList_dtor_FUN_004a2a40(&local_b8,0,in_stack_fffffcc0);
  return;
}
