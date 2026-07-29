// Name: core_dtri.cpp_clipTriangleToBounds_FUN_0046df40
// Address: 0046df40
// Address Range: [[0046df40, 0046e94d]]
// Convention: __cdecl
// Signature: int __cdecl core_dtri_cpp_clipTriangleToBounds_FUN_0046df40(CVector3f *triangle_vertices,CVector3f *bounds_min,CVector3f *bounds_max)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_dtri_cpp_clipTriangleToBounds_FUN_0046df40(CVector3f *triangle_vertices,CVector3f *bounds_min,CVector3f *bounds_max)

{
  float fVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  float *pfVar6;
  int iVar7;
  CVector3f *pCVar8;
  byte bVar9;
  CVector3f *pCVar10;
  
  _DAT_01bc996c = 3;
  if (triangle_vertices != (CVector3f *)&DAT_01bc9970) {
    _DAT_01bc9970 = triangle_vertices->x;
    _DAT_01bc9978 = triangle_vertices->z;
    _DAT_01bc9974 = triangle_vertices->y;
  }
  if (triangle_vertices + 1 != (CVector3f *)&DAT_01bc997c) {
    _DAT_01bc997c = triangle_vertices[1].x;
    _DAT_01bc9984 = triangle_vertices[1].z;
    _DAT_01bc9980 = triangle_vertices[1].y;
  }
  if (triangle_vertices + 2 != (CVector3f *)&DAT_01bc9988) {
    _DAT_01bc9988 = triangle_vertices[2].x;
    _DAT_01bc9990 = triangle_vertices[2].z;
    _DAT_01bc998c = triangle_vertices[2].y;
  }
  bVar9 = 0;
  iVar7 = 0;
  bVar2 = 0xff;
  pfVar6 = (float *)&DAT_01bc9970;
  do {
    bVar5 = bounds_max->x < *pfVar6;
    if (bounds_max->y < pfVar6[1]) {
      bVar5 = bVar5 | 2;
    }
    if (bounds_max->z < pfVar6[2]) {
      bVar5 = bVar5 | 4;
    }
    if (*pfVar6 < bounds_min->x) {
      bVar5 = bVar5 | 8;
    }
    if (pfVar6[1] < bounds_min->y) {
      bVar5 = bVar5 | 0x10;
    }
    if (pfVar6[2] < bounds_min->z) {
      bVar5 = bVar5 | 0x20;
    }
    pfVar6 = pfVar6 + 3;
    iVar7 = iVar7 + 1;
    bVar2 = bVar2 & bVar5;
    bVar9 = bVar9 | bVar5;
  } while (iVar7 < 3);
  if (bVar9 == 0) {
    _DAT_01bc9e04 = 3;
    if (triangle_vertices != (CVector3f *)&DAT_01bc9e08) {
      _DAT_01bc9e08 = triangle_vertices->x;
      _DAT_01bc9e10 = triangle_vertices->z;
      _DAT_01bc9e0c = triangle_vertices->y;
    }
    if (triangle_vertices + 1 != (CVector3f *)&DAT_01bc9e14) {
      _DAT_01bc9e14 = triangle_vertices[1].x;
      _DAT_01bc9e1c = triangle_vertices[1].z;
      _DAT_01bc9e18 = triangle_vertices[1].y;
    }
    if (triangle_vertices + 2 != (CVector3f *)&DAT_01bc9e20) {
      _DAT_01bc9e20 = triangle_vertices[2].x;
      _DAT_01bc9e28 = triangle_vertices[2].z;
      _DAT_01bc9e24 = triangle_vertices[2].y;
    }
    return 1;
  }
  if (bVar2 == 0) {
    fVar1 = bounds_max->y;
    iVar7 = 0;
    pCVar8 = (CVector3f *)&DAT_01bc9970;
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
      bVar2 = fVar1 < pCVar8->y;
      if (fVar1 < *(float *)(&DAT_01bc9974 + uVar3 * 0xc)) {
        bVar2 = bVar2 | 2;
      }
      switch(bVar2) {
      case 0:
        iVar4 = _DAT_01bc9a30 * 0xc;
        if ((CVector3f *)(&DAT_01bc9a34 + iVar4) != pCVar8) {
          ((CVector3f *)(&DAT_01bc9a34 + iVar4))->x = pCVar8->x;
          *(float *)(&DAT_01bc9a38 + iVar4) = pCVar8->y;
          *(float *)(&DAT_01bc9a3c + iVar4) = pCVar8->z;
        }
        _DAT_01bc9a30 = _DAT_01bc9a30 + 1;
        break;
      case 1:
        core_dtri_cpp_clipLineToPlane_FUN_0046d4e0
                  ((CVector3f *)(&DAT_01bc9970 + uVar3 * 0xc),pCVar8,
                   (CVector3f *)(&DAT_01bc9a34 + _DAT_01bc9a30 * 0xc),0.0,1.0,0.0,(double)-fVar1);
        _DAT_01bc9a30 = _DAT_01bc9a30 + 1;
        break;
      case 2:
        iVar4 = _DAT_01bc9a30 * 0xc;
        if ((CVector3f *)(&DAT_01bc9a34 + iVar4) != pCVar8) {
          ((CVector3f *)(&DAT_01bc9a34 + iVar4))->x = pCVar8->x;
          *(float *)(&DAT_01bc9a38 + iVar4) = pCVar8->y;
          *(float *)(&DAT_01bc9a3c + iVar4) = pCVar8->z;
        }
        _DAT_01bc9a30 = _DAT_01bc9a30 + 1;
        core_dtri_cpp_clipLineToPlane_FUN_0046d4e0
                  (pCVar8,(CVector3f *)(&DAT_01bc9970 + uVar3 * 0xc),
                   (CVector3f *)(&DAT_01bc9a34 + _DAT_01bc9a30 * 0xc),0.0,1.0,0.0,(double)-fVar1);
        _DAT_01bc9a30 = _DAT_01bc9a30 + 1;
      }
      iVar7 = iVar7 + 1;
      pCVar8 = pCVar8 + 1;
    } while (iVar7 < (int)_DAT_01bc996c);
    if (2 < (int)_DAT_01bc9a30) {
      fVar1 = bounds_min->y;
      iVar7 = 0;
      if (0 < (int)_DAT_01bc9a30) {
        pCVar8 = (CVector3f *)&DAT_01bc9a34;
        do {
          uVar3 = iVar7 + 1;
          if (uVar3 == _DAT_01bc9a30) {
            uVar3 = uVar3 ^ _DAT_01bc9a30;
          }
          bVar2 = pCVar8->y < fVar1;
          if (*(float *)(&DAT_01bc9a38 + uVar3 * 0xc) < fVar1) {
            bVar2 = bVar2 | 2;
          }
          switch(bVar2) {
          case 0:
            iVar4 = _DAT_01bc9af4 * 0xc;
            if ((CVector3f *)(&DAT_01bc9af8 + iVar4) != pCVar8) {
              ((CVector3f *)(&DAT_01bc9af8 + iVar4))->x = pCVar8->x;
              *(float *)(&DAT_01bc9afc + iVar4) = pCVar8->y;
              *(float *)(&DAT_01bc9b00 + iVar4) = pCVar8->z;
            }
            _DAT_01bc9af4 = _DAT_01bc9af4 + 1;
            break;
          case 1:
            core_dtri_cpp_clipLineToPlane_FUN_0046d4e0
                      ((CVector3f *)(&DAT_01bc9a34 + uVar3 * 0xc),pCVar8,
                       (CVector3f *)(&DAT_01bc9af8 + _DAT_01bc9af4 * 0xc),0.0,-1.0,0.0,(double)fVar1
                      );
            _DAT_01bc9af4 = _DAT_01bc9af4 + 1;
            break;
          case 2:
            iVar4 = _DAT_01bc9af4 * 0xc;
            if ((CVector3f *)(&DAT_01bc9af8 + iVar4) != pCVar8) {
              ((CVector3f *)(&DAT_01bc9af8 + iVar4))->x = pCVar8->x;
              *(float *)(&DAT_01bc9afc + iVar4) = pCVar8->y;
              *(float *)(&DAT_01bc9b00 + iVar4) = pCVar8->z;
            }
            _DAT_01bc9af4 = _DAT_01bc9af4 + 1;
            core_dtri_cpp_clipLineToPlane_FUN_0046d4e0
                      (pCVar8,(CVector3f *)(&DAT_01bc9a34 + uVar3 * 0xc),
                       (CVector3f *)(&DAT_01bc9af8 + _DAT_01bc9af4 * 0xc),0.0,-1.0,0.0,(double)fVar1
                      );
            _DAT_01bc9af4 = _DAT_01bc9af4 + 1;
          }
          iVar7 = iVar7 + 1;
          pCVar8 = pCVar8 + 1;
        } while (iVar7 < (int)_DAT_01bc9a30);
      }
      if (2 < (int)_DAT_01bc9af4) {
        fVar1 = bounds_max->x;
        iVar7 = 0;
        if (0 < (int)_DAT_01bc9af4) {
          pCVar8 = (CVector3f *)&DAT_01bc9af8;
          do {
            uVar3 = iVar7 + 1;
            if (uVar3 == _DAT_01bc9af4) {
              uVar3 = uVar3 ^ _DAT_01bc9af4;
            }
            pCVar10 = (CVector3f *)(&DAT_01bc9af8 + uVar3 * 0xc);
            bVar2 = fVar1 < pCVar8->x;
            if (fVar1 < pCVar10->x) {
              bVar2 = bVar2 | 2;
            }
            switch(bVar2) {
            case 0:
              iVar4 = _DAT_01bc9bb8 * 0xc;
              if ((CVector3f *)(&DAT_01bc9bbc + iVar4) != pCVar8) {
                ((CVector3f *)(&DAT_01bc9bbc + iVar4))->x = pCVar8->x;
                *(float *)(&DAT_01bc9bc0 + iVar4) = pCVar8->y;
                *(float *)(&DAT_01bc9bc4 + iVar4) = pCVar8->z;
              }
              _DAT_01bc9bb8 = _DAT_01bc9bb8 + 1;
              break;
            case 1:
              core_dtri_cpp_clipLineToPlane_FUN_0046d4e0
                        (pCVar10,pCVar8,(CVector3f *)(&DAT_01bc9bbc + _DAT_01bc9bb8 * 0xc),1.0,0.0,
                         0.0,(double)-fVar1);
              _DAT_01bc9bb8 = _DAT_01bc9bb8 + 1;
              break;
            case 2:
              iVar4 = _DAT_01bc9bb8 * 0xc;
              if ((CVector3f *)(&DAT_01bc9bbc + iVar4) != pCVar8) {
                ((CVector3f *)(&DAT_01bc9bbc + iVar4))->x = pCVar8->x;
                *(float *)(&DAT_01bc9bc0 + iVar4) = pCVar8->y;
                *(float *)(&DAT_01bc9bc4 + iVar4) = pCVar8->z;
              }
              _DAT_01bc9bb8 = _DAT_01bc9bb8 + 1;
              core_dtri_cpp_clipLineToPlane_FUN_0046d4e0
                        (pCVar8,pCVar10,(CVector3f *)(&DAT_01bc9bbc + _DAT_01bc9bb8 * 0xc),1.0,0.0,
                         0.0,(double)-fVar1);
              _DAT_01bc9bb8 = _DAT_01bc9bb8 + 1;
            }
            iVar7 = iVar7 + 1;
            pCVar8 = pCVar8 + 1;
          } while (iVar7 < (int)_DAT_01bc9af4);
        }
        if (2 < (int)_DAT_01bc9bb8) {
          fVar1 = bounds_min->x;
          iVar7 = 0;
          if (0 < (int)_DAT_01bc9bb8) {
            pCVar8 = (CVector3f *)&DAT_01bc9bbc;
            do {
              uVar3 = iVar7 + 1;
              if (uVar3 == _DAT_01bc9bb8) {
                uVar3 = uVar3 ^ _DAT_01bc9bb8;
              }
              pCVar10 = (CVector3f *)(&DAT_01bc9bbc + uVar3 * 0xc);
              bVar2 = pCVar8->x < fVar1;
              if (pCVar10->x < fVar1) {
                bVar2 = bVar2 | 2;
              }
              switch(bVar2) {
              case 0:
                iVar4 = _DAT_01bc9c7c * 0xc;
                if ((CVector3f *)(&DAT_01bc9c80 + iVar4) != pCVar8) {
                  ((CVector3f *)(&DAT_01bc9c80 + iVar4))->x = pCVar8->x;
                  *(float *)(&DAT_01bc9c84 + iVar4) = pCVar8->y;
                  *(float *)(&DAT_01bc9c88 + iVar4) = pCVar8->z;
                }
                _DAT_01bc9c7c = _DAT_01bc9c7c + 1;
                break;
              case 1:
                core_dtri_cpp_clipLineToPlane_FUN_0046d4e0
                          (pCVar10,pCVar8,(CVector3f *)(&DAT_01bc9c80 + _DAT_01bc9c7c * 0xc),-1.0,
                           0.0,0.0,(double)fVar1);
                _DAT_01bc9c7c = _DAT_01bc9c7c + 1;
                break;
              case 2:
                iVar4 = _DAT_01bc9c7c * 0xc;
                if ((CVector3f *)(&DAT_01bc9c80 + iVar4) != pCVar8) {
                  ((CVector3f *)(&DAT_01bc9c80 + iVar4))->x = pCVar8->x;
                  *(float *)(&DAT_01bc9c84 + iVar4) = pCVar8->y;
                  *(float *)(&DAT_01bc9c88 + iVar4) = pCVar8->z;
                }
                _DAT_01bc9c7c = _DAT_01bc9c7c + 1;
                core_dtri_cpp_clipLineToPlane_FUN_0046d4e0
                          (pCVar8,pCVar10,(CVector3f *)(&DAT_01bc9c80 + _DAT_01bc9c7c * 0xc),-1.0,
                           0.0,0.0,(double)fVar1);
                _DAT_01bc9c7c = _DAT_01bc9c7c + 1;
              }
              iVar7 = iVar7 + 1;
              pCVar8 = pCVar8 + 1;
            } while (iVar7 < (int)_DAT_01bc9bb8);
          }
          if (2 < (int)_DAT_01bc9c7c) {
            fVar1 = bounds_min->z;
            iVar7 = 0;
            if (0 < (int)_DAT_01bc9c7c) {
              pCVar8 = (CVector3f *)&DAT_01bc9c80;
              do {
                uVar3 = iVar7 + 1;
                if (uVar3 == _DAT_01bc9c7c) {
                  uVar3 = uVar3 ^ _DAT_01bc9c7c;
                }
                bVar2 = pCVar8->z < fVar1;
                if (*(float *)(&DAT_01bc9c88 + uVar3 * 0xc) < fVar1) {
                  bVar2 = bVar2 | 2;
                }
                switch(bVar2) {
                case 0:
                  iVar4 = _DAT_01bc9d40 * 0xc;
                  if ((CVector3f *)(&DAT_01bc9d44 + iVar4) != pCVar8) {
                    ((CVector3f *)(&DAT_01bc9d44 + iVar4))->x = pCVar8->x;
                    *(float *)(&DAT_01bc9d48 + iVar4) = pCVar8->y;
                    *(float *)(&DAT_01bc9d4c + iVar4) = pCVar8->z;
                  }
                  _DAT_01bc9d40 = _DAT_01bc9d40 + 1;
                  break;
                case 1:
                  core_dtri_cpp_clipLineToPlane_FUN_0046d4e0
                            ((CVector3f *)(&DAT_01bc9c80 + uVar3 * 0xc),pCVar8,
                             (CVector3f *)(&DAT_01bc9d44 + _DAT_01bc9d40 * 0xc),0.0,0.0,-1.0,
                             (double)fVar1);
                  _DAT_01bc9d40 = _DAT_01bc9d40 + 1;
                  break;
                case 2:
                  iVar4 = _DAT_01bc9d40 * 0xc;
                  if ((CVector3f *)(&DAT_01bc9d44 + iVar4) != pCVar8) {
                    ((CVector3f *)(&DAT_01bc9d44 + iVar4))->x = pCVar8->x;
                    *(float *)(&DAT_01bc9d48 + iVar4) = pCVar8->y;
                    *(float *)(&DAT_01bc9d4c + iVar4) = pCVar8->z;
                  }
                  _DAT_01bc9d40 = _DAT_01bc9d40 + 1;
                  core_dtri_cpp_clipLineToPlane_FUN_0046d4e0
                            (pCVar8,(CVector3f *)(&DAT_01bc9c80 + uVar3 * 0xc),
                             (CVector3f *)(&DAT_01bc9d44 + _DAT_01bc9d40 * 0xc),0.0,0.0,-1.0,
                             (double)fVar1);
                  _DAT_01bc9d40 = _DAT_01bc9d40 + 1;
                }
                iVar7 = iVar7 + 1;
                pCVar8 = pCVar8 + 1;
              } while (iVar7 < (int)_DAT_01bc9c7c);
            }
            if (2 < (int)_DAT_01bc9d40) {
              fVar1 = bounds_max->z;
              iVar7 = 0;
              if (0 < (int)_DAT_01bc9d40) {
                pCVar8 = (CVector3f *)&DAT_01bc9d44;
                do {
                  uVar3 = iVar7 + 1;
                  if (uVar3 == _DAT_01bc9d40) {
                    uVar3 = uVar3 ^ _DAT_01bc9d40;
                  }
                  bVar2 = fVar1 < pCVar8->z;
                  if (fVar1 < *(float *)(&DAT_01bc9d4c + uVar3 * 0xc)) {
                    bVar2 = bVar2 | 2;
                  }
                  switch(bVar2) {
                  case 0:
                    iVar4 = _DAT_01bc9e04 * 0xc;
                    if ((CVector3f *)(&DAT_01bc9e08 + iVar4) != pCVar8) {
                      ((CVector3f *)(&DAT_01bc9e08 + iVar4))->x = pCVar8->x;
                      *(float *)(&DAT_01bc9e0c + iVar4) = pCVar8->y;
                      *(float *)(&DAT_01bc9e10 + iVar4) = pCVar8->z;
                    }
                    _DAT_01bc9e04 = _DAT_01bc9e04 + 1;
                    break;
                  case 1:
                    core_dtri_cpp_clipLineToPlane_FUN_0046d4e0
                              ((CVector3f *)(&DAT_01bc9d44 + uVar3 * 0xc),pCVar8,
                               (CVector3f *)(&DAT_01bc9e08 + _DAT_01bc9e04 * 0xc),0.0,0.0,-1.0,
                               (double)fVar1);
                    _DAT_01bc9e04 = _DAT_01bc9e04 + 1;
                    break;
                  case 2:
                    iVar4 = _DAT_01bc9e04 * 0xc;
                    if ((CVector3f *)(&DAT_01bc9e08 + iVar4) != pCVar8) {
                      ((CVector3f *)(&DAT_01bc9e08 + iVar4))->x = pCVar8->x;
                      *(float *)(&DAT_01bc9e0c + iVar4) = pCVar8->y;
                      *(float *)(&DAT_01bc9e10 + iVar4) = pCVar8->z;
                    }
                    _DAT_01bc9e04 = _DAT_01bc9e04 + 1;
                    core_dtri_cpp_clipLineToPlane_FUN_0046d4e0
                              (pCVar8,(CVector3f *)(&DAT_01bc9d44 + uVar3 * 0xc),
                               (CVector3f *)(&DAT_01bc9e08 + _DAT_01bc9e04 * 0xc),0.0,0.0,-1.0,
                               (double)fVar1);
                    _DAT_01bc9e04 = _DAT_01bc9e04 + 1;
                  }
                  iVar7 = iVar7 + 1;
                  pCVar8 = pCVar8 + 1;
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
