// Name: shape_design.c_realignObject_FUN_0045ee70
// Address: 0045ee70
// Address Range: [[0045ee70, 0045f07e]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_realignObject_FUN_0045ee70(int rotation_x,int rotation_y,int rotation_z)

#include "nocturne.h"

void __cdecl shape_design_c_realignObject_FUN_0045ee70(int rotation_x,int rotation_y,int rotation_z)

{
  uint uVar10;
  uint uVar11;
  uint uVar12;
  float10 fVar13;
  float10 fVar10;
  int local_4c;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar8;
  float fVar9;
  
  engine_special_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_drawText_FUN_00401fd0("Realign object",0,0);
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  uVar10 = rotation_x + 0x2000U & 0xc000;
  uVar11 = rotation_y + 0x2000U & 0xc000;
  uVar12 = rotation_z + 0x2000U & 0xc000;
  fVar13 = (float10)fsin((float10)uVar10 * (float10)3.0517578125e-05 *
                         (float10)3.1415926535000001);
  fVar1 = (float)fVar13;
  fVar10 = (float10)fcos((float10)uVar10 * (float10)3.0517578125e-05 *
                         (float10)3.1415926535000001);
  fVar2 = (float)fVar10;
  fVar10 = (float10)fsin((float10)uVar11 * (float10)3.0517578125e-05 *
                         (float10)3.1415926535000001);
  fVar3 = (float)fVar10;
  fVar10 = (float10)fcos((float10)uVar11 * (float10)3.0517578125e-05 *
                         (float10)3.1415926535000001);
  fVar4 = (float)fVar10;
  fVar10 = (float10)fsin((float10)uVar12 * (float10)3.0517578125e-05 *
                         (float10)3.1415926535000001);
  fVar5 = (float)fVar10;
  fVar10 = (float10)fcos((float10)uVar12 * (float10)3.0517578125e-05 *
                         (float10)3.1415926535000001);
  fVar6 = (float)fVar10;
  for (local_4c = 0; local_4c < g_VertexCount; local_4c = local_4c + 1) {
    fVar7 = g_LoadedVertices[local_4c].vertex.x;
    fVar8 = g_LoadedVertices[local_4c].vertex.y;
    fVar9 = g_LoadedVertices[local_4c].vertex.z;
    g_LoadedVertices[local_4c].vertex.x =
         fVar9 * fVar5 * fVar2 +
         fVar8 * (-fVar6 * fVar3 + fVar5 * fVar1 * fVar4) +
         fVar7 * (fVar6 * fVar4 + fVar5 * fVar1 * fVar3);
    g_LoadedVertices[local_4c].vertex.y =
         fVar9 * -fVar1 + fVar8 * fVar4 * fVar2 + fVar7 * fVar3 * fVar2;
    g_LoadedVertices[local_4c].vertex.z =
         fVar9 * fVar6 * fVar2 +
         fVar8 * (fVar3 * fVar5 + fVar6 * fVar1 * fVar4) +
         fVar7 * (-fVar5 * fVar4 + fVar6 * fVar1 * fVar3);
  }
  if (g_GouraudShadingEnabled != 0) {
    shape_design_c_calculateVertexNormals_FUN_0045be40();
  }
  return;
}
