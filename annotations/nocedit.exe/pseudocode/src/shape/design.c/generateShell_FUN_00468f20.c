// Name: shape_design.c_generateShell_FUN_00468f20
// Address: 00468f20
// Address Range: [[00468f20, 0046913b]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_generateShell_FUN_00468f20(void)

#include "nocturne.h"

void __cdecl shape_design_c_generateShell_FUN_00468f20(void)

{
  char cVar2;
  float radius;
  float latitude_degrees;
  float fVar3;
  float fVar4;
  float longitude_degrees;
  int iVar5;
  int iVar2;
  int iVar6;
  int iVar7;
  char *pcVar8;
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
  pcVar8 = local_88;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + (uint)bVar4 * -2 + 1;
  } while (cVar1 != '\0');
  if (iVar2 != -2) {
    iVar5 = atoi(local_88);
    fVar3 = (float)180 / (float)iVar5;
    engine_2d_c_getInputWithPrompt_FUN_004032c0(local_88,10,0,0xb,"Enter in size in pitch : ")
    ;
    iVar6 = -1;
    pcVar8 = local_88;
    do {
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + (uint)bVar4 * -2 + 1;
    } while (cVar2 != '\0');
    if (iVar6 != -2) {
      iVar6 = atoi(local_88);
      fVar4 = (float)180 / (float)iVar6;
      engine_2d_c_getInputWithPrompt_FUN_004032c0(local_88,10,0,0x16,"Enter in radius : ");
      iVar7 = -1;
      pcVar3 = local_88;
      do {
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pcVar3 = pcVar3 + (uint)bVar4 * -2 + 1;
        cVar2 = *pcVar3;
        pcVar3 = pcVar3;
      } while (cVar2 != '\0');
      if (iVar7 != -2) {
        dVar5 = _strtod(local_88);
        radius = (float)dVar5;
        for (local_28 = 0; local_28 <= iVar6; local_28 = local_28 + 1) {
          for (local_2c = 0; iVar7 = g_VertexCount, local_2c < iVar5; local_2c = local_2c + 1) {
            latitude_degrees = (float)local_2c * fVar3;
            longitude_degrees = (float)90 - (float)local_28 * fVar4;
            shape_design_c_addVertexFromSphericalCoordsHalfSphere_FUN_00468c40
                      (latitude_degrees,longitude_degrees,radius);
            shape_design_c_addVertexFromSphericalCoordsHalfSphere_FUN_00468c40
                      (latitude_degrees + fVar3,longitude_degrees,radius);
            shape_design_c_addVertexFromSphericalCoordsHalfSphere_FUN_00468c40
                      (latitude_degrees + fVar3,longitude_degrees + fVar4,radius);
            shape_design_c_addVertexFromSphericalCoordsHalfSphere_FUN_00468c40
                      (latitude_degrees,longitude_degrees + fVar4,radius);
            shape_design_c_addQuadPolygonHalfSphere_FUN_00468d20
                      (iVar7 + 3,iVar7 + 2,iVar7 + 1,iVar7);
          }
        }
      }
    }
  }
  return;
}
