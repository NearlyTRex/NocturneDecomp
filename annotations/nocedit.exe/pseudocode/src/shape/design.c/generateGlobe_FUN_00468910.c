// Name: shape_design.c_generateGlobe_FUN_00468910
// Address: 00468910
// Address Range: [[00468910, 00468c3b]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_generateGlobe_FUN_00468910(void)

#include "nocturne.h"

void __cdecl shape_design_c_generateGlobe_FUN_00468910(void)

{
  char cVar2;
  float radius;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar2;
  int iVar8;
  int iVar9;
  char *pcVar10;
  char *pcVar3;
  byte bVar4;
  double dVar5;
  char local_88 [80];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  char cVar1;
  
  bVar4 = 0;
  g_PolygonCount = 0;
  g_VertexCount = 0;
  engine_2d_c_getInputWithPrompt_FUN_004032c0(local_88,10,0,0,"Enter in size in heading : ");
  iVar2 = -1;
  pcVar10 = local_88;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + (uint)bVar4 * -2 + 1;
  } while (cVar1 != '\0');
  if (iVar2 != -2) {
    iVar7 = atoi(local_88);
    fVar4 = (float)360 / (float)iVar7;
    engine_2d_c_getInputWithPrompt_FUN_004032c0(local_88,10,0,0xb,"Enter in size in pitch : ")
    ;
    iVar8 = -1;
    pcVar10 = local_88;
    do {
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar10 + (uint)bVar4 * -2 + 1;
    } while (cVar2 != '\0');
    if (iVar8 != -2) {
      iVar8 = atoi(local_88);
      fVar5 = (float)180 / (float)iVar8;
      engine_2d_c_getInputWithPrompt_FUN_004032c0(local_88,10,0,0x16,"Enter in radius : ");
      iVar9 = -1;
      pcVar3 = local_88;
      do {
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pcVar3 = pcVar3 + (uint)bVar4 * -2 + 1;
        cVar2 = *pcVar3;
        pcVar3 = pcVar3;
      } while (cVar2 != '\0');
      if (iVar9 != -2) {
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
