// Name: core_dtri.cpp_clipTriangleToBounds_FUN_0047a3d0
// Address: 0047a3d0
// Address Range: [[0047a3d0, 0047adf9]]
// Convention: __cdecl
// Signature: int __cdecl core_dtri_cpp_clipTriangleToBounds_FUN_0047a3d0(CVector3f *triangle_vertices,CVector3f *bounds_min,CVector3f *bounds_max)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_dtri_cpp_clipTriangleToBounds_FUN_0047a3d0(CVector3f *triangle_vertices,CVector3f *bounds_min,CVector3f *bounds_max)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  float *pfVar6;
  int iVar7;
  CVector3f *pCVar8;
  byte bVar9;
  CVector3f *pCVar10;
  
  _DAT_01c599dc = 3;
  if (triangle_vertices != (CVector3f *)&DAT_01c599e0) {
    _DAT_01c599e0 = triangle_vertices->x;
    _DAT_01c599e8 = triangle_vertices->z;
    _DAT_01c599e4 = triangle_vertices->y;
  }
  if (triangle_vertices + 1 != (CVector3f *)&DAT_01c599ec) {
    _DAT_01c599ec = triangle_vertices[1].x;
    _DAT_01c599f4 = triangle_vertices[1].z;
    _DAT_01c599f0 = triangle_vertices[1].y;
  }
  if (triangle_vertices + 2 != (CVector3f *)&DAT_01c599f8) {
    _DAT_01c599f8 = triangle_vertices[2].x;
    _DAT_01c59a00 = triangle_vertices[2].z;
    _DAT_01c599fc = triangle_vertices[2].y;
  }
  bVar9 = 0;
  iVar7 = 0;
  bVar4 = 0xff;
  pfVar6 = (float *)&DAT_01c599e0;
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
    bVar4 = bVar4 & bVar5;
    bVar9 = bVar9 | bVar5;
  } while (iVar7 < 3);
  if (bVar9 == 0) {
    _DAT_01c59e74 = 3;
    if (triangle_vertices != (CVector3f *)&DAT_01c59e78) {
      _DAT_01c59e78 = triangle_vertices->x;
      _DAT_01c59e80 = triangle_vertices->z;
      _DAT_01c59e7c = triangle_vertices->y;
    }
    if (triangle_vertices + 1 != (CVector3f *)&DAT_01c59e84) {
      _DAT_01c59e84 = triangle_vertices[1].x;
      _DAT_01c59e8c = triangle_vertices[1].z;
      _DAT_01c59e88 = triangle_vertices[1].y;
    }
    if (triangle_vertices + 2 != (CVector3f *)&DAT_01c59e90) {
      _DAT_01c59e90 = triangle_vertices[2].x;
      _DAT_01c59e98 = triangle_vertices[2].z;
      _DAT_01c59e94 = triangle_vertices[2].y;
    }
    return 1;
  }
  if (bVar4 == 0) {
    fVar1 = bounds_max->y;
    iVar7 = 0;
    pCVar8 = (CVector3f *)&DAT_01c599e0;
    _DAT_01c59aa0 = 0;
    _DAT_01c59b64 = 0;
    _DAT_01c59c28 = 0;
    _DAT_01c59cec = 0;
    _DAT_01c59db0 = 0;
    _DAT_01c59e74 = 0;
    do {
      uVar2 = iVar7 + 1;
      if (uVar2 == _DAT_01c599dc) {
        uVar2 = uVar2 ^ _DAT_01c599dc;
      }
      bVar4 = fVar1 < pCVar8->y;
      if (fVar1 < *(float *)(&DAT_01c599e4 + uVar2 * 0xc)) {
        bVar4 = bVar4 | 2;
      }
      switch(bVar4) {
      case 0:
        iVar3 = _DAT_01c59aa0 * 0xc;
        if ((CVector3f *)(&DAT_01c59aa4 + iVar3) != pCVar8) {
          ((CVector3f *)(&DAT_01c59aa4 + iVar3))->x = pCVar8->x;
          *(float *)(&DAT_01c59aa8 + iVar3) = pCVar8->y;
          *(float *)(&DAT_01c59aac + iVar3) = pCVar8->z;
        }
        _DAT_01c59aa0 = _DAT_01c59aa0 + 1;
        break;
      case 1:
        core_dtri_cpp_clipLineToPlane_FUN_00479970
                  ((CVector3f *)(&DAT_01c599e0 + uVar2 * 0xc),pCVar8,
                   (CVector3f *)(&DAT_01c59aa4 + _DAT_01c59aa0 * 0xc),0.0,1.0,0.0,(double)-fVar1);
        _DAT_01c59aa0 = _DAT_01c59aa0 + 1;
        break;
      case 2:
        iVar3 = _DAT_01c59aa0 * 0xc;
        if ((CVector3f *)(&DAT_01c59aa4 + iVar3) != pCVar8) {
          ((CVector3f *)(&DAT_01c59aa4 + iVar3))->x = pCVar8->x;
          *(float *)(&DAT_01c59aa8 + iVar3) = pCVar8->y;
          *(float *)(&DAT_01c59aac + iVar3) = pCVar8->z;
        }
        _DAT_01c59aa0 = _DAT_01c59aa0 + 1;
        core_dtri_cpp_clipLineToPlane_FUN_00479970
                  (pCVar8,(CVector3f *)(&DAT_01c599e0 + uVar2 * 0xc),
                   (CVector3f *)(&DAT_01c59aa4 + _DAT_01c59aa0 * 0xc),0.0,1.0,0.0,(double)-fVar1);
        _DAT_01c59aa0 = _DAT_01c59aa0 + 1;
      }
      iVar7 = iVar7 + 1;
      pCVar8 = pCVar8 + 1;
    } while (iVar7 < (int)_DAT_01c599dc);
    if (2 < (int)_DAT_01c59aa0) {
      fVar1 = bounds_min->y;
      iVar7 = 0;
      if (0 < (int)_DAT_01c59aa0) {
        pCVar8 = (CVector3f *)&DAT_01c59aa4;
        do {
          uVar2 = iVar7 + 1;
          if (uVar2 == _DAT_01c59aa0) {
            uVar2 = uVar2 ^ _DAT_01c59aa0;
          }
          bVar4 = pCVar8->y < fVar1;
          if (*(float *)(&DAT_01c59aa8 + uVar2 * 0xc) < fVar1) {
            bVar4 = bVar4 | 2;
          }
          switch(bVar4) {
          case 0:
            iVar3 = _DAT_01c59b64 * 0xc;
            if ((CVector3f *)(&DAT_01c59b68 + iVar3) != pCVar8) {
              ((CVector3f *)(&DAT_01c59b68 + iVar3))->x = pCVar8->x;
              *(float *)(&DAT_01c59b6c + iVar3) = pCVar8->y;
              *(float *)(&DAT_01c59b70 + iVar3) = pCVar8->z;
            }
            _DAT_01c59b64 = _DAT_01c59b64 + 1;
            break;
          case 1:
            core_dtri_cpp_clipLineToPlane_FUN_00479970
                      ((CVector3f *)(&DAT_01c59aa4 + uVar2 * 0xc),pCVar8,
                       (CVector3f *)(&DAT_01c59b68 + _DAT_01c59b64 * 0xc),0.0,-1.0,0.0,(double)fVar1
                      );
            _DAT_01c59b64 = _DAT_01c59b64 + 1;
            break;
          case 2:
            iVar3 = _DAT_01c59b64 * 0xc;
            if ((CVector3f *)(&DAT_01c59b68 + iVar3) != pCVar8) {
              ((CVector3f *)(&DAT_01c59b68 + iVar3))->x = pCVar8->x;
              *(float *)(&DAT_01c59b6c + iVar3) = pCVar8->y;
              *(float *)(&DAT_01c59b70 + iVar3) = pCVar8->z;
            }
            _DAT_01c59b64 = _DAT_01c59b64 + 1;
            core_dtri_cpp_clipLineToPlane_FUN_00479970
                      (pCVar8,(CVector3f *)(&DAT_01c59aa4 + uVar2 * 0xc),
                       (CVector3f *)(&DAT_01c59b68 + _DAT_01c59b64 * 0xc),0.0,-1.0,0.0,(double)fVar1
                      );
            _DAT_01c59b64 = _DAT_01c59b64 + 1;
          }
          iVar7 = iVar7 + 1;
          pCVar8 = pCVar8 + 1;
        } while (iVar7 < (int)_DAT_01c59aa0);
      }
      if (2 < (int)_DAT_01c59b64) {
        fVar1 = bounds_max->x;
        iVar7 = 0;
        if (0 < (int)_DAT_01c59b64) {
          pCVar8 = (CVector3f *)&DAT_01c59b68;
          do {
            uVar2 = iVar7 + 1;
            if (uVar2 == _DAT_01c59b64) {
              uVar2 = uVar2 ^ _DAT_01c59b64;
            }
            pCVar10 = (CVector3f *)(&DAT_01c59b68 + uVar2 * 0xc);
            bVar4 = fVar1 < pCVar8->x;
            if (fVar1 < pCVar10->x) {
              bVar4 = bVar4 | 2;
            }
            switch(bVar4) {
            case 0:
              iVar3 = _DAT_01c59c28 * 0xc;
              if ((CVector3f *)(&DAT_01c59c2c + iVar3) != pCVar8) {
                ((CVector3f *)(&DAT_01c59c2c + iVar3))->x = pCVar8->x;
                *(float *)(&DAT_01c59c30 + iVar3) = pCVar8->y;
                *(float *)(&DAT_01c59c34 + iVar3) = pCVar8->z;
              }
              _DAT_01c59c28 = _DAT_01c59c28 + 1;
              break;
            case 1:
              core_dtri_cpp_clipLineToPlane_FUN_00479970
                        (pCVar10,pCVar8,(CVector3f *)(&DAT_01c59c2c + _DAT_01c59c28 * 0xc),1.0,0.0,
                         0.0,(double)-fVar1);
              _DAT_01c59c28 = _DAT_01c59c28 + 1;
              break;
            case 2:
              iVar3 = _DAT_01c59c28 * 0xc;
              if ((CVector3f *)(&DAT_01c59c2c + iVar3) != pCVar8) {
                ((CVector3f *)(&DAT_01c59c2c + iVar3))->x = pCVar8->x;
                *(float *)(&DAT_01c59c30 + iVar3) = pCVar8->y;
                *(float *)(&DAT_01c59c34 + iVar3) = pCVar8->z;
              }
              _DAT_01c59c28 = _DAT_01c59c28 + 1;
              core_dtri_cpp_clipLineToPlane_FUN_00479970
                        (pCVar8,pCVar10,(CVector3f *)(&DAT_01c59c2c + _DAT_01c59c28 * 0xc),1.0,0.0,
                         0.0,(double)-fVar1);
              _DAT_01c59c28 = _DAT_01c59c28 + 1;
            }
            iVar7 = iVar7 + 1;
            pCVar8 = pCVar8 + 1;
          } while (iVar7 < (int)_DAT_01c59b64);
        }
        if (2 < (int)_DAT_01c59c28) {
          fVar1 = bounds_min->x;
          iVar7 = 0;
          if (0 < (int)_DAT_01c59c28) {
            pCVar8 = (CVector3f *)&DAT_01c59c2c;
            do {
              uVar2 = iVar7 + 1;
              if (uVar2 == _DAT_01c59c28) {
                uVar2 = uVar2 ^ _DAT_01c59c28;
              }
              pCVar10 = (CVector3f *)(&DAT_01c59c2c + uVar2 * 0xc);
              bVar4 = pCVar8->x < fVar1;
              if (pCVar10->x < fVar1) {
                bVar4 = bVar4 | 2;
              }
              switch(bVar4) {
              case 0:
                iVar3 = _DAT_01c59cec * 0xc;
                if ((CVector3f *)(&DAT_01c59cf0 + iVar3) != pCVar8) {
                  ((CVector3f *)(&DAT_01c59cf0 + iVar3))->x = pCVar8->x;
                  *(float *)(&DAT_01c59cf4 + iVar3) = pCVar8->y;
                  *(float *)(&DAT_01c59cf8 + iVar3) = pCVar8->z;
                }
                _DAT_01c59cec = _DAT_01c59cec + 1;
                break;
              case 1:
                core_dtri_cpp_clipLineToPlane_FUN_00479970
                          (pCVar10,pCVar8,(CVector3f *)(&DAT_01c59cf0 + _DAT_01c59cec * 0xc),-1.0,
                           0.0,0.0,(double)fVar1);
                _DAT_01c59cec = _DAT_01c59cec + 1;
                break;
              case 2:
                iVar3 = _DAT_01c59cec * 0xc;
                if ((CVector3f *)(&DAT_01c59cf0 + iVar3) != pCVar8) {
                  ((CVector3f *)(&DAT_01c59cf0 + iVar3))->x = pCVar8->x;
                  *(float *)(&DAT_01c59cf4 + iVar3) = pCVar8->y;
                  *(float *)(&DAT_01c59cf8 + iVar3) = pCVar8->z;
                }
                _DAT_01c59cec = _DAT_01c59cec + 1;
                core_dtri_cpp_clipLineToPlane_FUN_00479970
                          (pCVar8,pCVar10,(CVector3f *)(&DAT_01c59cf0 + _DAT_01c59cec * 0xc),-1.0,
                           0.0,0.0,(double)fVar1);
                _DAT_01c59cec = _DAT_01c59cec + 1;
              }
              iVar7 = iVar7 + 1;
              pCVar8 = pCVar8 + 1;
            } while (iVar7 < (int)_DAT_01c59c28);
          }
          if (2 < (int)_DAT_01c59cec) {
            fVar1 = bounds_min->z;
            iVar7 = 0;
            if (0 < (int)_DAT_01c59cec) {
              pCVar8 = (CVector3f *)&DAT_01c59cf0;
              do {
                uVar2 = iVar7 + 1;
                if (uVar2 == _DAT_01c59cec) {
                  uVar2 = uVar2 ^ _DAT_01c59cec;
                }
                bVar4 = pCVar8->z < fVar1;
                if (*(float *)(&DAT_01c59cf8 + uVar2 * 0xc) < fVar1) {
                  bVar4 = bVar4 | 2;
                }
                switch(bVar4) {
                case 0:
                  iVar3 = _DAT_01c59db0 * 0xc;
                  if ((CVector3f *)(&DAT_01c59db4 + iVar3) != pCVar8) {
                    ((CVector3f *)(&DAT_01c59db4 + iVar3))->x = pCVar8->x;
                    *(float *)(&DAT_01c59db8 + iVar3) = pCVar8->y;
                    *(float *)(&DAT_01c59dbc + iVar3) = pCVar8->z;
                  }
                  _DAT_01c59db0 = _DAT_01c59db0 + 1;
                  break;
                case 1:
                  core_dtri_cpp_clipLineToPlane_FUN_00479970
                            ((CVector3f *)(&DAT_01c59cf0 + uVar2 * 0xc),pCVar8,
                             (CVector3f *)(&DAT_01c59db4 + _DAT_01c59db0 * 0xc),0.0,0.0,-1.0,
                             (double)fVar1);
                  _DAT_01c59db0 = _DAT_01c59db0 + 1;
                  break;
                case 2:
                  iVar3 = _DAT_01c59db0 * 0xc;
                  if ((CVector3f *)(&DAT_01c59db4 + iVar3) != pCVar8) {
                    ((CVector3f *)(&DAT_01c59db4 + iVar3))->x = pCVar8->x;
                    *(float *)(&DAT_01c59db8 + iVar3) = pCVar8->y;
                    *(float *)(&DAT_01c59dbc + iVar3) = pCVar8->z;
                  }
                  _DAT_01c59db0 = _DAT_01c59db0 + 1;
                  core_dtri_cpp_clipLineToPlane_FUN_00479970
                            (pCVar8,(CVector3f *)(&DAT_01c59cf0 + uVar2 * 0xc),
                             (CVector3f *)(&DAT_01c59db4 + _DAT_01c59db0 * 0xc),0.0,0.0,-1.0,
                             (double)fVar1);
                  _DAT_01c59db0 = _DAT_01c59db0 + 1;
                }
                iVar7 = iVar7 + 1;
                pCVar8 = pCVar8 + 1;
              } while (iVar7 < (int)_DAT_01c59cec);
            }
            if (2 < (int)_DAT_01c59db0) {
              fVar1 = bounds_max->z;
              iVar7 = 0;
              if (0 < (int)_DAT_01c59db0) {
                pCVar8 = (CVector3f *)&DAT_01c59db4;
                do {
                  uVar2 = iVar7 + 1;
                  if (uVar2 == _DAT_01c59db0) {
                    uVar2 = uVar2 ^ _DAT_01c59db0;
                  }
                  bVar4 = fVar1 < pCVar8->z;
                  if (fVar1 < *(float *)(&DAT_01c59dbc + uVar2 * 0xc)) {
                    bVar4 = bVar4 | 2;
                  }
                  switch(bVar4) {
                  case 0:
                    iVar3 = _DAT_01c59e74 * 0xc;
                    if ((CVector3f *)(&DAT_01c59e78 + iVar3) != pCVar8) {
                      ((CVector3f *)(&DAT_01c59e78 + iVar3))->x = pCVar8->x;
                      *(float *)(&DAT_01c59e7c + iVar3) = pCVar8->y;
                      *(float *)(&DAT_01c59e80 + iVar3) = pCVar8->z;
                    }
                    _DAT_01c59e74 = _DAT_01c59e74 + 1;
                    break;
                  case 1:
                    core_dtri_cpp_clipLineToPlane_FUN_00479970
                              ((CVector3f *)(&DAT_01c59db4 + uVar2 * 0xc),pCVar8,
                               (CVector3f *)(&DAT_01c59e78 + _DAT_01c59e74 * 0xc),0.0,0.0,-1.0,
                               (double)fVar1);
                    _DAT_01c59e74 = _DAT_01c59e74 + 1;
                    break;
                  case 2:
                    iVar3 = _DAT_01c59e74 * 0xc;
                    if ((CVector3f *)(&DAT_01c59e78 + iVar3) != pCVar8) {
                      ((CVector3f *)(&DAT_01c59e78 + iVar3))->x = pCVar8->x;
                      *(float *)(&DAT_01c59e7c + iVar3) = pCVar8->y;
                      *(float *)(&DAT_01c59e80 + iVar3) = pCVar8->z;
                    }
                    _DAT_01c59e74 = _DAT_01c59e74 + 1;
                    core_dtri_cpp_clipLineToPlane_FUN_00479970
                              (pCVar8,(CVector3f *)(&DAT_01c59db4 + uVar2 * 0xc),
                               (CVector3f *)(&DAT_01c59e78 + _DAT_01c59e74 * 0xc),0.0,0.0,-1.0,
                               (double)fVar1);
                    _DAT_01c59e74 = _DAT_01c59e74 + 1;
                  }
                  iVar7 = iVar7 + 1;
                  pCVar8 = pCVar8 + 1;
                } while (iVar7 < (int)_DAT_01c59db0);
              }
              if (2 < _DAT_01c59e74) {
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
