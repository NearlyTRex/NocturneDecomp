// Name: FUN_0044a150
// Address: 0044a150
// Address Range: [[0044a150, 0044ab5b]]
// Convention: unknown
// Signature: undefined4 FUN_0044a150(undefined4 *param_1,float *param_2,float *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0044a150(uint *param_1,float *param_2,float *param_3)

{
  float fVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  uint *puVar7;
  float *pfVar8;
  byte bVar9;
  float *pfVar10;
  
  _DAT_014b848c = 3;
  puVar7 = (uint *)*param_1;
  if (puVar7 != (uint *)&DAT_014b8490) {
    _DAT_014b8490 = *puVar7;
    _DAT_014b8498 = puVar7[2];
    _DAT_014b8494 = puVar7[1];
  }
  puVar7 = (uint *)param_1[1];
  if (puVar7 != (uint *)&DAT_014b849c) {
    _DAT_014b849c = *puVar7;
    _DAT_014b84a4 = puVar7[2];
    _DAT_014b84a0 = puVar7[1];
  }
  puVar7 = (uint *)param_1[2];
  if (puVar7 != (uint *)&DAT_014b84a8) {
    _DAT_014b84a8 = *puVar7;
    _DAT_014b84b0 = puVar7[2];
    _DAT_014b84ac = puVar7[1];
  }
  bVar9 = 0xff;
  iVar6 = 0;
  bVar2 = 0;
  pfVar8 = (float *)&DAT_014b8490;
  do {
    bVar5 = *param_3 < *pfVar8;
    if (param_3[1] < pfVar8[1]) {
      bVar5 = bVar5 | 2;
    }
    if (param_3[2] < pfVar8[2]) {
      bVar5 = bVar5 | 4;
    }
    if (*pfVar8 < *param_2) {
      bVar5 = bVar5 | 8;
    }
    if (pfVar8[1] < param_2[1]) {
      bVar5 = bVar5 | 0x10;
    }
    if (pfVar8[2] < param_2[2]) {
      bVar5 = bVar5 | 0x20;
    }
    pfVar8 = pfVar8 + 3;
    iVar6 = iVar6 + 1;
    bVar9 = bVar9 & bVar5;
    bVar2 = bVar2 | bVar5;
  } while (iVar6 < 3);
  if (bVar2 == 0) {
    puVar7 = (uint *)*param_1;
    _DAT_014b8924 = 3;
    if (puVar7 != (uint *)&DAT_014b8928) {
      _DAT_014b8928 = *puVar7;
      _DAT_014b8930 = puVar7[2];
      _DAT_014b892c = puVar7[1];
    }
    puVar7 = (uint *)param_1[1];
    if (puVar7 != (uint *)&DAT_014b8934) {
      _DAT_014b8934 = *puVar7;
      _DAT_014b893c = puVar7[2];
      _DAT_014b8938 = puVar7[1];
    }
    puVar7 = (uint *)param_1[2];
    if (puVar7 != (uint *)&DAT_014b8940) {
      _DAT_014b8940 = *puVar7;
      _DAT_014b8948 = puVar7[2];
      _DAT_014b8944 = puVar7[1];
    }
    return 1;
  }
  if (bVar9 == 0) {
    fVar1 = param_3[1];
    iVar6 = 0;
    puVar7 = (uint *)&DAT_014b8490;
    _DAT_014b8550 = 0;
    _DAT_014b8614 = 0;
    _DAT_014b86d8 = 0;
    _DAT_014b879c = 0;
    _DAT_014b8860 = 0;
    _DAT_014b8924 = 0;
    do {
      uVar3 = iVar6 + 1;
      if (uVar3 == _DAT_014b848c) {
        uVar3 = uVar3 ^ _DAT_014b848c;
      }
      bVar2 = fVar1 < (float)puVar7[1];
      if (fVar1 < *(float *)(&DAT_014b8494 + uVar3 * 0xc)) {
        bVar2 = bVar2 | 2;
      }
      switch(bVar2) {
      case 0:
        iVar4 = _DAT_014b8550 * 0xc;
        if ((uint *)(&DAT_014b8554 + iVar4) != puVar7) {
          *(uint *)(&DAT_014b8554 + iVar4) = *puVar7;
          *(uint *)(&DAT_014b8558 + iVar4) = puVar7[1];
          *(uint *)(&DAT_014b855c + iVar4) = puVar7[2];
        }
        _DAT_014b8550 = _DAT_014b8550 + 1;
        break;
      case 1:
        core_dcube_cpp_clipEdgeToPlane_FUN_004484c0
                  (&DAT_014b8490 + uVar3 * 0xc,puVar7,&DAT_014b8554 + _DAT_014b8550 * 0xc,0,0,0,
                   0x3ff00000,0,0,(double)-fVar1);
        _DAT_014b8550 = _DAT_014b8550 + 1;
        break;
      case 2:
        iVar4 = _DAT_014b8550 * 0xc;
        if ((uint *)(&DAT_014b8554 + iVar4) != puVar7) {
          *(uint *)(&DAT_014b8554 + iVar4) = *puVar7;
          *(uint *)(&DAT_014b8558 + iVar4) = puVar7[1];
          *(uint *)(&DAT_014b855c + iVar4) = puVar7[2];
        }
        _DAT_014b8550 = _DAT_014b8550 + 1;
        core_dcube_cpp_clipEdgeToPlane_FUN_004484c0
                  (puVar7,&DAT_014b8490 + uVar3 * 0xc,&DAT_014b8554 + _DAT_014b8550 * 0xc,0,0,0,
                   0x3ff00000,0,0,(double)-fVar1);
        _DAT_014b8550 = _DAT_014b8550 + 1;
      }
      iVar6 = iVar6 + 1;
      puVar7 = puVar7 + 3;
    } while (iVar6 < (int)_DAT_014b848c);
    if (2 < (int)_DAT_014b8550) {
      fVar1 = param_2[1];
      iVar6 = 0;
      if (0 < (int)_DAT_014b8550) {
        puVar7 = (uint *)&DAT_014b8554;
        do {
          uVar3 = iVar6 + 1;
          if (uVar3 == _DAT_014b8550) {
            uVar3 = uVar3 ^ _DAT_014b8550;
          }
          bVar2 = (float)puVar7[1] < fVar1;
          if (*(float *)(&DAT_014b8558 + uVar3 * 0xc) < fVar1) {
            bVar2 = bVar2 | 2;
          }
          switch(bVar2) {
          case 0:
            iVar4 = _DAT_014b8614 * 0xc;
            if ((uint *)(&DAT_014b8618 + iVar4) != puVar7) {
              *(uint *)(&DAT_014b8618 + iVar4) = *puVar7;
              *(uint *)(&DAT_014b861c + iVar4) = puVar7[1];
              *(uint *)(&DAT_014b8620 + iVar4) = puVar7[2];
            }
            _DAT_014b8614 = _DAT_014b8614 + 1;
            break;
          case 1:
            core_dcube_cpp_clipEdgeToPlane_FUN_004484c0
                      (&DAT_014b8554 + uVar3 * 0xc,puVar7,&DAT_014b8618 + _DAT_014b8614 * 0xc,0,0,0,
                       0xbff00000,0,0,(double)fVar1);
            _DAT_014b8614 = _DAT_014b8614 + 1;
            break;
          case 2:
            iVar4 = _DAT_014b8614 * 0xc;
            if ((uint *)(&DAT_014b8618 + iVar4) != puVar7) {
              *(uint *)(&DAT_014b8618 + iVar4) = *puVar7;
              *(uint *)(&DAT_014b861c + iVar4) = puVar7[1];
              *(uint *)(&DAT_014b8620 + iVar4) = puVar7[2];
            }
            _DAT_014b8614 = _DAT_014b8614 + 1;
            core_dcube_cpp_clipEdgeToPlane_FUN_004484c0
                      (puVar7,&DAT_014b8554 + uVar3 * 0xc,&DAT_014b8618 + _DAT_014b8614 * 0xc,0,0,0,
                       0xbff00000,0,0,(double)fVar1);
            _DAT_014b8614 = _DAT_014b8614 + 1;
          }
          iVar6 = iVar6 + 1;
          puVar7 = puVar7 + 3;
        } while (iVar6 < (int)_DAT_014b8550);
      }
      if (2 < (int)_DAT_014b8614) {
        fVar1 = *param_3;
        iVar6 = 0;
        if (0 < (int)_DAT_014b8614) {
          pfVar8 = (float *)&DAT_014b8618;
          do {
            uVar3 = iVar6 + 1;
            if (uVar3 == _DAT_014b8614) {
              uVar3 = uVar3 ^ _DAT_014b8614;
            }
            pfVar10 = (float *)(&DAT_014b8618 + uVar3 * 0xc);
            bVar2 = fVar1 < *pfVar8;
            if (fVar1 < *pfVar10) {
              bVar2 = bVar2 | 2;
            }
            switch(bVar2) {
            case 0:
              iVar4 = _DAT_014b86d8 * 0xc;
              if ((float *)(&DAT_014b86dc + iVar4) != pfVar8) {
                *(float *)(&DAT_014b86dc + iVar4) = *pfVar8;
                *(float *)(&DAT_014b86e0 + iVar4) = pfVar8[1];
                *(float *)(&DAT_014b86e4 + iVar4) = pfVar8[2];
              }
              _DAT_014b86d8 = _DAT_014b86d8 + 1;
              break;
            case 1:
              core_dcube_cpp_clipEdgeToPlane_FUN_004484c0
                        (pfVar10,pfVar8,&DAT_014b86dc + _DAT_014b86d8 * 0xc,0,0x3ff00000,0,0,0,0,
                         (double)-fVar1);
              _DAT_014b86d8 = _DAT_014b86d8 + 1;
              break;
            case 2:
              iVar4 = _DAT_014b86d8 * 0xc;
              if ((float *)(&DAT_014b86dc + iVar4) != pfVar8) {
                *(float *)(&DAT_014b86dc + iVar4) = *pfVar8;
                *(float *)(&DAT_014b86e0 + iVar4) = pfVar8[1];
                *(float *)(&DAT_014b86e4 + iVar4) = pfVar8[2];
              }
              _DAT_014b86d8 = _DAT_014b86d8 + 1;
              core_dcube_cpp_clipEdgeToPlane_FUN_004484c0
                        (pfVar8,pfVar10,&DAT_014b86dc + _DAT_014b86d8 * 0xc,0,0x3ff00000,0,0,0,0,
                         (double)-fVar1);
              _DAT_014b86d8 = _DAT_014b86d8 + 1;
            }
            iVar6 = iVar6 + 1;
            pfVar8 = pfVar8 + 3;
          } while (iVar6 < (int)_DAT_014b8614);
        }
        if (2 < (int)_DAT_014b86d8) {
          fVar1 = *param_2;
          iVar6 = 0;
          if (0 < (int)_DAT_014b86d8) {
            pfVar8 = (float *)&DAT_014b86dc;
            do {
              uVar3 = iVar6 + 1;
              if (uVar3 == _DAT_014b86d8) {
                uVar3 = uVar3 ^ _DAT_014b86d8;
              }
              pfVar10 = (float *)(&DAT_014b86dc + uVar3 * 0xc);
              bVar2 = *pfVar8 < fVar1;
              if (*pfVar10 < fVar1) {
                bVar2 = bVar2 | 2;
              }
              switch(bVar2) {
              case 0:
                iVar4 = _DAT_014b879c * 0xc;
                if ((float *)(&DAT_014b87a0 + iVar4) != pfVar8) {
                  *(float *)(&DAT_014b87a0 + iVar4) = *pfVar8;
                  *(float *)(&DAT_014b87a4 + iVar4) = pfVar8[1];
                  *(float *)(&DAT_014b87a8 + iVar4) = pfVar8[2];
                }
                _DAT_014b879c = _DAT_014b879c + 1;
                break;
              case 1:
                core_dcube_cpp_clipEdgeToPlane_FUN_004484c0
                          (pfVar10,pfVar8,&DAT_014b87a0 + _DAT_014b879c * 0xc,0,0xbff00000,0,0,0,0,
                           (double)fVar1);
                _DAT_014b879c = _DAT_014b879c + 1;
                break;
              case 2:
                iVar4 = _DAT_014b879c * 0xc;
                if ((float *)(&DAT_014b87a0 + iVar4) != pfVar8) {
                  *(float *)(&DAT_014b87a0 + iVar4) = *pfVar8;
                  *(float *)(&DAT_014b87a4 + iVar4) = pfVar8[1];
                  *(float *)(&DAT_014b87a8 + iVar4) = pfVar8[2];
                }
                _DAT_014b879c = _DAT_014b879c + 1;
                core_dcube_cpp_clipEdgeToPlane_FUN_004484c0
                          (pfVar8,pfVar10,&DAT_014b87a0 + _DAT_014b879c * 0xc,0,0xbff00000,0,0,0,0,
                           (double)fVar1);
                _DAT_014b879c = _DAT_014b879c + 1;
              }
              iVar6 = iVar6 + 1;
              pfVar8 = pfVar8 + 3;
            } while (iVar6 < (int)_DAT_014b86d8);
          }
          if (2 < (int)_DAT_014b879c) {
            fVar1 = param_2[2];
            iVar6 = 0;
            if (0 < (int)_DAT_014b879c) {
              puVar7 = (uint *)&DAT_014b87a0;
              do {
                uVar3 = iVar6 + 1;
                if (uVar3 == _DAT_014b879c) {
                  uVar3 = uVar3 ^ _DAT_014b879c;
                }
                bVar2 = (float)puVar7[2] < fVar1;
                if (*(float *)(&DAT_014b87a8 + uVar3 * 0xc) < fVar1) {
                  bVar2 = bVar2 | 2;
                }
                switch(bVar2) {
                case 0:
                  iVar4 = _DAT_014b8860 * 0xc;
                  if ((uint *)(&DAT_014b8864 + iVar4) != puVar7) {
                    *(uint *)(&DAT_014b8864 + iVar4) = *puVar7;
                    *(uint *)(&DAT_014b8868 + iVar4) = puVar7[1];
                    *(uint *)(&DAT_014b886c + iVar4) = puVar7[2];
                  }
                  _DAT_014b8860 = _DAT_014b8860 + 1;
                  break;
                case 1:
                  core_dcube_cpp_clipEdgeToPlane_FUN_004484c0
                            (&DAT_014b87a0 + uVar3 * 0xc,puVar7,&DAT_014b8864 + _DAT_014b8860 * 0xc,
                             0,0,0,0,0,0xbff00000,(double)fVar1);
                  _DAT_014b8860 = _DAT_014b8860 + 1;
                  break;
                case 2:
                  iVar4 = _DAT_014b8860 * 0xc;
                  if ((uint *)(&DAT_014b8864 + iVar4) != puVar7) {
                    *(uint *)(&DAT_014b8864 + iVar4) = *puVar7;
                    *(uint *)(&DAT_014b8868 + iVar4) = puVar7[1];
                    *(uint *)(&DAT_014b886c + iVar4) = puVar7[2];
                  }
                  _DAT_014b8860 = _DAT_014b8860 + 1;
                  core_dcube_cpp_clipEdgeToPlane_FUN_004484c0
                            (puVar7,&DAT_014b87a0 + uVar3 * 0xc,&DAT_014b8864 + _DAT_014b8860 * 0xc,
                             0,0,0,0,0,0xbff00000,(double)fVar1);
                  _DAT_014b8860 = _DAT_014b8860 + 1;
                }
                iVar6 = iVar6 + 1;
                puVar7 = puVar7 + 3;
              } while (iVar6 < (int)_DAT_014b879c);
            }
            if (2 < (int)_DAT_014b8860) {
              fVar1 = param_3[2];
              iVar6 = 0;
              if (0 < (int)_DAT_014b8860) {
                puVar7 = (uint *)&DAT_014b8864;
                do {
                  uVar3 = iVar6 + 1;
                  if (uVar3 == _DAT_014b8860) {
                    uVar3 = uVar3 ^ _DAT_014b8860;
                  }
                  bVar2 = fVar1 < (float)puVar7[2];
                  if (fVar1 < *(float *)(&DAT_014b886c + uVar3 * 0xc)) {
                    bVar2 = bVar2 | 2;
                  }
                  switch(bVar2) {
                  case 0:
                    iVar4 = _DAT_014b8924 * 0xc;
                    if ((uint *)(&DAT_014b8928 + iVar4) != puVar7) {
                      *(uint *)(&DAT_014b8928 + iVar4) = *puVar7;
                      *(uint *)(&DAT_014b892c + iVar4) = puVar7[1];
                      *(uint *)(&DAT_014b8930 + iVar4) = puVar7[2];
                    }
                    _DAT_014b8924 = _DAT_014b8924 + 1;
                    break;
                  case 1:
                    core_dcube_cpp_clipEdgeToPlane_FUN_004484c0
                              (&DAT_014b8864 + uVar3 * 0xc,puVar7,
                               &DAT_014b8928 + _DAT_014b8924 * 0xc,0,0,0,0,0,0xbff00000,
                               (double)fVar1);
                    _DAT_014b8924 = _DAT_014b8924 + 1;
                    break;
                  case 2:
                    iVar4 = _DAT_014b8924 * 0xc;
                    if ((uint *)(&DAT_014b8928 + iVar4) != puVar7) {
                      *(uint *)(&DAT_014b8928 + iVar4) = *puVar7;
                      *(uint *)(&DAT_014b892c + iVar4) = puVar7[1];
                      *(uint *)(&DAT_014b8930 + iVar4) = puVar7[2];
                    }
                    _DAT_014b8924 = _DAT_014b8924 + 1;
                    core_dcube_cpp_clipEdgeToPlane_FUN_004484c0
                              (puVar7,&DAT_014b8864 + uVar3 * 0xc,
                               &DAT_014b8928 + _DAT_014b8924 * 0xc,0,0,0,0,0,0xbff00000,
                               (double)fVar1);
                    _DAT_014b8924 = _DAT_014b8924 + 1;
                  }
                  iVar6 = iVar6 + 1;
                  puVar7 = puVar7 + 3;
                } while (iVar6 < (int)_DAT_014b8860);
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
