// Name: core_box.cpp_CBoundingBox3D_computeFromPoints_FUN_0041d9d0
// Address: 0041d9d0
// Address Range: [[0041d9d0, 0041da9f]]
// Convention: __cdecl
// Signature: void __cdecl core_box_cpp_CBoundingBox3D_computeFromPoints_FUN_0041d9d0(CBoundingBox3D *this_ptr,int point_count,CVector3f *points)

#include "nocturne.h"

void __cdecl core_box_cpp_CBoundingBox3D_computeFromPoints_FUN_0041d9d0(CBoundingBox3D *this_ptr,int point_count,CVector3f *points)

{
  CVector3f *pCVar1;
  int iVar2;
  
  pCVar1 = &this_ptr->max;
  if (pCVar1 != points) {
    pCVar1->x = points->x;
    (this_ptr->max).y = points->y;
    (this_ptr->max).z = points->z;
  }
  if (this_ptr != (CBoundingBox3D *)pCVar1) {
    (this_ptr->min).x = pCVar1->x;
    (this_ptr->min).y = (this_ptr->max).y;
    (this_ptr->min).z = (this_ptr->max).z;
  }
  iVar2 = 1;
  if (1 < point_count) {
    pCVar1 = points + 1;
    do {
      while( true ) {
        if (pCVar1->x < (this_ptr->min).x) {
          (this_ptr->min).x = pCVar1->x;
        }
        else if ((this_ptr->max).x < pCVar1->x) {
          (this_ptr->max).x = pCVar1->x;
        }
        if ((this_ptr->min).y <= pCVar1->y) {
          if ((this_ptr->max).y < pCVar1->y) {
            (this_ptr->max).y = pCVar1->y;
          }
        }
        else {
          (this_ptr->min).y = pCVar1->y;
        }
        if (pCVar1->z < (this_ptr->min).z) break;
        if (pCVar1->z <= (this_ptr->max).z) goto LAB_0041da48;
        (this_ptr->max).z = pCVar1->z;
        iVar2 = iVar2 + 1;
        pCVar1 = pCVar1 + 1;
        if (point_count <= iVar2) {
          return;
        }
      }
      (this_ptr->min).z = pCVar1->z;
LAB_0041da48:
      iVar2 = iVar2 + 1;
      pCVar1 = pCVar1 + 1;
    } while (iVar2 < point_count);
  }
  return;
}
