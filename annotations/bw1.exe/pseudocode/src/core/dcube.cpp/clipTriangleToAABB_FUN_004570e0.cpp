// Name: core_dcube.cpp_clipTriangleToAABB_FUN_004570e0
// Address: 004570e0
// Address Range: [[004570e0, 00457aeb]]
// Convention: __cdecl
// Signature: uint __cdecl core_dcube_cpp_clipTriangleToAABB_FUN_004570e0(CVector3f **triangle_vertices,CVector3f *aabb_min,CVector3f *aabb_max)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl core_dcube_cpp_clipTriangleToAABB_FUN_004570e0(CVector3f **triangle_vertices,CVector3f *aabb_min,CVector3f *aabb_max)

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
  
  _DAT_0152bd4c = 3;
  pCVar7 = *triangle_vertices;
  if (pCVar7 != (CVector3f *)&DAT_0152bd50) {
    _DAT_0152bd50 = pCVar7->x;
    _DAT_0152bd58 = pCVar7->z;
    _DAT_0152bd54 = pCVar7->y;
  }
  pCVar7 = triangle_vertices[1];
  if (pCVar7 != (CVector3f *)&DAT_0152bd5c) {
    _DAT_0152bd5c = pCVar7->x;
    _DAT_0152bd64 = pCVar7->z;
    _DAT_0152bd60 = pCVar7->y;
  }
  pCVar7 = triangle_vertices[2];
  if (pCVar7 != (CVector3f *)&DAT_0152bd68) {
    _DAT_0152bd68 = pCVar7->x;
    _DAT_0152bd70 = pCVar7->z;
    _DAT_0152bd6c = pCVar7->y;
  }
  bVar9 = 0xff;
  iVar6 = 0;
  bVar2 = 0;
  pfVar8 = (float *)&DAT_0152bd50;
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
    _DAT_0152c1e4 = 3;
    if (pCVar7 != (CVector3f *)&DAT_0152c1e8) {
      _DAT_0152c1e8 = pCVar7->x;
      _DAT_0152c1f0 = pCVar7->z;
      _DAT_0152c1ec = pCVar7->y;
    }
    pCVar7 = triangle_vertices[1];
    if (pCVar7 != (CVector3f *)&DAT_0152c1f4) {
      _DAT_0152c1f4 = pCVar7->x;
      _DAT_0152c1fc = pCVar7->z;
      _DAT_0152c1f8 = pCVar7->y;
    }
    pCVar7 = triangle_vertices[2];
    if (pCVar7 != (CVector3f *)&DAT_0152c200) {
      _DAT_0152c200 = pCVar7->x;
      _DAT_0152c208 = pCVar7->z;
      _DAT_0152c204 = pCVar7->y;
    }
    return 1;
  }
  if (bVar9 == 0) {
    fVar1 = aabb_max->y;
    iVar6 = 0;
    pCVar7 = (CVector3f *)&DAT_0152bd50;
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
      bVar2 = fVar1 < pCVar7->y;
      if (fVar1 < *(float *)(&DAT_0152bd54 + uVar3 * 0xc)) {
        bVar2 = bVar2 | 2;
      }
      switch(bVar2) {
      case 0:
        iVar4 = _DAT_0152be10 * 0xc;
        if ((CVector3f *)(iVar4 + 0x152be14) != pCVar7) {
          ((CVector3f *)(iVar4 + 0x152be14))->x = pCVar7->x;
          *(float *)(iVar4 + 0x152be18) = pCVar7->y;
          *(float *)(iVar4 + 0x152be1c) = pCVar7->z;
        }
        _DAT_0152be10 = _DAT_0152be10 + 1;
        break;
      case 1:
        core_dcube_cpp_clipEdgeToPlane_FUN_00455460
                  ((CVector3f *)(&DAT_0152bd50 + uVar3 * 0xc),pCVar7,
                   (CVector3f *)(_DAT_0152be10 * 0xc + 0x152be14),0.0,1.0,0.0,(double)-fVar1);
        _DAT_0152be10 = _DAT_0152be10 + 1;
        break;
      case 2:
        iVar4 = _DAT_0152be10 * 0xc;
        if ((CVector3f *)(iVar4 + 0x152be14) != pCVar7) {
          ((CVector3f *)(iVar4 + 0x152be14))->x = pCVar7->x;
          *(float *)(iVar4 + 0x152be18) = pCVar7->y;
          *(float *)(iVar4 + 0x152be1c) = pCVar7->z;
        }
        _DAT_0152be10 = _DAT_0152be10 + 1;
        core_dcube_cpp_clipEdgeToPlane_FUN_00455460
                  (pCVar7,(CVector3f *)(&DAT_0152bd50 + uVar3 * 0xc),
                   (CVector3f *)(_DAT_0152be10 * 0xc + 0x152be14),0.0,1.0,0.0,(double)-fVar1);
        _DAT_0152be10 = _DAT_0152be10 + 1;
      }
      iVar6 = iVar6 + 1;
      pCVar7 = pCVar7 + 1;
    } while (iVar6 < (int)_DAT_0152bd4c);
    if (2 < (int)_DAT_0152be10) {
      fVar1 = aabb_min->y;
      iVar6 = 0;
      if (0 < (int)_DAT_0152be10) {
        pCVar7 = (CVector3f *)0x152be14;
        do {
          uVar3 = iVar6 + 1;
          if (uVar3 == _DAT_0152be10) {
            uVar3 = uVar3 ^ _DAT_0152be10;
          }
          pCVar10 = (CVector3f *)(uVar3 * 0xc + 0x152be14);
          bVar2 = pCVar7->y < fVar1;
          if (*(float *)(uVar3 * 0xc + 0x152be18) < fVar1) {
            bVar2 = bVar2 | 2;
          }
          switch(bVar2) {
          case 0:
            iVar4 = _DAT_0152bed4 * 0xc;
            if ((CVector3f *)(iVar4 + 0x152bed8) != pCVar7) {
              ((CVector3f *)(iVar4 + 0x152bed8))->x = pCVar7->x;
              *(float *)(iVar4 + 0x152bedc) = pCVar7->y;
              *(float *)(iVar4 + 0x152bee0) = pCVar7->z;
            }
            _DAT_0152bed4 = _DAT_0152bed4 + 1;
            break;
          case 1:
            core_dcube_cpp_clipEdgeToPlane_FUN_00455460
                      (pCVar10,pCVar7,(CVector3f *)(_DAT_0152bed4 * 0xc + 0x152bed8),0.0,-1.0,0.0,
                       (double)fVar1);
            _DAT_0152bed4 = _DAT_0152bed4 + 1;
            break;
          case 2:
            iVar4 = _DAT_0152bed4 * 0xc;
            if ((CVector3f *)(iVar4 + 0x152bed8) != pCVar7) {
              ((CVector3f *)(iVar4 + 0x152bed8))->x = pCVar7->x;
              *(float *)(iVar4 + 0x152bedc) = pCVar7->y;
              *(float *)(iVar4 + 0x152bee0) = pCVar7->z;
            }
            _DAT_0152bed4 = _DAT_0152bed4 + 1;
            core_dcube_cpp_clipEdgeToPlane_FUN_00455460
                      (pCVar7,pCVar10,(CVector3f *)(_DAT_0152bed4 * 0xc + 0x152bed8),0.0,-1.0,0.0,
                       (double)fVar1);
            _DAT_0152bed4 = _DAT_0152bed4 + 1;
          }
          iVar6 = iVar6 + 1;
          pCVar7 = pCVar7 + 1;
        } while (iVar6 < (int)_DAT_0152be10);
      }
      if (2 < (int)_DAT_0152bed4) {
        fVar1 = aabb_max->x;
        iVar6 = 0;
        if (0 < (int)_DAT_0152bed4) {
          pCVar7 = (CVector3f *)0x152bed8;
          do {
            uVar3 = iVar6 + 1;
            if (uVar3 == _DAT_0152bed4) {
              uVar3 = uVar3 ^ _DAT_0152bed4;
            }
            pCVar10 = (CVector3f *)(uVar3 * 0xc + 0x152bed8);
            bVar2 = fVar1 < pCVar7->x;
            if (fVar1 < pCVar10->x) {
              bVar2 = bVar2 | 2;
            }
            switch(bVar2) {
            case 0:
              iVar4 = _DAT_0152bf98 * 0xc;
              if ((CVector3f *)(iVar4 + 0x152bf9c) != pCVar7) {
                ((CVector3f *)(iVar4 + 0x152bf9c))->x = pCVar7->x;
                *(float *)(iVar4 + 0x152bfa0) = pCVar7->y;
                *(float *)(iVar4 + 0x152bfa4) = pCVar7->z;
              }
              _DAT_0152bf98 = _DAT_0152bf98 + 1;
              break;
            case 1:
              core_dcube_cpp_clipEdgeToPlane_FUN_00455460
                        (pCVar10,pCVar7,(CVector3f *)(_DAT_0152bf98 * 0xc + 0x152bf9c),1.0,0.0,0.0,
                         (double)-fVar1);
              _DAT_0152bf98 = _DAT_0152bf98 + 1;
              break;
            case 2:
              iVar4 = _DAT_0152bf98 * 0xc;
              if ((CVector3f *)(iVar4 + 0x152bf9c) != pCVar7) {
                ((CVector3f *)(iVar4 + 0x152bf9c))->x = pCVar7->x;
                *(float *)(iVar4 + 0x152bfa0) = pCVar7->y;
                *(float *)(iVar4 + 0x152bfa4) = pCVar7->z;
              }
              _DAT_0152bf98 = _DAT_0152bf98 + 1;
              core_dcube_cpp_clipEdgeToPlane_FUN_00455460
                        (pCVar7,pCVar10,(CVector3f *)(_DAT_0152bf98 * 0xc + 0x152bf9c),1.0,0.0,0.0,
                         (double)-fVar1);
              _DAT_0152bf98 = _DAT_0152bf98 + 1;
            }
            iVar6 = iVar6 + 1;
            pCVar7 = pCVar7 + 1;
          } while (iVar6 < (int)_DAT_0152bed4);
        }
        if (2 < (int)_DAT_0152bf98) {
          fVar1 = aabb_min->x;
          iVar6 = 0;
          if (0 < (int)_DAT_0152bf98) {
            pCVar7 = (CVector3f *)0x152bf9c;
            do {
              uVar3 = iVar6 + 1;
              if (uVar3 == _DAT_0152bf98) {
                uVar3 = uVar3 ^ _DAT_0152bf98;
              }
              pCVar10 = (CVector3f *)(uVar3 * 0xc + 0x152bf9c);
              bVar2 = pCVar7->x < fVar1;
              if (pCVar10->x < fVar1) {
                bVar2 = bVar2 | 2;
              }
              switch(bVar2) {
              case 0:
                iVar4 = _DAT_0152c05c * 0xc;
                if ((CVector3f *)(iVar4 + 0x152c060) != pCVar7) {
                  ((CVector3f *)(iVar4 + 0x152c060))->x = pCVar7->x;
                  *(float *)(iVar4 + 0x152c064) = pCVar7->y;
                  *(float *)(iVar4 + 0x152c068) = pCVar7->z;
                }
                _DAT_0152c05c = _DAT_0152c05c + 1;
                break;
              case 1:
                core_dcube_cpp_clipEdgeToPlane_FUN_00455460
                          (pCVar10,pCVar7,(CVector3f *)(_DAT_0152c05c * 0xc + 0x152c060),-1.0,0.0,
                           0.0,(double)fVar1);
                _DAT_0152c05c = _DAT_0152c05c + 1;
                break;
              case 2:
                iVar4 = _DAT_0152c05c * 0xc;
                if ((CVector3f *)(iVar4 + 0x152c060) != pCVar7) {
                  ((CVector3f *)(iVar4 + 0x152c060))->x = pCVar7->x;
                  *(float *)(iVar4 + 0x152c064) = pCVar7->y;
                  *(float *)(iVar4 + 0x152c068) = pCVar7->z;
                }
                _DAT_0152c05c = _DAT_0152c05c + 1;
                core_dcube_cpp_clipEdgeToPlane_FUN_00455460
                          (pCVar7,pCVar10,(CVector3f *)(_DAT_0152c05c * 0xc + 0x152c060),-1.0,0.0,
                           0.0,(double)fVar1);
                _DAT_0152c05c = _DAT_0152c05c + 1;
              }
              iVar6 = iVar6 + 1;
              pCVar7 = pCVar7 + 1;
            } while (iVar6 < (int)_DAT_0152bf98);
          }
          if (2 < (int)_DAT_0152c05c) {
            fVar1 = aabb_min->z;
            iVar6 = 0;
            if (0 < (int)_DAT_0152c05c) {
              pCVar7 = (CVector3f *)0x152c060;
              do {
                uVar3 = iVar6 + 1;
                if (uVar3 == _DAT_0152c05c) {
                  uVar3 = uVar3 ^ _DAT_0152c05c;
                }
                pCVar10 = (CVector3f *)(uVar3 * 0xc + 0x152c060);
                bVar2 = pCVar7->z < fVar1;
                if (*(float *)(uVar3 * 0xc + 0x152c068) < fVar1) {
                  bVar2 = bVar2 | 2;
                }
                switch(bVar2) {
                case 0:
                  iVar4 = _DAT_0152c120 * 0xc;
                  if ((CVector3f *)(iVar4 + 0x152c124) != pCVar7) {
                    ((CVector3f *)(iVar4 + 0x152c124))->x = pCVar7->x;
                    *(float *)(iVar4 + 0x152c128) = pCVar7->y;
                    *(float *)(iVar4 + 0x152c12c) = pCVar7->z;
                  }
                  _DAT_0152c120 = _DAT_0152c120 + 1;
                  break;
                case 1:
                  core_dcube_cpp_clipEdgeToPlane_FUN_00455460
                            (pCVar10,pCVar7,(CVector3f *)(_DAT_0152c120 * 0xc + 0x152c124),0.0,0.0,
                             -1.0,(double)fVar1);
                  _DAT_0152c120 = _DAT_0152c120 + 1;
                  break;
                case 2:
                  iVar4 = _DAT_0152c120 * 0xc;
                  if ((CVector3f *)(iVar4 + 0x152c124) != pCVar7) {
                    ((CVector3f *)(iVar4 + 0x152c124))->x = pCVar7->x;
                    *(float *)(iVar4 + 0x152c128) = pCVar7->y;
                    *(float *)(iVar4 + 0x152c12c) = pCVar7->z;
                  }
                  _DAT_0152c120 = _DAT_0152c120 + 1;
                  core_dcube_cpp_clipEdgeToPlane_FUN_00455460
                            (pCVar7,pCVar10,(CVector3f *)(_DAT_0152c120 * 0xc + 0x152c124),0.0,0.0,
                             -1.0,(double)fVar1);
                  _DAT_0152c120 = _DAT_0152c120 + 1;
                }
                iVar6 = iVar6 + 1;
                pCVar7 = pCVar7 + 1;
              } while (iVar6 < (int)_DAT_0152c05c);
            }
            if (2 < (int)_DAT_0152c120) {
              fVar1 = aabb_max->z;
              iVar6 = 0;
              if (0 < (int)_DAT_0152c120) {
                pCVar7 = (CVector3f *)0x152c124;
                do {
                  uVar3 = iVar6 + 1;
                  if (uVar3 == _DAT_0152c120) {
                    uVar3 = uVar3 ^ _DAT_0152c120;
                  }
                  pCVar10 = (CVector3f *)(uVar3 * 0xc + 0x152c124);
                  bVar2 = fVar1 < pCVar7->z;
                  if (fVar1 < *(float *)(uVar3 * 0xc + 0x152c12c)) {
                    bVar2 = bVar2 | 2;
                  }
                  switch(bVar2) {
                  case 0:
                    iVar4 = _DAT_0152c1e4 * 0xc;
                    if ((CVector3f *)(&DAT_0152c1e8 + iVar4) != pCVar7) {
                      ((CVector3f *)(&DAT_0152c1e8 + iVar4))->x = pCVar7->x;
                      *(float *)(&DAT_0152c1ec + iVar4) = pCVar7->y;
                      *(float *)(&DAT_0152c1f0 + iVar4) = pCVar7->z;
                    }
                    _DAT_0152c1e4 = _DAT_0152c1e4 + 1;
                    break;
                  case 1:
                    core_dcube_cpp_clipEdgeToPlane_FUN_00455460
                              (pCVar10,pCVar7,(CVector3f *)(&DAT_0152c1e8 + _DAT_0152c1e4 * 0xc),0.0
                               ,0.0,-1.0,(double)fVar1);
                    _DAT_0152c1e4 = _DAT_0152c1e4 + 1;
                    break;
                  case 2:
                    iVar4 = _DAT_0152c1e4 * 0xc;
                    if ((CVector3f *)(&DAT_0152c1e8 + iVar4) != pCVar7) {
                      ((CVector3f *)(&DAT_0152c1e8 + iVar4))->x = pCVar7->x;
                      *(float *)(&DAT_0152c1ec + iVar4) = pCVar7->y;
                      *(float *)(&DAT_0152c1f0 + iVar4) = pCVar7->z;
                    }
                    _DAT_0152c1e4 = _DAT_0152c1e4 + 1;
                    core_dcube_cpp_clipEdgeToPlane_FUN_00455460
                              (pCVar7,pCVar10,(CVector3f *)(&DAT_0152c1e8 + _DAT_0152c1e4 * 0xc),0.0
                               ,0.0,-1.0,(double)fVar1);
                    _DAT_0152c1e4 = _DAT_0152c1e4 + 1;
                  }
                  iVar6 = iVar6 + 1;
                  pCVar7 = pCVar7 + 1;
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
