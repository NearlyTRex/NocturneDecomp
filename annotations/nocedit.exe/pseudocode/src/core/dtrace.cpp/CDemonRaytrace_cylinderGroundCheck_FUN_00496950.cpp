// Name: core_dtrace.cpp_CDemonRaytrace_cylinderGroundCheck_FUN_00496950
// Address: 00496950
// Address Range: [[00496950, 00496b81]]
// Convention: __cdecl
// Signature: float __cdecl core_dtrace_cpp_CDemonRaytrace_cylinderGroundCheck_FUN_00496950(CDemonRaytrace *this_ptr,CVector3f *pos,float radius,int *hit_flag,CVector3f *normal_out)

#include "nocturne.h"

float __cdecl core_dtrace_cpp_CDemonRaytrace_cylinderGroundCheck_FUN_00496950(CDemonRaytrace *this_ptr,CVector3f *pos,float radius,int *hit_flag,CVector3f *normal_out)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  CDemonCube *this_ptr_00;
  int iVar8;
  CVector3f *unaff_EBX;
  float fVar9;
  float *unaff_ESI;
  int grid_x;
  float unaff_EDI;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  CVector3f CStack_70;
  CVector3f local_64;
  int iStack_58;
  CVector3f local_54;
  float local_48;
  float local_44;
  int local_3c;
  float local_38;
  float local_34;
  int local_30;
  float local_2c;
  int local_20;
  
  local_54.z = pos->x;
  local_44 = pos->z;
  local_64.x = pos->x;
  local_48 = pos->y + 2.0f;
  local_64.z = pos->z;
  local_64.y = pos->y + -10.0f;
  fVar9 = 1.0 / (this_ptr->cell_size).y;
  local_38 = local_54.z - (this_ptr->bbox_min).x;
  fVar1 = local_38 - radius;
  fVar3 = 1.0 / (this_ptr->cell_size).x;
  local_34 = local_44 - (this_ptr->bbox_min).z;
  local_2c = 1.0 / (this_ptr->cell_size).z;
  fVar5 = local_64.y - (this_ptr->bbox_min).y;
  fVar4 = (local_34 - radius) * local_2c;
  fVar2 = local_38 + radius;
  fVar6 = (local_34 + radius) * local_2c;
  bVar7 = false;
  CStack_70.z = 6.742069e-39;
  dVar10 = round((double)((local_48 - (this_ptr->bbox_min).y) * fVar9));
  CStack_70.y = 6.742079e-39;
  dVar11 = round((double)(fVar5 * fVar9));
  local_44 = -1e+30;
  CStack_70.x = 6.742122e-39;
  local_2c = (float)(int)ROUND(dVar11);
  local_20 = (int)ROUND(dVar10);
  dVar12 = round((double)(fVar1 * fVar3));
  dVar13 = round((double)fVar4);
  dVar14 = round((double)(fVar2 * fVar3));
  dVar15 = round((double)fVar6);
  iStack_58 = (int)ROUND(dVar12);
  local_34 = (float)(int)ROUND(dVar13);
  local_38 = (float)(int)ROUND(dVar14);
  local_2c = (float)(int)ROUND(dVar15);
  if ((int)ROUND(dVar11) <= (int)ROUND(dVar10)) {
    do {
      grid_x = iStack_58;
      if (iStack_58 <= (int)local_38) {
        do {
          fVar9 = local_34;
          if ((int)local_34 <= (int)local_2c) {
            do {
              this_ptr_00 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
                                      (this_ptr,grid_x,local_30,(int)fVar9);
              if (this_ptr_00 != (CDemonCube *)0x0) {
                iVar8 = core_dcube_cpp_CDemonCube_testCylinderGroundCollision_FUN_00457b60
                                  (this_ptr_00,&local_64,unaff_EDI,&local_54,&CStack_70,
                                   (uint *)&local_48);
                if (iVar8 != 0) {
                  bVar7 = true;
                }
              }
              fVar9 = (float)((int)fVar9 + 1);
            } while ((int)fVar9 <= (int)local_2c);
          }
          grid_x = grid_x + 1;
        } while (grid_x <= (int)local_38);
      }
      if (bVar7) {
        if ((unaff_EBX != (CVector3f *)0x0) && (&CStack_70 != unaff_EBX)) {
          unaff_EBX->x = CStack_70.x;
          unaff_EBX->y = CStack_70.y;
          unaff_EBX->z = CStack_70.z;
        }
        if (unaff_ESI != (float *)0x0) {
          *unaff_ESI = local_48;
        }
        return local_54.x;
      }
      local_30 = local_30 + -1;
    } while (local_3c <= local_30);
  }
  if (unaff_ESI != (float *)0x0) {
    *unaff_ESI = 1.4013e-45;
  }
  if (unaff_EBX != (CVector3f *)0x0) {
    unaff_EBX->y = 1.0;
    unaff_EBX->z = 0.0;
    unaff_EBX->x = 0.0;
  }
  return 6.742142e-39;
}
