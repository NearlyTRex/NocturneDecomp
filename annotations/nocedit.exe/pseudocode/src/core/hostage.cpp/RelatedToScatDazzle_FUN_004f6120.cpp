// Name: core_hostage.cpp_RelatedToScatDazzle_FUN_004f6120
// Address: 004f6120
// Address Range: [[004f6120, 004f616e]]
// Convention: unknown
// Signature: undefined core_hostage.cpp_RelatedToScatDazzle_FUN_004f6120()

#include "nocturne.h"

/* Signature: byte actors_npc_hostage.cpp_RelatedToScatDazzle(uint param_1) */

void core_hostage_cpp_RelatedToScatDazzle_FUN_004f6120
               (uint param_1,uint param_2,SCollisionInfo *unaff_EBX,uint param_4,
               CNPC *param_5,uint param_6,uint param_7,int param_8)

{
  int iVar1;
  
  iVar1 = (*(param_5->base_character).base_actor.vtable[1].hasCollision)
                    ((CDemonActor *)param_5,unaff_EBX);
  if (0 < iVar1) {
    iVar1 = crt_string_c_stricmp_FUN_005fe7f0((char *)param_5,"ScatDazzle");
    if (iVar1 != 0) {
      if (param_8 != 0) {
        (param_5->base_character).field2_0x240c[0] = '\x01';
        (param_5->base_character).field2_0x240c[1] = '\0';
        (param_5->base_character).field2_0x240c[2] = '\0';
        (param_5->base_character).field2_0x240c[3] = '\0';
      }
      core_npc_cpp_CNPC_FUN_00544b70(param_5);
      return;
    }
  }
  return;
}
