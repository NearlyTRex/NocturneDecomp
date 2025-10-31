// Name: core_door.cpp_CDoor_getPropertyList_FUN_00481320
// Address: 00481320
// Address Range: [[00481320, 00481586]]
// Convention: __cdecl
// Signature: void core_door.cpp_CDoor_getPropertyList_FUN_00481320(CDoor * this_ptr, CActorPropertyList * property_list)
// Globals:
//   TerminatedCString s_Model_file_kfm_00621354
//   TerminatedCString s_Door_type_00621391
//   TerminatedCString s_Door_side_006213a6
//   TerminatedCString s_Door_state_006213b0
//   TerminatedCString s_Door_swing_006213d7
//   TerminatedCString s_Open_condition_006213e2
//   TerminatedCString s_Close_condition_006213f1
//   TerminatedCString s_Open_rule_00621401
//   TerminatedCString s_Open_sound_0062140b
//   TerminatedCString s_Close_sound_00621416
//   TerminatedCString s_Key_mask_00621422
//   TerminatedCString s_Maximum_open_distance_ft_0062142b
//   TerminatedCString s_Maximum_open_param_00621446
//   TerminatedCString s_Opening_speed_sec_00621459
//   TerminatedCString s_Close_speed_sec_0062146d
//   TerminatedCString s_groundType_0062147f
//   TerminatedCString s_Event_to_trigger_when_op_0062148a
//   TerminatedCString s_Event_to_trigger_when_cl_006214a5
//   TerminatedCString s_Block_virtual_director_006214c2
//   TerminatedCString s_One_shot_006214e5
//   TerminatedCString s_Plot_as_box_in_shadow_006214ee
//   TerminatedCString s_Open_from_side_0062153c
//   TerminatedCString s_Leave_bullet_holes_on_me_0062154b
//   TerminatedCString s_Locked_sound_00621564
//   void* PTR_s_Normal_00670300 = 00621366
//   void* PTR_s_Left_00670320 = 0062139b
//   void* PTR_s_Clockwise_00670330 = 006213bb
//   void* PTR_s_No_00670340 = 006214d9
//   void* PTR_s_Both_00670358 = 00621504
// Function calls:
//   core_actor.cpp_CActorPropertyList_FUN_0040e160
//   core_actor.cpp_CActorPropertyList_FUN_0040e1e0
//   core_actor.cpp_CActorPropertyList_FUN_0040e2d0
//   core_actor.cpp_CActorPropertyList_FUN_0040e300
//   core_actor.cpp_CActorPropertyList_FUN_0040e330
//   core_actor.cpp_CActorPropertyList_FUN_0040e3b0
//   core_actor.cpp_CActorPropertyList_FUN_0040e460
//   core_actor.cpp_CActorPropertyList_FUN_0040e480
//   core_actor.cpp_CActorPropertyList_FUN_0040e5a0
//   core_actor.cpp_CActorPropertyList_FUN_0040e640
//   core_actor.cpp_CActorPropertyList_FUN_0040e670
//   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290

#include "nocturne.h"

void __cdecl
core_door_cpp_CDoor_getPropertyList_FUN_00481320(CDoor *this_ptr,CActorPropertyList *property_list)

{
  char *pcStack00000020;
  char *pcStack0000003c;
  char *pcStack00000048;
  char *pcStack0000004c;
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(&this_ptr->base_actor,property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e3b0(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e640(property_list);
  if (this_ptr->door_type == 2) {
    core_actor_cpp_CActorPropertyList_FUN_0040e640(property_list);
  }
  core_actor_cpp_CActorPropertyList_FUN_0040e670(property_list);
  if (this_ptr->door_type == 0) {
    core_actor_cpp_CActorPropertyList_FUN_0040e640(property_list);
  }
  core_actor_cpp_CActorPropertyList_FUN_0040e460(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e460(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e5a0(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e2d0(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e2d0(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e1e0(property_list);
  pcStack00000020 = (char *)0x0;
  core_actor_cpp_CActorPropertyList_FUN_0040e160(property_list);
  pcStack00000020 = (char *)&this_ptr->open_speed;
  core_actor_cpp_CActorPropertyList_FUN_0040e160(property_list);
  pcStack00000020 = "Close speed (sec)";
  core_actor_cpp_CActorPropertyList_FUN_0040e160(property_list);
  pcStack00000020 = (char *)0x48149d;
  core_actor_cpp_CActorPropertyList_FUN_0040e300(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e480(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e480(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e330(property_list);
  pcStack0000003c = (char *)&this_ptr->one_shot;
  core_actor_cpp_CActorPropertyList_FUN_0040e640(property_list);
  pcStack0000003c = "Plot as box in shadow";
  core_actor_cpp_CActorPropertyList_FUN_0040e330(property_list);
  pcStack0000003c = (char *)0x4;
  core_actor_cpp_CActorPropertyList_FUN_0040e640(property_list);
  pcStack00000048 = (char *)&this_ptr->allow_bullet_holes;
  pcStack0000003c = (char *)0x48153e;
  core_actor_cpp_CActorPropertyList_FUN_0040e330(property_list);
  pcStack0000004c = this_ptr->field9_0x47c + 0x4b0;
  pcStack00000048 = "Locked sound";
  core_actor_cpp_CActorPropertyList_FUN_0040e2d0(property_list);
  return;
}


// Assembly code:
// 00481320: PUSH EBX
//   Label: core_door.cpp_CDoor_getPropertyList_FUN_00481320
// 00481321: PUSH ESI
// 00481322: PUSH EDI
// 00481323: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00481327: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0048132b: PUSH ESI
// 0048132c: PUSH EBX
// 0048132d: CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
//   XREF to: 0040d290 (UNCONDITIONAL_CALL)
// 00481332: ADD ESP,0x8
// 00481335: PUSH 0x0
// 00481337: LEA EAX,[EBX + 0x158]
// 0048133d: PUSH EAX
// 0048133e: PUSH 0x621354
//   XREF to: 00621354 (DATA)
// 00481343: PUSH ESI
// 00481344: CALL core_actor.cpp_CActorPropertyList_FUN_0040e3b0
//   XREF to: 0040e3b0 (UNCONDITIONAL_CALL)
// 00481349: ADD ESP,0x10
// 0048134c: LEA EAX,[EBX + 0x2d8]
// 00481352: PUSH EAX
// 00481353: PUSH 0x670300
//   XREF to: 00670300 (DATA)
// 00481358: PUSH 0x4
// 0048135a: PUSH 0x621391
//   XREF to: 00621391 (DATA)
// 0048135f: PUSH ESI
// 00481360: CALL core_actor.cpp_CActorPropertyList_FUN_0040e640
//   XREF to: 0040e640 (UNCONDITIONAL_CALL)
// 00481365: MOV EDX,dword ptr [EBX + 0x2d8]
// 0048136b: ADD ESP,0x14
// 0048136e: CMP EDX,0x2
// 00481371: JZ 0x0048155a
//   XREF to: 0048155a (CONDITIONAL_JUMP)
// 00481377: PUSH 0x4812b0
//   Label: LAB_00481377
//   XREF to: 004812b0 (DATA)
// 0048137c: PUSH 0x481250
//   XREF to: 00481250 (DATA)
// 00481381: PUSH 0x6213b0
//   XREF to: 006213b0 (DATA)
// 00481386: PUSH ESI
// 00481387: CALL core_actor.cpp_CActorPropertyList_FUN_0040e670
//   XREF to: 0040e670 (UNCONDITIONAL_CALL)
// 0048138c: MOV ECX,dword ptr [EBX + 0x2d8]
// 00481392: ADD ESP,0x10
// 00481395: TEST ECX,ECX
// 00481397: JNZ 0x004813b5
//   XREF to: 004813b5 (CONDITIONAL_JUMP)
// 00481399: LEA EAX,[EBX + 0x2e4]
// 0048139f: PUSH EAX
// 004813a0: PUSH 0x670330
//   XREF to: 00670330 (DATA)
// 004813a5: PUSH 0x2
// 004813a7: PUSH 0x6213d7
//   XREF to: 006213d7 (DATA)
// 004813ac: PUSH ESI
// 004813ad: CALL core_actor.cpp_CActorPropertyList_FUN_0040e640
//   XREF to: 0040e640 (UNCONDITIONAL_CALL)
// 004813b2: ADD ESP,0x14
// 004813b5: LEA EAX,[EBX + 0x2e8]
//   Label: LAB_004813b5
// 004813bb: PUSH EAX
// 004813bc: PUSH 0x6213e2
//   XREF to: 006213e2 (DATA)
// 004813c1: PUSH ESI
// 004813c2: CALL core_actor.cpp_CActorPropertyList_FUN_0040e460
//   XREF to: 0040e460 (UNCONDITIONAL_CALL)
// 004813c7: ADD ESP,0xc
// 004813ca: LEA EAX,[EBX + 0x34c]
// 004813d0: PUSH EAX
// 004813d1: PUSH 0x6213f1
//   XREF to: 006213f1 (DATA)
// 004813d6: PUSH ESI
// 004813d7: CALL core_actor.cpp_CActorPropertyList_FUN_0040e460
//   XREF to: 0040e460 (UNCONDITIONAL_CALL)
// 004813dc: ADD ESP,0xc
// 004813df: PUSH -0x1
// 004813e1: LEA EAX,[EBX + 0x478]
// 004813e7: PUSH EAX
// 004813e8: PUSH 0x621401
//   XREF to: 00621401 (DATA)
// 004813ed: PUSH ESI
// 004813ee: CALL core_actor.cpp_CActorPropertyList_FUN_0040e5a0
//   XREF to: 0040e5a0 (UNCONDITIONAL_CALL)
// 004813f3: ADD ESP,0x10
// 004813f6: LEA EAX,[EBX + 0x864]
// 004813fc: PUSH EAX
// 004813fd: PUSH 0x62140b
//   XREF to: 0062140b (DATA)
// 00481402: PUSH ESI
// 00481403: CALL core_actor.cpp_CActorPropertyList_FUN_0040e2d0
//   XREF to: 0040e2d0 (UNCONDITIONAL_CALL)
// 00481408: ADD ESP,0xc
// 0048140b: LEA EAX,[EBX + 0x8c8]
// 00481411: PUSH EAX
// 00481412: PUSH 0x621416
//   XREF to: 00621416 (DATA)
// 00481417: PUSH ESI
// 00481418: CALL core_actor.cpp_CActorPropertyList_FUN_0040e2d0
//   XREF to: 0040e2d0 (UNCONDITIONAL_CALL)
// 0048141d: ADD ESP,0xc
// 00481420: PUSH 0x0
// 00481422: LEA EAX,[EBX + 0x990]
// 00481428: PUSH EAX
// 00481429: PUSH 0x621422
//   XREF to: 00621422 (DATA)
// 0048142e: PUSH ESI
// 0048142f: CALL core_actor.cpp_CActorPropertyList_FUN_0040e1e0
//   XREF to: 0040e1e0 (UNCONDITIONAL_CALL)
// 00481434: ADD ESP,0x10
// 00481437: MOV EDI,dword ptr [EBX + 0x2d8]
// 0048143d: LEA EAX,[EBX + 0x9b0]
// 00481443: CMP EDI,0x1
// 00481446: JNZ 0x0048157a
//   XREF to: 0048157a (CONDITIONAL_JUMP)
// 0048144c: PUSH 0x0
// 0048144e: PUSH EAX
// 0048144f: PUSH 0x62142b
//   XREF to: 0062142b (DATA)
// 00481454: PUSH ESI
//   Label: LAB_00481454
// 00481455: CALL core_actor.cpp_CActorPropertyList_FUN_0040e160
//   XREF to: 0040e160 (UNCONDITIONAL_CALL)
// 0048145a: ADD ESP,0x10
// 0048145d: PUSH 0x0
// 0048145f: LEA EAX,[EBX + 0x9b4]
// 00481465: PUSH EAX
// 00481466: PUSH 0x621459
//   XREF to: 00621459 (DATA)
// 0048146b: PUSH ESI
// 0048146c: CALL core_actor.cpp_CActorPropertyList_FUN_0040e160
//   XREF to: 0040e160 (UNCONDITIONAL_CALL)
// 00481471: ADD ESP,0x10
// 00481474: PUSH 0x0
// 00481476: LEA EAX,[EBX + 0x9b8]
// 0048147c: PUSH EAX
// 0048147d: PUSH 0x62146d
//   XREF to: 0062146d (DATA)
// 00481482: PUSH ESI
// 00481483: CALL core_actor.cpp_CActorPropertyList_FUN_0040e160
//   XREF to: 0040e160 (UNCONDITIONAL_CALL)
// 00481488: ADD ESP,0x10
// 0048148b: LEA EAX,[EBX + 0x2d4]
// 00481491: PUSH EAX
// 00481492: PUSH 0x62147f
//   XREF to: 0062147f (DATA)
// 00481497: PUSH ESI
// 00481498: CALL core_actor.cpp_CActorPropertyList_FUN_0040e300
//   XREF to: 0040e300 (UNCONDITIONAL_CALL)
// 0048149d: ADD ESP,0xc
// 004814a0: LEA EAX,[EBX + 0x3b0]
// 004814a6: PUSH EAX
// 004814a7: PUSH 0x62148a
//   XREF to: 0062148a (DATA)
// 004814ac: PUSH ESI
// 004814ad: CALL core_actor.cpp_CActorPropertyList_FUN_0040e480
//   XREF to: 0040e480 (UNCONDITIONAL_CALL)
// 004814b2: ADD ESP,0xc
// 004814b5: LEA EAX,[EBX + 0x414]
// 004814bb: PUSH EAX
// 004814bc: PUSH 0x6214a5
//   XREF to: 006214a5 (DATA)
// 004814c1: PUSH ESI
// 004814c2: CALL core_actor.cpp_CActorPropertyList_FUN_0040e480
//   XREF to: 0040e480 (UNCONDITIONAL_CALL)
// 004814c7: ADD ESP,0xc
// 004814ca: LEA EAX,[EBX + 0x9d0]
// 004814d0: PUSH EAX
// 004814d1: PUSH 0x6214c2
//   XREF to: 006214c2 (DATA)
// 004814d6: PUSH ESI
// 004814d7: CALL core_actor.cpp_CActorPropertyList_FUN_0040e330
//   XREF to: 0040e330 (UNCONDITIONAL_CALL)
// 004814dc: ADD ESP,0xc
// 004814df: LEA EAX,[EBX + 0x9c8]
// 004814e5: PUSH EAX
// 004814e6: PUSH 0x670340
//   XREF to: 00670340 (DATA)
// 004814eb: PUSH 0x3
// 004814ed: PUSH 0x6214e5
//   XREF to: 006214e5 (DATA)
// 004814f2: PUSH ESI
// 004814f3: CALL core_actor.cpp_CActorPropertyList_FUN_0040e640
//   XREF to: 0040e640 (UNCONDITIONAL_CALL)
// 004814f8: ADD ESP,0x14
// 004814fb: LEA EAX,[EBX + 0x9d4]
// 00481501: PUSH EAX
// 00481502: PUSH 0x6214ee
//   XREF to: 006214ee (DATA)
// 00481507: PUSH ESI
// 00481508: CALL core_actor.cpp_CActorPropertyList_FUN_0040e330
//   XREF to: 0040e330 (UNCONDITIONAL_CALL)
// 0048150d: ADD ESP,0xc
// 00481510: LEA EAX,[EBX + 0x9d8]
// 00481516: PUSH EAX
// 00481517: PUSH 0x670358
//   XREF to: 00670358 (DATA)
// 0048151c: PUSH 0x4
// 0048151e: PUSH 0x62153c
//   XREF to: 0062153c (DATA)
// 00481523: PUSH ESI
// 00481524: CALL core_actor.cpp_CActorPropertyList_FUN_0040e640
//   XREF to: 0040e640 (UNCONDITIONAL_CALL)
// 00481529: ADD ESP,0x14
// 0048152c: LEA EAX,[EBX + 0x9dc]
// 00481532: PUSH EAX
// 00481533: PUSH 0x62154b
//   XREF to: 0062154b (DATA)
// 00481538: PUSH ESI
// 00481539: CALL core_actor.cpp_CActorPropertyList_FUN_0040e330
//   XREF to: 0040e330 (UNCONDITIONAL_CALL)
// 0048153e: ADD ESP,0xc
// 00481541: ADD EBX,0x92c
// 00481547: PUSH EBX
// 00481548: PUSH 0x621564
//   XREF to: 00621564 (DATA)
// 0048154d: PUSH ESI
// 0048154e: CALL core_actor.cpp_CActorPropertyList_FUN_0040e2d0
//   XREF to: 0040e2d0 (UNCONDITIONAL_CALL)
// 00481553: ADD ESP,0xc
// 00481556: POP EDI
// 00481557: POP ESI
// 00481558: POP EBX
// 00481559: RET
// 0048155a: LEA EAX,[EBX + 0x2dc]
//   Label: LAB_0048155a
// 00481560: PUSH EAX
// 00481561: PUSH 0x670320
//   XREF to: 00670320 (DATA)
// 00481566: PUSH EDX
// 00481567: PUSH 0x6213a6
//   XREF to: 006213a6 (DATA)
// 0048156c: PUSH ESI
// 0048156d: CALL core_actor.cpp_CActorPropertyList_FUN_0040e640
//   XREF to: 0040e640 (UNCONDITIONAL_CALL)
// 00481572: ADD ESP,0x14
// 00481575: JMP 0x00481377
//   XREF to: 00481377 (UNCONDITIONAL_JUMP)
// 0048157a: PUSH 0x0
//   Label: LAB_0048157a
// 0048157c: PUSH EAX
// 0048157d: PUSH 0x621446
//   XREF to: 00621446 (DATA)
// 00481582: JMP 0x00481454
//   XREF to: 00481454 (UNCONDITIONAL_JUMP)
