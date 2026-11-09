// Name: core_dcube.cpp_FUN_00445a2e
// Address: 00445a2e
// Address Range: [[00445a2e, 0044643b]]
// Convention: unknown
// Signature: undefined4 core_dcube_cpp_FUN_00445a2e(undefined4 *param_1,float *param_2,float *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_dcube_cpp_FUN_00445a2e(uint *param_1,float *param_2,float *param_3)

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
  
  _DAT_0151084c = 3;
  puVar7 = (uint *)*param_1;
  if (puVar7 != (uint *)&DAT_01510850) {
    _DAT_01510850 = *puVar7;
    _DAT_01510858 = puVar7[2];
    _DAT_01510854 = puVar7[1];
  }
  puVar7 = (uint *)param_1[1];
  if (puVar7 != (uint *)&DAT_0151085c) {
    _DAT_0151085c = *puVar7;
    _DAT_01510864 = puVar7[2];
    _DAT_01510860 = puVar7[1];
  }
  puVar7 = (uint *)param_1[2];
  if (puVar7 != (uint *)&DAT_01510868) {
    _DAT_01510868 = *puVar7;
    _DAT_01510870 = puVar7[2];
    _DAT_0151086c = puVar7[1];
  }
  bVar9 = 0xff;
  iVar6 = 0;
  bVar2 = 0;
  pfVar8 = (float *)&DAT_01510850;
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
    _DAT_01510ce4 = 3;
    if (puVar7 != (uint *)&DAT_01510ce8) {
      _DAT_01510ce8 = *puVar7;
      _DAT_01510cf0 = puVar7[2];
      _DAT_01510cec = puVar7[1];
    }
    puVar7 = (uint *)param_1[1];
    if (puVar7 != (uint *)&DAT_01510cf4) {
      _DAT_01510cf4 = *puVar7;
      _DAT_01510cfc = puVar7[2];
      _DAT_01510cf8 = puVar7[1];
    }
    puVar7 = (uint *)param_1[2];
    if (puVar7 != (uint *)&DAT_01510d00) {
      _DAT_01510d00 = *puVar7;
      _DAT_01510d08 = puVar7[2];
      _DAT_01510d04 = puVar7[1];
    }
    return 1;
  }
  if (bVar9 == 0) {
    fVar1 = param_3[1];
    iVar6 = 0;
    puVar7 = (uint *)&DAT_01510850;
    _DAT_01510910 = 0;
    _DAT_015109d4 = 0;
    _DAT_01510a98 = 0;
    _DAT_01510b5c = 0;
    _DAT_01510c20 = 0;
    _DAT_01510ce4 = 0;
    do {
      uVar3 = iVar6 + 1;
      if (uVar3 == _DAT_0151084c) {
        uVar3 = uVar3 ^ _DAT_0151084c;
      }
      bVar2 = fVar1 < (float)puVar7[1];
      if (fVar1 < *(float *)(&DAT_01510854 + uVar3 * 0xc)) {
        bVar2 = bVar2 | 2;
      }
      switch(bVar2) {
      case 0:
        iVar4 = _DAT_01510910 * 0xc;
        if ((uint *)(&DAT_01510914 + iVar4) != puVar7) {
          *(uint *)(&DAT_01510914 + iVar4) = *puVar7;
          *(uint *)(&DAT_01510918 + iVar4) = puVar7[1];
          *(uint *)(&DAT_0151091c + iVar4) = puVar7[2];
        }
        _DAT_01510910 = _DAT_01510910 + 1;
        break;
      case 1:
        core_dcube_cpp_clipEdgeToPlane_FUN_00443db0
                  (&DAT_01510850 + uVar3 * 0xc,puVar7,&DAT_01510914 + _DAT_01510910 * 0xc,0,0,0,
                   0x3ff00000,0,0,(double)-fVar1);
        _DAT_01510910 = _DAT_01510910 + 1;
        break;
      case 2:
        iVar4 = _DAT_01510910 * 0xc;
        if ((uint *)(&DAT_01510914 + iVar4) != puVar7) {
          *(uint *)(&DAT_01510914 + iVar4) = *puVar7;
          *(uint *)(&DAT_01510918 + iVar4) = puVar7[1];
          *(uint *)(&DAT_0151091c + iVar4) = puVar7[2];
        }
        _DAT_01510910 = _DAT_01510910 + 1;
        core_dcube_cpp_clipEdgeToPlane_FUN_00443db0
                  (puVar7,&DAT_01510850 + uVar3 * 0xc,&DAT_01510914 + _DAT_01510910 * 0xc,0,0,0,
                   0x3ff00000,0,0,(double)-fVar1);
        _DAT_01510910 = _DAT_01510910 + 1;
      }
      iVar6 = iVar6 + 1;
      puVar7 = puVar7 + 3;
    } while (iVar6 < (int)_DAT_0151084c);
    if (2 < (int)_DAT_01510910) {
      fVar1 = param_2[1];
      iVar6 = 0;
      if (0 < (int)_DAT_01510910) {
        puVar7 = (uint *)&DAT_01510914;
        do {
          uVar3 = iVar6 + 1;
          if (uVar3 == _DAT_01510910) {
            uVar3 = uVar3 ^ _DAT_01510910;
          }
          bVar2 = (float)puVar7[1] < fVar1;
          if (*(float *)(&DAT_01510918 + uVar3 * 0xc) < fVar1) {
            bVar2 = bVar2 | 2;
          }
          switch(bVar2) {
          case 0:
            iVar4 = _DAT_015109d4 * 0xc;
            if ((uint *)(&DAT_015109d8 + iVar4) != puVar7) {
              *(uint *)(&DAT_015109d8 + iVar4) = *puVar7;
              *(uint *)(&DAT_015109dc + iVar4) = puVar7[1];
              *(uint *)(&DAT_015109e0 + iVar4) = puVar7[2];
            }
            _DAT_015109d4 = _DAT_015109d4 + 1;
            break;
          case 1:
            core_dcube_cpp_clipEdgeToPlane_FUN_00443db0
                      (&DAT_01510914 + uVar3 * 0xc,puVar7,&DAT_015109d8 + _DAT_015109d4 * 0xc,0,0,0,
                       0xbff00000,0,0,(double)fVar1);
            _DAT_015109d4 = _DAT_015109d4 + 1;
            break;
          case 2:
            iVar4 = _DAT_015109d4 * 0xc;
            if ((uint *)(&DAT_015109d8 + iVar4) != puVar7) {
              *(uint *)(&DAT_015109d8 + iVar4) = *puVar7;
              *(uint *)(&DAT_015109dc + iVar4) = puVar7[1];
              *(uint *)(&DAT_015109e0 + iVar4) = puVar7[2];
            }
            _DAT_015109d4 = _DAT_015109d4 + 1;
            core_dcube_cpp_clipEdgeToPlane_FUN_00443db0
                      (puVar7,&DAT_01510914 + uVar3 * 0xc,&DAT_015109d8 + _DAT_015109d4 * 0xc,0,0,0,
                       0xbff00000,0,0,(double)fVar1);
            _DAT_015109d4 = _DAT_015109d4 + 1;
          }
          iVar6 = iVar6 + 1;
          puVar7 = puVar7 + 3;
        } while (iVar6 < (int)_DAT_01510910);
      }
      if (2 < (int)_DAT_015109d4) {
        fVar1 = *param_3;
        iVar6 = 0;
        if (0 < (int)_DAT_015109d4) {
          pfVar8 = (float *)&DAT_015109d8;
          do {
            uVar3 = iVar6 + 1;
            if (uVar3 == _DAT_015109d4) {
              uVar3 = uVar3 ^ _DAT_015109d4;
            }
            pfVar10 = (float *)(&DAT_015109d8 + uVar3 * 0xc);
            bVar2 = fVar1 < *pfVar8;
            if (fVar1 < *pfVar10) {
              bVar2 = bVar2 | 2;
            }
            switch(bVar2) {
            case 0:
              iVar4 = _DAT_01510a98 * 0xc;
              if ((float *)(&DAT_01510a9c + iVar4) != pfVar8) {
                *(float *)(&DAT_01510a9c + iVar4) = *pfVar8;
                *(float *)(&DAT_01510aa0 + iVar4) = pfVar8[1];
                *(float *)(&DAT_01510aa4 + iVar4) = pfVar8[2];
              }
              _DAT_01510a98 = _DAT_01510a98 + 1;
              break;
            case 1:
              core_dcube_cpp_clipEdgeToPlane_FUN_00443db0
                        (pfVar10,pfVar8,&DAT_01510a9c + _DAT_01510a98 * 0xc,0,0x3ff00000,0,0,0,0,
                         (double)-fVar1);
              _DAT_01510a98 = _DAT_01510a98 + 1;
              break;
            case 2:
              iVar4 = _DAT_01510a98 * 0xc;
              if ((float *)(&DAT_01510a9c + iVar4) != pfVar8) {
                *(float *)(&DAT_01510a9c + iVar4) = *pfVar8;
                *(float *)(&DAT_01510aa0 + iVar4) = pfVar8[1];
                *(float *)(&DAT_01510aa4 + iVar4) = pfVar8[2];
              }
              _DAT_01510a98 = _DAT_01510a98 + 1;
              core_dcube_cpp_clipEdgeToPlane_FUN_00443db0
                        (pfVar8,pfVar10,&DAT_01510a9c + _DAT_01510a98 * 0xc,0,0x3ff00000,0,0,0,0,
                         (double)-fVar1);
              _DAT_01510a98 = _DAT_01510a98 + 1;
            }
            iVar6 = iVar6 + 1;
            pfVar8 = pfVar8 + 3;
          } while (iVar6 < (int)_DAT_015109d4);
        }
        if (2 < (int)_DAT_01510a98) {
          fVar1 = *param_2;
          iVar6 = 0;
          if (0 < (int)_DAT_01510a98) {
            pfVar8 = (float *)&DAT_01510a9c;
            do {
              uVar3 = iVar6 + 1;
              if (uVar3 == _DAT_01510a98) {
                uVar3 = uVar3 ^ _DAT_01510a98;
              }
              pfVar10 = (float *)(&DAT_01510a9c + uVar3 * 0xc);
              bVar2 = *pfVar8 < fVar1;
              if (*pfVar10 < fVar1) {
                bVar2 = bVar2 | 2;
              }
              switch(bVar2) {
              case 0:
                iVar4 = _DAT_01510b5c * 0xc;
                if ((float *)(&DAT_01510b60 + iVar4) != pfVar8) {
                  *(float *)(&DAT_01510b60 + iVar4) = *pfVar8;
                  *(float *)(&DAT_01510b64 + iVar4) = pfVar8[1];
                  *(float *)(&DAT_01510b68 + iVar4) = pfVar8[2];
                }
                _DAT_01510b5c = _DAT_01510b5c + 1;
                break;
              case 1:
                core_dcube_cpp_clipEdgeToPlane_FUN_00443db0
                          (pfVar10,pfVar8,&DAT_01510b60 + _DAT_01510b5c * 0xc,0,0xbff00000,0,0,0,0,
                           (double)fVar1);
                _DAT_01510b5c = _DAT_01510b5c + 1;
                break;
              case 2:
                iVar4 = _DAT_01510b5c * 0xc;
                if ((float *)(&DAT_01510b60 + iVar4) != pfVar8) {
                  *(float *)(&DAT_01510b60 + iVar4) = *pfVar8;
                  *(float *)(&DAT_01510b64 + iVar4) = pfVar8[1];
                  *(float *)(&DAT_01510b68 + iVar4) = pfVar8[2];
                }
                _DAT_01510b5c = _DAT_01510b5c + 1;
                core_dcube_cpp_clipEdgeToPlane_FUN_00443db0
                          (pfVar8,pfVar10,&DAT_01510b60 + _DAT_01510b5c * 0xc,0,0xbff00000,0,0,0,0,
                           (double)fVar1);
                _DAT_01510b5c = _DAT_01510b5c + 1;
              }
              iVar6 = iVar6 + 1;
              pfVar8 = pfVar8 + 3;
            } while (iVar6 < (int)_DAT_01510a98);
          }
          if (2 < (int)_DAT_01510b5c) {
            fVar1 = param_2[2];
            iVar6 = 0;
            if (0 < (int)_DAT_01510b5c) {
              puVar7 = (uint *)&DAT_01510b60;
              do {
                uVar3 = iVar6 + 1;
                if (uVar3 == _DAT_01510b5c) {
                  uVar3 = uVar3 ^ _DAT_01510b5c;
                }
                bVar2 = (float)puVar7[2] < fVar1;
                if (*(float *)(&DAT_01510b68 + uVar3 * 0xc) < fVar1) {
                  bVar2 = bVar2 | 2;
                }
                switch(bVar2) {
                case 0:
                  iVar4 = _DAT_01510c20 * 0xc;
                  if ((uint *)(&DAT_01510c24 + iVar4) != puVar7) {
                    *(uint *)(&DAT_01510c24 + iVar4) = *puVar7;
                    *(uint *)(&DAT_01510c28 + iVar4) = puVar7[1];
                    *(uint *)(&DAT_01510c2c + iVar4) = puVar7[2];
                  }
                  _DAT_01510c20 = _DAT_01510c20 + 1;
                  break;
                case 1:
                  core_dcube_cpp_clipEdgeToPlane_FUN_00443db0
                            (&DAT_01510b60 + uVar3 * 0xc,puVar7,&DAT_01510c24 + _DAT_01510c20 * 0xc,
                             0,0,0,0,0,0xbff00000,(double)fVar1);
                  _DAT_01510c20 = _DAT_01510c20 + 1;
                  break;
                case 2:
                  iVar4 = _DAT_01510c20 * 0xc;
                  if ((uint *)(&DAT_01510c24 + iVar4) != puVar7) {
                    *(uint *)(&DAT_01510c24 + iVar4) = *puVar7;
                    *(uint *)(&DAT_01510c28 + iVar4) = puVar7[1];
                    *(uint *)(&DAT_01510c2c + iVar4) = puVar7[2];
                  }
                  _DAT_01510c20 = _DAT_01510c20 + 1;
                  core_dcube_cpp_clipEdgeToPlane_FUN_00443db0
                            (puVar7,&DAT_01510b60 + uVar3 * 0xc,&DAT_01510c24 + _DAT_01510c20 * 0xc,
                             0,0,0,0,0,0xbff00000,(double)fVar1);
                  _DAT_01510c20 = _DAT_01510c20 + 1;
                }
                iVar6 = iVar6 + 1;
                puVar7 = puVar7 + 3;
              } while (iVar6 < (int)_DAT_01510b5c);
            }
            if (2 < (int)_DAT_01510c20) {
              fVar1 = param_3[2];
              iVar6 = 0;
              if (0 < (int)_DAT_01510c20) {
                puVar7 = (uint *)&DAT_01510c24;
                do {
                  uVar3 = iVar6 + 1;
                  if (uVar3 == _DAT_01510c20) {
                    uVar3 = uVar3 ^ _DAT_01510c20;
                  }
                  bVar2 = fVar1 < (float)puVar7[2];
                  if (fVar1 < *(float *)(&DAT_01510c2c + uVar3 * 0xc)) {
                    bVar2 = bVar2 | 2;
                  }
                  switch(bVar2) {
                  case 0:
                    iVar4 = _DAT_01510ce4 * 0xc;
                    if ((uint *)(&DAT_01510ce8 + iVar4) != puVar7) {
                      *(uint *)(&DAT_01510ce8 + iVar4) = *puVar7;
                      *(uint *)(&DAT_01510cec + iVar4) = puVar7[1];
                      *(uint *)(&DAT_01510cf0 + iVar4) = puVar7[2];
                    }
                    _DAT_01510ce4 = _DAT_01510ce4 + 1;
                    break;
                  case 1:
                    core_dcube_cpp_clipEdgeToPlane_FUN_00443db0
                              (&DAT_01510c24 + uVar3 * 0xc,puVar7,
                               &DAT_01510ce8 + _DAT_01510ce4 * 0xc,0,0,0,0,0,0xbff00000,
                               (double)fVar1);
                    _DAT_01510ce4 = _DAT_01510ce4 + 1;
                    break;
                  case 2:
                    iVar4 = _DAT_01510ce4 * 0xc;
                    if ((uint *)(&DAT_01510ce8 + iVar4) != puVar7) {
                      *(uint *)(&DAT_01510ce8 + iVar4) = *puVar7;
                      *(uint *)(&DAT_01510cec + iVar4) = puVar7[1];
                      *(uint *)(&DAT_01510cf0 + iVar4) = puVar7[2];
                    }
                    _DAT_01510ce4 = _DAT_01510ce4 + 1;
                    core_dcube_cpp_clipEdgeToPlane_FUN_00443db0
                              (puVar7,&DAT_01510c24 + uVar3 * 0xc,
                               &DAT_01510ce8 + _DAT_01510ce4 * 0xc,0,0,0,0,0,0xbff00000,
                               (double)fVar1);
                    _DAT_01510ce4 = _DAT_01510ce4 + 1;
                  }
                  iVar6 = iVar6 + 1;
                  puVar7 = puVar7 + 3;
                } while (iVar6 < (int)_DAT_01510c20);
              }
              if (2 < _DAT_01510ce4) {
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
