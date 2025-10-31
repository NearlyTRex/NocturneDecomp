// Name: core_glass.cpp_CGlass_setup_FUN_004e9180
// Address: 004e9180
// Address Range: [[004e9180, 004e9197]]
// Convention: unknown
// Signature: undefined core_glass.cpp_CGlass_setup_FUN_004e9180()
// Function calls:
//   core_actor.cpp_CDemonActor_setup_FUN_00408bb0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_glass_cpp_CGlass_setup_FUN_004e9180(void)

{
  float fVar1;
  float fVar2;
  char cVar3;
  undefined4 extraout_EAX;
  undefined4 uVar4;
  int iVar5;
  CVector3f *pCVar6;
  undefined4 extraout_EAX_00;
  CDemonActor *pCVar7;
  int iVar8;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 uVar9;
  undefined4 extraout_EDX_00;
  char *pcVar10;
  BADSPACEBASE *in_ESP;
  int iVar11;
  char *pcVar12;
  int iVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  double dVar17;
  CDemonActor *in_stack_00000004;
  int iStack00000008;
  int iStack0000000c;
  int iStack00000010;
  float fVar18;
  float fVar19;
  CDemonActor *pCVar20;
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
  
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(in_stack_00000004);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr,(SMRGLTextureBasic *)(in_stack_00000004[1].actor_name + 0xc));
  uVar4 = extraout_EAX;
  uVar9 = extraout_EDX;
  if (*(int *)(in_stack_00000004[1].create_event + 0x18) != 0) {
    local_74._0_4_ = 0.0;
    local_7c._4_4_ = 0.0;
    local_7c._0_4_ = *(float *)in_stack_00000004[1].actor_name * _DAT_0062e03d;
    pCVar6 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                       (&in_stack_00000004->orient_matrix,(CVector3f *)&stack0xffffff60,
                        (CVector3f *)local_7c);
    local_6c = (in_stack_00000004->location).position.x + pCVar6->x;
    fStack_68 = (in_stack_00000004->location).position.y + pCVar6->y;
    fStack_64 = (in_stack_00000004->location).position.z + pCVar6->z;
    if (&local_3c != &local_6c) {
      local_3c = local_6c;
      local_38 = fStack_68;
      local_34 = fStack_64;
    }
    local_7c._4_4_ = local_7c._4_4_ ^ 0x80000000;
    pCVar6 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                       (&in_stack_00000004->orient_matrix,&local_48,(CVector3f *)(local_7c + 4));
    local_30.y = (in_stack_00000004->location).position.x + pCVar6->x;
    local_30.z = (in_stack_00000004->location).position.y + pCVar6->y;
    local_24 = (in_stack_00000004->location).position.z + pCVar6->z;
    if (&fStack_50 != &local_30.y) {
      fStack_50 = local_30.y;
      fStack_4c = local_30.z;
      local_48.x = local_24;
    }
    local_74._4_4_ = *(undefined4 *)(in_stack_00000004[1].actor_name + 4);
    core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
              (&in_stack_00000004->orient_matrix,&local_5c,(CVector3f *)local_74);
    local_74._4_4_ = local_74._4_4_ ^ 0x80000000;
    pCVar6 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                       (&in_stack_00000004->orient_matrix,&local_88,(CVector3f *)(local_74 + 4));
    local_7c._4_4_ = (in_stack_00000004->location).position.x + pCVar6->x;
    local_74._0_4_ = (in_stack_00000004->location).position.y + pCVar6->y;
    local_74._4_4_ = (in_stack_00000004->location).position.z + pCVar6->z;
    if (&local_9c != (CVector3f *)(local_7c + 4)) {
      local_9c.x = (float)local_7c._4_4_;
      local_9c.y = (float)local_74._0_4_;
      local_9c.z = (float)local_74._4_4_;
    }
    core_mirror_cpp_setupMirrorCorners_FUN_00521400
              ((SMirror *)(in_stack_00000004[1].create_event + 0x1c),&local_30,&local_48,
               (CVector3f *)&stack0xffffff58,&local_9c);
    uVar4 = extraout_EAX_00;
    uVar9 = extraout_EDX_00;
  }
  fVar14 = (float10)*(float *)in_stack_00000004[1].actor_name * (float10)_DAT_0062e041;
  dVar17 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(uVar9,uVar4));
  fVar1 = (float)(int)ROUND(fVar14);
  iVar5 = (int)fVar1 + 1;
  in_stack_00000004[8].field7_0x6c = iVar5;
  if (4 < iVar5) {
    in_stack_00000004[8].field7_0x6c = 4;
  }
  fVar14 = (float10)*(float *)(in_stack_00000004[1].actor_name + 4) * (float10)_DAT_0062e041;
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),iVar5));
  in_stack_00000004[8].was_created = (int)ROUND(fVar14) + 1;
  if (4 < (int)ROUND(fVar14) + 1) {
    in_stack_00000004[8].was_created = 4;
  }
  iVar5 = in_stack_00000004[8].field7_0x6c * in_stack_00000004[8].was_created;
  in_stack_00000004[8].create_prob =
       (float)((in_stack_00000004[8].field7_0x6c + 1) * (in_stack_00000004[8].was_created + 1));
  *(int *)in_stack_00000004[8].create_event = iVar5;
  if ((0x19 < (int)in_stack_00000004[8].create_prob) || (0x10 < iVar5)) {
    g_CurrentFilename = "..\\core\\glass.cpp";
    g_CurrentLineNumber = 0x86;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("CGlass::setup - Too many verticies(%d) or faces(%d)!",in_stack_00000004[8].create_prob);
  }
  iVar5 = in_stack_00000004[8].was_created;
  fVar2 = *(float *)(in_stack_00000004[1].actor_name + 4);
  iVar13 = 0;
  fVar19 = 0.0;
  pCVar20 = (CDemonActor *)0x0;
  for (iStack00000008 = 0; iStack00000008 < in_stack_00000004[8].was_created + 1;
      iStack00000008 = iStack00000008 + 1) {
    fVar18 = -*(float *)in_stack_00000004[1].actor_name * (float)_DAT_0062e041;
    iVar11 = 0;
    pcVar10 = in_stack_00000004[2].metadata.field3_0x1c + iVar13 * 0xc + -0x68;
    while( true ) {
      if (in_stack_00000004[8].field7_0x6c + 1 <= iVar11) break;
      pCVar7 = (CDemonActor *)&stack0xffffff50;
      if (pcVar10 != &stack0xffffff50) {
        *(float *)pcVar10 = fVar18;
        *(float *)(pcVar10 + 4) = fVar19;
        *(CDemonActor **)(pcVar10 + 8) = pCVar20;
        pCVar7 = pCVar20;
      }
      fVar14 = (float10)_DAT_0062e049;
      fVar15 = (float10)_DAT_0062e051;
      fVar16 = ((float10)iVar11 / (float10)in_stack_00000004[8].field7_0x6c) * fVar14 + fVar15;
      dVar17 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(pcVar10,pCVar7));
      *(int *)(extraout_ECX + 0x5e4) = (int)ROUND(fVar16);
      iVar8 = in_stack_00000004[8].was_created - (int)fVar1;
      fVar15 = fVar15 + ((float10)iVar8 / (float10)in_stack_00000004[8].was_created) * fVar14;
      fVar18 = 7.216921e-39;
      dVar17 = crt_math_c_round_FUN_005fe6b0
                         ((double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),iVar8));
      pcVar10 = (char *)((int)((ulonglong)dVar17 >> 0x20) + 0xc);
      *(int *)(extraout_ECX_00 + 0x644) = (int)ROUND(fVar15);
      iVar13 = iVar13 + 1;
      fVar18 = fVar18 + fVar1;
      iVar11 = iVar11 + 1;
    }
    fVar19 = fVar19 + fVar2 / (float)iVar5;
  }
  iStack0000000c = 0;
  iStack00000010 = 0;
  if (0 < in_stack_00000004[8].was_created) {
    do {
      iVar5 = 0;
      if (0 < in_stack_00000004[8].field7_0x6c) {
        iVar13 = (int)&in_stack_00000004[4].metadata + iStack00000010 * 0x48 + 0x24;
        do {
          *(undefined4 *)(iVar13 + 4) = 4;
          *(undefined4 *)(iVar13 + 0x14) = 0;
          uVar4 = *(undefined4 *)(iVar13 + 0x14);
          *(undefined4 *)(iVar13 + 0x10) = uVar4;
          *(undefined4 *)(iVar13 + 0xc) = uVar4;
          *(undefined4 *)(iVar13 + 8) = uVar4;
          iVar11 = (in_stack_00000004[8].field7_0x6c + 1) * iStack0000000c + iVar5;
          *(int *)(iVar13 + 0x18) = iVar11;
          *(undefined4 *)(iVar13 + 0x1c) =
               *(undefined4 *)(in_stack_00000004[4].create_event + iVar11 * 4 + 0xc);
          *(undefined4 *)(iVar13 + 0x20) =
               *(undefined4 *)(in_stack_00000004[4].metadata.field3_0x1c + iVar11 * 4 + -0x5c);
          *(int *)(iVar13 + 0x24) = iVar11 + 1;
          *(undefined4 *)(iVar13 + 0x28) =
               *(undefined4 *)(in_stack_00000004[4].create_event + iVar11 * 4 + 0x10);
          *(undefined4 *)(iVar13 + 0x2c) =
               *(undefined4 *)(in_stack_00000004[4].metadata.field3_0x1c + iVar11 * 4 + -0x58);
          *(int *)(iVar13 + 0x30) = in_stack_00000004[8].field7_0x6c + iVar11 + 2;
          *(undefined4 *)(iVar13 + 0x34) =
               *(undefined4 *)
                (in_stack_00000004[4].create_event +
                (in_stack_00000004[8].field7_0x6c + iVar11) * 4 + 0x14);
          *(undefined4 *)(iVar13 + 0x38) =
               *(undefined4 *)
                (in_stack_00000004[4].metadata.field3_0x1c +
                (in_stack_00000004[8].field7_0x6c + iVar11) * 4 + -0x54);
          *(int *)(iVar13 + 0x3c) = in_stack_00000004[8].field7_0x6c + iVar11 + 1;
          *(undefined4 *)(iVar13 + 0x40) =
               *(undefined4 *)
                (in_stack_00000004[4].create_event +
                (in_stack_00000004[8].field7_0x6c + iVar11) * 4 + 0x10);
          *(undefined4 *)(iVar13 + 0x44) =
               *(undefined4 *)
                (in_stack_00000004[4].metadata.field3_0x1c +
                (iVar11 + in_stack_00000004[8].field7_0x6c) * 4 + -0x58);
          iVar5 = iVar5 + 1;
          iStack00000010 = iStack00000010 + 1;
          iVar13 = iVar13 + 0x48;
        } while (iVar5 < in_stack_00000004[8].field7_0x6c);
      }
      iStack0000000c = iStack0000000c + 1;
    } while (iStack0000000c < in_stack_00000004[8].was_created);
  }
  in_stack_00000004->is_transparent = (uint)((int)in_stack_00000004[1].location.position.y < 0xfde9)
  ;
  iVar5 = crt_string_c_stricmp_FUN_005fe7f0
                    ((char *)&in_stack_00000004[1].location.area_id,"none");
  if (iVar5 == 0) {
    *(undefined1 *)&in_stack_00000004[1].location.area_id = 0;
  }
  iVar5 = in_stack_00000004[1].location.area_id;
  in_stack_00000004->field17_0x104 = 0;
  if ((char)iVar5 == '\0') {
    in_stack_00000004->field17_0x104 = 1;
  }
  iVar5 = *(int *)(in_stack_00000004[2].create_event + 0x48);
  in_stack_00000004[8].create_event[4] = '\0';
  in_stack_00000004[8].create_event[5] = '\0';
  in_stack_00000004[8].create_event[6] = '\0';
  in_stack_00000004[8].create_event[7] = '\0';
  if (iVar5 != 0) {
    pcVar10 = in_stack_00000004[2].create_event + 0x54;
    iVar5 = crt_string_c_strcmp_FUN_005fef20(pcVar10,"7YEARS.RAW");
    if (iVar5 == 0) {
      iVar5 = crt_string_c_stricmp_FUN_005fe7f0
                        (in_stack_00000004[1].actor_name + 0x14,"factwin.raw");
      if (iVar5 == 0) {
        pcVar12 = "factwinx.raw";
        do {
          cVar3 = *pcVar12;
          *pcVar10 = cVar3;
          if (cVar3 == '\0') break;
          cVar3 = pcVar12[1];
          pcVar12 = pcVar12 + 2;
          pcVar10[1] = cVar3;
          pcVar10 = pcVar10 + 2;
        } while (cVar3 != '\0');
      }
      iVar5 = crt_string_c_stricmp_FUN_005fe7f0
                        (in_stack_00000004[1].actor_name + 0x14,"dockwin.raw");
      if (iVar5 == 0) {
        pcVar12 = "dockwinx.raw";
        pcVar10 = in_stack_00000004[2].create_event + 0x54;
        do {
          cVar3 = *pcVar12;
          *pcVar10 = cVar3;
          if (cVar3 == '\0') break;
          cVar3 = pcVar12[1];
          pcVar12 = pcVar12 + 2;
          pcVar10[1] = cVar3;
          pcVar10 = pcVar10 + 2;
        } while (cVar3 != '\0');
      }
      iVar5 = crt_string_c_stricmp_FUN_005fe7f0
                        (in_stack_00000004[1].actor_name + 0x14,"windo10.raw");
      if (iVar5 == 0) {
        pcVar12 = "windo10x.raw";
        pcVar10 = in_stack_00000004[2].create_event + 0x54;
        do {
          cVar3 = *pcVar12;
          *pcVar10 = cVar3;
          if (cVar3 == '\0') break;
          cVar3 = pcVar12[1];
          pcVar12 = pcVar12 + 2;
          pcVar10[1] = cVar3;
          pcVar10 = pcVar10 + 2;
        } while (cVar3 != '\0');
      }
      iVar5 = crt_string_c_stricmp_FUN_005fe7f0
                        (in_stack_00000004[1].actor_name + 0x14,"windo11.raw");
      if (iVar5 == 0) {
        pcVar12 = "windo11x.raw";
        pcVar10 = in_stack_00000004[2].create_event + 0x54;
        do {
          cVar3 = *pcVar12;
          *pcVar10 = cVar3;
          if (cVar3 == '\0') {
            return;
          }
          cVar3 = pcVar12[1];
          pcVar12 = pcVar12 + 2;
          pcVar10[1] = cVar3;
          pcVar10 = pcVar10 + 2;
        } while (cVar3 != '\0');
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
