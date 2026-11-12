// Name: core_dcube.cpp_FUN_004570de
// Address: 004570de
// Address Range: [[004570de, 00457aeb]]
// Convention: unknown
// Signature: undefined4 core_dcube_cpp_FUN_004570de(undefined4 *param_1,float *param_2,float *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_dcube_cpp_FUN_004570de(uint *param_1,float *param_2,float *param_3)

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
  
  _DAT_0152bd4c = 3;
  puVar1 = (uint *)*param_1;
  if (puVar1 != (uint *)&DAT_0152bd50) {
    _DAT_0152bd50 = *puVar1;
    _DAT_0152bd58 = puVar1[2];
    _DAT_0152bd54 = puVar1[1];
  }
  puVar1 = (uint *)param_1[1];
  if (puVar1 != (uint *)&DAT_0152bd5c) {
    _DAT_0152bd5c = *puVar1;
    _DAT_0152bd64 = puVar1[2];
    _DAT_0152bd60 = puVar1[1];
  }
  puVar1 = (uint *)param_1[2];
  if (puVar1 != (uint *)&DAT_0152bd68) {
    _DAT_0152bd68 = *puVar1;
    _DAT_0152bd70 = puVar1[2];
    _DAT_0152bd6c = puVar1[1];
  }
  bVar10 = 0xff;
  iVar7 = 0;
  bVar3 = 0;
  pfVar9 = (float *)&DAT_0152bd50;
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
    _DAT_0152c1e4 = 3;
    if (puVar1 != (uint *)&DAT_0152c1e8) {
      _DAT_0152c1e8 = *puVar1;
      _DAT_0152c1f0 = puVar1[2];
      _DAT_0152c1ec = puVar1[1];
    }
    puVar1 = (uint *)param_1[1];
    if (puVar1 != (uint *)&DAT_0152c1f4) {
      _DAT_0152c1f4 = *puVar1;
      _DAT_0152c1fc = puVar1[2];
      _DAT_0152c1f8 = puVar1[1];
    }
    puVar1 = (uint *)param_1[2];
    if (puVar1 != (uint *)&DAT_0152c200) {
      _DAT_0152c200 = *puVar1;
      _DAT_0152c208 = puVar1[2];
      _DAT_0152c204 = puVar1[1];
    }
    return 1;
  }
  if (bVar10 == 0) {
    fVar2 = param_3[1];
    iVar7 = 0;
    pCVar8 = (CVector3f *)&DAT_0152bd50;
    _DAT_0152be10 = 0;
    _DAT_0152bed4 = 0;
    _DAT_0152bf98 = 0;
    _DAT_0152c05c = 0;
    _DAT_0152c120 = 0;
    _DAT_0152c1e4 = 0;
    do {
      uVar4 = iVar7 + 1;
      if (uVar4 == _DAT_0152bd4c) {
        uVar4 = uVar4 ^ _DAT_0152bd4c;
      }
      bVar3 = fVar2 < pCVar8->y;
      if (fVar2 < *(float *)(&DAT_0152bd54 + uVar4 * 0xc)) {
        bVar3 = bVar3 | 2;
      }
      switch(bVar3) {
      case 0:
        iVar5 = _DAT_0152be10 * 0xc;
        if ((CVector3f *)(&DAT_0152be14 + iVar5) != pCVar8) {
          ((CVector3f *)(&DAT_0152be14 + iVar5))->x = pCVar8->x;
          *(float *)(&DAT_0152be18 + iVar5) = pCVar8->y;
          *(float *)(&DAT_0152be1c + iVar5) = pCVar8->z;
        }
        _DAT_0152be10 = _DAT_0152be10 + 1;
        break;
      case 1:
        core_dcube_cpp_clipEdgeToPlane_FUN_00455460
                  ((CVector3f *)(&DAT_0152bd50 + uVar4 * 0xc),pCVar8,
                   (CVector3f *)(&DAT_0152be14 + _DAT_0152be10 * 0xc),0.0,1.0,0.0,(double)-fVar2);
        _DAT_0152be10 = _DAT_0152be10 + 1;
        break;
      case 2:
        iVar5 = _DAT_0152be10 * 0xc;
        if ((CVector3f *)(&DAT_0152be14 + iVar5) != pCVar8) {
          ((CVector3f *)(&DAT_0152be14 + iVar5))->x = pCVar8->x;
          *(float *)(&DAT_0152be18 + iVar5) = pCVar8->y;
          *(float *)(&DAT_0152be1c + iVar5) = pCVar8->z;
        }
        _DAT_0152be10 = _DAT_0152be10 + 1;
        core_dcube_cpp_clipEdgeToPlane_FUN_00455460
                  (pCVar8,(CVector3f *)(&DAT_0152bd50 + uVar4 * 0xc),
                   (CVector3f *)(&DAT_0152be14 + _DAT_0152be10 * 0xc),0.0,1.0,0.0,(double)-fVar2);
        _DAT_0152be10 = _DAT_0152be10 + 1;
      }
      iVar7 = iVar7 + 1;
      pCVar8 = pCVar8 + 1;
    } while (iVar7 < (int)_DAT_0152bd4c);
    if (2 < (int)_DAT_0152be10) {
      fVar2 = param_2[1];
      iVar7 = 0;
      if (0 < (int)_DAT_0152be10) {
        pCVar8 = (CVector3f *)&DAT_0152be14;
        do {
          uVar4 = iVar7 + 1;
          if (uVar4 == _DAT_0152be10) {
            uVar4 = uVar4 ^ _DAT_0152be10;
          }
          bVar3 = pCVar8->y < fVar2;
          if (*(float *)(&DAT_0152be18 + uVar4 * 0xc) < fVar2) {
            bVar3 = bVar3 | 2;
          }
          switch(bVar3) {
          case 0:
            iVar5 = _DAT_0152bed4 * 0xc;
            if ((CVector3f *)(&DAT_0152bed8 + iVar5) != pCVar8) {
              ((CVector3f *)(&DAT_0152bed8 + iVar5))->x = pCVar8->x;
              *(float *)(&DAT_0152bedc + iVar5) = pCVar8->y;
              *(float *)(&DAT_0152bee0 + iVar5) = pCVar8->z;
            }
            _DAT_0152bed4 = _DAT_0152bed4 + 1;
            break;
          case 1:
            core_dcube_cpp_clipEdgeToPlane_FUN_00455460
                      ((CVector3f *)(&DAT_0152be14 + uVar4 * 0xc),pCVar8,
                       (CVector3f *)(&DAT_0152bed8 + _DAT_0152bed4 * 0xc),0.0,-1.0,0.0,(double)fVar2
                      );
            _DAT_0152bed4 = _DAT_0152bed4 + 1;
            break;
          case 2:
            iVar5 = _DAT_0152bed4 * 0xc;
            if ((CVector3f *)(&DAT_0152bed8 + iVar5) != pCVar8) {
              ((CVector3f *)(&DAT_0152bed8 + iVar5))->x = pCVar8->x;
              *(float *)(&DAT_0152bedc + iVar5) = pCVar8->y;
              *(float *)(&DAT_0152bee0 + iVar5) = pCVar8->z;
            }
            _DAT_0152bed4 = _DAT_0152bed4 + 1;
            core_dcube_cpp_clipEdgeToPlane_FUN_00455460
                      (pCVar8,(CVector3f *)(&DAT_0152be14 + uVar4 * 0xc),
                       (CVector3f *)(&DAT_0152bed8 + _DAT_0152bed4 * 0xc),0.0,-1.0,0.0,(double)fVar2
                      );
            _DAT_0152bed4 = _DAT_0152bed4 + 1;
          }
          iVar7 = iVar7 + 1;
          pCVar8 = pCVar8 + 1;
        } while (iVar7 < (int)_DAT_0152be10);
      }
      if (2 < (int)_DAT_0152bed4) {
        fVar2 = *param_3;
        iVar7 = 0;
        if (0 < (int)_DAT_0152bed4) {
          pCVar8 = (CVector3f *)&DAT_0152bed8;
          do {
            uVar4 = iVar7 + 1;
            if (uVar4 == _DAT_0152bed4) {
              uVar4 = uVar4 ^ _DAT_0152bed4;
            }
            pCVar11 = (CVector3f *)(&DAT_0152bed8 + uVar4 * 0xc);
            bVar3 = fVar2 < pCVar8->x;
            if (fVar2 < pCVar11->x) {
              bVar3 = bVar3 | 2;
            }
            switch(bVar3) {
            case 0:
              iVar5 = _DAT_0152bf98 * 0xc;
              if ((CVector3f *)(&DAT_0152bf9c + iVar5) != pCVar8) {
                ((CVector3f *)(&DAT_0152bf9c + iVar5))->x = pCVar8->x;
                *(float *)(&DAT_0152bfa0 + iVar5) = pCVar8->y;
                *(float *)(&DAT_0152bfa4 + iVar5) = pCVar8->z;
              }
              _DAT_0152bf98 = _DAT_0152bf98 + 1;
              break;
            case 1:
              core_dcube_cpp_clipEdgeToPlane_FUN_00455460
                        (pCVar11,pCVar8,(CVector3f *)(&DAT_0152bf9c + _DAT_0152bf98 * 0xc),1.0,0.0,
                         0.0,(double)-fVar2);
              _DAT_0152bf98 = _DAT_0152bf98 + 1;
              break;
            case 2:
              iVar5 = _DAT_0152bf98 * 0xc;
              if ((CVector3f *)(&DAT_0152bf9c + iVar5) != pCVar8) {
                ((CVector3f *)(&DAT_0152bf9c + iVar5))->x = pCVar8->x;
                *(float *)(&DAT_0152bfa0 + iVar5) = pCVar8->y;
                *(float *)(&DAT_0152bfa4 + iVar5) = pCVar8->z;
              }
              _DAT_0152bf98 = _DAT_0152bf98 + 1;
              core_dcube_cpp_clipEdgeToPlane_FUN_00455460
                        (pCVar8,pCVar11,(CVector3f *)(&DAT_0152bf9c + _DAT_0152bf98 * 0xc),1.0,0.0,
                         0.0,(double)-fVar2);
              _DAT_0152bf98 = _DAT_0152bf98 + 1;
            }
            iVar7 = iVar7 + 1;
            pCVar8 = pCVar8 + 1;
          } while (iVar7 < (int)_DAT_0152bed4);
        }
        if (2 < (int)_DAT_0152bf98) {
          fVar2 = *param_2;
          iVar7 = 0;
          if (0 < (int)_DAT_0152bf98) {
            pCVar8 = (CVector3f *)&DAT_0152bf9c;
            do {
              uVar4 = iVar7 + 1;
              if (uVar4 == _DAT_0152bf98) {
                uVar4 = uVar4 ^ _DAT_0152bf98;
              }
              pCVar11 = (CVector3f *)(&DAT_0152bf9c + uVar4 * 0xc);
              bVar3 = pCVar8->x < fVar2;
              if (pCVar11->x < fVar2) {
                bVar3 = bVar3 | 2;
              }
              switch(bVar3) {
              case 0:
                iVar5 = _DAT_0152c05c * 0xc;
                if ((CVector3f *)(&DAT_0152c060 + iVar5) != pCVar8) {
                  ((CVector3f *)(&DAT_0152c060 + iVar5))->x = pCVar8->x;
                  *(float *)(&DAT_0152c064 + iVar5) = pCVar8->y;
                  *(float *)(&DAT_0152c068 + iVar5) = pCVar8->z;
                }
                _DAT_0152c05c = _DAT_0152c05c + 1;
                break;
              case 1:
                core_dcube_cpp_clipEdgeToPlane_FUN_00455460
                          (pCVar11,pCVar8,(CVector3f *)(&DAT_0152c060 + _DAT_0152c05c * 0xc),-1.0,
                           0.0,0.0,(double)fVar2);
                _DAT_0152c05c = _DAT_0152c05c + 1;
                break;
              case 2:
                iVar5 = _DAT_0152c05c * 0xc;
                if ((CVector3f *)(&DAT_0152c060 + iVar5) != pCVar8) {
                  ((CVector3f *)(&DAT_0152c060 + iVar5))->x = pCVar8->x;
                  *(float *)(&DAT_0152c064 + iVar5) = pCVar8->y;
                  *(float *)(&DAT_0152c068 + iVar5) = pCVar8->z;
                }
                _DAT_0152c05c = _DAT_0152c05c + 1;
                core_dcube_cpp_clipEdgeToPlane_FUN_00455460
                          (pCVar8,pCVar11,(CVector3f *)(&DAT_0152c060 + _DAT_0152c05c * 0xc),-1.0,
                           0.0,0.0,(double)fVar2);
                _DAT_0152c05c = _DAT_0152c05c + 1;
              }
              iVar7 = iVar7 + 1;
              pCVar8 = pCVar8 + 1;
            } while (iVar7 < (int)_DAT_0152bf98);
          }
          if (2 < (int)_DAT_0152c05c) {
            fVar2 = param_2[2];
            iVar7 = 0;
            if (0 < (int)_DAT_0152c05c) {
              pCVar8 = (CVector3f *)&DAT_0152c060;
              do {
                uVar4 = iVar7 + 1;
                if (uVar4 == _DAT_0152c05c) {
                  uVar4 = uVar4 ^ _DAT_0152c05c;
                }
                bVar3 = pCVar8->z < fVar2;
                if (*(float *)(&DAT_0152c068 + uVar4 * 0xc) < fVar2) {
                  bVar3 = bVar3 | 2;
                }
                switch(bVar3) {
                case 0:
                  iVar5 = _DAT_0152c120 * 0xc;
                  if ((CVector3f *)(&DAT_0152c124 + iVar5) != pCVar8) {
                    ((CVector3f *)(&DAT_0152c124 + iVar5))->x = pCVar8->x;
                    *(float *)(&DAT_0152c128 + iVar5) = pCVar8->y;
                    *(float *)(&DAT_0152c12c + iVar5) = pCVar8->z;
                  }
                  _DAT_0152c120 = _DAT_0152c120 + 1;
                  break;
                case 1:
                  core_dcube_cpp_clipEdgeToPlane_FUN_00455460
                            ((CVector3f *)(&DAT_0152c060 + uVar4 * 0xc),pCVar8,
                             (CVector3f *)(&DAT_0152c124 + _DAT_0152c120 * 0xc),0.0,0.0,-1.0,
                             (double)fVar2);
                  _DAT_0152c120 = _DAT_0152c120 + 1;
                  break;
                case 2:
                  iVar5 = _DAT_0152c120 * 0xc;
                  if ((CVector3f *)(&DAT_0152c124 + iVar5) != pCVar8) {
                    ((CVector3f *)(&DAT_0152c124 + iVar5))->x = pCVar8->x;
                    *(float *)(&DAT_0152c128 + iVar5) = pCVar8->y;
                    *(float *)(&DAT_0152c12c + iVar5) = pCVar8->z;
                  }
                  _DAT_0152c120 = _DAT_0152c120 + 1;
                  core_dcube_cpp_clipEdgeToPlane_FUN_00455460
                            (pCVar8,(CVector3f *)(&DAT_0152c060 + uVar4 * 0xc),
                             (CVector3f *)(&DAT_0152c124 + _DAT_0152c120 * 0xc),0.0,0.0,-1.0,
                             (double)fVar2);
                  _DAT_0152c120 = _DAT_0152c120 + 1;
                }
                iVar7 = iVar7 + 1;
                pCVar8 = pCVar8 + 1;
              } while (iVar7 < (int)_DAT_0152c05c);
            }
            if (2 < (int)_DAT_0152c120) {
              fVar2 = param_3[2];
              iVar7 = 0;
              if (0 < (int)_DAT_0152c120) {
                pCVar8 = (CVector3f *)&DAT_0152c124;
                do {
                  uVar4 = iVar7 + 1;
                  if (uVar4 == _DAT_0152c120) {
                    uVar4 = uVar4 ^ _DAT_0152c120;
                  }
                  bVar3 = fVar2 < pCVar8->z;
                  if (fVar2 < *(float *)(&DAT_0152c12c + uVar4 * 0xc)) {
                    bVar3 = bVar3 | 2;
                  }
                  switch(bVar3) {
                  case 0:
                    iVar5 = _DAT_0152c1e4 * 0xc;
                    if ((CVector3f *)(&DAT_0152c1e8 + iVar5) != pCVar8) {
                      ((CVector3f *)(&DAT_0152c1e8 + iVar5))->x = pCVar8->x;
                      *(float *)(&DAT_0152c1ec + iVar5) = pCVar8->y;
                      *(float *)(&DAT_0152c1f0 + iVar5) = pCVar8->z;
                    }
                    _DAT_0152c1e4 = _DAT_0152c1e4 + 1;
                    break;
                  case 1:
                    core_dcube_cpp_clipEdgeToPlane_FUN_00455460
                              ((CVector3f *)(&DAT_0152c124 + uVar4 * 0xc),pCVar8,
                               (CVector3f *)(&DAT_0152c1e8 + _DAT_0152c1e4 * 0xc),0.0,0.0,-1.0,
                               (double)fVar2);
                    _DAT_0152c1e4 = _DAT_0152c1e4 + 1;
                    break;
                  case 2:
                    iVar5 = _DAT_0152c1e4 * 0xc;
                    if ((CVector3f *)(&DAT_0152c1e8 + iVar5) != pCVar8) {
                      ((CVector3f *)(&DAT_0152c1e8 + iVar5))->x = pCVar8->x;
                      *(float *)(&DAT_0152c1ec + iVar5) = pCVar8->y;
                      *(float *)(&DAT_0152c1f0 + iVar5) = pCVar8->z;
                    }
                    _DAT_0152c1e4 = _DAT_0152c1e4 + 1;
                    core_dcube_cpp_clipEdgeToPlane_FUN_00455460
                              (pCVar8,(CVector3f *)(&DAT_0152c124 + uVar4 * 0xc),
                               (CVector3f *)(&DAT_0152c1e8 + _DAT_0152c1e4 * 0xc),0.0,0.0,-1.0,
                               (double)fVar2);
                    _DAT_0152c1e4 = _DAT_0152c1e4 + 1;
                  }
                  iVar7 = iVar7 + 1;
                  pCVar8 = pCVar8 + 1;
                } while (iVar7 < (int)_DAT_0152c120);
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
