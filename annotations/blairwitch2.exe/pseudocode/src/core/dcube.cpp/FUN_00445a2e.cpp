// Name: core_dcube.cpp_FUN_00445a2e
// Address: 00445a2e
// Address Range: [[00445a2e, 0044643b]]
// Convention: unknown
// Signature: undefined4 core_dcube_cpp_FUN_00445a2e(undefined4 *param_1,float *param_2,float *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_dcube_cpp_FUN_00445a2e(uint *param_1,float *param_2,float *param_3)

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
  
  _DAT_0151084c = 3;
  puVar1 = (uint *)*param_1;
  if (puVar1 != (uint *)&DAT_01510850) {
    _DAT_01510850 = *puVar1;
    _DAT_01510858 = puVar1[2];
    _DAT_01510854 = puVar1[1];
  }
  puVar1 = (uint *)param_1[1];
  if (puVar1 != (uint *)&DAT_0151085c) {
    _DAT_0151085c = *puVar1;
    _DAT_01510864 = puVar1[2];
    _DAT_01510860 = puVar1[1];
  }
  puVar1 = (uint *)param_1[2];
  if (puVar1 != (uint *)&DAT_01510868) {
    _DAT_01510868 = *puVar1;
    _DAT_01510870 = puVar1[2];
    _DAT_0151086c = puVar1[1];
  }
  bVar10 = 0xff;
  iVar7 = 0;
  bVar3 = 0;
  pfVar9 = (float *)&DAT_01510850;
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
    _DAT_01510ce4 = 3;
    if (puVar1 != (uint *)&DAT_01510ce8) {
      _DAT_01510ce8 = *puVar1;
      _DAT_01510cf0 = puVar1[2];
      _DAT_01510cec = puVar1[1];
    }
    puVar1 = (uint *)param_1[1];
    if (puVar1 != (uint *)&DAT_01510cf4) {
      _DAT_01510cf4 = *puVar1;
      _DAT_01510cfc = puVar1[2];
      _DAT_01510cf8 = puVar1[1];
    }
    puVar1 = (uint *)param_1[2];
    if (puVar1 != (uint *)&DAT_01510d00) {
      _DAT_01510d00 = *puVar1;
      _DAT_01510d08 = puVar1[2];
      _DAT_01510d04 = puVar1[1];
    }
    return 1;
  }
  if (bVar10 == 0) {
    fVar2 = param_3[1];
    iVar7 = 0;
    pCVar8 = (CVector3f *)&DAT_01510850;
    _DAT_01510910 = 0;
    _DAT_015109d4 = 0;
    _DAT_01510a98 = 0;
    _DAT_01510b5c = 0;
    _DAT_01510c20 = 0;
    _DAT_01510ce4 = 0;
    do {
      uVar4 = iVar7 + 1;
      if (uVar4 == _DAT_0151084c) {
        uVar4 = uVar4 ^ _DAT_0151084c;
      }
      bVar3 = fVar2 < pCVar8->y;
      if (fVar2 < *(float *)(&DAT_01510854 + uVar4 * 0xc)) {
        bVar3 = bVar3 | 2;
      }
      switch(bVar3) {
      case 0:
        iVar5 = _DAT_01510910 * 0xc;
        if ((CVector3f *)(&DAT_01510914 + iVar5) != pCVar8) {
          ((CVector3f *)(&DAT_01510914 + iVar5))->x = pCVar8->x;
          *(float *)(&DAT_01510918 + iVar5) = pCVar8->y;
          *(float *)(&DAT_0151091c + iVar5) = pCVar8->z;
        }
        _DAT_01510910 = _DAT_01510910 + 1;
        break;
      case 1:
        core_dcube_cpp_clipEdgeToPlane_FUN_00443db0
                  ((CVector3f *)(&DAT_01510850 + uVar4 * 0xc),pCVar8,
                   (CVector3f *)(&DAT_01510914 + _DAT_01510910 * 0xc),0.0,1.0,0.0,(double)-fVar2);
        _DAT_01510910 = _DAT_01510910 + 1;
        break;
      case 2:
        iVar5 = _DAT_01510910 * 0xc;
        if ((CVector3f *)(&DAT_01510914 + iVar5) != pCVar8) {
          ((CVector3f *)(&DAT_01510914 + iVar5))->x = pCVar8->x;
          *(float *)(&DAT_01510918 + iVar5) = pCVar8->y;
          *(float *)(&DAT_0151091c + iVar5) = pCVar8->z;
        }
        _DAT_01510910 = _DAT_01510910 + 1;
        core_dcube_cpp_clipEdgeToPlane_FUN_00443db0
                  (pCVar8,(CVector3f *)(&DAT_01510850 + uVar4 * 0xc),
                   (CVector3f *)(&DAT_01510914 + _DAT_01510910 * 0xc),0.0,1.0,0.0,(double)-fVar2);
        _DAT_01510910 = _DAT_01510910 + 1;
      }
      iVar7 = iVar7 + 1;
      pCVar8 = pCVar8 + 1;
    } while (iVar7 < (int)_DAT_0151084c);
    if (2 < (int)_DAT_01510910) {
      fVar2 = param_2[1];
      iVar7 = 0;
      if (0 < (int)_DAT_01510910) {
        pCVar8 = (CVector3f *)&DAT_01510914;
        do {
          uVar4 = iVar7 + 1;
          if (uVar4 == _DAT_01510910) {
            uVar4 = uVar4 ^ _DAT_01510910;
          }
          bVar3 = pCVar8->y < fVar2;
          if (*(float *)(&DAT_01510918 + uVar4 * 0xc) < fVar2) {
            bVar3 = bVar3 | 2;
          }
          switch(bVar3) {
          case 0:
            iVar5 = _DAT_015109d4 * 0xc;
            if ((CVector3f *)(&DAT_015109d8 + iVar5) != pCVar8) {
              ((CVector3f *)(&DAT_015109d8 + iVar5))->x = pCVar8->x;
              *(float *)(&DAT_015109dc + iVar5) = pCVar8->y;
              *(float *)(&DAT_015109e0 + iVar5) = pCVar8->z;
            }
            _DAT_015109d4 = _DAT_015109d4 + 1;
            break;
          case 1:
            core_dcube_cpp_clipEdgeToPlane_FUN_00443db0
                      ((CVector3f *)(&DAT_01510914 + uVar4 * 0xc),pCVar8,
                       (CVector3f *)(&DAT_015109d8 + _DAT_015109d4 * 0xc),0.0,-1.0,0.0,(double)fVar2
                      );
            _DAT_015109d4 = _DAT_015109d4 + 1;
            break;
          case 2:
            iVar5 = _DAT_015109d4 * 0xc;
            if ((CVector3f *)(&DAT_015109d8 + iVar5) != pCVar8) {
              ((CVector3f *)(&DAT_015109d8 + iVar5))->x = pCVar8->x;
              *(float *)(&DAT_015109dc + iVar5) = pCVar8->y;
              *(float *)(&DAT_015109e0 + iVar5) = pCVar8->z;
            }
            _DAT_015109d4 = _DAT_015109d4 + 1;
            core_dcube_cpp_clipEdgeToPlane_FUN_00443db0
                      (pCVar8,(CVector3f *)(&DAT_01510914 + uVar4 * 0xc),
                       (CVector3f *)(&DAT_015109d8 + _DAT_015109d4 * 0xc),0.0,-1.0,0.0,(double)fVar2
                      );
            _DAT_015109d4 = _DAT_015109d4 + 1;
          }
          iVar7 = iVar7 + 1;
          pCVar8 = pCVar8 + 1;
        } while (iVar7 < (int)_DAT_01510910);
      }
      if (2 < (int)_DAT_015109d4) {
        fVar2 = *param_3;
        iVar7 = 0;
        if (0 < (int)_DAT_015109d4) {
          pCVar8 = (CVector3f *)&DAT_015109d8;
          do {
            uVar4 = iVar7 + 1;
            if (uVar4 == _DAT_015109d4) {
              uVar4 = uVar4 ^ _DAT_015109d4;
            }
            pCVar11 = (CVector3f *)(&DAT_015109d8 + uVar4 * 0xc);
            bVar3 = fVar2 < pCVar8->x;
            if (fVar2 < pCVar11->x) {
              bVar3 = bVar3 | 2;
            }
            switch(bVar3) {
            case 0:
              iVar5 = _DAT_01510a98 * 0xc;
              if ((CVector3f *)(&DAT_01510a9c + iVar5) != pCVar8) {
                ((CVector3f *)(&DAT_01510a9c + iVar5))->x = pCVar8->x;
                *(float *)(&DAT_01510aa0 + iVar5) = pCVar8->y;
                *(float *)(&DAT_01510aa4 + iVar5) = pCVar8->z;
              }
              _DAT_01510a98 = _DAT_01510a98 + 1;
              break;
            case 1:
              core_dcube_cpp_clipEdgeToPlane_FUN_00443db0
                        (pCVar11,pCVar8,(CVector3f *)(&DAT_01510a9c + _DAT_01510a98 * 0xc),1.0,0.0,
                         0.0,(double)-fVar2);
              _DAT_01510a98 = _DAT_01510a98 + 1;
              break;
            case 2:
              iVar5 = _DAT_01510a98 * 0xc;
              if ((CVector3f *)(&DAT_01510a9c + iVar5) != pCVar8) {
                ((CVector3f *)(&DAT_01510a9c + iVar5))->x = pCVar8->x;
                *(float *)(&DAT_01510aa0 + iVar5) = pCVar8->y;
                *(float *)(&DAT_01510aa4 + iVar5) = pCVar8->z;
              }
              _DAT_01510a98 = _DAT_01510a98 + 1;
              core_dcube_cpp_clipEdgeToPlane_FUN_00443db0
                        (pCVar8,pCVar11,(CVector3f *)(&DAT_01510a9c + _DAT_01510a98 * 0xc),1.0,0.0,
                         0.0,(double)-fVar2);
              _DAT_01510a98 = _DAT_01510a98 + 1;
            }
            iVar7 = iVar7 + 1;
            pCVar8 = pCVar8 + 1;
          } while (iVar7 < (int)_DAT_015109d4);
        }
        if (2 < (int)_DAT_01510a98) {
          fVar2 = *param_2;
          iVar7 = 0;
          if (0 < (int)_DAT_01510a98) {
            pCVar8 = (CVector3f *)&DAT_01510a9c;
            do {
              uVar4 = iVar7 + 1;
              if (uVar4 == _DAT_01510a98) {
                uVar4 = uVar4 ^ _DAT_01510a98;
              }
              pCVar11 = (CVector3f *)(&DAT_01510a9c + uVar4 * 0xc);
              bVar3 = pCVar8->x < fVar2;
              if (pCVar11->x < fVar2) {
                bVar3 = bVar3 | 2;
              }
              switch(bVar3) {
              case 0:
                iVar5 = _DAT_01510b5c * 0xc;
                if ((CVector3f *)(&DAT_01510b60 + iVar5) != pCVar8) {
                  ((CVector3f *)(&DAT_01510b60 + iVar5))->x = pCVar8->x;
                  *(float *)(&DAT_01510b64 + iVar5) = pCVar8->y;
                  *(float *)(&DAT_01510b68 + iVar5) = pCVar8->z;
                }
                _DAT_01510b5c = _DAT_01510b5c + 1;
                break;
              case 1:
                core_dcube_cpp_clipEdgeToPlane_FUN_00443db0
                          (pCVar11,pCVar8,(CVector3f *)(&DAT_01510b60 + _DAT_01510b5c * 0xc),-1.0,
                           0.0,0.0,(double)fVar2);
                _DAT_01510b5c = _DAT_01510b5c + 1;
                break;
              case 2:
                iVar5 = _DAT_01510b5c * 0xc;
                if ((CVector3f *)(&DAT_01510b60 + iVar5) != pCVar8) {
                  ((CVector3f *)(&DAT_01510b60 + iVar5))->x = pCVar8->x;
                  *(float *)(&DAT_01510b64 + iVar5) = pCVar8->y;
                  *(float *)(&DAT_01510b68 + iVar5) = pCVar8->z;
                }
                _DAT_01510b5c = _DAT_01510b5c + 1;
                core_dcube_cpp_clipEdgeToPlane_FUN_00443db0
                          (pCVar8,pCVar11,(CVector3f *)(&DAT_01510b60 + _DAT_01510b5c * 0xc),-1.0,
                           0.0,0.0,(double)fVar2);
                _DAT_01510b5c = _DAT_01510b5c + 1;
              }
              iVar7 = iVar7 + 1;
              pCVar8 = pCVar8 + 1;
            } while (iVar7 < (int)_DAT_01510a98);
          }
          if (2 < (int)_DAT_01510b5c) {
            fVar2 = param_2[2];
            iVar7 = 0;
            if (0 < (int)_DAT_01510b5c) {
              pCVar8 = (CVector3f *)&DAT_01510b60;
              do {
                uVar4 = iVar7 + 1;
                if (uVar4 == _DAT_01510b5c) {
                  uVar4 = uVar4 ^ _DAT_01510b5c;
                }
                bVar3 = pCVar8->z < fVar2;
                if (*(float *)(&DAT_01510b68 + uVar4 * 0xc) < fVar2) {
                  bVar3 = bVar3 | 2;
                }
                switch(bVar3) {
                case 0:
                  iVar5 = _DAT_01510c20 * 0xc;
                  if ((CVector3f *)(&DAT_01510c24 + iVar5) != pCVar8) {
                    ((CVector3f *)(&DAT_01510c24 + iVar5))->x = pCVar8->x;
                    *(float *)(&DAT_01510c28 + iVar5) = pCVar8->y;
                    *(float *)(&DAT_01510c2c + iVar5) = pCVar8->z;
                  }
                  _DAT_01510c20 = _DAT_01510c20 + 1;
                  break;
                case 1:
                  core_dcube_cpp_clipEdgeToPlane_FUN_00443db0
                            ((CVector3f *)(&DAT_01510b60 + uVar4 * 0xc),pCVar8,
                             (CVector3f *)(&DAT_01510c24 + _DAT_01510c20 * 0xc),0.0,0.0,-1.0,
                             (double)fVar2);
                  _DAT_01510c20 = _DAT_01510c20 + 1;
                  break;
                case 2:
                  iVar5 = _DAT_01510c20 * 0xc;
                  if ((CVector3f *)(&DAT_01510c24 + iVar5) != pCVar8) {
                    ((CVector3f *)(&DAT_01510c24 + iVar5))->x = pCVar8->x;
                    *(float *)(&DAT_01510c28 + iVar5) = pCVar8->y;
                    *(float *)(&DAT_01510c2c + iVar5) = pCVar8->z;
                  }
                  _DAT_01510c20 = _DAT_01510c20 + 1;
                  core_dcube_cpp_clipEdgeToPlane_FUN_00443db0
                            (pCVar8,(CVector3f *)(&DAT_01510b60 + uVar4 * 0xc),
                             (CVector3f *)(&DAT_01510c24 + _DAT_01510c20 * 0xc),0.0,0.0,-1.0,
                             (double)fVar2);
                  _DAT_01510c20 = _DAT_01510c20 + 1;
                }
                iVar7 = iVar7 + 1;
                pCVar8 = pCVar8 + 1;
              } while (iVar7 < (int)_DAT_01510b5c);
            }
            if (2 < (int)_DAT_01510c20) {
              fVar2 = param_3[2];
              iVar7 = 0;
              if (0 < (int)_DAT_01510c20) {
                pCVar8 = (CVector3f *)&DAT_01510c24;
                do {
                  uVar4 = iVar7 + 1;
                  if (uVar4 == _DAT_01510c20) {
                    uVar4 = uVar4 ^ _DAT_01510c20;
                  }
                  bVar3 = fVar2 < pCVar8->z;
                  if (fVar2 < *(float *)(&DAT_01510c2c + uVar4 * 0xc)) {
                    bVar3 = bVar3 | 2;
                  }
                  switch(bVar3) {
                  case 0:
                    iVar5 = _DAT_01510ce4 * 0xc;
                    if ((CVector3f *)(&DAT_01510ce8 + iVar5) != pCVar8) {
                      ((CVector3f *)(&DAT_01510ce8 + iVar5))->x = pCVar8->x;
                      *(float *)(&DAT_01510cec + iVar5) = pCVar8->y;
                      *(float *)(&DAT_01510cf0 + iVar5) = pCVar8->z;
                    }
                    _DAT_01510ce4 = _DAT_01510ce4 + 1;
                    break;
                  case 1:
                    core_dcube_cpp_clipEdgeToPlane_FUN_00443db0
                              ((CVector3f *)(&DAT_01510c24 + uVar4 * 0xc),pCVar8,
                               (CVector3f *)(&DAT_01510ce8 + _DAT_01510ce4 * 0xc),0.0,0.0,-1.0,
                               (double)fVar2);
                    _DAT_01510ce4 = _DAT_01510ce4 + 1;
                    break;
                  case 2:
                    iVar5 = _DAT_01510ce4 * 0xc;
                    if ((CVector3f *)(&DAT_01510ce8 + iVar5) != pCVar8) {
                      ((CVector3f *)(&DAT_01510ce8 + iVar5))->x = pCVar8->x;
                      *(float *)(&DAT_01510cec + iVar5) = pCVar8->y;
                      *(float *)(&DAT_01510cf0 + iVar5) = pCVar8->z;
                    }
                    _DAT_01510ce4 = _DAT_01510ce4 + 1;
                    core_dcube_cpp_clipEdgeToPlane_FUN_00443db0
                              (pCVar8,(CVector3f *)(&DAT_01510c24 + uVar4 * 0xc),
                               (CVector3f *)(&DAT_01510ce8 + _DAT_01510ce4 * 0xc),0.0,0.0,-1.0,
                               (double)fVar2);
                    _DAT_01510ce4 = _DAT_01510ce4 + 1;
                  }
                  iVar7 = iVar7 + 1;
                  pCVar8 = pCVar8 + 1;
                } while (iVar7 < (int)_DAT_01510c20);
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
