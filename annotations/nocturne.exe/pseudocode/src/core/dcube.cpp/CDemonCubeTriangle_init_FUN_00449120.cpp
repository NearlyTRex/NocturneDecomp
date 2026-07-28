// Name: core_dcube.cpp_CDemonCubeTriangle_init_FUN_00449120
// Address: 00449120
// Address Range: [[00449120, 00449141]]
// Convention: unknown
// Signature: void core_dcube_cpp_CDemonCubeTriangle_init_FUN_00449120(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void core_dcube_cpp_CDemonCubeTriangle_init_FUN_00449120(void)

{
  CDemonCubeTriangle *in_stack_00000004;
  CVector3f *in_stack_00000008;
  CVector3f *in_stack_0000000c;
  CVector3f *in_stack_00000010;
  
  (in_stack_00000004->triangle).vertices[0] = in_stack_00000008;
  (in_stack_00000004->triangle).vertices[1] = in_stack_0000000c;
  (in_stack_00000004->triangle).vertices[2] = in_stack_00000010;
  core_dcube_cpp_CDemonCubeTriangle_calculateNormalAndPlane_FUN_00448fb0(in_stack_00000004);
  return;
}
