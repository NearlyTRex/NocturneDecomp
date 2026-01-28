// Name: shape_design.c_groundCenterObject_FUN_00466a30
// Address: 00466a30
// Address Range: [[00466a30, 00466c60]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_groundCenterObject_FUN_00466a30(void)

#include "nocturne.h"

void __cdecl shape_design_c_groundCenterObject_FUN_00466a30(void)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint local_44;
  uint uStack_40;
  uint local_2c;
  uint uStack_28;
  int local_14;
  
  fVar6 = 999999.9;
  fVar8 = 999999.9;
  local_2c = 0xcccccccd;
  uStack_28 = 0x412e847f;
  fVar5 = -999999.9;
  fVar7 = -999999.9;
  dVar4 = -999999.9;
  for (local_14 = 0; local_14 < g_VertexCount; local_14 = local_14 + 1) {
    fVar1 = g_LoadedVertices[local_14].vertex.x;
    fVar2 = g_LoadedVertices[local_14].vertex.y;
    dVar3 = (double)g_LoadedVertices[local_14].vertex.z;
    if (fVar5 < fVar1) {
      fVar5 = fVar1;
    }
    if (fVar1 < fVar6) {
      fVar6 = fVar1;
    }
    if (fVar7 < fVar2) {
      fVar7 = fVar2;
    }
    if (fVar2 < fVar8) {
      fVar8 = fVar2;
    }
    local_44 = SUB84(dVar3,0);
    uStack_40 = (uint)((ulonglong)dVar3 >> 0x20);
    if (dVar4 < dVar3) {
      dVar4 = dVar3;
    }
    if (dVar3 < (double)CONCAT44(uStack_28,local_2c)) {
      local_2c = local_44;
      uStack_28 = uStack_40;
    }
  }
  for (local_14 = 0; local_14 < g_VertexCount; local_14 = local_14 + 1) {
  }
  for (local_14 = 0; local_14 < g_VertexCount; local_14 = local_14 + 1) {
    g_LoadedVertices[local_14].vertex.y = g_LoadedVertices[local_14].vertex.y - fVar8;
  }
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_drawText_FUN_00401fd0("Object grounded.  Hit a key...",0,0);
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
  return;
}
