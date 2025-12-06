// Name: shape_design.c_generateShell_FUN_00468f20
// Address: 00468f20
// Address Range: [[00468f20, 0046913b]]
// Convention: __cdecl
// Signature: void shape_design.c_generateShell_FUN_00468f20(void)

#include "nocturne.h"

void __cdecl shape_design_c_generateShell_FUN_00468f20(void)

{
  char cVar1;
  float radius;
  float latitude_degrees;
  float fVar2;
  float fVar3;
  float longitude_degrees;
  int iVar4;
  int iVar5;
  int iVar6;
  BADSPACEBASE *in_ESP;
  char *pcVar7;
  byte bVar8;
  double dVar9;
  char *in_stack_ffffff84;
  int local_2c;
  int local_28;
  
  bVar8 = 0;
  g_PolygonCount = 0;
  g_VertexCount = 0;
  engine_2d_c_getInputWithPrompt_FUN_004032c0
            (&stack0xffffff78,10,0,0,"Enter in size in heading : ");
  iVar4 = -1;
  pcVar7 = &stack0xffffff78;
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + (uint)bVar8 * -2 + 1;
  } while (cVar1 != '\0');
  if (iVar4 != -2) {
    iVar4 = crt_stdlib_c_atoi_FUN_005ffef0(&stack0xffffff78);
    fVar2 = (float)180 / (float)iVar4;
    engine_2d_c_getInputWithPrompt_FUN_004032c0
              (&stack0xffffff78,10,0,0xb,"Enter in size in pitch : ");
    iVar5 = -1;
    pcVar7 = &stack0xffffff78;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + (uint)bVar8 * -2 + 1;
    } while (cVar1 != '\0');
    if (iVar5 != -2) {
      iVar5 = crt_stdlib_c_atoi_FUN_005ffef0(&stack0xffffff78);
      fVar3 = (float)180 / (float)iVar5;
      engine_2d_c_getInputWithPrompt_FUN_004032c0
                (&stack0xffffff78,10,0,0x16,"Enter in radius : ");
      iVar6 = -1;
      pcVar7 = &stack0xffffff78;
      do {
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + (uint)bVar8 * -2 + 1;
      } while (cVar1 != '\0');
      if (iVar6 != -2) {
        dVar9 = crt_string_c_strtod_FUN_005ff0f3(in_stack_ffffff84);
        radius = (float)dVar9;
        for (local_28 = 0; local_28 <= iVar5; local_28 = local_28 + 1) {
          for (local_2c = 0; iVar6 = g_VertexCount, local_2c < iVar4; local_2c = local_2c + 1) {
            latitude_degrees = (float)local_2c * fVar2;
            longitude_degrees = (float)90 - (float)local_28 * fVar3;
            shape_design_c_addVertexFromSphericalCoordsHalfSphere_FUN_00468c40
                      (latitude_degrees,longitude_degrees,radius);
            shape_design_c_addVertexFromSphericalCoordsHalfSphere_FUN_00468c40
                      (latitude_degrees + fVar2,longitude_degrees,radius);
            shape_design_c_addVertexFromSphericalCoordsHalfSphere_FUN_00468c40
                      (latitude_degrees + fVar2,longitude_degrees + fVar3,radius);
            shape_design_c_addVertexFromSphericalCoordsHalfSphere_FUN_00468c40
                      (latitude_degrees,longitude_degrees + fVar3,radius);
            shape_design_c_addQuadPolygonHalfSphere_FUN_00468d20
                      (iVar6 + 3,iVar6 + 2,iVar6 + 1,iVar6);
          }
        }
      }
    }
  }
  return;
}
