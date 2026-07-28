// Name: core_mirror.cpp_CMirror_renderMirrorQuadDepth_FUN_004d7980
// Address: 004d7980
// Address Range: [[004d7980, 004d7b23]]
// Convention: __cdecl
// Signature: void __cdecl core_mirror_cpp_CMirror_renderMirrorQuadDepth_FUN_004d7980(CMirror *this_ptr)

#include "nocturne.h"

void __cdecl core_mirror_cpp_CMirror_renderMirrorQuadDepth_FUN_004d7980(CMirror *this_ptr)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  byte auStack_88 [4];
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_64;
  uint local_58;
  uint local_4c;
  CVector3i local_40;
  CVector3i local_34;
  CVector3i local_28;
  CVector3i local_1c;
  
  local_34.x = (int)ROUND((this_ptr->reflection).corner1.x * 256.0f);
  local_34.y = (int)ROUND((this_ptr->reflection).corner1.y * 256.0f);
  local_34.z = (int)ROUND((this_ptr->reflection).corner1.z * 256.0f);
  engine_special_cpp_transformPoint_FUN_00530a25((SProjectedVertex *)*DAT_005ae704,&local_34);
  local_40.x = (int)ROUND((this_ptr->reflection).corner2.x * 256.0f);
  local_40.y = (int)ROUND((this_ptr->reflection).corner2.y * 256.0f);
  local_40.z = (int)ROUND((this_ptr->reflection).corner2.z * 256.0f);
  engine_special_cpp_transformPoint_FUN_00530a25
            ((SProjectedVertex *)(*DAT_005ae704 + 0x30),&local_40);
  local_1c.x = (int)ROUND((this_ptr->reflection).corner3.x * 256.0f);
  local_1c.y = (int)ROUND((this_ptr->reflection).corner3.y * 256.0f);
  local_1c.z = (int)ROUND((this_ptr->reflection).corner3.z * 256.0f);
  engine_special_cpp_transformPoint_FUN_00530a25
            ((SProjectedVertex *)(*DAT_005ae704 + 0x60),&local_1c);
  local_28.x = (int)ROUND((this_ptr->reflection).corner4.x * 256.0f);
  local_28.y = (int)ROUND((this_ptr->reflection).corner4.y * 256.0f);
  local_28.z = (int)ROUND((this_ptr->reflection).corner4.z * 256.0f);
  engine_special_cpp_transformPoint_FUN_00530a25
            ((SProjectedVertex *)(*DAT_005ae704 + 0x90),&local_28);
  iVar3 = 0;
  do {
    *(int *)(*DAT_005ae704 + iVar3) = *(int *)(*DAT_005ae704 + iVar3) << 4;
    piVar1 = (int *)(*DAT_005ae704 + 4 + iVar3);
    *piVar1 = *piVar1 << 4;
    piVar1 = (int *)(*DAT_005ae704 + 8 + iVar3);
    *piVar1 = *piVar1 << 4;
    puVar2 = (uint *)(*DAT_005ae704 + 0xc + iVar3);
    iVar3 = iVar3 + 0x30;
    *(uint *)(*DAT_005ae704 + -0x24 + iVar3) = *puVar2 >> 4;
  } while (iVar3 != 0xc0);
  local_84 = 4;
  local_74 = 0;
  local_78 = 0;
  local_7c = 0;
  local_58 = 2;
  local_80 = 0;
  local_70 = 0;
  local_4c = 3;
  local_64 = 1;
  engine_drender_cpp_CDemonRenderer_renderZPrepassPoly_FUN_0045ef90(DAT_005ae704,auStack_88);
  return;
}
