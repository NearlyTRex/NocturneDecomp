// Name: core_setutil.cpp_generateSphereVertex_FUN_00515890
// Address: 00515890
// Address Range: [[00515890, 00515976]]
// Convention: __cdecl
// Signature: void __cdecl core_setutil_cpp_generateSphereVertex_FUN_00515890(int longitude_index,int latitude_index,int vertex_buffer_index,float radius)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_setutil_cpp_generateSphereVertex_FUN_00515890(int longitude_index,int latitude_index,int vertex_buffer_index,float radius)

{
  int *piVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  CVector3i local_38 [3];
  int local_c;
  
  fVar3 = (float10)longitude_index * (float10)_DAT_00590fd5 * (float10)_DAT_00590fd9 *
          (float10)_DAT_00590fe1;
  local_c = latitude_index;
  fVar4 = (float10)fsin(fVar3);
  fVar3 = (float10)fcos(fVar3);
  fVar5 = (float10)radius;
  fVar6 = (float10)latitude_index * (float10)_DAT_00590fe9 * (float10)_DAT_00590fd9 *
          (float10)_DAT_00590ff1;
  fVar7 = (float10)fcos(fVar6);
  fVar6 = (float10)fsin(fVar6);
  local_38[0].x = (int)ROUND((float)(fVar4 * fVar5 * fVar7) * _DAT_005a1ab0);
  local_38[0].y = (int)ROUND((float)(fVar6 * fVar5) * _DAT_005a1ab0);
  local_38[0].z = (int)ROUND((float)(fVar3 * fVar5 * fVar7) * _DAT_005a1ab0);
  iVar2 = vertex_buffer_index * 0x30;
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            ((SProjectedVertex *)(*DAT_005ae704 + iVar2),local_38);
  piVar1 = DAT_005ae704;
  *(uint *)(*DAT_005ae704 + 0x18 + iVar2) = 0x800000;
  *(uint *)(iVar2 + 0x1c + *piVar1) = 0x800000;
  return;
}
