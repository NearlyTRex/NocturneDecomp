// Name: core_dcube.cpp_FUN_0044a150
// Address: 0044a150
// Address Range: [[0044a150, 0044ab5b]]
// Convention: unknown
// Signature: undefined4 core_dcube_cpp_FUN_0044a150(undefined4 *param_1,float *param_2,float *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_dcube_cpp_FUN_0044a150(uint *param_1,float *param_2,float *param_3)

{
  uint *puVar1;
  float fVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  int iVar7;
  CVector3f *pCVar8;
  float *pfVar9;
  byte bVar10;
  CVector3f *pCVar11;
  
  _DAT_014b848c = 3;
  puVar1 = (uint *)*param_1;
  if (puVar1 != (uint *)&DAT_014b8490) {
    _DAT_014b8490 = *puVar1;
    _DAT_014b8498 = puVar1[2];
    _DAT_014b8494 = puVar1[1];
  }
  puVar1 = (uint *)param_1[1];
  if (puVar1 != (uint *)&DAT_014b849c) {
    _DAT_014b849c = *puVar1;
    _DAT_014b84a4 = puVar1[2];
    _DAT_014b84a0 = puVar1[1];
  }
  puVar1 = (uint *)param_1[2];
  if (puVar1 != (uint *)&DAT_014b84a8) {
    _DAT_014b84a8 = *puVar1;
    _DAT_014b84b0 = puVar1[2];
    _DAT_014b84ac = puVar1[1];
  }
  bVar10 = 0xff;
  iVar7 = 0;
  bVar3 = 0;
  pfVar9 = (float *)&DAT_014b8490;
  do {
    bVar6 = *param_3 < *pfVar9;
    if (param_3[1] < pfVar9[1]) {
      bVar6 = bVar6 | 2;
    }
    if (param_3[2] < pfVar9[2]) {
      bVar6 = bVar6 | 4;
    }
    if (*pfVar9 < *param_2) {
      bVar6 = bVar6 | 8;
    }
    if (pfVar9[1] < param_2[1]) {
      bVar6 = bVar6 | 0x10;
    }
    if (pfVar9[2] < param_2[2]) {
      bVar6 = bVar6 | 0x20;
    }
    pfVar9 = pfVar9 + 3;
    iVar7 = iVar7 + 1;
    bVar10 = bVar10 & bVar6;
    bVar3 = bVar3 | bVar6;
  } while (iVar7 < 3);
  if (bVar3 == 0) {
    puVar1 = (uint *)*param_1;
    _DAT_014b8924 = 3;
    if (puVar1 != (uint *)&DAT_014b8928) {
      _DAT_014b8928 = *puVar1;
      _DAT_014b8930 = puVar1[2];
      _DAT_014b892c = puVar1[1];
    }
    puVar1 = (uint *)param_1[1];
    if (puVar1 != (uint *)&DAT_014b8934) {
      _DAT_014b8934 = *puVar1;
      _DAT_014b893c = puVar1[2];
      _DAT_014b8938 = puVar1[1];
    }
    puVar1 = (uint *)param_1[2];
    if (puVar1 != (uint *)&DAT_014b8940) {
      _DAT_014b8940 = *puVar1;
      _DAT_014b8948 = puVar1[2];
      _DAT_014b8944 = puVar1[1];
    }
    return 1;
  }
  if (bVar10 == 0) {
    fVar2 = param_3[1];
    iVar7 = 0;
    pCVar8 = (CVector3f *)&DAT_014b8490;
    _DAT_014b8550 = 0;
    _DAT_014b8614 = 0;
    _DAT_014b86d8 = 0;
    _DAT_014b879c = 0;
    _DAT_014b8860 = 0;
    _DAT_014b8924 = 0;
    do {
      uVar4 = iVar7 + 1;
      if (uVar4 == _DAT_014b848c) {
        uVar4 = uVar4 ^ _DAT_014b848c;
      }
      bVar3 = fVar2 < pCVar8->y;
      if (fVar2 < *(float *)(&DAT_014b8494 + uVar4 * 0xc)) {
        bVar3 = bVar3 | 2;
      }
      switch(bVar3) {
      case 0:
        iVar5 = _DAT_014b8550 * 0xc;
        if ((CVector3f *)(&DAT_014b8554 + iVar5) != pCVar8) {
          ((CVector3f *)(&DAT_014b8554 + iVar5))->x = pCVar8->x;
          *(float *)(&DAT_014b8558 + iVar5) = pCVar8->y;
          *(float *)(&DAT_014b855c + iVar5) = pCVar8->z;
        }
        _DAT_014b8550 = _DAT_014b8550 + 1;
        break;
      case 1:
        core_dcube_cpp_clipEdgeToPlane_FUN_004484c0
                  ((CVector3f *)(&DAT_014b8490 + uVar4 * 0xc),pCVar8,
                   (CVector3f *)(&DAT_014b8554 + _DAT_014b8550 * 0xc),0.0,1.0,0.0,(double)-fVar2);
        _DAT_014b8550 = _DAT_014b8550 + 1;
        break;
      case 2:
        iVar5 = _DAT_014b8550 * 0xc;
        if ((CVector3f *)(&DAT_014b8554 + iVar5) != pCVar8) {
          ((CVector3f *)(&DAT_014b8554 + iVar5))->x = pCVar8->x;
          *(float *)(&DAT_014b8558 + iVar5) = pCVar8->y;
          *(float *)(&DAT_014b855c + iVar5) = pCVar8->z;
        }
        _DAT_014b8550 = _DAT_014b8550 + 1;
        core_dcube_cpp_clipEdgeToPlane_FUN_004484c0
                  (pCVar8,(CVector3f *)(&DAT_014b8490 + uVar4 * 0xc),
                   (CVector3f *)(&DAT_014b8554 + _DAT_014b8550 * 0xc),0.0,1.0,0.0,(double)-fVar2);
        _DAT_014b8550 = _DAT_014b8550 + 1;
      }
      iVar7 = iVar7 + 1;
      pCVar8 = pCVar8 + 1;
    } while (iVar7 < (int)_DAT_014b848c);
    if (2 < (int)_DAT_014b8550) {
      fVar2 = param_2[1];
      iVar7 = 0;
      if (0 < (int)_DAT_014b8550) {
        pCVar8 = (CVector3f *)&DAT_014b8554;
        do {
          uVar4 = iVar7 + 1;
          if (uVar4 == _DAT_014b8550) {
            uVar4 = uVar4 ^ _DAT_014b8550;
          }
          bVar3 = pCVar8->y < fVar2;
          if (*(float *)(&DAT_014b8558 + uVar4 * 0xc) < fVar2) {
            bVar3 = bVar3 | 2;
          }
          switch(bVar3) {
          case 0:
            iVar5 = _DAT_014b8614 * 0xc;
            if ((CVector3f *)(&DAT_014b8618 + iVar5) != pCVar8) {
              ((CVector3f *)(&DAT_014b8618 + iVar5))->x = pCVar8->x;
              *(float *)(&DAT_014b861c + iVar5) = pCVar8->y;
              *(float *)(&DAT_014b8620 + iVar5) = pCVar8->z;
            }
            _DAT_014b8614 = _DAT_014b8614 + 1;
            break;
          case 1:
            core_dcube_cpp_clipEdgeToPlane_FUN_004484c0
                      ((CVector3f *)(&DAT_014b8554 + uVar4 * 0xc),pCVar8,
                       (CVector3f *)(&DAT_014b8618 + _DAT_014b8614 * 0xc),0.0,-1.0,0.0,(double)fVar2
                      );
            _DAT_014b8614 = _DAT_014b8614 + 1;
            break;
          case 2:
            iVar5 = _DAT_014b8614 * 0xc;
            if ((CVector3f *)(&DAT_014b8618 + iVar5) != pCVar8) {
              ((CVector3f *)(&DAT_014b8618 + iVar5))->x = pCVar8->x;
              *(float *)(&DAT_014b861c + iVar5) = pCVar8->y;
              *(float *)(&DAT_014b8620 + iVar5) = pCVar8->z;
            }
            _DAT_014b8614 = _DAT_014b8614 + 1;
            core_dcube_cpp_clipEdgeToPlane_FUN_004484c0
                      (pCVar8,(CVector3f *)(&DAT_014b8554 + uVar4 * 0xc),
                       (CVector3f *)(&DAT_014b8618 + _DAT_014b8614 * 0xc),0.0,-1.0,0.0,(double)fVar2
                      );
            _DAT_014b8614 = _DAT_014b8614 + 1;
          }
          iVar7 = iVar7 + 1;
          pCVar8 = pCVar8 + 1;
        } while (iVar7 < (int)_DAT_014b8550);
      }
      if (2 < (int)_DAT_014b8614) {
        fVar2 = *param_3;
        iVar7 = 0;
        if (0 < (int)_DAT_014b8614) {
          pCVar8 = (CVector3f *)&DAT_014b8618;
          do {
            uVar4 = iVar7 + 1;
            if (uVar4 == _DAT_014b8614) {
              uVar4 = uVar4 ^ _DAT_014b8614;
            }
            pCVar11 = (CVector3f *)(&DAT_014b8618 + uVar4 * 0xc);
            bVar3 = fVar2 < pCVar8->x;
            if (fVar2 < pCVar11->x) {
              bVar3 = bVar3 | 2;
            }
            switch(bVar3) {
            case 0:
              iVar5 = _DAT_014b86d8 * 0xc;
              if ((CVector3f *)(&DAT_014b86dc + iVar5) != pCVar8) {
                ((CVector3f *)(&DAT_014b86dc + iVar5))->x = pCVar8->x;
                *(float *)(&DAT_014b86e0 + iVar5) = pCVar8->y;
                *(float *)(&DAT_014b86e4 + iVar5) = pCVar8->z;
              }
              _DAT_014b86d8 = _DAT_014b86d8 + 1;
              break;
            case 1:
              core_dcube_cpp_clipEdgeToPlane_FUN_004484c0
                        (pCVar11,pCVar8,(CVector3f *)(&DAT_014b86dc + _DAT_014b86d8 * 0xc),1.0,0.0,
                         0.0,(double)-fVar2);
              _DAT_014b86d8 = _DAT_014b86d8 + 1;
              break;
            case 2:
              iVar5 = _DAT_014b86d8 * 0xc;
              if ((CVector3f *)(&DAT_014b86dc + iVar5) != pCVar8) {
                ((CVector3f *)(&DAT_014b86dc + iVar5))->x = pCVar8->x;
                *(float *)(&DAT_014b86e0 + iVar5) = pCVar8->y;
                *(float *)(&DAT_014b86e4 + iVar5) = pCVar8->z;
              }
              _DAT_014b86d8 = _DAT_014b86d8 + 1;
              core_dcube_cpp_clipEdgeToPlane_FUN_004484c0
                        (pCVar8,pCVar11,(CVector3f *)(&DAT_014b86dc + _DAT_014b86d8 * 0xc),1.0,0.0,
                         0.0,(double)-fVar2);
              _DAT_014b86d8 = _DAT_014b86d8 + 1;
            }
            iVar7 = iVar7 + 1;
            pCVar8 = pCVar8 + 1;
          } while (iVar7 < (int)_DAT_014b8614);
        }
        if (2 < (int)_DAT_014b86d8) {
          fVar2 = *param_2;
          iVar7 = 0;
          if (0 < (int)_DAT_014b86d8) {
            pCVar8 = (CVector3f *)&DAT_014b86dc;
            do {
              uVar4 = iVar7 + 1;
              if (uVar4 == _DAT_014b86d8) {
                uVar4 = uVar4 ^ _DAT_014b86d8;
              }
              pCVar11 = (CVector3f *)(&DAT_014b86dc + uVar4 * 0xc);
              bVar3 = pCVar8->x < fVar2;
              if (pCVar11->x < fVar2) {
                bVar3 = bVar3 | 2;
              }
              switch(bVar3) {
              case 0:
                iVar5 = _DAT_014b879c * 0xc;
                if ((CVector3f *)(&DAT_014b87a0 + iVar5) != pCVar8) {
                  ((CVector3f *)(&DAT_014b87a0 + iVar5))->x = pCVar8->x;
                  *(float *)(&DAT_014b87a4 + iVar5) = pCVar8->y;
                  *(float *)(&DAT_014b87a8 + iVar5) = pCVar8->z;
                }
                _DAT_014b879c = _DAT_014b879c + 1;
                break;
              case 1:
                core_dcube_cpp_clipEdgeToPlane_FUN_004484c0
                          (pCVar11,pCVar8,(CVector3f *)(&DAT_014b87a0 + _DAT_014b879c * 0xc),-1.0,
                           0.0,0.0,(double)fVar2);
                _DAT_014b879c = _DAT_014b879c + 1;
                break;
              case 2:
                iVar5 = _DAT_014b879c * 0xc;
                if ((CVector3f *)(&DAT_014b87a0 + iVar5) != pCVar8) {
                  ((CVector3f *)(&DAT_014b87a0 + iVar5))->x = pCVar8->x;
                  *(float *)(&DAT_014b87a4 + iVar5) = pCVar8->y;
                  *(float *)(&DAT_014b87a8 + iVar5) = pCVar8->z;
                }
                _DAT_014b879c = _DAT_014b879c + 1;
                core_dcube_cpp_clipEdgeToPlane_FUN_004484c0
                          (pCVar8,pCVar11,(CVector3f *)(&DAT_014b87a0 + _DAT_014b879c * 0xc),-1.0,
                           0.0,0.0,(double)fVar2);
                _DAT_014b879c = _DAT_014b879c + 1;
              }
              iVar7 = iVar7 + 1;
              pCVar8 = pCVar8 + 1;
            } while (iVar7 < (int)_DAT_014b86d8);
          }
          if (2 < (int)_DAT_014b879c) {
            fVar2 = param_2[2];
            iVar7 = 0;
            if (0 < (int)_DAT_014b879c) {
              pCVar8 = (CVector3f *)&DAT_014b87a0;
              do {
                uVar4 = iVar7 + 1;
                if (uVar4 == _DAT_014b879c) {
                  uVar4 = uVar4 ^ _DAT_014b879c;
                }
                bVar3 = pCVar8->z < fVar2;
                if (*(float *)(&DAT_014b87a8 + uVar4 * 0xc) < fVar2) {
                  bVar3 = bVar3 | 2;
                }
                switch(bVar3) {
                case 0:
                  iVar5 = _DAT_014b8860 * 0xc;
                  if ((CVector3f *)(&DAT_014b8864 + iVar5) != pCVar8) {
                    ((CVector3f *)(&DAT_014b8864 + iVar5))->x = pCVar8->x;
                    *(float *)(&DAT_014b8868 + iVar5) = pCVar8->y;
                    *(float *)(&DAT_014b886c + iVar5) = pCVar8->z;
                  }
                  _DAT_014b8860 = _DAT_014b8860 + 1;
                  break;
                case 1:
                  core_dcube_cpp_clipEdgeToPlane_FUN_004484c0
                            ((CVector3f *)(&DAT_014b87a0 + uVar4 * 0xc),pCVar8,
                             (CVector3f *)(&DAT_014b8864 + _DAT_014b8860 * 0xc),0.0,0.0,-1.0,
                             (double)fVar2);
                  _DAT_014b8860 = _DAT_014b8860 + 1;
                  break;
                case 2:
                  iVar5 = _DAT_014b8860 * 0xc;
                  if ((CVector3f *)(&DAT_014b8864 + iVar5) != pCVar8) {
                    ((CVector3f *)(&DAT_014b8864 + iVar5))->x = pCVar8->x;
                    *(float *)(&DAT_014b8868 + iVar5) = pCVar8->y;
                    *(float *)(&DAT_014b886c + iVar5) = pCVar8->z;
                  }
                  _DAT_014b8860 = _DAT_014b8860 + 1;
                  core_dcube_cpp_clipEdgeToPlane_FUN_004484c0
                            (pCVar8,(CVector3f *)(&DAT_014b87a0 + uVar4 * 0xc),
                             (CVector3f *)(&DAT_014b8864 + _DAT_014b8860 * 0xc),0.0,0.0,-1.0,
                             (double)fVar2);
                  _DAT_014b8860 = _DAT_014b8860 + 1;
                }
                iVar7 = iVar7 + 1;
                pCVar8 = pCVar8 + 1;
              } while (iVar7 < (int)_DAT_014b879c);
            }
            if (2 < (int)_DAT_014b8860) {
              fVar2 = param_3[2];
              iVar7 = 0;
              if (0 < (int)_DAT_014b8860) {
                pCVar8 = (CVector3f *)&DAT_014b8864;
                do {
                  uVar4 = iVar7 + 1;
                  if (uVar4 == _DAT_014b8860) {
                    uVar4 = uVar4 ^ _DAT_014b8860;
                  }
                  bVar3 = fVar2 < pCVar8->z;
                  if (fVar2 < *(float *)(&DAT_014b886c + uVar4 * 0xc)) {
                    bVar3 = bVar3 | 2;
                  }
                  switch(bVar3) {
                  case 0:
                    iVar5 = _DAT_014b8924 * 0xc;
                    if ((CVector3f *)(&DAT_014b8928 + iVar5) != pCVar8) {
                      ((CVector3f *)(&DAT_014b8928 + iVar5))->x = pCVar8->x;
                      *(float *)(&DAT_014b892c + iVar5) = pCVar8->y;
                      *(float *)(&DAT_014b8930 + iVar5) = pCVar8->z;
                    }
                    _DAT_014b8924 = _DAT_014b8924 + 1;
                    break;
                  case 1:
                    core_dcube_cpp_clipEdgeToPlane_FUN_004484c0
                              ((CVector3f *)(&DAT_014b8864 + uVar4 * 0xc),pCVar8,
                               (CVector3f *)(&DAT_014b8928 + _DAT_014b8924 * 0xc),0.0,0.0,-1.0,
                               (double)fVar2);
                    _DAT_014b8924 = _DAT_014b8924 + 1;
                    break;
                  case 2:
                    iVar5 = _DAT_014b8924 * 0xc;
                    if ((CVector3f *)(&DAT_014b8928 + iVar5) != pCVar8) {
                      ((CVector3f *)(&DAT_014b8928 + iVar5))->x = pCVar8->x;
                      *(float *)(&DAT_014b892c + iVar5) = pCVar8->y;
                      *(float *)(&DAT_014b8930 + iVar5) = pCVar8->z;
                    }
                    _DAT_014b8924 = _DAT_014b8924 + 1;
                    core_dcube_cpp_clipEdgeToPlane_FUN_004484c0
                              (pCVar8,(CVector3f *)(&DAT_014b8864 + uVar4 * 0xc),
                               (CVector3f *)(&DAT_014b8928 + _DAT_014b8924 * 0xc),0.0,0.0,-1.0,
                               (double)fVar2);
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
