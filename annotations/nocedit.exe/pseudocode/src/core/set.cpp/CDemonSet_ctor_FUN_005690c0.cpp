// Name: core_set.cpp_CDemonSet_ctor_FUN_005690c0
// Address: 005690c0
// Address Range: [[005690c0, 0056934f]]
// Convention: __cdecl
// Signature: CDemonSet * __cdecl core_set_cpp_CDemonSet_ctor_FUN_005690c0(CDemonSet *this_ptr)

#include "nocturne.h"

CDemonSet * __cdecl core_set_cpp_CDemonSet_ctor_FUN_005690c0(CDemonSet *this_ptr)

{
  CDemonSet *this_ptr_00;
  char cVar1;
  CDemonSet_ptr_4 pvVar2;
  CDemonSet_ptr_105008 pvVar3;
  CDemonSet_ptr_1420992 pvVar4;
  CDemonSet_ptr_1422356 pvVar5;
  char *pcVar2;
  char *pcVar3;
  
  pvVar2 = __arrinit(this_ptr->cameras,0xfa,&g_C3DSCameraTypeInfo);
  pvVar3 = __arrinit(ADJ(pvVar2)->lights,200,&g_C3DSLightTypeInfo);
  pvVar4 = __arrinit(ADJ(pvVar3)->rooms,0x14,&g_SRoomTypeInfo);
  pvVar5 = __arrinit(ADJ(pvVar4)->vdir_boxes,0xfa,&g_SVDBoxTypeInfo);
  this_ptr_00 = ADJ(pvVar5);
  this_ptr_00->camera_count = 0;
  ADJ(pvVar5)->light_count = 0;
  ADJ(pvVar5)->dead1 = -1;
  ADJ(pvVar5)->dead2 = -1;
  ADJ(pvVar5)->geometry_filename[0] = '\0';
  ADJ(pvVar5)->actor_count = 0;
  ADJ(pvVar5)->character_count = 0;
  ADJ(pvVar5)->enemy_count = 0;
  ADJ(pvVar5)->threat_count = 0;
  ADJ(pvVar5)->waypoint_count = 0;
  ADJ(pvVar5)->sorted_render_actor_count = 0;
  ADJ(pvVar5)->collidable_actor_count = 0;
  ADJ(pvVar5)->renderable_actor_count = 0;
  ADJ(pvVar5)->camera_enabled_flag = 1;
  ADJ(pvVar5)->selected_camera_index = -1;
  ADJ(pvVar5)->previous_best_camera_index = -1;
  ADJ(pvVar5)->previous_best_camera_timer = 0.0;
  ADJ(pvVar5)->default_room_size = 0;
  ADJ(pvVar5)->room_count = 0;
  ADJ(pvVar5)->lighting_quality_mode = 0;
  ADJ(pvVar5)->disable_spotlight_shadows = 0;
  ADJ(pvVar5)->disable_water_rendering = 0;
  pcVar2 = "none";
  ADJ(pvVar5)->disable_sky_rendering = 0;
  pcVar3 = ADJ(pvVar5)->enviro_model_name;
  ADJ(pvVar5)->use_enviro_model = 0;
  do {
    cVar1 = *pcVar2;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  core_setcolid_cpp_CDemonSet_init_FUN_00574180(this_ptr_00);
  ADJ(pvVar5)->directional_light_ratio_enabled = 0;
  ADJ(pvVar5)->set_file_version = 0;
  ADJ(pvVar5)->default_ground_type = 2;
  ADJ(pvVar5)->camera_switch_cooldown = 0.0;
  ADJ(pvVar5)->actor_list_capacity = 0;
  ADJ(pvVar5)->has_sky = 0;
  ADJ(pvVar5)->mirror_glass_actor_count = 0;
  ADJ(pvVar5)->mirror_camera_dirty = 0;
  ADJ(pvVar5)->vdir_box_count = 0;
  (ADJ(pvVar5)->flat_color).r = 0x10000;
  (ADJ(pvVar5)->flat_color).g = 0x10000;
  pcVar2 = "none";
  (ADJ(pvVar5)->flat_color).b = 0x10000;
  ADJ(pvVar5)->mirror_lighting_cached = 0;
  pcVar3 = ADJ(pvVar5)->world_geometry_name;
  ADJ(pvVar5)->use_world_geometry_flag = 0;
  do {
    cVar1 = *pcVar2;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  ADJ(pvVar5)->disable_directional_lighting = 0;
  ADJ(pvVar5)->default_master_reverb = 0;
  ADJ(pvVar5)->rendering_mode = 0;
  (ADJ(pvVar5)->light_direction).x = -37000;
  (ADJ(pvVar5)->light_direction).y = -37000;
  (ADJ(pvVar5)->light_direction).z = 37000;
  ADJ(pvVar5)->ambient_base_quick = 0x280;
  ADJ(pvVar5)->skip_normal_normalization = 0;
  ADJ(pvVar5)->per_pixel_lighting_enabled = 0;
  return this_ptr_00;
}
