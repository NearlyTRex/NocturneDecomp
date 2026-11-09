// Name: core_dcube.cpp_FUN_004570de
// Address: 004570de
// Address Range: [[004570de, 00457aeb]]
// Convention: unknown
// Signature: undefined4 core_dcube_cpp_FUN_004570de(undefined4 *param_1,float *param_2,float *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_dcube_cpp_FUN_004570de(uint *param_1,float *param_2,float *param_3)

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
  
  _DAT_0152bd4c = 3;
  puVar7 = (uint *)*param_1;
  if (puVar7 != (uint *)&DAT_0152bd50) {
    _DAT_0152bd50 = *puVar7;
    _DAT_0152bd58 = puVar7[2];
    _DAT_0152bd54 = puVar7[1];
  }
  puVar7 = (uint *)param_1[1];
  if (puVar7 != (uint *)&DAT_0152bd5c) {
    _DAT_0152bd5c = *puVar7;
    _DAT_0152bd64 = puVar7[2];
    _DAT_0152bd60 = puVar7[1];
  }
  puVar7 = (uint *)param_1[2];
  if (puVar7 != (uint *)&DAT_0152bd68) {
    _DAT_0152bd68 = *puVar7;
    _DAT_0152bd70 = puVar7[2];
    _DAT_0152bd6c = puVar7[1];
  }
  bVar9 = 0xff;
  iVar6 = 0;
  bVar2 = 0;
  pfVar8 = (float *)&DAT_0152bd50;
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
    _DAT_0152c1e4 = 3;
    if (puVar7 != (uint *)&DAT_0152c1e8) {
      _DAT_0152c1e8 = *puVar7;
      _DAT_0152c1f0 = puVar7[2];
      _DAT_0152c1ec = puVar7[1];
    }
    puVar7 = (uint *)param_1[1];
    if (puVar7 != (uint *)&DAT_0152c1f4) {
      _DAT_0152c1f4 = *puVar7;
      _DAT_0152c1fc = puVar7[2];
      _DAT_0152c1f8 = puVar7[1];
    }
    puVar7 = (uint *)param_1[2];
    if (puVar7 != (uint *)&DAT_0152c200) {
      _DAT_0152c200 = *puVar7;
      _DAT_0152c208 = puVar7[2];
      _DAT_0152c204 = puVar7[1];
    }
    return 1;
  }
  if (bVar9 == 0) {
    fVar1 = param_3[1];
    iVar6 = 0;
    puVar7 = (uint *)&DAT_0152bd50;
    _DAT_0152be10 = 0;
    _DAT_0152bed4 = 0;
    _DAT_0152bf98 = 0;
    _DAT_0152c05c = 0;
    _DAT_0152c120 = 0;
    _DAT_0152c1e4 = 0;
    do {
      uVar3 = iVar6 + 1;
      if (uVar3 == _DAT_0152bd4c) {
        uVar3 = uVar3 ^ _DAT_0152bd4c;
      }
      bVar2 = fVar1 < (float)puVar7[1];
      if (fVar1 < *(float *)(&DAT_0152bd54 + uVar3 * 0xc)) {
        bVar2 = bVar2 | 2;
      }
      switch(bVar2) {
      case 0:
        iVar4 = _DAT_0152be10 * 0xc;
        if ((uint *)(&DAT_0152be14 + iVar4) != puVar7) {
          *(uint *)(&DAT_0152be14 + iVar4) = *puVar7;
          *(uint *)(&DAT_0152be18 + iVar4) = puVar7[1];
          *(uint *)(&DAT_0152be1c + iVar4) = puVar7[2];
        }
        _DAT_0152be10 = _DAT_0152be10 + 1;
        break;
      case 1:
        core_dcube_cpp_clipEdgeToPlane_FUN_00455460
                  (&DAT_0152bd50 + uVar3 * 0xc,puVar7,&DAT_0152be14 + _DAT_0152be10 * 0xc,0,0,0,
                   0x3ff00000,0,0,(double)-fVar1);
        _DAT_0152be10 = _DAT_0152be10 + 1;
        break;
      case 2:
        iVar4 = _DAT_0152be10 * 0xc;
        if ((uint *)(&DAT_0152be14 + iVar4) != puVar7) {
          *(uint *)(&DAT_0152be14 + iVar4) = *puVar7;
          *(uint *)(&DAT_0152be18 + iVar4) = puVar7[1];
          *(uint *)(&DAT_0152be1c + iVar4) = puVar7[2];
        }
        _DAT_0152be10 = _DAT_0152be10 + 1;
        core_dcube_cpp_clipEdgeToPlane_FUN_00455460
                  (puVar7,&DAT_0152bd50 + uVar3 * 0xc,&DAT_0152be14 + _DAT_0152be10 * 0xc,0,0,0,
                   0x3ff00000,0,0,(double)-fVar1);
        _DAT_0152be10 = _DAT_0152be10 + 1;
      }
      iVar6 = iVar6 + 1;
      puVar7 = puVar7 + 3;
    } while (iVar6 < (int)_DAT_0152bd4c);
    if (2 < (int)_DAT_0152be10) {
      fVar1 = param_2[1];
      iVar6 = 0;
      if (0 < (int)_DAT_0152be10) {
        puVar7 = (uint *)&DAT_0152be14;
        do {
          uVar3 = iVar6 + 1;
          if (uVar3 == _DAT_0152be10) {
            uVar3 = uVar3 ^ _DAT_0152be10;
          }
          bVar2 = (float)puVar7[1] < fVar1;
          if (*(float *)(&DAT_0152be18 + uVar3 * 0xc) < fVar1) {
            bVar2 = bVar2 | 2;
          }
          switch(bVar2) {
          case 0:
            iVar4 = _DAT_0152bed4 * 0xc;
            if ((uint *)(&DAT_0152bed8 + iVar4) != puVar7) {
              *(uint *)(&DAT_0152bed8 + iVar4) = *puVar7;
              *(uint *)(&DAT_0152bedc + iVar4) = puVar7[1];
              *(uint *)(&DAT_0152bee0 + iVar4) = puVar7[2];
            }
            _DAT_0152bed4 = _DAT_0152bed4 + 1;
            break;
          case 1:
            core_dcube_cpp_clipEdgeToPlane_FUN_00455460
                      (&DAT_0152be14 + uVar3 * 0xc,puVar7,&DAT_0152bed8 + _DAT_0152bed4 * 0xc,0,0,0,
                       0xbff00000,0,0,(double)fVar1);
            _DAT_0152bed4 = _DAT_0152bed4 + 1;
            break;
          case 2:
            iVar4 = _DAT_0152bed4 * 0xc;
            if ((uint *)(&DAT_0152bed8 + iVar4) != puVar7) {
              *(uint *)(&DAT_0152bed8 + iVar4) = *puVar7;
              *(uint *)(&DAT_0152bedc + iVar4) = puVar7[1];
              *(uint *)(&DAT_0152bee0 + iVar4) = puVar7[2];
            }
            _DAT_0152bed4 = _DAT_0152bed4 + 1;
            core_dcube_cpp_clipEdgeToPlane_FUN_00455460
                      (puVar7,&DAT_0152be14 + uVar3 * 0xc,&DAT_0152bed8 + _DAT_0152bed4 * 0xc,0,0,0,
                       0xbff00000,0,0,(double)fVar1);
            _DAT_0152bed4 = _DAT_0152bed4 + 1;
          }
          iVar6 = iVar6 + 1;
          puVar7 = puVar7 + 3;
        } while (iVar6 < (int)_DAT_0152be10);
      }
      if (2 < (int)_DAT_0152bed4) {
        fVar1 = *param_3;
        iVar6 = 0;
        if (0 < (int)_DAT_0152bed4) {
          pfVar8 = (float *)&DAT_0152bed8;
          do {
            uVar3 = iVar6 + 1;
            if (uVar3 == _DAT_0152bed4) {
              uVar3 = uVar3 ^ _DAT_0152bed4;
            }
            pfVar10 = (float *)(&DAT_0152bed8 + uVar3 * 0xc);
            bVar2 = fVar1 < *pfVar8;
            if (fVar1 < *pfVar10) {
              bVar2 = bVar2 | 2;
            }
            switch(bVar2) {
            case 0:
              iVar4 = _DAT_0152bf98 * 0xc;
              if ((float *)(&DAT_0152bf9c + iVar4) != pfVar8) {
                *(float *)(&DAT_0152bf9c + iVar4) = *pfVar8;
                *(float *)(&DAT_0152bfa0 + iVar4) = pfVar8[1];
                *(float *)(&DAT_0152bfa4 + iVar4) = pfVar8[2];
              }
              _DAT_0152bf98 = _DAT_0152bf98 + 1;
              break;
            case 1:
              core_dcube_cpp_clipEdgeToPlane_FUN_00455460
                        (pfVar10,pfVar8,&DAT_0152bf9c + _DAT_0152bf98 * 0xc,0,0x3ff00000,0,0,0,0,
                         (double)-fVar1);
              _DAT_0152bf98 = _DAT_0152bf98 + 1;
              break;
            case 2:
              iVar4 = _DAT_0152bf98 * 0xc;
              if ((float *)(&DAT_0152bf9c + iVar4) != pfVar8) {
                *(float *)(&DAT_0152bf9c + iVar4) = *pfVar8;
                *(float *)(&DAT_0152bfa0 + iVar4) = pfVar8[1];
                *(float *)(&DAT_0152bfa4 + iVar4) = pfVar8[2];
              }
              _DAT_0152bf98 = _DAT_0152bf98 + 1;
              core_dcube_cpp_clipEdgeToPlane_FUN_00455460
                        (pfVar8,pfVar10,&DAT_0152bf9c + _DAT_0152bf98 * 0xc,0,0x3ff00000,0,0,0,0,
                         (double)-fVar1);
              _DAT_0152bf98 = _DAT_0152bf98 + 1;
            }
            iVar6 = iVar6 + 1;
            pfVar8 = pfVar8 + 3;
          } while (iVar6 < (int)_DAT_0152bed4);
        }
        if (2 < (int)_DAT_0152bf98) {
          fVar1 = *param_2;
          iVar6 = 0;
          if (0 < (int)_DAT_0152bf98) {
            pfVar8 = (float *)&DAT_0152bf9c;
            do {
              uVar3 = iVar6 + 1;
              if (uVar3 == _DAT_0152bf98) {
                uVar3 = uVar3 ^ _DAT_0152bf98;
              }
              pfVar10 = (float *)(&DAT_0152bf9c + uVar3 * 0xc);
              bVar2 = *pfVar8 < fVar1;
              if (*pfVar10 < fVar1) {
                bVar2 = bVar2 | 2;
              }
              switch(bVar2) {
              case 0:
                iVar4 = _DAT_0152c05c * 0xc;
                if ((float *)(&DAT_0152c060 + iVar4) != pfVar8) {
                  *(float *)(&DAT_0152c060 + iVar4) = *pfVar8;
                  *(float *)(&DAT_0152c064 + iVar4) = pfVar8[1];
                  *(float *)(&DAT_0152c068 + iVar4) = pfVar8[2];
                }
                _DAT_0152c05c = _DAT_0152c05c + 1;
                break;
              case 1:
                core_dcube_cpp_clipEdgeToPlane_FUN_00455460
                          (pfVar10,pfVar8,&DAT_0152c060 + _DAT_0152c05c * 0xc,0,0xbff00000,0,0,0,0,
                           (double)fVar1);
                _DAT_0152c05c = _DAT_0152c05c + 1;
                break;
              case 2:
                iVar4 = _DAT_0152c05c * 0xc;
                if ((float *)(&DAT_0152c060 + iVar4) != pfVar8) {
                  *(float *)(&DAT_0152c060 + iVar4) = *pfVar8;
                  *(float *)(&DAT_0152c064 + iVar4) = pfVar8[1];
                  *(float *)(&DAT_0152c068 + iVar4) = pfVar8[2];
                }
                _DAT_0152c05c = _DAT_0152c05c + 1;
                core_dcube_cpp_clipEdgeToPlane_FUN_00455460
                          (pfVar8,pfVar10,&DAT_0152c060 + _DAT_0152c05c * 0xc,0,0xbff00000,0,0,0,0,
                           (double)fVar1);
                _DAT_0152c05c = _DAT_0152c05c + 1;
              }
              iVar6 = iVar6 + 1;
              pfVar8 = pfVar8 + 3;
            } while (iVar6 < (int)_DAT_0152bf98);
          }
          if (2 < (int)_DAT_0152c05c) {
            fVar1 = param_2[2];
            iVar6 = 0;
            if (0 < (int)_DAT_0152c05c) {
              puVar7 = (uint *)&DAT_0152c060;
              do {
                uVar3 = iVar6 + 1;
                if (uVar3 == _DAT_0152c05c) {
                  uVar3 = uVar3 ^ _DAT_0152c05c;
                }
                bVar2 = (float)puVar7[2] < fVar1;
                if (*(float *)(&DAT_0152c068 + uVar3 * 0xc) < fVar1) {
                  bVar2 = bVar2 | 2;
                }
                switch(bVar2) {
                case 0:
                  iVar4 = _DAT_0152c120 * 0xc;
                  if ((uint *)(&DAT_0152c124 + iVar4) != puVar7) {
                    *(uint *)(&DAT_0152c124 + iVar4) = *puVar7;
                    *(uint *)(&DAT_0152c128 + iVar4) = puVar7[1];
                    *(uint *)(&DAT_0152c12c + iVar4) = puVar7[2];
                  }
                  _DAT_0152c120 = _DAT_0152c120 + 1;
                  break;
                case 1:
                  core_dcube_cpp_clipEdgeToPlane_FUN_00455460
                            (&DAT_0152c060 + uVar3 * 0xc,puVar7,&DAT_0152c124 + _DAT_0152c120 * 0xc,
                             0,0,0,0,0,0xbff00000,(double)fVar1);
                  _DAT_0152c120 = _DAT_0152c120 + 1;
                  break;
                case 2:
                  iVar4 = _DAT_0152c120 * 0xc;
                  if ((uint *)(&DAT_0152c124 + iVar4) != puVar7) {
                    *(uint *)(&DAT_0152c124 + iVar4) = *puVar7;
                    *(uint *)(&DAT_0152c128 + iVar4) = puVar7[1];
                    *(uint *)(&DAT_0152c12c + iVar4) = puVar7[2];
                  }
                  _DAT_0152c120 = _DAT_0152c120 + 1;
                  core_dcube_cpp_clipEdgeToPlane_FUN_00455460
                            (puVar7,&DAT_0152c060 + uVar3 * 0xc,&DAT_0152c124 + _DAT_0152c120 * 0xc,
                             0,0,0,0,0,0xbff00000,(double)fVar1);
                  _DAT_0152c120 = _DAT_0152c120 + 1;
                }
                iVar6 = iVar6 + 1;
                puVar7 = puVar7 + 3;
              } while (iVar6 < (int)_DAT_0152c05c);
            }
            if (2 < (int)_DAT_0152c120) {
              fVar1 = param_3[2];
              iVar6 = 0;
              if (0 < (int)_DAT_0152c120) {
                puVar7 = (uint *)&DAT_0152c124;
                do {
                  uVar3 = iVar6 + 1;
                  if (uVar3 == _DAT_0152c120) {
                    uVar3 = uVar3 ^ _DAT_0152c120;
                  }
                  bVar2 = fVar1 < (float)puVar7[2];
                  if (fVar1 < *(float *)(&DAT_0152c12c + uVar3 * 0xc)) {
                    bVar2 = bVar2 | 2;
                  }
                  switch(bVar2) {
                  case 0:
                    iVar4 = _DAT_0152c1e4 * 0xc;
                    if ((uint *)(&DAT_0152c1e8 + iVar4) != puVar7) {
                      *(uint *)(&DAT_0152c1e8 + iVar4) = *puVar7;
                      *(uint *)(&DAT_0152c1ec + iVar4) = puVar7[1];
                      *(uint *)(&DAT_0152c1f0 + iVar4) = puVar7[2];
                    }
                    _DAT_0152c1e4 = _DAT_0152c1e4 + 1;
                    break;
                  case 1:
                    core_dcube_cpp_clipEdgeToPlane_FUN_00455460
                              (&DAT_0152c124 + uVar3 * 0xc,puVar7,
                               &DAT_0152c1e8 + _DAT_0152c1e4 * 0xc,0,0,0,0,0,0xbff00000,
                               (double)fVar1);
                    _DAT_0152c1e4 = _DAT_0152c1e4 + 1;
                    break;
                  case 2:
                    iVar4 = _DAT_0152c1e4 * 0xc;
                    if ((uint *)(&DAT_0152c1e8 + iVar4) != puVar7) {
                      *(uint *)(&DAT_0152c1e8 + iVar4) = *puVar7;
                      *(uint *)(&DAT_0152c1ec + iVar4) = puVar7[1];
                      *(uint *)(&DAT_0152c1f0 + iVar4) = puVar7[2];
                    }
                    _DAT_0152c1e4 = _DAT_0152c1e4 + 1;
                    core_dcube_cpp_clipEdgeToPlane_FUN_00455460
                              (puVar7,&DAT_0152c124 + uVar3 * 0xc,
                               &DAT_0152c1e8 + _DAT_0152c1e4 * 0xc,0,0,0,0,0,0xbff00000,
                               (double)fVar1);
                    _DAT_0152c1e4 = _DAT_0152c1e4 + 1;
                  }
                  iVar6 = iVar6 + 1;
                  puVar7 = puVar7 + 3;
                } while (iVar6 < (int)_DAT_0152c120);
              }
              if (2 < _DAT_0152c1e4) {
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
