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
  float fVar1;
  bool bVar2;
  int grid_z;
  CDemonCube *this_ptr_00;
  int iVar3;
  int extraout_ECX;
  BADSPACEBASE *in_ESP;
  int unaff_EDI;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  double dVar11;
  int unaff_retaddr;
  float *in_stack_00000028;
  uint *in_stack_0000002c;
  uint local_40;
  CVector3f local_3c;
  int local_30;
  float local_2c;
  float local_28;
  float local_24;
  CVector3f local_20;
  uint local_14;
  
  fVar4 = (float10)pos->y + (float10)2f;
  fVar1 = 1.0 / (this_ptr->cell_size).y;
  fVar5 = (float10)pos->x - (float10)(this_ptr->bbox_min).x;
  local_3c.y = (float)fVar5;
  fVar6 = (float10)1 / (float10)(this_ptr->cell_size).x;
  fVar7 = (float10)pos->z - (float10)(this_ptr->bbox_min).z;
  local_3c.z = (float)fVar7;
  local_2c = 1.0 / (this_ptr->cell_size).z;
  fVar8 = (fVar4 - (float10)(this_ptr->bbox_min).y) * (float10)fVar1;
  fVar9 = ((float10)(pos->y + -10f) - (float10)(this_ptr->bbox_min).y) * (float10)fVar1;
  fVar5 = (fVar5 - (float10)radius) * fVar6;
  fVar7 = (fVar7 - (float10)radius) * (float10)local_2c;
  fVar6 = ((float10)local_3c.y + (float10)radius) * fVar6;
  fVar10 = ((float10)local_3c.z + (float10)radius) * (float10)local_2c;
  bVar2 = false;
  dVar11 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(0xf149f2ca,pos->z));
  dVar11 = crt_math_c_round_FUN_005fe6b0(dVar11);
  local_3c.z = (float)((ulonglong)dVar11 >> 0x20);
  local_20.y = (float)(int)ROUND(fVar9);
  dVar11 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(local_3c.z,(int)ROUND(fVar8)));
  dVar11 = crt_math_c_round_FUN_005fe6b0(dVar11);
  dVar11 = crt_math_c_round_FUN_005fe6b0(dVar11);
  dVar11 = crt_math_c_round_FUN_005fe6b0(dVar11);
  local_28 = (float)(int)ROUND(fVar5);
  fVar1 = local_28;
  if (extraout_ECX <= SUB84 /* extract 2-byte value */(dVar11,0)) {
    do {
      for (; grid_z = (int)ROUND(fVar7), (int)fVar1 <= (int)ROUND(fVar6);
          fVar1 = (float)((int)fVar1 + 1)) {
        for (; grid_z <= (int)ROUND(fVar10); grid_z = grid_z + 1) {
          this_ptr_00 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
                                  (this_ptr,(int)fVar1,unaff_retaddr,grid_z);
          if ((this_ptr_00 != (CDemonCube *)0x0) &&
             (iVar3 = core_dcube_cpp_CDemonCube_testCylinderGroundCollision_FUN_00457b60
                                (this_ptr_00,(CVector3f *)&local_30,(float)in_stack_00000028,
                                 &local_20,&local_3c,&local_14), iVar3 != 0)) {
            bVar2 = true;
          }
        }
      }
      if (bVar2) {
        if ((in_stack_0000002c != (uint *)0x0) && (&local_40 != in_stack_0000002c)) {
          *in_stack_0000002c = local_40;
          in_stack_0000002c[1] = local_3c.x;
          in_stack_0000002c[2] = local_3c.y;
        }
        if (in_stack_00000028 != (float *)0x0) {
          *in_stack_00000028 = local_20.z;
        }
        return local_24;
      }
      unaff_retaddr = unaff_retaddr + -1;
      fVar1 = local_28;
    } while (unaff_EDI <= unaff_retaddr);
  }
  if (in_stack_00000028 != (float *)0x0) {
    *in_stack_00000028 = 1.4013e-45;
  }
  if (in_stack_0000002c != (uint *)0x0) {
    in_stack_0000002c[1] = 0x3f800000;
    in_stack_0000002c[2] = 0;
    *in_stack_0000002c = 0;
  }
  return (float)fVar4;
}
