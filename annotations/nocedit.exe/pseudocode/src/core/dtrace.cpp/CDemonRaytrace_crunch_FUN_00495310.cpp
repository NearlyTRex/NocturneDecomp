// Name: core_dtrace.cpp_CDemonRaytrace_crunch_FUN_00495310
// Address: 00495310
// Address Range: [[00495310, 00495a98]]
// Convention: __cdecl
// Signature: void core_dtrace.cpp_CDemonRaytrace_crunch_FUN_00495310(CDemonRaytrace * this_ptr, float cube_size)

#include "nocturne.h"

void __cdecl
core_dtrace_cpp_CDemonRaytrace_crunch_FUN_00495310(CDemonRaytrace *this_ptr,float cube_size)

{
  float fVar1;
  uint in_EAX;
  int *piVar2;
  CDemonTriangle *vertex1;
  int iVar3;
  uint in_EDX;
  char **actor_name;
  BADSPACEBASE *in_ESP;
  float *pfVar4;
  char **ppcVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  double dVar9;
  int iVar10;
  int iVar11;
  CCharacter *pCVar12;
  char **ppcVar13;
  char **ppcVar14;
  int iVar15;
  float fVar16;
  float local_bc;
  float local_b8;
  CVector3f local_b4;
  float local_a8;
  float local_a4;
  float local_a0;
  CVector3f local_9c;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float *local_6c;
  float local_68;
  int *local_64;
  float local_60;
  float local_5c;
  float local_58;
  int *local_54;
  int *local_50;
  int *local_4c;
  int *local_48;
  int *local_44;
  int *local_40;
  char **local_3c;
  char **local_38;
  float local_34;
  int *local_30;
  int *local_2c;
  int *local_28;
  int *local_24;
  int local_20;
  CDemonCube *local_1c;
  int local_18;
  char **local_14;
  
  fVar6 = (float10)1 / (float10)cube_size;
  fVar7 = ((float10)(this_ptr->bbox_max).x - (float10)(this_ptr->bbox_min).x) * fVar6;
  dVar9 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(in_EDX,in_EAX));
  local_14 = (char **)(int)ROUND(fVar7);
  (this_ptr->grid_coord).x = (int)local_14 + 1;
  fVar8 = ((float10)(this_ptr->bbox_max).x - (float10)(this_ptr->bbox_min).x) /
          (float10)(this_ptr->grid_coord).x;
  fVar7 = ((float10)(this_ptr->bbox_max).y - (float10)(this_ptr->bbox_min).y) * fVar6;
  dVar9 = crt_math_c_round_FUN_005fe6b0
                    ((double)CONCAT44 /* combine 2-byte values */((int)((ulonglong)dVar9 >> 0x20),(int)local_14 + 1));
  local_14 = (char **)(int)ROUND(fVar7);
  (this_ptr->grid_coord).y = (int)local_14 + 1;
  fVar7 = ((float10)(this_ptr->bbox_max).y - (float10)(this_ptr->bbox_min).y) /
          (float10)(this_ptr->grid_coord).y;
  fVar6 = ((float10)(this_ptr->bbox_max).z - (float10)(this_ptr->bbox_min).z) * fVar6;
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */((int)((ulonglong)dVar9 >> 0x20),(int)local_14 + 1))
  ;
  local_14 = (char **)(int)ROUND(fVar6);
  fVar16 = (this_ptr->bbox_max).z;
  fVar1 = (this_ptr->bbox_min).z;
  (this_ptr->grid_coord).z = (int)local_14 + 1;
  iVar3 = (this_ptr->grid_coord).z;
  (this_ptr->cell_size).x = (float)fVar8;
  (this_ptr->cell_size).y = (float)fVar7;
  (this_ptr->cell_size).z = (fVar16 - fVar1) / (float)iVar3;
  local_90 = (this_ptr->cell_size).x / 8f;
  local_8c = (this_ptr->cell_size).y * 0.125f;
  local_88 = 0.125f * (this_ptr->cell_size).z;
  if (&this_ptr->adjusted_size != (CVector3f *)&local_90) {
    (this_ptr->adjusted_size).x = local_90;
    (this_ptr->adjusted_size).y = local_8c;
    (this_ptr->adjusted_size).z = local_88;
  }
  core_dtrace_cpp_CDemonRaytrace_allocNewCubeList_FUN_00494380(this_ptr);
  iVar3 = this_ptr->triangle_count;
  piVar2 = (int *)shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                            (iVar3 * 0x1c + 4,"..\\core\\dtrace.cpp",0x2ed);
  local_44 = piVar2;
  if (piVar2 != (int *)0x0) {
    local_44 = piVar2 + 1;
    *piVar2 = iVar3;
  }
  if (local_44 == (int *)0x0) {
    g_CurrentFilename = "..\\core\\dtrace.cpp";
    g_CurrentLineNumber = 0x2ee;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonRaytrace::crunch - out of refList memory");
  }
  iVar3 = 0;
  if (0 < this_ptr->triangle_count) {
    local_68 = 0.0;
    piVar2 = local_44;
    do {
      pfVar4 = (float *)((int)&(this_ptr->triangle_list->vertex1).x + (int)local_68);
      local_a8 = *pfVar4;
      local_a4 = pfVar4[1];
      local_a0 = pfVar4[2];
      local_6c = pfVar4 + 3;
      local_84 = *local_6c;
      local_80 = pfVar4[4];
      local_7c = pfVar4[5];
      local_78 = pfVar4[6];
      local_74 = pfVar4[7];
      local_70 = pfVar4[8];
      *piVar2 = iVar3;
      piVar2[4] = (int)local_a8;
      piVar2[1] = piVar2[4];
      piVar2[5] = (int)local_a4;
      piVar2[2] = piVar2[5];
      piVar2[6] = (int)local_a0;
      piVar2[3] = piVar2[6];
      if (local_84 < (float)piVar2[1]) {
        piVar2[1] = (int)local_84;
      }
      if ((float)piVar2[4] < local_84) {
        piVar2[4] = (int)local_84;
      }
      if (local_80 < (float)piVar2[2]) {
        piVar2[2] = (int)local_80;
      }
      if ((float)piVar2[5] < local_80) {
        piVar2[5] = (int)local_80;
      }
      if (local_7c < (float)piVar2[3]) {
        piVar2[3] = (int)local_7c;
      }
      if ((float)piVar2[6] < local_7c) {
        piVar2[6] = (int)local_7c;
      }
      if (local_78 < (float)piVar2[1]) {
        piVar2[1] = (int)local_78;
      }
      if ((float)piVar2[4] < local_78) {
        piVar2[4] = (int)local_78;
      }
      if (local_74 < (float)piVar2[2]) {
        piVar2[2] = (int)local_74;
      }
      if ((float)piVar2[5] < local_74) {
        piVar2[5] = (int)local_74;
      }
      if (local_70 < (float)piVar2[3]) {
        piVar2[3] = (int)local_70;
      }
      if ((float)piVar2[6] < local_70) {
        piVar2[6] = (int)local_70;
      }
      piVar2 = piVar2 + 7;
      iVar3 = iVar3 + 1;
      local_68 = (float)((int)local_68 + 0x38);
    } while (iVar3 < this_ptr->triangle_count);
  }
  shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
            (g_CEditorToolsPtr,"Cube crunch");
  local_3c = (char **)0x0;
  if (0 < (this_ptr->grid_coord).x) {
    do {
      local_14 = local_3c;
      local_9c.x = (float)(int)local_3c * (this_ptr->cell_size).x + (this_ptr->bbox_min).x;
      local_b4.x = local_9c.x + (this_ptr->cell_size).x;
      local_58 = (float)(this_ptr->triangle_count + -1);
      local_5c = 0.0;
      if (-1 < (int)local_58) {
        local_50 = local_44;
        local_4c = local_44 + (int)local_58 * 7;
        ppcVar5 = (char **)(local_44 + (int)local_58 * 7 + 1);
        do {
          piVar2 = local_50;
          local_48 = local_50;
          if ((local_b4.x < (float)local_50[1]) || ((float)local_50[4] < local_9c.x)) {
            local_54 = local_4c;
            actor_name = (char **)(local_50 + 1);
            ppcVar14 = actor_name;
            core_charactr_cpp_CCharacter_setActorNameMaybe_FUN_0042fb00
                      ((CCharacter *)&stack0xffffff18,actor_name);
            core_charactr_cpp_CCharacter_setActorNameMaybe_FUN_0042faf0
                      ((CCharacter *)&stack0xffffff1c,(char **)(piVar2 + 2));
            iVar3 = 0x4958a1;
            core_charactr_cpp_CCharacter_setActorNameMaybe_FUN_0042fae0
                      ((CCharacter *)&stack0xffffff20,(char **)(piVar2 + 3));
            local_14 = (char **)(local_48 + 4);
            iVar15 = 0x4958b7;
            core_charactr_cpp_CCharacter_setActorNameMaybe_FUN_0042fb00
                      ((CCharacter *)&stack0xffffff24,local_14);
            iVar10 = 0x4958ca;
            core_charactr_cpp_CCharacter_setActorNameMaybe_FUN_0042faf0
                      ((CCharacter *)&stack0xffffff28,local_14 + 1);
            ppcVar13 = local_14 + 2;
            pCVar12 = (CCharacter *)&stack0xffffff2c;
            iVar11 = 0x4958dd;
            core_charactr_cpp_CCharacter_setActorNameMaybe_FUN_0042fae0(pCVar12,ppcVar13);
            local_64 = local_4c;
            *local_48 = *local_4c;
            if (actor_name != ppcVar5) {
              *actor_name = *ppcVar5;
              piVar2[2] = (int)ppcVar5[1];
              piVar2[3] = (int)ppcVar5[2];
            }
            if (local_48 + 4 != local_4c + 4) {
              local_48[4] = local_4c[4];
              local_48[5] = local_4c[5];
              local_48[6] = local_4c[6];
            }
            *local_54 = iVar3;
            if (local_54 + 1 != (int *)&stack0xffffff18) {
              local_54[1] = iVar15;
              local_54[2] = iVar10;
              local_54[3] = iVar11;
            }
            if (local_54 + 4 != (int *)&stack0xffffff24) {
              local_54[4] = (int)pCVar12;
              local_54[5] = (int)ppcVar13;
              local_54[6] = (int)ppcVar14;
            }
            ppcVar5 = ppcVar5 + -7;
            local_4c = local_4c + -7;
            local_58 = (float)((int)local_58 + -1);
          }
          else {
            local_5c = (float)((int)local_5c + 1);
            local_50 = local_50 + 7;
          }
        } while ((int)local_5c <= (int)local_58);
      }
      local_38 = (char **)0x0;
      if (0 < (this_ptr->grid_coord).y) {
        local_60 = (float)((int)local_5c + -1);
        do {
          local_14 = local_38;
          local_18 = 0;
          local_9c.y = (float)(int)local_38 * (this_ptr->cell_size).y + (this_ptr->bbox_min).y;
          local_b4.y = local_9c.y + (this_ptr->cell_size).y;
          local_34 = local_60;
          if (-1 < (int)local_60) {
            local_28 = local_44;
            local_2c = local_44 + (int)local_60 * 7;
            ppcVar5 = (char **)(local_44 + (int)local_60 * 7 + 1);
            do {
              piVar2 = local_28;
              local_24 = local_28;
              if ((local_b4.y < (float)local_28[2]) || ((float)local_28[5] < local_9c.y)) {
                local_30 = local_2c;
                ppcVar13 = (char **)(local_28 + 1);
                core_charactr_cpp_CCharacter_setActorNameMaybe_FUN_0042fb00
                          ((CCharacter *)&stack0xffffff34,ppcVar13);
                core_charactr_cpp_CCharacter_setActorNameMaybe_FUN_0042faf0
                          ((CCharacter *)&stack0xffffff38,(char **)(piVar2 + 2));
                core_charactr_cpp_CCharacter_setActorNameMaybe_FUN_0042fae0
                          ((CCharacter *)&stack0xffffff3c,(char **)(piVar2 + 3));
                local_14 = (char **)(local_24 + 4);
                iVar3 = 0x4959c8;
                core_charactr_cpp_CCharacter_setActorNameMaybe_FUN_0042fb00
                          ((CCharacter *)&stack0xffffff40,local_14);
                iVar15 = 0x4959db;
                core_charactr_cpp_CCharacter_setActorNameMaybe_FUN_0042faf0
                          ((CCharacter *)&local_bc,local_14 + 1);
                ppcVar14 = local_14 + 2;
                pCVar12 = (CCharacter *)&local_b8;
                fVar16 = 6.736252e-39;
                core_charactr_cpp_CCharacter_setActorNameMaybe_FUN_0042fae0(pCVar12,ppcVar14);
                local_40 = local_2c;
                *local_24 = *local_2c;
                if (ppcVar13 != ppcVar5) {
                  *ppcVar13 = *ppcVar5;
                  piVar2[2] = (int)ppcVar5[1];
                  piVar2[3] = (int)ppcVar5[2];
                }
                if (local_24 + 4 != local_2c + 4) {
                  local_24[4] = local_2c[4];
                  local_24[5] = local_2c[5];
                  local_24[6] = local_2c[6];
                }
                *local_30 = iVar3;
                if (local_30 + 1 != (int *)&stack0xffffff34) {
                  local_30[1] = iVar15;
                  local_30[2] = (int)fVar16;
                  local_30[3] = (int)pCVar12;
                }
                if (local_30 + 4 != (int *)&stack0xffffff40) {
                  local_30[4] = (int)ppcVar14;
                  local_30[5] = (int)local_bc;
                  local_30[6] = (int)local_b8;
                }
                ppcVar5 = ppcVar5 + -7;
                local_2c = local_2c + -7;
                local_34 = (float)((int)local_34 + -1);
              }
              else {
                local_18 = local_18 + 1;
                local_28 = local_28 + 7;
              }
            } while (local_18 <= (int)local_34);
          }
          local_20 = 0;
          if (0 < (this_ptr->grid_coord).z) {
            do {
              local_9c.z = (float)local_20 * (this_ptr->cell_size).z + (this_ptr->bbox_min).z;
              local_b4.z = local_9c.z + (this_ptr->cell_size).z;
              iVar3 = (this_ptr->grid_coord).y;
              iVar15 = (this_ptr->grid_coord).z;
              local_14 = (char **)((int)((int)local_3c * iVar3 + (int)local_38) * iVar15 + local_20)
              ;
              shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                        (g_CEditorToolsPtr,(float)(int)local_14,
                         (float)((this_ptr->grid_coord).x * iVar3 * iVar15));
              local_1c = this_ptr->cube_data +
                         (this_ptr->grid_coord).z * (int)local_3c * (this_ptr->grid_coord).y +
                         (int)local_38 * (this_ptr->grid_coord).z + local_20;
              iVar3 = 0;
              core_dcube_cpp_CDemonCube_setBounds_FUN_00456a90(local_1c,&local_9c,&local_b4);
              piVar2 = local_44;
              if (0 < local_18) {
                do {
                  vertex1 = this_ptr->triangle_list + *piVar2;
                  iVar3 = iVar3 + 1;
                  core_dcube_cpp_CDemonCube_clipTriangleToFrustum_FUN_00456af0
                            ((CDemonCubeFrustum *)local_1c,&vertex1->vertex1,&vertex1->vertex2,
                             &vertex1->vertex3,this_ptr->triangle_flags[*piVar2]);
                  piVar2 = piVar2 + 7;
                } while (iVar3 < local_18);
              }
              core_dcube_cpp_CDemonCube_buildGeometryFromPolygonData(local_1c);
              local_20 = local_20 + 1;
            } while (local_20 < (this_ptr->grid_coord).z);
          }
          local_38 = (char **)((int)local_38 + 1);
        } while ((int)local_38 < (this_ptr->grid_coord).y);
      }
      local_3c = (char **)((int)local_3c + 1);
    } while ((int)local_3c < (this_ptr->grid_coord).x);
  }
  shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
  core_dtrace_cpp_CDemonRaytrace_freeTriList_FUN_00494690(this_ptr);
  g_CurrentDebugFilename = "..\\core\\dtrace.cpp";
  g_CurrentDebugLine = 0x38c;
  if (local_44 != (int *)0x0) {
    crt_memory_c_free_FUN_005fe659(local_44 + -1);
    return;
  }
  return;
}
