// Name: shape_design.c_generateGlobe_FUN_00468910
// Address: 00468910
// MANUAL RECONSTRUCTION
// Address Range: [[00468910, 00468c3b]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_generateGlobe_FUN_00468910(void)

#include "nocturne.h"

void __cdecl shape_design_c_generateGlobe_FUN_00468910(void)

{
  float radius;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar2;
  int iVar8;
  int iVar9;
  byte bVar4;
  double dVar5;
  char local_88 [80];
  int local_2c;
  int local_28;
  
  bVar4 = 0;
  g_PolygonCount = 0;
  g_VertexCount = 0;
  engine_2d_c_getInputWithPrompt_FUN_004032c0(local_88,10,0,0,"Enter in size in heading : ");
  iVar2 = strlen(local_88);
  if (iVar2 != 0) {
    iVar7 = atoi(local_88);
    fVar4 = (float)360 / (float)iVar7;
    engine_2d_c_getInputWithPrompt_FUN_004032c0(local_88,10,0,0xb,"Enter in size in pitch : ")
    ;
    iVar8 = strlen(local_88);
    if (iVar8 != 0) {
      iVar8 = atoi(local_88);
      fVar5 = (float)180 / (float)iVar8;
      engine_2d_c_getInputWithPrompt_FUN_004032c0(local_88,10,0,0x16,"Enter in radius : ");
      iVar9 = strlen(local_88);
      if (iVar9 != 0) {
        dVar5 = _strtod(local_88);
        radius = (float)dVar5;
        for (local_28 = 0; local_28 <= iVar8; local_28 = local_28 + 1) {
          for (local_2c = 0; iVar9 = g_VertexCount, local_2c < iVar7 / 2; local_2c = local_2c + 1) {
            fVar3 = (float)local_2c * fVar4;
            fVar6 = (float)90 - (float)local_28 * fVar5;
            shape_design_c_addVertexFromSphericalCoords_FUN_004686e0(fVar3,fVar6,radius);
            shape_design_c_addVertexFromSphericalCoords_FUN_004686e0(fVar3 + fVar4,fVar6,radius);
            shape_design_c_addVertexFromSphericalCoords_FUN_004686e0
                      (fVar3 + fVar4,fVar6 + fVar5,radius);
            shape_design_c_addVertexFromSphericalCoords_FUN_004686e0(fVar3,fVar6 + fVar5,radius);
            shape_design_c_addQuadPolygon_FUN_004687c0(iVar9 + 3,iVar9 + 2,iVar9 + 1,iVar9);
          }
          for (local_2c = iVar7 / 2; iVar9 = g_VertexCount, local_2c < iVar7;
              local_2c = local_2c + 1) {
            fVar3 = (float)local_2c * fVar4;
            fVar6 = (float)90 - (float)local_28 * fVar5;
            shape_design_c_addVertexFromSphericalCoords_FUN_004686e0(fVar3,fVar6,radius);
            shape_design_c_addVertexFromSphericalCoords_FUN_004686e0(fVar3 + fVar4,fVar6,radius);
            shape_design_c_addVertexFromSphericalCoords_FUN_004686e0
                      (fVar3 + fVar4,fVar6 + fVar5,radius);
            shape_design_c_addVertexFromSphericalCoords_FUN_004686e0(fVar3,fVar6 + fVar5,radius);
            shape_design_c_addQuadPolygon_FUN_004687c0(iVar9 + 3,iVar9 + 2,iVar9 + 1,iVar9);
          }
        }
      }
    }
  }
  return;
}
