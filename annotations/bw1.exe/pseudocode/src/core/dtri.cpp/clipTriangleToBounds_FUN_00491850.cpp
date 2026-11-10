// Name: core_dtri.cpp_clipTriangleToBounds_FUN_00491850
// Address: 00491850
// Address Range: [[00491850, 0049225d]]
// Convention: __cdecl
// Signature: int __cdecl core_dtri_cpp_clipTriangleToBounds_FUN_00491850(CVector3f *triangle_vertices,CVector3f *bounds_min,CVector3f *bounds_max)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_dtri_cpp_clipTriangleToBounds_FUN_00491850(CVector3f *triangle_vertices,CVector3f *bounds_min,CVector3f *bounds_max)

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
  
  _DAT_01c3d440 = 3;
  if (triangle_vertices != (CVector3f *)&DAT_01c3d444) {
    _DAT_01c3d444 = triangle_vertices->x;
    _DAT_01c3d44c = triangle_vertices->z;
    _DAT_01c3d448 = triangle_vertices->y;
  }
  if (triangle_vertices + 1 != (CVector3f *)&DAT_01c3d450) {
    _DAT_01c3d450 = triangle_vertices[1].x;
    _DAT_01c3d458 = triangle_vertices[1].z;
    _DAT_01c3d454 = triangle_vertices[1].y;
  }
  if (triangle_vertices + 2 != (CVector3f *)&DAT_01c3d45c) {
    _DAT_01c3d45c = triangle_vertices[2].x;
    _DAT_01c3d464 = triangle_vertices[2].z;
    _DAT_01c3d460 = triangle_vertices[2].y;
  }
  bVar9 = 0;
  iVar7 = 0;
  bVar2 = 0xff;
  pfVar6 = (float *)&DAT_01c3d444;
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
    _DAT_01c3d8d8 = 3;
    if (triangle_vertices != (CVector3f *)&DAT_01c3d8dc) {
      _DAT_01c3d8dc = triangle_vertices->x;
      _DAT_01c3d8e4 = triangle_vertices->z;
      _DAT_01c3d8e0 = triangle_vertices->y;
    }
    if (triangle_vertices + 1 != (CVector3f *)&DAT_01c3d8e8) {
      _DAT_01c3d8e8 = triangle_vertices[1].x;
      _DAT_01c3d8f0 = triangle_vertices[1].z;
      _DAT_01c3d8ec = triangle_vertices[1].y;
    }
    if (triangle_vertices + 2 != (CVector3f *)&DAT_01c3d8f4) {
      _DAT_01c3d8f4 = triangle_vertices[2].x;
      _DAT_01c3d8fc = triangle_vertices[2].z;
      _DAT_01c3d8f8 = triangle_vertices[2].y;
    }
    return 1;
  }
  if (bVar2 == 0) {
    fVar1 = bounds_max->y;
    iVar7 = 0;
    puVar8 = (uint *)&DAT_01c3d444;
    _DAT_01c3d504 = 0;
    _DAT_01c3d5c8 = 0;
    _DAT_01c3d68c = 0;
    _DAT_01c3d750 = 0;
    _DAT_01c3d814 = 0;
    _DAT_01c3d8d8 = 0;
    do {
      uVar3 = iVar7 + 1;
      if (uVar3 == _DAT_01c3d440) {
        uVar3 = uVar3 ^ _DAT_01c3d440;
      }
      bVar2 = fVar1 < (float)puVar8[1];
      if (fVar1 < *(float *)(&DAT_01c3d448 + uVar3 * 0xc)) {
        bVar2 = bVar2 | 2;
      }
      switch(bVar2) {
      case 0:
        iVar4 = _DAT_01c3d504 * 0xc;
        if ((uint *)(&DAT_01c3d508 + iVar4) != puVar8) {
          *(uint *)(&DAT_01c3d508 + iVar4) = *puVar8;
          *(uint *)(&DAT_01c3d50c + iVar4) = puVar8[1];
          *(uint *)(&DAT_01c3d510 + iVar4) = puVar8[2];
        }
        _DAT_01c3d504 = _DAT_01c3d504 + 1;
        break;
      case 1:
        core_dtri_cpp_clipLineToPlane_FUN_00490df0
                  (&DAT_01c3d444 + uVar3 * 0xc,puVar8,&DAT_01c3d508 + _DAT_01c3d504 * 0xc,0,0,0,
                   0x3ff00000,0,0,(double)-fVar1);
        _DAT_01c3d504 = _DAT_01c3d504 + 1;
        break;
      case 2:
        iVar4 = _DAT_01c3d504 * 0xc;
        if ((uint *)(&DAT_01c3d508 + iVar4) != puVar8) {
          *(uint *)(&DAT_01c3d508 + iVar4) = *puVar8;
          *(uint *)(&DAT_01c3d50c + iVar4) = puVar8[1];
          *(uint *)(&DAT_01c3d510 + iVar4) = puVar8[2];
        }
        _DAT_01c3d504 = _DAT_01c3d504 + 1;
        core_dtri_cpp_clipLineToPlane_FUN_00490df0
                  (puVar8,&DAT_01c3d444 + uVar3 * 0xc,&DAT_01c3d508 + _DAT_01c3d504 * 0xc,0,0,0,
                   0x3ff00000,0,0,(double)-fVar1);
        _DAT_01c3d504 = _DAT_01c3d504 + 1;
      }
      iVar7 = iVar7 + 1;
      puVar8 = puVar8 + 3;
    } while (iVar7 < (int)_DAT_01c3d440);
    if (2 < (int)_DAT_01c3d504) {
      fVar1 = bounds_min->y;
      iVar7 = 0;
      if (0 < (int)_DAT_01c3d504) {
        puVar8 = (uint *)&DAT_01c3d508;
        do {
          uVar3 = iVar7 + 1;
          if (uVar3 == _DAT_01c3d504) {
            uVar3 = uVar3 ^ _DAT_01c3d504;
          }
          bVar2 = (float)puVar8[1] < fVar1;
          if (*(float *)(&DAT_01c3d50c + uVar3 * 0xc) < fVar1) {
            bVar2 = bVar2 | 2;
          }
          switch(bVar2) {
          case 0:
            iVar4 = _DAT_01c3d5c8 * 0xc;
            if ((uint *)(&DAT_01c3d5cc + iVar4) != puVar8) {
              *(uint *)(&DAT_01c3d5cc + iVar4) = *puVar8;
              *(uint *)(&DAT_01c3d5d0 + iVar4) = puVar8[1];
              *(uint *)(&DAT_01c3d5d4 + iVar4) = puVar8[2];
            }
            _DAT_01c3d5c8 = _DAT_01c3d5c8 + 1;
            break;
          case 1:
            core_dtri_cpp_clipLineToPlane_FUN_00490df0
                      (&DAT_01c3d508 + uVar3 * 0xc,puVar8,&DAT_01c3d5cc + _DAT_01c3d5c8 * 0xc,0,0,0,
                       0xbff00000,0,0,(double)fVar1);
            _DAT_01c3d5c8 = _DAT_01c3d5c8 + 1;
            break;
          case 2:
            iVar4 = _DAT_01c3d5c8 * 0xc;
            if ((uint *)(&DAT_01c3d5cc + iVar4) != puVar8) {
              *(uint *)(&DAT_01c3d5cc + iVar4) = *puVar8;
              *(uint *)(&DAT_01c3d5d0 + iVar4) = puVar8[1];
              *(uint *)(&DAT_01c3d5d4 + iVar4) = puVar8[2];
            }
            _DAT_01c3d5c8 = _DAT_01c3d5c8 + 1;
            core_dtri_cpp_clipLineToPlane_FUN_00490df0
                      (puVar8,&DAT_01c3d508 + uVar3 * 0xc,&DAT_01c3d5cc + _DAT_01c3d5c8 * 0xc,0,0,0,
                       0xbff00000,0,0,(double)fVar1);
            _DAT_01c3d5c8 = _DAT_01c3d5c8 + 1;
          }
          iVar7 = iVar7 + 1;
          puVar8 = puVar8 + 3;
        } while (iVar7 < (int)_DAT_01c3d504);
      }
      if (2 < (int)_DAT_01c3d5c8) {
        fVar1 = bounds_max->x;
        iVar7 = 0;
        if (0 < (int)_DAT_01c3d5c8) {
          pfVar6 = (float *)&DAT_01c3d5cc;
          do {
            uVar3 = iVar7 + 1;
            if (uVar3 == _DAT_01c3d5c8) {
              uVar3 = uVar3 ^ _DAT_01c3d5c8;
            }
            pfVar10 = (float *)(&DAT_01c3d5cc + uVar3 * 0xc);
            bVar2 = fVar1 < *pfVar6;
            if (fVar1 < *pfVar10) {
              bVar2 = bVar2 | 2;
            }
            switch(bVar2) {
            case 0:
              iVar4 = _DAT_01c3d68c * 0xc;
              if ((float *)(&DAT_01c3d690 + iVar4) != pfVar6) {
                *(float *)(&DAT_01c3d690 + iVar4) = *pfVar6;
                *(float *)(&DAT_01c3d694 + iVar4) = pfVar6[1];
                *(float *)(&DAT_01c3d698 + iVar4) = pfVar6[2];
              }
              _DAT_01c3d68c = _DAT_01c3d68c + 1;
              break;
            case 1:
              core_dtri_cpp_clipLineToPlane_FUN_00490df0
                        (pfVar10,pfVar6,&DAT_01c3d690 + _DAT_01c3d68c * 0xc,0,0x3ff00000,0,0,0,0,
                         (double)-fVar1);
              _DAT_01c3d68c = _DAT_01c3d68c + 1;
              break;
            case 2:
              iVar4 = _DAT_01c3d68c * 0xc;
              if ((float *)(&DAT_01c3d690 + iVar4) != pfVar6) {
                *(float *)(&DAT_01c3d690 + iVar4) = *pfVar6;
                *(float *)(&DAT_01c3d694 + iVar4) = pfVar6[1];
                *(float *)(&DAT_01c3d698 + iVar4) = pfVar6[2];
              }
              _DAT_01c3d68c = _DAT_01c3d68c + 1;
              core_dtri_cpp_clipLineToPlane_FUN_00490df0
                        (pfVar6,pfVar10,&DAT_01c3d690 + _DAT_01c3d68c * 0xc,0,0x3ff00000,0,0,0,0,
                         (double)-fVar1);
              _DAT_01c3d68c = _DAT_01c3d68c + 1;
            }
            iVar7 = iVar7 + 1;
            pfVar6 = pfVar6 + 3;
          } while (iVar7 < (int)_DAT_01c3d5c8);
        }
        if (2 < (int)_DAT_01c3d68c) {
          fVar1 = bounds_min->x;
          iVar7 = 0;
          if (0 < (int)_DAT_01c3d68c) {
            pfVar6 = (float *)&DAT_01c3d690;
            do {
              uVar3 = iVar7 + 1;
              if (uVar3 == _DAT_01c3d68c) {
                uVar3 = uVar3 ^ _DAT_01c3d68c;
              }
              pfVar10 = (float *)(&DAT_01c3d690 + uVar3 * 0xc);
              bVar2 = *pfVar6 < fVar1;
              if (*pfVar10 < fVar1) {
                bVar2 = bVar2 | 2;
              }
              switch(bVar2) {
              case 0:
                iVar4 = _DAT_01c3d750 * 0xc;
                if ((float *)(&DAT_01c3d754 + iVar4) != pfVar6) {
                  *(float *)(&DAT_01c3d754 + iVar4) = *pfVar6;
                  *(float *)(&DAT_01c3d758 + iVar4) = pfVar6[1];
                  *(float *)(&DAT_01c3d75c + iVar4) = pfVar6[2];
                }
                _DAT_01c3d750 = _DAT_01c3d750 + 1;
                break;
              case 1:
                core_dtri_cpp_clipLineToPlane_FUN_00490df0
                          (pfVar10,pfVar6,&DAT_01c3d754 + _DAT_01c3d750 * 0xc,0,0xbff00000,0,0,0,0,
                           (double)fVar1);
                _DAT_01c3d750 = _DAT_01c3d750 + 1;
                break;
              case 2:
                iVar4 = _DAT_01c3d750 * 0xc;
                if ((float *)(&DAT_01c3d754 + iVar4) != pfVar6) {
                  *(float *)(&DAT_01c3d754 + iVar4) = *pfVar6;
                  *(float *)(&DAT_01c3d758 + iVar4) = pfVar6[1];
                  *(float *)(&DAT_01c3d75c + iVar4) = pfVar6[2];
                }
                _DAT_01c3d750 = _DAT_01c3d750 + 1;
                core_dtri_cpp_clipLineToPlane_FUN_00490df0
                          (pfVar6,pfVar10,&DAT_01c3d754 + _DAT_01c3d750 * 0xc,0,0xbff00000,0,0,0,0,
                           (double)fVar1);
                _DAT_01c3d750 = _DAT_01c3d750 + 1;
              }
              iVar7 = iVar7 + 1;
              pfVar6 = pfVar6 + 3;
            } while (iVar7 < (int)_DAT_01c3d68c);
          }
          if (2 < (int)_DAT_01c3d750) {
            fVar1 = bounds_min->z;
            iVar7 = 0;
            if (0 < (int)_DAT_01c3d750) {
              puVar8 = (uint *)&DAT_01c3d754;
              do {
                uVar3 = iVar7 + 1;
                if (uVar3 == _DAT_01c3d750) {
                  uVar3 = uVar3 ^ _DAT_01c3d750;
                }
                bVar2 = (float)puVar8[2] < fVar1;
                if (*(float *)(&DAT_01c3d75c + uVar3 * 0xc) < fVar1) {
                  bVar2 = bVar2 | 2;
                }
                switch(bVar2) {
                case 0:
                  iVar4 = _DAT_01c3d814 * 0xc;
                  if ((uint *)(&DAT_01c3d818 + iVar4) != puVar8) {
                    *(uint *)(&DAT_01c3d818 + iVar4) = *puVar8;
                    *(uint *)(&DAT_01c3d81c + iVar4) = puVar8[1];
                    *(uint *)(&DAT_01c3d820 + iVar4) = puVar8[2];
                  }
                  _DAT_01c3d814 = _DAT_01c3d814 + 1;
                  break;
                case 1:
                  core_dtri_cpp_clipLineToPlane_FUN_00490df0
                            (&DAT_01c3d754 + uVar3 * 0xc,puVar8,&DAT_01c3d818 + _DAT_01c3d814 * 0xc,
                             0,0,0,0,0,0xbff00000,(double)fVar1);
                  _DAT_01c3d814 = _DAT_01c3d814 + 1;
                  break;
                case 2:
                  iVar4 = _DAT_01c3d814 * 0xc;
                  if ((uint *)(&DAT_01c3d818 + iVar4) != puVar8) {
                    *(uint *)(&DAT_01c3d818 + iVar4) = *puVar8;
                    *(uint *)(&DAT_01c3d81c + iVar4) = puVar8[1];
                    *(uint *)(&DAT_01c3d820 + iVar4) = puVar8[2];
                  }
                  _DAT_01c3d814 = _DAT_01c3d814 + 1;
                  core_dtri_cpp_clipLineToPlane_FUN_00490df0
                            (puVar8,&DAT_01c3d754 + uVar3 * 0xc,&DAT_01c3d818 + _DAT_01c3d814 * 0xc,
                             0,0,0,0,0,0xbff00000,(double)fVar1);
                  _DAT_01c3d814 = _DAT_01c3d814 + 1;
                }
                iVar7 = iVar7 + 1;
                puVar8 = puVar8 + 3;
              } while (iVar7 < (int)_DAT_01c3d750);
            }
            if (2 < (int)_DAT_01c3d814) {
              fVar1 = bounds_max->z;
              iVar7 = 0;
              if (0 < (int)_DAT_01c3d814) {
                puVar8 = (uint *)&DAT_01c3d818;
                do {
                  uVar3 = iVar7 + 1;
                  if (uVar3 == _DAT_01c3d814) {
                    uVar3 = uVar3 ^ _DAT_01c3d814;
                  }
                  bVar2 = fVar1 < (float)puVar8[2];
                  if (fVar1 < *(float *)(&DAT_01c3d820 + uVar3 * 0xc)) {
                    bVar2 = bVar2 | 2;
                  }
                  switch(bVar2) {
                  case 0:
                    iVar4 = _DAT_01c3d8d8 * 0xc;
                    if ((uint *)(&DAT_01c3d8dc + iVar4) != puVar8) {
                      *(uint *)(&DAT_01c3d8dc + iVar4) = *puVar8;
                      *(uint *)(&DAT_01c3d8e0 + iVar4) = puVar8[1];
                      *(uint *)(&DAT_01c3d8e4 + iVar4) = puVar8[2];
                    }
                    _DAT_01c3d8d8 = _DAT_01c3d8d8 + 1;
                    break;
                  case 1:
                    core_dtri_cpp_clipLineToPlane_FUN_00490df0
                              (&DAT_01c3d818 + uVar3 * 0xc,puVar8,
                               &DAT_01c3d8dc + _DAT_01c3d8d8 * 0xc,0,0,0,0,0,0xbff00000,
                               (double)fVar1);
                    _DAT_01c3d8d8 = _DAT_01c3d8d8 + 1;
                    break;
                  case 2:
                    iVar4 = _DAT_01c3d8d8 * 0xc;
                    if ((uint *)(&DAT_01c3d8dc + iVar4) != puVar8) {
                      *(uint *)(&DAT_01c3d8dc + iVar4) = *puVar8;
                      *(uint *)(&DAT_01c3d8e0 + iVar4) = puVar8[1];
                      *(uint *)(&DAT_01c3d8e4 + iVar4) = puVar8[2];
                    }
                    _DAT_01c3d8d8 = _DAT_01c3d8d8 + 1;
                    core_dtri_cpp_clipLineToPlane_FUN_00490df0
                              (puVar8,&DAT_01c3d818 + uVar3 * 0xc,
                               &DAT_01c3d8dc + _DAT_01c3d8d8 * 0xc,0,0,0,0,0,0xbff00000,
                               (double)fVar1);
                    _DAT_01c3d8d8 = _DAT_01c3d8d8 + 1;
                  }
                  iVar7 = iVar7 + 1;
                  puVar8 = puVar8 + 3;
                } while (iVar7 < (int)_DAT_01c3d814);
              }
              if (2 < _DAT_01c3d8d8) {
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
