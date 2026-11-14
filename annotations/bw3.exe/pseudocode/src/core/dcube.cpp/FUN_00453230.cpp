// Name: core_dcube.cpp_FUN_00453230
// Address: 00453230
// Address Range: [[00453230, 00453494] [004534bc, 00453536] [0045355e, 004535d9] [00453601, 0045367c] [004536a4, 00453722] [0045374a, 004537c8] [004537f0, 00453815]]
// Convention: unknown
// Signature: undefined4 core_dcube_cpp_FUN_00453230(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint core_dcube_cpp_FUN_00453230(void)

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
  uint *in_stack_00000004;
  float *in_stack_00000008;
  float *in_stack_0000000c;
  
  _DAT_015485fc = 3;
  puVar1 = (uint *)*in_stack_00000004;
  if (puVar1 != (uint *)&DAT_01548600) {
    _DAT_01548600 = *puVar1;
    _DAT_01548608 = puVar1[2];
    _DAT_01548604 = puVar1[1];
  }
  puVar1 = (uint *)in_stack_00000004[1];
  if (puVar1 != (uint *)&DAT_0154860c) {
    _DAT_0154860c = *puVar1;
    _DAT_01548614 = puVar1[2];
    _DAT_01548610 = puVar1[1];
  }
  puVar1 = (uint *)in_stack_00000004[2];
  if (puVar1 != (uint *)&DAT_01548618) {
    _DAT_01548618 = *puVar1;
    _DAT_01548620 = puVar1[2];
    _DAT_0154861c = puVar1[1];
  }
  bVar10 = 0xff;
  iVar7 = 0;
  bVar3 = 0;
  pfVar9 = (float *)&DAT_01548600;
  do {
    bVar6 = *in_stack_0000000c < *pfVar9;
    if (in_stack_0000000c[1] < pfVar9[1]) {
      bVar6 = bVar6 | 2;
    }
    if (in_stack_0000000c[2] < pfVar9[2]) {
      bVar6 = bVar6 | 4;
    }
    if (*pfVar9 < *in_stack_00000008) {
      bVar6 = bVar6 | 8;
    }
    if (pfVar9[1] < in_stack_00000008[1]) {
      bVar6 = bVar6 | 0x10;
    }
    if (pfVar9[2] < in_stack_00000008[2]) {
      bVar6 = bVar6 | 0x20;
    }
    pfVar9 = pfVar9 + 3;
    iVar7 = iVar7 + 1;
    bVar10 = bVar10 & bVar6;
    bVar3 = bVar3 | bVar6;
  } while (iVar7 < 3);
  if (bVar3 == 0) {
    puVar1 = (uint *)*in_stack_00000004;
    _DAT_01548a94 = 3;
    if (puVar1 != (uint *)&DAT_01548a98) {
      _DAT_01548a98 = *puVar1;
      _DAT_01548aa0 = puVar1[2];
      _DAT_01548a9c = puVar1[1];
    }
    puVar1 = (uint *)in_stack_00000004[1];
    if (puVar1 != (uint *)&DAT_01548aa4) {
      _DAT_01548aa4 = *puVar1;
      _DAT_01548aac = puVar1[2];
      _DAT_01548aa8 = puVar1[1];
    }
    puVar1 = (uint *)in_stack_00000004[2];
    if (puVar1 != (uint *)&DAT_01548ab0) {
      _DAT_01548ab0 = *puVar1;
      _DAT_01548ab8 = puVar1[2];
      _DAT_01548ab4 = puVar1[1];
    }
    return 1;
  }
  if (bVar10 == 0) {
    fVar2 = in_stack_0000000c[1];
    iVar7 = 0;
    pCVar8 = (CVector3f *)&DAT_01548600;
    _DAT_015486c0 = 0;
    _DAT_01548784 = 0;
    _DAT_01548848 = 0;
    _DAT_0154890c = 0;
    _DAT_015489d0 = 0;
    _DAT_01548a94 = 0;
    do {
      uVar4 = iVar7 + 1;
      if (uVar4 == _DAT_015485fc) {
        uVar4 = uVar4 ^ _DAT_015485fc;
      }
      bVar3 = fVar2 < pCVar8->y;
      if (fVar2 < *(float *)(&DAT_01548604 + uVar4 * 0xc)) {
        bVar3 = bVar3 | 2;
      }
      switch(bVar3) {
      case 0:
        iVar5 = _DAT_015486c0 * 0xc;
        if ((CVector3f *)(iVar5 + 0x15486c4) != pCVar8) {
          ((CVector3f *)(iVar5 + 0x15486c4))->x = pCVar8->x;
          *(float *)(iVar5 + 0x15486c8) = pCVar8->y;
          *(float *)(iVar5 + 0x15486cc) = pCVar8->z;
        }
        _DAT_015486c0 = _DAT_015486c0 + 1;
        break;
      case 1:
        core_dcube_cpp_clipEdgeToPlane_FUN_004515b0
                  ((CVector3f *)(&DAT_01548600 + uVar4 * 0xc),pCVar8,
                   (CVector3f *)(_DAT_015486c0 * 0xc + 0x15486c4),0.0,1.0,0.0,(double)-fVar2);
        _DAT_015486c0 = _DAT_015486c0 + 1;
        break;
      case 2:
        iVar5 = _DAT_015486c0 * 0xc;
        if ((CVector3f *)(iVar5 + 0x15486c4) != pCVar8) {
          ((CVector3f *)(iVar5 + 0x15486c4))->x = pCVar8->x;
          *(float *)(iVar5 + 0x15486c8) = pCVar8->y;
          *(float *)(iVar5 + 0x15486cc) = pCVar8->z;
        }
        _DAT_015486c0 = _DAT_015486c0 + 1;
        core_dcube_cpp_clipEdgeToPlane_FUN_004515b0
                  (pCVar8,(CVector3f *)(&DAT_01548600 + uVar4 * 0xc),
                   (CVector3f *)(_DAT_015486c0 * 0xc + 0x15486c4),0.0,1.0,0.0,(double)-fVar2);
        _DAT_015486c0 = _DAT_015486c0 + 1;
      }
      iVar7 = iVar7 + 1;
      pCVar8 = pCVar8 + 1;
    } while (iVar7 < (int)_DAT_015485fc);
    if (2 < (int)_DAT_015486c0) {
      fVar2 = in_stack_00000008[1];
      iVar7 = 0;
      if (0 < (int)_DAT_015486c0) {
        pCVar8 = (CVector3f *)0x15486c4;
        do {
          uVar4 = iVar7 + 1;
          if (uVar4 == _DAT_015486c0) {
            uVar4 = uVar4 ^ _DAT_015486c0;
          }
          pCVar11 = (CVector3f *)(uVar4 * 0xc + 0x15486c4);
          bVar3 = pCVar8->y < fVar2;
          if (*(float *)(uVar4 * 0xc + 0x15486c8) < fVar2) {
            bVar3 = bVar3 | 2;
          }
          switch(bVar3) {
          case 0:
            iVar5 = _DAT_01548784 * 0xc;
            if ((CVector3f *)(iVar5 + 0x1548788) != pCVar8) {
              ((CVector3f *)(iVar5 + 0x1548788))->x = pCVar8->x;
              *(float *)(iVar5 + 0x154878c) = pCVar8->y;
              *(float *)(iVar5 + 0x1548790) = pCVar8->z;
            }
            _DAT_01548784 = _DAT_01548784 + 1;
            break;
          case 1:
            core_dcube_cpp_clipEdgeToPlane_FUN_004515b0
                      (pCVar11,pCVar8,(CVector3f *)(_DAT_01548784 * 0xc + 0x1548788),0.0,-1.0,0.0,
                       (double)fVar2);
            _DAT_01548784 = _DAT_01548784 + 1;
            break;
          case 2:
            iVar5 = _DAT_01548784 * 0xc;
            if ((CVector3f *)(iVar5 + 0x1548788) != pCVar8) {
              ((CVector3f *)(iVar5 + 0x1548788))->x = pCVar8->x;
              *(float *)(iVar5 + 0x154878c) = pCVar8->y;
              *(float *)(iVar5 + 0x1548790) = pCVar8->z;
            }
            _DAT_01548784 = _DAT_01548784 + 1;
            core_dcube_cpp_clipEdgeToPlane_FUN_004515b0
                      (pCVar8,pCVar11,(CVector3f *)(_DAT_01548784 * 0xc + 0x1548788),0.0,-1.0,0.0,
                       (double)fVar2);
            _DAT_01548784 = _DAT_01548784 + 1;
          }
          iVar7 = iVar7 + 1;
          pCVar8 = pCVar8 + 1;
        } while (iVar7 < (int)_DAT_015486c0);
      }
      if (2 < (int)_DAT_01548784) {
        fVar2 = *in_stack_0000000c;
        iVar7 = 0;
        if (0 < (int)_DAT_01548784) {
          pCVar8 = (CVector3f *)0x1548788;
          do {
            uVar4 = iVar7 + 1;
            if (uVar4 == _DAT_01548784) {
              uVar4 = uVar4 ^ _DAT_01548784;
            }
            pCVar11 = (CVector3f *)(uVar4 * 0xc + 0x1548788);
            bVar3 = fVar2 < pCVar8->x;
            if (fVar2 < pCVar11->x) {
              bVar3 = bVar3 | 2;
            }
            switch(bVar3) {
            case 0:
              iVar5 = _DAT_01548848 * 0xc;
              if ((CVector3f *)(iVar5 + 0x154884c) != pCVar8) {
                ((CVector3f *)(iVar5 + 0x154884c))->x = pCVar8->x;
                *(float *)(iVar5 + 0x1548850) = pCVar8->y;
                *(float *)(iVar5 + 0x1548854) = pCVar8->z;
              }
              _DAT_01548848 = _DAT_01548848 + 1;
              break;
            case 1:
              core_dcube_cpp_clipEdgeToPlane_FUN_004515b0
                        (pCVar11,pCVar8,(CVector3f *)(_DAT_01548848 * 0xc + 0x154884c),1.0,0.0,0.0,
                         (double)-fVar2);
              _DAT_01548848 = _DAT_01548848 + 1;
              break;
            case 2:
              iVar5 = _DAT_01548848 * 0xc;
              if ((CVector3f *)(iVar5 + 0x154884c) != pCVar8) {
                ((CVector3f *)(iVar5 + 0x154884c))->x = pCVar8->x;
                *(float *)(iVar5 + 0x1548850) = pCVar8->y;
                *(float *)(iVar5 + 0x1548854) = pCVar8->z;
              }
              _DAT_01548848 = _DAT_01548848 + 1;
              core_dcube_cpp_clipEdgeToPlane_FUN_004515b0
                        (pCVar8,pCVar11,(CVector3f *)(_DAT_01548848 * 0xc + 0x154884c),1.0,0.0,0.0,
                         (double)-fVar2);
              _DAT_01548848 = _DAT_01548848 + 1;
            }
            iVar7 = iVar7 + 1;
            pCVar8 = pCVar8 + 1;
          } while (iVar7 < (int)_DAT_01548784);
        }
        if (2 < (int)_DAT_01548848) {
          fVar2 = *in_stack_00000008;
          iVar7 = 0;
          if (0 < (int)_DAT_01548848) {
            pCVar8 = (CVector3f *)0x154884c;
            do {
              uVar4 = iVar7 + 1;
              if (uVar4 == _DAT_01548848) {
                uVar4 = uVar4 ^ _DAT_01548848;
              }
              pCVar11 = (CVector3f *)(uVar4 * 0xc + 0x154884c);
              bVar3 = pCVar8->x < fVar2;
              if (pCVar11->x < fVar2) {
                bVar3 = bVar3 | 2;
              }
              switch(bVar3) {
              case 0:
                iVar5 = _DAT_0154890c * 0xc;
                if ((CVector3f *)(iVar5 + 0x1548910) != pCVar8) {
                  ((CVector3f *)(iVar5 + 0x1548910))->x = pCVar8->x;
                  *(float *)(iVar5 + 0x1548914) = pCVar8->y;
                  *(float *)(iVar5 + 0x1548918) = pCVar8->z;
                }
                _DAT_0154890c = _DAT_0154890c + 1;
                break;
              case 1:
                core_dcube_cpp_clipEdgeToPlane_FUN_004515b0
                          (pCVar11,pCVar8,(CVector3f *)(_DAT_0154890c * 0xc + 0x1548910),-1.0,0.0,
                           0.0,(double)fVar2);
                _DAT_0154890c = _DAT_0154890c + 1;
                break;
              case 2:
                iVar5 = _DAT_0154890c * 0xc;
                if ((CVector3f *)(iVar5 + 0x1548910) != pCVar8) {
                  ((CVector3f *)(iVar5 + 0x1548910))->x = pCVar8->x;
                  *(float *)(iVar5 + 0x1548914) = pCVar8->y;
                  *(float *)(iVar5 + 0x1548918) = pCVar8->z;
                }
                _DAT_0154890c = _DAT_0154890c + 1;
                core_dcube_cpp_clipEdgeToPlane_FUN_004515b0
                          (pCVar8,pCVar11,(CVector3f *)(_DAT_0154890c * 0xc + 0x1548910),-1.0,0.0,
                           0.0,(double)fVar2);
                _DAT_0154890c = _DAT_0154890c + 1;
              }
              iVar7 = iVar7 + 1;
              pCVar8 = pCVar8 + 1;
            } while (iVar7 < (int)_DAT_01548848);
          }
          if (2 < (int)_DAT_0154890c) {
            fVar2 = in_stack_00000008[2];
            iVar7 = 0;
            if (0 < (int)_DAT_0154890c) {
              pCVar8 = (CVector3f *)0x1548910;
              do {
                uVar4 = iVar7 + 1;
                if (uVar4 == _DAT_0154890c) {
                  uVar4 = uVar4 ^ _DAT_0154890c;
                }
                pCVar11 = (CVector3f *)(uVar4 * 0xc + 0x1548910);
                bVar3 = pCVar8->z < fVar2;
                if (*(float *)(uVar4 * 0xc + 0x1548918) < fVar2) {
                  bVar3 = bVar3 | 2;
                }
                switch(bVar3) {
                case 0:
                  iVar5 = _DAT_015489d0 * 0xc;
                  if ((CVector3f *)(iVar5 + 0x15489d4) != pCVar8) {
                    ((CVector3f *)(iVar5 + 0x15489d4))->x = pCVar8->x;
                    *(float *)(iVar5 + 0x15489d8) = pCVar8->y;
                    *(float *)(iVar5 + 0x15489dc) = pCVar8->z;
                  }
                  _DAT_015489d0 = _DAT_015489d0 + 1;
                  break;
                case 1:
                  core_dcube_cpp_clipEdgeToPlane_FUN_004515b0
                            (pCVar11,pCVar8,(CVector3f *)(_DAT_015489d0 * 0xc + 0x15489d4),0.0,0.0,
                             -1.0,(double)fVar2);
                  _DAT_015489d0 = _DAT_015489d0 + 1;
                  break;
                case 2:
                  iVar5 = _DAT_015489d0 * 0xc;
                  if ((CVector3f *)(iVar5 + 0x15489d4) != pCVar8) {
                    ((CVector3f *)(iVar5 + 0x15489d4))->x = pCVar8->x;
                    *(float *)(iVar5 + 0x15489d8) = pCVar8->y;
                    *(float *)(iVar5 + 0x15489dc) = pCVar8->z;
                  }
                  _DAT_015489d0 = _DAT_015489d0 + 1;
                  core_dcube_cpp_clipEdgeToPlane_FUN_004515b0
                            (pCVar8,pCVar11,(CVector3f *)(_DAT_015489d0 * 0xc + 0x15489d4),0.0,0.0,
                             -1.0,(double)fVar2);
                  _DAT_015489d0 = _DAT_015489d0 + 1;
                }
                iVar7 = iVar7 + 1;
                pCVar8 = pCVar8 + 1;
              } while (iVar7 < (int)_DAT_0154890c);
            }
            if (2 < (int)_DAT_015489d0) {
              fVar2 = in_stack_0000000c[2];
              iVar7 = 0;
              if (0 < (int)_DAT_015489d0) {
                pCVar8 = (CVector3f *)0x15489d4;
                do {
                  uVar4 = iVar7 + 1;
                  if (uVar4 == _DAT_015489d0) {
                    uVar4 = uVar4 ^ _DAT_015489d0;
                  }
                  pCVar11 = (CVector3f *)(uVar4 * 0xc + 0x15489d4);
                  bVar3 = fVar2 < pCVar8->z;
                  if (fVar2 < *(float *)(uVar4 * 0xc + 0x15489dc)) {
                    bVar3 = bVar3 | 2;
                  }
                  switch(bVar3) {
                  case 0:
                    iVar5 = _DAT_01548a94 * 0xc;
                    if ((CVector3f *)(&DAT_01548a98 + iVar5) != pCVar8) {
                      ((CVector3f *)(&DAT_01548a98 + iVar5))->x = pCVar8->x;
                      *(float *)(&DAT_01548a9c + iVar5) = pCVar8->y;
                      *(float *)(&DAT_01548aa0 + iVar5) = pCVar8->z;
                    }
                    _DAT_01548a94 = _DAT_01548a94 + 1;
                    break;
                  case 1:
                    core_dcube_cpp_clipEdgeToPlane_FUN_004515b0
                              (pCVar11,pCVar8,(CVector3f *)(&DAT_01548a98 + _DAT_01548a94 * 0xc),0.0
                               ,0.0,-1.0,(double)fVar2);
                    _DAT_01548a94 = _DAT_01548a94 + 1;
                    break;
                  case 2:
                    iVar5 = _DAT_01548a94 * 0xc;
                    if ((CVector3f *)(&DAT_01548a98 + iVar5) != pCVar8) {
                      ((CVector3f *)(&DAT_01548a98 + iVar5))->x = pCVar8->x;
                      *(float *)(&DAT_01548a9c + iVar5) = pCVar8->y;
                      *(float *)(&DAT_01548aa0 + iVar5) = pCVar8->z;
                    }
                    _DAT_01548a94 = _DAT_01548a94 + 1;
                    core_dcube_cpp_clipEdgeToPlane_FUN_004515b0
                              (pCVar8,pCVar11,(CVector3f *)(&DAT_01548a98 + _DAT_01548a94 * 0xc),0.0
                               ,0.0,-1.0,(double)fVar2);
                    _DAT_01548a94 = _DAT_01548a94 + 1;
                  }
                  iVar7 = iVar7 + 1;
                  pCVar8 = pCVar8 + 1;
                } while (iVar7 < (int)_DAT_015489d0);
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
