// Name: core_setutil.cpp_generateSphereVertex_FUN_0055d610
// Address: 0055d610
// Address Range: [[0055d610, 0055d6f6]]
// Convention: __cdecl
// Signature: void __cdecl core_setutil_cpp_generateSphereVertex_FUN_0055d610(int longitude_index,int latitude_index,int vertex_buffer_index,float radius)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_setutil_cpp_generateSphereVertex_FUN_0055d610(int longitude_index,int latitude_index,int vertex_buffer_index,float radius)

{
  int *piVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  CVector3i aCStack_38 [3];
  int iStack_c;
  
  fVar3 = (float10)longitude_index * (float10)_DAT_005f147d * (float10)_DAT_005f1481 *
          (float10)_DAT_005f1489;
  iStack_c = latitude_index;
  fVar4 = (float10)fsin(fVar3);
  fVar3 = (float10)fcos(fVar3);
  fVar5 = (float10)radius;
  fVar6 = (float10)latitude_index * (float10)_DAT_005f1491 * (float10)_DAT_005f1481 *
          (float10)_DAT_005f1499;
  fVar7 = (float10)fcos(fVar6);
  fVar6 = (float10)fsin(fVar6);
  aCStack_38[0].x = (int)ROUND((float)(fVar4 * fVar5 * fVar7) * _DAT_00605158);
  aCStack_38[0].y = (int)ROUND((float)(fVar6 * fVar5) * _DAT_00605158);
  aCStack_38[0].z = (int)ROUND((float)(fVar3 * fVar5 * fVar7) * _DAT_00605158);
  iVar2 = vertex_buffer_index * 0x30;
  engine_special_cpp_FUN_00580173((SProjectedVertex *)(*DAT_00612560 + iVar2),aCStack_38);
  piVar1 = DAT_00612560;
  *(uint *)(*DAT_00612560 + 0x18 + iVar2) = 0x800000;
  *(uint *)(iVar2 + 0x1c + *piVar1) = 0x800000;
  return;
}
