// Name: core_dtrace.cpp_CDemonRaytrace_crunch_FUN_00495310
// Address: 00495310
// Address Range: [[00495310, 00495a98]]
// Convention: __cdecl
// Signature: void core_dtrace.cpp_CDemonRaytrace_crunch_FUN_00495310(CDemonRaytrace * this_ptr, float cube_size)
// Cross-references:
//   core_setedit.cpp_CDemonSet_importS3D_FUN_00578d80 (00578d80) at 00579397 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_dtrace_cpp_00622ae4
//   TerminatedCString s_core_dtrace_cpp_00622af7
//   TerminatedCString s_CDemonRaytrace_crunch_ou_00622b0a
//   TerminatedCString s_Cube_crunch_00622b39
//   TerminatedCString s_core_dtrace_cpp_00622b45
//   float g_CubeGridScaleFactor = 8
//   float g_CubeGridMultiplier = 0.125
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   char* g_CurrentDebugFilename = 0067d200
//   CEditorTools g_CEditorToolsPtr
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   int g_CurrentDebugLine
// Function calls:
//   core_charactr.cpp_CCharacter_setActorNameMaybe_FUN_0042fae0
//   core_charactr.cpp_CCharacter_setActorNameMaybe_FUN_0042faf0
//   core_charactr.cpp_CCharacter_setActorNameMaybe_FUN_0042fb00
//   core_dcube.cpp_CDemonCube_buildGeometryFromPolygonData
//   core_dcube.cpp_CDemonCube_clipTriangleToFrustum_FUN_00456af0
//   core_dcube.cpp_CDemonCube_setBounds_FUN_00456a90
//   core_dtrace.cpp_CDemonRaytrace_allocNewCubeList_FUN_00494380
//   core_dtrace.cpp_CDemonRaytrace_freeTriList_FUN_00494690
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_math.c_round_FUN_005fe6b0
//   crt_memory.c_free_FUN_005fe659
//   shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
//   shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
//   shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1f0

#include "nocturne.h"

void __cdecl
core_dtrace_cpp_CDemonRaytrace_crunch_FUN_00495310(CDemonRaytrace *this_ptr,float cube_size)

{
  float fVar1;
  undefined4 in_EAX;
  int *piVar2;
  CDemonTriangle *vertex1;
  int iVar3;
  undefined4 in_EDX;
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
  dVar9 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(in_EDX,in_EAX));
  local_14 = (char **)(int)ROUND(fVar7);
  (this_ptr->grid_coord).x = (int)local_14 + 1;
  fVar8 = ((float10)(this_ptr->bbox_max).x - (float10)(this_ptr->bbox_min).x) /
          (float10)(this_ptr->grid_coord).x;
  fVar7 = ((float10)(this_ptr->bbox_max).y - (float10)(this_ptr->bbox_min).y) * fVar6;
  dVar9 = crt_math_c_round_FUN_005fe6b0
                    ((double)CONCAT44((int)((ulonglong)dVar9 >> 0x20),(int)local_14 + 1));
  local_14 = (char **)(int)ROUND(fVar7);
  (this_ptr->grid_coord).y = (int)local_14 + 1;
  fVar7 = ((float10)(this_ptr->bbox_max).y - (float10)(this_ptr->bbox_min).y) /
          (float10)(this_ptr->grid_coord).y;
  fVar6 = ((float10)(this_ptr->bbox_max).z - (float10)(this_ptr->bbox_min).z) * fVar6;
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44((int)((ulonglong)dVar9 >> 0x20),(int)local_14 + 1))
  ;
  local_14 = (char **)(int)ROUND(fVar6);
  fVar16 = (this_ptr->bbox_max).z;
  fVar1 = (this_ptr->bbox_min).z;
  (this_ptr->grid_coord).z = (int)local_14 + 1;
  iVar3 = (this_ptr->grid_coord).z;
  (this_ptr->cell_size).x = (float)fVar8;
  (this_ptr->cell_size).y = (float)fVar7;
  (this_ptr->cell_size).z = (fVar16 - fVar1) / (float)iVar3;
  local_90 = (this_ptr->cell_size).x / g_CubeGridScaleFactor;
  local_8c = (this_ptr->cell_size).y * g_CubeGridMultiplier;
  local_88 = g_CubeGridMultiplier * (this_ptr->cell_size).z;
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


// Assembly code:
// 00495310: PUSH EBX
//   Label: core_dtrace.cpp_CDemonRaytrace_crunch_FUN_00495310
// 00495311: PUSH ESI
// 00495312: PUSH EDI
// 00495313: PUSH EBP
// 00495314: MOV EBP,ESP
// 00495316: SUB ESP,0xdc
// 0049531c: SUB EBP,0x7a
// 0049531f: MOV EDI,dword ptr [EBP + 0x8e]
//   XREF to: Stack[0x4] (READ)
// 00495325: FLD float ptr [EDI + 0x1c]
// 00495328: FSUB float ptr [EDI + 0x10]
// 0049532b: FLD1
// 0049532d: FDIV float ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 00495333: FXCH
// 00495335: FMUL ST1
// 00495337: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0049533c: FISTP dword ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (WRITE)
// 0049533f: MOV EAX,dword ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 00495342: FLD float ptr [EDI + 0x1c]
// 00495345: INC EAX
// 00495346: FSUB float ptr [EDI + 0x10]
// 00495349: MOV dword ptr [EDI + 0x40],EAX
// 0049534c: FILD dword ptr [EDI + 0x40]
// 0049534f: FDIVP
// 00495351: FLD float ptr [EDI + 0x20]
// 00495354: FSUB float ptr [EDI + 0x14]
// 00495357: FMUL ST2
// 00495359: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0049535e: FISTP dword ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (WRITE)
// 00495361: MOV EAX,dword ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 00495364: FLD float ptr [EDI + 0x20]
// 00495367: INC EAX
// 00495368: FSUB float ptr [EDI + 0x14]
// 0049536b: MOV dword ptr [EDI + 0x44],EAX
// 0049536e: FILD dword ptr [EDI + 0x44]
// 00495371: FDIVP
// 00495373: FLD float ptr [EDI + 0x24]
// 00495376: FSUB float ptr [EDI + 0x18]
// 00495379: FMULP ST3
// 0049537b: FXCH ST2
// 0049537d: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00495382: FISTP dword ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (WRITE)
// 00495385: MOV EAX,dword ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 00495388: FLD float ptr [EDI + 0x24]
// 0049538b: INC EAX
// 0049538c: FSUB float ptr [EDI + 0x18]
// 0049538f: MOV dword ptr [EDI + 0x48],EAX
// 00495392: FILD dword ptr [EDI + 0x48]
// 00495395: FDIVP
// 00495397: LEA EAX,[EDI + 0x28]
// 0049539a: FXCH
// 0049539c: FSTP float ptr [EDI + 0x28]
// 0049539f: FXCH
// 004953a1: FSTP float ptr [EDI + 0x2c]
// 004953a4: FSTP float ptr [EDI + 0x30]
// 004953a7: FLD float ptr [EAX]
// 004953a9: FDIV float ptr [0x00622b5a]
//   XREF to: 00622b5a (READ)
// 004953af: FSTP float ptr [EBP + -0x6]
//   XREF to: Stack[-0x90] (WRITE)
// 004953b2: FLD float ptr [0x00622b5e]
//   XREF to: 00622b5e (READ)
// 004953b8: FLD float ptr [EAX + 0x4]
// 004953bb: FMUL ST1
// 004953bd: FSTP float ptr [EBP + -0x2]
//   XREF to: Stack[-0x8c] (WRITE)
// 004953c0: FMUL float ptr [EAX + 0x8]
// 004953c3: LEA EDX,[EDI + 0x34]
// 004953c6: LEA EAX,[EBP + -0x6]
//   XREF to: Stack[-0x90] (DATA)
// 004953c9: FSTP float ptr [EBP + 0x2]
//   XREF to: Stack[-0x88] (WRITE)
// 004953cc: CMP EDX,EAX
// 004953ce: JZ 0x004953e1
//   XREF to: 004953e1 (CONDITIONAL_JUMP)
// 004953d0: MOV EAX,dword ptr [EBP + -0x6]
//   XREF to: Stack[-0x90] (DATA)
// 004953d3: MOV dword ptr [EDX],EAX
// 004953d5: MOV EAX,dword ptr [EBP + -0x2]
//   XREF to: Stack[-0x8c] (READ)
// 004953d8: MOV dword ptr [EDX + 0x4],EAX
// 004953db: MOV EAX,dword ptr [EBP + 0x2]
//   XREF to: Stack[-0x88] (READ)
// 004953de: MOV dword ptr [EDX + 0x8],EAX
// 004953e1: PUSH EDI
//   Label: LAB_004953e1
// 004953e2: CALL core_dtrace.cpp_CDemonRaytrace_allocNewCubeList_FUN_00494380
//   XREF to: 00494380 (UNCONDITIONAL_CALL)
// 004953e7: MOV EBX,dword ptr [EDI + 0x4]
// 004953ea: LEA EAX,[EBX*0x4 + 0x0]
// 004953f1: ADD ESP,0x4
// 004953f4: MOV EDX,EAX
// 004953f6: SHL EAX,0x3
// 004953f9: PUSH 0x2ed
// 004953fe: SUB EAX,EDX
// 00495400: PUSH 0x622ae4
//   XREF to: 00622ae4 (DATA)
// 00495405: ADD EAX,0x4
// 00495408: PUSH EAX
// 00495409: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
//   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)
// 0049540e: ADD ESP,0xc
// 00495411: TEST EAX,EAX
// 00495413: JZ 0x0049541b
//   XREF to: 0049541b (CONDITIONAL_JUMP)
// 00495415: ADD EAX,0x4
// 00495418: MOV dword ptr [EAX + -0x4],EBX
// 0049541b: MOV dword ptr [EBP + 0x46],EAX
//   Label: LAB_0049541b
//   XREF to: Stack[-0x44] (WRITE)
// 0049541e: TEST EAX,EAX
// 00495420: JNZ 0x00495445
//   XREF to: 00495445 (CONDITIONAL_JUMP)
// 00495422: MOV EDX,0x622af7
//   XREF to: 00622af7 (PARAM)
// 00495427: MOV ECX,0x2ee
// 0049542c: PUSH 0x622b0a
//   XREF to: 00622b0a (DATA)
// 00495431: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 00495437: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 0049543d: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00495442: ADD ESP,0x4
// 00495445: MOV EBX,dword ptr [EDI + 0x4]
//   Label: LAB_00495445
// 00495448: XOR ECX,ECX
// 0049544a: TEST EBX,EBX
// 0049544c: JLE 0x004955b9
//   XREF to: 004955b9 (CONDITIONAL_JUMP)
// 00495452: MOV EBX,dword ptr [EBP + 0x46]
//   XREF to: Stack[-0x44] (READ)
// 00495455: MOV dword ptr [EBP + 0x22],ECX
//   XREF to: Stack[-0x68] (WRITE)
// 00495458: MOV EAX,dword ptr [EBP + 0x22]
//   Label: LAB_00495458
//   XREF to: Stack[-0x68] (READ)
// 0049545b: MOV ESI,dword ptr [EDI + 0x8]
// 0049545e: ADD ESI,EAX
// 00495460: MOV EAX,dword ptr [ESI]
// 00495462: MOV dword ptr [EBP + -0x1e],EAX
//   XREF to: Stack[-0xa8] (WRITE)
// 00495465: LEA EAX,[ESI + 0x4]
// 00495468: MOV EAX,dword ptr [EAX]
// 0049546a: MOV dword ptr [EBP + -0x1a],EAX
//   XREF to: Stack[-0xa4] (WRITE)
// 0049546d: LEA EAX,[ESI + 0x8]
// 00495470: MOV EAX,dword ptr [EAX]
// 00495472: MOV dword ptr [EBP + -0x16],EAX
//   XREF to: Stack[-0xa0] (WRITE)
// 00495475: LEA EAX,[ESI + 0xc]
// 00495478: MOV dword ptr [EBP + 0x1e],EAX
//   XREF to: Stack[-0x6c] (WRITE)
// 0049547b: MOV EAX,dword ptr [EAX]
// 0049547d: MOV dword ptr [EBP + 0x6],EAX
//   XREF to: Stack[-0x84] (WRITE)
// 00495480: MOV EAX,dword ptr [EBP + 0x1e]
//   XREF to: Stack[-0x6c] (READ)
// 00495483: ADD EAX,0x4
// 00495486: MOV EAX,dword ptr [EAX]
// 00495488: MOV dword ptr [EBP + 0xa],EAX
//   XREF to: Stack[-0x80] (WRITE)
// 0049548b: MOV EAX,dword ptr [EBP + 0x1e]
//   XREF to: Stack[-0x6c] (READ)
// 0049548e: ADD EAX,0x8
// 00495491: MOV EAX,dword ptr [EAX]
// 00495493: MOV dword ptr [EBP + 0xe],EAX
//   XREF to: Stack[-0x7c] (WRITE)
// 00495496: MOV EAX,dword ptr [ESI + 0x18]
// 00495499: ADD ESI,0x18
// 0049549c: MOV dword ptr [EBP + 0x12],EAX
//   XREF to: Stack[-0x78] (WRITE)
// 0049549f: LEA EAX,[ESI + 0x4]
// 004954a2: MOV EAX,dword ptr [EAX]
// 004954a4: MOV dword ptr [EBP + 0x16],EAX
//   XREF to: Stack[-0x74] (WRITE)
// 004954a7: MOV EAX,dword ptr [ESI + 0x8]
// 004954aa: MOV dword ptr [EBP + 0x1a],EAX
//   XREF to: Stack[-0x70] (WRITE)
// 004954ad: MOV dword ptr [EBX],ECX
// 004954af: MOV EAX,dword ptr [EBP + -0x1e]
//   XREF to: Stack[-0xa8] (READ)
// 004954b2: MOV dword ptr [EBX + 0x10],EAX
// 004954b5: MOV EAX,dword ptr [EBX + 0x10]
// 004954b8: MOV dword ptr [EBX + 0x4],EAX
// 004954bb: MOV EAX,dword ptr [EBP + -0x1a]
//   XREF to: Stack[-0xa4] (READ)
// 004954be: MOV dword ptr [EBX + 0x14],EAX
// 004954c1: MOV EAX,dword ptr [EBX + 0x14]
// 004954c4: MOV dword ptr [EBX + 0x8],EAX
// 004954c7: MOV EAX,dword ptr [EBP + -0x16]
//   XREF to: Stack[-0xa0] (READ)
// 004954ca: MOV dword ptr [EBX + 0x18],EAX
// 004954cd: MOV EDX,EBX
// 004954cf: MOV EAX,dword ptr [EBX + 0x18]
// 004954d2: MOV dword ptr [EBX + 0xc],EAX
// 004954d5: FLD float ptr [EBP + 0x6]
//   XREF to: Stack[-0x84] (READ)
// 004954d8: FCOMP float ptr [EBX + 0x4]
// 004954db: FNSTSW AX
// 004954dd: SAHF
// 004954de: JNC 0x004954e6
//   XREF to: 004954e6 (CONDITIONAL_JUMP)
// 004954e0: MOV EAX,dword ptr [EBP + 0x6]
//   XREF to: Stack[-0x84] (READ)
// 004954e3: MOV dword ptr [EBX + 0x4],EAX
// 004954e6: FLD float ptr [EBP + 0x6]
//   Label: LAB_004954e6
//   XREF to: Stack[-0x84] (READ)
// 004954e9: FCOMP float ptr [EDX + 0x10]
// 004954ec: FNSTSW AX
// 004954ee: SAHF
// 004954ef: JBE 0x004954f7
//   XREF to: 004954f7 (CONDITIONAL_JUMP)
// 004954f1: MOV EAX,dword ptr [EBP + 0x6]
//   XREF to: Stack[-0x84] (READ)
// 004954f4: MOV dword ptr [EDX + 0x10],EAX
// 004954f7: FLD float ptr [EBP + 0xa]
//   Label: LAB_004954f7
//   XREF to: Stack[-0x80] (READ)
// 004954fa: FCOMP float ptr [EDX + 0x8]
// 004954fd: FNSTSW AX
// 004954ff: SAHF
// 00495500: JNC 0x00495508
//   XREF to: 00495508 (CONDITIONAL_JUMP)
// 00495502: MOV EAX,dword ptr [EBP + 0xa]
//   XREF to: Stack[-0x80] (READ)
// 00495505: MOV dword ptr [EDX + 0x8],EAX
// 00495508: FLD float ptr [EBP + 0xa]
//   Label: LAB_00495508
//   XREF to: Stack[-0x80] (READ)
// 0049550b: FCOMP float ptr [EDX + 0x14]
// 0049550e: FNSTSW AX
// 00495510: SAHF
// 00495511: JBE 0x00495519
//   XREF to: 00495519 (CONDITIONAL_JUMP)
// 00495513: MOV EAX,dword ptr [EBP + 0xa]
//   XREF to: Stack[-0x80] (READ)
// 00495516: MOV dword ptr [EDX + 0x14],EAX
// 00495519: FLD float ptr [EBP + 0xe]
//   Label: LAB_00495519
//   XREF to: Stack[-0x7c] (READ)
// 0049551c: FCOMP float ptr [EDX + 0xc]
// 0049551f: FNSTSW AX
// 00495521: SAHF
// 00495522: JNC 0x0049552a
//   XREF to: 0049552a (CONDITIONAL_JUMP)
// 00495524: MOV EAX,dword ptr [EBP + 0xe]
//   XREF to: Stack[-0x7c] (READ)
// 00495527: MOV dword ptr [EDX + 0xc],EAX
// 0049552a: FLD float ptr [EBP + 0xe]
//   Label: LAB_0049552a
//   XREF to: Stack[-0x7c] (READ)
// 0049552d: FCOMP float ptr [EDX + 0x18]
// 00495530: FNSTSW AX
// 00495532: SAHF
// 00495533: JBE 0x0049553b
//   XREF to: 0049553b (CONDITIONAL_JUMP)
// 00495535: MOV EAX,dword ptr [EBP + 0xe]
//   XREF to: Stack[-0x7c] (READ)
// 00495538: MOV dword ptr [EDX + 0x18],EAX
// 0049553b: FLD float ptr [EBP + 0x12]
//   Label: LAB_0049553b
//   XREF to: Stack[-0x78] (READ)
// 0049553e: FCOMP float ptr [EDX + 0x4]
// 00495541: FNSTSW AX
// 00495543: SAHF
// 00495544: JNC 0x0049554c
//   XREF to: 0049554c (CONDITIONAL_JUMP)
// 00495546: MOV EAX,dword ptr [EBP + 0x12]
//   XREF to: Stack[-0x78] (READ)
// 00495549: MOV dword ptr [EDX + 0x4],EAX
// 0049554c: FLD float ptr [EBP + 0x12]
//   Label: LAB_0049554c
//   XREF to: Stack[-0x78] (READ)
// 0049554f: FCOMP float ptr [EDX + 0x10]
// 00495552: FNSTSW AX
// 00495554: SAHF
// 00495555: JBE 0x0049555d
//   XREF to: 0049555d (CONDITIONAL_JUMP)
// 00495557: MOV EAX,dword ptr [EBP + 0x12]
//   XREF to: Stack[-0x78] (READ)
// 0049555a: MOV dword ptr [EDX + 0x10],EAX
// 0049555d: FLD float ptr [EBP + 0x16]
//   Label: LAB_0049555d
//   XREF to: Stack[-0x74] (READ)
// 00495560: FCOMP float ptr [EDX + 0x8]
// 00495563: FNSTSW AX
// 00495565: SAHF
// 00495566: JNC 0x0049556e
//   XREF to: 0049556e (CONDITIONAL_JUMP)
// 00495568: MOV EAX,dword ptr [EBP + 0x16]
//   XREF to: Stack[-0x74] (READ)
// 0049556b: MOV dword ptr [EDX + 0x8],EAX
// 0049556e: FLD float ptr [EBP + 0x16]
//   Label: LAB_0049556e
//   XREF to: Stack[-0x74] (READ)
// 00495571: FCOMP float ptr [EDX + 0x14]
// 00495574: FNSTSW AX
// 00495576: SAHF
// 00495577: JBE 0x0049557f
//   XREF to: 0049557f (CONDITIONAL_JUMP)
// 00495579: MOV EAX,dword ptr [EBP + 0x16]
//   XREF to: Stack[-0x74] (READ)
// 0049557c: MOV dword ptr [EDX + 0x14],EAX
// 0049557f: FLD float ptr [EBP + 0x1a]
//   Label: LAB_0049557f
//   XREF to: Stack[-0x70] (READ)
// 00495582: FCOMP float ptr [EDX + 0xc]
// 00495585: FNSTSW AX
// 00495587: SAHF
// 00495588: JNC 0x00495590
//   XREF to: 00495590 (CONDITIONAL_JUMP)
// 0049558a: MOV EAX,dword ptr [EBP + 0x1a]
//   XREF to: Stack[-0x70] (READ)
// 0049558d: MOV dword ptr [EDX + 0xc],EAX
// 00495590: FLD float ptr [EBP + 0x1a]
//   Label: LAB_00495590
//   XREF to: Stack[-0x70] (READ)
// 00495593: FCOMP float ptr [EDX + 0x18]
// 00495596: FNSTSW AX
// 00495598: SAHF
// 00495599: JBE 0x004955a1
//   XREF to: 004955a1 (CONDITIONAL_JUMP)
// 0049559b: MOV EAX,dword ptr [EBP + 0x1a]
//   XREF to: Stack[-0x70] (READ)
// 0049559e: MOV dword ptr [EDX + 0x18],EAX
// 004955a1: MOV ESI,dword ptr [EBP + 0x22]
//   Label: LAB_004955a1
//   XREF to: Stack[-0x68] (READ)
// 004955a4: ADD EBX,0x1c
// 004955a7: INC ECX
// 004955a8: ADD ESI,0x38
// 004955ab: MOV EAX,dword ptr [EDI + 0x4]
// 004955ae: MOV dword ptr [EBP + 0x22],ESI
//   XREF to: Stack[-0x68] (WRITE)
// 004955b1: CMP ECX,EAX
// 004955b3: JL 0x00495458
//   XREF to: 00495458 (CONDITIONAL_JUMP)
// 004955b9: PUSH 0x622b39
//   Label: LAB_004955b9
//   XREF to: 00622b39 (DATA)
// 004955be: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 004955c4: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 004955c5: CALL shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
//   XREF to: 004a0430 (UNCONDITIONAL_CALL)
// 004955ca: ADD ESP,0x8
// 004955cd: XOR ECX,ECX
// 004955cf: MOV EBX,dword ptr [EDI + 0x40]
// 004955d2: MOV dword ptr [EBP + 0x4e],ECX
//   XREF to: Stack[-0x3c] (WRITE)
// 004955d5: TEST EBX,EBX
// 004955d7: JLE 0x00495822
//   XREF to: 00495822 (CONDITIONAL_JUMP)
// 004955dd: MOV EAX,dword ptr [EBP + 0x4e]
//   Label: LAB_004955dd
//   XREF to: Stack[-0x3c] (READ)
// 004955e0: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004955e3: FILD dword ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 004955e6: FMUL float ptr [EDI + 0x28]
// 004955e9: FADD float ptr [EDI + 0x10]
// 004955ec: FST float ptr [EBP + -0x12]
//   XREF to: Stack[-0x9c] (WRITE)
// 004955ef: FADD float ptr [EDI + 0x28]
// 004955f2: FSTP float ptr [EBP + -0x2a]
//   XREF to: Stack[-0xb4] (WRITE)
// 004955f5: MOV EAX,dword ptr [EDI + 0x4]
// 004955f8: XOR EDX,EDX
// 004955fa: DEC EAX
// 004955fb: MOV dword ptr [EBP + 0x2e],EDX
//   XREF to: Stack[-0x5c] (WRITE)
// 004955fe: MOV dword ptr [EBP + 0x32],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 00495601: TEST EAX,EAX
// 00495603: JL 0x0049565d
//   XREF to: 0049565d (CONDITIONAL_JUMP)
// 00495605: MOV EAX,dword ptr [EBP + 0x46]
//   XREF to: Stack[-0x44] (READ)
// 00495608: MOV EDX,dword ptr [EBP + 0x32]
//   XREF to: Stack[-0x58] (READ)
// 0049560b: MOV dword ptr [EBP + 0x3a],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 0049560e: IMUL EAX,EDX,0x1c
// 00495611: MOV ECX,dword ptr [EBP + 0x46]
//   XREF to: Stack[-0x44] (READ)
// 00495614: LEA ESI,[EAX + 0x4]
// 00495617: ADD EAX,ECX
// 00495619: ADD ESI,ECX
// 0049561b: MOV dword ptr [EBP + 0x3e],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 0049561e: MOV EAX,dword ptr [EBP + 0x3a]
//   Label: LAB_0049561e
//   XREF to: Stack[-0x50] (READ)
// 00495621: FLD float ptr [EAX + 0x4]
// 00495624: MOV dword ptr [EBP + 0x42],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 00495627: FCOMP float ptr [EBP + -0x2a]
//   XREF to: Stack[-0xb4] (READ)
// 0049562a: FNSTSW AX
// 0049562c: SAHF
// 0049562d: JA 0x00495863
//   XREF to: 00495863 (CONDITIONAL_JUMP)
// 00495633: MOV EAX,dword ptr [EBP + 0x3a]
//   XREF to: Stack[-0x50] (READ)
// 00495636: FLD float ptr [EAX + 0x10]
// 00495639: FCOMP float ptr [EBP + -0x12]
//   XREF to: Stack[-0x9c] (READ)
// 0049563c: FNSTSW AX
// 0049563e: SAHF
// 0049563f: JC 0x00495863
//   XREF to: 00495863 (CONDITIONAL_JUMP)
// 00495645: MOV EAX,dword ptr [EBP + 0x2e]
//   XREF to: Stack[-0x5c] (READ)
// 00495648: MOV EBX,dword ptr [EBP + 0x3a]
//   XREF to: Stack[-0x50] (READ)
// 0049564b: INC EAX
// 0049564c: ADD EBX,0x1c
// 0049564f: MOV dword ptr [EBP + 0x2e],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 00495652: MOV dword ptr [EBP + 0x3a],EBX
//   XREF to: Stack[-0x50] (WRITE)
// 00495655: MOV EAX,dword ptr [EBP + 0x2e]
//   Label: LAB_00495655
//   XREF to: Stack[-0x5c] (READ)
// 00495658: CMP EAX,dword ptr [EBP + 0x32]
//   XREF to: Stack[-0x58] (READ)
// 0049565b: JLE 0x0049561e
//   XREF to: 0049561e (CONDITIONAL_JUMP)
// 0049565d: XOR ESI,ESI
//   Label: LAB_0049565d
// 0049565f: MOV EAX,dword ptr [EDI + 0x44]
// 00495662: MOV dword ptr [EBP + 0x52],ESI
//   XREF to: Stack[-0x38] (WRITE)
// 00495665: TEST EAX,EAX
// 00495667: JLE 0x00495810
//   XREF to: 00495810 (CONDITIONAL_JUMP)
// 0049566d: MOV EAX,dword ptr [EBP + 0x2e]
//   XREF to: Stack[-0x5c] (READ)
// 00495670: DEC EAX
// 00495671: MOV dword ptr [EBP + 0x2a],EAX
//   XREF to: Stack[-0x60] (WRITE)
// 00495674: MOV EAX,dword ptr [EBP + 0x52]
//   Label: LAB_00495674
//   XREF to: Stack[-0x38] (READ)
// 00495677: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0049567a: XOR EBX,EBX
// 0049567c: FILD dword ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 0049567f: FMUL float ptr [EDI + 0x2c]
// 00495682: MOV dword ptr [EBP + 0x72],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 00495685: FADD float ptr [EDI + 0x14]
// 00495688: MOV EAX,dword ptr [EBP + 0x2a]
//   XREF to: Stack[-0x60] (READ)
// 0049568b: FST float ptr [EBP + -0xe]
//   XREF to: Stack[-0x98] (WRITE)
// 0049568e: FADD float ptr [EDI + 0x2c]
// 00495691: MOV dword ptr [EBP + 0x56],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 00495694: FSTP float ptr [EBP + -0x26]
//   XREF to: Stack[-0xb0] (WRITE)
// 00495697: TEST EAX,EAX
// 00495699: JL 0x004956f3
//   XREF to: 004956f3 (CONDITIONAL_JUMP)
// 0049569b: MOV EAX,dword ptr [EBP + 0x46]
//   XREF to: Stack[-0x44] (READ)
// 0049569e: MOV ESI,dword ptr [EBP + 0x2a]
//   XREF to: Stack[-0x60] (READ)
// 004956a1: MOV dword ptr [EBP + 0x62],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 004956a4: IMUL EAX,ESI,0x1c
// 004956a7: MOV EDX,dword ptr [EBP + 0x46]
//   XREF to: Stack[-0x44] (READ)
// 004956aa: LEA ESI,[EAX + 0x4]
// 004956ad: ADD EAX,EDX
// 004956af: ADD ESI,EDX
// 004956b1: MOV dword ptr [EBP + 0x5e],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 004956b4: MOV EAX,dword ptr [EBP + 0x62]
//   Label: LAB_004956b4
//   XREF to: Stack[-0x28] (READ)
// 004956b7: FLD float ptr [EAX + 0x8]
// 004956ba: MOV dword ptr [EBP + 0x66],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 004956bd: FCOMP float ptr [EBP + -0x26]
//   XREF to: Stack[-0xb0] (READ)
// 004956c0: FNSTSW AX
// 004956c2: SAHF
// 004956c3: JA 0x00495974
//   XREF to: 00495974 (CONDITIONAL_JUMP)
// 004956c9: MOV EAX,dword ptr [EBP + 0x62]
//   XREF to: Stack[-0x28] (READ)
// 004956cc: FLD float ptr [EAX + 0x14]
// 004956cf: FCOMP float ptr [EBP + -0xe]
//   XREF to: Stack[-0x98] (READ)
// 004956d2: FNSTSW AX
// 004956d4: SAHF
// 004956d5: JC 0x00495974
//   XREF to: 00495974 (CONDITIONAL_JUMP)
// 004956db: MOV EAX,dword ptr [EBP + 0x72]
//   XREF to: Stack[-0x18] (READ)
// 004956de: MOV EBX,dword ptr [EBP + 0x62]
//   XREF to: Stack[-0x28] (READ)
// 004956e1: INC EAX
// 004956e2: ADD EBX,0x1c
// 004956e5: MOV dword ptr [EBP + 0x72],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004956e8: MOV dword ptr [EBP + 0x62],EBX
//   XREF to: Stack[-0x28] (WRITE)
// 004956eb: MOV EAX,dword ptr [EBP + 0x72]
//   Label: LAB_004956eb
//   XREF to: Stack[-0x18] (READ)
// 004956ee: CMP EAX,dword ptr [EBP + 0x56]
//   XREF to: Stack[-0x34] (READ)
// 004956f1: JLE 0x004956b4
//   XREF to: 004956b4 (CONDITIONAL_JUMP)
// 004956f3: XOR ECX,ECX
//   Label: LAB_004956f3
// 004956f5: MOV EBX,dword ptr [EDI + 0x48]
// 004956f8: MOV dword ptr [EBP + 0x6a],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 004956fb: TEST EBX,EBX
// 004956fd: JLE 0x004957fe
//   XREF to: 004957fe (CONDITIONAL_JUMP)
// 00495703: MOV EAX,dword ptr [EBP + 0x6a]
//   Label: LAB_00495703
//   XREF to: Stack[-0x20] (READ)
// 00495706: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00495709: FILD dword ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 0049570c: FMUL float ptr [EDI + 0x30]
// 0049570f: FADD float ptr [EDI + 0x18]
// 00495712: FST float ptr [EBP + -0xa]
//   XREF to: Stack[-0x94] (WRITE)
// 00495715: FADD float ptr [EDI + 0x30]
// 00495718: FSTP float ptr [EBP + -0x22]
//   XREF to: Stack[-0xac] (WRITE)
// 0049571b: MOV EAX,dword ptr [EDI + 0x40]
// 0049571e: MOV ESI,dword ptr [EDI + 0x44]
// 00495721: IMUL EAX,ESI
// 00495724: MOV EDX,dword ptr [EDI + 0x48]
// 00495727: IMUL EAX,EDX
// 0049572a: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0049572d: MOV EAX,dword ptr [EBP + 0x4e]
//   XREF to: Stack[-0x3c] (READ)
// 00495730: IMUL EAX,ESI
// 00495733: ADD EAX,dword ptr [EBP + 0x52]
//   XREF to: Stack[-0x38] (READ)
// 00495736: IMUL EAX,EDX
// 00495739: SUB ESP,0x4
// 0049573c: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 00495742: MOV EDX,dword ptr [EBP + 0x6a]
//   XREF to: Stack[-0x20] (READ)
// 00495745: FILD dword ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 00495748: ADD EAX,EDX
// 0049574a: FSTP float ptr [ESP]
//   XREF to: Stack[-0xf0] (DATA)
// 0049574d: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00495750: SUB ESP,0x4
// 00495753: FILD dword ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 00495756: FSTP float ptr [ESP]
//   XREF to: Stack[-0xf4] (DATA)
// 00495759: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 0049575a: CALL shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530
//   XREF to: 004a0530 (UNCONDITIONAL_CALL)
// 0049575f: MOV EAX,dword ptr [EBP + 0x4e]
//   XREF to: Stack[-0x3c] (READ)
// 00495762: IMUL EAX,dword ptr [EDI + 0x44]
// 00495766: MOV ESI,dword ptr [EDI + 0x48]
// 00495769: IMUL ESI,EAX
// 0049576c: MOV EDX,dword ptr [EDI + 0x48]
// 0049576f: MOV EAX,dword ptr [EBP + 0x52]
//   XREF to: Stack[-0x38] (READ)
// 00495772: IMUL EAX,EDX
// 00495775: ADD EAX,dword ptr [EBP + 0x6a]
//   XREF to: Stack[-0x20] (READ)
// 00495778: ADD ESI,EAX
// 0049577a: IMUL ESI,ESI,0x34
// 0049577d: MOV EAX,dword ptr [EDI + 0x50]
// 00495780: ADD EAX,ESI
// 00495782: ADD ESP,0xc
// 00495785: MOV dword ptr [EBP + 0x6e],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00495788: LEA EAX,[EBP + -0x2a]
//   XREF to: Stack[-0xb4] (DATA)
// 0049578b: PUSH EAX
// 0049578c: LEA EAX,[EBP + -0x12]
//   XREF to: Stack[-0x9c] (DATA)
// 0049578f: PUSH EAX
// 00495790: MOV EBX,dword ptr [EBP + 0x6e]
//   XREF to: Stack[-0x1c] (READ)
// 00495793: PUSH EBX
// 00495794: XOR ESI,ESI
// 00495796: CALL core_dcube.cpp_CDemonCube_setBounds_FUN_00456a90
//   XREF to: 00456a90 (UNCONDITIONAL_CALL)
// 0049579b: MOV EAX,dword ptr [EBP + 0x72]
//   XREF to: Stack[-0x18] (READ)
// 0049579e: ADD ESP,0xc
// 004957a1: TEST EAX,EAX
// 004957a3: JLE 0x004957e0
//   XREF to: 004957e0 (CONDITIONAL_JUMP)
// 004957a5: MOV EBX,dword ptr [EBP + 0x46]
//   XREF to: Stack[-0x44] (READ)
// 004957a8: MOV ECX,dword ptr [EBX]
//   Label: LAB_004957a8
// 004957aa: IMUL EDX,ECX,0x38
// 004957ad: MOV EAX,dword ptr [EDI + 0x8]
// 004957b0: ADD EAX,EDX
// 004957b2: MOV EDX,dword ptr [EDI + 0xc]
// 004957b5: ADD EDX,ECX
// 004957b7: MOV DL,byte ptr [EDX]
// 004957b9: AND EDX,0xff
// 004957bf: PUSH EDX
// 004957c0: LEA EDX,[EAX + 0x18]
// 004957c3: PUSH EDX
// 004957c4: LEA EDX,[EAX + 0xc]
// 004957c7: PUSH EDX
// 004957c8: PUSH EAX
// 004957c9: MOV EAX,dword ptr [EBP + 0x6e]
//   XREF to: Stack[-0x1c] (READ)
// 004957cc: PUSH EAX
// 004957cd: ADD EBX,0x1c
// 004957d0: INC ESI
// 004957d1: CALL core_dcube.cpp_CDemonCube_clipTriangleToFrustum_FUN_00456af0
//   XREF to: 00456af0 (UNCONDITIONAL_CALL)
// 004957d6: MOV EDX,dword ptr [EBP + 0x72]
//   XREF to: Stack[-0x18] (READ)
// 004957d9: ADD ESP,0x14
// 004957dc: CMP ESI,EDX
// 004957de: JL 0x004957a8
//   XREF to: 004957a8 (CONDITIONAL_JUMP)
// 004957e0: MOV EDX,dword ptr [EBP + 0x6e]
//   Label: LAB_004957e0
//   XREF to: Stack[-0x1c] (READ)
// 004957e3: PUSH EDX
// 004957e4: CALL core_dcube.cpp_CDemonCube_buildGeometryFromPolygonData
//   XREF to: 00456ed0 (UNCONDITIONAL_CALL)
// 004957e9: MOV ECX,dword ptr [EBP + 0x6a]
//   XREF to: Stack[-0x20] (READ)
// 004957ec: ADD ESP,0x4
// 004957ef: INC ECX
// 004957f0: MOV EBX,dword ptr [EDI + 0x48]
// 004957f3: MOV dword ptr [EBP + 0x6a],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 004957f6: CMP ECX,EBX
// 004957f8: JL 0x00495703
//   XREF to: 00495703 (CONDITIONAL_JUMP)
// 004957fe: MOV EDX,dword ptr [EBP + 0x52]
//   Label: LAB_004957fe
//   XREF to: Stack[-0x38] (READ)
// 00495801: INC EDX
// 00495802: MOV ECX,dword ptr [EDI + 0x44]
// 00495805: MOV dword ptr [EBP + 0x52],EDX
//   XREF to: Stack[-0x38] (WRITE)
// 00495808: CMP EDX,ECX
// 0049580a: JL 0x00495674
//   XREF to: 00495674 (CONDITIONAL_JUMP)
// 00495810: MOV EDX,dword ptr [EBP + 0x4e]
//   Label: LAB_00495810
//   XREF to: Stack[-0x3c] (READ)
// 00495813: INC EDX
// 00495814: MOV ECX,dword ptr [EDI + 0x40]
// 00495817: MOV dword ptr [EBP + 0x4e],EDX
//   XREF to: Stack[-0x3c] (WRITE)
// 0049581a: CMP EDX,ECX
// 0049581c: JL 0x004955dd
//   XREF to: 004955dd (CONDITIONAL_JUMP)
// 00495822: MOV EBX,dword ptr [0x00678a60]
//   Label: LAB_00495822
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 00495828: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 00495829: CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
//   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)
// 0049582e: ADD ESP,0x4
// 00495831: PUSH EDI
// 00495832: MOV ESI,0x622b45
//   XREF to: 00622b45 (DATA)
// 00495837: CALL core_dtrace.cpp_CDemonRaytrace_freeTriList_FUN_00494690
//   XREF to: 00494690 (UNCONDITIONAL_CALL)
// 0049583c: MOV EDI,0x38c
// 00495841: MOV EAX,dword ptr [EBP + 0x46]
//   XREF to: Stack[-0x44] (READ)
// 00495844: ADD ESP,0x4
// 00495847: MOV dword ptr [0x0067d20c],ESI
//   XREF to: 0067d20c (WRITE)
// 0049584d: MOV dword ptr [0x02f0d944],EDI
//   XREF to: 02f0d944 (WRITE)
// 00495853: TEST EAX,EAX
// 00495855: JNZ 0x00495a85
//   XREF to: 00495a85 (CONDITIONAL_JUMP)
// 0049585b: LEA ESP,[EBP + 0x7a]
//   XREF to: Stack[-0x10] (DATA)
// 0049585e: POP EBP
// 0049585f: POP EDI
// 00495860: POP ESI
// 00495861: POP EBX
// 00495862: RET
// 00495863: MOV EAX,dword ptr [EBP + 0x3e]
//   Label: LAB_00495863
//   XREF to: Stack[-0x4c] (READ)
// 00495866: MOV EBX,dword ptr [EBP + 0x42]
//   XREF to: Stack[-0x48] (READ)
// 00495869: MOV dword ptr [EBP + 0x36],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 0049586c: MOV EAX,dword ptr [EBP + 0x42]
//   XREF to: Stack[-0x48] (READ)
// 0049586f: ADD EBX,0x4
// 00495872: MOV EAX,dword ptr [EAX]
// 00495874: PUSH EBX
// 00495875: MOV dword ptr [EBP + -0x62],EAX
//   XREF to: Stack[-0xec] (WRITE)
// 00495878: LEA EAX,[EBP + -0x5e]
//   XREF to: Stack[-0xe8] (DATA)
// 0049587b: PUSH EAX
// 0049587c: CALL core_charactr.cpp_CCharacter_setActorNameMaybe_FUN_0042fb00
//   XREF to: 0042fb00 (UNCONDITIONAL_CALL)
// 00495881: ADD ESP,0x8
// 00495884: LEA EAX,[EBX + 0x4]
// 00495887: PUSH EAX
// 00495888: LEA EAX,[EBP + -0x5a]
//   XREF to: Stack[-0xe4] (DATA)
// 0049588b: PUSH EAX
// 0049588c: CALL core_charactr.cpp_CCharacter_setActorNameMaybe_FUN_0042faf0
//   XREF to: 0042faf0 (UNCONDITIONAL_CALL)
// 00495891: ADD ESP,0x8
// 00495894: LEA EAX,[EBX + 0x8]
// 00495897: PUSH EAX
// 00495898: LEA EAX,[EBP + -0x56]
//   XREF to: Stack[-0xe0] (DATA)
// 0049589b: PUSH EAX
// 0049589c: CALL core_charactr.cpp_CCharacter_setActorNameMaybe_FUN_0042fae0
//   XREF to: 0042fae0 (UNCONDITIONAL_CALL)
// 004958a1: MOV EAX,dword ptr [EBP + 0x42]
//   XREF to: Stack[-0x48] (READ)
// 004958a4: ADD ESP,0x8
// 004958a7: ADD EAX,0x10
// 004958aa: PUSH EAX
// 004958ab: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004958ae: LEA EAX,[EBP + -0x52]
//   XREF to: Stack[-0xdc] (DATA)
// 004958b1: PUSH EAX
// 004958b2: CALL core_charactr.cpp_CCharacter_setActorNameMaybe_FUN_0042fb00
//   XREF to: 0042fb00 (UNCONDITIONAL_CALL)
// 004958b7: MOV EAX,dword ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 004958ba: ADD ESP,0x8
// 004958bd: ADD EAX,0x4
// 004958c0: PUSH EAX
// 004958c1: LEA EAX,[EBP + -0x4e]
//   XREF to: Stack[-0xd8] (DATA)
// 004958c4: PUSH EAX
// 004958c5: CALL core_charactr.cpp_CCharacter_setActorNameMaybe_FUN_0042faf0
//   XREF to: 0042faf0 (UNCONDITIONAL_CALL)
// 004958ca: MOV EAX,dword ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 004958cd: ADD ESP,0x8
// 004958d0: ADD EAX,0x8
// 004958d3: PUSH EAX
// 004958d4: LEA EAX,[EBP + -0x4a]
//   XREF to: Stack[-0xd4] (DATA)
// 004958d7: PUSH EAX
// 004958d8: CALL core_charactr.cpp_CCharacter_setActorNameMaybe_FUN_0042fae0
//   XREF to: 0042fae0 (UNCONDITIONAL_CALL)
// 004958dd: MOV EAX,dword ptr [EBP + 0x3e]
//   XREF to: Stack[-0x4c] (READ)
// 004958e0: MOV EDX,dword ptr [EBP + 0x42]
//   XREF to: Stack[-0x48] (READ)
// 004958e3: MOV dword ptr [EBP + 0x26],EAX
//   XREF to: Stack[-0x64] (WRITE)
// 004958e6: MOV EAX,dword ptr [EAX]
// 004958e8: ADD ESP,0x8
// 004958eb: MOV dword ptr [EDX],EAX
// 004958ed: CMP EBX,ESI
// 004958ef: JZ 0x00495901
//   XREF to: 00495901 (CONDITIONAL_JUMP)
// 004958f1: MOV EAX,dword ptr [ESI]
// 004958f3: MOV dword ptr [EBX],EAX
// 004958f5: MOV EAX,dword ptr [ESI + 0x4]
// 004958f8: MOV dword ptr [EBX + 0x4],EAX
// 004958fb: MOV EAX,dword ptr [ESI + 0x8]
// 004958fe: MOV dword ptr [EBX + 0x8],EAX
// 00495901: LEA EAX,[EDX + 0x10]
//   Label: LAB_00495901
// 00495904: MOV EDX,dword ptr [EBP + 0x26]
//   XREF to: Stack[-0x64] (READ)
// 00495907: ADD EDX,0x10
// 0049590a: CMP EAX,EDX
// 0049590c: JZ 0x0049591e
//   XREF to: 0049591e (CONDITIONAL_JUMP)
// 0049590e: MOV ECX,dword ptr [EDX]
// 00495910: MOV dword ptr [EAX],ECX
// 00495912: MOV ECX,dword ptr [EDX + 0x4]
// 00495915: MOV dword ptr [EAX + 0x4],ECX
// 00495918: MOV ECX,dword ptr [EDX + 0x8]
// 0049591b: MOV dword ptr [EAX + 0x8],ECX
// 0049591e: MOV EBX,dword ptr [EBP + 0x36]
//   Label: LAB_0049591e
//   XREF to: Stack[-0x54] (READ)
// 00495921: MOV EAX,dword ptr [EBP + -0x62]
//   XREF to: Stack[-0xec] (READ)
// 00495924: LEA EDX,[EBX + 0x4]
// 00495927: MOV dword ptr [EBX],EAX
// 00495929: LEA EAX,[EBP + -0x5e]
//   XREF to: Stack[-0xe8] (DATA)
// 0049592c: CMP EDX,EAX
// 0049592e: JZ 0x00495941
//   XREF to: 00495941 (CONDITIONAL_JUMP)
// 00495930: MOV EAX,dword ptr [EBP + -0x5e]
//   XREF to: Stack[-0xe8] (DATA)
// 00495933: MOV dword ptr [EDX],EAX
// 00495935: MOV EAX,dword ptr [EBP + -0x5a]
//   XREF to: Stack[-0xe4] (READ)
// 00495938: MOV dword ptr [EDX + 0x4],EAX
// 0049593b: MOV EAX,dword ptr [EBP + -0x56]
//   XREF to: Stack[-0xe0] (READ)
// 0049593e: MOV dword ptr [EDX + 0x8],EAX
// 00495941: LEA EAX,[EBP + -0x52]
//   Label: LAB_00495941
//   XREF to: Stack[-0xdc] (DATA)
// 00495944: LEA EDX,[EBX + 0x10]
// 00495947: CMP EDX,EAX
// 00495949: JZ 0x0049595c
//   XREF to: 0049595c (CONDITIONAL_JUMP)
// 0049594b: MOV EAX,dword ptr [EBP + -0x52]
//   XREF to: Stack[-0xdc] (DATA)
// 0049594e: MOV dword ptr [EDX],EAX
// 00495950: MOV EAX,dword ptr [EBP + -0x4e]
//   XREF to: Stack[-0xd8] (READ)
// 00495953: MOV dword ptr [EDX + 0x4],EAX
// 00495956: MOV EAX,dword ptr [EBP + -0x4a]
//   XREF to: Stack[-0xd4] (READ)
// 00495959: MOV dword ptr [EDX + 0x8],EAX
// 0049595c: MOV EDX,dword ptr [EBP + 0x3e]
//   Label: LAB_0049595c
//   XREF to: Stack[-0x4c] (READ)
// 0049595f: MOV ECX,dword ptr [EBP + 0x32]
//   XREF to: Stack[-0x58] (READ)
// 00495962: SUB ESI,0x1c
// 00495965: SUB EDX,0x1c
// 00495968: DEC ECX
// 00495969: MOV dword ptr [EBP + 0x3e],EDX
//   XREF to: Stack[-0x4c] (WRITE)
// 0049596c: MOV dword ptr [EBP + 0x32],ECX
//   XREF to: Stack[-0x58] (WRITE)
// 0049596f: JMP 0x00495655
//   XREF to: 00495655 (UNCONDITIONAL_JUMP)
// 00495974: MOV EAX,dword ptr [EBP + 0x5e]
//   Label: LAB_00495974
//   XREF to: Stack[-0x2c] (READ)
// 00495977: MOV EBX,dword ptr [EBP + 0x66]
//   XREF to: Stack[-0x24] (READ)
// 0049597a: MOV dword ptr [EBP + 0x5a],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 0049597d: MOV EAX,dword ptr [EBP + 0x66]
//   XREF to: Stack[-0x24] (READ)
// 00495980: ADD EBX,0x4
// 00495983: MOV EAX,dword ptr [EAX]
// 00495985: PUSH EBX
// 00495986: MOV dword ptr [EBP + -0x46],EAX
//   XREF to: Stack[-0xd0] (WRITE)
// 00495989: LEA EAX,[EBP + -0x42]
//   XREF to: Stack[-0xcc] (DATA)
// 0049598c: PUSH EAX
// 0049598d: CALL core_charactr.cpp_CCharacter_setActorNameMaybe_FUN_0042fb00
//   XREF to: 0042fb00 (UNCONDITIONAL_CALL)
// 00495992: ADD ESP,0x8
// 00495995: LEA EAX,[EBX + 0x4]
// 00495998: PUSH EAX
// 00495999: LEA EAX,[EBP + -0x3e]
//   XREF to: Stack[-0xc8] (DATA)
// 0049599c: PUSH EAX
// 0049599d: CALL core_charactr.cpp_CCharacter_setActorNameMaybe_FUN_0042faf0
//   XREF to: 0042faf0 (UNCONDITIONAL_CALL)
// 004959a2: ADD ESP,0x8
// 004959a5: LEA EAX,[EBX + 0x8]
// 004959a8: PUSH EAX
// 004959a9: LEA EAX,[EBP + -0x3a]
//   XREF to: Stack[-0xc4] (DATA)
// 004959ac: PUSH EAX
// 004959ad: CALL core_charactr.cpp_CCharacter_setActorNameMaybe_FUN_0042fae0
//   XREF to: 0042fae0 (UNCONDITIONAL_CALL)
// 004959b2: MOV EAX,dword ptr [EBP + 0x66]
//   XREF to: Stack[-0x24] (READ)
// 004959b5: ADD ESP,0x8
// 004959b8: ADD EAX,0x10
// 004959bb: PUSH EAX
// 004959bc: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004959bf: LEA EAX,[EBP + -0x36]
//   XREF to: Stack[-0xc0] (DATA)
// 004959c2: PUSH EAX
// 004959c3: CALL core_charactr.cpp_CCharacter_setActorNameMaybe_FUN_0042fb00
//   XREF to: 0042fb00 (UNCONDITIONAL_CALL)
// 004959c8: MOV EAX,dword ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 004959cb: ADD ESP,0x8
// 004959ce: ADD EAX,0x4
// 004959d1: PUSH EAX
// 004959d2: LEA EAX,[EBP + -0x32]
//   XREF to: Stack[-0xbc] (DATA)
// 004959d5: PUSH EAX
// 004959d6: CALL core_charactr.cpp_CCharacter_setActorNameMaybe_FUN_0042faf0
//   XREF to: 0042faf0 (UNCONDITIONAL_CALL)
// 004959db: MOV EAX,dword ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 004959de: ADD ESP,0x8
// 004959e1: ADD EAX,0x8
// 004959e4: PUSH EAX
// 004959e5: LEA EAX,[EBP + -0x2e]
//   XREF to: Stack[-0xb8] (DATA)
// 004959e8: PUSH EAX
// 004959e9: CALL core_charactr.cpp_CCharacter_setActorNameMaybe_FUN_0042fae0
//   XREF to: 0042fae0 (UNCONDITIONAL_CALL)
// 004959ee: MOV EAX,dword ptr [EBP + 0x5e]
//   XREF to: Stack[-0x2c] (READ)
// 004959f1: MOV EDX,dword ptr [EBP + 0x66]
//   XREF to: Stack[-0x24] (READ)
// 004959f4: MOV dword ptr [EBP + 0x4a],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 004959f7: MOV EAX,dword ptr [EAX]
// 004959f9: ADD ESP,0x8
// 004959fc: MOV dword ptr [EDX],EAX
// 004959fe: CMP EBX,ESI
// 00495a00: JZ 0x00495a12
//   XREF to: 00495a12 (CONDITIONAL_JUMP)
// 00495a02: MOV EAX,dword ptr [ESI]
// 00495a04: MOV dword ptr [EBX],EAX
// 00495a06: MOV EAX,dword ptr [ESI + 0x4]
// 00495a09: MOV dword ptr [EBX + 0x4],EAX
// 00495a0c: MOV EAX,dword ptr [ESI + 0x8]
// 00495a0f: MOV dword ptr [EBX + 0x8],EAX
// 00495a12: LEA EAX,[EDX + 0x10]
//   Label: LAB_00495a12
// 00495a15: MOV EDX,dword ptr [EBP + 0x4a]
//   XREF to: Stack[-0x40] (READ)
// 00495a18: ADD EDX,0x10
// 00495a1b: CMP EAX,EDX
// 00495a1d: JZ 0x00495a2f
//   XREF to: 00495a2f (CONDITIONAL_JUMP)
// 00495a1f: MOV ECX,dword ptr [EDX]
// 00495a21: MOV dword ptr [EAX],ECX
// 00495a23: MOV ECX,dword ptr [EDX + 0x4]
// 00495a26: MOV dword ptr [EAX + 0x4],ECX
// 00495a29: MOV ECX,dword ptr [EDX + 0x8]
// 00495a2c: MOV dword ptr [EAX + 0x8],ECX
// 00495a2f: MOV EBX,dword ptr [EBP + 0x5a]
//   Label: LAB_00495a2f
//   XREF to: Stack[-0x30] (READ)
// 00495a32: MOV EAX,dword ptr [EBP + -0x46]
//   XREF to: Stack[-0xd0] (READ)
// 00495a35: LEA EDX,[EBX + 0x4]
// 00495a38: MOV dword ptr [EBX],EAX
// 00495a3a: LEA EAX,[EBP + -0x42]
//   XREF to: Stack[-0xcc] (DATA)
// 00495a3d: CMP EDX,EAX
// 00495a3f: JZ 0x00495a52
//   XREF to: 00495a52 (CONDITIONAL_JUMP)
// 00495a41: MOV EAX,dword ptr [EBP + -0x42]
//   XREF to: Stack[-0xcc] (DATA)
// 00495a44: MOV dword ptr [EDX],EAX
// 00495a46: MOV EAX,dword ptr [EBP + -0x3e]
//   XREF to: Stack[-0xc8] (READ)
// 00495a49: MOV dword ptr [EDX + 0x4],EAX
// 00495a4c: MOV EAX,dword ptr [EBP + -0x3a]
//   XREF to: Stack[-0xc4] (READ)
// 00495a4f: MOV dword ptr [EDX + 0x8],EAX
// 00495a52: LEA EAX,[EBP + -0x36]
//   Label: LAB_00495a52
//   XREF to: Stack[-0xc0] (DATA)
// 00495a55: LEA EDX,[EBX + 0x10]
// 00495a58: CMP EDX,EAX
// 00495a5a: JZ 0x00495a6d
//   XREF to: 00495a6d (CONDITIONAL_JUMP)
// 00495a5c: MOV EAX,dword ptr [EBP + -0x36]
//   XREF to: Stack[-0xc0] (DATA)
// 00495a5f: MOV dword ptr [EDX],EAX
// 00495a61: MOV EAX,dword ptr [EBP + -0x32]
//   XREF to: Stack[-0xbc] (READ)
// 00495a64: MOV dword ptr [EDX + 0x4],EAX
// 00495a67: MOV EAX,dword ptr [EBP + -0x2e]
//   XREF to: Stack[-0xb8] (READ)
// 00495a6a: MOV dword ptr [EDX + 0x8],EAX
// 00495a6d: MOV EDX,dword ptr [EBP + 0x5e]
//   Label: LAB_00495a6d
//   XREF to: Stack[-0x2c] (READ)
// 00495a70: MOV ECX,dword ptr [EBP + 0x56]
//   XREF to: Stack[-0x34] (READ)
// 00495a73: SUB ESI,0x1c
// 00495a76: SUB EDX,0x1c
// 00495a79: DEC ECX
// 00495a7a: MOV dword ptr [EBP + 0x5e],EDX
//   XREF to: Stack[-0x2c] (WRITE)
// 00495a7d: MOV dword ptr [EBP + 0x56],ECX
//   XREF to: Stack[-0x34] (WRITE)
// 00495a80: JMP 0x004956eb
//   XREF to: 004956eb (UNCONDITIONAL_JUMP)
// 00495a85: SUB EAX,0x4
//   Label: LAB_00495a85
// 00495a88: PUSH EAX
// 00495a89: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 00495a8e: ADD ESP,0x4
// 00495a91: LEA ESP,[EBP + 0x7a]
//   XREF to: Stack[-0x10] (DATA)
// 00495a94: POP EBP
// 00495a95: POP EDI
// 00495a96: POP ESI
// 00495a97: POP EBX
// 00495a98: RET
