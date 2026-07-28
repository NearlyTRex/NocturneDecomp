// Name: core_mirror.cpp_clipPolygonAgainstPlane_FUN_004d6420
// Address: 004d6420
// Address Range: [[004d6420, 004d6548]]
// Convention: unknown
// Signature: void core_mirror_cpp_clipPolygonAgainstPlane_FUN_004d6420(SClipPlane *param_1,CVector3f *param_2,uint param_3,int param_4,int *param_5)

#include "nocturne.h"

void core_mirror_cpp_clipPolygonAgainstPlane_FUN_004d6420(SClipPlane *param_1,CVector3f *param_2,uint param_3,int param_4,int *param_5)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  CVector3f *pCVar4;
  CVector3f *pCVar5;
  CVector3f *vertex_a;
  int local_14;
  
  *param_5 = 0;
  local_14 = 0;
  vertex_a = param_2;
  if (0 < (int)param_3) {
    do {
      uVar3 = local_14 + 1;
      if (uVar3 == param_3) {
        uVar3 = uVar3 ^ param_3;
      }
      pCVar4 = param_2 + uVar3;
      bVar2 = 0.0 < (param_1->C).f * vertex_a->z +
                    (param_1->A).f * vertex_a->x + (param_1->B).f * vertex_a->y + (param_1->D).f;
      if (0.0 < (param_1->C).f * pCVar4->z + (param_1->A).f * pCVar4->x + (param_1->B).f * pCVar4->y
                + (param_1->D).f) {
        bVar2 = bVar2 | 2;
      }
      switch(bVar2) {
      case 0:
        pCVar4 = (CVector3f *)(*param_5 * 0xc + param_4);
        if (pCVar4 != vertex_a) {
          pCVar4->x = vertex_a->x;
          pCVar4->y = vertex_a->y;
          pCVar4->z = vertex_a->z;
        }
        *param_5 = *param_5 + 1;
        break;
      case 1:
        core_mirror_cpp_computePlaneIntersection_FUN_004d62f0
                  (param_1,pCVar4,vertex_a,(CVector3f *)(*param_5 * 0xc + param_4));
        *param_5 = *param_5 + 1;
        break;
      case 2:
        pCVar5 = (CVector3f *)(*param_5 * 0xc + param_4);
        if (pCVar5 != vertex_a) {
          pCVar5->x = vertex_a->x;
          pCVar5->y = vertex_a->y;
          pCVar5->z = vertex_a->z;
        }
        iVar1 = *param_5;
        *param_5 = iVar1 + 1;
        core_mirror_cpp_computePlaneIntersection_FUN_004d62f0
                  (param_1,vertex_a,pCVar4,(CVector3f *)((iVar1 + 1) * 0xc + param_4));
        *param_5 = *param_5 + 1;
      }
      local_14 = local_14 + 1;
      vertex_a = vertex_a + 1;
    } while (local_14 < (int)param_3);
  }
  return;
}
