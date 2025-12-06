// Name: engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
// Address: 0048c450
// Address Range: [[0048c450, 0048c492]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450(CDemonRenderer * this_ptr, CVector3f * world_position)

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
          (CDemonRenderer *this_ptr,CVector3f *world_position)

{
  uint in_EDX;
  BADSPACEBASE *in_ESP;
  double dVar1;
  
  dVar1 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(in_EDX,world_position));
  dVar1 = crt_math_c_round_FUN_005fe6b0(dVar1);
  dVar1 = crt_math_c_round_FUN_005fe6b0
                    ((double)CONCAT44 /* combine 2-byte values */((int)((ulonglong)dVar1 >> 0x20),&stack0xfffffff8));
  engine_3d_c_processCameraRelativePoint_FUN_004037e0(SUB84 /* extract 2-byte value */(dVar1,0));
  return;
}
