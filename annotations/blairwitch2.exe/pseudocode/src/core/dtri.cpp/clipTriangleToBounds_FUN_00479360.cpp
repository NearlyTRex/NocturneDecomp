// Name: core_dtri.cpp_clipTriangleToBounds_FUN_00479360
// Address: 00479360
// Address Range: [[00479360, 00479d6d]]
// Convention: __cdecl
// Signature: int __cdecl core_dtri_cpp_clipTriangleToBounds_FUN_00479360(CVector3f *triangle_vertices,CVector3f *bounds_min,CVector3f *bounds_max)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_dtri_cpp_clipTriangleToBounds_FUN_00479360(CVector3f *triangle_vertices,CVector3f *bounds_min,CVector3f *bounds_max)

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
  
  _DAT_01c21e84 = 3;
  if (triangle_vertices != (CVector3f *)&DAT_01c21e88) {
    _DAT_01c21e88 = *(uint *)triangle_vertices;
    _DAT_01c21e90 = *(uint *)&triangle_vertices->field_0x8;
    _DAT_01c21e8c = *(uint *)&triangle_vertices->field_0x4;
  }
  if (triangle_vertices + 1 != (CVector3f *)&DAT_01c21e94) {
    _DAT_01c21e94 = *(uint *)(triangle_vertices + 1);
    _DAT_01c21e9c = *(uint *)&triangle_vertices[1].field_0x8;
    _DAT_01c21e98 = *(uint *)&triangle_vertices[1].field_0x4;
  }
  if (triangle_vertices + 2 != (CVector3f *)&DAT_01c21ea0) {
    _DAT_01c21ea0 = *(uint *)(triangle_vertices + 2);
    _DAT_01c21ea8 = *(uint *)&triangle_vertices[2].field_0x8;
    _DAT_01c21ea4 = *(uint *)&triangle_vertices[2].field_0x4;
  }
  bVar9 = 0;
  iVar7 = 0;
  bVar2 = 0xff;
  pfVar6 = (float *)&DAT_01c21e88;
  do {
    bVar5 = *(float *)bounds_max < *pfVar6;
    if (*(float *)&bounds_max->field_0x4 < pfVar6[1]) {
      bVar5 = bVar5 | 2;
    }
    if (*(float *)&bounds_max->field_0x8 < pfVar6[2]) {
      bVar5 = bVar5 | 4;
    }
    if (*pfVar6 < *(float *)bounds_min) {
      bVar5 = bVar5 | 8;
    }
    if (pfVar6[1] < *(float *)&bounds_min->field_0x4) {
      bVar5 = bVar5 | 0x10;
    }
    if (pfVar6[2] < *(float *)&bounds_min->field_0x8) {
      bVar5 = bVar5 | 0x20;
    }
    pfVar6 = pfVar6 + 3;
    iVar7 = iVar7 + 1;
    bVar2 = bVar2 & bVar5;
    bVar9 = bVar9 | bVar5;
  } while (iVar7 < 3);
  if (bVar9 == 0) {
    _DAT_01c2231c = 3;
    if (triangle_vertices != (CVector3f *)&DAT_01c22320) {
      _DAT_01c22320 = *(uint *)triangle_vertices;
      _DAT_01c22328 = *(uint *)&triangle_vertices->field_0x8;
      _DAT_01c22324 = *(uint *)&triangle_vertices->field_0x4;
    }
    if (triangle_vertices + 1 != (CVector3f *)&DAT_01c2232c) {
      _DAT_01c2232c = *(uint *)(triangle_vertices + 1);
      _DAT_01c22334 = *(uint *)&triangle_vertices[1].field_0x8;
      _DAT_01c22330 = *(uint *)&triangle_vertices[1].field_0x4;
    }
    if (triangle_vertices + 2 != (CVector3f *)&DAT_01c22338) {
      _DAT_01c22338 = *(uint *)(triangle_vertices + 2);
      _DAT_01c22340 = *(uint *)&triangle_vertices[2].field_0x8;
      _DAT_01c2233c = *(uint *)&triangle_vertices[2].field_0x4;
    }
    return 1;
  }
  if (bVar2 == 0) {
    fVar1 = *(float *)&bounds_max->field_0x4;
    iVar7 = 0;
    puVar8 = (uint *)&DAT_01c21e88;
    _DAT_01c21f48 = 0;
    _DAT_01c2200c = 0;
    _DAT_01c220d0 = 0;
    _DAT_01c22194 = 0;
    _DAT_01c22258 = 0;
    _DAT_01c2231c = 0;
    do {
      uVar3 = iVar7 + 1;
      if (uVar3 == _DAT_01c21e84) {
        uVar3 = uVar3 ^ _DAT_01c21e84;
      }
      bVar2 = fVar1 < (float)puVar8[1];
      if (fVar1 < *(float *)(&DAT_01c21e8c + uVar3 * 0xc)) {
        bVar2 = bVar2 | 2;
      }
      switch(bVar2) {
      case 0:
        iVar4 = _DAT_01c21f48 * 0xc;
        if ((uint *)(&DAT_01c21f4c + iVar4) != puVar8) {
          *(uint *)(&DAT_01c21f4c + iVar4) = *puVar8;
          *(uint *)(&DAT_01c21f50 + iVar4) = puVar8[1];
          *(uint *)(&DAT_01c21f54 + iVar4) = puVar8[2];
        }
        _DAT_01c21f48 = _DAT_01c21f48 + 1;
        break;
      case 1:
        core_dtri_cpp_clipLineToPlane_FUN_00478900
                  (&DAT_01c21e88 + uVar3 * 0xc,puVar8,&DAT_01c21f4c + _DAT_01c21f48 * 0xc,0,0,0,
                   0x3ff00000,0,0,(double)-fVar1);
        _DAT_01c21f48 = _DAT_01c21f48 + 1;
        break;
      case 2:
        iVar4 = _DAT_01c21f48 * 0xc;
        if ((uint *)(&DAT_01c21f4c + iVar4) != puVar8) {
          *(uint *)(&DAT_01c21f4c + iVar4) = *puVar8;
          *(uint *)(&DAT_01c21f50 + iVar4) = puVar8[1];
          *(uint *)(&DAT_01c21f54 + iVar4) = puVar8[2];
        }
        _DAT_01c21f48 = _DAT_01c21f48 + 1;
        core_dtri_cpp_clipLineToPlane_FUN_00478900
                  (puVar8,&DAT_01c21e88 + uVar3 * 0xc,&DAT_01c21f4c + _DAT_01c21f48 * 0xc,0,0,0,
                   0x3ff00000,0,0,(double)-fVar1);
        _DAT_01c21f48 = _DAT_01c21f48 + 1;
      }
      iVar7 = iVar7 + 1;
      puVar8 = puVar8 + 3;
    } while (iVar7 < (int)_DAT_01c21e84);
    if (2 < (int)_DAT_01c21f48) {
      fVar1 = *(float *)&bounds_min->field_0x4;
      iVar7 = 0;
      if (0 < (int)_DAT_01c21f48) {
        puVar8 = (uint *)&DAT_01c21f4c;
        do {
          uVar3 = iVar7 + 1;
          if (uVar3 == _DAT_01c21f48) {
            uVar3 = uVar3 ^ _DAT_01c21f48;
          }
          bVar2 = (float)puVar8[1] < fVar1;
          if (*(float *)(&DAT_01c21f50 + uVar3 * 0xc) < fVar1) {
            bVar2 = bVar2 | 2;
          }
          switch(bVar2) {
          case 0:
            iVar4 = _DAT_01c2200c * 0xc;
            if ((uint *)(&DAT_01c22010 + iVar4) != puVar8) {
              *(uint *)(&DAT_01c22010 + iVar4) = *puVar8;
              *(uint *)(&DAT_01c22014 + iVar4) = puVar8[1];
              *(uint *)(&DAT_01c22018 + iVar4) = puVar8[2];
            }
            _DAT_01c2200c = _DAT_01c2200c + 1;
            break;
          case 1:
            core_dtri_cpp_clipLineToPlane_FUN_00478900
                      (&DAT_01c21f4c + uVar3 * 0xc,puVar8,&DAT_01c22010 + _DAT_01c2200c * 0xc,0,0,0,
                       0xbff00000,0,0,(double)fVar1);
            _DAT_01c2200c = _DAT_01c2200c + 1;
            break;
          case 2:
            iVar4 = _DAT_01c2200c * 0xc;
            if ((uint *)(&DAT_01c22010 + iVar4) != puVar8) {
              *(uint *)(&DAT_01c22010 + iVar4) = *puVar8;
              *(uint *)(&DAT_01c22014 + iVar4) = puVar8[1];
              *(uint *)(&DAT_01c22018 + iVar4) = puVar8[2];
            }
            _DAT_01c2200c = _DAT_01c2200c + 1;
            core_dtri_cpp_clipLineToPlane_FUN_00478900
                      (puVar8,&DAT_01c21f4c + uVar3 * 0xc,&DAT_01c22010 + _DAT_01c2200c * 0xc,0,0,0,
                       0xbff00000,0,0,(double)fVar1);
            _DAT_01c2200c = _DAT_01c2200c + 1;
          }
          iVar7 = iVar7 + 1;
          puVar8 = puVar8 + 3;
        } while (iVar7 < (int)_DAT_01c21f48);
      }
      if (2 < (int)_DAT_01c2200c) {
        fVar1 = *(float *)bounds_max;
        iVar7 = 0;
        if (0 < (int)_DAT_01c2200c) {
          pfVar6 = (float *)&DAT_01c22010;
          do {
            uVar3 = iVar7 + 1;
            if (uVar3 == _DAT_01c2200c) {
              uVar3 = uVar3 ^ _DAT_01c2200c;
            }
            pfVar10 = (float *)(&DAT_01c22010 + uVar3 * 0xc);
            bVar2 = fVar1 < *pfVar6;
            if (fVar1 < *pfVar10) {
              bVar2 = bVar2 | 2;
            }
            switch(bVar2) {
            case 0:
              iVar4 = _DAT_01c220d0 * 0xc;
              if ((float *)(&DAT_01c220d4 + iVar4) != pfVar6) {
                *(float *)(&DAT_01c220d4 + iVar4) = *pfVar6;
                *(float *)(&DAT_01c220d8 + iVar4) = pfVar6[1];
                *(float *)(&DAT_01c220dc + iVar4) = pfVar6[2];
              }
              _DAT_01c220d0 = _DAT_01c220d0 + 1;
              break;
            case 1:
              core_dtri_cpp_clipLineToPlane_FUN_00478900
                        (pfVar10,pfVar6,&DAT_01c220d4 + _DAT_01c220d0 * 0xc,0,0x3ff00000,0,0,0,0,
                         (double)-fVar1);
              _DAT_01c220d0 = _DAT_01c220d0 + 1;
              break;
            case 2:
              iVar4 = _DAT_01c220d0 * 0xc;
              if ((float *)(&DAT_01c220d4 + iVar4) != pfVar6) {
                *(float *)(&DAT_01c220d4 + iVar4) = *pfVar6;
                *(float *)(&DAT_01c220d8 + iVar4) = pfVar6[1];
                *(float *)(&DAT_01c220dc + iVar4) = pfVar6[2];
              }
              _DAT_01c220d0 = _DAT_01c220d0 + 1;
              core_dtri_cpp_clipLineToPlane_FUN_00478900
                        (pfVar6,pfVar10,&DAT_01c220d4 + _DAT_01c220d0 * 0xc,0,0x3ff00000,0,0,0,0,
                         (double)-fVar1);
              _DAT_01c220d0 = _DAT_01c220d0 + 1;
            }
            iVar7 = iVar7 + 1;
            pfVar6 = pfVar6 + 3;
          } while (iVar7 < (int)_DAT_01c2200c);
        }
        if (2 < (int)_DAT_01c220d0) {
          fVar1 = *(float *)bounds_min;
          iVar7 = 0;
          if (0 < (int)_DAT_01c220d0) {
            pfVar6 = (float *)&DAT_01c220d4;
            do {
              uVar3 = iVar7 + 1;
              if (uVar3 == _DAT_01c220d0) {
                uVar3 = uVar3 ^ _DAT_01c220d0;
              }
              pfVar10 = (float *)(&DAT_01c220d4 + uVar3 * 0xc);
              bVar2 = *pfVar6 < fVar1;
              if (*pfVar10 < fVar1) {
                bVar2 = bVar2 | 2;
              }
              switch(bVar2) {
              case 0:
                iVar4 = _DAT_01c22194 * 0xc;
                if ((float *)(&DAT_01c22198 + iVar4) != pfVar6) {
                  *(float *)(&DAT_01c22198 + iVar4) = *pfVar6;
                  *(float *)(&DAT_01c2219c + iVar4) = pfVar6[1];
                  *(float *)(&DAT_01c221a0 + iVar4) = pfVar6[2];
                }
                _DAT_01c22194 = _DAT_01c22194 + 1;
                break;
              case 1:
                core_dtri_cpp_clipLineToPlane_FUN_00478900
                          (pfVar10,pfVar6,&DAT_01c22198 + _DAT_01c22194 * 0xc,0,0xbff00000,0,0,0,0,
                           (double)fVar1);
                _DAT_01c22194 = _DAT_01c22194 + 1;
                break;
              case 2:
                iVar4 = _DAT_01c22194 * 0xc;
                if ((float *)(&DAT_01c22198 + iVar4) != pfVar6) {
                  *(float *)(&DAT_01c22198 + iVar4) = *pfVar6;
                  *(float *)(&DAT_01c2219c + iVar4) = pfVar6[1];
                  *(float *)(&DAT_01c221a0 + iVar4) = pfVar6[2];
                }
                _DAT_01c22194 = _DAT_01c22194 + 1;
                core_dtri_cpp_clipLineToPlane_FUN_00478900
                          (pfVar6,pfVar10,&DAT_01c22198 + _DAT_01c22194 * 0xc,0,0xbff00000,0,0,0,0,
                           (double)fVar1);
                _DAT_01c22194 = _DAT_01c22194 + 1;
              }
              iVar7 = iVar7 + 1;
              pfVar6 = pfVar6 + 3;
            } while (iVar7 < (int)_DAT_01c220d0);
          }
          if (2 < (int)_DAT_01c22194) {
            fVar1 = *(float *)&bounds_min->field_0x8;
            iVar7 = 0;
            if (0 < (int)_DAT_01c22194) {
              puVar8 = (uint *)&DAT_01c22198;
              do {
                uVar3 = iVar7 + 1;
                if (uVar3 == _DAT_01c22194) {
                  uVar3 = uVar3 ^ _DAT_01c22194;
                }
                bVar2 = (float)puVar8[2] < fVar1;
                if (*(float *)(&DAT_01c221a0 + uVar3 * 0xc) < fVar1) {
                  bVar2 = bVar2 | 2;
                }
                switch(bVar2) {
                case 0:
                  iVar4 = _DAT_01c22258 * 0xc;
                  if ((uint *)(&DAT_01c2225c + iVar4) != puVar8) {
                    *(uint *)(&DAT_01c2225c + iVar4) = *puVar8;
                    *(uint *)(&DAT_01c22260 + iVar4) = puVar8[1];
                    *(uint *)(&DAT_01c22264 + iVar4) = puVar8[2];
                  }
                  _DAT_01c22258 = _DAT_01c22258 + 1;
                  break;
                case 1:
                  core_dtri_cpp_clipLineToPlane_FUN_00478900
                            (&DAT_01c22198 + uVar3 * 0xc,puVar8,&DAT_01c2225c + _DAT_01c22258 * 0xc,
                             0,0,0,0,0,0xbff00000,(double)fVar1);
                  _DAT_01c22258 = _DAT_01c22258 + 1;
                  break;
                case 2:
                  iVar4 = _DAT_01c22258 * 0xc;
                  if ((uint *)(&DAT_01c2225c + iVar4) != puVar8) {
                    *(uint *)(&DAT_01c2225c + iVar4) = *puVar8;
                    *(uint *)(&DAT_01c22260 + iVar4) = puVar8[1];
                    *(uint *)(&DAT_01c22264 + iVar4) = puVar8[2];
                  }
                  _DAT_01c22258 = _DAT_01c22258 + 1;
                  core_dtri_cpp_clipLineToPlane_FUN_00478900
                            (puVar8,&DAT_01c22198 + uVar3 * 0xc,&DAT_01c2225c + _DAT_01c22258 * 0xc,
                             0,0,0,0,0,0xbff00000,(double)fVar1);
                  _DAT_01c22258 = _DAT_01c22258 + 1;
                }
                iVar7 = iVar7 + 1;
                puVar8 = puVar8 + 3;
              } while (iVar7 < (int)_DAT_01c22194);
            }
            if (2 < (int)_DAT_01c22258) {
              fVar1 = *(float *)&bounds_max->field_0x8;
              iVar7 = 0;
              if (0 < (int)_DAT_01c22258) {
                puVar8 = (uint *)&DAT_01c2225c;
                do {
                  uVar3 = iVar7 + 1;
                  if (uVar3 == _DAT_01c22258) {
                    uVar3 = uVar3 ^ _DAT_01c22258;
                  }
                  bVar2 = fVar1 < (float)puVar8[2];
                  if (fVar1 < *(float *)(&DAT_01c22264 + uVar3 * 0xc)) {
                    bVar2 = bVar2 | 2;
                  }
                  switch(bVar2) {
                  case 0:
                    iVar4 = _DAT_01c2231c * 0xc;
                    if ((uint *)(&DAT_01c22320 + iVar4) != puVar8) {
                      *(uint *)(&DAT_01c22320 + iVar4) = *puVar8;
                      *(uint *)(&DAT_01c22324 + iVar4) = puVar8[1];
                      *(uint *)(&DAT_01c22328 + iVar4) = puVar8[2];
                    }
                    _DAT_01c2231c = _DAT_01c2231c + 1;
                    break;
                  case 1:
                    core_dtri_cpp_clipLineToPlane_FUN_00478900
                              (&DAT_01c2225c + uVar3 * 0xc,puVar8,
                               &DAT_01c22320 + _DAT_01c2231c * 0xc,0,0,0,0,0,0xbff00000,
                               (double)fVar1);
                    _DAT_01c2231c = _DAT_01c2231c + 1;
                    break;
                  case 2:
                    iVar4 = _DAT_01c2231c * 0xc;
                    if ((uint *)(&DAT_01c22320 + iVar4) != puVar8) {
                      *(uint *)(&DAT_01c22320 + iVar4) = *puVar8;
                      *(uint *)(&DAT_01c22324 + iVar4) = puVar8[1];
                      *(uint *)(&DAT_01c22328 + iVar4) = puVar8[2];
                    }
                    _DAT_01c2231c = _DAT_01c2231c + 1;
                    core_dtri_cpp_clipLineToPlane_FUN_00478900
                              (puVar8,&DAT_01c2225c + uVar3 * 0xc,
                               &DAT_01c22320 + _DAT_01c2231c * 0xc,0,0,0,0,0,0xbff00000,
                               (double)fVar1);
                    _DAT_01c2231c = _DAT_01c2231c + 1;
                  }
                  iVar7 = iVar7 + 1;
                  puVar8 = puVar8 + 3;
                } while (iVar7 < (int)_DAT_01c22258);
              }
              if (2 < _DAT_01c2231c) {
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
