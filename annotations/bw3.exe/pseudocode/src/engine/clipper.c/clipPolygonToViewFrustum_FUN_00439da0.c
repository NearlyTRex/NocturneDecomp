// Name: engine_clipper.c_clipPolygonToViewFrustum_FUN_00439da0
// Address: 00439da0
// Address Range: [[00439da0, 0043a832]]
// Convention: __cdecl
// Signature: int __cdecl engine_clipper_c_clipPolygonToViewFrustum_FUN_00439da0(int vertex_count,int *vertex_indices)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0043a66b) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_clipper_c_clipPolygonToViewFrustum_FUN_00439da0(int vertex_count,int *vertex_indices)

{
  longlong lVar1;
  int *piVar2;
  byte bVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  int *piVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *plVar16;
  bool bVar17;
  byte bVar18;
  int local_150 [31];
  int aiStack_d4 [33];
  uint local_50;
  byte *local_4c;
  int local_48;
  int local_44;
  uint local_40;
  int local_3c;
  uint local_38;
  int local_34;
  uint local_30;
  int local_2c;
  int local_28;
  uint *local_24;
  int *local_20;
  int *local_1c;
  longlong *local_18;
  int local_14;
  
  bVar18 = 0;
  uVar7 = 0;
  local_50 = 0xffffffff;
  iVar6 = 0;
  piVar5 = vertex_indices;
  if (0 < vertex_count) {
    do {
      if (((&DAT_0060b024)[*piVar5 * 0xc] & 0x80000000) != 0) {
        uVar7 = uVar7 + 1;
      }
      iVar6 = iVar6 + 1;
      local_50 = local_50 & (&DAT_0060b024)[*piVar5 * 0xc];
      piVar5 = piVar5 + 1;
    } while (iVar6 < vertex_count);
  }
  if ((uVar7 == vertex_count) && ((char)local_50 != '\0')) {
    DAT_007e3e88 = uVar7 ^ vertex_count;
  }
  else {
    if (uVar7 == 0) {
      if ((_DAT_01c6cee8 == 0) || (DAT_007303f4 != 0)) {
        DAT_007e3e88 = vertex_count;
        local_14 = 0;
        if (0 < vertex_count) {
          plVar9 = (longlong *)&DAT_007e3e8c;
          do {
            iVar6 = 0x30;
            plVar16 = (longlong *)(&DAT_0060b014 + *vertex_indices * 0xc);
            plVar14 = plVar9;
            if (((uint)plVar9 & 7) != 0) {
              plVar14 = (longlong *)((int)plVar9 + 4);
              plVar16 = (longlong *)(&DAT_0060b018 + *vertex_indices * 0xc);
              *(int *)plVar9 = (int)*(longlong *)(&DAT_0060b014 + *vertex_indices * 0xc);
              iVar6 = 0x2c;
            }
            while (7 < iVar6) {
              lVar1 = *plVar16;
              plVar16 = plVar16 + 1;
              *plVar14 = (longlong)ROUND((float10)lVar1);
              plVar14 = plVar14 + 1;
              iVar6 = iVar6 + -8;
            }
            if (iVar6 != 0 && -9 < iVar6 + -8) {
              *(int *)plVar14 = (int)*plVar16;
              if (4 < iVar6) {
                *(uint *)((int)plVar14 + 4) = *(uint *)((int)plVar16 + 4);
              }
            }
            vertex_indices = vertex_indices + 1;
            local_14 = local_14 + 1;
            plVar9 = plVar9 + 6;
          } while (local_14 < vertex_count);
        }
        return 0;
      }
      iVar6 = 0;
      if (0 < vertex_count) {
        do {
          iVar8 = *vertex_indices;
          iVar6 = iVar6 + 1;
          vertex_indices = vertex_indices + 1;
          *(uint **)(iVar6 * 4 + 0x7e4488) = &DAT_0060b014 + iVar8 * 0xc;
        } while (iVar6 < vertex_count);
      }
      if (DAT_007303fc != 0) {
        if (vertex_count < 4) {
          iVar6 = engine_prim_c_calculateTriangleWindingOrder_FUN_00515ac0
                            (DAT_007e448c,DAT_007e4490);
          bVar17 = iVar6 == 0;
        }
        else {
          local_28 = vertex_count + -2;
          iVar8 = 0;
          iVar6 = local_28 * 4;
          iVar12 = 0;
          if (0 < iVar6) {
            do {
              iVar4 = engine_prim_c_calculateTriangleWindingOrder_FUN_00515ac0
                                (DAT_007e448c,*(uint *)((int)&DAT_007e4490 + iVar8));
              if (iVar4 == 0) {
                iVar12 = iVar12 + 1;
              }
              iVar8 = iVar8 + 4;
            } while (iVar8 < iVar6);
          }
          bVar17 = iVar12 == local_28;
        }
        if (bVar17) {
          return 1;
        }
      }
      _DAT_01ed3198 = _DAT_01ed3198 + vertex_count + -2;
      engine_special_cpp_drawPolygon2_FUN_00565c40(&DAT_007e448c,vertex_count);
      return 1;
    }
    iVar6 = 0;
    if (0 < vertex_count) {
      do {
        iVar8 = *vertex_indices;
        iVar6 = iVar6 + 1;
        vertex_indices = vertex_indices + 1;
        aiStack_d4[iVar6] = (int)(&DAT_0060b014 + iVar8 * 0xc);
      } while (iVar6 < vertex_count);
    }
    DAT_007e3e88 = vertex_count;
    local_48 = vertex_count;
    uVar7 = 0;
    DAT_007e4d50 = 0;
    local_44 = 0;
    local_4c = (byte *)local_150;
    if (0 < vertex_count) {
      piVar5 = aiStack_d4;
      piVar10 = (int *)aiStack_d4[vertex_count];
      do {
        iVar6 = DAT_007e4d50;
        piVar5 = piVar5 + 1;
        piVar2 = (int *)*piVar5;
        bVar3 = piVar10[2] <= *piVar10;
        if (piVar2[2] <= *piVar2) {
          bVar3 = bVar3 | 2;
        }
        switch(bVar3) {
        case 0:
          iVar6 = uVar7 * 4;
          uVar7 = uVar7 + 1;
          *(int **)(local_4c + iVar6) = piVar10;
          break;
        case 1:
          if (0xb < DAT_007e4d50) {
            _DAT_01d71de0 = "..\\engine\\clipper.c";
            _DAT_01d71de4 = 0x5e;
            core_main_c_FUN_004e4330();
          }
          iVar8 = DAT_007e4d50 * 0x30;
          DAT_007e4d50 = DAT_007e4d50 + 1;
          iVar6 = uVar7 * 4;
          uVar7 = uVar7 + 1;
          *(byte **)(local_4c + iVar6) = &DAT_007e4b10 + iVar8;
          engine_clipper_c_interpolateVertexRightClip_FUN_004390c0(piVar2,piVar10);
          break;
        case 2:
          iVar8 = uVar7 + 1;
          *(int **)(local_4c + uVar7 * 4) = piVar10;
          if (0xb < iVar6) {
            _DAT_01d71de0 = "..\\engine\\clipper.c";
            _DAT_01d71de4 = 0x5e;
            core_main_c_FUN_004e4330();
          }
          iVar6 = DAT_007e4d50 * 0x30;
          DAT_007e4d50 = DAT_007e4d50 + 1;
          uVar7 = uVar7 + 2;
          *(byte **)(local_4c + iVar8 * 4) = &DAT_007e4b10 + iVar6;
          engine_clipper_c_interpolateVertexRightClip_FUN_004390c0(piVar10,piVar2);
        }
        local_44 = local_44 + 1;
        piVar10 = piVar2;
      } while (local_44 < local_48);
    }
    DAT_007e3e88 = uVar7;
    if (2 < (int)uVar7) {
      uVar11 = 0;
      local_40 = uVar7;
      local_3c = 0;
      piVar5 = (int *)local_150[uVar7 - 1];
      piVar10 = local_150;
      if (0 < (int)uVar7) {
        do {
          local_24 = piVar10;
          piVar10 = (int *)*local_24;
          bVar3 = *piVar5 <= -piVar5[2];
          if (*piVar10 <= -piVar10[2]) {
            bVar3 = bVar3 | 2;
          }
          switch(bVar3) {
          case 0:
            uVar11 = uVar11 + 1;
            aiStack_d4[uVar11] = (int)piVar5;
            break;
          case 1:
            if (0xb < DAT_007e4d50) {
              _DAT_01d71de0 = "..\\engine\\clipper.c";
              _DAT_01d71de4 = 0x5e;
              core_main_c_FUN_004e4330();
            }
            iVar6 = DAT_007e4d50 * 0x30;
            uVar11 = uVar11 + 1;
            DAT_007e4d50 = DAT_007e4d50 + 1;
            aiStack_d4[uVar11] = (int)(&DAT_007e4b10 + iVar6);
            engine_clipper_c_interpolateVertexLeftClip_FUN_004391c0(piVar10,piVar5);
            break;
          case 2:
            aiStack_d4[uVar11 + 1] = (int)piVar5;
            if (0xb < DAT_007e4d50) {
              _DAT_01d71de0 = "..\\engine\\clipper.c";
              _DAT_01d71de4 = 0x5e;
              core_main_c_FUN_004e4330();
            }
            iVar6 = DAT_007e4d50 * 0x30;
            uVar11 = uVar11 + 2;
            DAT_007e4d50 = DAT_007e4d50 + 1;
            aiStack_d4[uVar11] = (int)(&DAT_007e4b10 + iVar6);
            engine_clipper_c_interpolateVertexLeftClip_FUN_004391c0(piVar5,piVar10);
          }
          local_3c = local_3c + 1;
          local_24 = local_24 + 1;
          piVar5 = piVar10;
          piVar10 = local_24;
        } while (local_3c < (int)local_40);
      }
      DAT_007e3e88 = uVar11;
      if (2 < (int)uVar11) {
        uVar7 = 0;
        local_38 = uVar11;
        local_34 = 0;
        if (0 < (int)uVar11) {
          local_20 = aiStack_d4 + 1;
          uVar13 = uVar7;
          iVar6 = aiStack_d4[uVar11];
          do {
            iVar8 = *local_20;
            bVar3 = *(int *)(iVar6 + 8) <= *(int *)(iVar6 + 4);
            if (*(int *)(iVar8 + 8) <= *(int *)(iVar8 + 4)) {
              bVar3 = bVar3 | 2;
            }
            uVar7 = uVar13;
            switch(bVar3) {
            case 0:
              uVar7 = uVar13 + 1;
              local_150[uVar13] = iVar6;
              break;
            case 1:
              if (0xb < DAT_007e4d50) {
                _DAT_01d71de0 = "..\\engine\\clipper.c";
                _DAT_01d71de4 = 0x5e;
                core_main_c_FUN_004e4330();
              }
              iVar12 = DAT_007e4d50 * 0x30;
              uVar7 = uVar13 + 1;
              DAT_007e4d50 = DAT_007e4d50 + 1;
              local_150[uVar13] = (int)(&DAT_007e4b10 + iVar12);
              engine_clipper_c_interpolateVertexTopClip_FUN_004392c0(iVar8,iVar6);
              break;
            case 2:
              local_150[uVar13] = iVar6;
              if (0xb < DAT_007e4d50) {
                _DAT_01d71de0 = "..\\engine\\clipper.c";
                _DAT_01d71de4 = 0x5e;
                core_main_c_FUN_004e4330();
              }
              iVar12 = DAT_007e4d50 * 0x30;
              uVar7 = uVar13 + 2;
              DAT_007e4d50 = DAT_007e4d50 + 1;
              local_150[uVar13 + 1] = (int)(&DAT_007e4b10 + iVar12);
              engine_clipper_c_interpolateVertexTopClip_FUN_004392c0(iVar6,iVar8);
            }
            local_34 = local_34 + 1;
            local_20 = local_20 + 1;
            uVar13 = uVar7;
            iVar6 = iVar8;
          } while (local_34 < (int)local_38);
        }
        DAT_007e3e88 = uVar7;
        if (2 < (int)uVar7) {
          uVar11 = 0;
          local_30 = uVar7;
          local_2c = 0;
          iVar6 = local_150[uVar7 - 1];
          piVar5 = local_150;
          if (0 < (int)uVar7) {
            do {
              local_1c = piVar5;
              iVar8 = *local_1c;
              bVar3 = *(int *)(iVar6 + 4) <= -*(int *)(iVar6 + 8);
              if (*(int *)(iVar8 + 4) <= -*(int *)(iVar8 + 8)) {
                bVar3 = bVar3 | 2;
              }
              switch(bVar3) {
              case 0:
                uVar11 = uVar11 + 1;
                aiStack_d4[uVar11] = iVar6;
                break;
              case 1:
                if (0xb < DAT_007e4d50) {
                  _DAT_01d71de0 = "..\\engine\\clipper.c";
                  _DAT_01d71de4 = 0x5e;
                  core_main_c_FUN_004e4330();
                }
                iVar12 = DAT_007e4d50 * 0x30;
                uVar11 = uVar11 + 1;
                DAT_007e4d50 = DAT_007e4d50 + 1;
                aiStack_d4[uVar11] = (int)(&DAT_007e4b10 + iVar12);
                engine_clipper_c_interpolateVertexBottomClip_FUN_004393c0(iVar8,iVar6);
                break;
              case 2:
                aiStack_d4[uVar11 + 1] = iVar6;
                if (0xb < DAT_007e4d50) {
                  _DAT_01d71de0 = "..\\engine\\clipper.c";
                  _DAT_01d71de4 = 0x5e;
                  core_main_c_FUN_004e4330();
                }
                uVar11 = uVar11 + 2;
                aiStack_d4[uVar11] = (int)(&DAT_007e4b10 + DAT_007e4d50 * 0x30);
                DAT_007e4d50 = DAT_007e4d50 + 1;
                engine_clipper_c_interpolateVertexBottomClip_FUN_004393c0(iVar6,iVar8);
              }
              local_2c = local_2c + 1;
              local_1c = local_1c + 1;
              iVar6 = iVar8;
              piVar5 = local_1c;
            } while (local_2c < (int)local_30);
          }
          DAT_007e3e88 = uVar11;
          if (2 < (int)uVar11) {
            iVar6 = 0;
            if (0 < (int)uVar11) {
              plVar9 = (longlong *)&DAT_007e3e8c;
              iVar8 = 0;
              do {
                plVar16 = *(longlong **)((int)aiStack_d4 + iVar8 + 4);
                iVar12 = 0x30;
                plVar14 = plVar16;
                plVar15 = plVar9;
                if (((uint)plVar9 & 7) != 0) {
                  plVar15 = (longlong *)((int)plVar9 + (uint)bVar18 * -8 + 4);
                  plVar14 = (longlong *)((int)plVar16 + (uint)bVar18 * -8 + 4);
                  *(int *)plVar9 = (int)*plVar16;
                  iVar12 = 0x2c;
                }
                while (7 < iVar12) {
                  lVar1 = *plVar14;
                  plVar14 = plVar14 + 1;
                  *plVar15 = (longlong)ROUND((float10)lVar1);
                  plVar15 = plVar15 + 1;
                  iVar12 = iVar12 + -8;
                }
                if (iVar12 != 0 && -9 < iVar12 + -8) {
                  *(int *)plVar15 = (int)*plVar14;
                  if (4 < iVar12) {
                    *(uint *)((int)plVar15 + (uint)bVar18 * -8 + 4) =
                         *(uint *)((int)plVar14 + (uint)bVar18 * -8 + 4);
                  }
                }
                iVar8 = iVar8 + 4;
                iVar6 = iVar6 + 1;
                plVar9 = plVar9 + 6;
              } while (iVar6 < (int)DAT_007e3e88);
            }
            iVar6 = 0;
            if (DAT_005f12f4 != 0) {
              if (0 < (int)DAT_007e3e88) {
                iVar8 = 0;
                do {
                  if (iVar6 < *(int *)((int)&DAT_007e3e94 + iVar8)) {
                    iVar6 = *(int *)((int)&DAT_007e3e94 + iVar8);
                  }
                  iVar8 = iVar8 + 0x30;
                } while (iVar8 < (int)(DAT_007e3e88 * 0x30));
              }
              if (DAT_005f12f4 <= iVar6) {
                DAT_007e450c = DAT_007e3e88;
                plVar9 = (longlong *)&DAT_007e3e8c;
                plVar16 = (longlong *)&DAT_007e4510;
                iVar8 = 0;
                iVar6 = DAT_007e3e88 * 0x30;
                while (7 < iVar6) {
                  lVar1 = *plVar9;
                  plVar9 = plVar9 + 1;
                  *plVar16 = (longlong)ROUND((float10)lVar1);
                  plVar16 = plVar16 + 1;
                  iVar6 = iVar6 + -8;
                }
                if (iVar6 != 0 && -9 < iVar6 + -8) {
                  *(int *)plVar16 = (int)*plVar9;
                  if (4 < iVar6) {
                    *(uint *)((int)plVar16 + (uint)bVar18 * -8 + 4) =
                         *(uint *)((int)plVar9 + (uint)bVar18 * -8 + 4);
                  }
                }
                DAT_007e3e88 = 0;
                if (0 < (int)DAT_007e450c) {
                  local_18 = (longlong *)&DAT_007e4510;
                  do {
                    uVar7 = iVar8 + 1;
                    if (uVar7 == DAT_007e450c) {
                      uVar7 = uVar7 ^ DAT_007e450c;
                    }
                    bVar3 = DAT_005f12f4 <= (int)local_18[1];
                    if (DAT_005f12f4 <= (int)(&DAT_007e4518)[uVar7 * 0xc]) {
                      bVar3 = bVar3 | 2;
                    }
                    switch(bVar3) {
                    case 0:
                      plVar14 = (longlong *)(&DAT_007e3e8c + DAT_007e3e88 * 0xc);
                      iVar6 = 0x30;
                      plVar9 = local_18;
                      plVar16 = plVar14;
                      if (((uint)plVar14 & 7) != 0) {
                        plVar16 = (longlong *)
                                  (&DAT_007e3e90 + DAT_007e3e88 * 0xc + (uint)bVar18 * -2);
                        plVar9 = (longlong *)((int)local_18 + (uint)bVar18 * -8 + 4);
                        *(int *)plVar14 = (int)*local_18;
                        iVar6 = 0x2c;
                      }
                      while (7 < iVar6) {
                        lVar1 = *plVar9;
                        plVar9 = plVar9 + 1;
                        *plVar16 = (longlong)ROUND((float10)lVar1);
                        plVar16 = plVar16 + 1;
                        iVar6 = iVar6 + -8;
                      }
                      if (iVar6 != 0 && -9 < iVar6 + -8) {
                        *(int *)plVar16 = (int)*plVar9;
                        if (4 < iVar6) {
                          *(uint *)((int)plVar16 + (uint)bVar18 * -8 + 4) =
                               *(uint *)((int)plVar9 + (uint)bVar18 * -8 + 4);
                        }
                      }
                      DAT_007e3e88 = DAT_007e3e88 + 1;
                      break;
                    case 1:
                      engine_clipper_c_interpolateVertexFarClip_FUN_004394c0
                                (&DAT_007e4510 + uVar7 * 0xc,local_18);
                      DAT_007e3e88 = DAT_007e3e88 + 1;
                      break;
                    case 2:
                      plVar14 = (longlong *)(&DAT_007e3e8c + DAT_007e3e88 * 0xc);
                      iVar6 = 0x30;
                      plVar9 = local_18;
                      plVar16 = plVar14;
                      if (((uint)plVar14 & 7) != 0) {
                        plVar16 = (longlong *)
                                  (&DAT_007e3e90 + DAT_007e3e88 * 0xc + (uint)bVar18 * -2);
                        plVar9 = (longlong *)((int)local_18 + (uint)bVar18 * -8 + 4);
                        *(int *)plVar14 = (int)*local_18;
                        iVar6 = 0x2c;
                      }
                      while (7 < iVar6) {
                        lVar1 = *plVar9;
                        plVar9 = plVar9 + 1;
                        *plVar16 = (longlong)ROUND((float10)lVar1);
                        plVar16 = plVar16 + 1;
                        iVar6 = iVar6 + -8;
                      }
                      if (iVar6 != 0 && -9 < iVar6 + -8) {
                        *(int *)plVar16 = (int)*plVar9;
                        if (4 < iVar6) {
                          *(uint *)((int)plVar16 + (uint)bVar18 * -8 + 4) =
                               *(uint *)((int)plVar9 + (uint)bVar18 * -8 + 4);
                        }
                      }
                      DAT_007e3e88 = DAT_007e3e88 + 1;
                      engine_clipper_c_interpolateVertexFarClip_FUN_004394c0
                                (local_18,&DAT_007e4510 + uVar7 * 0xc);
                      DAT_007e3e88 = DAT_007e3e88 + 1;
                    }
                    local_18 = local_18 + 6;
                    iVar8 = iVar8 + 1;
                  } while (iVar8 < (int)DAT_007e450c);
                }
              }
            }
            if (2 < (int)DAT_007e3e88) {
              iVar6 = 0;
              if (0 < (int)DAT_007e3e88) {
                piVar5 = &DAT_007e3e8c;
                do {
                  iVar8 = piVar5[2];
                  if (iVar8 == 0) {
                    piVar5[2] = 1;
                    *piVar5 = 0;
                    iVar4 = 0;
LAB_0043a2ee:
                    piVar5[1] = iVar4;
                  }
                  else {
                    iVar12 = *piVar5;
                    if (iVar8 < iVar12) {
                      *piVar5 = iVar8;
                    }
                    else {
                      iVar4 = -iVar8;
                      if (-iVar12 == iVar8 || iVar4 < iVar12) {
                        iVar12 = piVar5[1];
                        if (piVar5[2] < iVar12) {
                          piVar5[1] = piVar5[2];
                        }
                        else if (-iVar12 != iVar8 && iVar12 <= iVar4) goto LAB_0043a2ee;
                      }
                      else {
                        *piVar5 = iVar4;
                      }
                    }
                  }
                  iVar6 = iVar6 + 1;
                  piVar5 = piVar5 + 0xc;
                } while (iVar6 < (int)DAT_007e3e88);
              }
              return 0;
            }
          }
        }
      }
    }
  }
  return 1;
}
