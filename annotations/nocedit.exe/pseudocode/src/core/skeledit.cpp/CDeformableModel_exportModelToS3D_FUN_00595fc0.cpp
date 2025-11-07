// Name: core_skeledit.cpp_CDeformableModel_exportModelToS3D_FUN_00595fc0
// Address: 00595fc0
// Address Range: [[00595fc0, 0059685b]]
// Convention: __cdecl
// Signature: void core_skeledit.cpp_CDeformableModel_exportModelToS3D_FUN_00595fc0(CDeformableModel * this_ptr, char * output_filename, int lod_level, CMatrix3x4f * bone_matrices)
// Cross-references:
//   core_skeledit.cpp_CDeformableModelInstance_exportModelToS3D_FUN_00598ee0 (00598ee0) at 00598f06 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_skeledit_cpp_0064d61a
//   TerminatedCString s_wt_0064d62f
//   TerminatedCString s_Can_t_create_s_0064d632
//   TerminatedCString s_core_skeledit_cpp_0064d642
//   TerminatedCString s_core_skeledit_cpp_0064d657
//   TerminatedCString s_Out_of_memory_0064d66c
//   TerminatedCString s_Export_capped_faces_0064d67a
//   TerminatedCString s_g_g_g_0064d68f
//   TerminatedCString s_d_d_g_g_d_g_g_d_g_g_0064d698
//   TerminatedCString s_core_skeledit_cpp_0064d6b9
//   TerminatedCString s_Hell_froze_0064d6ce
//   TerminatedCString s_d_d_g_g_d_g_g_d_g_g_0064d6d9
//   TerminatedCString s_core_skeledit_cpp_0064d6fa
//   TerminatedCString s_Hell_froze_0064d70f
//   TerminatedCString s_core_skeledit_cpp_0064d71a
//   TerminatedCString s_S3D_version_0064d72f
//   TerminatedCString s_s_103_0064d73f
//   TerminatedCString s_numTextures_numTris_numV_0064d744
//   TerminatedCString s_d_d_d_d_1_0_0_0064d78d
//   TerminatedCString s_partList_firstVert_numVe_0064d7a0
//   TerminatedCString s_d_d_d_d_s_0064d7d9
//   TerminatedCString s_texture_list_name_0064d7eb
//   TerminatedCString s_s_0064d802
//   TerminatedCString s_triList_materialIndex_ve_0064d806
//   TerminatedCString s_s_0064d83d
//   TerminatedCString s_vertList_x_y_z_0064d841
//   TerminatedCString s_s_0064d855
//   TerminatedCString s_lightList_name_type_x_y__0064d859
//   TerminatedCString s_cameraList_name_x_y_z_p__0064d899
//   TerminatedCString s_core_skeledit_cpp_0064d8c8
//   double DOUBLE_0064d8e2 = 0.00390625
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   char* g_CurrentDebugFilename = 0067d200
//   CEditorTools g_CEditorToolsPtr
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   int g_CurrentDebugLine
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_skeleton.cpp_CDeformableModel_skinSingleVertex_FUN_0059aa00
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_memset_FUN_005fde40
//   crt_stack.c_stack_probe_FUN_005ff9f3
//   crt_stdio.c_fprintf_FUN_005fe6d0
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
//   shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   shape_edittool.cpp_CStrList_ctor_FUN_004a2a20
//   shape_edittool.cpp_CStrList_dtor_FUN_004a2a40
//   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
//   shape_memdbg.cpp_openFile_FUN_0050f7a0

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
      *(undefined4 *)((int)aiStack_138 + local_70) = 0;
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
                   *(undefined4 *)(*(int *)(output_filename + local_48 + 0x90) + local_20),
                   dest[*puVar3],(double)uStack_c * DOUBLE_0064d8e2,
                   (double)puVar3[6] * DOUBLE_0064d8e2,dest[puVar3[1]],
                   (double)puVar3[4] * DOUBLE_0064d8e2,(double)puVar3[7] * DOUBLE_0064d8e2);
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
                     *(undefined4 *)(*(int *)(output_filename + local_4c + 0x90) + local_64),
                     dest[*puVar3],(double)uStack_c * DOUBLE_0064d8e2,
                     (double)puVar3[6] * DOUBLE_0064d8e2,dest[puVar3[1]],
                     (double)puVar3[4] * DOUBLE_0064d8e2,(double)puVar3[7] * DOUBLE_0064d8e2);
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


// Assembly code:
// 00595fc0: PUSH 0x38c
//   Label: core_skeledit.cpp_CDeformableModel_exportModelToS3D_FUN_00595fc0
// 00595fc5: CALL crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
// 00595fca: PUSH EBX
// 00595fcb: PUSH ESI
// 00595fcc: PUSH EDI
// 00595fcd: PUSH EBP
// 00595fce: MOV EBP,ESP
// 00595fd0: SUB ESP,0x330
// 00595fd6: SUB EBP,0x72
// 00595fd9: MOV EBX,dword ptr [EBP + 0x8a]
//   XREF to: Stack[0x8] (READ)
// 00595fdf: PUSH 0x155d
// 00595fe4: PUSH 0x64d61a
//   XREF to: 0064d61a (DATA)
// 00595fe9: PUSH 0x64d62f
//   XREF to: 0064d62f (DATA)
// 00595fee: PUSH 0x0
// 00595ff0: PUSH EBX
// 00595ff1: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 00595ff6: ADD ESP,0x14
// 00595ff9: MOV dword ptr [EBP + 0x12],EAX
//   XREF to: Stack[-0x70] (WRITE)
// 00595ffc: TEST EAX,EAX
// 00595ffe: JZ 0x005963d8
//   XREF to: 005963d8 (CONDITIONAL_JUMP)
// 00596004: MOV EAX,dword ptr [EBP + 0x8e]
//   XREF to: Stack[0xc] (READ)
// 0059600a: MOV EDX,dword ptr [EBP + 0x86]
//   XREF to: Stack[0x4] (READ)
// 00596010: SHL EAX,0x2
// 00596013: ADD EAX,EDX
// 00596015: PUSH 0x1565
// 0059601a: MOV EAX,dword ptr [EAX + 0x2c]
// 0059601d: PUSH 0x64d642
//   XREF to: 0064d642 (DATA)
// 00596022: SHL EAX,0x2
// 00596025: PUSH EAX
// 00596026: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
//   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)
// 0059602b: ADD ESP,0xc
// 0059602e: MOV EBX,EAX
// 00596030: TEST EAX,EAX
// 00596032: JNZ 0x00596057
//   XREF to: 00596057 (CONDITIONAL_JUMP)
// 00596034: MOV ECX,0x64d657
//   XREF to: 0064d657 (PARAM)
// 00596039: MOV ESI,0x1566
// 0059603e: PUSH 0x64d66c
//   XREF to: 0064d66c (DATA)
// 00596043: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00596049: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 0059604f: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00596054: ADD ESP,0x4
// 00596057: PUSH 0x64d67a
//   Label: LAB_00596057
//   XREF to: 0064d67a (DATA)
// 0059605c: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00596062: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 00596063: CALL shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
//   XREF to: 0049f0f0 (UNCONDITIONAL_CALL)
// 00596068: ADD ESP,0x8
// 0059606b: MOV dword ptr [EBP + -0x12],EAX
//   XREF to: Stack[-0x94] (WRITE)
// 0059606e: LEA EAX,[EBP + -0x36]
//   XREF to: Stack[-0xb8] (DATA)
// 00596071: PUSH EAX
// 00596072: CALL shape_edittool.cpp_CStrList_ctor_FUN_004a2a20
//   XREF to: 004a2a20 (UNCONDITIONAL_CALL)
// 00596077: ADD ESP,0x4
// 0059607a: LEA EAX,[EBP + -0x46]
//   XREF to: Stack[-0xc8] (DATA)
// 0059607d: PUSH EAX
// 0059607e: MOV EDI,dword ptr [EBP + 0x8e]
//   XREF to: Stack[0xc] (READ)
// 00596084: CALL shape_edittool.cpp_CStrList_ctor_FUN_004a2a20
//   XREF to: 004a2a20 (UNCONDITIONAL_CALL)
// 00596089: XOR EAX,EAX
// 0059608b: SHL EDI,0x2
// 0059608e: MOV dword ptr [EBP + 0x46],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 00596091: MOV EAX,dword ptr [EBP + 0x86]
//   XREF to: Stack[0x4] (READ)
// 00596097: ADD EAX,EDI
// 00596099: MOV EDX,dword ptr [EAX + 0x54]
// 0059609c: MOV dword ptr [EBP + 0x42],EDX
//   XREF to: Stack[-0x40] (WRITE)
// 0059609f: XOR EDX,EDX
// 005960a1: MOV dword ptr [EBP + -0x2],EDX
//   XREF to: Stack[-0x84] (WRITE)
// 005960a4: MOV EDX,dword ptr [EBP + 0x86]
//   XREF to: Stack[0x4] (READ)
// 005960aa: MOV ECX,dword ptr [EDX + 0x7140]
// 005960b0: ADD ESP,0x4
// 005960b3: TEST ECX,ECX
// 005960b5: JLE 0x005965cd
//   XREF to: 005965cd (CONDITIONAL_JUMP)
// 005960bb: MOV dword ptr [EBP + 0x32],EDI
//   XREF to: Stack[-0x50] (WRITE)
// 005960be: MOV dword ptr [EBP + 0x2a],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 005960c1: MOV ESI,EAX
// 005960c3: MOV dword ptr [EBP + 0x6a],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005960c6: MOV dword ptr [EBP + -0x16],EAX
//   XREF to: Stack[-0x98] (WRITE)
// 005960c9: MOV dword ptr [EBP + 0x6],EAX
//   XREF to: Stack[-0x7c] (WRITE)
// 005960cc: MOV dword ptr [EBP + 0xe],EAX
//   XREF to: Stack[-0x74] (WRITE)
// 005960cf: MOV dword ptr [EBP + 0x2],EDX
//   XREF to: Stack[-0x80] (WRITE)
// 005960d2: XOR ECX,ECX
// 005960d4: MOV dword ptr [EBP + 0x2e],EDI
//   XREF to: Stack[-0x54] (WRITE)
// 005960d7: MOV dword ptr [EBP + 0xa],ECX
//   XREF to: Stack[-0x78] (WRITE)
// 005960da: MOV EAX,dword ptr [EBP + -0x16]
//   Label: LAB_005960da
//   XREF to: Stack[-0x98] (READ)
// 005960dd: MOV EAX,dword ptr [EAX + 0x2c]
// 005960e0: SHL EAX,0x2
// 005960e3: PUSH EAX
// 005960e4: PUSH 0x0
// 005960e6: PUSH EBX
// 005960e7: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 005960ec: MOV EAX,dword ptr [EBP + 0x46]
//   XREF to: Stack[-0x3c] (READ)
// 005960ef: MOV dword ptr [EBP + 0x3e],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 005960f2: MOV EAX,dword ptr [EBP + 0x6]
//   XREF to: Stack[-0x7c] (READ)
// 005960f5: MOV EDX,dword ptr [EBP + 0x46]
//   XREF to: Stack[-0x3c] (READ)
// 005960f8: MOV dword ptr [EBP + 0x1a],EAX
//   XREF to: Stack[-0x68] (WRITE)
// 005960fb: IMUL EAX,EDX,0x12
// 005960fe: XOR EDI,EDI
// 00596100: MOV dword ptr [EBP + 0x5e],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00596103: MOV EAX,dword ptr [EBP + 0x6]
//   XREF to: Stack[-0x7c] (READ)
// 00596106: MOV dword ptr [EBP + 0x52],EDI
//   XREF to: Stack[-0x30] (WRITE)
// 00596109: MOV ECX,dword ptr [EAX + 0x7164]
// 0059610f: ADD ESP,0xc
// 00596112: TEST ECX,ECX
// 00596114: JLE 0x00596162
//   XREF to: 00596162 (CONDITIONAL_JUMP)
// 00596116: MOV ECX,dword ptr [EBP + 0x5e]
//   Label: LAB_00596116
//   XREF to: Stack[-0x24] (READ)
// 00596119: XOR EAX,EAX
// 0059611b: MOV EDX,dword ptr [EBP + 0x6a]
//   Label: LAB_0059611b
//   XREF to: Stack[-0x18] (READ)
// 0059611e: MOV EDX,dword ptr [EDX + 0x7c]
// 00596121: ADD EDX,ECX
// 00596123: MOV DX,word ptr [EDX + EAX*0x1]
// 00596127: AND EDX,0xffff
// 0059612d: ADD EAX,0x2
// 00596130: MOV dword ptr [EBX + EDX*0x4],0x1
// 00596137: CMP EAX,0x6
// 0059613a: JNZ 0x0059611b
//   XREF to: 0059611b (CONDITIONAL_JUMP)
// 0059613c: MOV EDI,dword ptr [EBP + 0x5e]
//   XREF to: Stack[-0x24] (READ)
// 0059613f: MOV EAX,dword ptr [EBP + 0x3e]
//   XREF to: Stack[-0x44] (READ)
// 00596142: MOV EDX,dword ptr [EBP + 0x52]
//   XREF to: Stack[-0x30] (READ)
// 00596145: INC EAX
// 00596146: INC EDX
// 00596147: MOV dword ptr [EBP + 0x3e],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 0059614a: MOV dword ptr [EBP + 0x52],EDX
//   XREF to: Stack[-0x30] (WRITE)
// 0059614d: MOV EAX,EDX
// 0059614f: MOV EDX,dword ptr [EBP + 0x1a]
//   XREF to: Stack[-0x68] (READ)
// 00596152: ADD EDI,0x12
// 00596155: MOV ECX,dword ptr [EDX + 0x7164]
// 0059615b: MOV dword ptr [EBP + 0x5e],EDI
//   XREF to: Stack[-0x24] (WRITE)
// 0059615e: CMP EAX,ECX
// 00596160: JL 0x00596116
//   XREF to: 00596116 (CONDITIONAL_JUMP)
// 00596162: MOV EAX,dword ptr [EBP + 0x42]
//   Label: LAB_00596162
//   XREF to: Stack[-0x40] (READ)
// 00596165: MOV EDI,dword ptr [EBP + -0x12]
//   XREF to: Stack[-0x94] (READ)
// 00596168: MOV dword ptr [EBP + 0x3a],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 0059616b: TEST EDI,EDI
// 0059616d: JZ 0x005961d8
//   XREF to: 005961d8 (CONDITIONAL_JUMP)
// 0059616f: XOR EAX,EAX
// 00596171: MOV dword ptr [EBP + 0x62],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00596174: MOV EAX,dword ptr [EBP + 0xe]
//   XREF to: Stack[-0x74] (READ)
// 00596177: MOV EDX,dword ptr [EBP + 0x42]
//   XREF to: Stack[-0x40] (READ)
// 0059617a: MOV dword ptr [EBP + 0x26],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 0059617d: IMUL EAX,EDX,0x12
// 00596180: MOV dword ptr [EBP + 0x4e],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 00596183: MOV EAX,dword ptr [EBP + 0xe]
//   XREF to: Stack[-0x74] (READ)
// 00596186: CMP dword ptr [EAX + 0x7178],0x0
// 0059618d: JLE 0x005961d8
//   XREF to: 005961d8 (CONDITIONAL_JUMP)
// 0059618f: MOV ECX,dword ptr [EBP + 0x4e]
//   Label: LAB_0059618f
//   XREF to: Stack[-0x34] (READ)
// 00596192: XOR EAX,EAX
// 00596194: MOV EDX,dword ptr [ESI + 0x7c]
//   Label: LAB_00596194
// 00596197: ADD EDX,ECX
// 00596199: MOV DX,word ptr [EDX + EAX*0x1]
// 0059619d: AND EDX,0xffff
// 005961a3: ADD EAX,0x2
// 005961a6: MOV dword ptr [EBX + EDX*0x4],0x1
// 005961ad: CMP EAX,0x6
// 005961b0: JNZ 0x00596194
//   XREF to: 00596194 (CONDITIONAL_JUMP)
// 005961b2: MOV EDI,dword ptr [EBP + 0x4e]
//   XREF to: Stack[-0x34] (READ)
// 005961b5: MOV EAX,dword ptr [EBP + 0x3a]
//   XREF to: Stack[-0x48] (READ)
// 005961b8: MOV EDX,dword ptr [EBP + 0x62]
//   XREF to: Stack[-0x20] (READ)
// 005961bb: INC EAX
// 005961bc: INC EDX
// 005961bd: MOV dword ptr [EBP + 0x3a],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 005961c0: MOV dword ptr [EBP + 0x62],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 005961c3: MOV EAX,EDX
// 005961c5: MOV EDX,dword ptr [EBP + 0x26]
//   XREF to: Stack[-0x5c] (READ)
// 005961c8: ADD EDI,0x12
// 005961cb: MOV ECX,dword ptr [EDX + 0x7178]
// 005961d1: MOV dword ptr [EBP + 0x4e],EDI
//   XREF to: Stack[-0x34] (WRITE)
// 005961d4: CMP EAX,ECX
// 005961d6: JL 0x0059618f
//   XREF to: 0059618f (CONDITIONAL_JUMP)
// 005961d8: MOV EAX,dword ptr [EBP + 0xa]
//   Label: LAB_005961d8
//   XREF to: Stack[-0x78] (READ)
// 005961db: XOR EDI,EDI
// 005961dd: MOV dword ptr [EAX + EBP*0x1 + 0xffffff42],EDI
// 005961e4: MOV EAX,dword ptr [EBP + 0x2a]
//   XREF to: Stack[-0x58] (READ)
// 005961e7: MOV EDX,dword ptr [EAX + 0x2c]
// 005961ea: MOV dword ptr [EBP + 0x66],EDI
//   XREF to: Stack[-0x1c] (WRITE)
// 005961ed: TEST EDX,EDX
// 005961ef: JLE 0x0059629e
//   XREF to: 0059629e (CONDITIONAL_JUMP)
// 005961f5: MOV EAX,dword ptr [EBP + 0xa]
//   XREF to: Stack[-0x78] (READ)
// 005961f8: MOV EDI,EBX
// 005961fa: MOV dword ptr [EBP + 0x36],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 005961fd: CMP dword ptr [EDI],0x0
//   Label: LAB_005961fd
// 00596200: JZ 0x005963f5
//   XREF to: 005963f5 (CONDITIONAL_JUMP)
// 00596206: MOV EAX,dword ptr [EBP + 0x36]
//   XREF to: Stack[-0x4c] (READ)
// 00596209: MOV EDX,dword ptr [EAX + EBP*0x1 + 0xffffff42]
// 00596210: INC EDX
// 00596211: MOV ECX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x10] (READ)
// 00596217: MOV dword ptr [EAX + EBP*0x1 + 0xffffff42],EDX
// 0059621e: MOV EAX,dword ptr [EBP + -0x36]
//   XREF to: Stack[-0xb8] (READ)
// 00596221: PUSH ECX
// 00596222: MOV dword ptr [EDI],EAX
// 00596224: MOV EAX,dword ptr [EBP + 0x66]
//   XREF to: Stack[-0x1c] (READ)
// 00596227: PUSH EAX
// 00596228: MOV EDX,dword ptr [EBP + 0x8e]
//   XREF to: Stack[0xc] (READ)
// 0059622e: PUSH EDX
// 0059622f: LEA EAX,[EBP + -0x26]
//   XREF to: Stack[-0xa8] (DATA)
// 00596232: PUSH EAX
// 00596233: MOV ECX,dword ptr [EBP + 0x86]
//   XREF to: Stack[0x4] (READ)
// 00596239: PUSH ECX
// 0059623a: CALL core_skeleton.cpp_CDeformableModel_skinSingleVertex_FUN_0059aa00
//   XREF to: 0059aa00 (UNCONDITIONAL_CALL)
// 0059623f: ADD ESP,0x14
// 00596242: SUB ESP,0x8
// 00596245: FLD float ptr [EBP + -0x1e]
//   XREF to: Stack[-0xa0] (READ)
// 00596248: FSTP double ptr [ESP]
//   XREF to: Stack[-0x348] (DATA)
// 0059624b: SUB ESP,0x8
// 0059624e: FLD float ptr [EBP + -0x22]
//   XREF to: Stack[-0xa4] (READ)
// 00596251: FSTP double ptr [ESP]
//   XREF to: Stack[-0x350] (DATA)
// 00596254: SUB ESP,0x8
// 00596257: FLD float ptr [EBP + -0x26]
//   XREF to: Stack[-0xa8] (READ)
// 0059625a: FSTP double ptr [ESP]
//   XREF to: Stack[-0x358] (DATA)
// 0059625d: PUSH 0x64d68f
//   XREF to: 0064d68f (DATA)
// 00596262: LEA EAX,[EBP + 0xfffffd42]
//   XREF to: Stack[-0x340] (DATA)
// 00596268: PUSH EAX
// 00596269: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0059626e: ADD ESP,0x20
// 00596271: LEA EAX,[EBP + 0xfffffd42]
//   XREF to: Stack[-0x340] (DATA)
// 00596277: PUSH EAX
// 00596278: LEA EAX,[EBP + -0x36]
//   XREF to: Stack[-0xb8] (DATA)
// 0059627b: PUSH EAX
// 0059627c: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 00596281: ADD ESP,0x8
// 00596284: MOV ECX,dword ptr [EBP + 0x66]
//   Label: LAB_00596284
//   XREF to: Stack[-0x1c] (READ)
// 00596287: INC ECX
// 00596288: MOV EDX,dword ptr [EBP + 0x2a]
//   XREF to: Stack[-0x58] (READ)
// 0059628b: MOV dword ptr [EBP + 0x66],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 0059628e: MOV EAX,ECX
// 00596290: MOV ECX,dword ptr [EDX + 0x2c]
// 00596293: ADD EDI,0x4
// 00596296: CMP EAX,ECX
// 00596298: JL 0x005961fd
//   XREF to: 005961fd (CONDITIONAL_JUMP)
// 0059629e: MOV EAX,dword ptr [EBP + 0x2]
//   Label: LAB_0059629e
//   XREF to: Stack[-0x80] (READ)
// 005962a1: MOV dword ptr [EBP + 0x22],EAX
//   XREF to: Stack[-0x60] (WRITE)
// 005962a4: MOV EAX,dword ptr [EBP + 0x46]
//   XREF to: Stack[-0x3c] (READ)
// 005962a7: SHL EAX,0x2
// 005962aa: MOV EDX,dword ptr [EBP + 0x46]
//   XREF to: Stack[-0x3c] (READ)
// 005962ad: MOV dword ptr [EBP + 0x5a],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 005962b0: IMUL EAX,EDX,0x12
// 005962b3: XOR EDI,EDI
// 005962b5: MOV dword ptr [EBP + 0x56],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 005962b8: MOV EAX,dword ptr [EBP + 0x22]
//   Label: LAB_005962b8
//   XREF to: Stack[-0x60] (READ)
// 005962bb: MOV EDX,dword ptr [EBP + 0x32]
//   XREF to: Stack[-0x50] (READ)
// 005962be: ADD EAX,EDX
// 005962c0: CMP EDI,dword ptr [EAX + 0x7164]
// 005962c6: JGE 0x00596400
//   XREF to: 00596400 (CONDITIONAL_JUMP)
// 005962cc: MOV ECX,dword ptr [EBP + 0x86]
//   XREF to: Stack[0x4] (READ)
// 005962d2: ADD ECX,EDX
// 005962d4: MOV EAX,dword ptr [EBP + 0x56]
//   XREF to: Stack[-0x2c] (READ)
// 005962d7: MOV EDX,dword ptr [ECX + 0x7c]
// 005962da: ADD EDX,EAX
// 005962dc: XOR EAX,EAX
// 005962de: MOV AX,word ptr [EDX + 0x10]
// 005962e2: MOV dword ptr [EBP + 0x6e],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005962e5: FLD double ptr [0x0064d8e2]
//   XREF to: 0064d8e2 (READ)
// 005962eb: FILD dword ptr [EBP + 0x6e]
//   XREF to: Stack[-0x14] (READ)
// 005962ee: FMUL ST1
// 005962f0: SUB ESP,0x8
// 005962f3: XOR EAX,EAX
// 005962f5: FSTP double ptr [ESP]
//   XREF to: Stack[-0x348] (DATA)
// 005962f8: MOV AX,word ptr [EDX + 0xa]
// 005962fc: MOV dword ptr [EBP + 0x6e],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005962ff: FILD dword ptr [EBP + 0x6e]
//   XREF to: Stack[-0x14] (READ)
// 00596302: FMUL ST1
// 00596304: SUB ESP,0x8
// 00596307: XOR EAX,EAX
// 00596309: FSTP double ptr [ESP]
//   XREF to: Stack[-0x350] (DATA)
// 0059630c: MOV AX,word ptr [EDX + 0x4]
// 00596310: SHL EAX,0x2
// 00596313: ADD EAX,EBX
// 00596315: PUSH dword ptr [EAX]
// 00596317: XOR EAX,EAX
// 00596319: MOV AX,word ptr [EDX + 0xe]
// 0059631d: MOV dword ptr [EBP + 0x6e],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00596320: FILD dword ptr [EBP + 0x6e]
//   XREF to: Stack[-0x14] (READ)
// 00596323: FMUL ST1
// 00596325: SUB ESP,0x8
// 00596328: XOR EAX,EAX
// 0059632a: FSTP double ptr [ESP]
//   XREF to: Stack[-0x35c] (DATA)
// 0059632d: MOV AX,word ptr [EDX + 0x8]
// 00596331: MOV dword ptr [EBP + 0x6e],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00596334: FILD dword ptr [EBP + 0x6e]
//   XREF to: Stack[-0x14] (READ)
// 00596337: FMUL ST1
// 00596339: SUB ESP,0x8
// 0059633c: XOR EAX,EAX
// 0059633e: FSTP double ptr [ESP]
//   XREF to: Stack[-0x364] (DATA)
// 00596341: MOV AX,word ptr [EDX + 0x2]
// 00596345: SHL EAX,0x2
// 00596348: ADD EAX,EBX
// 0059634a: PUSH dword ptr [EAX]
// 0059634c: XOR EAX,EAX
// 0059634e: MOV AX,word ptr [EDX + 0xc]
// 00596352: MOV dword ptr [EBP + 0x6e],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00596355: FILD dword ptr [EBP + 0x6e]
//   XREF to: Stack[-0x14] (READ)
// 00596358: FMUL ST1
// 0059635a: SUB ESP,0x8
// 0059635d: XOR EAX,EAX
// 0059635f: FSTP double ptr [ESP]
//   XREF to: Stack[-0x370] (DATA)
// 00596362: MOV AX,word ptr [EDX + 0x6]
// 00596366: MOV dword ptr [EBP + 0x6e],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00596369: FILD dword ptr [EBP + 0x6e]
//   XREF to: Stack[-0x14] (READ)
// 0059636c: FMULP
// 0059636e: SUB ESP,0x8
// 00596371: FSTP double ptr [ESP]
//   XREF to: Stack[-0x378] (DATA)
// 00596374: MOV DX,word ptr [EDX]
// 00596377: AND EDX,0xffff
// 0059637d: SHL EDX,0x2
// 00596380: LEA EAX,[EBX + EDX*0x1]
// 00596383: MOV EDX,dword ptr [EAX]
// 00596385: MOV EAX,dword ptr [ECX + 0x90]
// 0059638b: ADD EAX,dword ptr [EBP + 0x5a]
//   XREF to: Stack[-0x28] (READ)
// 0059638e: PUSH EDX
// 0059638f: MOV EDX,dword ptr [EAX]
// 00596391: PUSH EDX
// 00596392: PUSH 0x64d698
//   XREF to: 0064d698 (DATA)
// 00596397: LEA EAX,[EBP + 0xfffffd42]
//   XREF to: Stack[-0x340] (DATA)
// 0059639d: PUSH EAX
// 0059639e: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005963a3: ADD ESP,0x48
// 005963a6: LEA EAX,[EBP + 0xfffffd42]
//   XREF to: Stack[-0x340] (DATA)
// 005963ac: PUSH EAX
// 005963ad: LEA EAX,[EBP + -0x46]
//   XREF to: Stack[-0xc8] (DATA)
// 005963b0: PUSH EAX
// 005963b1: INC EDI
// 005963b2: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 005963b7: MOV ECX,dword ptr [EBP + 0x5a]
//   XREF to: Stack[-0x28] (READ)
// 005963ba: MOV EAX,dword ptr [EBP + 0x56]
//   XREF to: Stack[-0x2c] (READ)
// 005963bd: MOV EDX,dword ptr [EBP + 0x46]
//   XREF to: Stack[-0x3c] (READ)
// 005963c0: ADD ESP,0x8
// 005963c3: ADD ECX,0x4
// 005963c6: ADD EAX,0x12
// 005963c9: INC EDX
// 005963ca: MOV dword ptr [EBP + 0x5a],ECX
//   XREF to: Stack[-0x28] (WRITE)
// 005963cd: MOV dword ptr [EBP + 0x56],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 005963d0: MOV dword ptr [EBP + 0x46],EDX
//   XREF to: Stack[-0x3c] (WRITE)
// 005963d3: JMP 0x005962b8
//   XREF to: 005962b8 (UNCONDITIONAL_JUMP)
// 005963d8: PUSH EBX
//   Label: LAB_005963d8
// 005963d9: PUSH 0x64d632
//   XREF to: 0064d632 (DATA)
// 005963de: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 005963e4: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 005963e5: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 005963ea: ADD ESP,0xc
// 005963ed: LEA ESP,[EBP + 0x72]
//   XREF to: Stack[-0x10] (DATA)
// 005963f0: POP EBP
// 005963f1: POP EDI
// 005963f2: POP ESI
// 005963f3: POP EBX
// 005963f4: RET
// 005963f5: MOV dword ptr [EDI],0xffffffff
//   Label: LAB_005963f5
// 005963fb: JMP 0x00596284
//   XREF to: 00596284 (UNCONDITIONAL_JUMP)
// 00596400: MOV EAX,dword ptr [EBP + 0x46]
//   Label: LAB_00596400
//   XREF to: Stack[-0x3c] (READ)
// 00596403: CMP EAX,dword ptr [EBP + 0x3e]
//   XREF to: Stack[-0x44] (READ)
// 00596406: JZ 0x0059642a
//   XREF to: 0059642a (CONDITIONAL_JUMP)
// 00596408: MOV EAX,0x64d6b9
//   XREF to: 0064d6b9 (PARAM)
// 0059640d: MOV EDX,0x15a8
// 00596412: PUSH 0x64d6ce
//   XREF to: 0064d6ce (DATA)
// 00596417: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 0059641c: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 00596422: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00596427: ADD ESP,0x4
// 0059642a: CMP dword ptr [EBP + -0x12],0x0
//   Label: LAB_0059642a
//   XREF to: Stack[-0x94] (READ)
// 0059642e: JZ 0x0059658e
//   XREF to: 0059658e (CONDITIONAL_JUMP)
// 00596434: MOV EAX,dword ptr [EBP + 0x46]
//   XREF to: Stack[-0x3c] (READ)
// 00596437: SHL EAX,0x2
// 0059643a: MOV dword ptr [EBP + 0x16],EAX
//   XREF to: Stack[-0x6c] (WRITE)
// 0059643d: MOV EAX,dword ptr [EBP + 0x2]
//   XREF to: Stack[-0x80] (READ)
// 00596440: MOV EDX,dword ptr [EBP + 0x42]
//   XREF to: Stack[-0x40] (READ)
// 00596443: MOV dword ptr [EBP + 0x1e],EAX
//   XREF to: Stack[-0x64] (WRITE)
// 00596446: IMUL EAX,EDX,0x12
// 00596449: XOR EDI,EDI
// 0059644b: MOV dword ptr [EBP + 0x4a],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 0059644e: MOV EAX,dword ptr [EBP + 0x1e]
//   Label: LAB_0059644e
//   XREF to: Stack[-0x64] (READ)
// 00596451: ADD EAX,dword ptr [EBP + 0x2e]
//   XREF to: Stack[-0x54] (READ)
// 00596454: CMP EDI,dword ptr [EAX + 0x7178]
// 0059645a: JGE 0x00596564
//   XREF to: 00596564 (CONDITIONAL_JUMP)
// 00596460: MOV ECX,dword ptr [EBP + 0x86]
//   XREF to: Stack[0x4] (READ)
// 00596466: ADD ECX,dword ptr [EBP + 0x2e]
//   XREF to: Stack[-0x54] (READ)
// 00596469: MOV EAX,dword ptr [EBP + 0x4a]
//   XREF to: Stack[-0x38] (READ)
// 0059646c: MOV EDX,dword ptr [ECX + 0x7c]
// 0059646f: ADD EDX,EAX
// 00596471: XOR EAX,EAX
// 00596473: MOV AX,word ptr [EDX + 0x10]
// 00596477: MOV dword ptr [EBP + 0x6e],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0059647a: FLD double ptr [0x0064d8e2]
//   XREF to: 0064d8e2 (READ)
// 00596480: FILD dword ptr [EBP + 0x6e]
//   XREF to: Stack[-0x14] (READ)
// 00596483: FMUL ST1
// 00596485: SUB ESP,0x8
// 00596488: XOR EAX,EAX
// 0059648a: FSTP double ptr [ESP]
//   XREF to: Stack[-0x348] (DATA)
// 0059648d: MOV AX,word ptr [EDX + 0xa]
// 00596491: MOV dword ptr [EBP + 0x6e],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00596494: FILD dword ptr [EBP + 0x6e]
//   XREF to: Stack[-0x14] (READ)
// 00596497: FMUL ST1
// 00596499: SUB ESP,0x8
// 0059649c: XOR EAX,EAX
// 0059649e: FSTP double ptr [ESP]
//   XREF to: Stack[-0x350] (DATA)
// 005964a1: MOV AX,word ptr [EDX + 0x4]
// 005964a5: SHL EAX,0x2
// 005964a8: ADD EAX,EBX
// 005964aa: PUSH dword ptr [EAX]
// 005964ac: XOR EAX,EAX
// 005964ae: MOV AX,word ptr [EDX + 0xe]
// 005964b2: MOV dword ptr [EBP + 0x6e],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005964b5: FILD dword ptr [EBP + 0x6e]
//   XREF to: Stack[-0x14] (READ)
// 005964b8: FMUL ST1
// 005964ba: SUB ESP,0x8
// 005964bd: XOR EAX,EAX
// 005964bf: FSTP double ptr [ESP]
//   XREF to: Stack[-0x35c] (DATA)
// 005964c2: MOV AX,word ptr [EDX + 0x8]
// 005964c6: MOV dword ptr [EBP + 0x6e],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005964c9: FILD dword ptr [EBP + 0x6e]
//   XREF to: Stack[-0x14] (READ)
// 005964cc: FMUL ST1
// 005964ce: SUB ESP,0x8
// 005964d1: XOR EAX,EAX
// 005964d3: FSTP double ptr [ESP]
//   XREF to: Stack[-0x364] (DATA)
// 005964d6: MOV AX,word ptr [EDX + 0x2]
// 005964da: SHL EAX,0x2
// 005964dd: ADD EAX,EBX
// 005964df: PUSH dword ptr [EAX]
// 005964e1: XOR EAX,EAX
// 005964e3: MOV AX,word ptr [EDX + 0xc]
// 005964e7: MOV dword ptr [EBP + 0x6e],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005964ea: FILD dword ptr [EBP + 0x6e]
//   XREF to: Stack[-0x14] (READ)
// 005964ed: FMUL ST1
// 005964ef: SUB ESP,0x8
// 005964f2: XOR EAX,EAX
// 005964f4: FSTP double ptr [ESP]
//   XREF to: Stack[-0x370] (DATA)
// 005964f7: MOV AX,word ptr [EDX + 0x6]
// 005964fb: MOV dword ptr [EBP + 0x6e],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005964fe: FILD dword ptr [EBP + 0x6e]
//   XREF to: Stack[-0x14] (READ)
// 00596501: FMULP
// 00596503: SUB ESP,0x8
// 00596506: FSTP double ptr [ESP]
//   XREF to: Stack[-0x378] (DATA)
// 00596509: MOV DX,word ptr [EDX]
// 0059650c: AND EDX,0xffff
// 00596512: SHL EDX,0x2
// 00596515: LEA EAX,[EBX + EDX*0x1]
// 00596518: MOV EDX,dword ptr [EAX]
// 0059651a: MOV EAX,dword ptr [ECX + 0x90]
// 00596520: ADD EAX,dword ptr [EBP + 0x16]
//   XREF to: Stack[-0x6c] (READ)
// 00596523: PUSH EDX
// 00596524: MOV EDX,dword ptr [EAX]
// 00596526: PUSH EDX
// 00596527: PUSH 0x64d6d9
//   XREF to: 0064d6d9 (DATA)
// 0059652c: LEA EAX,[EBP + 0xfffffd42]
//   XREF to: Stack[-0x340] (DATA)
// 00596532: PUSH EAX
// 00596533: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00596538: ADD ESP,0x48
// 0059653b: LEA EAX,[EBP + 0xfffffd42]
//   XREF to: Stack[-0x340] (DATA)
// 00596541: PUSH EAX
// 00596542: LEA EAX,[EBP + -0x46]
//   XREF to: Stack[-0xc8] (DATA)
// 00596545: PUSH EAX
// 00596546: INC EDI
// 00596547: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0059654c: MOV ECX,dword ptr [EBP + 0x4a]
//   XREF to: Stack[-0x38] (READ)
// 0059654f: MOV EAX,dword ptr [EBP + 0x42]
//   XREF to: Stack[-0x40] (READ)
// 00596552: ADD ESP,0x8
// 00596555: ADD ECX,0x12
// 00596558: INC EAX
// 00596559: MOV dword ptr [EBP + 0x4a],ECX
//   XREF to: Stack[-0x38] (WRITE)
// 0059655c: MOV dword ptr [EBP + 0x42],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 0059655f: JMP 0x0059644e
//   XREF to: 0059644e (UNCONDITIONAL_JUMP)
// 00596564: MOV EAX,dword ptr [EBP + 0x42]
//   Label: LAB_00596564
//   XREF to: Stack[-0x40] (READ)
// 00596567: CMP EAX,dword ptr [EBP + 0x3a]
//   XREF to: Stack[-0x48] (READ)
// 0059656a: JZ 0x0059658e
//   XREF to: 0059658e (CONDITIONAL_JUMP)
// 0059656c: MOV EDI,0x64d6fa
//   XREF to: 0064d6fa (DATA)
// 00596571: MOV EAX,0x15b5
// 00596576: PUSH 0x64d70f
//   XREF to: 0064d70f (DATA)
// 0059657b: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 00596581: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 00596586: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0059658b: ADD ESP,0x4
// 0059658e: MOV EDI,dword ptr [EBP + 0x6]
//   Label: LAB_0059658e
//   XREF to: Stack[-0x7c] (READ)
// 00596591: MOV EAX,dword ptr [EBP + 0xe]
//   XREF to: Stack[-0x74] (READ)
// 00596594: MOV EDX,dword ptr [EBP + 0xa]
//   XREF to: Stack[-0x78] (READ)
// 00596597: MOV ECX,dword ptr [EBP + 0x2]
//   XREF to: Stack[-0x80] (READ)
// 0059659a: ADD EDI,0x60
// 0059659d: ADD EAX,0x60
// 005965a0: ADD EDX,0x4
// 005965a3: ADD ECX,0x60
// 005965a6: MOV dword ptr [EBP + 0x6],EDI
//   XREF to: Stack[-0x7c] (WRITE)
// 005965a9: MOV dword ptr [EBP + 0xe],EAX
//   XREF to: Stack[-0x74] (WRITE)
// 005965ac: MOV dword ptr [EBP + 0xa],EDX
//   XREF to: Stack[-0x78] (WRITE)
// 005965af: MOV EDI,dword ptr [EBP + -0x2]
//   XREF to: Stack[-0x84] (READ)
// 005965b2: MOV EDX,dword ptr [EBP + 0x86]
//   XREF to: Stack[0x4] (READ)
// 005965b8: MOV dword ptr [EBP + 0x2],ECX
//   XREF to: Stack[-0x80] (WRITE)
// 005965bb: INC EDI
// 005965bc: MOV ECX,dword ptr [EDX + 0x7140]
// 005965c2: MOV dword ptr [EBP + -0x2],EDI
//   XREF to: Stack[-0x84] (WRITE)
// 005965c5: CMP EDI,ECX
// 005965c7: JL 0x005960da
//   XREF to: 005960da (CONDITIONAL_JUMP)
// 005965cd: MOV ESI,0x64d71a
//   Label: LAB_005965cd
//   XREF to: 0064d71a (DATA)
// 005965d2: MOV EDI,0x15b9
// 005965d7: PUSH EBX
// 005965d8: MOV dword ptr [0x0067d20c],ESI
//   XREF to: 0067d20c (WRITE)
// 005965de: MOV dword ptr [0x02f0d944],EDI
//   XREF to: 02f0d944 (WRITE)
// 005965e4: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 005965e9: ADD ESP,0x4
// 005965ec: PUSH 0x64d72f
//   XREF to: 0064d72f (DATA)
// 005965f1: MOV EAX,dword ptr [EBP + 0x12]
//   XREF to: Stack[-0x70] (READ)
// 005965f4: PUSH EAX
// 005965f5: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 005965fa: ADD ESP,0x8
// 005965fd: PUSH 0x64d73f
//   XREF to: 0064d73f (DATA)
// 00596602: MOV EDX,dword ptr [EBP + 0x12]
//   XREF to: Stack[-0x70] (READ)
// 00596605: PUSH EDX
// 00596606: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0059660b: ADD ESP,0x8
// 0059660e: PUSH 0x64d744
//   XREF to: 0064d744 (DATA)
// 00596613: MOV ECX,dword ptr [EBP + 0x12]
//   XREF to: Stack[-0x70] (READ)
// 00596616: PUSH ECX
// 00596617: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0059661c: MOV EAX,dword ptr [EBP + 0x86]
//   XREF to: Stack[0x4] (READ)
// 00596622: ADD ESP,0x8
// 00596625: MOV EBX,dword ptr [EAX + 0x7140]
// 0059662b: PUSH EBX
// 0059662c: MOV ESI,dword ptr [EBP + -0x36]
//   XREF to: Stack[-0xb8] (READ)
// 0059662f: PUSH ESI
// 00596630: MOV EDI,dword ptr [EBP + -0x46]
//   XREF to: Stack[-0xc8] (READ)
// 00596633: PUSH EDI
// 00596634: MOV EDX,dword ptr [EAX + 0xbc]
// 0059663a: PUSH EDX
// 0059663b: PUSH 0x64d78d
//   XREF to: 0064d78d (DATA)
// 00596640: MOV ECX,dword ptr [EBP + 0x12]
//   XREF to: Stack[-0x70] (READ)
// 00596643: PUSH ECX
// 00596644: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00596649: ADD ESP,0x18
// 0059664c: PUSH 0x64d7a0
//   XREF to: 0064d7a0 (DATA)
// 00596651: MOV EBX,dword ptr [EBP + 0x12]
//   XREF to: Stack[-0x70] (READ)
// 00596654: XOR ESI,ESI
// 00596656: PUSH EBX
// 00596657: MOV dword ptr [EBP + -0x6],ESI
//   XREF to: Stack[-0x88] (WRITE)
// 0059665a: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0059665f: MOV EAX,dword ptr [EBP + 0x86]
//   XREF to: Stack[0x4] (READ)
// 00596665: MOV dword ptr [EBP + -0xa],ESI
//   XREF to: Stack[-0x8c] (WRITE)
// 00596668: XOR EDI,EDI
// 0059666a: MOV EDX,dword ptr [EAX + 0x7140]
// 00596670: ADD ESP,0x8
// 00596673: TEST EDX,EDX
// 00596675: JLE 0x00596710
//   XREF to: 00596710 (CONDITIONAL_JUMP)
// 0059667b: ADD EAX,0x7144
// 00596680: MOV EBX,dword ptr [EBP + 0x8e]
//   XREF to: Stack[0xc] (READ)
// 00596686: MOV dword ptr [EBP + -0xe],EAX
//   XREF to: Stack[-0x90] (WRITE)
// 00596689: SHL EBX,0x2
// 0059668c: ADD EBX,dword ptr [EBP + 0x86]
//   XREF to: Stack[0x4] (READ)
// 00596692: MOV ECX,dword ptr [EBP + -0xe]
//   Label: LAB_00596692
//   XREF to: Stack[-0x90] (READ)
// 00596695: MOV EAX,dword ptr [EBX + 0x7164]
// 0059669b: MOV EDX,dword ptr [EBX + 0x7178]
// 005966a1: PUSH ECX
// 005966a2: ADD EAX,EDX
// 005966a4: PUSH EAX
// 005966a5: MOV EDX,dword ptr [EBP + -0xa]
//   XREF to: Stack[-0x8c] (READ)
// 005966a8: PUSH EDX
// 005966a9: MOV ECX,dword ptr [ESI + EBP*0x1 + 0xffffff42]
// 005966b0: PUSH ECX
// 005966b1: MOV dword ptr [EBP + -0x1a],EAX
//   XREF to: Stack[-0x9c] (WRITE)
// 005966b4: MOV EAX,dword ptr [EBP + -0x6]
//   XREF to: Stack[-0x88] (READ)
// 005966b7: PUSH EAX
// 005966b8: PUSH 0x64d7d9
//   XREF to: 0064d7d9 (DATA)
// 005966bd: MOV EDX,dword ptr [EBP + 0x12]
//   XREF to: Stack[-0x70] (READ)
// 005966c0: ADD ESI,0x4
// 005966c3: PUSH EDX
// 005966c4: ADD EBX,0x60
// 005966c7: INC EDI
// 005966c8: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 005966cd: MOV ECX,dword ptr [EBP + -0x6]
//   XREF to: Stack[-0x88] (READ)
// 005966d0: MOV EDX,dword ptr [EBP + -0xa]
//   XREF to: Stack[-0x8c] (READ)
// 005966d3: MOV EAX,dword ptr [ESI + EBP*0x1 + 0xffffff3e]
// 005966da: ADD ESP,0x1c
// 005966dd: ADD ECX,EAX
// 005966df: MOV EAX,dword ptr [EBP + -0x1a]
//   XREF to: Stack[-0x9c] (READ)
// 005966e2: MOV dword ptr [EBP + -0x6],ECX
//   XREF to: Stack[-0x88] (WRITE)
// 005966e5: MOV ECX,dword ptr [EBP + -0xe]
//   XREF to: Stack[-0x90] (READ)
// 005966e8: ADD EDX,EAX
// 005966ea: MOV EAX,dword ptr [EBP + 0x86]
//   XREF to: Stack[0x4] (READ)
// 005966f0: MOV dword ptr [EBP + -0xa],EDX
//   XREF to: Stack[-0x8c] (WRITE)
// 005966f3: ADD ECX,0x60
// 005966f6: MOV EDX,dword ptr [EAX + 0x7140]
// 005966fc: MOV dword ptr [EBP + -0xe],ECX
//   XREF to: Stack[-0x90] (WRITE)
// 005966ff: CMP EDI,EDX
// 00596701: JL 0x00596692
//   XREF to: 00596692 (CONDITIONAL_JUMP)
// 00596703: LEA EAX,[EAX]
// 00596709: LEA EDX,[EDX]
// 0059670f: NOP
// 00596710: PUSH 0x64d7eb
//   Label: LAB_00596710
//   XREF to: 0064d7eb (DATA)
// 00596715: MOV ECX,dword ptr [EBP + 0x12]
//   XREF to: Stack[-0x70] (READ)
// 00596718: PUSH ECX
// 00596719: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0059671e: MOV EAX,dword ptr [EBP + 0x86]
//   XREF to: Stack[0x4] (READ)
// 00596724: XOR ESI,ESI
// 00596726: MOV EBX,dword ptr [EAX + 0xbc]
// 0059672c: ADD ESP,0x8
// 0059672f: TEST EBX,EBX
// 00596731: JLE 0x00596760
//   XREF to: 00596760 (CONDITIONAL_JUMP)
// 00596733: LEA EBX,[EAX + 0xc8]
// 00596739: PUSH EBX
//   Label: LAB_00596739
// 0059673a: PUSH 0x64d802
//   XREF to: 0064d802 (DATA)
// 0059673f: MOV EDX,dword ptr [EBP + 0x12]
//   XREF to: Stack[-0x70] (READ)
// 00596742: PUSH EDX
// 00596743: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00596748: MOV EAX,dword ptr [EBP + 0x86]
//   XREF to: Stack[0x4] (READ)
// 0059674e: INC ESI
// 0059674f: ADD EBX,0x48
// 00596752: MOV ECX,dword ptr [EAX + 0xbc]
// 00596758: ADD ESP,0xc
// 0059675b: CMP ESI,ECX
// 0059675d: JL 0x00596739
//   XREF to: 00596739 (CONDITIONAL_JUMP)
// 0059675f: NOP
// 00596760: PUSH 0x64d806
//   Label: LAB_00596760
//   XREF to: 0064d806 (DATA)
// 00596765: MOV EBX,dword ptr [EBP + 0x12]
//   XREF to: Stack[-0x70] (READ)
// 00596768: PUSH EBX
// 00596769: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0059676e: MOV ESI,dword ptr [EBP + -0x46]
//   XREF to: Stack[-0xc8] (READ)
// 00596771: ADD ESP,0x8
// 00596774: XOR EBX,EBX
// 00596776: TEST ESI,ESI
// 00596778: JLE 0x005967b0
//   XREF to: 005967b0 (CONDITIONAL_JUMP)
// 0059677a: MOV EDI,dword ptr [EBP + 0x12]
//   XREF to: Stack[-0x70] (READ)
// 0059677d: PUSH EBX
//   Label: LAB_0059677d
// 0059677e: LEA EAX,[EBP + -0x46]
//   XREF to: Stack[-0xc8] (DATA)
// 00596781: PUSH EAX
// 00596782: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 00596787: ADD ESP,0x8
// 0059678a: PUSH EAX
// 0059678b: PUSH 0x64d83d
//   XREF to: 0064d83d (DATA)
// 00596790: PUSH EDI
// 00596791: INC EBX
// 00596792: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00596797: MOV EAX,dword ptr [EBP + -0x46]
//   XREF to: Stack[-0xc8] (READ)
// 0059679a: ADD ESP,0xc
// 0059679d: CMP EBX,EAX
// 0059679f: JL 0x0059677d
//   XREF to: 0059677d (CONDITIONAL_JUMP)
// 005967a1: LEA EAX,[EAX]
// 005967a7: LEA EDX,[EDX]
// 005967ad: LEA EAX,[EAX]
// 005967b0: PUSH 0x64d841
//   Label: LAB_005967b0
//   XREF to: 0064d841 (DATA)
// 005967b5: MOV EDX,dword ptr [EBP + 0x12]
//   XREF to: Stack[-0x70] (READ)
// 005967b8: PUSH EDX
// 005967b9: XOR EBX,EBX
// 005967bb: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 005967c0: MOV ECX,dword ptr [EBP + -0x36]
//   XREF to: Stack[-0xb8] (READ)
// 005967c3: ADD ESP,0x8
// 005967c6: TEST ECX,ECX
// 005967c8: JLE 0x00596800
//   XREF to: 00596800 (CONDITIONAL_JUMP)
// 005967ca: MOV ESI,dword ptr [EBP + 0x12]
//   XREF to: Stack[-0x70] (READ)
// 005967cd: PUSH EBX
//   Label: LAB_005967cd
// 005967ce: LEA EAX,[EBP + -0x36]
//   XREF to: Stack[-0xb8] (DATA)
// 005967d1: PUSH EAX
// 005967d2: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 005967d7: ADD ESP,0x8
// 005967da: PUSH EAX
// 005967db: PUSH 0x64d855
//   XREF to: 0064d855 (DATA)
// 005967e0: PUSH ESI
// 005967e1: INC EBX
// 005967e2: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 005967e7: MOV EDI,dword ptr [EBP + -0x36]
//   XREF to: Stack[-0xb8] (READ)
// 005967ea: ADD ESP,0xc
// 005967ed: CMP EBX,EDI
// 005967ef: JL 0x005967cd
//   XREF to: 005967cd (CONDITIONAL_JUMP)
// 005967f1: LEA EAX,[EAX]
// 005967f7: LEA EDX,[EDX]
// 005967fd: LEA EAX,[EAX]
// 00596800: PUSH 0x64d859
//   Label: LAB_00596800
//   XREF to: 0064d859 (DATA)
// 00596805: MOV EAX,dword ptr [EBP + 0x12]
//   XREF to: Stack[-0x70] (READ)
// 00596808: PUSH EAX
// 00596809: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0059680e: ADD ESP,0x8
// 00596811: PUSH 0x64d899
//   XREF to: 0064d899 (DATA)
// 00596816: MOV EDX,dword ptr [EBP + 0x12]
//   XREF to: Stack[-0x70] (READ)
// 00596819: PUSH EDX
// 0059681a: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0059681f: ADD ESP,0x8
// 00596822: PUSH 0x15ea
// 00596827: PUSH 0x64d8c8
//   XREF to: 0064d8c8 (DATA)
// 0059682c: MOV ECX,dword ptr [EBP + 0x12]
//   XREF to: Stack[-0x70] (READ)
// 0059682f: PUSH ECX
// 00596830: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 00596835: ADD ESP,0xc
// 00596838: PUSH 0x0
// 0059683a: LEA EAX,[EBP + -0x46]
//   XREF to: Stack[-0xc8] (DATA)
// 0059683d: PUSH EAX
// 0059683e: CALL shape_edittool.cpp_CStrList_dtor_FUN_004a2a40
//   XREF to: 004a2a40 (UNCONDITIONAL_CALL)
// 00596843: ADD ESP,0x8
// 00596846: PUSH 0x0
// 00596848: LEA EAX,[EBP + -0x36]
//   XREF to: Stack[-0xb8] (DATA)
// 0059684b: PUSH EAX
// 0059684c: CALL shape_edittool.cpp_CStrList_dtor_FUN_004a2a40
//   XREF to: 004a2a40 (UNCONDITIONAL_CALL)
// 00596851: ADD ESP,0x8
// 00596854: LEA ESP,[EBP + 0x72]
//   XREF to: Stack[-0x10] (DATA)
// 00596857: POP EBP
// 00596858: POP EDI
// 00596859: POP ESI
// 0059685a: POP EBX
// 0059685b: RET
