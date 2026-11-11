// Name: core_stranger.cpp_FUN_005628b4
// Address: 005628b4
// Address Range: [[005628b4, 00562b84]]
// Convention: unknown
// Signature: void core_stranger_cpp_FUN_005628b4(void)

#include "nocturne.h"

void core_stranger_cpp_FUN_005628b4(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  CFlame *pCVar4;
  char cVar5;
  char *in_EAX;
  CCharacter *unaff_EBX;
  char *pcVar6;
  
  cVar5 = (char)in_EAX + *in_EAX;
  pcVar6 = (char *)CONCAT31((int3)((uint)in_EAX >> 8),cVar5);
  *pcVar6 = *pcVar6 + cVar5;
  *pcVar6 = *pcVar6 + cVar5;
  pCVar4 = unaff_EBX[2].flames + 2;
  (pCVar4->base).actor_name[0x18] = '\0';
  (pCVar4->base).actor_name[0x19] = '\0';
  (pCVar4->base).actor_name[0x1a] = '\0';
  (pCVar4->base).actor_name[0x1b] = '\0';
  pCVar4 = unaff_EBX[2].flames;
  pCVar4[1].off_event[0x3c] = '\0';
  pCVar4[1].off_event[0x3d] = '\0';
  pCVar4[1].off_event[0x3e] = '\0';
  pCVar4[1].off_event[0x3f] = '\0';
  pCVar4 = unaff_EBX[2].flames;
  pCVar4[1].off_event[0x44] = '\0';
  pCVar4[1].off_event[0x45] = '\0';
  pCVar4[1].off_event[0x46] = '\0';
  pCVar4[1].off_event[0x47] = '\0';
  pCVar4 = unaff_EBX[2].flames;
  pCVar4[1].off_event[0x50] = '\0';
  pCVar4[1].off_event[0x51] = '\0';
  pCVar4[1].off_event[0x52] = '\0';
  pCVar4[1].off_event[0x53] = '\0';
  pCVar4 = unaff_EBX[2].flames;
  pCVar4[1].off_event[0x54] = '\0';
  uVar1 = 0x41200000;
  pCVar4[1].off_event[0x55] = '\0';
  pCVar4[1].off_event[0x56] = '\0';
  pCVar4[1].off_event[0x57] = '\0';
  pCVar4 = unaff_EBX[2].flames;
  pCVar4[1].off_event[0x58] = '\0';
  pCVar4[1].off_event[0x59] = '\0';
  pCVar4[1].off_event[0x5a] = '\0';
  pCVar4[1].off_event[0x5b] = '\0';
  *(uint *)(unaff_EBX[2].flames[1].on_event + 0x5c) = uVar1;
  unaff_EBX[2].flames[2].base.orient_matrix.m[0].x = -1e+30;
  unaff_EBX[2].flames[2].base.location.position.y = -1e+30;
  uVar1 = *(uint *)(unaff_EBX[2].flames[1].on_event + 0x60);
  uVar2 = *(uint *)(unaff_EBX[2].flames[1].off_event + 0x24);
  uVar3 = *(uint *)(unaff_EBX[2].flames[1].off_event + 0x1c);
  *(uint *)(unaff_EBX[2].flames[1].off_event + 8) =
       *(uint *)(unaff_EBX[2].flames[1].off_event + 4);
  *(uint *)unaff_EBX[2].flames[1].off_event = uVar1;
  *(uint *)(unaff_EBX[2].flames[1].off_event + 0x28) = uVar2;
  *(uint *)(unaff_EBX[2].flames[1].off_event + 0x20) = uVar3;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            (&unaff_EBX->model,"p?stranger.dfm" + 2);
  unaff_EBX->layer_action_index = 0;
  pCVar4 = unaff_EBX[2].flames;
  pCVar4[1].off_event[0x40] = '\0';
  pCVar4[1].off_event[0x41] = '\0';
  pCVar4[1].off_event[0x42] = '\0';
  pCVar4[1].off_event[0x43] = '\0';
  unaff_EBX[2].flames[1].intensity = 0.0;
  unaff_EBX[2].flames[1].randomness = 0.0;
  pCVar4 = unaff_EBX[2].flames + 2;
  (pCVar4->base).actor_name[0xc] = '\0';
  (pCVar4->base).actor_name[0xd] = '\0';
  (pCVar4->base).actor_name[0xe] = '\0';
  (pCVar4->base).actor_name[0xf] = '\0';
  *(uint *)(unaff_EBX[2].flames[2].base.actor_name + 8) =
       *(uint *)(unaff_EBX[2].flames[2].base.actor_name + 0xc);
  *(uint *)(unaff_EBX[2].flames[2].base.actor_name + 4) =
       *(uint *)(unaff_EBX[2].flames[2].base.actor_name + 8);
  pCVar4 = unaff_EBX[2].flames + 2;
  (pCVar4->base).actor_name[0x10] = -1;
  (pCVar4->base).actor_name[0x11] = -1;
  (pCVar4->base).actor_name[0x12] = -1;
  (pCVar4->base).actor_name[0x13] = -1;
  pCVar4 = unaff_EBX[2].flames;
  pCVar4[1].off_event[0x48] = '\0';
  pCVar4[1].off_event[0x49] = '\0';
  pCVar4[1].off_event[0x4a] = '\0';
  pCVar4[1].off_event[0x4b] = '\0';
  unaff_EBX[2].flames[1].burn_hero = 0;
  unaff_EBX[2].flames[1].burn_enemy = 0;
  pCVar4 = unaff_EBX[2].flames;
  pCVar4[1].off_event[0x4c] = '\0';
  pCVar4[1].off_event[0x4d] = '\0';
  pCVar4[1].off_event[0x4e] = '\0';
  pCVar4[1].off_event[0x4f] = '\0';
  pCVar4 = unaff_EBX[2].flames + 2;
  (pCVar4->base).actor_name[0x14] = '\0';
  (pCVar4->base).actor_name[0x15] = '\0';
  (pCVar4->base).actor_name[0x16] = '\0';
  (pCVar4->base).actor_name[0x17] = '\0';
  pCVar4 = unaff_EBX[2].flames + 2;
  (pCVar4->base).actor_name[0x1c] = '\0';
  (pCVar4->base).actor_name[0x1d] = '\0';
  (pCVar4->base).actor_name[0x1e] = '\0';
  (pCVar4->base).actor_name[0x1f] = '\0';
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
            ((CKeyFramedModelInstance *)
             ((int)(&unaff_EBX[2].damage_decals[2].transform.m[0].y)
                   [*(int *)&unaff_EBX[2].follow_formation.slots[0xb].field_0x34] + 0x2b4),
             (char *)0x5eb1ca);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a330
            (unaff_EBX,0,1,"draw_stand2holsters",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a330
            (unaff_EBX,1,2,"draw_holsters2aimPistols",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a330
            (unaff_EBX,0,3,"draw_stand2coatPocket",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a330
            (unaff_EBX,3,4,"draw_coatPocket2aimShotgun",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a330
            (unaff_EBX,3,5,"draw_coatPocket2aimFlameThrower",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a330
            (unaff_EBX,1,3,"draw_holsters2CoatPocket",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a330
            (unaff_EBX,0,6,"draw_stand2TossAim",1);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a330
            (unaff_EBX,6,0,"draw_tossAim2Stand",1);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a330
            (unaff_EBX,0xb,4,"draw_shotGunRecoil",1);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a330
            (unaff_EBX,3,7,"draw_coatPocket2aimTommy",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a330
            (unaff_EBX,7,7,"draw_tommyRecoil",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a330
            (unaff_EBX,0,8,"draw_stand2spearhold",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a330
            (unaff_EBX,0xc,8,"draw_spearStab",1);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a330
            (unaff_EBX,0xc,8,"draw_spearOverheadswing",1);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a330
            (unaff_EBX,9,9,"draw_holdCrate",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a330
            (unaff_EBX,3,10,"draw_coatPocket2GasMask",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a330
            (unaff_EBX,10,0,"draw_gasMask2Stand",0);
  core_cloth_cpp_CClothList_add_FUN_005b15c0(&unaff_EBX->cloth_list,"strcoat.cth");
  unaff_EBX[2].flames[2].base.particle_systems[2].next_particle = 0;
  return;
}
