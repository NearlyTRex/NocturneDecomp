// Name: core_dtrace.cpp_CDemonRaytrace_cylinderGroundCheck_FUN_00496950
// Address: 00496950
// Address Range: [[00496950, 00496b81]]
// Convention: __cdecl
// Signature: float core_dtrace.cpp_CDemonRaytrace_cylinderGroundCheck_FUN_00496950(CDemonRaytrace * this_ptr, CVector3f * pos, float radius, int * hit_flag, CVector3f * normal_out)

#include "nocturne.h"

float __cdecl
core_dtrace_cpp_CDemonRaytrace_cylinderGroundCheck_FUN_00496950
          (CDemonRaytrace *this_ptr,CVector3f *pos,float radius,int *hit_flag,CVector3f *normal_out)

{
  bool bVar1;
  CDemonCube *this_ptr_00;
  int iVar2;
  uint *unaff_EBX;
  float fVar3;
  BADSPACEBASE *in_ESP;
  float *unaff_ESI;
  float fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  uint uStack_70;
  CVector3f CStack_6c;
  CVector3f local_60;
  float local_54;
  CVector3f local_50;
  float local_44 [2];
  int local_3c;
  float local_38;
  float local_34;
  int local_30;
  float local_2c;
  int local_20;
  
  local_50.y = pos->x;
  local_44[0] = pos->z;
  CStack_6c.z = pos->x;
  local_50.z = pos->y + 2f;
  local_60.y = pos->z;
  local_60.x = pos->y + -10f;
  fVar4 = 1.0 / (this_ptr->cell_size).y;
  fVar5 = (float10)local_50.y - (float10)(this_ptr->bbox_min).x;
  local_38 = (float)fVar5;
  fVar6 = (float10)1 / (float10)(this_ptr->cell_size).x;
  local_34 = local_44[0] - (this_ptr->bbox_min).z;
  local_2c = 1.0 / (this_ptr->cell_size).z;
  fVar7 = ((float10)local_60.x - (float10)(this_ptr->bbox_min).y) * (float10)fVar4;
  fVar5 = (fVar5 - (float10)radius) * fVar6;
  fVar3 = (local_34 - radius) * local_2c;
  fVar6 = ((float10)local_38 + (float10)radius) * fVar6;
  fVar8 = ((float10)local_34 + (float10)radius) * (float10)local_2c;
  bVar1 = false;
  CStack_6c.y = 6.742069e-39;
  dVar10 = crt_math_c_round_FUN_005fe6b0((double)((local_50.z - (this_ptr->bbox_min).y) * fVar4));
  fVar9 = (float10)dVar10;
  CStack_6c.x = 6.742079e-39;
  dVar10 = crt_math_c_round_FUN_005fe6b0((double)fVar7);
  local_44[0] = -1e+30;
  uStack_70 = 0x496a4b;
  local_2c = (float)(int)ROUND(dVar10);
  local_20 = (int)ROUND(fVar9);
  dVar11 = crt_math_c_round_FUN_005fe6b0((double)fVar5);
  dVar12 = crt_math_c_round_FUN_005fe6b0((double)fVar3);
  fVar5 = (float10)dVar12;
  dVar12 = crt_math_c_round_FUN_005fe6b0((double)fVar6);
  fVar6 = (float10)dVar12;
  dVar12 = crt_math_c_round_FUN_005fe6b0((double)fVar8);
  local_60.z = (float)(int)ROUND(dVar11);
  local_34 = (float)(int)ROUND(fVar5);
  local_38 = (float)(int)ROUND(fVar6);
  local_2c = (float)(int)ROUND(dVar12);
  if ((int)ROUND(dVar10) <= (int)ROUND(fVar9)) {
    do {
      fVar4 = local_60.z;
      if ((int)local_60.z <= (int)local_38) {
        do {
          fVar3 = local_34;
          if ((int)local_34 <= (int)local_2c) {
            do {
              this_ptr_00 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
                                      (this_ptr,(int)fVar4,local_30,(int)fVar3);
              if (this_ptr_00 != (CDemonCube *)0x0) {
                iVar2 = core_dcube_cpp_CDemonCube_testCylinderGroundCollision_FUN_00457b60
                                  (this_ptr_00,&local_60,(float)unaff_ESI,&local_50,&CStack_6c,
                                   (uint *)local_44);
                if (iVar2 != 0) {
                  bVar1 = true;
                }
              }
              fVar3 = (float)((int)fVar3 + 1);
            } while ((int)fVar3 <= (int)local_2c);
          }
          fVar4 = (float)((int)fVar4 + 1);
        } while ((int)fVar4 <= (int)local_38);
      }
      if (bVar1) {
        if ((unaff_EBX != (uint *)0x0) && (&uStack_70 != unaff_EBX)) {
          *unaff_EBX = uStack_70;
          unaff_EBX[1] = CStack_6c.x;
          unaff_EBX[2] = CStack_6c.y;
        }
        if (unaff_ESI != (float *)0x0) {
          *unaff_ESI = local_50.z;
        }
        return local_54;
      }
      local_30 = local_30 + -1;
    } while (local_3c <= local_30);
  }
  if (unaff_ESI != (float *)0x0) {
    *unaff_ESI = 1.4013e-45;
  }
  if (unaff_EBX != (uint *)0x0) {
    unaff_EBX[1] = 0x3f800000;
    unaff_EBX[2] = 0;
    *unaff_EBX = 0;
  }
  return 6.742142e-39;
}
