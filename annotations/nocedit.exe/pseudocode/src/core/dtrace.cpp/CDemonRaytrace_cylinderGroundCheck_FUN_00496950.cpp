// Name: core_dtrace.cpp_CDemonRaytrace_cylinderGroundCheck_FUN_00496950
// Address: 00496950
// Address Range: [[00496950, 00496b81]]
// Convention: __cdecl
// Signature: float __cdecl core_dtrace_cpp_CDemonRaytrace_cylinderGroundCheck_FUN_00496950(CDemonRaytrace *this_ptr,CVector3f *pos,float radius,int *hit_flag,CVector3f *normal_out)

#include "nocturne.h"

float __cdecl core_dtrace_cpp_CDemonRaytrace_cylinderGroundCheck_FUN_00496950(CDemonRaytrace *this_ptr,CVector3f *pos,float radius,int *hit_flag,CVector3f *normal_out)

{
  float fVar1;
  bool bVar2;
  CDemonCube *this_ptr_00;
  int iVar3;
  CVector3f *unaff_EBX;
  float fVar4;
  float *unaff_ESI;
  int grid_x;
  float unaff_EDI;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  double dVar10;
  double dVar11;
  double dVar12;
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
  fVar4 = 1.0 / (this_ptr->cell_size).y;
  fVar5 = (float10)local_54.z - (float10)(this_ptr->bbox_min).x;
  local_38 = (float)fVar5;
  fVar6 = (float10)1 / (float10)(this_ptr->cell_size).x;
  local_34 = local_44 - (this_ptr->bbox_min).z;
  local_2c = 1.0 / (this_ptr->cell_size).z;
  fVar7 = ((float10)local_64.y - (float10)(this_ptr->bbox_min).y) * (float10)fVar4;
  fVar5 = (fVar5 - (float10)radius) * fVar6;
  fVar1 = (local_34 - radius) * local_2c;
  fVar6 = ((float10)local_38 + (float10)radius) * fVar6;
  fVar8 = ((float10)local_34 + (float10)radius) * (float10)local_2c;
  bVar2 = false;
  CStack_70.z = 6.742069e-39;
  dVar10 = round((double)((local_48 - (this_ptr->bbox_min).y) * fVar4));
  fVar9 = (float10)dVar10;
  CStack_70.y = 6.742079e-39;
  dVar10 = round((double)fVar7);
  local_44 = -1e+30;
  CStack_70.x = 6.742122e-39;
  local_2c = (float)(int)ROUND(dVar10);
  local_20 = (int)ROUND(fVar9);
  dVar11 = round((double)fVar5);
  dVar12 = round((double)fVar1);
  fVar5 = (float10)dVar12;
  dVar12 = round((double)fVar6);
  fVar6 = (float10)dVar12;
  dVar12 = round((double)fVar8);
  iStack_58 = (int)ROUND(dVar11);
  local_34 = (float)(int)ROUND(fVar5);
  local_38 = (float)(int)ROUND(fVar6);
  local_2c = (float)(int)ROUND(dVar12);
  if ((int)ROUND(dVar10) <= (int)ROUND(fVar9)) {
    do {
      grid_x = iStack_58;
      if (iStack_58 <= (int)local_38) {
        do {
          fVar4 = local_34;
          if ((int)local_34 <= (int)local_2c) {
            do {
              this_ptr_00 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
                                      (this_ptr,grid_x,local_30,(int)fVar4);
              if (this_ptr_00 != (CDemonCube *)0x0) {
                iVar3 = core_dcube_cpp_CDemonCube_testCylinderGroundCollision_FUN_00457b60
                                  (this_ptr_00,&local_64,unaff_EDI,&local_54,&CStack_70,
                                   (uint *)&local_48);
                if (iVar3 != 0) {
                  bVar2 = true;
                }
              }
              fVar4 = (float)((int)fVar4 + 1);
            } while ((int)fVar4 <= (int)local_2c);
          }
          grid_x = grid_x + 1;
        } while (grid_x <= (int)local_38);
      }
      if (bVar2) {
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
