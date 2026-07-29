// Name: shape_design.c_sizeForStadium_FUN_00469c70
// Address: 00469c70
// Address Range: [[00469c70, 00469edd]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_sizeForStadium_FUN_00469c70(void)

#include "nocturne.h"

void __cdecl shape_design_c_sizeForStadium_FUN_00469c70(void)

{
  char cVar2;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar4;
  int iVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar5;
  byte bVar6;
  double dVar7;
  double dVar10;
  char local_e8 [160];
  int local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  int local_20;
  int local_1c;
  float local_18;
  float fVar2;
  float fVar3;
  char cVar1;
  
  bVar6 = 0;
  engine_special_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_getInputWithPrompt_FUN_004032c0(local_e8,0x14,0,0,"Enter in X point : ");
  iVar4 = -1;
  pcVar9 = local_e8;
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + (uint)bVar6 * -2 + 1;
  } while (cVar1 != '\0');
  if (iVar4 != -2) {
    iVar6 = atoi(local_e8);
    engine_2d_c_getInputWithPrompt_FUN_004032c0(local_e8,0x14,0,0xb,"Enter in Z point : ");
    iVar7 = -1;
    pcVar9 = local_e8;
    do {
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + (uint)bVar6 * -2 + 1;
    } while (cVar2 != '\0');
    if (iVar7 != -2) {
      iVar7 = atoi(local_e8);
      engine_2d_c_getInputWithPrompt_FUN_004032c0(local_e8,0x14,0,0x16,"Enter in X size : ");
      iVar8 = -1;
      pcVar9 = local_e8;
      do {
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        cVar2 = *pcVar9;
        pcVar9 = pcVar9 + (uint)bVar6 * -2 + 1;
      } while (cVar2 != '\0');
      if (iVar8 != -2) {
        dVar7 = _strtod(local_e8);
        engine_2d_c_getInputWithPrompt_FUN_004032c0(local_e8,0x14,0,0x21,"Enter in Z size : ")
        ;
        iVar8 = -1;
        pcVar5 = local_e8;
        do {
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          pcVar5 = pcVar5 + (uint)bVar6 * -2 + 1;
          cVar2 = *pcVar5;
          pcVar5 = pcVar5;
        } while (cVar2 != '\0');
        if (iVar8 != -2) {
          dVar10 = _strtod(local_e8);
          local_44 = 999999.9;
          local_40 = -999999.9;
          local_3c = 999999.9;
          local_38 = -999999.9;
          for (local_48 = 0; local_48 < g_VertexCount; local_48 = local_48 + 1) {
            fVar2 = g_LoadedVertices[local_48].vertex.x;
            if (local_40 < fVar2) {
              local_40 = fVar2;
            }
            if (fVar2 < local_44) {
              local_44 = fVar2;
            }
            fVar4 = g_LoadedVertices[local_48].vertex.z;
            if (local_38 < fVar4) {
              local_38 = fVar4;
            }
            if (fVar4 < local_3c) {
              local_3c = fVar4;
            }
          }
          fVar4 = (float)dVar7 / g_LoadedVertices[iVar6].vertex.x;
          fVar5 = (float)dVar10 / g_LoadedVertices[iVar7].vertex.z;
          fVar3 = (float)0.5;
          for (local_48 = 0; local_48 < g_VertexCount; local_48 = local_48 + 1) {
            g_LoadedVertices[local_48].vertex.x = g_LoadedVertices[local_48].vertex.x * fVar4;
            g_LoadedVertices[local_48].vertex.y =
                 g_LoadedVertices[local_48].vertex.y * (fVar4 + fVar5) * fVar3;
            g_LoadedVertices[local_48].vertex.z = g_LoadedVertices[local_48].vertex.z * fVar5;
          }
        }
      }
    }
  }
  return;
}
