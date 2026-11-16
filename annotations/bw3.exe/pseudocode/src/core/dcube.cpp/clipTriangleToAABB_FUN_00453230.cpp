// Name: core_dcube.cpp_clipTriangleToAABB_FUN_00453230
// Address: 00453230
// Address Range: [[00453230, 00453c3b]]
// Convention: __cdecl
// Signature: uint __cdecl core_dcube_cpp_clipTriangleToAABB_FUN_00453230(CVector3f **triangle_vertices,CVector3f *aabb_min,CVector3f *aabb_max)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl core_dcube_cpp_clipTriangleToAABB_FUN_00453230(CVector3f **triangle_vertices,CVector3f *aabb_min,CVector3f *aabb_max)

{
  float fVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  CVector3f *pCVar7;
  float *pfVar8;
  byte bVar9;
  CVector3f *pCVar10;
  
  _DAT_015485fc = 3;
  pCVar7 = *triangle_vertices;
  if (pCVar7 != (CVector3f *)&DAT_01548600) {
    _DAT_01548600 = pCVar7->x;
    _DAT_01548608 = pCVar7->z;
    _DAT_01548604 = pCVar7->y;
  }
  pCVar7 = triangle_vertices[1];
  if (pCVar7 != (CVector3f *)&DAT_0154860c) {
    _DAT_0154860c = pCVar7->x;
    _DAT_01548614 = pCVar7->z;
    _DAT_01548610 = pCVar7->y;
  }
  pCVar7 = triangle_vertices[2];
  if (pCVar7 != (CVector3f *)&DAT_01548618) {
    _DAT_01548618 = pCVar7->x;
    _DAT_01548620 = pCVar7->z;
    _DAT_0154861c = pCVar7->y;
  }
  bVar9 = 0xff;
  iVar6 = 0;
  bVar2 = 0;
  pfVar8 = (float *)&DAT_01548600;
  do {
    bVar5 = aabb_max->x < *pfVar8;
    if (aabb_max->y < pfVar8[1]) {
      bVar5 = bVar5 | 2;
    }
    if (aabb_max->z < pfVar8[2]) {
      bVar5 = bVar5 | 4;
    }
    if (*pfVar8 < aabb_min->x) {
      bVar5 = bVar5 | 8;
    }
    if (pfVar8[1] < aabb_min->y) {
      bVar5 = bVar5 | 0x10;
    }
    if (pfVar8[2] < aabb_min->z) {
      bVar5 = bVar5 | 0x20;
    }
    pfVar8 = pfVar8 + 3;
    iVar6 = iVar6 + 1;
    bVar9 = bVar9 & bVar5;
    bVar2 = bVar2 | bVar5;
  } while (iVar6 < 3);
  if (bVar2 == 0) {
    pCVar7 = *triangle_vertices;
    _DAT_01548a94 = 3;
    if (pCVar7 != (CVector3f *)&DAT_01548a98) {
      _DAT_01548a98 = pCVar7->x;
      _DAT_01548aa0 = pCVar7->z;
      _DAT_01548a9c = pCVar7->y;
    }
    pCVar7 = triangle_vertices[1];
    if (pCVar7 != (CVector3f *)&DAT_01548aa4) {
      _DAT_01548aa4 = pCVar7->x;
      _DAT_01548aac = pCVar7->z;
      _DAT_01548aa8 = pCVar7->y;
    }
    pCVar7 = triangle_vertices[2];
    if (pCVar7 != (CVector3f *)&DAT_01548ab0) {
      _DAT_01548ab0 = pCVar7->x;
      _DAT_01548ab8 = pCVar7->z;
      _DAT_01548ab4 = pCVar7->y;
    }
    return 1;
  }
  if (bVar9 == 0) {
    fVar1 = aabb_max->y;
    iVar6 = 0;
    pCVar7 = (CVector3f *)&DAT_01548600;
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
      bVar2 = fVar1 < pCVar7->y;
      if (fVar1 < *(float *)(&DAT_01548604 + uVar3 * 0xc)) {
        bVar2 = bVar2 | 2;
      }
      switch(bVar2) {
      case 0:
        iVar4 = _DAT_015486c0 * 0xc;
        if ((CVector3f *)(iVar4 + 0x15486c4) != pCVar7) {
          ((CVector3f *)(iVar4 + 0x15486c4))->x = pCVar7->x;
          *(float *)(iVar4 + 0x15486c8) = pCVar7->y;
          *(float *)(iVar4 + 0x15486cc) = pCVar7->z;
        }
        _DAT_015486c0 = _DAT_015486c0 + 1;
        break;
      case 1:
        core_dcube_cpp_clipEdgeToPlane_FUN_004515b0
                  ((CVector3f *)(&DAT_01548600 + uVar3 * 0xc),pCVar7,
                   (CVector3f *)(_DAT_015486c0 * 0xc + 0x15486c4),0.0,1.0,0.0,(double)-fVar1);
        _DAT_015486c0 = _DAT_015486c0 + 1;
        break;
      case 2:
        iVar4 = _DAT_015486c0 * 0xc;
        if ((CVector3f *)(iVar4 + 0x15486c4) != pCVar7) {
          ((CVector3f *)(iVar4 + 0x15486c4))->x = pCVar7->x;
          *(float *)(iVar4 + 0x15486c8) = pCVar7->y;
          *(float *)(iVar4 + 0x15486cc) = pCVar7->z;
        }
        _DAT_015486c0 = _DAT_015486c0 + 1;
        core_dcube_cpp_clipEdgeToPlane_FUN_004515b0
                  (pCVar7,(CVector3f *)(&DAT_01548600 + uVar3 * 0xc),
                   (CVector3f *)(_DAT_015486c0 * 0xc + 0x15486c4),0.0,1.0,0.0,(double)-fVar1);
        _DAT_015486c0 = _DAT_015486c0 + 1;
      }
      iVar6 = iVar6 + 1;
      pCVar7 = pCVar7 + 1;
    } while (iVar6 < (int)_DAT_015485fc);
    if (2 < (int)_DAT_015486c0) {
      fVar1 = aabb_min->y;
      iVar6 = 0;
      if (0 < (int)_DAT_015486c0) {
        pCVar7 = (CVector3f *)0x15486c4;
        do {
          uVar3 = iVar6 + 1;
          if (uVar3 == _DAT_015486c0) {
            uVar3 = uVar3 ^ _DAT_015486c0;
          }
          pCVar10 = (CVector3f *)(uVar3 * 0xc + 0x15486c4);
          bVar2 = pCVar7->y < fVar1;
          if (*(float *)(uVar3 * 0xc + 0x15486c8) < fVar1) {
            bVar2 = bVar2 | 2;
          }
          switch(bVar2) {
          case 0:
            iVar4 = _DAT_01548784 * 0xc;
            if ((CVector3f *)(iVar4 + 0x1548788) != pCVar7) {
              ((CVector3f *)(iVar4 + 0x1548788))->x = pCVar7->x;
              *(float *)(iVar4 + 0x154878c) = pCVar7->y;
              *(float *)(iVar4 + 0x1548790) = pCVar7->z;
            }
            _DAT_01548784 = _DAT_01548784 + 1;
            break;
          case 1:
            core_dcube_cpp_clipEdgeToPlane_FUN_004515b0
                      (pCVar10,pCVar7,(CVector3f *)(_DAT_01548784 * 0xc + 0x1548788),0.0,-1.0,0.0,
                       (double)fVar1);
            _DAT_01548784 = _DAT_01548784 + 1;
            break;
          case 2:
            iVar4 = _DAT_01548784 * 0xc;
            if ((CVector3f *)(iVar4 + 0x1548788) != pCVar7) {
              ((CVector3f *)(iVar4 + 0x1548788))->x = pCVar7->x;
              *(float *)(iVar4 + 0x154878c) = pCVar7->y;
              *(float *)(iVar4 + 0x1548790) = pCVar7->z;
            }
            _DAT_01548784 = _DAT_01548784 + 1;
            core_dcube_cpp_clipEdgeToPlane_FUN_004515b0
                      (pCVar7,pCVar10,(CVector3f *)(_DAT_01548784 * 0xc + 0x1548788),0.0,-1.0,0.0,
                       (double)fVar1);
            _DAT_01548784 = _DAT_01548784 + 1;
          }
          iVar6 = iVar6 + 1;
          pCVar7 = pCVar7 + 1;
        } while (iVar6 < (int)_DAT_015486c0);
      }
      if (2 < (int)_DAT_01548784) {
        fVar1 = aabb_max->x;
        iVar6 = 0;
        if (0 < (int)_DAT_01548784) {
          pCVar7 = (CVector3f *)0x1548788;
          do {
            uVar3 = iVar6 + 1;
            if (uVar3 == _DAT_01548784) {
              uVar3 = uVar3 ^ _DAT_01548784;
            }
            pCVar10 = (CVector3f *)(uVar3 * 0xc + 0x1548788);
            bVar2 = fVar1 < pCVar7->x;
            if (fVar1 < pCVar10->x) {
              bVar2 = bVar2 | 2;
            }
            switch(bVar2) {
            case 0:
              iVar4 = _DAT_01548848 * 0xc;
              if ((CVector3f *)(iVar4 + 0x154884c) != pCVar7) {
                ((CVector3f *)(iVar4 + 0x154884c))->x = pCVar7->x;
                *(float *)(iVar4 + 0x1548850) = pCVar7->y;
                *(float *)(iVar4 + 0x1548854) = pCVar7->z;
              }
              _DAT_01548848 = _DAT_01548848 + 1;
              break;
            case 1:
              core_dcube_cpp_clipEdgeToPlane_FUN_004515b0
                        (pCVar10,pCVar7,(CVector3f *)(_DAT_01548848 * 0xc + 0x154884c),1.0,0.0,0.0,
                         (double)-fVar1);
              _DAT_01548848 = _DAT_01548848 + 1;
              break;
            case 2:
              iVar4 = _DAT_01548848 * 0xc;
              if ((CVector3f *)(iVar4 + 0x154884c) != pCVar7) {
                ((CVector3f *)(iVar4 + 0x154884c))->x = pCVar7->x;
                *(float *)(iVar4 + 0x1548850) = pCVar7->y;
                *(float *)(iVar4 + 0x1548854) = pCVar7->z;
              }
              _DAT_01548848 = _DAT_01548848 + 1;
              core_dcube_cpp_clipEdgeToPlane_FUN_004515b0
                        (pCVar7,pCVar10,(CVector3f *)(_DAT_01548848 * 0xc + 0x154884c),1.0,0.0,0.0,
                         (double)-fVar1);
              _DAT_01548848 = _DAT_01548848 + 1;
            }
            iVar6 = iVar6 + 1;
            pCVar7 = pCVar7 + 1;
          } while (iVar6 < (int)_DAT_01548784);
        }
        if (2 < (int)_DAT_01548848) {
          fVar1 = aabb_min->x;
          iVar6 = 0;
          if (0 < (int)_DAT_01548848) {
            pCVar7 = (CVector3f *)0x154884c;
            do {
              uVar3 = iVar6 + 1;
              if (uVar3 == _DAT_01548848) {
                uVar3 = uVar3 ^ _DAT_01548848;
              }
              pCVar10 = (CVector3f *)(uVar3 * 0xc + 0x154884c);
              bVar2 = pCVar7->x < fVar1;
              if (pCVar10->x < fVar1) {
                bVar2 = bVar2 | 2;
              }
              switch(bVar2) {
              case 0:
                iVar4 = _DAT_0154890c * 0xc;
                if ((CVector3f *)(iVar4 + 0x1548910) != pCVar7) {
                  ((CVector3f *)(iVar4 + 0x1548910))->x = pCVar7->x;
                  *(float *)(iVar4 + 0x1548914) = pCVar7->y;
                  *(float *)(iVar4 + 0x1548918) = pCVar7->z;
                }
                _DAT_0154890c = _DAT_0154890c + 1;
                break;
              case 1:
                core_dcube_cpp_clipEdgeToPlane_FUN_004515b0
                          (pCVar10,pCVar7,(CVector3f *)(_DAT_0154890c * 0xc + 0x1548910),-1.0,0.0,
                           0.0,(double)fVar1);
                _DAT_0154890c = _DAT_0154890c + 1;
                break;
              case 2:
                iVar4 = _DAT_0154890c * 0xc;
                if ((CVector3f *)(iVar4 + 0x1548910) != pCVar7) {
                  ((CVector3f *)(iVar4 + 0x1548910))->x = pCVar7->x;
                  *(float *)(iVar4 + 0x1548914) = pCVar7->y;
                  *(float *)(iVar4 + 0x1548918) = pCVar7->z;
                }
                _DAT_0154890c = _DAT_0154890c + 1;
                core_dcube_cpp_clipEdgeToPlane_FUN_004515b0
                          (pCVar7,pCVar10,(CVector3f *)(_DAT_0154890c * 0xc + 0x1548910),-1.0,0.0,
                           0.0,(double)fVar1);
                _DAT_0154890c = _DAT_0154890c + 1;
              }
              iVar6 = iVar6 + 1;
              pCVar7 = pCVar7 + 1;
            } while (iVar6 < (int)_DAT_01548848);
          }
          if (2 < (int)_DAT_0154890c) {
            fVar1 = aabb_min->z;
            iVar6 = 0;
            if (0 < (int)_DAT_0154890c) {
              pCVar7 = (CVector3f *)0x1548910;
              do {
                uVar3 = iVar6 + 1;
                if (uVar3 == _DAT_0154890c) {
                  uVar3 = uVar3 ^ _DAT_0154890c;
                }
                pCVar10 = (CVector3f *)(uVar3 * 0xc + 0x1548910);
                bVar2 = pCVar7->z < fVar1;
                if (*(float *)(uVar3 * 0xc + 0x1548918) < fVar1) {
                  bVar2 = bVar2 | 2;
                }
                switch(bVar2) {
                case 0:
                  iVar4 = _DAT_015489d0 * 0xc;
                  if ((CVector3f *)(iVar4 + 0x15489d4) != pCVar7) {
                    ((CVector3f *)(iVar4 + 0x15489d4))->x = pCVar7->x;
                    *(float *)(iVar4 + 0x15489d8) = pCVar7->y;
                    *(float *)(iVar4 + 0x15489dc) = pCVar7->z;
                  }
                  _DAT_015489d0 = _DAT_015489d0 + 1;
                  break;
                case 1:
                  core_dcube_cpp_clipEdgeToPlane_FUN_004515b0
                            (pCVar10,pCVar7,(CVector3f *)(_DAT_015489d0 * 0xc + 0x15489d4),0.0,0.0,
                             -1.0,(double)fVar1);
                  _DAT_015489d0 = _DAT_015489d0 + 1;
                  break;
                case 2:
                  iVar4 = _DAT_015489d0 * 0xc;
                  if ((CVector3f *)(iVar4 + 0x15489d4) != pCVar7) {
                    ((CVector3f *)(iVar4 + 0x15489d4))->x = pCVar7->x;
                    *(float *)(iVar4 + 0x15489d8) = pCVar7->y;
                    *(float *)(iVar4 + 0x15489dc) = pCVar7->z;
                  }
                  _DAT_015489d0 = _DAT_015489d0 + 1;
                  core_dcube_cpp_clipEdgeToPlane_FUN_004515b0
                            (pCVar7,pCVar10,(CVector3f *)(_DAT_015489d0 * 0xc + 0x15489d4),0.0,0.0,
                             -1.0,(double)fVar1);
                  _DAT_015489d0 = _DAT_015489d0 + 1;
                }
                iVar6 = iVar6 + 1;
                pCVar7 = pCVar7 + 1;
              } while (iVar6 < (int)_DAT_0154890c);
            }
            if (2 < (int)_DAT_015489d0) {
              fVar1 = aabb_max->z;
              iVar6 = 0;
              if (0 < (int)_DAT_015489d0) {
                pCVar7 = (CVector3f *)0x15489d4;
                do {
                  uVar3 = iVar6 + 1;
                  if (uVar3 == _DAT_015489d0) {
                    uVar3 = uVar3 ^ _DAT_015489d0;
                  }
                  pCVar10 = (CVector3f *)(uVar3 * 0xc + 0x15489d4);
                  bVar2 = fVar1 < pCVar7->z;
                  if (fVar1 < *(float *)(uVar3 * 0xc + 0x15489dc)) {
                    bVar2 = bVar2 | 2;
                  }
                  switch(bVar2) {
                  case 0:
                    iVar4 = _DAT_01548a94 * 0xc;
                    if ((CVector3f *)(&DAT_01548a98 + iVar4) != pCVar7) {
                      ((CVector3f *)(&DAT_01548a98 + iVar4))->x = pCVar7->x;
                      *(float *)(&DAT_01548a9c + iVar4) = pCVar7->y;
                      *(float *)(&DAT_01548aa0 + iVar4) = pCVar7->z;
                    }
                    _DAT_01548a94 = _DAT_01548a94 + 1;
                    break;
                  case 1:
                    core_dcube_cpp_clipEdgeToPlane_FUN_004515b0
                              (pCVar10,pCVar7,(CVector3f *)(&DAT_01548a98 + _DAT_01548a94 * 0xc),0.0
                               ,0.0,-1.0,(double)fVar1);
                    _DAT_01548a94 = _DAT_01548a94 + 1;
                    break;
                  case 2:
                    iVar4 = _DAT_01548a94 * 0xc;
                    if ((CVector3f *)(&DAT_01548a98 + iVar4) != pCVar7) {
                      ((CVector3f *)(&DAT_01548a98 + iVar4))->x = pCVar7->x;
                      *(float *)(&DAT_01548a9c + iVar4) = pCVar7->y;
                      *(float *)(&DAT_01548aa0 + iVar4) = pCVar7->z;
                    }
                    _DAT_01548a94 = _DAT_01548a94 + 1;
                    core_dcube_cpp_clipEdgeToPlane_FUN_004515b0
                              (pCVar7,pCVar10,(CVector3f *)(&DAT_01548a98 + _DAT_01548a94 * 0xc),0.0
                               ,0.0,-1.0,(double)fVar1);
                    _DAT_01548a94 = _DAT_01548a94 + 1;
                  }
                  iVar6 = iVar6 + 1;
                  pCVar7 = pCVar7 + 1;
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
