// Name: core_trigger.cpp_CTrigger_FUN_005e1350
// Address: 005e1350
// Address Range: [[005e1350, 005e1650]]
// Convention: __cdecl
// Signature: void core_trigger.cpp_CTrigger_FUN_005e1350(CTrigger * this_ptr)
// Cross-references:
//   core_waypoint.cpp_CWayPoint_FUN_005ec690 (005ec690) at 005ec69b [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_With_CTRL_held_down_use__00655a3c
//   TerminatedCString s_Each_frame_the_trigger_e_00655a6c
//   TerminatedCString s_Figuring_out_which_of_th_00655ab2
//   TerminatedCString s_into_two_phases_First_we_00655af7
//   TerminatedCString s_frame_depending_on_who_t_00655b43
//   TerminatedCString s_depending_on_the_trigger_00655b90
//   TerminatedCString s_Description_of_who_trigg_00655baf
//   TerminatedCString s_Hero_triggers_me_00655bd6
//   TerminatedCString s_The_trigger_is_active_wh_00655bea
//   TerminatedCString s_An_actor_triggers_me_00655c28
//   TerminatedCString s_The_trigger_is_active_wh_00655c40
//   TerminatedCString s_name_is_inside_the_trigg_00655c8b
//   TerminatedCString s_Light_triggers_me_00655caf
//   TerminatedCString s_The_trigger_is_active_wh_00655cc4
//   TerminatedCString s_is_in_a_given_range_00655d0f
//   TerminatedCString s_The_action_button_trigge_00655d2c
//   TerminatedCString s_The_trigger_is_active_wh_00655d4d
//   TerminatedCString s_when_standing_right_in_f_00655d93
//   TerminatedCString s_Bullet_triggers_me_00655dc7
//   TerminatedCString s_The_trigger_is_active_wh_00655ddd
//   TerminatedCString s_Laser_triggers_me_00655e18
//   TerminatedCString s_The_trigger_is_active_wh_00655e2d
//   TerminatedCString s_Explosion_triggers_me_00655e67
//   TerminatedCString s_The_trigger_is_active_wh_00655e80
//   TerminatedCString s_Damage_triggers_me_00655ec0
//   TerminatedCString s_The_trigger_is_active_wh_00655ed6
//   TerminatedCString s_Motion_triggers_me_00655f13
//   TerminatedCString s_The_trigger_is_active_wh_00655f29
//   TerminatedCString s_Matched_actors_trigger_m_00655f79
//   TerminatedCString s_The_trigger_is_active_wh_00655f96
//   TerminatedCString s_that_matches_the_wildspe_00655fe3
//   TerminatedCString s_Actor_type_s_is_a_list_o_00656018
//   TerminatedCString s_are_of_type_CDemonActor_0065605e
//   TerminatedCString s_Actor_name_is_wildcard_p_00656084
//   TerminatedCString s_to_match_and_are_support_006560cf
//   TerminatedCString s_Description_of_trigger_t_0065610d
//   TerminatedCString s_Momentary_0065612b
//   TerminatedCString s_The_on_event_is_raised_w_00656138
//   TerminatedCString s_event_is_raised_when_the_00656180
//   TerminatedCString s_One_shot_006561b8
//   TerminatedCString s_The_off_event_will_be_ra_006561c4
//   TerminatedCString s_Once_the_trigger_becomes_00656215
//   TerminatedCString s_even_the_trigger_becomes_00656262
//   TerminatedCString s_Rising_edge_0065628d
//   TerminatedCString s_The_on_event_is_raised_w_0065629c
//   TerminatedCString s_active_state_This_will_s_006562eb
//   TerminatedCString s_the_trigger_becomes_inac_0065633a
//   TerminatedCString s_Falling_edge_0065637b
//   TerminatedCString s_The_on_event_is_raised_w_0065638b
//   TerminatedCString s_inactive_state_This_will_006563d8
//   TerminatedCString s_the_trigger_becomes_acti_00656429
// Function calls:
//   core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150
//   core_actor.cpp_drawTextLine_FUN_0040d240

#include "nocturne.h"

void __cdecl core_trigger_cpp_CTrigger_FUN_005e1350(CTrigger *this_ptr)

{
  int *in_stack_00000008;
  undefined4 uStack00000028;
  
  core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150(&this_ptr->base_actor,in_stack_00000008);
  *in_stack_00000008 = *in_stack_00000008 + 0xb;
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"With CTRL held down, use slew keys to size box.");
  *in_stack_00000008 = *in_stack_00000008 + 0xb;
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"Each frame, the trigger either raises the on event, or the off event.");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"Figuring out which of these two events will be raised can be divided");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"into two phases.  First we figure out if the trigger is \"active\" on a given");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"frame depending on \"who triggers me\".  Next, we decide which event to raise,");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"depending on the trigger type.");
  *in_stack_00000008 = *in_stack_00000008 + 0xb;
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"Description of \"who triggers\" options:");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"   Hero triggers me");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"        The trigger is active when the hero is inside my box.");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"   An actor triggers me");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"        The trigger is active when the *ONE* specific actor with the given");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"        name is inside the trigger.");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"   Light triggers me");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"        The trigger is active when the amount of light on the center point");
  uStack00000028 = 0x5e144c;
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"        is in a given range.");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"   The action button triggers me");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"        The trigger is active when the hero presses the action button");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"        when standing right in front of the trigger");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"   Bullet triggers me");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"        The trigger is active when it gets hit by a bullet");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"   Laser triggers me");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"        The trigger is active when it gets hit by a laser");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"   Explosion triggers me");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"        The trigger is active when a nearby explosion is active");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"   Damage triggers me");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"        The trigger is active when its 'hitpoints' reaches 0");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"   Motion triggers me");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"        The trigger is active when a hero is in the box with some control input");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"   Matched actors trigger me");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"        The trigger is active when an actor of the correct type, with a name");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"        that matches the wildspec is inside the box.");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"            Actor type(s) is a list of actor class names.  All actors");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"              are of type CDemonActor");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"            Actor name is wildcard pattern string specifying an actor name");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"              to match.  ? and * are supported in the pattern");
  *in_stack_00000008 = *in_stack_00000008 + 0xb;
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"Description of trigger types:");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"   Momentary");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"        The on event is raised while the trigger is active, and the off");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"        event is raised when the trigger is not active.");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"   One shot");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"        The off event will be raised until the first time the trigger is active.");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"        Once the trigger becomes active, the on event will always be raised,");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"        even the trigger becomes inactive.");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"   Rising edge");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"        The on event is raised when the trigger changes from an inactive to an");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"        active state.  This will strobe the on event for a single frame, until");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"        the trigger becomes inactive and then active once again.");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"   Falling edge");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"        The on event is raised when the trigger changes from an active to an");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"        inactive state.  This will strobe the on event for a single frame, until");
  core_actor_cpp_drawTextLine_FUN_0040d240(in_stack_00000008,"        the trigger becomes active and then inactive once again.");
  return;
}


// Assembly code:
// 005e1350: PUSH EBX
//   Label: core_trigger.cpp_CTrigger_FUN_005e1350
// 005e1351: PUSH EBP
// 005e1352: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 005e1356: PUSH EDI
// 005e1357: PUSH ESI
// 005e1358: PUSH EBX
// 005e1359: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 005e135d: PUSH EDX
// 005e135e: CALL core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150
//   XREF to: 0040d150 (UNCONDITIONAL_CALL)
// 005e1363: ADD ESP,0x8
// 005e1366: MOV ECX,dword ptr [EBX]
// 005e1368: PUSH 0x655a3c
//   XREF to: 00655a3c (DATA)
// 005e136d: ADD ECX,0xb
// 005e1370: PUSH EBX
// 005e1371: MOV dword ptr [EBX],ECX
// 005e1373: CALL core_actor.cpp_drawTextLine_FUN_0040d240
//   XREF to: 0040d240 (UNCONDITIONAL_CALL)
// 005e1378: ADD ESP,0x8
// 005e137b: MOV ESI,dword ptr [EBX]
// 005e137d: PUSH 0x655a6c
//   XREF to: 00655a6c (DATA)
// 005e1382: ADD ESI,0xb
// 005e1385: PUSH EBX
// 005e1386: MOV dword ptr [EBX],ESI
// 005e1388: CALL core_actor.cpp_drawTextLine_FUN_0040d240
//   XREF to: 0040d240 (UNCONDITIONAL_CALL)
// 005e138d: ADD ESP,0x8
// 005e1390: PUSH 0x655ab2
//   XREF to: 00655ab2 (DATA)
// 005e1395: PUSH EBX
// 005e1396: CALL core_actor.cpp_drawTextLine_FUN_0040d240
//   XREF to: 0040d240 (UNCONDITIONAL_CALL)
// 005e139b: ADD ESP,0x8
// 005e139e: PUSH 0x655af7
//   XREF to: 00655af7 (DATA)
// 005e13a3: PUSH EBX
// 005e13a4: CALL core_actor.cpp_drawTextLine_FUN_0040d240
//   XREF to: 0040d240 (UNCONDITIONAL_CALL)
// 005e13a9: ADD ESP,0x8
// 005e13ac: PUSH 0x655b43
//   XREF to: 00655b43 (DATA)
// 005e13b1: PUSH EBX
// 005e13b2: CALL core_actor.cpp_drawTextLine_FUN_0040d240
//   XREF to: 0040d240 (UNCONDITIONAL_CALL)
// 005e13b7: ADD ESP,0x8
// 005e13ba: PUSH 0x655b90
//   XREF to: 00655b90 (DATA)
// 005e13bf: PUSH EBX
// 005e13c0: CALL core_actor.cpp_drawTextLine_FUN_0040d240
//   XREF to: 0040d240 (UNCONDITIONAL_CALL)
// 005e13c5: ADD ESP,0x8
// 005e13c8: MOV EDI,dword ptr [EBX]
// 005e13ca: PUSH 0x655baf
//   XREF to: 00655baf (DATA)
// 005e13cf: ADD EDI,0xb
// 005e13d2: PUSH EBX
// 005e13d3: MOV dword ptr [EBX],EDI
// 005e13d5: CALL core_actor.cpp_drawTextLine_FUN_0040d240
//   XREF to: 0040d240 (UNCONDITIONAL_CALL)
// 005e13da: ADD ESP,0x8
// 005e13dd: PUSH 0x655bd6
//   XREF to: 00655bd6 (DATA)
// 005e13e2: PUSH EBX
// 005e13e3: CALL core_actor.cpp_drawTextLine_FUN_0040d240
//   XREF to: 0040d240 (UNCONDITIONAL_CALL)
// 005e13e8: ADD ESP,0x8
// 005e13eb: PUSH 0x655bea
//   XREF to: 00655bea (DATA)
// 005e13f0: PUSH EBX
// 005e13f1: CALL core_actor.cpp_drawTextLine_FUN_0040d240
//   XREF to: 0040d240 (UNCONDITIONAL_CALL)
// 005e13f6: ADD ESP,0x8
// 005e13f9: PUSH 0x655c28
//   XREF to: 00655c28 (DATA)
// 005e13fe: PUSH EBX
// 005e13ff: CALL core_actor.cpp_drawTextLine_FUN_0040d240
//   XREF to: 0040d240 (UNCONDITIONAL_CALL)
// 005e1404: ADD ESP,0x8
// 005e1407: PUSH 0x655c40
//   XREF to: 00655c40 (DATA)
// 005e140c: PUSH EBX
// 005e140d: CALL core_actor.cpp_drawTextLine_FUN_0040d240
//   XREF to: 0040d240 (UNCONDITIONAL_CALL)
// 005e1412: ADD ESP,0x8
// 005e1415: PUSH 0x655c8b
//   XREF to: 00655c8b (DATA)
// 005e141a: PUSH EBX
// 005e141b: CALL core_actor.cpp_drawTextLine_FUN_0040d240
//   XREF to: 0040d240 (UNCONDITIONAL_CALL)
// 005e1420: ADD ESP,0x8
// 005e1423: PUSH 0x655caf
//   XREF to: 00655caf (DATA)
// 005e1428: PUSH EBX
// 005e1429: CALL core_actor.cpp_drawTextLine_FUN_0040d240
//   XREF to: 0040d240 (UNCONDITIONAL_CALL)
// 005e142e: ADD ESP,0x8
// 005e1431: PUSH 0x655cc4
//   XREF to: 00655cc4 (DATA)
// 005e1436: PUSH EBX
// 005e1437: CALL core_actor.cpp_drawTextLine_FUN_0040d240
//   XREF to: 0040d240 (UNCONDITIONAL_CALL)
// 005e143c: ADD ESP,0x8
// 005e143f: POP ESI
// 005e1440: POP EDI
// 005e1441: PUSH 0x655d0f
//   XREF to: 00655d0f (DATA)
// 005e1446: PUSH EBX
// 005e1447: CALL core_actor.cpp_drawTextLine_FUN_0040d240
//   XREF to: 0040d240 (UNCONDITIONAL_CALL)
// 005e144c: ADD ESP,0x8
// 005e144f: PUSH 0x655d2c
//   XREF to: 00655d2c (DATA)
// 005e1454: PUSH EBX
// 005e1455: CALL core_actor.cpp_drawTextLine_FUN_0040d240
//   XREF to: 0040d240 (UNCONDITIONAL_CALL)
// 005e145a: ADD ESP,0x8
// 005e145d: PUSH 0x655d4d
//   XREF to: 00655d4d (DATA)
// 005e1462: PUSH EBX
// 005e1463: CALL core_actor.cpp_drawTextLine_FUN_0040d240
//   XREF to: 0040d240 (UNCONDITIONAL_CALL)
// 005e1468: ADD ESP,0x8
// 005e146b: PUSH 0x655d93
//   XREF to: 00655d93 (DATA)
// 005e1470: PUSH EBX
// 005e1471: CALL core_actor.cpp_drawTextLine_FUN_0040d240
//   XREF to: 0040d240 (UNCONDITIONAL_CALL)
// 005e1476: ADD ESP,0x8
// 005e1479: PUSH 0x655dc7
//   XREF to: 00655dc7 (DATA)
// 005e147e: PUSH EBX
// 005e147f: CALL core_actor.cpp_drawTextLine_FUN_0040d240
//   XREF to: 0040d240 (UNCONDITIONAL_CALL)
// 005e1484: ADD ESP,0x8
// 005e1487: PUSH 0x655ddd
//   XREF to: 00655ddd (DATA)
// 005e148c: PUSH EBX
// 005e148d: CALL core_actor.cpp_drawTextLine_FUN_0040d240
//   XREF to: 0040d240 (UNCONDITIONAL_CALL)
// 005e1492: ADD ESP,0x8
// 005e1495: PUSH 0x655e18
//   XREF to: 00655e18 (DATA)
// 005e149a: PUSH EBX
// 005e149b: CALL core_actor.cpp_drawTextLine_FUN_0040d240
//   XREF to: 0040d240 (UNCONDITIONAL_CALL)
// 005e14a0: ADD ESP,0x8
// 005e14a3: PUSH 0x655e2d
//   XREF to: 00655e2d (DATA)
// 005e14a8: PUSH EBX
// 005e14a9: CALL core_actor.cpp_drawTextLine_FUN_0040d240
//   XREF to: 0040d240 (UNCONDITIONAL_CALL)
// 005e14ae: ADD ESP,0x8
// 005e14b1: PUSH 0x655e67
//   XREF to: 00655e67 (DATA)
// 005e14b6: PUSH EBX
// 005e14b7: CALL core_actor.cpp_drawTextLine_FUN_0040d240
//   XREF to: 0040d240 (UNCONDITIONAL_CALL)
// 005e14bc: ADD ESP,0x8
// 005e14bf: PUSH 0x655e80
//   XREF to: 00655e80 (DATA)
// 005e14c4: PUSH EBX
// 005e14c5: CALL core_actor.cpp_drawTextLine_FUN_0040d240
//   XREF to: 0040d240 (UNCONDITIONAL_CALL)
// 005e14ca: ADD ESP,0x8
// 005e14cd: PUSH 0x655ec0
//   XREF to: 00655ec0 (DATA)
// 005e14d2: PUSH EBX
// 005e14d3: CALL core_actor.cpp_drawTextLine_FUN_0040d240
//   XREF to: 0040d240 (UNCONDITIONAL_CALL)
// 005e14d8: ADD ESP,0x8
// 005e14db: PUSH 0x655ed6
//   XREF to: 00655ed6 (DATA)
// 005e14e0: PUSH EBX
// 005e14e1: CALL core_actor.cpp_drawTextLine_FUN_0040d240
//   XREF to: 0040d240 (UNCONDITIONAL_CALL)
// 005e14e6: ADD ESP,0x8
// 005e14e9: PUSH 0x655f13
//   XREF to: 00655f13 (DATA)
// 005e14ee: PUSH EBX
// 005e14ef: CALL core_actor.cpp_drawTextLine_FUN_0040d240
//   XREF to: 0040d240 (UNCONDITIONAL_CALL)
// 005e14f4: ADD ESP,0x8
// 005e14f7: PUSH 0x655f29
//   XREF to: 00655f29 (DATA)
// 005e14fc: PUSH EBX
// 005e14fd: CALL core_actor.cpp_drawTextLine_FUN_0040d240
//   XREF to: 0040d240 (UNCONDITIONAL_CALL)
// 005e1502: ADD ESP,0x8
// 005e1505: PUSH 0x655f79
//   XREF to: 00655f79 (DATA)
// 005e150a: PUSH EBX
// 005e150b: CALL core_actor.cpp_drawTextLine_FUN_0040d240
//   XREF to: 0040d240 (UNCONDITIONAL_CALL)
// 005e1510: ADD ESP,0x8
// 005e1513: PUSH 0x655f96
//   XREF to: 00655f96 (DATA)
// 005e1518: PUSH EBX
// 005e1519: CALL core_actor.cpp_drawTextLine_FUN_0040d240
//   XREF to: 0040d240 (UNCONDITIONAL_CALL)
// 005e151e: ADD ESP,0x8
// 005e1521: PUSH 0x655fe3
//   XREF to: 00655fe3 (DATA)
// 005e1526: PUSH EBX
// 005e1527: CALL core_actor.cpp_drawTextLine_FUN_0040d240
//   XREF to: 0040d240 (UNCONDITIONAL_CALL)
// 005e152c: ADD ESP,0x8
// 005e152f: PUSH 0x656018
//   XREF to: 00656018 (DATA)
// 005e1534: PUSH EBX
// 005e1535: CALL core_actor.cpp_drawTextLine_FUN_0040d240
//   XREF to: 0040d240 (UNCONDITIONAL_CALL)
// 005e153a: ADD ESP,0x8
// 005e153d: PUSH 0x65605e
//   XREF to: 0065605e (DATA)
// 005e1542: PUSH EBX
// 005e1543: CALL core_actor.cpp_drawTextLine_FUN_0040d240
//   XREF to: 0040d240 (UNCONDITIONAL_CALL)
// 005e1548: ADD ESP,0x8
// 005e154b: PUSH 0x656084
//   XREF to: 00656084 (DATA)
// 005e1550: PUSH EBX
// 005e1551: CALL core_actor.cpp_drawTextLine_FUN_0040d240
//   XREF to: 0040d240 (UNCONDITIONAL_CALL)
// 005e1556: ADD ESP,0x8
// 005e1559: PUSH 0x6560cf
//   XREF to: 006560cf (DATA)
// 005e155e: PUSH EBX
// 005e155f: CALL core_actor.cpp_drawTextLine_FUN_0040d240
//   XREF to: 0040d240 (UNCONDITIONAL_CALL)
// 005e1564: ADD ESP,0x8
// 005e1567: MOV EBP,dword ptr [EBX]
// 005e1569: PUSH 0x65610d
//   XREF to: 0065610d (DATA)
// 005e156e: ADD EBP,0xb
// 005e1571: PUSH EBX
// 005e1572: MOV dword ptr [EBX],EBP
// 005e1574: CALL core_actor.cpp_drawTextLine_FUN_0040d240
//   XREF to: 0040d240 (UNCONDITIONAL_CALL)
// 005e1579: ADD ESP,0x8
// 005e157c: PUSH 0x65612b
//   XREF to: 0065612b (DATA)
// 005e1581: PUSH EBX
// 005e1582: CALL core_actor.cpp_drawTextLine_FUN_0040d240
//   XREF to: 0040d240 (UNCONDITIONAL_CALL)
// 005e1587: ADD ESP,0x8
// 005e158a: PUSH 0x656138
//   XREF to: 00656138 (DATA)
// 005e158f: PUSH EBX
// 005e1590: CALL core_actor.cpp_drawTextLine_FUN_0040d240
//   XREF to: 0040d240 (UNCONDITIONAL_CALL)
// 005e1595: ADD ESP,0x8
// 005e1598: PUSH 0x656180
//   XREF to: 00656180 (DATA)
// 005e159d: PUSH EBX
// 005e159e: CALL core_actor.cpp_drawTextLine_FUN_0040d240
//   XREF to: 0040d240 (UNCONDITIONAL_CALL)
// 005e15a3: ADD ESP,0x8
// 005e15a6: PUSH 0x6561b8
//   XREF to: 006561b8 (DATA)
// 005e15ab: PUSH EBX
// 005e15ac: CALL core_actor.cpp_drawTextLine_FUN_0040d240
//   XREF to: 0040d240 (UNCONDITIONAL_CALL)
// 005e15b1: ADD ESP,0x8
// 005e15b4: PUSH 0x6561c4
//   XREF to: 006561c4 (DATA)
// 005e15b9: PUSH EBX
// 005e15ba: CALL core_actor.cpp_drawTextLine_FUN_0040d240
//   XREF to: 0040d240 (UNCONDITIONAL_CALL)
// 005e15bf: ADD ESP,0x8
// 005e15c2: PUSH 0x656215
//   XREF to: 00656215 (DATA)
// 005e15c7: PUSH EBX
// 005e15c8: CALL core_actor.cpp_drawTextLine_FUN_0040d240
//   XREF to: 0040d240 (UNCONDITIONAL_CALL)
// 005e15cd: ADD ESP,0x8
// 005e15d0: PUSH 0x656262
//   XREF to: 00656262 (DATA)
// 005e15d5: PUSH EBX
// 005e15d6: CALL core_actor.cpp_drawTextLine_FUN_0040d240
//   XREF to: 0040d240 (UNCONDITIONAL_CALL)
// 005e15db: ADD ESP,0x8
// 005e15de: PUSH 0x65628d
//   XREF to: 0065628d (DATA)
// 005e15e3: PUSH EBX
// 005e15e4: CALL core_actor.cpp_drawTextLine_FUN_0040d240
//   XREF to: 0040d240 (UNCONDITIONAL_CALL)
// 005e15e9: ADD ESP,0x8
// 005e15ec: PUSH 0x65629c
//   XREF to: 0065629c (DATA)
// 005e15f1: PUSH EBX
// 005e15f2: CALL core_actor.cpp_drawTextLine_FUN_0040d240
//   XREF to: 0040d240 (UNCONDITIONAL_CALL)
// 005e15f7: ADD ESP,0x8
// 005e15fa: PUSH 0x6562eb
//   XREF to: 006562eb (DATA)
// 005e15ff: PUSH EBX
// 005e1600: CALL core_actor.cpp_drawTextLine_FUN_0040d240
//   XREF to: 0040d240 (UNCONDITIONAL_CALL)
// 005e1605: ADD ESP,0x8
// 005e1608: PUSH 0x65633a
//   XREF to: 0065633a (DATA)
// 005e160d: PUSH EBX
// 005e160e: CALL core_actor.cpp_drawTextLine_FUN_0040d240
//   XREF to: 0040d240 (UNCONDITIONAL_CALL)
// 005e1613: ADD ESP,0x8
// 005e1616: PUSH 0x65637b
//   XREF to: 0065637b (DATA)
// 005e161b: PUSH EBX
// 005e161c: CALL core_actor.cpp_drawTextLine_FUN_0040d240
//   XREF to: 0040d240 (UNCONDITIONAL_CALL)
// 005e1621: ADD ESP,0x8
// 005e1624: PUSH 0x65638b
//   XREF to: 0065638b (DATA)
// 005e1629: PUSH EBX
// 005e162a: CALL core_actor.cpp_drawTextLine_FUN_0040d240
//   XREF to: 0040d240 (UNCONDITIONAL_CALL)
// 005e162f: ADD ESP,0x8
// 005e1632: PUSH 0x6563d8
//   XREF to: 006563d8 (DATA)
// 005e1637: PUSH EBX
// 005e1638: CALL core_actor.cpp_drawTextLine_FUN_0040d240
//   XREF to: 0040d240 (UNCONDITIONAL_CALL)
// 005e163d: ADD ESP,0x8
// 005e1640: PUSH 0x656429
//   XREF to: 00656429 (DATA)
// 005e1645: PUSH EBX
// 005e1646: CALL core_actor.cpp_drawTextLine_FUN_0040d240
//   XREF to: 0040d240 (UNCONDITIONAL_CALL)
// 005e164b: ADD ESP,0x8
// 005e164e: POP EBP
// 005e164f: POP EBX
// 005e1650: RET
