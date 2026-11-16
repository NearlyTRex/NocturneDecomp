// Name: core_dcube.cpp_clipTriangleToAABB_FUN_00445a30
// Address: 00445a30
// Address Range: [[00445a30, 0044643b]]
// Convention: __cdecl
// Signature: uint __cdecl core_dcube_cpp_clipTriangleToAABB_FUN_00445a30(CVector3f **triangle_vertices,CVector3f *aabb_min,CVector3f *aabb_max)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl core_dcube_cpp_clipTriangleToAABB_FUN_00445a30(CVector3f **triangle_vertices,CVector3f *aabb_min,CVector3f *aabb_max)

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
  
  _DAT_0151084c = 3;
  pCVar7 = *triangle_vertices;
  if (pCVar7 != (CVector3f *)&DAT_01510850) {
    _DAT_01510850 = pCVar7->x;
    _DAT_01510858 = pCVar7->z;
    _DAT_01510854 = pCVar7->y;
  }
  pCVar7 = triangle_vertices[1];
  if (pCVar7 != (CVector3f *)&DAT_0151085c) {
    _DAT_0151085c = pCVar7->x;
    _DAT_01510864 = pCVar7->z;
    _DAT_01510860 = pCVar7->y;
  }
  pCVar7 = triangle_vertices[2];
  if (pCVar7 != (CVector3f *)&DAT_01510868) {
    _DAT_01510868 = pCVar7->x;
    _DAT_01510870 = pCVar7->z;
    _DAT_0151086c = pCVar7->y;
  }
  bVar9 = 0xff;
  iVar6 = 0;
  bVar2 = 0;
  pfVar8 = (float *)&DAT_01510850;
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
    _DAT_01510ce4 = 3;
    if (pCVar7 != (CVector3f *)&DAT_01510ce8) {
      _DAT_01510ce8 = pCVar7->x;
      _DAT_01510cf0 = pCVar7->z;
      _DAT_01510cec = pCVar7->y;
    }
    pCVar7 = triangle_vertices[1];
    if (pCVar7 != (CVector3f *)&DAT_01510cf4) {
      _DAT_01510cf4 = pCVar7->x;
      _DAT_01510cfc = pCVar7->z;
      _DAT_01510cf8 = pCVar7->y;
    }
    pCVar7 = triangle_vertices[2];
    if (pCVar7 != (CVector3f *)&DAT_01510d00) {
      _DAT_01510d00 = pCVar7->x;
      _DAT_01510d08 = pCVar7->z;
      _DAT_01510d04 = pCVar7->y;
    }
    return 1;
  }
  if (bVar9 == 0) {
    fVar1 = aabb_max->y;
    iVar6 = 0;
    pCVar7 = (CVector3f *)&DAT_01510850;
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
      bVar2 = fVar1 < pCVar7->y;
      if (fVar1 < *(float *)(&DAT_01510854 + uVar3 * 0xc)) {
        bVar2 = bVar2 | 2;
      }
      switch(bVar2) {
      case 0:
        iVar4 = _DAT_01510910 * 0xc;
        if ((CVector3f *)(iVar4 + 0x1510914) != pCVar7) {
          ((CVector3f *)(iVar4 + 0x1510914))->x = pCVar7->x;
          *(float *)(iVar4 + 0x1510918) = pCVar7->y;
          *(float *)(iVar4 + 0x151091c) = pCVar7->z;
        }
        _DAT_01510910 = _DAT_01510910 + 1;
        break;
      case 1:
        core_dcube_cpp_clipEdgeToPlane_FUN_00443db0
                  ((CVector3f *)(&DAT_01510850 + uVar3 * 0xc),pCVar7,
                   (CVector3f *)(_DAT_01510910 * 0xc + 0x1510914),0.0,1.0,0.0,(double)-fVar1);
        _DAT_01510910 = _DAT_01510910 + 1;
        break;
      case 2:
        iVar4 = _DAT_01510910 * 0xc;
        if ((CVector3f *)(iVar4 + 0x1510914) != pCVar7) {
          ((CVector3f *)(iVar4 + 0x1510914))->x = pCVar7->x;
          *(float *)(iVar4 + 0x1510918) = pCVar7->y;
          *(float *)(iVar4 + 0x151091c) = pCVar7->z;
        }
        _DAT_01510910 = _DAT_01510910 + 1;
        core_dcube_cpp_clipEdgeToPlane_FUN_00443db0
                  (pCVar7,(CVector3f *)(&DAT_01510850 + uVar3 * 0xc),
                   (CVector3f *)(_DAT_01510910 * 0xc + 0x1510914),0.0,1.0,0.0,(double)-fVar1);
        _DAT_01510910 = _DAT_01510910 + 1;
      }
      iVar6 = iVar6 + 1;
      pCVar7 = pCVar7 + 1;
    } while (iVar6 < (int)_DAT_0151084c);
    if (2 < (int)_DAT_01510910) {
      fVar1 = aabb_min->y;
      iVar6 = 0;
      if (0 < (int)_DAT_01510910) {
        pCVar7 = (CVector3f *)0x1510914;
        do {
          uVar3 = iVar6 + 1;
          if (uVar3 == _DAT_01510910) {
            uVar3 = uVar3 ^ _DAT_01510910;
          }
          pCVar10 = (CVector3f *)(uVar3 * 0xc + 0x1510914);
          bVar2 = pCVar7->y < fVar1;
          if (*(float *)(uVar3 * 0xc + 0x1510918) < fVar1) {
            bVar2 = bVar2 | 2;
          }
          switch(bVar2) {
          case 0:
            iVar4 = _DAT_015109d4 * 0xc;
            if ((CVector3f *)(iVar4 + 0x15109d8) != pCVar7) {
              ((CVector3f *)(iVar4 + 0x15109d8))->x = pCVar7->x;
              *(float *)(iVar4 + 0x15109dc) = pCVar7->y;
              *(float *)(iVar4 + 0x15109e0) = pCVar7->z;
            }
            _DAT_015109d4 = _DAT_015109d4 + 1;
            break;
          case 1:
            core_dcube_cpp_clipEdgeToPlane_FUN_00443db0
                      (pCVar10,pCVar7,(CVector3f *)(_DAT_015109d4 * 0xc + 0x15109d8),0.0,-1.0,0.0,
                       (double)fVar1);
            _DAT_015109d4 = _DAT_015109d4 + 1;
            break;
          case 2:
            iVar4 = _DAT_015109d4 * 0xc;
            if ((CVector3f *)(iVar4 + 0x15109d8) != pCVar7) {
              ((CVector3f *)(iVar4 + 0x15109d8))->x = pCVar7->x;
              *(float *)(iVar4 + 0x15109dc) = pCVar7->y;
              *(float *)(iVar4 + 0x15109e0) = pCVar7->z;
            }
            _DAT_015109d4 = _DAT_015109d4 + 1;
            core_dcube_cpp_clipEdgeToPlane_FUN_00443db0
                      (pCVar7,pCVar10,(CVector3f *)(_DAT_015109d4 * 0xc + 0x15109d8),0.0,-1.0,0.0,
                       (double)fVar1);
            _DAT_015109d4 = _DAT_015109d4 + 1;
          }
          iVar6 = iVar6 + 1;
          pCVar7 = pCVar7 + 1;
        } while (iVar6 < (int)_DAT_01510910);
      }
      if (2 < (int)_DAT_015109d4) {
        fVar1 = aabb_max->x;
        iVar6 = 0;
        if (0 < (int)_DAT_015109d4) {
          pCVar7 = (CVector3f *)0x15109d8;
          do {
            uVar3 = iVar6 + 1;
            if (uVar3 == _DAT_015109d4) {
              uVar3 = uVar3 ^ _DAT_015109d4;
            }
            pCVar10 = (CVector3f *)(uVar3 * 0xc + 0x15109d8);
            bVar2 = fVar1 < pCVar7->x;
            if (fVar1 < pCVar10->x) {
              bVar2 = bVar2 | 2;
            }
            switch(bVar2) {
            case 0:
              iVar4 = _DAT_01510a98 * 0xc;
              if ((CVector3f *)(iVar4 + 0x1510a9c) != pCVar7) {
                ((CVector3f *)(iVar4 + 0x1510a9c))->x = pCVar7->x;
                *(float *)(iVar4 + 0x1510aa0) = pCVar7->y;
                *(float *)(iVar4 + 0x1510aa4) = pCVar7->z;
              }
              _DAT_01510a98 = _DAT_01510a98 + 1;
              break;
            case 1:
              core_dcube_cpp_clipEdgeToPlane_FUN_00443db0
                        (pCVar10,pCVar7,(CVector3f *)(_DAT_01510a98 * 0xc + 0x1510a9c),1.0,0.0,0.0,
                         (double)-fVar1);
              _DAT_01510a98 = _DAT_01510a98 + 1;
              break;
            case 2:
              iVar4 = _DAT_01510a98 * 0xc;
              if ((CVector3f *)(iVar4 + 0x1510a9c) != pCVar7) {
                ((CVector3f *)(iVar4 + 0x1510a9c))->x = pCVar7->x;
                *(float *)(iVar4 + 0x1510aa0) = pCVar7->y;
                *(float *)(iVar4 + 0x1510aa4) = pCVar7->z;
              }
              _DAT_01510a98 = _DAT_01510a98 + 1;
              core_dcube_cpp_clipEdgeToPlane_FUN_00443db0
                        (pCVar7,pCVar10,(CVector3f *)(_DAT_01510a98 * 0xc + 0x1510a9c),1.0,0.0,0.0,
                         (double)-fVar1);
              _DAT_01510a98 = _DAT_01510a98 + 1;
            }
            iVar6 = iVar6 + 1;
            pCVar7 = pCVar7 + 1;
          } while (iVar6 < (int)_DAT_015109d4);
        }
        if (2 < (int)_DAT_01510a98) {
          fVar1 = aabb_min->x;
          iVar6 = 0;
          if (0 < (int)_DAT_01510a98) {
            pCVar7 = (CVector3f *)0x1510a9c;
            do {
              uVar3 = iVar6 + 1;
              if (uVar3 == _DAT_01510a98) {
                uVar3 = uVar3 ^ _DAT_01510a98;
              }
              pCVar10 = (CVector3f *)(uVar3 * 0xc + 0x1510a9c);
              bVar2 = pCVar7->x < fVar1;
              if (pCVar10->x < fVar1) {
                bVar2 = bVar2 | 2;
              }
              switch(bVar2) {
              case 0:
                iVar4 = _DAT_01510b5c * 0xc;
                if ((CVector3f *)(iVar4 + 0x1510b60) != pCVar7) {
                  ((CVector3f *)(iVar4 + 0x1510b60))->x = pCVar7->x;
                  *(float *)(iVar4 + 0x1510b64) = pCVar7->y;
                  *(float *)(iVar4 + 0x1510b68) = pCVar7->z;
                }
                _DAT_01510b5c = _DAT_01510b5c + 1;
                break;
              case 1:
                core_dcube_cpp_clipEdgeToPlane_FUN_00443db0
                          (pCVar10,pCVar7,(CVector3f *)(_DAT_01510b5c * 0xc + 0x1510b60),-1.0,0.0,
                           0.0,(double)fVar1);
                _DAT_01510b5c = _DAT_01510b5c + 1;
                break;
              case 2:
                iVar4 = _DAT_01510b5c * 0xc;
                if ((CVector3f *)(iVar4 + 0x1510b60) != pCVar7) {
                  ((CVector3f *)(iVar4 + 0x1510b60))->x = pCVar7->x;
                  *(float *)(iVar4 + 0x1510b64) = pCVar7->y;
                  *(float *)(iVar4 + 0x1510b68) = pCVar7->z;
                }
                _DAT_01510b5c = _DAT_01510b5c + 1;
                core_dcube_cpp_clipEdgeToPlane_FUN_00443db0
                          (pCVar7,pCVar10,(CVector3f *)(_DAT_01510b5c * 0xc + 0x1510b60),-1.0,0.0,
                           0.0,(double)fVar1);
                _DAT_01510b5c = _DAT_01510b5c + 1;
              }
              iVar6 = iVar6 + 1;
              pCVar7 = pCVar7 + 1;
            } while (iVar6 < (int)_DAT_01510a98);
          }
          if (2 < (int)_DAT_01510b5c) {
            fVar1 = aabb_min->z;
            iVar6 = 0;
            if (0 < (int)_DAT_01510b5c) {
              pCVar7 = (CVector3f *)0x1510b60;
              do {
                uVar3 = iVar6 + 1;
                if (uVar3 == _DAT_01510b5c) {
                  uVar3 = uVar3 ^ _DAT_01510b5c;
                }
                pCVar10 = (CVector3f *)(uVar3 * 0xc + 0x1510b60);
                bVar2 = pCVar7->z < fVar1;
                if (*(float *)(uVar3 * 0xc + 0x1510b68) < fVar1) {
                  bVar2 = bVar2 | 2;
                }
                switch(bVar2) {
                case 0:
                  iVar4 = _DAT_01510c20 * 0xc;
                  if ((CVector3f *)(&DAT_01510c24 + iVar4) != pCVar7) {
                    ((CVector3f *)(&DAT_01510c24 + iVar4))->x = pCVar7->x;
                    *(float *)(&DAT_01510c28 + iVar4) = pCVar7->y;
                    *(float *)(&DAT_01510c2c + iVar4) = pCVar7->z;
                  }
                  _DAT_01510c20 = _DAT_01510c20 + 1;
                  break;
                case 1:
                  core_dcube_cpp_clipEdgeToPlane_FUN_00443db0
                            (pCVar10,pCVar7,(CVector3f *)(&DAT_01510c24 + _DAT_01510c20 * 0xc),0.0,
                             0.0,-1.0,(double)fVar1);
                  _DAT_01510c20 = _DAT_01510c20 + 1;
                  break;
                case 2:
                  iVar4 = _DAT_01510c20 * 0xc;
                  if ((CVector3f *)(&DAT_01510c24 + iVar4) != pCVar7) {
                    ((CVector3f *)(&DAT_01510c24 + iVar4))->x = pCVar7->x;
                    *(float *)(&DAT_01510c28 + iVar4) = pCVar7->y;
                    *(float *)(&DAT_01510c2c + iVar4) = pCVar7->z;
                  }
                  _DAT_01510c20 = _DAT_01510c20 + 1;
                  core_dcube_cpp_clipEdgeToPlane_FUN_00443db0
                            (pCVar7,pCVar10,(CVector3f *)(&DAT_01510c24 + _DAT_01510c20 * 0xc),0.0,
                             0.0,-1.0,(double)fVar1);
                  _DAT_01510c20 = _DAT_01510c20 + 1;
                }
                iVar6 = iVar6 + 1;
                pCVar7 = pCVar7 + 1;
              } while (iVar6 < (int)_DAT_01510b5c);
            }
            if (2 < (int)_DAT_01510c20) {
              fVar1 = aabb_max->z;
              iVar6 = 0;
              if (0 < (int)_DAT_01510c20) {
                pCVar7 = (CVector3f *)&DAT_01510c24;
                do {
                  uVar3 = iVar6 + 1;
                  if (uVar3 == _DAT_01510c20) {
                    uVar3 = uVar3 ^ _DAT_01510c20;
                  }
                  bVar2 = fVar1 < pCVar7->z;
                  if (fVar1 < *(float *)(&DAT_01510c2c + uVar3 * 0xc)) {
                    bVar2 = bVar2 | 2;
                  }
                  switch(bVar2) {
                  case 0:
                    iVar4 = _DAT_01510ce4 * 0xc;
                    if ((CVector3f *)(&DAT_01510ce8 + iVar4) != pCVar7) {
                      ((CVector3f *)(&DAT_01510ce8 + iVar4))->x = pCVar7->x;
                      *(float *)(&DAT_01510cec + iVar4) = pCVar7->y;
                      *(float *)(&DAT_01510cf0 + iVar4) = pCVar7->z;
                    }
                    _DAT_01510ce4 = _DAT_01510ce4 + 1;
                    break;
                  case 1:
                    core_dcube_cpp_clipEdgeToPlane_FUN_00443db0
                              ((CVector3f *)(&DAT_01510c24 + uVar3 * 0xc),pCVar7,
                               (CVector3f *)(&DAT_01510ce8 + _DAT_01510ce4 * 0xc),0.0,0.0,-1.0,
                               (double)fVar1);
                    _DAT_01510ce4 = _DAT_01510ce4 + 1;
                    break;
                  case 2:
                    iVar4 = _DAT_01510ce4 * 0xc;
                    if ((CVector3f *)(&DAT_01510ce8 + iVar4) != pCVar7) {
                      ((CVector3f *)(&DAT_01510ce8 + iVar4))->x = pCVar7->x;
                      *(float *)(&DAT_01510cec + iVar4) = pCVar7->y;
                      *(float *)(&DAT_01510cf0 + iVar4) = pCVar7->z;
                    }
                    _DAT_01510ce4 = _DAT_01510ce4 + 1;
                    core_dcube_cpp_clipEdgeToPlane_FUN_00443db0
                              (pCVar7,(CVector3f *)(&DAT_01510c24 + uVar3 * 0xc),
                               (CVector3f *)(&DAT_01510ce8 + _DAT_01510ce4 * 0xc),0.0,0.0,-1.0,
                               (double)fVar1);
                    _DAT_01510ce4 = _DAT_01510ce4 + 1;
                  }
                  iVar6 = iVar6 + 1;
                  pCVar7 = pCVar7 + 1;
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
