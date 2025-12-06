// Name: shape_design.c_centerVerticesAroundPoint_FUN_0045ea90
// Address: 0045ea90
// Address Range: [[0045ea90, 0045ec8d]]
// Convention: unknown
// Signature: undefined shape_design.c_centerVerticesAroundPoint_FUN_0045ea90()

#include "nocturne.h"

void shape_design_c_centerVerticesAroundPoint_FUN_0045ea90(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  char *pcVar4;
  byte bVar5;
  double dVar6;
  char *in_stack_ffffffb0;
  float local_28;
  float local_24;
  float local_20;
  int local_14;
  
  bVar5 = 0;
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_getInputWithPrompt_FUN_004032c0
            (&stack0xffffffac,10,0,0,"Bias around what point? (or -1 for user-defined) : ");
  iVar3 = -1;
  pcVar4 = &stack0xffffffac;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + (uint)bVar5 * -2 + 1;
  } while (cVar1 != '\0');
  if (iVar3 != -2) {
    iVar3 = crt_stdlib_c_atoi_FUN_005ffef0(&stack0xffffffac);
    if ((iVar3 < -1) || (g_VertexCount + -1 < iVar3)) {
      engine_2d_c_drawText_FUN_00401fd0("Invalid point.",0,0x16);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
    }
    else {
      if (iVar3 == -1) {
        engine_2d_c_getInputWithPrompt_FUN_004032c0
                  (&stack0xffffffac,0x32,0,0xb,"Enter point : ");
        iVar3 = -1;
        pcVar4 = &stack0xffffffac;
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + (uint)bVar5 * -2 + 1;
        } while (cVar1 != '\0');
        if (iVar3 == -2) {
          return;
        }
        dVar6 = crt_string_c_strtod_FUN_005ff0f3(in_stack_ffffffb0);
        local_28 = (float)dVar6;
        local_24 = local_28;
        local_20 = local_28;
      }
      else {
        local_28 = g_LoadedVertices[iVar3].vertex.x;
        local_24 = g_LoadedVertices[iVar3].vertex.y;
        local_20 = g_LoadedVertices[iVar3].vertex.z;
      }
      engine_2d_c_drawText_FUN_00401fd0("Which axis to use - X, Y, or Z? : ",0,0x16);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      uVar2 = wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
      uVar2 = crt_ctype_c_toupper_FUN_005ff9e0(uVar2 & 0xff);
      if (uVar2 < 0x59) {
        if (uVar2 == 0x58) {
          for (local_14 = 0; local_14 < g_VertexCount; local_14 = local_14 + 1) {
            g_LoadedVertices[local_14].vertex.x = g_LoadedVertices[local_14].vertex.x - local_28;
          }
        }
      }
      else if (uVar2 < 0x5a) {
        for (local_14 = 0; local_14 < g_VertexCount; local_14 = local_14 + 1) {
          g_LoadedVertices[local_14].vertex.y = g_LoadedVertices[local_14].vertex.y - local_24;
        }
      }
      else if (uVar2 == 0x5a) {
        for (local_14 = 0; local_14 < g_VertexCount; local_14 = local_14 + 1) {
          g_LoadedVertices[local_14].vertex.z = g_LoadedVertices[local_14].vertex.z - local_20;
        }
      }
    }
  }
  return;
}
