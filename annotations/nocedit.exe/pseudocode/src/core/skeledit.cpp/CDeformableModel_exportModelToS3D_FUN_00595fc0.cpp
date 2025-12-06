// Name: core_skeledit.cpp_CDeformableModel_exportModelToS3D_FUN_00595fc0
// Address: 00595fc0
// Address Range: [[00595fc0, 0059685b]]
// Convention: __cdecl
// Signature: void core_skeledit.cpp_CDeformableModel_exportModelToS3D_FUN_00595fc0(CDeformableModel * this_ptr, char * output_filename, int lod_level, CMatrix3x4f * bone_matrices)

#include "nocturne.h"

void __cdecl
core_skeledit_cpp_CDeformableModel_exportModelToS3D_FUN_00595fc0
          (CDeformableModel *this_ptr,char *output_filename,int lod_level,CMatrix3x4f *bone_matrices
          )

{
  FILE *pFVar1;
  int *dest;
  char *pcVar2;
  ushort *puVar3;
  BADSPACEBASE *in_ESP;
  int iVar4;
  int iVar5;
  int *piVar6;
  CMatrix3x4f *in_stack_00000018;
  uint in_stack_fffffd10;
  uint in_stack_fffffd14;
  int aiStack_138 [30];
  CStrList CStack_c0;
  CStrList CStack_b0;
  CVector3f local_a0;
  int local_94;
  char *local_90;
  int local_8c;
  char *local_88;
  int local_84;
  int local_80;
  int local_7c;
  char *local_78;
  char *local_74;
  int local_70;
  char *local_6c;
  FILE *local_68;
  int local_64;
  char *local_60;
  char *local_5c;
  char *local_58;
  char *local_54;
  char *local_50;
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
  int local_14;
  char *local_10;
  uint uStack_c;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x38c);
  local_68 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                       ((char *)lod_level,(char *)0x0,"wt","..\\core\\skeledit.cpp",
                        0x155d);
  if (local_68 == (FILE *)0x0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't create %s");
    return;
  }
  dest = (int *)shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                          (*(int *)(output_filename + (int)bone_matrices * 4 + 0x2c) << 2,
                           "..\\core\\skeledit.cpp",0x1565);
  if (dest == (int *)0x0) {
    g_CurrentFilename = "..\\core\\skeledit.cpp";
    g_CurrentLineNumber = 0x1566;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory");
  }
  local_8c = shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                       (g_CEditorToolsPtr,"Export capped faces?");
  shape_edittool_cpp_CStrList_ctor_FUN_004a2a20(&CStack_b0);
  shape_edittool_cpp_CStrList_ctor_FUN_004a2a20(&CStack_c0);
  iVar5 = (int)bone_matrices * 4;
  local_34 = 0;
  pcVar2 = output_filename + iVar5;
  local_38 = *(int *)(pcVar2 + 0x54);
  local_7c = 0;
  if (0 < *(int *)(output_filename + 0x7140)) {
    local_78 = output_filename;
    local_70 = 0;
    local_90 = pcVar2;
    local_74 = pcVar2;
    local_6c = pcVar2;
    local_50 = pcVar2;
    local_4c = iVar5;
    local_48 = iVar5;
    local_10 = pcVar2;
    do {
      crt_memory_c_memset_FUN_005fde40(dest,0,*(int *)(local_90 + 0x2c) << 2);
      local_3c = local_34;
      local_60 = local_74;
      local_1c = local_34 * 0x12;
      local_28 = 0;
      if (0 < *(int *)(local_74 + 0x7164)) {
        do {
          iVar5 = 0;
          do {
            puVar3 = (ushort *)(*(int *)(local_10 + 0x7c) + local_1c + iVar5);
            iVar5 = iVar5 + 2;
            dest[*puVar3] = 1;
          } while (iVar5 != 6);
          local_28 = local_28 + 1;
          local_3c = local_3c + 1;
          local_1c = local_1c + 0x12;
        } while (local_28 < *(int *)(local_74 + 0x7164));
      }
      local_40 = local_38;
      if (local_8c != 0) {
        local_18 = 0;
        local_54 = local_6c;
        local_2c = local_38 * 0x12;
        if (0 < *(int *)(local_6c + 0x7178)) {
          do {
            iVar5 = 0;
            do {
              puVar3 = (ushort *)(*(int *)(pcVar2 + 0x7c) + local_2c + iVar5);
              iVar5 = iVar5 + 2;
              dest[*puVar3] = 1;
            } while (iVar5 != 6);
            local_18 = local_18 + 1;
            local_40 = local_40 + 1;
            local_2c = local_2c + 0x12;
          } while (local_18 < *(int *)(local_6c + 0x7178));
        }
      }
      *(uint *)((int)aiStack_138 + local_70) = 0;
      local_14 = 0;
      if (0 < *(int *)(local_50 + 0x2c)) {
        local_44 = local_70;
        piVar6 = dest;
        do {
          if (*piVar6 == 0) {
            *piVar6 = -1;
          }
          else {
            *(int *)((int)aiStack_138 + local_44) = *(int *)((int)aiStack_138 + local_44) + 1;
            *piVar6 = CStack_b0.item_count;
            core_skeleton_cpp_CDeformableModel_skinSingleVertex_FUN_0059aa00
                      ((CDeformableModel *)output_filename,&local_a0,(int)bone_matrices,local_14,
                       in_stack_00000018);
            crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffcc8,"%g,%g,%g");
            shape_edittool_cpp_CStrList_add_FUN_004a2b80(&CStack_b0,&stack0xfffffcc8);
          }
          local_14 = local_14 + 1;
          piVar6 = piVar6 + 1;
        } while (local_14 < *(int *)(local_50 + 0x2c));
      }
      local_58 = local_78;
      local_20 = local_34 << 2;
      local_24 = local_34 * 0x12;
      for (iVar5 = 0; iVar5 < *(int *)(local_58 + local_48 + 0x7164); iVar5 = iVar5 + 1) {
        puVar3 = (ushort *)(*(int *)(output_filename + local_48 + 0x7c) + local_24);
        uStack_c = (uint)puVar3[3];
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (&stack0xfffffcc8,"%d, %d,%g,%g, %d,%g,%g, %d,%g,%g",
                   *(uint *)(*(int *)(output_filename + local_48 + 0x90) + local_20),
                   dest[*puVar3],(double)uStack_c * 0.00390625,
                   (double)puVar3[6] * 0.00390625,dest[puVar3[1]],
                   (double)puVar3[4] * 0.00390625,(double)puVar3[7] * 0.00390625);
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(&CStack_c0,&stack0xfffffcc8);
        local_20 = local_20 + 4;
        local_24 = local_24 + 0x12;
        local_34 = local_34 + 1;
      }
      if (local_34 != local_3c) {
        g_CurrentFilename = "..\\core\\skeledit.cpp";
        g_CurrentLineNumber = 0x15a8;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze");
      }
      if (local_8c != 0) {
        local_64 = local_34 << 2;
        local_5c = local_78;
        local_30 = local_38 * 0x12;
        for (iVar5 = 0; iVar5 < *(int *)(local_5c + local_4c + 0x7178); iVar5 = iVar5 + 1) {
          puVar3 = (ushort *)(*(int *)(output_filename + local_4c + 0x7c) + local_30);
          uStack_c = (uint)puVar3[3];
          crt_stdio_c_sprintf_FUN_005fdbd0
                    (&stack0xfffffcc8,"%d, %d,%g,%g, %d,%g,%g, %d,%g,%g",
                     *(uint *)(*(int *)(output_filename + local_4c + 0x90) + local_64),
                     dest[*puVar3],(double)uStack_c * 0.00390625,
                     (double)puVar3[6] * 0.00390625,dest[puVar3[1]],
                     (double)puVar3[4] * 0.00390625,(double)puVar3[7] * 0.00390625);
          shape_edittool_cpp_CStrList_add_FUN_004a2b80(&CStack_c0,&stack0xfffffcc8);
          local_30 = local_30 + 0x12;
          local_38 = local_38 + 1;
        }
        if (local_38 != local_40) {
          g_CurrentFilename = "..\\core\\skeledit.cpp";
          g_CurrentLineNumber = 0x15b5;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze");
        }
      }
      local_74 = local_74 + 0x60;
      local_6c = local_6c + 0x60;
      local_70 = local_70 + 4;
      local_78 = local_78 + 0x60;
      local_7c = local_7c + 1;
    } while (local_7c < *(int *)(output_filename + 0x7140));
  }
  g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
  g_CurrentDebugLine = 0x15b9;
  crt_memory_c_free_FUN_005fe659(dest);
  crt_stdio_c_fprintf_FUN_005fe6d0(local_68,"// S3D version\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(local_68,"103\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(local_68,"// numTextures,numTris,numVerts,numParts,numFrames,numLights,numCameras\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(local_68,"%d,%d,%d,%d,1,0,0\n");
  local_80 = 0;
  crt_stdio_c_fprintf_FUN_005fe6d0(local_68,"// partList: firstVert,numVerts,firstTri,numTris,\"name\"\n");
  local_84 = 0;
  iVar5 = 0;
  if (0 < *(int *)(output_filename + 0x7140)) {
    local_88 = output_filename + 0x7144;
    pcVar2 = output_filename + (int)bone_matrices * 4;
    iVar4 = 0;
    do {
      local_94 = *(int *)(pcVar2 + 0x7164) + *(int *)(pcVar2 + 0x7178);
      pcVar2 = pcVar2 + 0x60;
      iVar5 = iVar5 + 1;
      crt_stdio_c_fprintf_FUN_005fe6d0(local_68,"%d,%d,%d,%d,\"%s\"\n");
      local_80 = local_80 + *(int *)((int)aiStack_138 + iVar4);
      local_84 = local_84 + local_94;
      local_88 = local_88 + 0x60;
      iVar4 = iVar4 + 4;
    } while (iVar5 < *(int *)(output_filename + 0x7140));
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(local_68,"// texture list: name\n");
  iVar5 = 0;
  if (0 < *(int *)(output_filename + 0xbc)) {
    do {
      crt_stdio_c_fprintf_FUN_005fe6d0(local_68,"%s\n");
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(output_filename + 0xbc));
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(local_68,"// triList: materialIndex,vertices(index, texX, texY)\n");
  pFVar1 = local_68;
  iVar5 = 0;
  if (0 < CStack_c0.item_count) {
    do {
      shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&CStack_c0,iVar5);
      iVar5 = iVar5 + 1;
      crt_stdio_c_fprintf_FUN_005fe6d0(pFVar1,"%s\n");
    } while (iVar5 < CStack_c0.item_count);
  }
  iVar5 = 0;
  crt_stdio_c_fprintf_FUN_005fe6d0(local_68,"// vertList: x,y,z\n");
  pFVar1 = local_68;
  if (0 < CStack_b0.item_count) {
    do {
      shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&CStack_b0,iVar5);
      iVar5 = iVar5 + 1;
      crt_stdio_c_fprintf_FUN_005fe6d0(pFVar1,"%s\n");
    } while (iVar5 < CStack_b0.item_count);
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(local_68,"// lightList: \"name\", type, x,y,z, r,g,b, (type-specific info)\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(local_68,"// cameraList: \"name\", x,y,z, p,b,h, fov(rad)\n");
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_68,"..\\core\\skeledit.cpp",0x15ea);
  shape_edittool_cpp_CStrList_dtor_FUN_004a2a40(&CStack_c0,0,in_stack_fffffd10);
  shape_edittool_cpp_CStrList_dtor_FUN_004a2a40(&CStack_b0,0,in_stack_fffffd14);
  return;
}
