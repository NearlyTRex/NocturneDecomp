// Name: core_dtri.cpp_clipTriangleToBounds_FUN_0046df40
// Address: 0046df40
// Address Range: [[0046df40, 0046e94d]]
// Convention: unknown
// Signature: undefined4 core_dtri_cpp_clipTriangleToBounds_FUN_0046df40(undefined4 *param_1,float *param_2,float *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_dtri_cpp_clipTriangleToBounds_FUN_0046df40(uint *param_1,float *param_2,float *param_3)

{
  float fVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  float *pfVar6;
  int iVar7;
  uint *puVar8;
  byte bVar9;
  float *pfVar10;
  
  _DAT_01bc996c = 3;
  if (param_1 != (uint *)&DAT_01bc9970) {
    _DAT_01bc9970 = *param_1;
    _DAT_01bc9978 = param_1[2];
    _DAT_01bc9974 = param_1[1];
  }
  if (param_1 + 3 != (uint *)&DAT_01bc997c) {
    _DAT_01bc997c = param_1[3];
    _DAT_01bc9984 = param_1[5];
    _DAT_01bc9980 = param_1[4];
  }
  if (param_1 + 6 != (uint *)&DAT_01bc9988) {
    _DAT_01bc9988 = param_1[6];
    _DAT_01bc9990 = param_1[8];
    _DAT_01bc998c = param_1[7];
  }
  bVar9 = 0;
  iVar7 = 0;
  bVar2 = 0xff;
  pfVar6 = (float *)&DAT_01bc9970;
  do {
    bVar5 = *param_3 < *pfVar6;
    if (param_3[1] < pfVar6[1]) {
      bVar5 = bVar5 | 2;
    }
    if (param_3[2] < pfVar6[2]) {
      bVar5 = bVar5 | 4;
    }
    if (*pfVar6 < *param_2) {
      bVar5 = bVar5 | 8;
    }
    if (pfVar6[1] < param_2[1]) {
      bVar5 = bVar5 | 0x10;
    }
    if (pfVar6[2] < param_2[2]) {
      bVar5 = bVar5 | 0x20;
    }
    pfVar6 = pfVar6 + 3;
    iVar7 = iVar7 + 1;
    bVar2 = bVar2 & bVar5;
    bVar9 = bVar9 | bVar5;
  } while (iVar7 < 3);
  if (bVar9 == 0) {
    _DAT_01bc9e04 = 3;
    if (param_1 != (uint *)&DAT_01bc9e08) {
      _DAT_01bc9e08 = *param_1;
      _DAT_01bc9e10 = param_1[2];
      _DAT_01bc9e0c = param_1[1];
    }
    if (param_1 + 3 != (uint *)&DAT_01bc9e14) {
      _DAT_01bc9e14 = param_1[3];
      _DAT_01bc9e1c = param_1[5];
      _DAT_01bc9e18 = param_1[4];
    }
    if (param_1 + 6 != (uint *)&DAT_01bc9e20) {
      _DAT_01bc9e20 = param_1[6];
      _DAT_01bc9e28 = param_1[8];
      _DAT_01bc9e24 = param_1[7];
    }
    return 1;
  }
  if (bVar2 == 0) {
    fVar1 = param_3[1];
    iVar7 = 0;
    puVar8 = (uint *)&DAT_01bc9970;
    _DAT_01bc9a30 = 0;
    _DAT_01bc9af4 = 0;
    _DAT_01bc9bb8 = 0;
    _DAT_01bc9c7c = 0;
    _DAT_01bc9d40 = 0;
    _DAT_01bc9e04 = 0;
    do {
      uVar3 = iVar7 + 1;
      if (uVar3 == _DAT_01bc996c) {
        uVar3 = uVar3 ^ _DAT_01bc996c;
      }
      bVar2 = fVar1 < (float)puVar8[1];
      if (fVar1 < *(float *)(&DAT_01bc9974 + uVar3 * 0xc)) {
        bVar2 = bVar2 | 2;
      }
      switch(bVar2) {
      case 0:
        iVar4 = _DAT_01bc9a30 * 0xc;
        if ((uint *)(&DAT_01bc9a34 + iVar4) != puVar8) {
          *(uint *)(&DAT_01bc9a34 + iVar4) = *puVar8;
          *(uint *)(&DAT_01bc9a38 + iVar4) = puVar8[1];
          *(uint *)(&DAT_01bc9a3c + iVar4) = puVar8[2];
        }
        _DAT_01bc9a30 = _DAT_01bc9a30 + 1;
        break;
      case 1:
        core_dtri_cpp_clipLineToPlane_FUN_0046d4e0
                  (&DAT_01bc9970 + uVar3 * 0xc,puVar8,&DAT_01bc9a34 + _DAT_01bc9a30 * 0xc,0,0,0,
                   0x3ff00000,0,0,(double)-fVar1);
        _DAT_01bc9a30 = _DAT_01bc9a30 + 1;
        break;
      case 2:
        iVar4 = _DAT_01bc9a30 * 0xc;
        if ((uint *)(&DAT_01bc9a34 + iVar4) != puVar8) {
          *(uint *)(&DAT_01bc9a34 + iVar4) = *puVar8;
          *(uint *)(&DAT_01bc9a38 + iVar4) = puVar8[1];
          *(uint *)(&DAT_01bc9a3c + iVar4) = puVar8[2];
        }
        _DAT_01bc9a30 = _DAT_01bc9a30 + 1;
        core_dtri_cpp_clipLineToPlane_FUN_0046d4e0
                  (puVar8,&DAT_01bc9970 + uVar3 * 0xc,&DAT_01bc9a34 + _DAT_01bc9a30 * 0xc,0,0,0,
                   0x3ff00000,0,0,(double)-fVar1);
        _DAT_01bc9a30 = _DAT_01bc9a30 + 1;
      }
      iVar7 = iVar7 + 1;
      puVar8 = puVar8 + 3;
    } while (iVar7 < (int)_DAT_01bc996c);
    if (2 < (int)_DAT_01bc9a30) {
      fVar1 = param_2[1];
      iVar7 = 0;
      if (0 < (int)_DAT_01bc9a30) {
        puVar8 = (uint *)&DAT_01bc9a34;
        do {
          uVar3 = iVar7 + 1;
          if (uVar3 == _DAT_01bc9a30) {
            uVar3 = uVar3 ^ _DAT_01bc9a30;
          }
          bVar2 = (float)puVar8[1] < fVar1;
          if (*(float *)(&DAT_01bc9a38 + uVar3 * 0xc) < fVar1) {
            bVar2 = bVar2 | 2;
          }
          switch(bVar2) {
          case 0:
            iVar4 = _DAT_01bc9af4 * 0xc;
            if ((uint *)(&DAT_01bc9af8 + iVar4) != puVar8) {
              *(uint *)(&DAT_01bc9af8 + iVar4) = *puVar8;
              *(uint *)(&DAT_01bc9afc + iVar4) = puVar8[1];
              *(uint *)(&DAT_01bc9b00 + iVar4) = puVar8[2];
            }
            _DAT_01bc9af4 = _DAT_01bc9af4 + 1;
            break;
          case 1:
            core_dtri_cpp_clipLineToPlane_FUN_0046d4e0
                      (&DAT_01bc9a34 + uVar3 * 0xc,puVar8,&DAT_01bc9af8 + _DAT_01bc9af4 * 0xc,0,0,0,
                       0xbff00000,0,0,(double)fVar1);
            _DAT_01bc9af4 = _DAT_01bc9af4 + 1;
            break;
          case 2:
            iVar4 = _DAT_01bc9af4 * 0xc;
            if ((uint *)(&DAT_01bc9af8 + iVar4) != puVar8) {
              *(uint *)(&DAT_01bc9af8 + iVar4) = *puVar8;
              *(uint *)(&DAT_01bc9afc + iVar4) = puVar8[1];
              *(uint *)(&DAT_01bc9b00 + iVar4) = puVar8[2];
            }
            _DAT_01bc9af4 = _DAT_01bc9af4 + 1;
            core_dtri_cpp_clipLineToPlane_FUN_0046d4e0
                      (puVar8,&DAT_01bc9a34 + uVar3 * 0xc,&DAT_01bc9af8 + _DAT_01bc9af4 * 0xc,0,0,0,
                       0xbff00000,0,0,(double)fVar1);
            _DAT_01bc9af4 = _DAT_01bc9af4 + 1;
          }
          iVar7 = iVar7 + 1;
          puVar8 = puVar8 + 3;
        } while (iVar7 < (int)_DAT_01bc9a30);
      }
      if (2 < (int)_DAT_01bc9af4) {
        fVar1 = *param_3;
        iVar7 = 0;
        if (0 < (int)_DAT_01bc9af4) {
          pfVar6 = (float *)&DAT_01bc9af8;
          do {
            uVar3 = iVar7 + 1;
            if (uVar3 == _DAT_01bc9af4) {
              uVar3 = uVar3 ^ _DAT_01bc9af4;
            }
            pfVar10 = (float *)(&DAT_01bc9af8 + uVar3 * 0xc);
            bVar2 = fVar1 < *pfVar6;
            if (fVar1 < *pfVar10) {
              bVar2 = bVar2 | 2;
            }
            switch(bVar2) {
            case 0:
              iVar4 = _DAT_01bc9bb8 * 0xc;
              if ((float *)(&DAT_01bc9bbc + iVar4) != pfVar6) {
                *(float *)(&DAT_01bc9bbc + iVar4) = *pfVar6;
                *(float *)(&DAT_01bc9bc0 + iVar4) = pfVar6[1];
                *(float *)(&DAT_01bc9bc4 + iVar4) = pfVar6[2];
              }
              _DAT_01bc9bb8 = _DAT_01bc9bb8 + 1;
              break;
            case 1:
              core_dtri_cpp_clipLineToPlane_FUN_0046d4e0
                        (pfVar10,pfVar6,&DAT_01bc9bbc + _DAT_01bc9bb8 * 0xc,0,0x3ff00000,0,0,0,0,
                         (double)-fVar1);
              _DAT_01bc9bb8 = _DAT_01bc9bb8 + 1;
              break;
            case 2:
              iVar4 = _DAT_01bc9bb8 * 0xc;
              if ((float *)(&DAT_01bc9bbc + iVar4) != pfVar6) {
                *(float *)(&DAT_01bc9bbc + iVar4) = *pfVar6;
                *(float *)(&DAT_01bc9bc0 + iVar4) = pfVar6[1];
                *(float *)(&DAT_01bc9bc4 + iVar4) = pfVar6[2];
              }
              _DAT_01bc9bb8 = _DAT_01bc9bb8 + 1;
              core_dtri_cpp_clipLineToPlane_FUN_0046d4e0
                        (pfVar6,pfVar10,&DAT_01bc9bbc + _DAT_01bc9bb8 * 0xc,0,0x3ff00000,0,0,0,0,
                         (double)-fVar1);
              _DAT_01bc9bb8 = _DAT_01bc9bb8 + 1;
            }
            iVar7 = iVar7 + 1;
            pfVar6 = pfVar6 + 3;
          } while (iVar7 < (int)_DAT_01bc9af4);
        }
        if (2 < (int)_DAT_01bc9bb8) {
          fVar1 = *param_2;
          iVar7 = 0;
          if (0 < (int)_DAT_01bc9bb8) {
            pfVar6 = (float *)&DAT_01bc9bbc;
            do {
              uVar3 = iVar7 + 1;
              if (uVar3 == _DAT_01bc9bb8) {
                uVar3 = uVar3 ^ _DAT_01bc9bb8;
              }
              pfVar10 = (float *)(&DAT_01bc9bbc + uVar3 * 0xc);
              bVar2 = *pfVar6 < fVar1;
              if (*pfVar10 < fVar1) {
                bVar2 = bVar2 | 2;
              }
              switch(bVar2) {
              case 0:
                iVar4 = _DAT_01bc9c7c * 0xc;
                if ((float *)(&DAT_01bc9c80 + iVar4) != pfVar6) {
                  *(float *)(&DAT_01bc9c80 + iVar4) = *pfVar6;
                  *(float *)(&DAT_01bc9c84 + iVar4) = pfVar6[1];
                  *(float *)(&DAT_01bc9c88 + iVar4) = pfVar6[2];
                }
                _DAT_01bc9c7c = _DAT_01bc9c7c + 1;
                break;
              case 1:
                core_dtri_cpp_clipLineToPlane_FUN_0046d4e0
                          (pfVar10,pfVar6,&DAT_01bc9c80 + _DAT_01bc9c7c * 0xc,0,0xbff00000,0,0,0,0,
                           (double)fVar1);
                _DAT_01bc9c7c = _DAT_01bc9c7c + 1;
                break;
              case 2:
                iVar4 = _DAT_01bc9c7c * 0xc;
                if ((float *)(&DAT_01bc9c80 + iVar4) != pfVar6) {
                  *(float *)(&DAT_01bc9c80 + iVar4) = *pfVar6;
                  *(float *)(&DAT_01bc9c84 + iVar4) = pfVar6[1];
                  *(float *)(&DAT_01bc9c88 + iVar4) = pfVar6[2];
                }
                _DAT_01bc9c7c = _DAT_01bc9c7c + 1;
                core_dtri_cpp_clipLineToPlane_FUN_0046d4e0
                          (pfVar6,pfVar10,&DAT_01bc9c80 + _DAT_01bc9c7c * 0xc,0,0xbff00000,0,0,0,0,
                           (double)fVar1);
                _DAT_01bc9c7c = _DAT_01bc9c7c + 1;
              }
              iVar7 = iVar7 + 1;
              pfVar6 = pfVar6 + 3;
            } while (iVar7 < (int)_DAT_01bc9bb8);
          }
          if (2 < (int)_DAT_01bc9c7c) {
            fVar1 = param_2[2];
            iVar7 = 0;
            if (0 < (int)_DAT_01bc9c7c) {
              puVar8 = (uint *)&DAT_01bc9c80;
              do {
                uVar3 = iVar7 + 1;
                if (uVar3 == _DAT_01bc9c7c) {
                  uVar3 = uVar3 ^ _DAT_01bc9c7c;
                }
                bVar2 = (float)puVar8[2] < fVar1;
                if (*(float *)(&DAT_01bc9c88 + uVar3 * 0xc) < fVar1) {
                  bVar2 = bVar2 | 2;
                }
                switch(bVar2) {
                case 0:
                  iVar4 = _DAT_01bc9d40 * 0xc;
                  if ((uint *)(&DAT_01bc9d44 + iVar4) != puVar8) {
                    *(uint *)(&DAT_01bc9d44 + iVar4) = *puVar8;
                    *(uint *)(&DAT_01bc9d48 + iVar4) = puVar8[1];
                    *(uint *)(&DAT_01bc9d4c + iVar4) = puVar8[2];
                  }
                  _DAT_01bc9d40 = _DAT_01bc9d40 + 1;
                  break;
                case 1:
                  core_dtri_cpp_clipLineToPlane_FUN_0046d4e0
                            (&DAT_01bc9c80 + uVar3 * 0xc,puVar8,&DAT_01bc9d44 + _DAT_01bc9d40 * 0xc,
                             0,0,0,0,0,0xbff00000,(double)fVar1);
                  _DAT_01bc9d40 = _DAT_01bc9d40 + 1;
                  break;
                case 2:
                  iVar4 = _DAT_01bc9d40 * 0xc;
                  if ((uint *)(&DAT_01bc9d44 + iVar4) != puVar8) {
                    *(uint *)(&DAT_01bc9d44 + iVar4) = *puVar8;
                    *(uint *)(&DAT_01bc9d48 + iVar4) = puVar8[1];
                    *(uint *)(&DAT_01bc9d4c + iVar4) = puVar8[2];
                  }
                  _DAT_01bc9d40 = _DAT_01bc9d40 + 1;
                  core_dtri_cpp_clipLineToPlane_FUN_0046d4e0
                            (puVar8,&DAT_01bc9c80 + uVar3 * 0xc,&DAT_01bc9d44 + _DAT_01bc9d40 * 0xc,
                             0,0,0,0,0,0xbff00000,(double)fVar1);
                  _DAT_01bc9d40 = _DAT_01bc9d40 + 1;
                }
                iVar7 = iVar7 + 1;
                puVar8 = puVar8 + 3;
              } while (iVar7 < (int)_DAT_01bc9c7c);
            }
            if (2 < (int)_DAT_01bc9d40) {
              fVar1 = param_3[2];
              iVar7 = 0;
              if (0 < (int)_DAT_01bc9d40) {
                puVar8 = (uint *)&DAT_01bc9d44;
                do {
                  uVar3 = iVar7 + 1;
                  if (uVar3 == _DAT_01bc9d40) {
                    uVar3 = uVar3 ^ _DAT_01bc9d40;
                  }
                  bVar2 = fVar1 < (float)puVar8[2];
                  if (fVar1 < *(float *)(&DAT_01bc9d4c + uVar3 * 0xc)) {
                    bVar2 = bVar2 | 2;
                  }
                  switch(bVar2) {
                  case 0:
                    iVar4 = _DAT_01bc9e04 * 0xc;
                    if ((uint *)(&DAT_01bc9e08 + iVar4) != puVar8) {
                      *(uint *)(&DAT_01bc9e08 + iVar4) = *puVar8;
                      *(uint *)(&DAT_01bc9e0c + iVar4) = puVar8[1];
                      *(uint *)(&DAT_01bc9e10 + iVar4) = puVar8[2];
                    }
                    _DAT_01bc9e04 = _DAT_01bc9e04 + 1;
                    break;
                  case 1:
                    core_dtri_cpp_clipLineToPlane_FUN_0046d4e0
                              (&DAT_01bc9d44 + uVar3 * 0xc,puVar8,
                               &DAT_01bc9e08 + _DAT_01bc9e04 * 0xc,0,0,0,0,0,0xbff00000,
                               (double)fVar1);
                    _DAT_01bc9e04 = _DAT_01bc9e04 + 1;
                    break;
                  case 2:
                    iVar4 = _DAT_01bc9e04 * 0xc;
                    if ((uint *)(&DAT_01bc9e08 + iVar4) != puVar8) {
                      *(uint *)(&DAT_01bc9e08 + iVar4) = *puVar8;
                      *(uint *)(&DAT_01bc9e0c + iVar4) = puVar8[1];
                      *(uint *)(&DAT_01bc9e10 + iVar4) = puVar8[2];
                    }
                    _DAT_01bc9e04 = _DAT_01bc9e04 + 1;
                    core_dtri_cpp_clipLineToPlane_FUN_0046d4e0
                              (puVar8,&DAT_01bc9d44 + uVar3 * 0xc,
                               &DAT_01bc9e08 + _DAT_01bc9e04 * 0xc,0,0,0,0,0,0xbff00000,
                               (double)fVar1);
                    _DAT_01bc9e04 = _DAT_01bc9e04 + 1;
                  }
                  iVar7 = iVar7 + 1;
                  puVar8 = puVar8 + 3;
                } while (iVar7 < (int)_DAT_01bc9d40);
              }
              if (2 < _DAT_01bc9e04) {
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
