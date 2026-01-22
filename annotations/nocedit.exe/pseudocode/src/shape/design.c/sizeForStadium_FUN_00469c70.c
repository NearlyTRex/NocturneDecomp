// Name: shape_design.c_sizeForStadium_FUN_00469c70
// Address: 00469c70
// Address Range: [[00469c70, 00469edd]]
// Convention: __cdecl
// Signature: void shape_design.c_sizeForStadium_FUN_00469c70(void)

#include "nocturne.h"

void __cdecl shape_design_c_sizeForStadium_FUN_00469c70(void)

{
  char cVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  char *pcVar5;
  byte bVar6;
  double dVar7;
  char *in_stack_ffffff10;
  char local_e8 [160];
  int local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  int local_20;
  int local_1c;
  float local_18;
  
  bVar6 = 0;
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_getInputWithPrompt_FUN_004032c0(local_e8,0x14,0,0,"Enter in X point : ");
  iVar4 = -1;
  pcVar5 = local_e8;
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + (uint)bVar6 * -2 + 1;
  } while (cVar1 != '\0');
  if (iVar4 != -2) {
    local_20 = crt_stdlib_c_atoi_FUN_005ffef0(local_e8);
    engine_2d_c_getInputWithPrompt_FUN_004032c0(local_e8,0x14,0,0xb,"Enter in Z point : ");
    iVar4 = -1;
    pcVar5 = local_e8;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + (uint)bVar6 * -2 + 1;
    } while (cVar1 != '\0');
    if (iVar4 != -2) {
      local_1c = crt_stdlib_c_atoi_FUN_005ffef0(local_e8);
      engine_2d_c_getInputWithPrompt_FUN_004032c0(local_e8,0x14,0,0x16,"Enter in X size : ");
      iVar4 = -1;
      pcVar5 = local_e8;
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + (uint)bVar6 * -2 + 1;
      } while (cVar1 != '\0');
      if (iVar4 != -2) {
        dVar7 = crt_string_c_strtod_FUN_005ff0f3(in_stack_ffffff10);
        local_18 = (float)dVar7;
        engine_2d_c_getInputWithPrompt_FUN_004032c0(local_e8,0x14,0,0x21,"Enter in Z size : ")
        ;
        iVar4 = -1;
        pcVar5 = local_e8;
        do {
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + (uint)bVar6 * -2 + 1;
        } while (cVar1 != '\0');
        if (iVar4 != -2) {
          dVar7 = crt_string_c_strtod_FUN_005ff0f3(SUB84(dVar7,0));
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
            fVar2 = g_LoadedVertices[local_48].vertex.z;
            if (local_38 < fVar2) {
              local_38 = fVar2;
            }
            if (fVar2 < local_3c) {
              local_3c = fVar2;
            }
          }
          local_18 = local_18 / g_LoadedVertices[local_20].vertex.x;
          fVar2 = (float)dVar7 / g_LoadedVertices[local_1c].vertex.z;
          fVar3 = (float)0.5;
          for (local_48 = 0; local_48 < g_VertexCount; local_48 = local_48 + 1) {
            g_LoadedVertices[local_48].vertex.x = g_LoadedVertices[local_48].vertex.x * local_18;
            g_LoadedVertices[local_48].vertex.y =
                 g_LoadedVertices[local_48].vertex.y * (local_18 + fVar2) * fVar3;
            g_LoadedVertices[local_48].vertex.z = g_LoadedVertices[local_48].vertex.z * fVar2;
          }
        }
      }
    }
  }
  return;
}
