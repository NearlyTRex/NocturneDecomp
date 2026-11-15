// Name: core_dtrace.cpp_CDemonRaytrace_cylinderGroundCheck_FUN_00473b20
// Address: 00473b20
// Address Range: [[00473b20, 00473d37]]
// Convention: __cdecl
// Signature: float __cdecl core_dtrace_cpp_CDemonRaytrace_cylinderGroundCheck_FUN_00473b20(CDemonRaytrace *this_ptr,CVector3f *pos,float radius,int *hit_flag,CVector3f *normal_out)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl core_dtrace_cpp_CDemonRaytrace_cylinderGroundCheck_FUN_00473b20(CDemonRaytrace *this_ptr,CVector3f *pos,float radius,int *hit_flag,CVector3f *normal_out)

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
  float *unaff_EBX;
  int grid_z;
  float *unaff_ESI;
  float fVar9;
  float unaff_EDI;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  CVector3f CStack_7c;
  uint uStack_70;
  float fStack_6c;
  uint uStack_68;
  CVector3f local_64;
  CVector3f local_58;
  float local_4c;
  float local_48;
  float local_44;
  int local_40;
  float local_3c;
  float local_38;
  int local_34;
  float local_30;
  int local_2c;
  int local_20;
  
  local_4c = pos->x;
  local_44 = pos->z;
  local_48 = pos->y + _DAT_005d1b63;
  local_58.x = pos->x;
  local_58.z = pos->z;
  fVar9 = 1.0 / (this_ptr->cell_size).y;
  local_3c = local_4c - (this_ptr->bbox_min).x;
  fVar1 = local_3c - radius;
  fVar3 = 1.0 / (this_ptr->cell_size).x;
  local_58.y = pos->y + _DAT_005d1b67;
  local_38 = local_44 - (this_ptr->bbox_min).z;
  local_30 = 1.0 / (this_ptr->cell_size).z;
  fVar5 = local_58.y - (this_ptr->bbox_min).y;
  fVar4 = (local_38 - radius) * local_30;
  fVar2 = local_3c + radius;
  fVar6 = (local_38 + radius) * local_30;
  bVar7 = false;
  uStack_68 = 0x473bde;
  dVar10 = round((double)((local_48 - (this_ptr->bbox_min).y) * fVar9));
  fStack_6c = 6.541806e-39;
  dVar11 = round((double)(fVar5 * fVar9));
  local_48 = -1e+30;
  uStack_70 = 0x473c04;
  local_30 = (float)(int)ROUND(dVar11);
  local_20 = (int)ROUND(dVar10);
  dVar12 = round((double)(fVar1 * fVar3));
  CStack_7c.z = 6.54186e-39;
  dVar13 = round((double)fVar4);
  CStack_7c.y = 6.54187e-39;
  dVar14 = round((double)(fVar2 * fVar3));
  CStack_7c.x = 6.541879e-39;
  dVar15 = round((double)fVar6);
  local_3c = (float)(int)ROUND(dVar12);
  local_34 = (int)ROUND(dVar13);
  local_38 = (float)(int)ROUND(dVar14);
  local_2c = (int)ROUND(dVar15);
  if ((int)ROUND(dVar11) <= (int)ROUND(dVar10)) {
    do {
      fVar9 = local_3c;
      if ((int)local_3c <= (int)local_38) {
        do {
          grid_z = local_34;
          if (local_34 <= local_2c) {
            do {
              this_ptr_00 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_00472af0
                                      (this_ptr,(int)fVar9,(int)local_30,grid_z);
              if (this_ptr_00 != (CDemonCube *)0x0) {
                iVar8 = core_dcube_cpp_CDemonCube_testCylinderGroundCollision_FUN_00446df0
                                  (this_ptr_00,&local_64,unaff_EDI,&local_58,&CStack_7c,
                                   (uint *)&local_4c);
                if (iVar8 != 0) {
                  bVar7 = true;
                }
              }
              grid_z = grid_z + 1;
            } while (grid_z <= local_2c);
          }
          fVar9 = (float)((int)fVar9 + 1);
        } while ((int)fVar9 <= (int)local_38);
      }
      if (bVar7) {
        if ((unaff_EBX != (float *)0x0) && (&CStack_7c != (CVector3f *)unaff_EBX)) {
          *unaff_EBX = CStack_7c.x;
          unaff_EBX[1] = CStack_7c.y;
          unaff_EBX[2] = CStack_7c.z;
        }
        if (unaff_ESI != (float *)0x0) {
          *unaff_ESI = local_4c;
        }
        return local_58.x;
      }
      local_30 = (float)((int)local_30 + -1);
    } while (local_40 <= (int)local_30);
  }
  if (unaff_ESI != (float *)0x0) {
    *unaff_ESI = 1.4013e-45;
  }
  if (unaff_EBX != (float *)0x0) {
    unaff_EBX[1] = 1.0;
    unaff_EBX[2] = 0.0;
    *unaff_EBX = 0.0;
  }
  return fStack_6c;
}
