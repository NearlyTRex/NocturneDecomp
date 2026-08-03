// Name: core_dcube.cpp_FUN_0044a150
// Address: 0044a150
// Address Range: [[0044a150, 0044ab5b]]
// Convention: unknown
// Signature: undefined4 core_dcube_cpp_FUN_0044a150(int *param_1,float *param_2,float *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_dcube_cpp_FUN_0044a150(int *param_1,float *param_2,float *param_3)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  CVector3f *pCVar8;
  byte bVar9;
  CVector3f *pCVar10;
  
  _DAT_014b848c = 3;
  pCVar8 = (CVector3f *)*param_1;
  if (pCVar8 != g_CVector3f_ARRAY_014b8490) {
    g_CVector3f_ARRAY_014b8490[0].x = pCVar8->x;
    g_CVector3f_ARRAY_014b8490[0].z = pCVar8->z;
    g_CVector3f_ARRAY_014b8490[0].y = pCVar8->y;
  }
  pCVar8 = (CVector3f *)param_1[1];
  if (pCVar8 != g_CVector3f_ARRAY_014b8490 + 1) {
    g_CVector3f_ARRAY_014b8490[1].x = pCVar8->x;
    g_CVector3f_ARRAY_014b8490[1].z = pCVar8->z;
    g_CVector3f_ARRAY_014b8490[1].y = pCVar8->y;
  }
  pCVar8 = (CVector3f *)param_1[2];
  if (pCVar8 != g_CVector3f_ARRAY_014b8490 + 2) {
    g_CVector3f_ARRAY_014b8490[2].x = pCVar8->x;
    g_CVector3f_ARRAY_014b8490[2].z = pCVar8->z;
    g_CVector3f_ARRAY_014b8490[2].y = pCVar8->y;
  }
  bVar9 = 0xff;
  iVar7 = 0;
  bVar4 = 0;
  pCVar8 = g_CVector3f_ARRAY_014b8490;
  do {
    bVar6 = *param_3 < pCVar8->x;
    if (param_3[1] < pCVar8->y) {
      bVar6 = bVar6 | 2;
    }
    if (param_3[2] < pCVar8->z) {
      bVar6 = bVar6 | 4;
    }
    if (pCVar8->x < *param_2) {
      bVar6 = bVar6 | 8;
    }
    if (pCVar8->y < param_2[1]) {
      bVar6 = bVar6 | 0x10;
    }
    if (pCVar8->z < param_2[2]) {
      bVar6 = bVar6 | 0x20;
    }
    pCVar8 = pCVar8 + 1;
    iVar7 = iVar7 + 1;
    bVar9 = bVar9 & bVar6;
    bVar4 = bVar4 | bVar6;
  } while (iVar7 < 3);
  if (bVar4 == 0) {
    pCVar8 = (CVector3f *)*param_1;
    _DAT_014b8924 = 3;
    if (pCVar8 != g_CVector3f_ARRAY_014b8928) {
      g_CVector3f_ARRAY_014b8928[0].x = pCVar8->x;
      g_CVector3f_ARRAY_014b8928[0].z = pCVar8->z;
      g_CVector3f_ARRAY_014b8928[0].y = pCVar8->y;
    }
    pCVar8 = (CVector3f *)param_1[1];
    if (pCVar8 != g_CVector3f_ARRAY_014b8928 + 1) {
      g_CVector3f_ARRAY_014b8928[1].x = pCVar8->x;
      g_CVector3f_ARRAY_014b8928[1].z = pCVar8->z;
      g_CVector3f_ARRAY_014b8928[1].y = pCVar8->y;
    }
    pCVar8 = (CVector3f *)param_1[2];
    if (pCVar8 != g_CVector3f_ARRAY_014b8928 + 2) {
      g_CVector3f_ARRAY_014b8928[2].x = pCVar8->x;
      g_CVector3f_ARRAY_014b8928[2].z = pCVar8->z;
      g_CVector3f_ARRAY_014b8928[2].y = pCVar8->y;
    }
    return 1;
  }
  if (bVar9 == 0) {
    fVar1 = param_3[1];
    iVar7 = 0;
    pCVar8 = g_CVector3f_ARRAY_014b8490;
    _DAT_014b8550 = 0;
    _DAT_014b8614 = 0;
    _DAT_014b86d8 = 0;
    _DAT_014b879c = 0;
    _DAT_014b8860 = 0;
    _DAT_014b8924 = 0;
    do {
      uVar2 = _DAT_014b8550;
      uVar5 = iVar7 + 1;
      if (uVar5 == _DAT_014b848c) {
        uVar5 = uVar5 ^ _DAT_014b848c;
      }
      bVar4 = fVar1 < pCVar8->y;
      if (fVar1 < g_CVector3f_ARRAY_014b8490[uVar5].y) {
        bVar4 = bVar4 | 2;
      }
      switch(bVar4) {
      case 0:
        if (g_CVector3f_ARRAY_014b8554 + _DAT_014b8550 != pCVar8) {
          g_CVector3f_ARRAY_014b8554[_DAT_014b8550].x = pCVar8->x;
          g_CVector3f_ARRAY_014b8554[uVar2].y = pCVar8->y;
          g_CVector3f_ARRAY_014b8554[uVar2].z = pCVar8->z;
        }
        _DAT_014b8550 = _DAT_014b8550 + 1;
        break;
      case 1:
        core_dcube_cpp_clipEdgeToPlane_FUN_004484c0
                  (g_CVector3f_ARRAY_014b8490 + uVar5,pCVar8,
                   g_CVector3f_ARRAY_014b8554 + _DAT_014b8550,0.0,1.0,0.0,(double)-fVar1);
        _DAT_014b8550 = _DAT_014b8550 + 1;
        break;
      case 2:
        if (g_CVector3f_ARRAY_014b8554 + _DAT_014b8550 != pCVar8) {
          g_CVector3f_ARRAY_014b8554[_DAT_014b8550].x = pCVar8->x;
          g_CVector3f_ARRAY_014b8554[uVar2].y = pCVar8->y;
          g_CVector3f_ARRAY_014b8554[uVar2].z = pCVar8->z;
        }
        _DAT_014b8550 = _DAT_014b8550 + 1;
        core_dcube_cpp_clipEdgeToPlane_FUN_004484c0
                  (pCVar8,g_CVector3f_ARRAY_014b8490 + uVar5,
                   g_CVector3f_ARRAY_014b8554 + _DAT_014b8550,0.0,1.0,0.0,(double)-fVar1);
        _DAT_014b8550 = _DAT_014b8550 + 1;
      }
      iVar7 = iVar7 + 1;
      pCVar8 = pCVar8 + 1;
    } while (iVar7 < (int)_DAT_014b848c);
    if (2 < (int)_DAT_014b8550) {
      fVar1 = param_2[1];
      iVar7 = 0;
      if (0 < (int)_DAT_014b8550) {
        pCVar8 = g_CVector3f_ARRAY_014b8554;
        do {
          uVar2 = _DAT_014b8614;
          uVar5 = iVar7 + 1;
          if (uVar5 == _DAT_014b8550) {
            uVar5 = uVar5 ^ _DAT_014b8550;
          }
          bVar4 = pCVar8->y < fVar1;
          if (g_CVector3f_ARRAY_014b8554[uVar5].y < fVar1) {
            bVar4 = bVar4 | 2;
          }
          switch(bVar4) {
          case 0:
            if (g_CVector3f_ARRAY_014b8618 + _DAT_014b8614 != pCVar8) {
              g_CVector3f_ARRAY_014b8618[_DAT_014b8614].x = pCVar8->x;
              g_CVector3f_ARRAY_014b8618[uVar2].y = pCVar8->y;
              g_CVector3f_ARRAY_014b8618[uVar2].z = pCVar8->z;
            }
            _DAT_014b8614 = _DAT_014b8614 + 1;
            break;
          case 1:
            core_dcube_cpp_clipEdgeToPlane_FUN_004484c0
                      (g_CVector3f_ARRAY_014b8554 + uVar5,pCVar8,
                       g_CVector3f_ARRAY_014b8618 + _DAT_014b8614,0.0,-1.0,0.0,(double)fVar1);
            _DAT_014b8614 = _DAT_014b8614 + 1;
            break;
          case 2:
            if (g_CVector3f_ARRAY_014b8618 + _DAT_014b8614 != pCVar8) {
              g_CVector3f_ARRAY_014b8618[_DAT_014b8614].x = pCVar8->x;
              g_CVector3f_ARRAY_014b8618[uVar2].y = pCVar8->y;
              g_CVector3f_ARRAY_014b8618[uVar2].z = pCVar8->z;
            }
            _DAT_014b8614 = _DAT_014b8614 + 1;
            core_dcube_cpp_clipEdgeToPlane_FUN_004484c0
                      (pCVar8,g_CVector3f_ARRAY_014b8554 + uVar5,
                       g_CVector3f_ARRAY_014b8618 + _DAT_014b8614,0.0,-1.0,0.0,(double)fVar1);
            _DAT_014b8614 = _DAT_014b8614 + 1;
          }
          iVar7 = iVar7 + 1;
          pCVar8 = pCVar8 + 1;
        } while (iVar7 < (int)_DAT_014b8550);
      }
      if (2 < (int)_DAT_014b8614) {
        fVar1 = *param_3;
        iVar7 = 0;
        if (0 < (int)_DAT_014b8614) {
          pCVar8 = g_CVector3f_ARRAY_014b8618;
          do {
            uVar2 = _DAT_014b86d8;
            uVar5 = iVar7 + 1;
            if (uVar5 == _DAT_014b8614) {
              uVar5 = uVar5 ^ _DAT_014b8614;
            }
            pCVar10 = g_CVector3f_ARRAY_014b8618 + uVar5;
            bVar4 = fVar1 < pCVar8->x;
            if (fVar1 < pCVar10->x) {
              bVar4 = bVar4 | 2;
            }
            switch(bVar4) {
            case 0:
              if (g_CVector3f_ARRAY_014b86dc + _DAT_014b86d8 != pCVar8) {
                g_CVector3f_ARRAY_014b86dc[_DAT_014b86d8].x = pCVar8->x;
                g_CVector3f_ARRAY_014b86dc[uVar2].y = pCVar8->y;
                g_CVector3f_ARRAY_014b86dc[uVar2].z = pCVar8->z;
              }
              _DAT_014b86d8 = _DAT_014b86d8 + 1;
              break;
            case 1:
              core_dcube_cpp_clipEdgeToPlane_FUN_004484c0
                        (pCVar10,pCVar8,g_CVector3f_ARRAY_014b86dc + _DAT_014b86d8,1.0,0.0,0.0,
                         (double)-fVar1);
              _DAT_014b86d8 = _DAT_014b86d8 + 1;
              break;
            case 2:
              if (g_CVector3f_ARRAY_014b86dc + _DAT_014b86d8 != pCVar8) {
                g_CVector3f_ARRAY_014b86dc[_DAT_014b86d8].x = pCVar8->x;
                g_CVector3f_ARRAY_014b86dc[uVar2].y = pCVar8->y;
                g_CVector3f_ARRAY_014b86dc[uVar2].z = pCVar8->z;
              }
              _DAT_014b86d8 = _DAT_014b86d8 + 1;
              core_dcube_cpp_clipEdgeToPlane_FUN_004484c0
                        (pCVar8,pCVar10,g_CVector3f_ARRAY_014b86dc + _DAT_014b86d8,1.0,0.0,0.0,
                         (double)-fVar1);
              _DAT_014b86d8 = _DAT_014b86d8 + 1;
            }
            iVar7 = iVar7 + 1;
            pCVar8 = pCVar8 + 1;
          } while (iVar7 < (int)_DAT_014b8614);
        }
        if (2 < (int)_DAT_014b86d8) {
          fVar1 = *param_2;
          iVar7 = 0;
          if (0 < (int)_DAT_014b86d8) {
            pCVar8 = g_CVector3f_ARRAY_014b86dc;
            do {
              uVar2 = _DAT_014b879c;
              uVar5 = iVar7 + 1;
              if (uVar5 == _DAT_014b86d8) {
                uVar5 = uVar5 ^ _DAT_014b86d8;
              }
              pCVar10 = g_CVector3f_ARRAY_014b86dc + uVar5;
              bVar4 = pCVar8->x < fVar1;
              if (pCVar10->x < fVar1) {
                bVar4 = bVar4 | 2;
              }
              switch(bVar4) {
              case 0:
                if (g_CVector3f_ARRAY_014b87a0 + _DAT_014b879c != pCVar8) {
                  g_CVector3f_ARRAY_014b87a0[_DAT_014b879c].x = pCVar8->x;
                  g_CVector3f_ARRAY_014b87a0[uVar2].y = pCVar8->y;
                  g_CVector3f_ARRAY_014b87a0[uVar2].z = pCVar8->z;
                }
                _DAT_014b879c = _DAT_014b879c + 1;
                break;
              case 1:
                core_dcube_cpp_clipEdgeToPlane_FUN_004484c0
                          (pCVar10,pCVar8,g_CVector3f_ARRAY_014b87a0 + _DAT_014b879c,-1.0,0.0,0.0,
                           (double)fVar1);
                _DAT_014b879c = _DAT_014b879c + 1;
                break;
              case 2:
                if (g_CVector3f_ARRAY_014b87a0 + _DAT_014b879c != pCVar8) {
                  g_CVector3f_ARRAY_014b87a0[_DAT_014b879c].x = pCVar8->x;
                  g_CVector3f_ARRAY_014b87a0[uVar2].y = pCVar8->y;
                  g_CVector3f_ARRAY_014b87a0[uVar2].z = pCVar8->z;
                }
                _DAT_014b879c = _DAT_014b879c + 1;
                core_dcube_cpp_clipEdgeToPlane_FUN_004484c0
                          (pCVar8,pCVar10,g_CVector3f_ARRAY_014b87a0 + _DAT_014b879c,-1.0,0.0,0.0,
                           (double)fVar1);
                _DAT_014b879c = _DAT_014b879c + 1;
              }
              iVar7 = iVar7 + 1;
              pCVar8 = pCVar8 + 1;
            } while (iVar7 < (int)_DAT_014b86d8);
          }
          if (2 < (int)_DAT_014b879c) {
            fVar1 = param_2[2];
            iVar7 = 0;
            if (0 < (int)_DAT_014b879c) {
              pCVar8 = g_CVector3f_ARRAY_014b87a0;
              do {
                uVar2 = _DAT_014b8860;
                uVar5 = iVar7 + 1;
                if (uVar5 == _DAT_014b879c) {
                  uVar5 = uVar5 ^ _DAT_014b879c;
                }
                bVar4 = pCVar8->z < fVar1;
                if (g_CVector3f_ARRAY_014b87a0[uVar5].z < fVar1) {
                  bVar4 = bVar4 | 2;
                }
                switch(bVar4) {
                case 0:
                  if (g_CVector3f_ARRAY_014b8864 + _DAT_014b8860 != pCVar8) {
                    g_CVector3f_ARRAY_014b8864[_DAT_014b8860].x = pCVar8->x;
                    g_CVector3f_ARRAY_014b8864[uVar2].y = pCVar8->y;
                    g_CVector3f_ARRAY_014b8864[uVar2].z = pCVar8->z;
                  }
                  _DAT_014b8860 = _DAT_014b8860 + 1;
                  break;
                case 1:
                  core_dcube_cpp_clipEdgeToPlane_FUN_004484c0
                            (g_CVector3f_ARRAY_014b87a0 + uVar5,pCVar8,
                             g_CVector3f_ARRAY_014b8864 + _DAT_014b8860,0.0,0.0,-1.0,(double)fVar1);
                  _DAT_014b8860 = _DAT_014b8860 + 1;
                  break;
                case 2:
                  if (g_CVector3f_ARRAY_014b8864 + _DAT_014b8860 != pCVar8) {
                    g_CVector3f_ARRAY_014b8864[_DAT_014b8860].x = pCVar8->x;
                    g_CVector3f_ARRAY_014b8864[uVar2].y = pCVar8->y;
                    g_CVector3f_ARRAY_014b8864[uVar2].z = pCVar8->z;
                  }
                  _DAT_014b8860 = _DAT_014b8860 + 1;
                  core_dcube_cpp_clipEdgeToPlane_FUN_004484c0
                            (pCVar8,g_CVector3f_ARRAY_014b87a0 + uVar5,
                             g_CVector3f_ARRAY_014b8864 + _DAT_014b8860,0.0,0.0,-1.0,(double)fVar1);
                  _DAT_014b8860 = _DAT_014b8860 + 1;
                }
                iVar7 = iVar7 + 1;
                pCVar8 = pCVar8 + 1;
              } while (iVar7 < (int)_DAT_014b879c);
            }
            if (2 < (int)_DAT_014b8860) {
              fVar1 = param_3[2];
              iVar7 = 0;
              if (0 < (int)_DAT_014b8860) {
                pCVar8 = g_CVector3f_ARRAY_014b8864;
                do {
                  iVar3 = _DAT_014b8924;
                  uVar5 = iVar7 + 1;
                  if (uVar5 == _DAT_014b8860) {
                    uVar5 = uVar5 ^ _DAT_014b8860;
                  }
                  bVar4 = fVar1 < pCVar8->z;
                  if (fVar1 < g_CVector3f_ARRAY_014b8864[uVar5].z) {
                    bVar4 = bVar4 | 2;
                  }
                  switch(bVar4) {
                  case 0:
                    if (g_CVector3f_ARRAY_014b8928 + _DAT_014b8924 != pCVar8) {
                      g_CVector3f_ARRAY_014b8928[_DAT_014b8924].x = pCVar8->x;
                      g_CVector3f_ARRAY_014b8928[iVar3].y = pCVar8->y;
                      g_CVector3f_ARRAY_014b8928[iVar3].z = pCVar8->z;
                    }
                    _DAT_014b8924 = _DAT_014b8924 + 1;
                    break;
                  case 1:
                    core_dcube_cpp_clipEdgeToPlane_FUN_004484c0
                              (g_CVector3f_ARRAY_014b8864 + uVar5,pCVar8,
                               g_CVector3f_ARRAY_014b8928 + _DAT_014b8924,0.0,0.0,-1.0,(double)fVar1
                              );
                    _DAT_014b8924 = _DAT_014b8924 + 1;
                    break;
                  case 2:
                    if (g_CVector3f_ARRAY_014b8928 + _DAT_014b8924 != pCVar8) {
                      g_CVector3f_ARRAY_014b8928[_DAT_014b8924].x = pCVar8->x;
                      g_CVector3f_ARRAY_014b8928[iVar3].y = pCVar8->y;
                      g_CVector3f_ARRAY_014b8928[iVar3].z = pCVar8->z;
                    }
                    _DAT_014b8924 = _DAT_014b8924 + 1;
                    core_dcube_cpp_clipEdgeToPlane_FUN_004484c0
                              (pCVar8,g_CVector3f_ARRAY_014b8864 + uVar5,
                               g_CVector3f_ARRAY_014b8928 + _DAT_014b8924,0.0,0.0,-1.0,(double)fVar1
                              );
                    _DAT_014b8924 = _DAT_014b8924 + 1;
                  }
                  iVar7 = iVar7 + 1;
                  pCVar8 = pCVar8 + 1;
                } while (iVar7 < (int)_DAT_014b8860);
              }
              if (2 < _DAT_014b8924) {
                return 1;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}
