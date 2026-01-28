// Name: core_emitter.cpp_CEmitter_ctor_FUN_004a7ca0
// Address: 004a7ca0
// Address Range: [[004a7ca0, 004a7df6]]
// Convention: __cdecl
// Signature: CEmitter * __cdecl core_emitter_cpp_CEmitter_ctor_FUN_004a7ca0(CEmitter *this_ptr)

#include "nocturne.h"

CEmitter * __cdecl core_emitter_cpp_CEmitter_ctor_FUN_004a7ca0(CEmitter *this_ptr)

{
  char cVar1;
  CDemonActor *pCVar2;
  CKeyFramedModelInstance *this_ptr_00;
  char *pcVar3;
  char *pcVar4;
  
  pCVar2 = core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
                          ((CKeyFramedModelInstance *)&pCVar2[1].unk4.y);
  *(CDemonActor_vtable **)(this_ptr_00[-1].model_name + 0x10) = &g_CEmitterVTable;
  this_ptr_00[-0xffffffff00000001].model_name[0x18] = '\0';
  this_ptr_00[-0xffffffff00000001].model_name[0x19] = '\0';
  this_ptr_00[-0xffffffff00000001].model_name[0x1a] = -0x80;
  this_ptr_00[-0xffffffff00000001].model_name[0x1b] = '?';
  pcVar3 = "none";
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
  pcVar3 = "none";
  pcVar4 = this_ptr_00[-1].animation_state + 0x28;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  this_ptr_00[1].model_name[4] = '\0';
  this_ptr_00[1].model_name[5] = '\0';
  this_ptr_00[1].model_name[6] = '\0';
  this_ptr_00[1].model_name[7] = '\0';
  this_ptr_00[1].model_name[8] = -0x33;
  this_ptr_00[1].model_name[9] = -0x34;
  this_ptr_00[1].model_name[10] = -0x34;
  this_ptr_00[1].model_name[0xb] = '=';
  this_ptr_00[-0xffffffff00000001].model_name[0x24] = '\x01';
  this_ptr_00[-0xffffffff00000001].model_name[0x25] = '\0';
  this_ptr_00[-0xffffffff00000001].model_name[0x26] = '\0';
  this_ptr_00[-0xffffffff00000001].model_name[0x27] = '\0';
  this_ptr_00[-0xffffffff00000001].animation_state[0x94] = -1;
  this_ptr_00[-0xffffffff00000001].animation_state[0x95] = '\0';
  this_ptr_00[-0xffffffff00000001].animation_state[0x96] = '\0';
  this_ptr_00[-0xffffffff00000001].animation_state[0x97] = '\0';
  this_ptr_00[-0xffffffff00000001].animation_state[0x98] = '\0';
  this_ptr_00[-0xffffffff00000001].animation_state[0x99] = '\0';
  this_ptr_00[-0xffffffff00000001].animation_state[0x9a] = '\0';
  this_ptr_00[-0xffffffff00000001].animation_state[0x9b] = '\0';
  this_ptr_00[-1].model_ptr = (CKeyFramedModel *)0x0;
  this_ptr_00[-0xffffffff00000001].animation_state[0x90] = '\x01';
  this_ptr_00[-0xffffffff00000001].animation_state[0x91] = '\0';
  this_ptr_00[-0xffffffff00000001].animation_state[0x92] = '\0';
  this_ptr_00[-0xffffffff00000001].animation_state[0x93] = '\0';
  this_ptr_00[-0xffffffff00000001].animation_state[0x8c] = '\0';
  this_ptr_00[-0xffffffff00000001].animation_state[0x8d] = '\0';
  this_ptr_00[-0xffffffff00000001].animation_state[0x8e] = '\0';
  this_ptr_00[-0xffffffff00000001].animation_state[0x8f] = '\0';
  this_ptr_00[1].model_name[0xc] = '\0';
  this_ptr_00[1].model_name[0xd] = '\0';
  this_ptr_00[1].model_name[0xe] = '\0';
  this_ptr_00[1].model_name[0xf] = '\0';
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (this_ptr_00,"stalrock.kfm");
  this_ptr_00[1].part_visibility_flags[0] = 0x41a00000;
  this_ptr_00[1].part_visibility_flags[1] = 0;
  this_ptr_00[1].part_visibility_flags[2] = 0;
  this_ptr_00[1].part_visibility_flags[3] = 0;
  *(byte *)(this_ptr_00[1].part_visibility_flags + 4) = 0;
  this_ptr_00[1].model_name[0] = '\x01';
  this_ptr_00[1].model_name[1] = '\0';
  this_ptr_00[1].model_name[2] = '\0';
  this_ptr_00[1].model_name[3] = '\0';
  this_ptr_00[1].model_name[0x50] = '\0';
  this_ptr_00[1].model_name[0x51] = '\0';
  this_ptr_00[1].model_name[0x52] = '\0';
  this_ptr_00[1].model_name[0x53] = '\0';
  return (CEmitter *)(this_ptr_00[-2].model_name + 0x38);
}
