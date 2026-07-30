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
  uint uVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  byte bVar6;
  CVector3f *pCVar7;
  int iVar8;
  byte bVar9;
  CVector3f *pCVar10;
  
  _DAT_01bc996c = 3;
  if (triangle_vertices != CVector3f_ARRAY_01bc9970) {
    CVector3f_ARRAY_01bc9970[0].x = triangle_vertices->x;
    CVector3f_ARRAY_01bc9970[0].z = triangle_vertices->z;
    CVector3f_ARRAY_01bc9970[0].y = triangle_vertices->y;
  }
  if (triangle_vertices + 1 != CVector3f_ARRAY_01bc9970 + 1) {
    CVector3f_ARRAY_01bc9970[1].x = triangle_vertices[1].x;
    CVector3f_ARRAY_01bc9970[1].z = triangle_vertices[1].z;
    CVector3f_ARRAY_01bc9970[1].y = triangle_vertices[1].y;
  }
  if (triangle_vertices + 2 != CVector3f_ARRAY_01bc9970 + 2) {
    CVector3f_ARRAY_01bc9970[2].x = triangle_vertices[2].x;
    CVector3f_ARRAY_01bc9970[2].z = triangle_vertices[2].z;
    CVector3f_ARRAY_01bc9970[2].y = triangle_vertices[2].y;
  }
  bVar9 = 0;
  iVar8 = 0;
  bVar4 = 0xff;
  pCVar7 = CVector3f_ARRAY_01bc9970;
  do {
    bVar6 = bounds_max->x < pCVar7->x;
    if (bounds_max->y < pCVar7->y) {
      bVar6 = bVar6 | 2;
    }
    if (bounds_max->z < pCVar7->z) {
      bVar6 = bVar6 | 4;
    }
    if (pCVar7->x < bounds_min->x) {
      bVar6 = bVar6 | 8;
    }
    if (pCVar7->y < bounds_min->y) {
      bVar6 = bVar6 | 0x10;
    }
    if (pCVar7->z < bounds_min->z) {
      bVar6 = bVar6 | 0x20;
    }
    pCVar7 = pCVar7 + 1;
    iVar8 = iVar8 + 1;
    bVar4 = bVar4 & bVar6;
    bVar9 = bVar9 | bVar6;
  } while (iVar8 < 3);
  if (bVar9 == 0) {
    _DAT_01bc9e04 = 3;
    if (triangle_vertices != CVector3f_ARRAY_01bc9e08) {
      CVector3f_ARRAY_01bc9e08[0].x = triangle_vertices->x;
      CVector3f_ARRAY_01bc9e08[0].z = triangle_vertices->z;
      CVector3f_ARRAY_01bc9e08[0].y = triangle_vertices->y;
    }
    if (triangle_vertices + 1 != CVector3f_ARRAY_01bc9e08 + 1) {
      CVector3f_ARRAY_01bc9e08[1].x = triangle_vertices[1].x;
      CVector3f_ARRAY_01bc9e08[1].z = triangle_vertices[1].z;
      CVector3f_ARRAY_01bc9e08[1].y = triangle_vertices[1].y;
    }
    if (triangle_vertices + 2 != CVector3f_ARRAY_01bc9e08 + 2) {
      CVector3f_ARRAY_01bc9e08[2].x = triangle_vertices[2].x;
      CVector3f_ARRAY_01bc9e08[2].z = triangle_vertices[2].z;
      CVector3f_ARRAY_01bc9e08[2].y = triangle_vertices[2].y;
    }
    return 1;
  }
  if (bVar4 == 0) {
    fVar1 = bounds_max->y;
    iVar8 = 0;
    pCVar7 = CVector3f_ARRAY_01bc9970;
    _DAT_01bc9a30 = 0;
    _DAT_01bc9af4 = 0;
    _DAT_01bc9bb8 = 0;
    _DAT_01bc9c7c = 0;
    _DAT_01bc9d40 = 0;
    _DAT_01bc9e04 = 0;
    do {
      uVar2 = _DAT_01bc9a30;
      uVar5 = iVar8 + 1;
      if (uVar5 == _DAT_01bc996c) {
        uVar5 = uVar5 ^ _DAT_01bc996c;
      }
      bVar4 = fVar1 < pCVar7->y;
      if (fVar1 < CVector3f_ARRAY_01bc9970[uVar5].y) {
        bVar4 = bVar4 | 2;
      }
      switch(bVar4) {
      case 0:
        if (CVector3f_ARRAY_01bc9a34 + _DAT_01bc9a30 != pCVar7) {
          CVector3f_ARRAY_01bc9a34[_DAT_01bc9a30].x = pCVar7->x;
          CVector3f_ARRAY_01bc9a34[uVar2].y = pCVar7->y;
          CVector3f_ARRAY_01bc9a34[uVar2].z = pCVar7->z;
        }
        _DAT_01bc9a30 = _DAT_01bc9a30 + 1;
        break;
      case 1:
        core_dtri_cpp_clipLineToPlane_FUN_0046d4e0
                  (CVector3f_ARRAY_01bc9970 + uVar5,pCVar7,CVector3f_ARRAY_01bc9a34 + _DAT_01bc9a30,
                   0.0,1.0,0.0,(double)-fVar1);
        _DAT_01bc9a30 = _DAT_01bc9a30 + 1;
        break;
      case 2:
        if (CVector3f_ARRAY_01bc9a34 + _DAT_01bc9a30 != pCVar7) {
          CVector3f_ARRAY_01bc9a34[_DAT_01bc9a30].x = pCVar7->x;
          CVector3f_ARRAY_01bc9a34[uVar2].y = pCVar7->y;
          CVector3f_ARRAY_01bc9a34[uVar2].z = pCVar7->z;
        }
        _DAT_01bc9a30 = _DAT_01bc9a30 + 1;
        core_dtri_cpp_clipLineToPlane_FUN_0046d4e0
                  (pCVar7,CVector3f_ARRAY_01bc9970 + uVar5,CVector3f_ARRAY_01bc9a34 + _DAT_01bc9a30,
                   0.0,1.0,0.0,(double)-fVar1);
        _DAT_01bc9a30 = _DAT_01bc9a30 + 1;
      }
      iVar8 = iVar8 + 1;
      pCVar7 = pCVar7 + 1;
    } while (iVar8 < (int)_DAT_01bc996c);
    if (2 < (int)_DAT_01bc9a30) {
      fVar1 = bounds_min->y;
      iVar8 = 0;
      if (0 < (int)_DAT_01bc9a30) {
        pCVar7 = CVector3f_ARRAY_01bc9a34;
        do {
          uVar2 = _DAT_01bc9af4;
          uVar5 = iVar8 + 1;
          if (uVar5 == _DAT_01bc9a30) {
            uVar5 = uVar5 ^ _DAT_01bc9a30;
          }
          bVar4 = pCVar7->y < fVar1;
          if (CVector3f_ARRAY_01bc9a34[uVar5].y < fVar1) {
            bVar4 = bVar4 | 2;
          }
          switch(bVar4) {
          case 0:
            if (CVector3f_ARRAY_01bc9af8 + _DAT_01bc9af4 != pCVar7) {
              CVector3f_ARRAY_01bc9af8[_DAT_01bc9af4].x = pCVar7->x;
              CVector3f_ARRAY_01bc9af8[uVar2].y = pCVar7->y;
              CVector3f_ARRAY_01bc9af8[uVar2].z = pCVar7->z;
            }
            _DAT_01bc9af4 = _DAT_01bc9af4 + 1;
            break;
          case 1:
            core_dtri_cpp_clipLineToPlane_FUN_0046d4e0
                      (CVector3f_ARRAY_01bc9a34 + uVar5,pCVar7,
                       CVector3f_ARRAY_01bc9af8 + _DAT_01bc9af4,0.0,-1.0,0.0,(double)fVar1);
            _DAT_01bc9af4 = _DAT_01bc9af4 + 1;
            break;
          case 2:
            if (CVector3f_ARRAY_01bc9af8 + _DAT_01bc9af4 != pCVar7) {
              CVector3f_ARRAY_01bc9af8[_DAT_01bc9af4].x = pCVar7->x;
              CVector3f_ARRAY_01bc9af8[uVar2].y = pCVar7->y;
              CVector3f_ARRAY_01bc9af8[uVar2].z = pCVar7->z;
            }
            _DAT_01bc9af4 = _DAT_01bc9af4 + 1;
            core_dtri_cpp_clipLineToPlane_FUN_0046d4e0
                      (pCVar7,CVector3f_ARRAY_01bc9a34 + uVar5,
                       CVector3f_ARRAY_01bc9af8 + _DAT_01bc9af4,0.0,-1.0,0.0,(double)fVar1);
            _DAT_01bc9af4 = _DAT_01bc9af4 + 1;
          }
          iVar8 = iVar8 + 1;
          pCVar7 = pCVar7 + 1;
        } while (iVar8 < (int)_DAT_01bc9a30);
      }
      if (2 < (int)_DAT_01bc9af4) {
        fVar1 = bounds_max->x;
        iVar8 = 0;
        if (0 < (int)_DAT_01bc9af4) {
          pCVar7 = CVector3f_ARRAY_01bc9af8;
          do {
            uVar2 = _DAT_01bc9bb8;
            uVar5 = iVar8 + 1;
            if (uVar5 == _DAT_01bc9af4) {
              uVar5 = uVar5 ^ _DAT_01bc9af4;
            }
            pCVar10 = CVector3f_ARRAY_01bc9af8 + uVar5;
            bVar4 = fVar1 < pCVar7->x;
            if (fVar1 < pCVar10->x) {
              bVar4 = bVar4 | 2;
            }
            switch(bVar4) {
            case 0:
              if (CVector3f_ARRAY_01bc9bbc + _DAT_01bc9bb8 != pCVar7) {
                CVector3f_ARRAY_01bc9bbc[_DAT_01bc9bb8].x = pCVar7->x;
                CVector3f_ARRAY_01bc9bbc[uVar2].y = pCVar7->y;
                CVector3f_ARRAY_01bc9bbc[uVar2].z = pCVar7->z;
              }
              _DAT_01bc9bb8 = _DAT_01bc9bb8 + 1;
              break;
            case 1:
              core_dtri_cpp_clipLineToPlane_FUN_0046d4e0
                        (pCVar10,pCVar7,CVector3f_ARRAY_01bc9bbc + _DAT_01bc9bb8,1.0,0.0,0.0,
                         (double)-fVar1);
              _DAT_01bc9bb8 = _DAT_01bc9bb8 + 1;
              break;
            case 2:
              if (CVector3f_ARRAY_01bc9bbc + _DAT_01bc9bb8 != pCVar7) {
                CVector3f_ARRAY_01bc9bbc[_DAT_01bc9bb8].x = pCVar7->x;
                CVector3f_ARRAY_01bc9bbc[uVar2].y = pCVar7->y;
                CVector3f_ARRAY_01bc9bbc[uVar2].z = pCVar7->z;
              }
              _DAT_01bc9bb8 = _DAT_01bc9bb8 + 1;
              core_dtri_cpp_clipLineToPlane_FUN_0046d4e0
                        (pCVar7,pCVar10,CVector3f_ARRAY_01bc9bbc + _DAT_01bc9bb8,1.0,0.0,0.0,
                         (double)-fVar1);
              _DAT_01bc9bb8 = _DAT_01bc9bb8 + 1;
            }
            iVar8 = iVar8 + 1;
            pCVar7 = pCVar7 + 1;
          } while (iVar8 < (int)_DAT_01bc9af4);
        }
        if (2 < (int)_DAT_01bc9bb8) {
          fVar1 = bounds_min->x;
          iVar8 = 0;
          if (0 < (int)_DAT_01bc9bb8) {
            pCVar7 = CVector3f_ARRAY_01bc9bbc;
            do {
              uVar2 = _DAT_01bc9c7c;
              uVar5 = iVar8 + 1;
              if (uVar5 == _DAT_01bc9bb8) {
                uVar5 = uVar5 ^ _DAT_01bc9bb8;
              }
              pCVar10 = CVector3f_ARRAY_01bc9bbc + uVar5;
              bVar4 = pCVar7->x < fVar1;
              if (pCVar10->x < fVar1) {
                bVar4 = bVar4 | 2;
              }
              switch(bVar4) {
              case 0:
                if (CVector3f_ARRAY_01bc9c80 + _DAT_01bc9c7c != pCVar7) {
                  CVector3f_ARRAY_01bc9c80[_DAT_01bc9c7c].x = pCVar7->x;
                  CVector3f_ARRAY_01bc9c80[uVar2].y = pCVar7->y;
                  CVector3f_ARRAY_01bc9c80[uVar2].z = pCVar7->z;
                }
                _DAT_01bc9c7c = _DAT_01bc9c7c + 1;
                break;
              case 1:
                core_dtri_cpp_clipLineToPlane_FUN_0046d4e0
                          (pCVar10,pCVar7,CVector3f_ARRAY_01bc9c80 + _DAT_01bc9c7c,-1.0,0.0,0.0,
                           (double)fVar1);
                _DAT_01bc9c7c = _DAT_01bc9c7c + 1;
                break;
              case 2:
                if (CVector3f_ARRAY_01bc9c80 + _DAT_01bc9c7c != pCVar7) {
                  CVector3f_ARRAY_01bc9c80[_DAT_01bc9c7c].x = pCVar7->x;
                  CVector3f_ARRAY_01bc9c80[uVar2].y = pCVar7->y;
                  CVector3f_ARRAY_01bc9c80[uVar2].z = pCVar7->z;
                }
                _DAT_01bc9c7c = _DAT_01bc9c7c + 1;
                core_dtri_cpp_clipLineToPlane_FUN_0046d4e0
                          (pCVar7,pCVar10,CVector3f_ARRAY_01bc9c80 + _DAT_01bc9c7c,-1.0,0.0,0.0,
                           (double)fVar1);
                _DAT_01bc9c7c = _DAT_01bc9c7c + 1;
              }
              iVar8 = iVar8 + 1;
              pCVar7 = pCVar7 + 1;
            } while (iVar8 < (int)_DAT_01bc9bb8);
          }
          if (2 < (int)_DAT_01bc9c7c) {
            fVar1 = bounds_min->z;
            iVar8 = 0;
            if (0 < (int)_DAT_01bc9c7c) {
              pCVar7 = CVector3f_ARRAY_01bc9c80;
              do {
                uVar2 = _DAT_01bc9d40;
                uVar5 = iVar8 + 1;
                if (uVar5 == _DAT_01bc9c7c) {
                  uVar5 = uVar5 ^ _DAT_01bc9c7c;
                }
                bVar4 = pCVar7->z < fVar1;
                if (CVector3f_ARRAY_01bc9c80[uVar5].z < fVar1) {
                  bVar4 = bVar4 | 2;
                }
                switch(bVar4) {
                case 0:
                  if (CVector3f_ARRAY_01bc9d44 + _DAT_01bc9d40 != pCVar7) {
                    CVector3f_ARRAY_01bc9d44[_DAT_01bc9d40].x = pCVar7->x;
                    CVector3f_ARRAY_01bc9d44[uVar2].y = pCVar7->y;
                    CVector3f_ARRAY_01bc9d44[uVar2].z = pCVar7->z;
                  }
                  _DAT_01bc9d40 = _DAT_01bc9d40 + 1;
                  break;
                case 1:
                  core_dtri_cpp_clipLineToPlane_FUN_0046d4e0
                            (CVector3f_ARRAY_01bc9c80 + uVar5,pCVar7,
                             CVector3f_ARRAY_01bc9d44 + _DAT_01bc9d40,0.0,0.0,-1.0,(double)fVar1);
                  _DAT_01bc9d40 = _DAT_01bc9d40 + 1;
                  break;
                case 2:
                  if (CVector3f_ARRAY_01bc9d44 + _DAT_01bc9d40 != pCVar7) {
                    CVector3f_ARRAY_01bc9d44[_DAT_01bc9d40].x = pCVar7->x;
                    CVector3f_ARRAY_01bc9d44[uVar2].y = pCVar7->y;
                    CVector3f_ARRAY_01bc9d44[uVar2].z = pCVar7->z;
                  }
                  _DAT_01bc9d40 = _DAT_01bc9d40 + 1;
                  core_dtri_cpp_clipLineToPlane_FUN_0046d4e0
                            (pCVar7,CVector3f_ARRAY_01bc9c80 + uVar5,
                             CVector3f_ARRAY_01bc9d44 + _DAT_01bc9d40,0.0,0.0,-1.0,(double)fVar1);
                  _DAT_01bc9d40 = _DAT_01bc9d40 + 1;
                }
                iVar8 = iVar8 + 1;
                pCVar7 = pCVar7 + 1;
              } while (iVar8 < (int)_DAT_01bc9c7c);
            }
            if (2 < (int)_DAT_01bc9d40) {
              fVar1 = bounds_max->z;
              iVar8 = 0;
              if (0 < (int)_DAT_01bc9d40) {
                pCVar7 = CVector3f_ARRAY_01bc9d44;
                do {
                  iVar3 = _DAT_01bc9e04;
                  uVar5 = iVar8 + 1;
                  if (uVar5 == _DAT_01bc9d40) {
                    uVar5 = uVar5 ^ _DAT_01bc9d40;
                  }
                  bVar4 = fVar1 < pCVar7->z;
                  if (fVar1 < CVector3f_ARRAY_01bc9d44[uVar5].z) {
                    bVar4 = bVar4 | 2;
                  }
                  switch(bVar4) {
                  case 0:
                    if (CVector3f_ARRAY_01bc9e08 + _DAT_01bc9e04 != pCVar7) {
                      CVector3f_ARRAY_01bc9e08[_DAT_01bc9e04].x = pCVar7->x;
                      CVector3f_ARRAY_01bc9e08[iVar3].y = pCVar7->y;
                      CVector3f_ARRAY_01bc9e08[iVar3].z = pCVar7->z;
                    }
                    _DAT_01bc9e04 = _DAT_01bc9e04 + 1;
                    break;
                  case 1:
                    core_dtri_cpp_clipLineToPlane_FUN_0046d4e0
                              (CVector3f_ARRAY_01bc9d44 + uVar5,pCVar7,
                               CVector3f_ARRAY_01bc9e08 + _DAT_01bc9e04,0.0,0.0,-1.0,(double)fVar1);
                    _DAT_01bc9e04 = _DAT_01bc9e04 + 1;
                    break;
                  case 2:
                    if (CVector3f_ARRAY_01bc9e08 + _DAT_01bc9e04 != pCVar7) {
                      CVector3f_ARRAY_01bc9e08[_DAT_01bc9e04].x = pCVar7->x;
                      CVector3f_ARRAY_01bc9e08[iVar3].y = pCVar7->y;
                      CVector3f_ARRAY_01bc9e08[iVar3].z = pCVar7->z;
                    }
                    _DAT_01bc9e04 = _DAT_01bc9e04 + 1;
                    core_dtri_cpp_clipLineToPlane_FUN_0046d4e0
                              (pCVar7,CVector3f_ARRAY_01bc9d44 + uVar5,
                               CVector3f_ARRAY_01bc9e08 + _DAT_01bc9e04,0.0,0.0,-1.0,(double)fVar1);
                    _DAT_01bc9e04 = _DAT_01bc9e04 + 1;
                  }
                  iVar8 = iVar8 + 1;
                  pCVar7 = pCVar7 + 1;
                } while (iVar8 < (int)_DAT_01bc9d40);
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
