// Name: core_doc.cpp_CDoc_ctor_FUN_004500d0
// Address: 004500d0
// Address Range: [[004500d0, 0045019e]]
// Convention: unknown
// Signature: CDoc * core_doc_cpp_CDoc_ctor_FUN_004500d0(CDoc *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CDoc * core_doc_cpp_CDoc_ctor_FUN_004500d0(CDoc *this_ptr)

{
  int *this_ptr_00;
  CDeformableModelInstance *this_ptr_01;
  int *piVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  EBoxActorPickupType EVar5;
  int iVar6;
  CBoxActor *pCVar7;
  float *pfVar8;
  float *pfVar9;
  CVector3f *pCVar10;
  uint uStack00000104;
  
  iVar6 = core_hero_cpp_FUN_004ce240(this_ptr);
  pCVar7 = core_boxactor_cpp_CBoxActor_ctor_FUN_0041bd30((CBoxActor *)(iVar6 + 0x259b4));
  this_ptr_00 = &pCVar7[-0x4d].base.scale.z;
  *(CHero_full_vtable **)(pCVar7[-0x4d].model.model_name + 0x94) = &g_CDocVTable;
  pCVar7[-1].physics_box.scrape_points[0].raytrace_normal.x = 0.0;
  pCVar7[-1].rpm.y = 0.0;
  pCVar7[-1].rpm.z = 0.0;
  pCVar7[-1].fps = 0.0;
  pCVar7[-1].anim_frame = -0.5235988;
  pCVar7[-0xffffffff00000001].push_sound[4] = '\0';
  pCVar7[-0xffffffff00000001].push_sound[5] = '\0';
  pCVar7[-0xffffffff00000001].push_sound[6] = '\0';
  pCVar7[-0xffffffff00000001].push_sound[7] = '\0';
  pCVar7[-1].push_sfx_handle = 0;
  pCVar7[-1].pushed_by_actor = (CDemonActor *)0x0;
  pCVar7[-1].carrier_actor = (CDemonActor *)0x0;
  pCVar7[-0xffffffff00000001].push_sound[0] = '\0';
  pCVar7[-0xffffffff00000001].push_sound[1] = '\0';
  pCVar7[-0xffffffff00000001].push_sound[2] = '\0';
  pCVar7[-0xffffffff00000001].push_sound[3] = '\0';
  pCVar7[-0xffffffff00000001].push_sound[8] = '\0';
  pCVar7[-0xffffffff00000001].push_sound[9] = '\0';
  pCVar7[-0xffffffff00000001].push_sound[10] = '\0';
  pCVar7[-0xffffffff00000001].push_sound[0xb] = '\0';
  pCVar7[-0xffffffff00000001].push_sound[0x24] = '\0';
  pCVar7[-0xffffffff00000001].push_sound[0x25] = '\0';
  pCVar7[-0xffffffff00000001].push_sound[0x26] = '\0';
  pCVar7[-0xffffffff00000001].push_sound[0x27] = '\0';
  pCVar7[-0xffffffff00000001].push_sound[0x1c] = '\0';
  pCVar7[-0xffffffff00000001].push_sound[0x1d] = '\0';
  pCVar7[-0xffffffff00000001].push_sound[0x1e] = '\0';
  pCVar7[-0xffffffff00000001].push_sound[0x1f] = '\0';
  pCVar7[-0xffffffff00000001].push_sound[0x14] = '\0';
  pCVar7[-0xffffffff00000001].push_sound[0x15] = '\0';
  pCVar7[-0xffffffff00000001].push_sound[0x16] = '\0';
  pCVar7[-0xffffffff00000001].push_sound[0x17] = '\0';
  pCVar7[-0xffffffff00000001].push_sound[0xc] = '\0';
  pCVar7[-0xffffffff00000001].push_sound[0xd] = '\0';
  pCVar7[-0xffffffff00000001].push_sound[0xe] = '\0';
  pCVar7[-0xffffffff00000001].push_sound[0xf] = '\0';
  pCVar7[-0xffffffff00000001].push_sound[0x20] = '\0';
  pCVar7[-0xffffffff00000001].push_sound[0x21] = '\0';
  pCVar7[-0xffffffff00000001].push_sound[0x22] = '\0';
  pCVar7[-0xffffffff00000001].push_sound[0x23] = '\0';
  pCVar7[-0xffffffff00000001].push_sound[0x28] = '\0';
  pCVar7[-0xffffffff00000001].push_sound[0x29] = '\0';
  pCVar7[-0xffffffff00000001].push_sound[0x2a] = '\0';
  pCVar7[-0xffffffff00000001].push_sound[0x2b] = '\0';
  pCVar7[-1].physics_box.rotation_matrix.m[1].x = 0.0;
  pCVar7[-0xffffffff00000001].push_sound[0x2c] = '\0';
  pCVar7[-0xffffffff00000001].push_sound[0x2d] = '\0';
  pCVar7[-0xffffffff00000001].push_sound[0x2e] = '\0';
  pCVar7[-0xffffffff00000001].push_sound[0x2f] = '\0';
  pCVar7[-0xffffffff00000001].push_sound[0x34] = '\0';
  pCVar7[-0xffffffff00000001].push_sound[0x35] = '\0';
  pCVar7[-0xffffffff00000001].push_sound[0x36] = '\0';
  pCVar7[-0xffffffff00000001].push_sound[0x37] = '\0';
  pCVar7[-0xffffffff00000001].push_sound[0x40] = '\0';
  pCVar7[-0xffffffff00000001].push_sound[0x41] = '\0';
  pCVar7[-0xffffffff00000001].push_sound[0x42] = '\0';
  pCVar7[-0xffffffff00000001].push_sound[0x43] = '\0';
  pCVar7[-0xffffffff00000001].push_sound[0x44] = '\0';
  EVar5 = 0x41200000;
  pCVar7[-0xffffffff00000001].push_sound[0x45] = '\0';
  pCVar7[-0xffffffff00000001].push_sound[0x46] = '\0';
  pCVar7[-0xffffffff00000001].push_sound[0x47] = '\0';
  pCVar7[-1].physics_box.linear_velocity.z = -1e+30;
  pCVar7[-1].pickup_type = EVar5;
  pCVar7[-1].physics_box.rotation_matrix.m[2].x = -1e+30;
  pCVar7[-1].cam_orientation.heading = 0.0;
  this_ptr_01 = (CDeformableModelInstance *)(pCVar7[-0x4d].model.model_name + 0x98);
  uVar2 = *(uint *)(pCVar7[-1].push_sound + 0x14);
  uVar3 = *(uint *)(pCVar7[-1].push_sound + 0xc);
  pCVar7[-1].constrain_extents_actor = pCVar7[-1].pushed_by_actor;
  pCVar7[-1].can_be_pushed = (int)pCVar7[-1].carrier_actor;
  *(uint *)(pCVar7[-1].push_sound + 0x18) = uVar2;
  *(uint *)(pCVar7[-1].push_sound + 0x10) = uVar3;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0(this_ptr_01,(char *)0x5cfb87);
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00547480(this_ptr_01);
  pCVar7[-0x48].physics_box.scrape_points[6].transformed_position.z = 0.0;
  pCVar7[-0xffffffff00000001].push_sound[0x30] = '\0';
  pCVar7[-0xffffffff00000001].push_sound[0x31] = '\0';
  pCVar7[-0xffffffff00000001].push_sound[0x32] = '\0';
  pCVar7[-0xffffffff00000001].push_sound[0x33] = '\0';
  pCVar7[-0xffffffff00000001].push_sound[0x50] = '\0';
  pCVar7[-0xffffffff00000001].push_sound[0x51] = '\0';
  pCVar7[-0xffffffff00000001].push_sound[0x52] = '\0';
  pCVar7[-0xffffffff00000001].push_sound[0x53] = '\0';
  pCVar7[-0xffffffff00000001].push_sound[0x54] = '\0';
  pCVar7[-0xffffffff00000001].push_sound[0x55] = '\0';
  pCVar7[-0xffffffff00000001].push_sound[0x56] = '\0';
  pCVar7[-0xffffffff00000001].push_sound[0x57] = '\0';
  pCVar7[-1].physics_box.rotation_matrix.m[0].x = 0.0;
  pCVar7[-1].physics_box.orientation.z = pCVar7[-1].physics_box.rotation_matrix.m[0].x;
  pCVar7[-1].physics_box.orientation.y = pCVar7[-1].physics_box.orientation.z;
  pCVar7[-1].physics_box.rotation_matrix.m[0].y = -NAN;
  pCVar7[-0xffffffff00000001].push_sound[0x38] = '\0';
  pCVar7[-0xffffffff00000001].push_sound[0x39] = '\0';
  pCVar7[-0xffffffff00000001].push_sound[0x3a] = '\0';
  pCVar7[-0xffffffff00000001].push_sound[0x3b] = '\0';
  pCVar7[-0xffffffff00000001].push_sound[0x58] = '\0';
  pCVar7[-0xffffffff00000001].push_sound[0x59] = '\0';
  pCVar7[-0xffffffff00000001].push_sound[0x5a] = '\0';
  pCVar7[-0xffffffff00000001].push_sound[0x5b] = '\0';
  pCVar7[-0xffffffff00000001].push_sound[0x5c] = '\0';
  pCVar7[-0xffffffff00000001].push_sound[0x5d] = '\0';
  pCVar7[-0xffffffff00000001].push_sound[0x5e] = '\0';
  pCVar7[-0xffffffff00000001].push_sound[0x5f] = '\0';
  pCVar7[-0xffffffff00000001].push_sound[0x3c] = '\0';
  pCVar7[-0xffffffff00000001].push_sound[0x3d] = '\0';
  pCVar7[-0xffffffff00000001].push_sound[0x3e] = '\0';
  pCVar7[-0xffffffff00000001].push_sound[0x3f] = '\0';
  pCVar7[-1].physics_box.rotation_matrix.m[0].z = 0.0;
  pCVar7[-1].physics_box.rotation_matrix.m[1].y = 0.0;
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a330
            ((CCharacter *)this_ptr_00,0,1,"draw_L_standholster",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a330
            ((CCharacter *)this_ptr_00,1,2,"draw_L_holsterAim",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a330
            ((CCharacter *)this_ptr_00,0,5,"draw_R_standScabbard",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a330
            ((CCharacter *)this_ptr_00,5,6,"draw_R_scabbardMelee",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a330
            ((CCharacter *)this_ptr_00,0xd,6,"draw_R_meleeAttack1",1);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a330
            ((CCharacter *)this_ptr_00,0xd,6,"draw_R_meleeAttack2",1);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a330
            ((CCharacter *)this_ptr_00,0xd,6,"draw_R_meleeAttack4",1);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a330
            ((CCharacter *)this_ptr_00,0xd,6,"draw_LR_meleeAttack3",1);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a330
            ((CCharacter *)this_ptr_00,0xd,6,"draw_R_crossAttack1",1);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a330
            ((CCharacter *)this_ptr_00,7,7,"draw_holdCrate",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a330
            ((CCharacter *)this_ptr_00,0,3,"draw_stand2coatPocket",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a330
            ((CCharacter *)this_ptr_00,1,3,"draw_holsters2CoatPocket",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a330
            ((CCharacter *)this_ptr_00,0,4,"draw_stand2TossAim",1);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a330
            ((CCharacter *)this_ptr_00,4,0,"draw_tossAim2Stand",1);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a330
            ((CCharacter *)this_ptr_00,1,0x10,"draw_holsters2aimFlashlight",0);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042a330
            ((CCharacter *)this_ptr_00,0x12,2,"draw_L_reload",1);
  uStack00000104 = 0x450430;
  core_cloth_cpp_CClothList_add_FUN_005b15c0
            ((CClothList *)&pCVar7[-0x48].physics_box.scrape_points[6].previous_position.y,
             "LAZ86CLOTH.cth");
  pCVar7[-1].physics_box.scrape_points[0].raytrace_intersection = 0.0;
  pCVar7[-1].physics_box.angular_momentum.x = 0.0;
  pCVar7[-1].physics_box.scrape_points[0].local_position.z = 0.0;
  pCVar7[-1].cam_orientation.heading = 0.0;
  pfVar8 = &pCVar7[-0x49].physics_box.scrape_points[5].raytrace_normal.y;
  pfVar9 = &pCVar7[-1].physics_box.scrape_points[0].raytrace_normal.y;
  do {
    cVar4 = *(char *)pfVar8;
    *(char *)pfVar9 = cVar4;
    if (cVar4 == '\0') break;
    cVar4 = *(char *)((int)pfVar8 + 1);
    pfVar8 = (float *)((int)pfVar8 + 2);
    *(char *)((int)pfVar9 + 1) = cVar4;
    pfVar9 = (float *)((int)pfVar9 + 2);
  } while (cVar4 != '\0');
  pfVar8 = &pCVar7[-0x48].physics_box.scrape_points[6].previous_position.z;
  pCVar10 = &pCVar7[-1].physics_box.scrape_points[5].raytrace_normal;
  do {
    cVar4 = *(char *)pfVar8;
    *(char *)&pCVar10->x = cVar4;
    if (cVar4 == '\0') break;
    cVar4 = *(char *)((int)pfVar8 + 1);
    pfVar8 = (float *)((int)pfVar8 + 2);
    *(char *)((int)&pCVar10->x + 1) = cVar4;
    pCVar10 = (CVector3f *)((int)&pCVar10->x + 2);
  } while (cVar4 != '\0');
  pCVar7[-0x4d].base.particle_systems[2].fade_timer = 1.4013e-45;
  pCVar7[-0x2b].base.scale.z = 0;
  pfVar8 = &pCVar7[-0x2b].base.platform_orientation_delta.z;
  if (pfVar8 != (float *)&stack0x00000110) {
    *pfVar8 = -0.113;
    pCVar7[-0x2b].base.is_renderable = 0x3ec3126f;
    pCVar7[-0x2b].base.is_transparent = 0x3e79db23;
  }
  piVar1 = &pCVar7[-0x2b].base.collision_disabled;
  if (piVar1 != (int *)&stack0x00000128) {
    *piVar1 = 0x3de76c8b;
    pCVar7[-0x2b].base.process_disabled = 0x3ec3126f;
    pCVar7[-0x2b].base.scale.x = 0x3e79db23;
  }
  piVar1 = &pCVar7[-0x2b].base.dead1;
  if (piVar1 == (int *)&stack0x0000011c) {
    return (CDoc *)this_ptr_00;
  }
  *piVar1 = 0x3f000000;
  pCVar7[-0x2b].base.dead2 = 0;
  pCVar7[-0x2b].base.previous_transform_state.position.x = 0.0;
  return (CDoc *)this_ptr_00;
}
