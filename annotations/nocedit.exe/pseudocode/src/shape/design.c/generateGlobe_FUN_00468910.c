// Name: shape_design.c_generateGlobe_FUN_00468910
// Address: 00468910
// Address Range: [[00468910, 00468c3b]]
// Convention: __cdecl
// Signature: void shape_design.c_generateGlobe_FUN_00468910(void)

#include "nocturne.h"

void __cdecl shape_design_c_generateGlobe_FUN_00468910(void)

{
  char cVar1;
  float radius;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  BADSPACEBASE *in_ESP;
  char *pcVar9;
  byte bVar10;
  double dVar11;
  char *in_stack_ffffff84;
  int local_2c;
  int local_28;
  
  bVar10 = 0;
  g_PolygonCount = 0;
  g_VertexCount = 0;
  engine_2d_c_getInputWithPrompt_FUN_004032c0
            (&stack0xffffff78,10,0,0,"Enter in size in heading : ");
  iVar6 = -1;
  pcVar9 = &stack0xffffff78;
  do {
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + (uint)bVar10 * -2 + 1;
  } while (cVar1 != '\0');
  if (iVar6 != -2) {
    iVar6 = crt_stdlib_c_atoi_FUN_005ffef0(&stack0xffffff78);
    fVar3 = (float)360 / (float)iVar6;
    engine_2d_c_getInputWithPrompt_FUN_004032c0
              (&stack0xffffff78,10,0,0xb,"Enter in size in pitch : ");
    iVar7 = -1;
    pcVar9 = &stack0xffffff78;
    do {
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + (uint)bVar10 * -2 + 1;
    } while (cVar1 != '\0');
    if (iVar7 != -2) {
      iVar7 = crt_stdlib_c_atoi_FUN_005ffef0(&stack0xffffff78);
      fVar4 = (float)180 / (float)iVar7;
      engine_2d_c_getInputWithPrompt_FUN_004032c0
                (&stack0xffffff78,10,0,0x16,"Enter in radius : ");
      iVar8 = -1;
      pcVar9 = &stack0xffffff78;
      do {
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + (uint)bVar10 * -2 + 1;
      } while (cVar1 != '\0');
      if (iVar8 != -2) {
        dVar11 = crt_string_c_strtod_FUN_005ff0f3(in_stack_ffffff84);
        radius = (float)dVar11;
        for (local_28 = 0; local_28 <= iVar7; local_28 = local_28 + 1) {
          for (local_2c = 0; iVar8 = g_VertexCount, local_2c < iVar6 / 2; local_2c = local_2c + 1) {
            fVar2 = (float)local_2c * fVar3;
            fVar5 = (float)90 - (float)local_28 * fVar4;
            shape_design_c_addVertexFromSphericalCoords_FUN_004686e0(fVar2,fVar5,radius);
            shape_design_c_addVertexFromSphericalCoords_FUN_004686e0(fVar2 + fVar3,fVar5,radius);
            shape_design_c_addVertexFromSphericalCoords_FUN_004686e0
                      (fVar2 + fVar3,fVar5 + fVar4,radius);
            shape_design_c_addVertexFromSphericalCoords_FUN_004686e0(fVar2,fVar5 + fVar4,radius);
            shape_design_c_addQuadPolygon_FUN_004687c0(iVar8 + 3,iVar8 + 2,iVar8 + 1,iVar8);
          }
          for (local_2c = iVar6 / 2; iVar8 = g_VertexCount, local_2c < iVar6;
              local_2c = local_2c + 1) {
            fVar2 = (float)local_2c * fVar3;
            fVar5 = (float)90 - (float)local_28 * fVar4;
            shape_design_c_addVertexFromSphericalCoords_FUN_004686e0(fVar2,fVar5,radius);
            shape_design_c_addVertexFromSphericalCoords_FUN_004686e0(fVar2 + fVar3,fVar5,radius);
            shape_design_c_addVertexFromSphericalCoords_FUN_004686e0
                      (fVar2 + fVar3,fVar5 + fVar4,radius);
            shape_design_c_addVertexFromSphericalCoords_FUN_004686e0(fVar2,fVar5 + fVar4,radius);
            shape_design_c_addQuadPolygon_FUN_004687c0(iVar8 + 3,iVar8 + 2,iVar8 + 1,iVar8);
          }
        }
      }
    }
  }
  return;
}
