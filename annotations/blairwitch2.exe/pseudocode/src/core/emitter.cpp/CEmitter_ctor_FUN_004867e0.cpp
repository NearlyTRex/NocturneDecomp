// Name: core_emitter.cpp_CEmitter_ctor_FUN_004867e0
// Address: 004867e0
// Address Range: [[004867e0, 004869a4]]
// Convention: __cdecl
// Signature: CEmitter * __cdecl core_emitter_cpp_CEmitter_ctor_FUN_004867e0(CEmitter *this_ptr)

#include "nocturne.h"

CEmitter * __cdecl core_emitter_cpp_CEmitter_ctor_FUN_004867e0(CEmitter *this_ptr)

{
  char cVar1;
  CDemonActor *pCVar2;
  CKeyFramedModelInstance *this_ptr_00;
  char *pcVar3;
  char *pcVar4;
  
  pCVar2 = core_actor_cpp_CDemonActor_ctor_FUN_00408790(&this_ptr->base);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80
                          ((CKeyFramedModelInstance *)&pCVar2[1].platform_orientation_delta.y);
  *(CDemonActor_vtable **)(this_ptr_00[-1].model_name + 0x10) = &g_CEmitterVTable;
  this_ptr_00[-0xffffffff00000001].model_name[0x18] = '\0';
  this_ptr_00[-0xffffffff00000001].model_name[0x19] = '\0';
  this_ptr_00[-0xffffffff00000001].model_name[0x1a] = -0x80;
  this_ptr_00[-0xffffffff00000001].model_name[0x1b] = '?';
  pcVar3 = (char *)0x5d2b97;
  this_ptr_00[-0xffffffff00000001].model_name[0x1c] = '\0';
  this_ptr_00[-0xffffffff00000001].model_name[0x1d] = '\0';
  this_ptr_00[-0xffffffff00000001].model_name[0x1e] = -0x80;
  this_ptr_00[-0xffffffff00000001].model_name[0x1f] = '?';
  this_ptr_00[-0xffffffff00000001].model_name[0x20] = '\0';
  this_ptr_00[-0xffffffff00000001].model_name[0x21] = '\0';
  this_ptr_00[-0xffffffff00000001].model_name[0x22] = -0x80;
  this_ptr_00[-0xffffffff00000001].model_name[0x23] = '?';
  pcVar4 = this_ptr_00[-1].model_name + 0x28;
  this_ptr_00[-0xffffffff00000001].model_name[0x14] = '\0';
  this_ptr_00[-0xffffffff00000001].model_name[0x15] = '\0';
  this_ptr_00[-0xffffffff00000001].model_name[0x16] = '\0';
  this_ptr_00[-0xffffffff00000001].model_name[0x17] = '\0';
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = (char *)0x5d2b9c;
  pcVar4 = this_ptr_00[-1].model_name + 0x8c;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  this_ptr_00[1].model_name[0x28] = '\0';
  this_ptr_00[1].model_name[0x29] = '\0';
  this_ptr_00[1].model_name[0x2a] = '\0';
  this_ptr_00[1].model_name[0x2b] = '\0';
  this_ptr_00[1].model_name[0x2c] = -0x33;
  this_ptr_00[1].model_name[0x2d] = -0x34;
  this_ptr_00[1].model_name[0x2e] = -0x34;
  this_ptr_00[1].model_name[0x2f] = '=';
  this_ptr_00[-0xffffffff00000001].model_name[0x24] = '\x01';
  this_ptr_00[-0xffffffff00000001].model_name[0x25] = '\0';
  this_ptr_00[-0xffffffff00000001].model_name[0x26] = '\0';
  this_ptr_00[-0xffffffff00000001].model_name[0x27] = '\0';
  this_ptr_00[-0xffffffff00000001].model_name[0xf8] = -1;
  this_ptr_00[-0xffffffff00000001].model_name[0xf9] = '\0';
  this_ptr_00[-0xffffffff00000001].model_name[0xfa] = '\0';
  this_ptr_00[-0xffffffff00000001].model_name[0xfb] = '\0';
  this_ptr_00[-0xffffffff00000001].model_name[0xfc] = '\0';
  this_ptr_00[-0xffffffff00000001].model_name[0xfd] = '\0';
  this_ptr_00[-0xffffffff00000001].model_name[0xfe] = '\0';
  this_ptr_00[-0xffffffff00000001].model_name[0xff] = '\0';
  this_ptr_00[-1].model_ptr = (CKeyFramedModel *)0x0;
  this_ptr_00[-0xffffffff00000001].model_name[0xf4] = '\x01';
  this_ptr_00[-0xffffffff00000001].model_name[0xf5] = '\0';
  this_ptr_00[-0xffffffff00000001].model_name[0xf6] = '\0';
  this_ptr_00[-0xffffffff00000001].model_name[0xf7] = '\0';
  this_ptr_00[-0xffffffff00000001].model_name[0xf0] = '\0';
  this_ptr_00[-0xffffffff00000001].model_name[0xf1] = '\0';
  this_ptr_00[-0xffffffff00000001].model_name[0xf2] = '\0';
  this_ptr_00[-0xffffffff00000001].model_name[0xf3] = '\0';
  this_ptr_00[1].model_name[0x30] = '\0';
  this_ptr_00[1].model_name[0x31] = '\0';
  this_ptr_00[1].model_name[0x32] = '\0';
  this_ptr_00[1].model_name[0x33] = '\0';
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
            (this_ptr_00,"stalrock.kfm");
  this_ptr_00[1].part_visibility_flags[0] = 0x41a00000;
  this_ptr_00[1].part_visibility_flags[1] = 0x42c80000;
  this_ptr_00[1].part_visibility_flags[2] = 0x3f800000;
  this_ptr_00[1].part_visibility_flags[3] = 0;
  this_ptr_00[1].part_visibility_flags[4] = 0x4000;
  this_ptr_00[1].part_visibility_flags[5] = 0x10000;
  this_ptr_00[1].part_visibility_flags[6] = 0xffff;
  this_ptr_00[1].part_visibility_flags[7] = 0x3ecccccd;
  this_ptr_00[1].part_visibility_flags[0xc] = 0x42480000;
  this_ptr_00[1].part_visibility_flags[8] = 0;
  this_ptr_00[1].part_visibility_flags[9] = 0;
  this_ptr_00[1].part_visibility_flags[10] = 1;
  this_ptr_00[1].part_visibility_flags[0xb] = 0;
  *(byte *)(this_ptr_00[1].part_visibility_flags + 0xd) = 0;
  this_ptr_00[1].model_name[0x24] = '\x01';
  this_ptr_00[1].model_name[0x25] = '\0';
  this_ptr_00[1].model_name[0x26] = '\0';
  this_ptr_00[1].model_name[0x27] = '\0';
  this_ptr_00[1].model_name[0x74] = '\0';
  this_ptr_00[1].model_name[0x75] = '\0';
  this_ptr_00[1].model_name[0x76] = '\0';
  this_ptr_00[1].model_name[0x77] = '\0';
  this_ptr_00[1].model_name[0x7c] = '\0';
  this_ptr_00[1].model_name[0x7d] = '\0';
  this_ptr_00[1].model_name[0x7e] = '\0';
  this_ptr_00[1].model_name[0x7f] = '\0';
  this_ptr_00[1].model_name[0x80] = '\0';
  this_ptr_00[1].model_name[0x81] = '\0';
  this_ptr_00[1].model_name[0x82] = -0x80;
  this_ptr_00[1].model_name[0x83] = '?';
  return (CEmitter *)(this_ptr_00[-3].model_name + 0x58);
}
