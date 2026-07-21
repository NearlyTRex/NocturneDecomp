// Name: core_gore.cpp_CGore_renderParticles_FUN_004afe00
// Address: 004afe00
// Address Range: [[004afe00, 004afe76]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CGore_renderParticles_FUN_004afe00(void)

#include "nocturne.h"

void __cdecl core_gore_cpp_CGore_renderParticles_FUN_004afe00(void)

{
  int iVar1;
  byte *puVar2;
  
  if ((*(int *)(0x01C775EC + 0x14) != 0) &&
     (iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704), iVar1 == 0)
     ) {
    core_set_cpp_CDemonSet_setLightingParameters_FUN_0050adc0(0x01E57284,0,0,0,0,0);
    puVar2 = (byte *)0x1c78cec;
    core_gore_cpp_CBloodParticle_setupRenderState_FUN_004ae0a0(0x1c78cec);
    do {
      if (0.0 < *(float *)(puVar2 + 0x18)) {
        (**(code **)(*(int *)(puVar2 + 0x34) + 8))(puVar2);
      }
      puVar2 = puVar2 + 0x40;
    } while (puVar2 != &DAT_01c7ccec);
  }
  return;
}
