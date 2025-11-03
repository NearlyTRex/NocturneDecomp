// Name: shape_meshlod.cpp_NeighboringFacesEdgesCheck_FUN_00518910
// Address: 00518910
// Address Range: [[00518910, 00519470]]
// Convention: unknown
// Signature: undefined shape_meshlod.cpp_NeighboringFacesEdgesCheck_FUN_00518910()
// Cross-references:
//   shape_meshlod.cpp_FUN_00519680 (00519680) at 005196e4 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_00519710 (00519710) at 0051975f [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Too_many_neighboring_edg_00637921
//   TerminatedCString s_shape_meshlod_cpp_0063793d
//   TerminatedCString s_Too_many_neighboring_edg_00637952
//   TerminatedCString s_Too_many_neighboring_fac_0063796e
//   TerminatedCString s_shape_meshlod_cpp_0063798a
//   TerminatedCString s_Too_many_neighboring_fac_0063799f
//   TerminatedCString s_shape_meshlod_cpp_006379bb
//   TerminatedCString s_Bug_006379d0
//   float FLOAT_006379d5 = 0.25
//   float FLOAT_006379d9 = 0.5
//   float FLOAT_006379dd = 2
//   undefined4 DAT_00661388
//   WatcomTypeInfo g_LodFaceTypeInfo
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   WatcomStaticDestructorNode DAT_0067d380
//   undefined4 DAT_0067d394
//   undefined4 DAT_0067d398
//   CEditorTools g_CEditorToolsPtr
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   undefined4 DAT_02f2a1b0
//   undefined4 DAT_02f2a1b4
//   SLodFace[200] DAT_02f2a4d0
//   undefined4 DAT_02f2a4e0
//   undefined4 DAT_02f2a4e4
//   undefined4 DAT_02f2a4e8
//   undefined4 DAT_02f2a514
//   undefined4 DAT_02f2a518
//   undefined4 DAT_02f2a51c
//   undefined4 DAT_02f2a554
//   undefined4 DAT_02f2a55c
//   undefined4 DAT_02f2a5a0
//   undefined1 DAT_02f31230
//   undefined4 DAT_02f313ec
//   CVector3f[400] CVector3f_ARRAY_02f313f0
//   undefined4 CVector3f_ARRAY_02f313f0[0].y
//   undefined4 CVector3f_ARRAY_02f313f0[0].z
//   undefined4 DAT_02f313fc
//   undefined4 DAT_02f31400
//   undefined4 DAT_02f31404
//   undefined4 DAT_02f31408
//   undefined4 DAT_02f3140c
//   undefined4 DAT_02f31410
//   undefined8 DAT_02f326b0
//   undefined8 DAT_02f326b8
//   undefined4 DAT_02f33330
//   undefined4 DAT_02f33334
//   undefined4 DAT_02f33338
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   crt_stdlib.c_atexit_FUN_005ff060
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   shape_meshlod.cpp_FUN_00518490
//   shape_meshlod.cpp_FUN_00518870
//   shape_meshlod.cpp_FUN_00519480
//   shape_meshlod.cpp_FUN_00519830
//   shape_meshlod.cpp_FUN_0051a400
//   shape_meshlod.cpp_SamplePointsCheck_FUN_00519b50

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 shape_meshlod.cpp_NeighboringFacesEdgesCheck(undefined4 param_1, undefined4
   param_2) */

void shape_meshlod_cpp_NeighboringFacesEdgesCheck_FUN_00518910(void)

{
  double *pdVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  CVector3f *pCVar9;
  int iVar10;
  undefined4 uVar11;
  float *pfVar12;
  float *pfVar13;
  CVector3f *pCVar14;
  int iVar15;
  char *pcVar16;
  BADSPACEBASE *in_ESP;
  int iVar17;
  int iVar18;
  double dVar19;
  int in_stack_00000004;
  int in_stack_00000008;
  undefined8 local_fc;
  int local_ec;
  CVector3f local_c0;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  float local_8c;
  float fStack_88;
  int local_7c;
  undefined8 local_78;
  int local_70;
  int local_6c;
  char *local_68;
  CVector3f *local_64;
  int local_60;
  float local_5c;
  int local_58;
  float local_54;
  int local_50;
  int local_4c;
  int local_48;
  int *local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int *local_1c;
  int local_18;
  int iStack_14;
  int *piVar20;
  
  local_58 = *(int *)(in_stack_00000004 + 0x48) + in_stack_00000008 * 0xf0;
  *(undefined8 *)(local_58 + 8) = _DAT_00661388;
  *(undefined4 *)(local_58 + 0x20) = 0;
  iVar7 = shape_meshlod_cpp_FUN_00518490();
  if (iVar7 == in_stack_00000008) {
    iVar7 = shape_meshlod_cpp_FUN_00519480();
    local_7c = iVar7;
    local_78._4_4_ = shape_meshlod_cpp_FUN_00519480();
    if ((iVar7 == 0) || (local_78._4_4_ == 0)) {
      local_30 = 0;
      iVar7 = 0;
      if ((DAT_02f31230 & 1) == 0) {
        DAT_02f31230 = DAT_02f31230 | 1;
        crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
                  (DAT_02f2a4d0,200,&g_LodFaceTypeInfo);
        crt_stdlib_c_atexit_FUN_005ff060(&DAT_0067d380);
      }
      DAT_02f33334 = DAT_02f33334 + 1;
      DAT_02f33338 = DAT_02f33338 + 1;
      local_58 = 0;
      do {
        iStack_14 = local_44[1];
        iVar17 = *local_44;
        if (local_58 == 1) {
          iStack_14 = *local_44;
          iVar17 = local_44[1];
        }
        local_3c = 0;
        local_4c = iVar17 * 0x4c4;
        local_24 = local_28 << 2;
        local_34 = 0;
        while( true ) {
          dVar19 = (double)CONCAT44(local_78._4_4_,(undefined4)local_78);
          iVar8 = local_4c + *(int *)(in_stack_00000004 + 4);
          if (*(int *)(iVar8 + 0x3f8) <= local_3c) break;
          iVar8 = *(int *)(iVar8 + local_34 + 0x3fc);
          local_1c = (int *)(*(int *)(in_stack_00000004 + 0x48) + iVar8 * 0xf0);
          if (iVar8 != in_stack_00000008) {
            if (199 < local_28) {
              shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                        (g_CEditorToolsPtr,"Too many neighboring edges!");
              g_CurrentFilename = "..\\shape\\meshlod.cpp";
              g_CurrentLineNumber = 0xbca;
              core_main_c_displayErrorAndQuit_FUN_00506f10("Too many neighboring edges!");
            }
            if (iVar17 == *local_1c) {
              iVar8 = local_1c[1];
            }
            else {
              iVar8 = *local_1c;
            }
            *(int *)((int)&DAT_02f2a1b0 + local_24) = iVar8;
            local_24 = local_24 + 4;
            local_28 = local_28 + 1;
            iVar8 = 0;
            if (0 < local_1c[9]) {
              iVar10 = iVar7 * 0x8c;
              piVar20 = local_1c;
              do {
                iVar6 = DAT_02f33334;
                local_18 = piVar20[10];
                iVar15 = *(int *)(in_stack_00000004 + 0xc) + local_18 * 0x8c;
                iVar18 = iVar10;
                if (DAT_02f33334 != *(int *)(iVar15 + 0x84)) {
                  *(int *)(iVar15 + 0x88) = DAT_02f33338;
                  *(int *)(iVar15 + 0x84) = iVar6;
                  if (((*(int *)(iVar15 + 0x10) != iStack_14) &&
                      (iStack_14 != *(int *)(iVar15 + 0x14))) &&
                     (iStack_14 != *(int *)(iVar15 + 0x18))) {
                    if (199 < iVar7) {
                      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                                (g_CEditorToolsPtr,"Too many neighboring faces!");
                      g_CurrentFilename = "..\\shape\\meshlod.cpp";
                      g_CurrentLineNumber = 0xbf4;
                      core_main_c_displayErrorAndQuit_FUN_00506f10
                                ("Too many neighboring faces!");
                    }
                    *(int *)(DAT_02f2a4d0[0].field0_0x0 + iVar10 + 0x10) = iVar17;
                    if (iVar17 == *(int *)(iVar15 + 0x10)) {
                      *(undefined4 *)(DAT_02f2a4d0[0].field0_0x0 + iVar10 + 0x14) =
                           *(undefined4 *)(iVar15 + 0x14);
                      uVar11 = *(undefined4 *)(iVar15 + 0x18);
LAB_0051919d:
                      *(undefined4 *)(DAT_02f2a4d0[0].field0_0x0 + iVar10 + 0x18) = uVar11;
                    }
                    else {
                      if (iVar17 == *(int *)(iVar15 + 0x14)) {
                        *(undefined4 *)(DAT_02f2a4d0[0].field0_0x0 + iVar10 + 0x14) =
                             *(undefined4 *)(iVar15 + 0x18);
                        uVar11 = *(undefined4 *)(iVar15 + 0x10);
                        goto LAB_0051919d;
                      }
                      if (iVar17 == *(int *)(iVar15 + 0x18)) {
                        *(undefined4 *)(DAT_02f2a4d0[0].field0_0x0 + iVar10 + 0x14) =
                             *(undefined4 *)(iVar15 + 0x10);
                        uVar11 = *(undefined4 *)(iVar15 + 0x14);
                        goto LAB_0051919d;
                      }
                      g_CurrentFilename = "..\\shape\\meshlod.cpp";
                      g_CurrentLineNumber = 0xc06;
                      core_main_c_displayErrorAndQuit_FUN_00506f10("Bug!");
                    }
                    iVar18 = iVar10 + 0x8c;
                    iVar7 = iVar7 + 1;
                    *(int *)(DAT_02f2a4d0[0].field0_0x0 + iVar10 + 0x84) = local_18;
                  }
                }
                piVar20 = piVar20 + 1;
                iVar8 = iVar8 + 1;
                iVar10 = iVar18;
              } while (iVar8 < local_1c[9]);
            }
          }
          local_3c = local_3c + 1;
          local_34 = local_34 + 4;
        }
        local_58 = local_58 + 1;
      } while (local_58 < 2);
      pfVar12 = (float *)(*(int *)(in_stack_00000004 + 4) + *local_44 * 0x4c4);
      fStack_90 = *pfVar12;
      local_8c = pfVar12[1];
      fStack_88 = pfVar12[2];
      local_60 = local_28 << 2;
      local_68 = DAT_02f2a4d0[0].field0_0x0 + 0x44;
      local_50 = 0;
      local_64 = CVector3f_ARRAY_02f313f0 + 1;
      do {
        if ((DAT_02f33330 != 0) ||
           (((local_50 == 0 || (local_70 == 0)) && ((local_50 == 4 || (local_6c == 0)))))) {
          iVar8 = local_44[1] * 0x4c4;
          local_54 = (float)local_50 * FLOAT_006379d5;
          local_5c = 1.0 - local_54;
          iVar17 = *(int *)(in_stack_00000004 + 4);
          local_9c = *(float *)(iVar17 + iVar8) * local_54;
          local_98 = *(float *)(iVar17 + 4 + iVar8) * local_54;
          fStack_94 = *(float *)(iVar17 + 8 + iVar8) * local_54;
          pfVar12 = (float *)(*(int *)(in_stack_00000004 + 4) + *local_44 * 0x4c4);
          *pfVar12 = fStack_90 * local_5c + local_9c;
          fVar2 = _DAT_0067d398;
          pfVar12[1] = local_8c * local_5c + local_98;
          pfVar12[2] = fStack_88 * local_5c + fStack_94;
          local_fc = 0.0;
          local_78 = dVar19;
          if (0.0 < fVar2) {
            pCVar9 = (CVector3f *)(*(int *)(in_stack_00000004 + 4) + *local_44 * 0x4c4);
            DAT_02f313ec = 1;
            if (pCVar9 != CVector3f_ARRAY_02f313f0) {
              CVector3f_ARRAY_02f313f0[0].x = pCVar9->x;
              CVector3f_ARRAY_02f313f0[0].z = pCVar9->z;
              CVector3f_ARRAY_02f313f0[0].y = pCVar9->y;
            }
            if (0 < local_28) {
              iVar17 = 0;
              local_48 = local_60;
              do {
                iVar8 = DAT_02f313ec;
                pfVar13 = (float *)(*(int *)((int)&DAT_02f2a1b0 + iVar17) * 0x4c4 +
                                   *(int *)(in_stack_00000004 + 4));
                pfVar12 = (float *)(*(int *)(in_stack_00000004 + 4) + *local_44 * 0x4c4);
                local_c0.x = (*pfVar12 + *pfVar13) / FLOAT_006379dd;
                local_c0.y = (pfVar12[1] + pfVar13[1]) * FLOAT_006379d9;
                local_c0.z = (pfVar12[2] + pfVar13[2]) * FLOAT_006379d9;
                iVar10 = DAT_02f313ec + 1;
                pCVar9 = CVector3f_ARRAY_02f313f0 + DAT_02f313ec;
                DAT_02f313ec = iVar10;
                if (pCVar9 != &local_c0) {
                  pCVar9->x = local_c0.x;
                  CVector3f_ARRAY_02f313f0[iVar8].y = local_c0.y;
                  CVector3f_ARRAY_02f313f0[iVar8].z = local_c0.z;
                }
                iVar17 = iVar17 + 4;
              } while (iVar17 < local_60);
            }
            local_30 = 0;
            if (0 < iVar7) {
              do {
                local_78 = dVar19;
                pCVar9 = (CVector3f *)shape_meshlod_cpp_FUN_00518870();
                iVar17 = DAT_02f313ec;
                iVar8 = DAT_02f313ec + 1;
                pCVar14 = CVector3f_ARRAY_02f313f0 + DAT_02f313ec;
                DAT_02f313ec = iVar8;
                if (pCVar14 != pCVar9) {
                  pCVar14->x = pCVar9->x;
                  CVector3f_ARRAY_02f313f0[iVar17].y = pCVar9->y;
                  CVector3f_ARRAY_02f313f0[iVar17].z = pCVar9->z;
                }
                local_30 = local_30 + 1;
                dVar19 = local_78;
              } while (local_30 < iVar7);
            }
            if (DAT_0067d394 != 0) {
              iVar17 = 1;
              local_40 = DAT_02f313ec;
              if (1 < DAT_02f313ec) {
                iVar8 = DAT_02f313ec * 0xc;
                pCVar9 = local_64;
                do {
                  local_b4 = CVector3f_ARRAY_02f313f0[0].x + pCVar9->x;
                  local_a8 = local_b4 / FLOAT_006379dd;
                  local_b0 = CVector3f_ARRAY_02f313f0[0].y + pCVar9->y;
                  local_ac = CVector3f_ARRAY_02f313f0[0].z + pCVar9->z;
                  local_a4 = local_b0 * FLOAT_006379d9;
                  local_a0 = local_ac * FLOAT_006379d9;
                  local_40 = local_40 + 1;
                  pfVar12 = (float *)((int)&CVector3f_ARRAY_02f313f0[0].x + iVar8);
                  if (pfVar12 != &local_a8) {
                    *pfVar12 = local_a8;
                    *(float *)((int)&CVector3f_ARRAY_02f313f0[0].y + iVar8) = local_a4;
                    *(float *)((int)&CVector3f_ARRAY_02f313f0[0].z + iVar8) = local_a0;
                  }
                  iVar17 = iVar17 + 1;
                  pCVar9 = pCVar9 + 1;
                  iVar8 = iVar8 + 0xc;
                } while (iVar17 < DAT_02f313ec);
              }
              DAT_02f313ec = local_40;
            }
            fVar2 = _DAT_0067d398 * 1e+10;
            fVar3 = (float)DAT_02f313ec;
            shape_meshlod_cpp_SamplePointsCheck_FUN_00519b50();
            if (0 < DAT_02f313ec) {
              iVar17 = 0;
              do {
                pdVar1 = (double *)((int)&DAT_02f326b0 + iVar17);
                iVar17 = iVar17 + 8;
                local_fc = *pdVar1 * (double)(fVar2 / fVar3) + local_fc;
              } while (SBORROW4(iVar17,DAT_02f313ec * 8) != iVar17 + DAT_02f313ec * -8 < 0);
            }
            dVar19 = local_78;
            if (*(double *)(local_44 + 2) < local_fc) goto LAB_00518f71;
          }
          iVar17 = 0;
          pcVar16 = local_68;
          dVar19 = local_78;
          if (0 < iVar7) {
            do {
              shape_meshlod_cpp_FUN_00519830();
              iVar10 = *(int *)(DAT_02f2a4d0[iVar17].field0_0x0 + 0x84) * 0x8c;
              iVar8 = *(int *)(in_stack_00000004 + 0xc);
              dVar19 = local_78;
              if (*(float *)(pcVar16 + 8) * *(float *)(iVar8 + 0x4c + iVar10) +
                  *(float *)pcVar16 * *(float *)(iVar8 + 0x44 + iVar10) +
                  *(float *)(pcVar16 + 4) * *(float *)(iVar8 + 0x48 + iVar10) < 0.0) break;
              iVar17 = iVar17 + 1;
              pcVar16 = pcVar16 + 0x8c;
            } while (iVar17 < iVar7);
          }
          if (iVar7 <= iVar17) {
            if ((0 < *(int *)(in_stack_00000004 + 0x5c)) && (_DAT_0067d398 < 1.0)) {
              local_ec = 0;
              local_2c = 0;
              fVar2 = 0.0;
              if (0 < *(int *)(in_stack_00000004 + 0x5c)) {
                local_38 = 0;
                do {
                  local_20 = local_38 + *(int *)(in_stack_00000004 + 0x60);
                  if (DAT_02f33338 ==
                      *(int *)(*(int *)(in_stack_00000004 + 0xc) + 0x88 +
                              *(int *)(local_20 + 0xc) * 0x8c)) {
                    dVar5 = 9.999999999999999e+29;
                    dVar4 = 9.999999999999999e+29;
                    iVar17 = 0;
                    if (0 < iVar7) {
                      do {
                        local_78 = dVar19;
                        dVar19 = (double)shape_meshlod_cpp_FUN_0051a400();
                        dVar4 = dVar5;
                        if (dVar19 < dVar5) {
                          dVar4 = dVar19;
                        }
                        iVar17 = iVar17 + 1;
                        dVar5 = dVar4;
                      } while (iVar17 < iVar7);
                    }
                    local_ec = local_ec + 1;
                    fVar2 = *(float *)(local_20 + 0x18) * (float)dVar4 + fVar2;
                  }
                  local_38 = local_38 + 0x1c;
                  local_2c = local_2c + 1;
                } while (local_2c < *(int *)(in_stack_00000004 + 0x5c));
              }
              if (0 < local_ec) {
                local_fc = (double)(((1.0 - _DAT_0067d398) * fVar2 * 1e+10) / (float)local_ec +
                                   (float)local_fc);
              }
            }
            if (local_fc < *(double *)(local_44 + 2)) {
              local_44[2] = (int)local_fc;
              local_44[3] = local_fc._4_4_;
              local_44[4] = (int)local_54;
            }
          }
        }
LAB_00518f71:
        local_50 = local_50 + 1;
        if (4 < local_50) {
          pfVar12 = (float *)(*local_44 * 0x4c4 + *(int *)(in_stack_00000004 + 4));
          *pfVar12 = fStack_90;
          pfVar12[1] = local_8c;
          pfVar12[2] = fStack_88;
          return;
        }
      } while( true );
    }
  }
  return;
}


// Assembly code:
// 00518910: PUSH EBX
//   Label: shape_meshlod.cpp_NeighboringFacesEdgesCheck_FUN_00518910
// 00518911: PUSH ESI
// 00518912: PUSH EDI
// 00518913: PUSH EBP
// 00518914: MOV EBP,ESP
// 00518916: SUB ESP,0x114
// 0051891c: AND ESP,0xfffffff8
// 0051891f: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00518922: SHL EAX,0x4
// 00518925: MOV EDX,EAX
// 00518927: SHL EAX,0x4
// 0051892a: SUB EAX,EDX
// 0051892c: MOV EDX,EAX
// 0051892e: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00518931: MOV EAX,dword ptr [EAX + 0x48]
// 00518934: ADD EAX,EDX
// 00518936: MOV EDX,dword ptr [EAX + 0x4]
// 00518939: FLD double ptr [0x00661388]
//   XREF to: 00661388 (READ)
// 0051893f: PUSH EDX
// 00518940: MOV ECX,dword ptr [EAX]
// 00518942: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00518945: PUSH ECX
// 00518946: FSTP double ptr [EAX + 0x8]
// 00518949: PUSH EBX
// 0051894a: MOV dword ptr [ESP + 0xdc],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 00518951: MOV dword ptr [EAX + 0x20],0x0
// 00518958: CALL shape_meshlod.cpp_FUN_00518490
//   XREF to: 00518490 (UNCONDITIONAL_CALL)
// 0051895d: ADD ESP,0xc
// 00518960: MOV ESI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00518963: CMP EAX,ESI
// 00518965: JZ 0x0051896e
//   XREF to: 0051896e (CONDITIONAL_JUMP)
// 00518967: MOV ESP,EBP
//   Label: LAB_00518967
// 00518969: POP EBP
// 0051896a: POP EDI
// 0051896b: POP ESI
// 0051896c: POP EBX
// 0051896d: RET
// 0051896e: MOV EAX,dword ptr [ESP + 0xd0]
//   Label: LAB_0051896e
//   XREF to: Stack[-0x58] (READ)
// 00518975: MOV EDI,dword ptr [EAX]
// 00518977: PUSH EDI
// 00518978: PUSH ESI
// 00518979: PUSH EBX
// 0051897a: CALL shape_meshlod.cpp_FUN_00519480
//   XREF to: 00519480 (UNCONDITIONAL_CALL)
// 0051897f: ADD ESP,0xc
// 00518982: MOV EBX,EAX
// 00518984: MOV dword ptr [ESP + 0xa4],EAX
//   XREF to: Stack[-0x84] (WRITE)
// 0051898b: MOV EAX,dword ptr [ESP + 0xd0]
//   XREF to: Stack[-0x58] (READ)
// 00518992: MOV ECX,dword ptr [EAX + 0x4]
// 00518995: PUSH ECX
// 00518996: PUSH ESI
// 00518997: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0051899a: PUSH EDI
// 0051899b: CALL shape_meshlod.cpp_FUN_00519480
//   XREF to: 00519480 (UNCONDITIONAL_CALL)
// 005189a0: ADD ESP,0xc
// 005189a3: MOV dword ptr [ESP + 0xa8],EAX
//   XREF to: Stack[-0x80] (WRITE)
// 005189aa: TEST EBX,EBX
// 005189ac: JZ 0x005189b2
//   XREF to: 005189b2 (CONDITIONAL_JUMP)
// 005189ae: TEST EAX,EAX
// 005189b0: JNZ 0x00518967
//   XREF to: 00518967 (CONDITIONAL_JUMP)
// 005189b2: XOR EAX,EAX
//   Label: LAB_005189b2
// 005189b4: MOV dword ptr [ESP + 0xec],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 005189bb: MOV AH,byte ptr [0x02f31230]
//   XREF to: 02f31230 (READ)
// 005189c1: XOR EDI,EDI
// 005189c3: TEST AH,0x1
// 005189c6: JZ 0x00518ac8
//   XREF to: 00518ac8 (CONDITIONAL_JUMP)
// 005189cc: MOV ECX,dword ptr [0x02f33334]
//   Label: LAB_005189cc
//   XREF to: 02f33334 (READ)
// 005189d2: MOV EBX,dword ptr [0x02f33338]
//   XREF to: 02f33338 (READ)
// 005189d8: XOR EDX,EDX
// 005189da: INC ECX
// 005189db: INC EBX
// 005189dc: MOV dword ptr [ESP + 0xbc],EDX
//   XREF to: Stack[-0x6c] (WRITE)
// 005189e3: MOV dword ptr [0x02f33334],ECX
//   XREF to: 02f33334 (WRITE)
// 005189e9: MOV dword ptr [0x02f33338],EBX
//   XREF to: 02f33338 (WRITE)
// 005189ef: MOV EAX,dword ptr [ESP + 0xd0]
//   Label: LAB_005189ef
//   XREF to: Stack[-0x58] (READ)
// 005189f6: MOV EAX,dword ptr [EAX]
// 005189f8: MOV dword ptr [ESP + 0x10c],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 005189ff: MOV EAX,dword ptr [ESP + 0xd0]
//   XREF to: Stack[-0x58] (READ)
// 00518a06: MOV EAX,dword ptr [EAX + 0x4]
// 00518a09: MOV ESI,dword ptr [ESP + 0xbc]
//   XREF to: Stack[-0x6c] (READ)
// 00518a10: MOV dword ptr [ESP + 0x100],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 00518a17: CMP ESI,0x1
// 00518a1a: JZ 0x00518fc2
//   XREF to: 00518fc2 (CONDITIONAL_JUMP)
// 00518a20: XOR EAX,EAX
//   Label: LAB_00518a20
// 00518a22: MOV EDX,dword ptr [ESP + 0x10c]
//   XREF to: Stack[-0x1c] (READ)
// 00518a29: MOV dword ptr [ESP + 0xd8],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 00518a30: IMUL EAX,EDX,0x4c4
// 00518a36: MOV dword ptr [ESP + 0xc8],EAX
//   XREF to: Stack[-0x60] (WRITE)
// 00518a3d: MOV EAX,dword ptr [ESP + 0xec]
//   XREF to: Stack[-0x3c] (READ)
// 00518a44: XOR ECX,ECX
// 00518a46: SHL EAX,0x2
// 00518a49: MOV dword ptr [ESP + 0xe0],ECX
//   XREF to: Stack[-0x48] (WRITE)
// 00518a50: MOV dword ptr [ESP + 0xf0],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 00518a57: MOV EDX,dword ptr [EBP + 0x14]
//   Label: LAB_00518a57
//   XREF to: Stack[0x4] (READ)
// 00518a5a: MOV EAX,dword ptr [ESP + 0xc8]
//   XREF to: Stack[-0x60] (READ)
// 00518a61: MOV EDX,dword ptr [EDX + 0x4]
// 00518a64: ADD EAX,EDX
// 00518a66: MOV ECX,dword ptr [ESP + 0xd8]
//   XREF to: Stack[-0x50] (READ)
// 00518a6d: CMP ECX,dword ptr [EAX + 0x3f8]
// 00518a73: JGE 0x00518afc
//   XREF to: 00518afc (CONDITIONAL_JUMP)
// 00518a79: ADD EAX,dword ptr [ESP + 0xe0]
//   XREF to: Stack[-0x48] (READ)
// 00518a80: MOV EAX,dword ptr [EAX + 0x3fc]
// 00518a86: IMUL EDX,EAX,0xf0
// 00518a8c: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00518a8f: MOV ECX,dword ptr [ECX + 0x48]
// 00518a92: ADD ECX,EDX
// 00518a94: MOV EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00518a97: MOV dword ptr [ESP + 0xf8],ECX
//   XREF to: Stack[-0x30] (WRITE)
// 00518a9e: CMP EAX,EDX
// 00518aa0: JNZ 0x00518fe3
//   XREF to: 00518fe3 (CONDITIONAL_JUMP)
// 00518aa6: MOV EAX,dword ptr [ESP + 0xd8]
//   Label: LAB_00518aa6
//   XREF to: Stack[-0x50] (READ)
// 00518aad: MOV ESI,dword ptr [ESP + 0xe0]
//   XREF to: Stack[-0x48] (READ)
// 00518ab4: INC EAX
// 00518ab5: ADD ESI,0x4
// 00518ab8: MOV dword ptr [ESP + 0xd8],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 00518abf: MOV dword ptr [ESP + 0xe0],ESI
//   XREF to: Stack[-0x48] (WRITE)
// 00518ac6: JMP 0x00518a57
//   XREF to: 00518a57 (UNCONDITIONAL_JUMP)
// 00518ac8: PUSH 0x661390
//   Label: LAB_00518ac8
//   XREF to: 00661390 (DATA)
// 00518acd: MOV DL,AH
// 00518acf: PUSH 0xc8
// 00518ad4: OR DL,0x1
// 00518ad7: PUSH 0x2f2a4d0
//   XREF to: 02f2a4d0 (DATA)
// 00518adc: MOV byte ptr [0x02f31230],DL
//   XREF to: 02f31230 (WRITE)
// 00518ae2: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 00518ae7: ADD ESP,0xc
// 00518aea: PUSH 0x67d380
//   XREF to: 0067d380 (DATA)
// 00518aef: CALL crt_stdlib.c_atexit_FUN_005ff060
//   XREF to: 005ff060 (UNCONDITIONAL_CALL)
// 00518af4: ADD ESP,0x4
// 00518af7: JMP 0x005189cc
//   XREF to: 005189cc (UNCONDITIONAL_JUMP)
// 00518afc: MOV ESI,dword ptr [ESP + 0xbc]
//   Label: LAB_00518afc
//   XREF to: Stack[-0x6c] (READ)
// 00518b03: INC ESI
// 00518b04: MOV dword ptr [ESP + 0xbc],ESI
//   XREF to: Stack[-0x6c] (WRITE)
// 00518b0b: CMP ESI,0x2
// 00518b0e: JL 0x005189ef
//   XREF to: 005189ef (CONDITIONAL_JUMP)
// 00518b14: MOV EAX,dword ptr [ESP + 0xd0]
//   XREF to: Stack[-0x58] (READ)
// 00518b1b: IMUL EAX,dword ptr [EAX],0x4c4
// 00518b21: ADD EDX,EAX
// 00518b23: MOV EAX,dword ptr [EDX]
// 00518b25: MOV dword ptr [ESP + 0x84],EAX
//   XREF to: Stack[-0xa4] (WRITE)
// 00518b2c: LEA EAX,[EDX + 0x4]
// 00518b2f: MOV EAX,dword ptr [EAX]
// 00518b31: MOV dword ptr [ESP + 0x88],EAX
//   XREF to: Stack[-0xa0] (WRITE)
// 00518b38: LEA EAX,[EDX + 0x8]
// 00518b3b: MOV EAX,dword ptr [EAX]
// 00518b3d: MOV dword ptr [ESP + 0x8c],EAX
//   XREF to: Stack[-0x9c] (WRITE)
// 00518b44: MOV EAX,dword ptr [ESP + 0xec]
//   XREF to: Stack[-0x3c] (READ)
// 00518b4b: SHL EAX,0x2
// 00518b4e: MOV dword ptr [ESP + 0xb4],EAX
//   XREF to: Stack[-0x74] (WRITE)
// 00518b55: MOV EAX,0x2f2a4d0
//   XREF to: 02f2a4d0 (DATA)
// 00518b5a: ADD EAX,0x44
// 00518b5d: MOV dword ptr [ESP + 0xac],EAX
//   XREF to: Stack[-0x7c] (WRITE)
//   XREF to: 02f2a514 (DATA)
// 00518b64: MOV EAX,0x2f313f0
//   XREF to: 02f313f0 (DATA)
// 00518b69: XOR EBX,EBX
// 00518b6b: ADD EAX,0xc
// 00518b6e: MOV dword ptr [ESP + 0xc4],EBX
//   XREF to: Stack[-0x64] (WRITE)
// 00518b75: MOV dword ptr [ESP + 0xb0],EAX
//   XREF to: Stack[-0x78] (WRITE)
//   XREF to: 02f313fc (DATA)
// 00518b7c: CMP dword ptr [0x02f33330],0x0
//   Label: LAB_00518b7c
//   XREF to: 02f33330 (READ)
// 00518b83: JZ 0x00519207
//   XREF to: 00519207 (CONDITIONAL_JUMP)
// 00518b89: MOV EAX,dword ptr [ESP + 0xc4]
//   Label: LAB_00518b89
//   XREF to: Stack[-0x64] (READ)
// 00518b90: MOV dword ptr [ESP + 0x110],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00518b97: MOV EAX,dword ptr [ESP + 0xd0]
//   XREF to: Stack[-0x58] (READ)
// 00518b9e: IMUL EAX,dword ptr [EAX + 0x4],0x4c4
// 00518ba5: FILD dword ptr [ESP + 0x110]
//   XREF to: Stack[-0x18] (READ)
// 00518bac: FMUL float ptr [0x006379d5]
//   XREF to: 006379d5 (READ)
// 00518bb2: FLD1
// 00518bb4: FLD float ptr [ESP + 0x84]
//   XREF to: Stack[-0xa4] (READ)
// 00518bbb: FXCH ST2
// 00518bbd: FSTP float ptr [ESP + 0xc0]
//   XREF to: Stack[-0x68] (WRITE)
// 00518bc4: FSUB float ptr [ESP + 0xc0]
//   XREF to: Stack[-0x68] (READ)
// 00518bcb: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00518bce: FSTP float ptr [ESP + 0xb8]
//   XREF to: Stack[-0x70] (WRITE)
// 00518bd5: MOV EDX,dword ptr [EDX + 0x4]
// 00518bd8: FMUL float ptr [ESP + 0xb8]
//   XREF to: Stack[-0x70] (READ)
// 00518bdf: FLD float ptr [EDX + EAX*0x1]
// 00518be2: FMUL float ptr [ESP + 0xc0]
//   XREF to: Stack[-0x68] (READ)
// 00518be9: FLD float ptr [ESP + 0x88]
//   XREF to: Stack[-0xa0] (READ)
// 00518bf0: FMUL float ptr [ESP + 0xb8]
//   XREF to: Stack[-0x70] (READ)
// 00518bf7: FXCH
// 00518bf9: FSTP float ptr [ESP + 0x78]
//   XREF to: Stack[-0xb0] (WRITE)
// 00518bfd: FLD float ptr [EDX + EAX*0x1 + 0x4]
// 00518c01: FMUL float ptr [ESP + 0xc0]
//   XREF to: Stack[-0x68] (READ)
// 00518c08: FLD float ptr [ESP + 0x8c]
//   XREF to: Stack[-0x9c] (READ)
// 00518c0f: FMUL float ptr [ESP + 0xb8]
//   XREF to: Stack[-0x70] (READ)
// 00518c16: FXCH
// 00518c18: FSTP float ptr [ESP + 0x7c]
//   XREF to: Stack[-0xac] (WRITE)
// 00518c1c: FLD float ptr [EDX + EAX*0x1 + 0x8]
// 00518c20: FMUL float ptr [ESP + 0xc0]
//   XREF to: Stack[-0x68] (READ)
// 00518c27: FXCH ST3
// 00518c29: FSTP float ptr [ESP + 0x3c]
//   XREF to: Stack[-0xec] (WRITE)
// 00518c2d: FXCH
// 00518c2f: FSTP float ptr [ESP + 0x40]
//   XREF to: Stack[-0xe8] (WRITE)
// 00518c33: FSTP float ptr [ESP + 0x44]
//   XREF to: Stack[-0xe4] (WRITE)
// 00518c37: FLD float ptr [ESP + 0x3c]
//   XREF to: Stack[-0xec] (READ)
// 00518c3b: FLD float ptr [ESP + 0x40]
//   XREF to: Stack[-0xe8] (READ)
// 00518c3f: FLD float ptr [ESP + 0x44]
//   XREF to: Stack[-0xe4] (READ)
// 00518c43: MOV EAX,dword ptr [ESP + 0xd0]
//   XREF to: Stack[-0x58] (READ)
// 00518c4a: FXCH ST3
// 00518c4c: FSTP float ptr [ESP + 0x80]
//   XREF to: Stack[-0xa8] (WRITE)
// 00518c53: FXCH
// 00518c55: FADD float ptr [ESP + 0x78]
//   XREF to: Stack[-0xb0] (READ)
// 00518c59: FXCH
// 00518c5b: FADD float ptr [ESP + 0x7c]
//   XREF to: Stack[-0xac] (READ)
// 00518c5f: FXCH
// 00518c61: FSTP float ptr [ESP + 0x30]
//   XREF to: Stack[-0xf8] (WRITE)
// 00518c65: FXCH
// 00518c67: FADD float ptr [ESP + 0x80]
//   XREF to: Stack[-0xa8] (READ)
// 00518c6e: FXCH
// 00518c70: FSTP float ptr [ESP + 0x34]
//   XREF to: Stack[-0xf4] (WRITE)
// 00518c74: FSTP float ptr [ESP + 0x38]
//   XREF to: Stack[-0xf0] (WRITE)
// 00518c78: IMUL EAX,dword ptr [EAX],0x4c4
// 00518c7e: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00518c81: MOV EDX,dword ptr [EDX + 0x4]
// 00518c84: ADD EDX,EAX
// 00518c86: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0xf8] (READ)
// 00518c8a: MOV dword ptr [EDX],EAX
// 00518c8c: FLD float ptr [0x0067d398]
//   XREF to: 0067d398 (READ)
// 00518c92: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0xf4] (READ)
// 00518c96: FLDZ
// 00518c98: MOV dword ptr [EDX + 0x4],EAX
// 00518c9b: XOR EBX,EBX
// 00518c9d: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0xf0] (READ)
// 00518ca1: MOV dword ptr [ESP + 0x18],EBX
//   XREF to: Stack[-0x110] (WRITE)
// 00518ca5: MOV dword ptr [EDX + 0x8],EAX
// 00518ca8: MOV EAX,0x501502f9
// 00518cad: MOV dword ptr [ESP + 0x1c],EBX
//   XREF to: Stack[-0x10c] (WRITE)
// 00518cb1: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0xfc] (WRITE)
// 00518cb5: FCOMPP
// 00518cb7: FNSTSW AX
// 00518cb9: SAHF
// 00518cba: JNC 0x00519240
//   XREF to: 00519240 (CONDITIONAL_JUMP)
// 00518cc0: MOV EAX,dword ptr [ESP + 0xd0]
//   XREF to: Stack[-0x58] (READ)
// 00518cc7: IMUL EDX,dword ptr [EAX],0x4c4
// 00518ccd: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00518cd0: MOV dword ptr [0x02f313ec],EBX
//   XREF to: 02f313ec (WRITE)
// 00518cd6: MOV EAX,dword ptr [EAX + 0x4]
// 00518cd9: MOV EBX,0x1
// 00518cde: ADD EAX,EDX
// 00518ce0: MOV dword ptr [0x02f313ec],EBX
//   XREF to: 02f313ec (WRITE)
// 00518ce6: CMP EAX,0x2f313f0
//   XREF to: 02f313f0 (DATA)
// 00518ceb: JZ 0x00518d07
//   XREF to: 00518d07 (CONDITIONAL_JUMP)
// 00518ced: FLD float ptr [EAX]
// 00518cef: FLD float ptr [EAX + 0x8]
// 00518cf2: MOV EDX,dword ptr [EAX + 0x4]
// 00518cf5: MOV dword ptr [0x02f313f4],EDX
//   XREF to: 02f313f4 (WRITE)
// 00518cfb: FSTP float ptr [0x02f313f8]
//   XREF to: 02f313f8 (WRITE)
// 00518d01: FSTP float ptr [0x02f313f0]
//   XREF to: 02f313f0 (WRITE)
// 00518d07: CMP dword ptr [ESP + 0xec],0x0
//   Label: LAB_00518d07
//   XREF to: Stack[-0x3c] (READ)
// 00518d0f: JLE 0x00518dc8
//   XREF to: 00518dc8 (CONDITIONAL_JUMP)
// 00518d15: MOV EAX,dword ptr [ESP + 0xb4]
//   XREF to: Stack[-0x74] (READ)
// 00518d1c: XOR ESI,ESI
// 00518d1e: MOV dword ptr [ESP + 0xcc],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 00518d25: IMUL EBX,dword ptr [ESI + 0x2f2a1b0],0x4c4
//   Label: LAB_00518d25
//   XREF to: 02f2a1b0 (READ)
//   XREF to: 02f2a1b4 (READ)
// 00518d2f: MOV EDX,dword ptr [ESP + 0xd0]
//   XREF to: Stack[-0x58] (READ)
// 00518d36: IMUL EDX,dword ptr [EDX],0x4c4
// 00518d3c: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00518d3f: MOV EAX,dword ptr [EAX + 0x4]
// 00518d42: ADD EBX,EAX
// 00518d44: ADD EAX,EDX
// 00518d46: FLD float ptr [EAX]
// 00518d48: FADD float ptr [EBX]
// 00518d4a: FST float ptr [ESP + 0x48]
//   XREF to: Stack[-0xe0] (WRITE)
// 00518d4e: FDIV float ptr [0x006379dd]
//   XREF to: 006379dd (READ)
// 00518d54: FLD float ptr [EAX + 0x4]
// 00518d57: FADD float ptr [EBX + 0x4]
// 00518d5a: FSTP float ptr [ESP + 0x4c]
//   XREF to: Stack[-0xdc] (WRITE)
// 00518d5e: FLD float ptr [EAX + 0x8]
// 00518d61: MOV EAX,[0x02f313ec]
//   XREF to: 02f313ec (READ)
// 00518d66: FADD float ptr [EBX + 0x8]
// 00518d69: IMUL EBX,EAX,0xc
// 00518d6c: FLD float ptr [0x006379d9]
//   XREF to: 006379d9 (READ)
// 00518d72: FLD float ptr [ESP + 0x4c]
//   XREF to: Stack[-0xdc] (READ)
// 00518d76: FMUL ST1
// 00518d78: FXCH ST2
// 00518d7a: FST float ptr [ESP + 0x50]
//   XREF to: Stack[-0xd8] (WRITE)
// 00518d7e: FMULP
// 00518d80: FXCH
// 00518d82: FSTP float ptr [ESP + 0x58]
//   XREF to: Stack[-0xd0] (WRITE)
// 00518d86: FSTP float ptr [ESP + 0x5c]
//   XREF to: Stack[-0xcc] (WRITE)
// 00518d8a: INC EAX
// 00518d8b: ADD EBX,0x2f313f0
//   XREF to: 02f313fc (PARAM)
//   XREF to: 02f313f0 (DATA)
// 00518d91: MOV [0x02f313ec],EAX
//   XREF to: 02f313ec (WRITE)
// 00518d96: LEA EAX,[ESP + 0x54]
//   XREF to: Stack[-0xd4] (DATA)
// 00518d9a: FSTP float ptr [ESP + 0x54]
//   XREF to: Stack[-0xd4] (WRITE)
// 00518d9e: CMP EBX,EAX
// 00518da0: JZ 0x00518db6
//   XREF to: 00518db6 (CONDITIONAL_JUMP)
// 00518da2: MOV EAX,dword ptr [ESP + 0x54]
//   XREF to: Stack[-0xd4] (DATA)
// 00518da6: MOV dword ptr [EBX],EAX
//   XREF to: 02f313fc (WRITE)
// 00518da8: MOV EAX,dword ptr [ESP + 0x58]
//   XREF to: Stack[-0xd0] (READ)
// 00518dac: MOV dword ptr [EBX + 0x4],EAX
//   XREF to: 02f31400 (WRITE)
// 00518daf: MOV EAX,dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0xcc] (READ)
// 00518db3: MOV dword ptr [EBX + 0x8],EAX
//   XREF to: 02f31404 (WRITE)
// 00518db6: MOV EAX,dword ptr [ESP + 0xcc]
//   Label: LAB_00518db6
//   XREF to: Stack[-0x5c] (READ)
// 00518dbd: ADD ESI,0x4
// 00518dc0: CMP ESI,EAX
// 00518dc2: JL 0x00518d25
//   XREF to: 00518d25 (CONDITIONAL_JUMP)
// 00518dc8: XOR EDX,EDX
//   Label: LAB_00518dc8
// 00518dca: MOV dword ptr [ESP + 0xe4],EDX
//   XREF to: Stack[-0x44] (WRITE)
// 00518dd1: TEST EDI,EDI
// 00518dd3: JLE 0x00518e32
//   XREF to: 00518e32 (CONDITIONAL_JUMP)
// 00518dd5: MOV ESI,0x2f2a4d0
//   XREF to: 02f2a4d0 (DATA)
// 00518dda: PUSH ESI
//   Label: LAB_00518dda
//   XREF to: 02f2a4d0 (DATA)
//   XREF to: 02f2a55c (DATA)
// 00518ddb: LEA EAX,[ESP + 0x94]
//   XREF to: Stack[-0x98] (DATA)
// 00518de2: PUSH EAX
// 00518de3: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00518de6: PUSH EDX
// 00518de7: CALL shape_meshlod.cpp_FUN_00518870
//   XREF to: 00518870 (UNCONDITIONAL_CALL)
// 00518dec: MOV EDX,dword ptr [0x02f313ec]
//   XREF to: 02f313ec (READ)
// 00518df2: IMUL EBX,EDX,0xc
// 00518df5: ADD ESP,0xc
// 00518df8: INC EDX
// 00518df9: ADD EBX,0x2f313f0
//   XREF to: 02f31408 (PARAM)
//   XREF to: 02f313f0 (DATA)
// 00518dff: MOV dword ptr [0x02f313ec],EDX
//   XREF to: 02f313ec (WRITE)
// 00518e05: CMP EBX,EAX
// 00518e07: JZ 0x00518e19
//   XREF to: 00518e19 (CONDITIONAL_JUMP)
// 00518e09: MOV EDX,dword ptr [EAX]
// 00518e0b: MOV dword ptr [EBX],EDX
//   XREF to: 02f31408 (WRITE)
// 00518e0d: MOV EDX,dword ptr [EAX + 0x4]
// 00518e10: MOV dword ptr [EBX + 0x4],EDX
//   XREF to: 02f3140c (WRITE)
// 00518e13: MOV EDX,dword ptr [EAX + 0x8]
// 00518e16: MOV dword ptr [EBX + 0x8],EDX
//   XREF to: 02f31410 (WRITE)
// 00518e19: MOV ECX,dword ptr [ESP + 0xe4]
//   Label: LAB_00518e19
//   XREF to: Stack[-0x44] (READ)
// 00518e20: INC ECX
// 00518e21: ADD ESI,0x8c
// 00518e27: MOV dword ptr [ESP + 0xe4],ECX
//   XREF to: Stack[-0x44] (WRITE)
// 00518e2e: CMP EDI,ECX
// 00518e30: JG 0x00518dda
//   XREF to: 00518dda (CONDITIONAL_JUMP)
// 00518e32: CMP dword ptr [0x0067d394],0x0
//   Label: LAB_00518e32
//   XREF to: 0067d394 (READ)
// 00518e39: JZ 0x00518f04
//   XREF to: 00518f04 (CONDITIONAL_JUMP)
// 00518e3f: MOV EAX,[0x02f313ec]
//   XREF to: 02f313ec (READ)
// 00518e44: MOV EDX,0x1
// 00518e49: MOV dword ptr [ESP + 0xd4],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 00518e50: CMP EAX,EDX
// 00518e52: JLE 0x00518ef8
//   XREF to: 00518ef8 (CONDITIONAL_JUMP)
// 00518e58: MOV EBX,dword ptr [ESP + 0xb0]
//   XREF to: Stack[-0x78] (READ)
// 00518e5f: IMUL ECX,EAX,0xc
// 00518e62: FLD float ptr [0x02f313f0]
//   Label: LAB_00518e62
//   XREF to: 02f313f0 (READ)
// 00518e68: FADD float ptr [EBX]
//   XREF to: 02f313fc (READ)
//   XREF to: 02f31408 (READ)
// 00518e6a: FST float ptr [ESP + 0x60]
//   XREF to: Stack[-0xc8] (WRITE)
// 00518e6e: FDIV float ptr [0x006379dd]
//   XREF to: 006379dd (READ)
// 00518e74: FLD float ptr [0x02f313f4]
//   XREF to: 02f313f4 (READ)
// 00518e7a: FADD float ptr [EBX + 0x4]
//   XREF to: 02f31400 (READ)
//   XREF to: 02f3140c (READ)
// 00518e7d: FLD float ptr [0x02f313f8]
//   XREF to: 02f313f8 (READ)
// 00518e83: FXCH
// 00518e85: FST float ptr [ESP + 0x64]
//   XREF to: Stack[-0xc4] (WRITE)
// 00518e89: FXCH
// 00518e8b: FADD float ptr [EBX + 0x8]
//   XREF to: 02f31404 (READ)
//   XREF to: 02f31410 (READ)
// 00518e8e: FXCH
// 00518e90: FLD float ptr [0x006379d9]
//   XREF to: 006379d9 (READ)
// 00518e96: FXCH
// 00518e98: FMUL ST1
// 00518e9a: FXCH ST2
// 00518e9c: FST float ptr [ESP + 0x68]
//   XREF to: Stack[-0xc0] (WRITE)
// 00518ea0: FMULP
// 00518ea2: MOV EAX,dword ptr [ESP + 0xd4]
//   XREF to: Stack[-0x54] (READ)
// 00518ea9: MOV ESI,ECX
// 00518eab: ADD ECX,0xc
// 00518eae: INC EAX
// 00518eaf: ADD ESI,0x2f313f0
//   XREF to: 02f313f0 (DATA)
// 00518eb5: MOV dword ptr [ESP + 0xd4],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 00518ebc: LEA EAX,[ESP + 0x6c]
//   XREF to: Stack[-0xbc] (DATA)
// 00518ec0: FXCH
// 00518ec2: FSTP float ptr [ESP + 0x70]
//   XREF to: Stack[-0xb8] (WRITE)
// 00518ec6: FSTP float ptr [ESP + 0x74]
//   XREF to: Stack[-0xb4] (WRITE)
// 00518eca: FSTP float ptr [ESP + 0x6c]
//   XREF to: Stack[-0xbc] (WRITE)
// 00518ece: CMP ESI,EAX
// 00518ed0: JZ 0x00518ee6
//   XREF to: 00518ee6 (CONDITIONAL_JUMP)
// 00518ed2: MOV EAX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[-0xbc] (DATA)
// 00518ed6: MOV dword ptr [ESI],EAX
//   XREF to: 02f31408 (WRITE)
// 00518ed8: MOV EAX,dword ptr [ESP + 0x70]
//   XREF to: Stack[-0xb8] (READ)
// 00518edc: MOV dword ptr [ESI + 0x4],EAX
//   XREF to: 02f3140c (WRITE)
// 00518edf: MOV EAX,dword ptr [ESP + 0x74]
//   XREF to: Stack[-0xb4] (READ)
// 00518ee3: MOV dword ptr [ESI + 0x8],EAX
//   XREF to: 02f31410 (WRITE)
// 00518ee6: MOV ESI,dword ptr [0x02f313ec]
//   Label: LAB_00518ee6
//   XREF to: 02f313ec (READ)
// 00518eec: INC EDX
// 00518eed: ADD EBX,0xc
//   XREF to: 02f31408 (PARAM)
// 00518ef0: CMP EDX,ESI
// 00518ef2: JL 0x00518e62
//   XREF to: 00518e62 (CONDITIONAL_JUMP)
// 00518ef8: MOV EAX,dword ptr [ESP + 0xd4]
//   Label: LAB_00518ef8
//   XREF to: Stack[-0x54] (READ)
// 00518eff: MOV [0x02f313ec],EAX
//   XREF to: 02f313ec (WRITE)
// 00518f04: FLD float ptr [0x0067d398]
//   Label: LAB_00518f04
//   XREF to: 0067d398 (READ)
// 00518f0a: FMUL float ptr [ESP + 0x2c]
//   XREF to: Stack[-0xfc] (READ)
// 00518f0e: FILD dword ptr [0x02f313ec]
//   XREF to: 02f313ec (READ)
// 00518f14: FDIVP
// 00518f16: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00518f19: MOV EDX,dword ptr [EAX + 0x34]
// 00518f1c: PUSH EDX
// 00518f1d: FSTP double ptr [ESP + 0x4]
//   XREF to: Stack[-0x128] (WRITE)
// 00518f21: CALL shape_meshlod.cpp_SamplePointsCheck_FUN_00519b50
//   XREF to: 00519b50 (UNCONDITIONAL_CALL)
// 00518f26: MOV ECX,dword ptr [0x02f313ec]
//   XREF to: 02f313ec (READ)
// 00518f2c: ADD ESP,0x4
// 00518f2f: TEST ECX,ECX
// 00518f31: JLE 0x00518f5a
//   XREF to: 00518f5a (CONDITIONAL_JUMP)
// 00518f33: FLD double ptr [ESP + 0x18]
//   XREF to: Stack[-0x110] (READ)
// 00518f37: FLD double ptr [ESP]
//   XREF to: Stack[-0x128] (DATA)
// 00518f3a: LEA EDX,[ECX*0x8 + 0x0]
// 00518f41: XOR EAX,EAX
// 00518f43: FLD double ptr [EAX + 0x2f326b0]
//   Label: LAB_00518f43
//   XREF to: 02f326b0 (READ)
//   XREF to: 02f326b8 (READ)
// 00518f49: FMUL ST1
// 00518f4b: ADD EAX,0x8
// 00518f4e: FADDP ST2,ST0
// 00518f50: CMP EAX,EDX
// 00518f52: JL 0x00518f43
//   XREF to: 00518f43 (CONDITIONAL_JUMP)
// 00518f54: FSTP ST0
// 00518f56: FSTP double ptr [ESP + 0x18]
//   XREF to: Stack[-0x110] (WRITE)
// 00518f5a: MOV EAX,dword ptr [ESP + 0xd0]
//   Label: LAB_00518f5a
//   XREF to: Stack[-0x58] (READ)
// 00518f61: FLD double ptr [ESP + 0x18]
//   XREF to: Stack[-0x110] (READ)
// 00518f65: FCOMP double ptr [EAX + 0x8]
// 00518f68: FNSTSW AX
// 00518f6a: SAHF
// 00518f6b: JBE 0x00519240
//   XREF to: 00519240 (CONDITIONAL_JUMP)
// 00518f71: MOV EBX,dword ptr [ESP + 0xc4]
//   Label: LAB_00518f71
//   XREF to: Stack[-0x64] (READ)
// 00518f78: INC EBX
// 00518f79: MOV dword ptr [ESP + 0xc4],EBX
//   XREF to: Stack[-0x64] (WRITE)
// 00518f80: CMP EBX,0x4
// 00518f83: JLE 0x00518b7c
//   XREF to: 00518b7c (CONDITIONAL_JUMP)
// 00518f89: MOV EAX,dword ptr [ESP + 0xd0]
//   XREF to: Stack[-0x58] (READ)
// 00518f90: IMUL EDX,dword ptr [EAX],0x4c4
// 00518f96: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00518f99: MOV EAX,dword ptr [EAX + 0x4]
// 00518f9c: ADD EDX,EAX
// 00518f9e: MOV EAX,dword ptr [ESP + 0x84]
//   XREF to: Stack[-0xa4] (READ)
// 00518fa5: MOV dword ptr [EDX],EAX
// 00518fa7: MOV EAX,dword ptr [ESP + 0x88]
//   XREF to: Stack[-0xa0] (READ)
// 00518fae: MOV dword ptr [EDX + 0x4],EAX
// 00518fb1: MOV EAX,dword ptr [ESP + 0x8c]
//   XREF to: Stack[-0x9c] (READ)
// 00518fb8: MOV dword ptr [EDX + 0x8],EAX
// 00518fbb: MOV ESP,EBP
// 00518fbd: POP EBP
// 00518fbe: POP EDI
// 00518fbf: POP ESI
// 00518fc0: POP EBX
// 00518fc1: RET
// 00518fc2: MOV EDX,dword ptr [ESP + 0x100]
//   Label: LAB_00518fc2
//   XREF to: Stack[-0x28] (READ)
// 00518fc9: MOV EAX,dword ptr [ESP + 0x10c]
//   XREF to: Stack[-0x1c] (READ)
// 00518fd0: MOV dword ptr [ESP + 0x10c],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 00518fd7: MOV dword ptr [ESP + 0x100],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 00518fde: JMP 0x00518a20
//   XREF to: 00518a20 (UNCONDITIONAL_JUMP)
// 00518fe3: CMP dword ptr [ESP + 0xec],0xc8
//   Label: LAB_00518fe3
//   XREF to: Stack[-0x3c] (READ)
// 00518fee: JL 0x00519026
//   XREF to: 00519026 (CONDITIONAL_JUMP)
// 00518ff0: PUSH 0x637921
//   XREF to: 00637921 (DATA)
// 00518ff5: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00518ffb: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 00518ffc: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 00519001: ADD ESP,0x8
// 00519004: MOV ESI,0x63793d
//   XREF to: 0063793d (DATA)
// 00519009: MOV EAX,0xbca
// 0051900e: PUSH 0x637952
//   XREF to: 00637952 (DATA)
// 00519013: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 00519019: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 0051901e: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00519023: ADD ESP,0x4
// 00519026: MOV EAX,dword ptr [ESP + 0xf8]
//   Label: LAB_00519026
//   XREF to: Stack[-0x30] (READ)
// 0051902d: MOV EDX,dword ptr [ESP + 0x10c]
//   XREF to: Stack[-0x1c] (READ)
// 00519034: CMP EDX,dword ptr [EAX]
// 00519036: JNZ 0x005190fc
//   XREF to: 005190fc (CONDITIONAL_JUMP)
// 0051903c: MOV EAX,dword ptr [ESP + 0xf8]
//   XREF to: Stack[-0x30] (READ)
// 00519043: MOV EDX,dword ptr [ESP + 0xf0]
//   XREF to: Stack[-0x38] (READ)
// 0051904a: MOV EAX,dword ptr [EAX + 0x4]
// 0051904d: MOV dword ptr [EDX + 0x2f2a1b0],EAX
//   Label: LAB_0051904d
//   XREF to: 02f2a1b0 (DATA)
// 00519053: MOV EBX,dword ptr [ESP + 0xf0]
//   XREF to: Stack[-0x38] (READ)
// 0051905a: MOV ESI,dword ptr [ESP + 0xec]
//   XREF to: Stack[-0x3c] (READ)
// 00519061: MOV EAX,dword ptr [ESP + 0xf8]
//   XREF to: Stack[-0x30] (READ)
// 00519068: XOR ECX,ECX
// 0051906a: ADD EBX,0x4
// 0051906d: INC ESI
// 0051906e: MOV dword ptr [ESP + 0x108],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 00519075: MOV EDX,dword ptr [EAX + 0x24]
// 00519078: MOV dword ptr [ESP + 0xf0],EBX
//   XREF to: Stack[-0x38] (WRITE)
// 0051907f: MOV dword ptr [ESP + 0xec],ESI
//   XREF to: Stack[-0x3c] (WRITE)
// 00519086: TEST EDX,EDX
// 00519088: JLE 0x00518aa6
//   XREF to: 00518aa6 (CONDITIONAL_JUMP)
// 0051908e: MOV dword ptr [ESP + 0x104],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00519095: IMUL ESI,EDI,0x8c
// 0051909b: MOV EAX,dword ptr [ESP + 0x104]
//   Label: LAB_0051909b
//   XREF to: Stack[-0x24] (READ)
// 005190a2: MOV EAX,dword ptr [EAX + 0x28]
// 005190a5: MOV dword ptr [ESP + 0xfc],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 005190ac: IMUL EAX,EAX,0x8c
// 005190b2: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005190b5: MOV EBX,dword ptr [EBX + 0xc]
// 005190b8: ADD EBX,EAX
// 005190ba: MOV EDX,dword ptr [0x02f33334]
//   XREF to: 02f33334 (READ)
// 005190c0: CMP EDX,dword ptr [EBX + 0x84]
// 005190c6: JNZ 0x00519111
//   XREF to: 00519111 (CONDITIONAL_JUMP)
// 005190c8: MOV ECX,dword ptr [ESP + 0x104]
//   Label: LAB_005190c8
//   XREF to: Stack[-0x24] (READ)
// 005190cf: MOV EBX,dword ptr [ESP + 0x108]
//   XREF to: Stack[-0x20] (READ)
// 005190d6: MOV EDX,dword ptr [ESP + 0xf8]
//   XREF to: Stack[-0x30] (READ)
// 005190dd: ADD ECX,0x4
// 005190e0: INC EBX
// 005190e1: MOV dword ptr [ESP + 0x104],ECX
//   XREF to: Stack[-0x24] (WRITE)
// 005190e8: MOV ECX,dword ptr [EDX + 0x24]
// 005190eb: MOV dword ptr [ESP + 0x108],EBX
//   XREF to: Stack[-0x20] (WRITE)
// 005190f2: CMP EBX,ECX
// 005190f4: JGE 0x00518aa6
//   XREF to: 00518aa6 (CONDITIONAL_JUMP)
// 005190fa: JMP 0x0051909b
//   XREF to: 0051909b (UNCONDITIONAL_JUMP)
// 005190fc: MOV EAX,dword ptr [ESP + 0xf8]
//   Label: LAB_005190fc
//   XREF to: Stack[-0x30] (READ)
// 00519103: MOV EDX,dword ptr [ESP + 0xf0]
//   XREF to: Stack[-0x38] (READ)
// 0051910a: MOV EAX,dword ptr [EAX]
// 0051910c: JMP 0x0051904d
//   XREF to: 0051904d (UNCONDITIONAL_JUMP)
// 00519111: MOV EAX,[0x02f33338]
//   Label: LAB_00519111
//   XREF to: 02f33338 (READ)
// 00519116: MOV dword ptr [EBX + 0x88],EAX
// 0051911c: MOV ECX,dword ptr [ESP + 0x100]
//   XREF to: Stack[-0x28] (READ)
// 00519123: MOV EAX,dword ptr [EBX + 0x10]
// 00519126: MOV dword ptr [EBX + 0x84],EDX
// 0051912c: CMP EAX,ECX
// 0051912e: JZ 0x005190c8
//   XREF to: 005190c8 (CONDITIONAL_JUMP)
// 00519130: CMP ECX,dword ptr [EBX + 0x14]
// 00519133: JZ 0x005190c8
//   XREF to: 005190c8 (CONDITIONAL_JUMP)
// 00519135: CMP ECX,dword ptr [EBX + 0x18]
// 00519138: JZ 0x005190c8
//   XREF to: 005190c8 (CONDITIONAL_JUMP)
// 0051913a: CMP EDI,0xc8
// 00519140: JL 0x00519178
//   XREF to: 00519178 (CONDITIONAL_JUMP)
// 00519142: PUSH 0x63796e
//   XREF to: 0063796e (DATA)
// 00519147: MOV EAX,[0x00678a60]
//   XREF to: 00678a60 (READ)
// 0051914c: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 0051914d: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 00519152: ADD ESP,0x8
// 00519155: MOV EDX,0x63798a
//   XREF to: 0063798a (DATA)
// 0051915a: MOV ECX,0xbf4
// 0051915f: PUSH 0x63799f
//   XREF to: 0063799f (DATA)
// 00519164: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 0051916a: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 00519170: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00519175: ADD ESP,0x4
// 00519178: MOV EAX,dword ptr [ESP + 0x10c]
//   Label: LAB_00519178
//   XREF to: Stack[-0x1c] (READ)
// 0051917f: MOV dword ptr [ESI + 0x2f2a4e0],EAX
//   XREF to: 02f2a4e0 (WRITE)
// 00519185: MOV EDX,dword ptr [ESP + 0x10c]
//   XREF to: Stack[-0x1c] (READ)
// 0051918c: CMP EDX,dword ptr [EBX + 0x10]
// 0051918f: JNZ 0x005191bc
//   XREF to: 005191bc (CONDITIONAL_JUMP)
// 00519191: MOV EAX,dword ptr [EBX + 0x14]
// 00519194: MOV dword ptr [ESI + 0x2f2a4e4],EAX
//   XREF to: 02f2a4e4 (WRITE)
// 0051919a: MOV EAX,dword ptr [EBX + 0x18]
// 0051919d: MOV dword ptr [ESI + 0x2f2a4e8],EAX
//   Label: LAB_0051919d
//   XREF to: 02f2a4e8 (WRITE)
// 005191a3: ADD ESI,0x8c
//   Label: LAB_005191a3
// 005191a9: MOV EAX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x2c] (READ)
// 005191b0: INC EDI
// 005191b1: MOV dword ptr [ESI + 0x2f2a4c8],EAX
//   XREF to: 02f2a554 (WRITE)
// 005191b7: JMP 0x005190c8
//   XREF to: 005190c8 (UNCONDITIONAL_JUMP)
// 005191bc: CMP EDX,dword ptr [EBX + 0x14]
//   Label: LAB_005191bc
// 005191bf: JNZ 0x005191cf
//   XREF to: 005191cf (CONDITIONAL_JUMP)
// 005191c1: MOV EAX,dword ptr [EBX + 0x18]
// 005191c4: MOV dword ptr [ESI + 0x2f2a4e4],EAX
//   XREF to: 02f2a4e4 (WRITE)
// 005191ca: MOV EAX,dword ptr [EBX + 0x10]
// 005191cd: JMP 0x0051919d
//   XREF to: 0051919d (UNCONDITIONAL_JUMP)
// 005191cf: CMP EDX,dword ptr [EBX + 0x18]
//   Label: LAB_005191cf
// 005191d2: JNZ 0x005191e2
//   XREF to: 005191e2 (CONDITIONAL_JUMP)
// 005191d4: MOV EAX,dword ptr [EBX + 0x10]
// 005191d7: MOV dword ptr [ESI + 0x2f2a4e4],EAX
//   XREF to: 02f2a4e4 (WRITE)
// 005191dd: MOV EAX,dword ptr [EBX + 0x14]
// 005191e0: JMP 0x0051919d
//   XREF to: 0051919d (UNCONDITIONAL_JUMP)
// 005191e2: MOV ECX,0x6379bb
//   Label: LAB_005191e2
//   XREF to: 006379bb (DATA)
// 005191e7: MOV EBX,0xc06
// 005191ec: PUSH 0x6379d0
//   XREF to: 006379d0 (DATA)
// 005191f1: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 005191f7: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 005191fd: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00519202: ADD ESP,0x4
// 00519205: JMP 0x005191a3
//   XREF to: 005191a3 (UNCONDITIONAL_JUMP)
// 00519207: CMP dword ptr [ESP + 0xc4],0x0
//   Label: LAB_00519207
//   XREF to: Stack[-0x64] (READ)
// 0051920f: JZ 0x0051921f
//   XREF to: 0051921f (CONDITIONAL_JUMP)
// 00519211: CMP dword ptr [ESP + 0xa4],0x0
//   XREF to: Stack[-0x84] (READ)
// 00519219: JNZ 0x00518f71
//   XREF to: 00518f71 (CONDITIONAL_JUMP)
// 0051921f: CMP dword ptr [ESP + 0xc4],0x4
//   Label: LAB_0051921f
//   XREF to: Stack[-0x64] (READ)
// 00519227: JZ 0x00518b89
//   XREF to: 00518b89 (CONDITIONAL_JUMP)
// 0051922d: CMP dword ptr [ESP + 0xa8],0x0
//   XREF to: Stack[-0x80] (READ)
// 00519235: JNZ 0x00518f71
//   XREF to: 00518f71 (CONDITIONAL_JUMP)
// 0051923b: JMP 0x00518b89
//   XREF to: 00518b89 (UNCONDITIONAL_JUMP)
// 00519240: XOR ESI,ESI
//   Label: LAB_00519240
// 00519242: TEST EDI,EDI
// 00519244: JLE 0x005192af
//   XREF to: 005192af (CONDITIONAL_JUMP)
// 00519246: MOV EBX,dword ptr [ESP + 0xac]
//   XREF to: Stack[-0x7c] (READ)
//   XREF to: 02f2a514 (PARAM)
// 0051924d: IMUL EAX,ESI,0x8c
//   Label: LAB_0051924d
// 00519253: MOV dword ptr [ESP + 0x110],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0051925a: MOV EAX,0x2f2a4d0
//   XREF to: 02f2a4d0 (DATA)
// 0051925f: ADD EAX,dword ptr [ESP + 0x110]
//   XREF to: Stack[-0x18] (READ)
//   XREF to: 02f2a55c (PARAM)
// 00519266: PUSH EAX
//   XREF to: 02f2a55c (DATA)
// 00519267: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0051926a: PUSH ECX
// 0051926b: CALL shape_meshlod.cpp_FUN_00519830
//   XREF to: 00519830 (UNCONDITIONAL_CALL)
// 00519270: ADD ESP,0x8
// 00519273: MOV EAX,dword ptr [ESP + 0x110]
//   XREF to: Stack[-0x18] (READ)
// 0051927a: IMUL EAX,dword ptr [EAX + 0x2f2a554],0x8c
//   XREF to: 02f2a554 (DATA)
// 00519284: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00519287: MOV EDX,dword ptr [EDX + 0xc]
// 0051928a: FLD float ptr [EBX + 0x4]
//   XREF to: 02f2a518 (READ)
// 0051928d: FMUL float ptr [EDX + EAX*0x1 + 0x48]
// 00519291: FLD float ptr [EBX]
//   XREF to: 02f2a514 (READ)
// 00519293: FMUL float ptr [EDX + EAX*0x1 + 0x44]
// 00519297: FADDP
// 00519299: FLD float ptr [EBX + 0x8]
//   XREF to: 02f2a51c (READ)
// 0051929c: FMUL float ptr [EDX + EAX*0x1 + 0x4c]
// 005192a0: FADDP
// 005192a2: FLDZ
// 005192a4: FCOMPP
// 005192a6: FNSTSW AX
// 005192a8: SAHF
// 005192a9: JBE 0x005193ca
//   XREF to: 005193ca (CONDITIONAL_JUMP)
// 005192af: CMP ESI,EDI
//   Label: LAB_005192af
// 005192b1: JL 0x00518f71
//   XREF to: 00518f71 (CONDITIONAL_JUMP)
// 005192b7: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005192ba: CMP dword ptr [EAX + 0x5c],0x0
// 005192be: JLE 0x0051938f
//   XREF to: 0051938f (CONDITIONAL_JUMP)
// 005192c4: FLD float ptr [0x0067d398]
//   XREF to: 0067d398 (READ)
// 005192ca: FLD1
// 005192cc: FCOMPP
// 005192ce: FNSTSW AX
// 005192d0: SAHF
// 005192d1: JBE 0x0051938f
//   XREF to: 0051938f (CONDITIONAL_JUMP)
// 005192d7: XOR EBX,EBX
// 005192d9: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005192dc: MOV dword ptr [ESP + 0x28],EBX
//   XREF to: Stack[-0x100] (WRITE)
// 005192e0: MOV dword ptr [ESP + 0xe8],EBX
//   XREF to: Stack[-0x40] (WRITE)
// 005192e7: MOV dword ptr [ESP + 0x8],EBX
//   XREF to: Stack[-0x120] (WRITE)
// 005192eb: MOV ECX,dword ptr [EAX + 0x5c]
// 005192ee: MOV dword ptr [ESP + 0xc],EBX
//   XREF to: Stack[-0x11c] (WRITE)
// 005192f2: TEST ECX,ECX
// 005192f4: JLE 0x0051935d
//   XREF to: 0051935d (CONDITIONAL_JUMP)
// 005192f6: MOV dword ptr [ESP + 0xdc],EBX
//   XREF to: Stack[-0x4c] (WRITE)
// 005192fd: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_005192fd
//   XREF to: Stack[0x4] (READ)
// 00519300: MOV EDX,dword ptr [ESP + 0xdc]
//   XREF to: Stack[-0x4c] (READ)
// 00519307: MOV EAX,dword ptr [EAX + 0x60]
// 0051930a: ADD EDX,EAX
// 0051930c: MOV dword ptr [ESP + 0xf4],EDX
//   XREF to: Stack[-0x34] (WRITE)
// 00519313: IMUL EAX,dword ptr [EDX + 0xc],0x8c
// 0051931a: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0051931d: MOV EDX,dword ptr [EDX + 0xc]
// 00519320: MOV ECX,dword ptr [0x02f33338]
//   XREF to: 02f33338 (READ)
// 00519326: CMP ECX,dword ptr [EDX + EAX*0x1 + 0x88]
// 0051932d: JZ 0x005193de
//   XREF to: 005193de (CONDITIONAL_JUMP)
// 00519333: MOV EBX,dword ptr [ESP + 0xdc]
//   Label: LAB_00519333
//   XREF to: Stack[-0x4c] (READ)
// 0051933a: MOV ESI,dword ptr [ESP + 0xe8]
//   XREF to: Stack[-0x40] (READ)
// 00519341: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00519344: ADD EBX,0x1c
// 00519347: INC ESI
// 00519348: MOV ECX,dword ptr [EDX + 0x5c]
// 0051934b: MOV dword ptr [ESP + 0xdc],EBX
//   XREF to: Stack[-0x4c] (WRITE)
// 00519352: MOV dword ptr [ESP + 0xe8],ESI
//   XREF to: Stack[-0x40] (WRITE)
// 00519359: CMP ESI,ECX
// 0051935b: JL 0x005192fd
//   XREF to: 005192fd (CONDITIONAL_JUMP)
// 0051935d: MOV EBX,dword ptr [ESP + 0x28]
//   Label: LAB_0051935d
//   XREF to: Stack[-0x100] (READ)
// 00519361: TEST EBX,EBX
// 00519363: JLE 0x0051938f
//   XREF to: 0051938f (CONDITIONAL_JUMP)
// 00519365: FLD float ptr [0x0067d398]
//   XREF to: 0067d398 (READ)
// 0051936b: FLD1
// 0051936d: FSUBRP
// 0051936f: FMUL double ptr [ESP + 0x8]
//   XREF to: Stack[-0x120] (READ)
// 00519373: FMUL float ptr [ESP + 0x2c]
//   XREF to: Stack[-0xfc] (READ)
// 00519377: MOV dword ptr [ESP + 0x110],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 0051937e: FILD dword ptr [ESP + 0x110]
//   XREF to: Stack[-0x18] (READ)
// 00519385: FDIVP
// 00519387: FADD double ptr [ESP + 0x18]
//   XREF to: Stack[-0x110] (READ)
// 0051938b: FSTP double ptr [ESP + 0x18]
//   XREF to: Stack[-0x110] (WRITE)
// 0051938f: MOV EAX,dword ptr [ESP + 0xd0]
//   Label: LAB_0051938f
//   XREF to: Stack[-0x58] (READ)
// 00519396: FLD double ptr [ESP + 0x18]
//   XREF to: Stack[-0x110] (READ)
// 0051939a: FCOMP double ptr [EAX + 0x8]
// 0051939d: FNSTSW AX
// 0051939f: SAHF
// 005193a0: JNC 0x00518f71
//   XREF to: 00518f71 (CONDITIONAL_JUMP)
// 005193a6: MOV EDX,dword ptr [ESP + 0xd0]
//   XREF to: Stack[-0x58] (READ)
// 005193ad: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x110] (READ)
// 005193b1: MOV dword ptr [EDX + 0x8],EAX
// 005193b4: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x10c] (READ)
// 005193b8: MOV dword ptr [EDX + 0xc],EAX
// 005193bb: MOV EAX,dword ptr [ESP + 0xc0]
//   XREF to: Stack[-0x68] (READ)
// 005193c2: MOV dword ptr [EDX + 0x10],EAX
// 005193c5: JMP 0x00518f71
//   XREF to: 00518f71 (UNCONDITIONAL_JUMP)
// 005193ca: INC ESI
//   Label: LAB_005193ca
// 005193cb: ADD EBX,0x8c
//   XREF to: 02f2a5a0 (PARAM)
// 005193d1: CMP ESI,EDI
// 005193d3: JL 0x0051924d
//   XREF to: 0051924d (CONDITIONAL_JUMP)
// 005193d9: JMP 0x005192af
//   XREF to: 005192af (UNCONDITIONAL_JUMP)
// 005193de: MOV EBX,0x39a08ce9
//   Label: LAB_005193de
// 005193e3: MOV ESI,0x46293e59
// 005193e8: MOV dword ptr [ESP + 0x10],EBX
//   XREF to: Stack[-0x118] (WRITE)
// 005193ec: MOV dword ptr [ESP + 0x14],ESI
//   XREF to: Stack[-0x114] (WRITE)
// 005193f0: XOR EBX,EBX
// 005193f2: TEST EDI,EDI
// 005193f4: JLE 0x0051944d
//   XREF to: 0051944d (CONDITIONAL_JUMP)
// 005193f6: MOV ESI,0x2f2a4d0
//   XREF to: 02f2a4d0 (DATA)
// 005193fb: PUSH ESI
//   Label: LAB_005193fb
//   XREF to: 02f2a4d0 (DATA)
//   XREF to: 02f2a55c (DATA)
// 005193fc: MOV EDX,dword ptr [ESP + 0xf8]
//   XREF to: Stack[-0x34] (READ)
// 00519403: PUSH EDX
// 00519404: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00519407: PUSH ECX
// 00519408: CALL shape_meshlod.cpp_FUN_0051a400
//   XREF to: 0051a400 (UNCONDITIONAL_CALL)
// 0051940d: MOV dword ptr [ESP + 0xa8],EAX
//   XREF to: Stack[-0x8c] (WRITE)
// 00519414: MOV dword ptr [ESP + 0xac],EDX
//   XREF to: Stack[-0x88] (WRITE)
// 0051941b: FLD double ptr [ESP + 0xa8]
//   XREF to: Stack[-0x8c] (READ)
// 00519422: ADD ESP,0xc
// 00519425: FST double ptr [ESP + 0x20]
//   XREF to: Stack[-0x108] (WRITE)
// 00519429: FCOMP double ptr [ESP + 0x10]
//   XREF to: Stack[-0x118] (READ)
// 0051942d: FNSTSW AX
// 0051942f: SAHF
// 00519430: JNC 0x00519442
//   XREF to: 00519442 (CONDITIONAL_JUMP)
// 00519432: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x108] (READ)
// 00519436: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x118] (WRITE)
// 0051943a: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x104] (READ)
// 0051943e: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x114] (WRITE)
// 00519442: INC EBX
//   Label: LAB_00519442
// 00519443: ADD ESI,0x8c
// 00519449: CMP EBX,EDI
// 0051944b: JL 0x005193fb
//   XREF to: 005193fb (CONDITIONAL_JUMP)
// 0051944d: MOV EAX,dword ptr [ESP + 0xf4]
//   Label: LAB_0051944d
//   XREF to: Stack[-0x34] (READ)
// 00519454: FLD float ptr [EAX + 0x18]
// 00519457: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x100] (READ)
// 0051945b: FMUL double ptr [ESP + 0x10]
//   XREF to: Stack[-0x118] (READ)
// 0051945f: INC EAX
// 00519460: FADD double ptr [ESP + 0x8]
//   XREF to: Stack[-0x120] (READ)
// 00519464: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x100] (WRITE)
// 00519468: FSTP double ptr [ESP + 0x8]
//   XREF to: Stack[-0x120] (WRITE)
// 0051946c: JMP 0x00519333
//   XREF to: 00519333 (UNCONDITIONAL_JUMP)
