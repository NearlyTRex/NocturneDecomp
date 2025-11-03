// Name: core_glass.cpp_CGlass_setup_FUN_004e9180
// Address: 004e9180
// Address Range: [[004e9180, 004e9197]]
// Convention: __cdecl
// Signature: void core_glass.cpp_CGlass_setup_FUN_004e9180(CGlass * this_ptr)
// Function calls:
//   core_actor.cpp_CDemonActor_setup_FUN_00408bb0

#include "nocturne.h"

void __cdecl core_glass_cpp_CGlass_setup_FUN_004e9180(CGlass *this_ptr)

{
  float fVar1;
  char cVar2;
  undefined4 extraout_EAX;
  undefined4 uVar3;
  int iVar4;
  undefined4 extraout_EAX_00;
  undefined1 *puVar5;
  int iVar6;
  SMRGLPrimitiveQuad *pSVar7;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 uVar8;
  undefined4 extraout_EDX_00;
  CVector3f *pCVar9;
  BADSPACEBASE *in_ESP;
  int iVar10;
  char *pcVar11;
  int iVar12;
  char *pcVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  double dVar17;
  int iStack00000008;
  float fStack0000000c;
  int iStack00000010;
  float fVar18;
  float fVar19;
  undefined1 *puVar20;
  CVector3f local_9c;
  CVector3f local_88;
  undefined1 local_7c [8];
  undefined1 local_74 [8];
  float local_6c;
  float fStack_68;
  float fStack_64;
  CVector3f local_5c;
  float fStack_50;
  float fStack_4c;
  CVector3f local_48;
  float local_3c;
  float local_38;
  float local_34;
  CVector3f local_30;
  float local_24;
  
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(&this_ptr->base);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr,&this_ptr->glass_texture);
  uVar3 = extraout_EAX;
  uVar8 = extraout_EDX;
  if (this_ptr->mirror_flag != 0) {
    local_74._0_4_ = 0.0;
    local_7c._4_4_ = 0.0;
    local_7c._0_4_ = (this_ptr->glass_size).x * FLOAT_0062e03d;
    pCVar9 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                       (&(this_ptr->base).orient_matrix,(CVector3f *)&stack0xffffff60,
                        (CVector3f *)local_7c);
    local_6c = (this_ptr->base).location.position.x + pCVar9->x;
    fStack_68 = (this_ptr->base).location.position.y + pCVar9->y;
    fStack_64 = (this_ptr->base).location.position.z + pCVar9->z;
    if (&local_3c != &local_6c) {
      local_3c = local_6c;
      local_38 = fStack_68;
      local_34 = fStack_64;
    }
    local_7c._4_4_ = local_7c._4_4_ ^ 0x80000000;
    pCVar9 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                       (&(this_ptr->base).orient_matrix,&local_48,(CVector3f *)(local_7c + 4));
    local_30.y = (this_ptr->base).location.position.x + pCVar9->x;
    local_30.z = (this_ptr->base).location.position.y + pCVar9->y;
    local_24 = (this_ptr->base).location.position.z + pCVar9->z;
    if (&fStack_50 != &local_30.y) {
      fStack_50 = local_30.y;
      fStack_4c = local_30.z;
      local_48.x = local_24;
    }
    local_74._4_4_ = (this_ptr->glass_size).y;
    core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
              (&(this_ptr->base).orient_matrix,&local_5c,(CVector3f *)local_74);
    local_74._4_4_ = local_74._4_4_ ^ 0x80000000;
    pCVar9 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                       (&(this_ptr->base).orient_matrix,&local_88,(CVector3f *)(local_74 + 4));
    local_7c._4_4_ = (this_ptr->base).location.position.x + pCVar9->x;
    local_74._0_4_ = (this_ptr->base).location.position.y + pCVar9->y;
    local_74._4_4_ = (this_ptr->base).location.position.z + pCVar9->z;
    if (&local_9c != (CVector3f *)(local_7c + 4)) {
      local_9c.x = (float)local_7c._4_4_;
      local_9c.y = (float)local_74._0_4_;
      local_9c.z = (float)local_74._4_4_;
    }
    core_mirror_cpp_CMirror_setupCorners_FUN_00521400
              (&this_ptr->mirror,&local_30,&local_48,(CVector3f *)&stack0xffffff58,&local_9c);
    uVar3 = extraout_EAX_00;
    uVar8 = extraout_EDX_00;
  }
  fVar14 = (float10)(this_ptr->glass_size).x * (float10)DOUBLE_0062e041;
  dVar17 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(uVar8,uVar3));
  fStack0000000c = (float)(int)ROUND(fVar14);
  iVar4 = (int)fStack0000000c + 1;
  this_ptr->field14_0xb2c = iVar4;
  if (4 < iVar4) {
    this_ptr->field14_0xb2c = 4;
  }
  fVar14 = (float10)(this_ptr->glass_size).y * (float10)DOUBLE_0062e041;
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),iVar4));
  iStack00000010 = (int)ROUND(fVar14);
  this_ptr->field15_0xb30 = iStack00000010 + 1;
  if (4 < iStack00000010 + 1) {
    this_ptr->field15_0xb30 = 4;
  }
  iVar4 = this_ptr->field14_0xb2c * this_ptr->field15_0xb30;
  this_ptr->broken_vertex_count = (this_ptr->field14_0xb2c + 1) * (this_ptr->field15_0xb30 + 1);
  this_ptr->broken_polygon_count = iVar4;
  if ((0x19 < this_ptr->broken_vertex_count) || (0x10 < iVar4)) {
    g_CurrentFilename = "..\\core\\glass.cpp";
    g_CurrentLineNumber = 0x86;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("CGlass::setup - Too many verticies(%d) or faces(%d)!",this_ptr->broken_vertex_count);
  }
  iVar4 = this_ptr->field15_0xb30;
  fVar1 = (this_ptr->glass_size).y;
  iVar12 = 0;
  fVar19 = 0.0;
  puVar20 = (undefined1 *)0x0;
  for (iStack00000008 = 0; iStack00000008 < this_ptr->field15_0xb30 + 1;
      iStack00000008 = iStack00000008 + 1) {
    fVar18 = -(this_ptr->glass_size).x * (float)DOUBLE_0062e041;
    iVar10 = 0;
    pCVar9 = this_ptr->broken_vertices + iVar12;
    while( true ) {
      if (this_ptr->field14_0xb2c + 1 <= iVar10) break;
      puVar5 = &stack0xffffff50;
      if (pCVar9 != (CVector3f *)&stack0xffffff50) {
        pCVar9->x = fVar18;
        pCVar9->y = fVar19;
        pCVar9->z = (float)puVar20;
        puVar5 = puVar20;
      }
      fVar14 = (float10)DOUBLE_0062e049;
      fVar15 = (float10)DOUBLE_0062e051;
      fVar16 = ((float10)iVar10 / (float10)this_ptr->field14_0xb2c) * fVar14 + fVar15;
      dVar17 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(pCVar9,puVar5));
      *(int *)(extraout_ECX + 0x5e4) = (int)ROUND(fVar16);
      iVar6 = this_ptr->field15_0xb30 - (int)fStack0000000c;
      fVar15 = fVar15 + ((float10)iVar6 / (float10)this_ptr->field15_0xb30) * fVar14;
      fVar18 = 7.216921e-39;
      dVar17 = crt_math_c_round_FUN_005fe6b0
                         ((double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),iVar6));
      pCVar9 = (CVector3f *)((int)((ulonglong)dVar17 >> 0x20) + 0xc);
      *(int *)(extraout_ECX_00 + 0x644) = (int)ROUND(fVar15);
      iVar12 = iVar12 + 1;
      fVar18 = fVar18 + fStack0000000c;
      iVar10 = iVar10 + 1;
    }
    fVar19 = fVar19 + fVar1 / (float)iVar4;
  }
  fStack0000000c = 0.0;
  iStack00000010 = 0;
  if (0 < this_ptr->field15_0xb30) {
    do {
      iVar4 = 0;
      if (0 < this_ptr->field14_0xb2c) {
        pSVar7 = this_ptr->broken_quads + iStack00000010;
        do {
          (pSVar7->base).base.count = 4;
          (pSVar7->base).surface_normal.D = 0;
          iVar12 = (pSVar7->base).surface_normal.D;
          (pSVar7->base).surface_normal.C = iVar12;
          (pSVar7->base).surface_normal.B = iVar12;
          (pSVar7->base).surface_normal.A = iVar12;
          iVar12 = (this_ptr->field14_0xb2c + 1) * (int)fStack0000000c + iVar4;
          pSVar7->vertices[0].vertex_index = iVar12;
          pSVar7->vertices[0].texture_u = *(int *)(this_ptr->field12_0x4b8 + iVar12 * 4 + 300);
          pSVar7->vertices[0].texture_v =
               *(int *)((int)this_ptr->broken_quads[0].vertices + iVar12 * 4 + -0x7c);
          pSVar7->vertices[1].vertex_index = iVar12 + 1;
          pSVar7->vertices[1].texture_u = *(int *)(this_ptr->field12_0x4b8 + iVar12 * 4 + 0x130);
          pSVar7->vertices[1].texture_v =
               *(int *)((int)(this_ptr->broken_quads[0].vertices + -10) + iVar12 * 4);
          pSVar7->vertices[2].vertex_index = this_ptr->field14_0xb2c + iVar12 + 2;
          pSVar7->vertices[2].texture_u =
               *(int *)(this_ptr->field12_0x4b8 + (this_ptr->field14_0xb2c + iVar12) * 4 + 0x134);
          pSVar7->vertices[2].texture_v =
               *(int *)((int)this_ptr->broken_quads[0].vertices +
                       (this_ptr->field14_0xb2c + iVar12) * 4 + -0x74);
          pSVar7->vertices[3].vertex_index = this_ptr->field14_0xb2c + iVar12 + 1;
          pSVar7->vertices[3].texture_u =
               *(int *)(this_ptr->field12_0x4b8 + (this_ptr->field14_0xb2c + iVar12) * 4 + 0x130);
          pSVar7->vertices[3].texture_v =
               *(int *)((int)(this_ptr->broken_quads[0].vertices + -10) +
                       (iVar12 + this_ptr->field14_0xb2c) * 4);
          iVar4 = iVar4 + 1;
          iStack00000010 = iStack00000010 + 1;
          pSVar7 = pSVar7 + 1;
        } while (iVar4 < this_ptr->field14_0xb2c);
      }
      fStack0000000c = (float)((int)fStack0000000c + 1);
    } while ((int)fStack0000000c < this_ptr->field15_0xb30);
  }
  (this_ptr->base).is_transparent = (uint)(this_ptr->opacity < 0xfde9);
  iVar4 = crt_string_c_stricmp_FUN_005fe7f0(this_ptr->break_event,"none");
  if (iVar4 == 0) {
    this_ptr->break_event[0] = '\0';
  }
  cVar2 = this_ptr->break_event[0];
  (this_ptr->base).field17_0x104 = 0;
  if (cVar2 == '\0') {
    (this_ptr->base).field17_0x104 = 1;
  }
  this_ptr->field18_0xb3c = 0;
  if (this_ptr->background_flag != 0) {
    pcVar13 = (this_ptr->broken_texture).texture_name;
    iVar4 = crt_string_c_strcmp_FUN_005fef20(pcVar13,"7YEARS.RAW");
    if (iVar4 == 0) {
      iVar4 = crt_string_c_stricmp_FUN_005fe7f0
                        ((this_ptr->glass_texture).texture_name,"factwin.raw");
      if (iVar4 == 0) {
        pcVar11 = "factwinx.raw";
        do {
          cVar2 = *pcVar11;
          *pcVar13 = cVar2;
          if (cVar2 == '\0') break;
          cVar2 = pcVar11[1];
          pcVar11 = pcVar11 + 2;
          pcVar13[1] = cVar2;
          pcVar13 = pcVar13 + 2;
        } while (cVar2 != '\0');
      }
      iVar4 = crt_string_c_stricmp_FUN_005fe7f0
                        ((this_ptr->glass_texture).texture_name,"dockwin.raw");
      if (iVar4 == 0) {
        pcVar11 = "dockwinx.raw";
        pcVar13 = (this_ptr->broken_texture).texture_name;
        do {
          cVar2 = *pcVar11;
          *pcVar13 = cVar2;
          if (cVar2 == '\0') break;
          cVar2 = pcVar11[1];
          pcVar11 = pcVar11 + 2;
          pcVar13[1] = cVar2;
          pcVar13 = pcVar13 + 2;
        } while (cVar2 != '\0');
      }
      iVar4 = crt_string_c_stricmp_FUN_005fe7f0
                        ((this_ptr->glass_texture).texture_name,"windo10.raw");
      if (iVar4 == 0) {
        pcVar11 = "windo10x.raw";
        pcVar13 = (this_ptr->broken_texture).texture_name;
        do {
          cVar2 = *pcVar11;
          *pcVar13 = cVar2;
          if (cVar2 == '\0') break;
          cVar2 = pcVar11[1];
          pcVar11 = pcVar11 + 2;
          pcVar13[1] = cVar2;
          pcVar13 = pcVar13 + 2;
        } while (cVar2 != '\0');
      }
      iVar4 = crt_string_c_stricmp_FUN_005fe7f0
                        ((this_ptr->glass_texture).texture_name,"windo11.raw");
      if (iVar4 == 0) {
        pcVar11 = "windo11x.raw";
        pcVar13 = (this_ptr->broken_texture).texture_name;
        do {
          cVar2 = *pcVar11;
          *pcVar13 = cVar2;
          if (cVar2 == '\0') {
            return;
          }
          cVar2 = pcVar11[1];
          pcVar11 = pcVar11 + 2;
          pcVar13[1] = cVar2;
          pcVar13 = pcVar13 + 2;
        } while (cVar2 != '\0');
        return;
      }
    }
  }
  return;
}


// Assembly code:
// 004e9180: PUSH EBX
//   Label: core_glass.cpp_CGlass_setup_FUN_004e9180
// 004e9181: PUSH ESI
// 004e9182: PUSH EDI
// 004e9183: PUSH EBP
// 004e9184: MOV EBP,ESP
// 004e9186: SUB ESP,0xc8
// 004e918c: AND ESP,0xfffffff8
// 004e918f: MOV EBX,dword ptr [EBP + 0x14]
// 004e9192: PUSH EBX
// 004e9193: CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0
//   XREF to: 00408bb0 (UNCONDITIONAL_CALL)
