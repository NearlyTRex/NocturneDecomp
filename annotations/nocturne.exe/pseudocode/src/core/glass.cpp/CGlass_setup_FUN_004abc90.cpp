// Name: core_glass.cpp_CGlass_setup_FUN_004abc90
// Address: 004abc90
// Address Range: [[004abc90, 004ac3e1]]
// Convention: unknown
// Signature: void core_glass_cpp_CGlass_setup_FUN_004abc90(CDemonActor *param_1)

#include "nocturne.h"

void core_glass_cpp_CGlass_setup_FUN_004abc90(CDemonActor *param_1)

{
  char cVar1;
  double dVar2;
  int iVar3;
  float *pfVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  CVector3f local_cc;
  CVector3f local_c0;
  CVector3f local_b4 [3];
  CVector3f local_90;
  float local_84;
  uint local_80;
  uint local_7c;
  CVector3f local_78 [2];
  CVector3f local_60 [2];
  CVector3f local_48;
  CVector3f local_3c;
  float *local_30;
  float local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  core_actor_cpp_CDemonActor_setup_FUN_00409fc0(param_1);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
            (DAT_005ae704,(SMRGLTextureBasic *)(param_1[1].actor_name + 0xc));
  if (*(int *)(param_1[1].create_event + 0x18) != 0) {
    local_7c = 0;
    local_80 = 0;
    local_84 = *(float *)param_1[1].actor_name * 0.5f;
    pfVar4 = (float *)core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40
                                (&param_1->orient_matrix);
    local_78[0].x = (param_1->location).position.x + *pfVar4;
    local_78[0].y = (param_1->location).position.y + pfVar4[1];
    local_78[0].z = (param_1->location).position.z + pfVar4[2];
    if (&local_48 != local_78) {
      local_48.x = local_78[0].x;
      local_48.y = local_78[0].y;
      local_48.z = local_78[0].z;
    }
    local_84 = -local_84;
    pfVar4 = (float *)core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40
                                (&param_1->orient_matrix);
    local_3c.x = (param_1->location).position.x + *pfVar4;
    local_3c.y = (param_1->location).position.y + pfVar4[1];
    local_3c.z = (param_1->location).position.z + pfVar4[2];
    if (local_60 != &local_3c) {
      local_60[0].x = local_3c.x;
      local_60[0].y = local_3c.y;
      local_60[0].z = local_3c.z;
    }
    local_80 = *(uint *)(param_1[1].actor_name + 4);
    pfVar4 = (float *)core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40
                                (&param_1->orient_matrix);
    local_cc.x = (param_1->location).position.x + *pfVar4;
    local_cc.y = (param_1->location).position.y + pfVar4[1];
    local_cc.z = (param_1->location).position.z + pfVar4[2];
    if (&local_c0 != &local_cc) {
      local_c0.x = local_cc.x;
      local_c0.y = local_cc.y;
      local_c0.z = local_cc.z;
    }
    local_84 = -local_84;
    pfVar4 = (float *)core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40
                                (&param_1->orient_matrix);
    local_90.x = (param_1->location).position.x + *pfVar4;
    local_90.y = (param_1->location).position.y + pfVar4[1];
    local_90.z = (param_1->location).position.z + pfVar4[2];
    if (local_b4 != &local_90) {
      local_b4[0].x = local_90.x;
      local_b4[0].y = local_90.y;
      local_b4[0].z = local_90.z;
    }
    core_mirror_cpp_CMirror_setupCorners_FUN_004d6590
              ((CMirror *)(param_1[1].create_event + 0x1c),&local_48,local_60,&local_c0,local_b4);
  }
  dVar8 = round
                    ((double)(*(float *)param_1[1].actor_name * (float)0.5));
  local_18 = (int)ROUND(dVar8);
  *(int *)(param_1[8].create_event + 0x2c) = local_18 + 1;
  if (4 < local_18 + 1) {
    param_1[8].create_event[0x2c] = '\x04';
    param_1[8].create_event[0x2d] = '\0';
    param_1[8].create_event[0x2e] = '\0';
    param_1[8].create_event[0x2f] = '\0';
  }
  dVar8 = round
                    ((double)(*(float *)(param_1[1].actor_name + 4) * (float)0.5));
  local_1c = (int)ROUND(dVar8);
  *(int *)(param_1[8].create_event + 0x30) = local_1c + 1;
  if (4 < local_1c + 1) {
    param_1[8].create_event[0x30] = '\x04';
    param_1[8].create_event[0x31] = '\0';
    param_1[8].create_event[0x32] = '\0';
    param_1[8].create_event[0x33] = '\0';
  }
  iVar3 = *(int *)(param_1[8].create_event + 0x2c) * *(int *)(param_1[8].create_event + 0x30);
  *(int *)(param_1[8].create_event + 0x34) =
       (*(int *)(param_1[8].create_event + 0x2c) + 1) *
       (*(int *)(param_1[8].create_event + 0x30) + 1);
  iVar6 = *(int *)(param_1[8].create_event + 0x34);
  *(int *)(param_1[8].create_event + 0x38) = iVar3;
  if ((0x19 < iVar6) || (0x10 < iVar3)) {
    PTR_01cc4800 = "..\\core\\glass.cpp";
    INT_01cc4804 = 0x86;
    core_main_c_FUN_004c8440
              ("CGlass::setup - Too many verticies(%d) or faces(%d)!",*(uint *)(param_1[8].create_event + 0x34),
               *(uint *)(param_1[8].create_event + 0x38));
  }
  local_2c = *(float *)param_1[1].actor_name / (float)*(int *)(param_1[8].create_event + 0x2c);
  local_3c.y = *(float *)(param_1[1].actor_name + 4) /
               (float)*(int *)(param_1[8].create_event + 0x30);
  iVar6 = 0;
  fVar11 = 0.0;
  local_30 = &param_1[2].platform_position_delta.y;
  for (local_28 = 0; local_28 < *(int *)(param_1[8].create_event + 0x30) + 1;
      local_28 = local_28 + 1) {
    fVar10 = -*(float *)param_1[1].actor_name * (float)0.5;
    pfVar4 = local_30 + iVar6 * 3;
    pcVar7 = param_1->actor_name + iVar6 * 4;
    for (iVar3 = 0; iVar3 < *(int *)(param_1[8].create_event + 0x2c) + 1; iVar3 = iVar3 + 1) {
      if (pfVar4 != (float *)&stack0xffffff20) {
        *pfVar4 = fVar10;
        pfVar4[1] = fVar11;
        pfVar4[2] = 0.0;
      }
      dVar2 = 131072;
      dVar8 = 16515072;
      local_1c = iVar3;
      dVar9 = round
                        (((double)iVar3 / (double)*(int *)(param_1[8].create_event + 0x2c)) *
                         16515072 + 131072);
      *(int *)(pcVar7 + 0x5dc) = (int)ROUND(dVar9);
      local_20 = *(int *)(param_1[8].create_event + 0x30) - (int)local_2c;
      fVar10 = 6.865027e-39;
      dVar8 = round
                        (dVar2 + ((double)local_20 /
                                 (double)*(int *)(param_1[8].create_event + 0x30)) * dVar8);
      local_24 = (int)ROUND(dVar8);
      pfVar4 = pfVar4 + 3;
      *(int *)(pcVar7 + 0x640) = local_24;
      iVar6 = iVar6 + 1;
      fVar10 = fVar10 + local_3c.z;
      pcVar7 = pcVar7 + 4;
    }
    fVar11 = fVar11 + local_3c.y;
  }
  local_24 = 0;
  local_20 = 0;
  if (0 < *(int *)(param_1[8].create_event + 0x30)) {
    local_3c.z = (float)(param_1[5].actor_name + 0x14);
    do {
      iVar6 = 0;
      if (0 < *(int *)(param_1[8].create_event + 0x2c)) {
        pfVar4 = (float *)((int)local_3c.z + local_20 * 0x48);
        do {
          pcVar7 = (char *)(pfVar4 + 1);
          pcVar7[0] = '\x04';
          pcVar7[1] = '\0';
          pcVar7[2] = '\0';
          pcVar7[3] = '\0';
          pfVar4[5] = 0.0;
          fVar11 = pfVar4[5];
          pfVar4[4] = fVar11;
          (((CLocation *)(pfVar4 + 3))->position).x = fVar11;
          pfVar4[2] = fVar11;
          iVar3 = (*(int *)(param_1[8].create_event + 0x2c) + 1) * local_24 + iVar6;
          pfVar4[6] = (float)iVar3;
          (((UOrientationVector *)(pfVar4 + 7))->vec).x =
               *(float *)(param_1[4].create_event + iVar3 * 4 + 0x24);
          pfVar4[8] = (float)*(uint *)(param_1[4].footstep_sound_code + iVar3 * 4 + -0x1c);
          pfVar4[9] = (float)(iVar3 + 1);
          ((CMatrix3x3f *)(pfVar4 + 10))->m[0].x =
               *(float *)(param_1[4].create_event + iVar3 * 4 + 0x28);
          pfVar4[0xb] = *(float *)(param_1[4].footstep_sound_code + iVar3 * 4 + -0x18);
          pfVar4[0xc] = (float)(*(int *)(param_1[8].create_event + 0x2c) + iVar3 + 2);
          ((CVector3f *)(pfVar4 + 0xd))->x =
               *(float *)(param_1[4].create_event +
                         (*(int *)(param_1[8].create_event + 0x2c) + iVar3) * 4 + 0x2c);
          pfVar4[0xe] = *(float *)(param_1[4].footstep_sound_code +
                                  (*(int *)(param_1[8].create_event + 0x2c) + iVar3) * 4 + -0x14);
          pfVar4[0xf] = (float)(*(int *)(param_1[8].create_event + 0x2c) + iVar3 + 1);
          ((CVector3f *)(pfVar4 + 0x10))->x =
               *(float *)(param_1[4].create_event +
                         (*(int *)(param_1[8].create_event + 0x2c) + iVar3) * 4 + 0x28);
          pfVar4[0x11] = (float)*(uint *)
                                 (param_1[4].footstep_sound_code +
                                 (iVar3 + *(int *)(param_1[8].create_event + 0x2c)) * 4 + -0x18);
          iVar6 = iVar6 + 1;
          local_20 = local_20 + 1;
          pfVar4 = pfVar4 + 0x12;
        } while (iVar6 < *(int *)(param_1[8].create_event + 0x2c));
      }
      local_24 = local_24 + 1;
    } while (local_24 < *(int *)(param_1[8].create_event + 0x30));
  }
  param_1->is_transparent = (uint)((int)param_1[1].location.position.y < 0xfde9);
  iVar6 = _stricmp((char *)&param_1[1].location.area_id,"none");
  if (iVar6 == 0) {
    *(byte *)&param_1[1].location.area_id = 0;
  }
  iVar6 = param_1[1].location.area_id;
  param_1->process_disabled = 0;
  if ((char)iVar6 == '\0') {
    param_1->process_disabled = 1;
  }
  iVar6 = *(int *)(param_1[2].create_event + 0x50);
  param_1[8].create_event[0x3c] = '\0';
  param_1[8].create_event[0x3d] = '\0';
  param_1[8].create_event[0x3e] = '\0';
  param_1[8].create_event[0x3f] = '\0';
  if (iVar6 != 0) {
    pcVar7 = param_1[2].create_event + 0x5c;
    iVar6 = _strcmp(pcVar7,"7YEARS.RAW");
    if (iVar6 == 0) {
      iVar6 = _stricmp
                        (param_1[1].actor_name + 0x14,"factwin.raw");
      if (iVar6 == 0) {
        pcVar5 = "factwinx.raw";
        do {
          cVar1 = *pcVar5;
          *pcVar7 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar5[1];
          pcVar5 = pcVar5 + 2;
          pcVar7[1] = cVar1;
          pcVar7 = pcVar7 + 2;
        } while (cVar1 != '\0');
      }
      iVar6 = _stricmp
                        (param_1[1].actor_name + 0x14,"dockwin.raw");
      if (iVar6 == 0) {
        pcVar5 = "dockwinx.raw";
        pcVar7 = param_1[2].create_event + 0x5c;
        do {
          cVar1 = *pcVar5;
          *pcVar7 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar5[1];
          pcVar5 = pcVar5 + 2;
          pcVar7[1] = cVar1;
          pcVar7 = pcVar7 + 2;
        } while (cVar1 != '\0');
      }
      iVar6 = _stricmp
                        (param_1[1].actor_name + 0x14,"windo10.raw");
      if (iVar6 == 0) {
        pcVar5 = "windo10x.raw";
        pcVar7 = param_1[2].create_event + 0x5c;
        do {
          cVar1 = *pcVar5;
          *pcVar7 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar5[1];
          pcVar5 = pcVar5 + 2;
          pcVar7[1] = cVar1;
          pcVar7 = pcVar7 + 2;
        } while (cVar1 != '\0');
      }
      iVar6 = _stricmp
                        (param_1[1].actor_name + 0x14,"windo11.raw");
      if (iVar6 == 0) {
        pcVar5 = "windo11x.raw";
        pcVar7 = param_1[2].create_event + 0x5c;
        do {
          cVar1 = *pcVar5;
          *pcVar7 = cVar1;
          if (cVar1 == '\0') {
            return;
          }
          cVar1 = pcVar5[1];
          pcVar5 = pcVar5 + 2;
          pcVar7[1] = cVar1;
          pcVar7 = pcVar7 + 2;
        } while (cVar1 != '\0');
        return;
      }
    }
  }
  return;
}
