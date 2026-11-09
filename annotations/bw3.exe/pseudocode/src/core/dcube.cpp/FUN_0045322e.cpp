// Name: core_dcube.cpp_FUN_0045322e
// Address: 0045322e
// Address Range: [[0045322e, 00453c3b]]
// Convention: unknown
// Signature: undefined4 core_dcube_cpp_FUN_0045322e(undefined4 *param_1,float *param_2,float *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_dcube_cpp_FUN_0045322e(uint *param_1,float *param_2,float *param_3)

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
  
  _DAT_015485fc = 3;
  puVar7 = (uint *)*param_1;
  if (puVar7 != (uint *)&DAT_01548600) {
    _DAT_01548600 = *puVar7;
    _DAT_01548608 = puVar7[2];
    _DAT_01548604 = puVar7[1];
  }
  puVar7 = (uint *)param_1[1];
  if (puVar7 != (uint *)&DAT_0154860c) {
    _DAT_0154860c = *puVar7;
    _DAT_01548614 = puVar7[2];
    _DAT_01548610 = puVar7[1];
  }
  puVar7 = (uint *)param_1[2];
  if (puVar7 != (uint *)&DAT_01548618) {
    _DAT_01548618 = *puVar7;
    _DAT_01548620 = puVar7[2];
    _DAT_0154861c = puVar7[1];
  }
  bVar9 = 0xff;
  iVar6 = 0;
  bVar2 = 0;
  pfVar8 = (float *)&DAT_01548600;
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
    _DAT_01548a94 = 3;
    if (puVar7 != (uint *)&DAT_01548a98) {
      _DAT_01548a98 = *puVar7;
      _DAT_01548aa0 = puVar7[2];
      _DAT_01548a9c = puVar7[1];
    }
    puVar7 = (uint *)param_1[1];
    if (puVar7 != (uint *)&DAT_01548aa4) {
      _DAT_01548aa4 = *puVar7;
      _DAT_01548aac = puVar7[2];
      _DAT_01548aa8 = puVar7[1];
    }
    puVar7 = (uint *)param_1[2];
    if (puVar7 != (uint *)&DAT_01548ab0) {
      _DAT_01548ab0 = *puVar7;
      _DAT_01548ab8 = puVar7[2];
      _DAT_01548ab4 = puVar7[1];
    }
    return 1;
  }
  if (bVar9 == 0) {
    fVar1 = param_3[1];
    iVar6 = 0;
    puVar7 = (uint *)&DAT_01548600;
    _DAT_015486c0 = 0;
    _DAT_01548784 = 0;
    _DAT_01548848 = 0;
    _DAT_0154890c = 0;
    _DAT_015489d0 = 0;
    _DAT_01548a94 = 0;
    do {
      uVar3 = iVar6 + 1;
      if (uVar3 == _DAT_015485fc) {
        uVar3 = uVar3 ^ _DAT_015485fc;
      }
      bVar2 = fVar1 < (float)puVar7[1];
      if (fVar1 < *(float *)(&DAT_01548604 + uVar3 * 0xc)) {
        bVar2 = bVar2 | 2;
      }
      switch(bVar2) {
      case 0:
        iVar4 = _DAT_015486c0 * 0xc;
        if ((uint *)(&DAT_015486c4 + iVar4) != puVar7) {
          *(uint *)(&DAT_015486c4 + iVar4) = *puVar7;
          *(uint *)(&DAT_015486c8 + iVar4) = puVar7[1];
          *(uint *)(&DAT_015486cc + iVar4) = puVar7[2];
        }
        _DAT_015486c0 = _DAT_015486c0 + 1;
        break;
      case 1:
        core_dcube_cpp_clipEdgeToPlane_FUN_004515b0
                  (&DAT_01548600 + uVar3 * 0xc,puVar7,&DAT_015486c4 + _DAT_015486c0 * 0xc,0,0,0,
                   0x3ff00000,0,0,(double)-fVar1);
        _DAT_015486c0 = _DAT_015486c0 + 1;
        break;
      case 2:
        iVar4 = _DAT_015486c0 * 0xc;
        if ((uint *)(&DAT_015486c4 + iVar4) != puVar7) {
          *(uint *)(&DAT_015486c4 + iVar4) = *puVar7;
          *(uint *)(&DAT_015486c8 + iVar4) = puVar7[1];
          *(uint *)(&DAT_015486cc + iVar4) = puVar7[2];
        }
        _DAT_015486c0 = _DAT_015486c0 + 1;
        core_dcube_cpp_clipEdgeToPlane_FUN_004515b0
                  (puVar7,&DAT_01548600 + uVar3 * 0xc,&DAT_015486c4 + _DAT_015486c0 * 0xc,0,0,0,
                   0x3ff00000,0,0,(double)-fVar1);
        _DAT_015486c0 = _DAT_015486c0 + 1;
      }
      iVar6 = iVar6 + 1;
      puVar7 = puVar7 + 3;
    } while (iVar6 < (int)_DAT_015485fc);
    if (2 < (int)_DAT_015486c0) {
      fVar1 = param_2[1];
      iVar6 = 0;
      if (0 < (int)_DAT_015486c0) {
        puVar7 = (uint *)&DAT_015486c4;
        do {
          uVar3 = iVar6 + 1;
          if (uVar3 == _DAT_015486c0) {
            uVar3 = uVar3 ^ _DAT_015486c0;
          }
          bVar2 = (float)puVar7[1] < fVar1;
          if (*(float *)(&DAT_015486c8 + uVar3 * 0xc) < fVar1) {
            bVar2 = bVar2 | 2;
          }
          switch(bVar2) {
          case 0:
            iVar4 = _DAT_01548784 * 0xc;
            if ((uint *)(&DAT_01548788 + iVar4) != puVar7) {
              *(uint *)(&DAT_01548788 + iVar4) = *puVar7;
              *(uint *)(&DAT_0154878c + iVar4) = puVar7[1];
              *(uint *)(&DAT_01548790 + iVar4) = puVar7[2];
            }
            _DAT_01548784 = _DAT_01548784 + 1;
            break;
          case 1:
            core_dcube_cpp_clipEdgeToPlane_FUN_004515b0
                      (&DAT_015486c4 + uVar3 * 0xc,puVar7,&DAT_01548788 + _DAT_01548784 * 0xc,0,0,0,
                       0xbff00000,0,0,(double)fVar1);
            _DAT_01548784 = _DAT_01548784 + 1;
            break;
          case 2:
            iVar4 = _DAT_01548784 * 0xc;
            if ((uint *)(&DAT_01548788 + iVar4) != puVar7) {
              *(uint *)(&DAT_01548788 + iVar4) = *puVar7;
              *(uint *)(&DAT_0154878c + iVar4) = puVar7[1];
              *(uint *)(&DAT_01548790 + iVar4) = puVar7[2];
            }
            _DAT_01548784 = _DAT_01548784 + 1;
            core_dcube_cpp_clipEdgeToPlane_FUN_004515b0
                      (puVar7,&DAT_015486c4 + uVar3 * 0xc,&DAT_01548788 + _DAT_01548784 * 0xc,0,0,0,
                       0xbff00000,0,0,(double)fVar1);
            _DAT_01548784 = _DAT_01548784 + 1;
          }
          iVar6 = iVar6 + 1;
          puVar7 = puVar7 + 3;
        } while (iVar6 < (int)_DAT_015486c0);
      }
      if (2 < (int)_DAT_01548784) {
        fVar1 = *param_3;
        iVar6 = 0;
        if (0 < (int)_DAT_01548784) {
          pfVar8 = (float *)&DAT_01548788;
          do {
            uVar3 = iVar6 + 1;
            if (uVar3 == _DAT_01548784) {
              uVar3 = uVar3 ^ _DAT_01548784;
            }
            pfVar10 = (float *)(&DAT_01548788 + uVar3 * 0xc);
            bVar2 = fVar1 < *pfVar8;
            if (fVar1 < *pfVar10) {
              bVar2 = bVar2 | 2;
            }
            switch(bVar2) {
            case 0:
              iVar4 = _DAT_01548848 * 0xc;
              if ((float *)(&DAT_0154884c + iVar4) != pfVar8) {
                *(float *)(&DAT_0154884c + iVar4) = *pfVar8;
                *(float *)(&DAT_01548850 + iVar4) = pfVar8[1];
                *(float *)(&DAT_01548854 + iVar4) = pfVar8[2];
              }
              _DAT_01548848 = _DAT_01548848 + 1;
              break;
            case 1:
              core_dcube_cpp_clipEdgeToPlane_FUN_004515b0
                        (pfVar10,pfVar8,&DAT_0154884c + _DAT_01548848 * 0xc,0,0x3ff00000,0,0,0,0,
                         (double)-fVar1);
              _DAT_01548848 = _DAT_01548848 + 1;
              break;
            case 2:
              iVar4 = _DAT_01548848 * 0xc;
              if ((float *)(&DAT_0154884c + iVar4) != pfVar8) {
                *(float *)(&DAT_0154884c + iVar4) = *pfVar8;
                *(float *)(&DAT_01548850 + iVar4) = pfVar8[1];
                *(float *)(&DAT_01548854 + iVar4) = pfVar8[2];
              }
              _DAT_01548848 = _DAT_01548848 + 1;
              core_dcube_cpp_clipEdgeToPlane_FUN_004515b0
                        (pfVar8,pfVar10,&DAT_0154884c + _DAT_01548848 * 0xc,0,0x3ff00000,0,0,0,0,
                         (double)-fVar1);
              _DAT_01548848 = _DAT_01548848 + 1;
            }
            iVar6 = iVar6 + 1;
            pfVar8 = pfVar8 + 3;
          } while (iVar6 < (int)_DAT_01548784);
        }
        if (2 < (int)_DAT_01548848) {
          fVar1 = *param_2;
          iVar6 = 0;
          if (0 < (int)_DAT_01548848) {
            pfVar8 = (float *)&DAT_0154884c;
            do {
              uVar3 = iVar6 + 1;
              if (uVar3 == _DAT_01548848) {
                uVar3 = uVar3 ^ _DAT_01548848;
              }
              pfVar10 = (float *)(&DAT_0154884c + uVar3 * 0xc);
              bVar2 = *pfVar8 < fVar1;
              if (*pfVar10 < fVar1) {
                bVar2 = bVar2 | 2;
              }
              switch(bVar2) {
              case 0:
                iVar4 = _DAT_0154890c * 0xc;
                if ((float *)(&DAT_01548910 + iVar4) != pfVar8) {
                  *(float *)(&DAT_01548910 + iVar4) = *pfVar8;
                  *(float *)(&DAT_01548914 + iVar4) = pfVar8[1];
                  *(float *)(&DAT_01548918 + iVar4) = pfVar8[2];
                }
                _DAT_0154890c = _DAT_0154890c + 1;
                break;
              case 1:
                core_dcube_cpp_clipEdgeToPlane_FUN_004515b0
                          (pfVar10,pfVar8,&DAT_01548910 + _DAT_0154890c * 0xc,0,0xbff00000,0,0,0,0,
                           (double)fVar1);
                _DAT_0154890c = _DAT_0154890c + 1;
                break;
              case 2:
                iVar4 = _DAT_0154890c * 0xc;
                if ((float *)(&DAT_01548910 + iVar4) != pfVar8) {
                  *(float *)(&DAT_01548910 + iVar4) = *pfVar8;
                  *(float *)(&DAT_01548914 + iVar4) = pfVar8[1];
                  *(float *)(&DAT_01548918 + iVar4) = pfVar8[2];
                }
                _DAT_0154890c = _DAT_0154890c + 1;
                core_dcube_cpp_clipEdgeToPlane_FUN_004515b0
                          (pfVar8,pfVar10,&DAT_01548910 + _DAT_0154890c * 0xc,0,0xbff00000,0,0,0,0,
                           (double)fVar1);
                _DAT_0154890c = _DAT_0154890c + 1;
              }
              iVar6 = iVar6 + 1;
              pfVar8 = pfVar8 + 3;
            } while (iVar6 < (int)_DAT_01548848);
          }
          if (2 < (int)_DAT_0154890c) {
            fVar1 = param_2[2];
            iVar6 = 0;
            if (0 < (int)_DAT_0154890c) {
              puVar7 = (uint *)&DAT_01548910;
              do {
                uVar3 = iVar6 + 1;
                if (uVar3 == _DAT_0154890c) {
                  uVar3 = uVar3 ^ _DAT_0154890c;
                }
                bVar2 = (float)puVar7[2] < fVar1;
                if (*(float *)(&DAT_01548918 + uVar3 * 0xc) < fVar1) {
                  bVar2 = bVar2 | 2;
                }
                switch(bVar2) {
                case 0:
                  iVar4 = _DAT_015489d0 * 0xc;
                  if ((uint *)(&DAT_015489d4 + iVar4) != puVar7) {
                    *(uint *)(&DAT_015489d4 + iVar4) = *puVar7;
                    *(uint *)(&DAT_015489d8 + iVar4) = puVar7[1];
                    *(uint *)(&DAT_015489dc + iVar4) = puVar7[2];
                  }
                  _DAT_015489d0 = _DAT_015489d0 + 1;
                  break;
                case 1:
                  core_dcube_cpp_clipEdgeToPlane_FUN_004515b0
                            (&DAT_01548910 + uVar3 * 0xc,puVar7,&DAT_015489d4 + _DAT_015489d0 * 0xc,
                             0,0,0,0,0,0xbff00000,(double)fVar1);
                  _DAT_015489d0 = _DAT_015489d0 + 1;
                  break;
                case 2:
                  iVar4 = _DAT_015489d0 * 0xc;
                  if ((uint *)(&DAT_015489d4 + iVar4) != puVar7) {
                    *(uint *)(&DAT_015489d4 + iVar4) = *puVar7;
                    *(uint *)(&DAT_015489d8 + iVar4) = puVar7[1];
                    *(uint *)(&DAT_015489dc + iVar4) = puVar7[2];
                  }
                  _DAT_015489d0 = _DAT_015489d0 + 1;
                  core_dcube_cpp_clipEdgeToPlane_FUN_004515b0
                            (puVar7,&DAT_01548910 + uVar3 * 0xc,&DAT_015489d4 + _DAT_015489d0 * 0xc,
                             0,0,0,0,0,0xbff00000,(double)fVar1);
                  _DAT_015489d0 = _DAT_015489d0 + 1;
                }
                iVar6 = iVar6 + 1;
                puVar7 = puVar7 + 3;
              } while (iVar6 < (int)_DAT_0154890c);
            }
            if (2 < (int)_DAT_015489d0) {
              fVar1 = param_3[2];
              iVar6 = 0;
              if (0 < (int)_DAT_015489d0) {
                puVar7 = (uint *)&DAT_015489d4;
                do {
                  uVar3 = iVar6 + 1;
                  if (uVar3 == _DAT_015489d0) {
                    uVar3 = uVar3 ^ _DAT_015489d0;
                  }
                  bVar2 = fVar1 < (float)puVar7[2];
                  if (fVar1 < *(float *)(&DAT_015489dc + uVar3 * 0xc)) {
                    bVar2 = bVar2 | 2;
                  }
                  switch(bVar2) {
                  case 0:
                    iVar4 = _DAT_01548a94 * 0xc;
                    if ((uint *)(&DAT_01548a98 + iVar4) != puVar7) {
                      *(uint *)(&DAT_01548a98 + iVar4) = *puVar7;
                      *(uint *)(&DAT_01548a9c + iVar4) = puVar7[1];
                      *(uint *)(&DAT_01548aa0 + iVar4) = puVar7[2];
                    }
                    _DAT_01548a94 = _DAT_01548a94 + 1;
                    break;
                  case 1:
                    core_dcube_cpp_clipEdgeToPlane_FUN_004515b0
                              (&DAT_015489d4 + uVar3 * 0xc,puVar7,
                               &DAT_01548a98 + _DAT_01548a94 * 0xc,0,0,0,0,0,0xbff00000,
                               (double)fVar1);
                    _DAT_01548a94 = _DAT_01548a94 + 1;
                    break;
                  case 2:
                    iVar4 = _DAT_01548a94 * 0xc;
                    if ((uint *)(&DAT_01548a98 + iVar4) != puVar7) {
                      *(uint *)(&DAT_01548a98 + iVar4) = *puVar7;
                      *(uint *)(&DAT_01548a9c + iVar4) = puVar7[1];
                      *(uint *)(&DAT_01548aa0 + iVar4) = puVar7[2];
                    }
                    _DAT_01548a94 = _DAT_01548a94 + 1;
                    core_dcube_cpp_clipEdgeToPlane_FUN_004515b0
                              (puVar7,&DAT_015489d4 + uVar3 * 0xc,
                               &DAT_01548a98 + _DAT_01548a94 * 0xc,0,0,0,0,0,0xbff00000,
                               (double)fVar1);
                    _DAT_01548a94 = _DAT_01548a94 + 1;
                  }
                  iVar6 = iVar6 + 1;
                  puVar7 = puVar7 + 3;
                } while (iVar6 < (int)_DAT_015489d0);
              }
              if (2 < _DAT_01548a94) {
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
