; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_trigger_cpp_CTrigger_showEditorHelp_FUN_005e1350(CTrigger *this_ptr,int *y_pos)
;
; Parameters:
; CTrigger *       Stack[0x4]:4   this_ptr
; int *            Stack[0x8]:4   y_pos
;
; XREF[1]:
;   core_waypoint.cpp_CWayPoint_showEditorHelp_FUN_005ec690 at 005ec69b
;
; Referenced Globals:
;   TerminatedCString s_With_CTRL_held_down_use__00655a3c
;   TerminatedCString s_Each_frame_the_trigger_e_00655a6c
;   TerminatedCString s_Figuring_out_which_of_th_00655ab2
;   TerminatedCString s_into_two_phases_First_we_00655af7
;   TerminatedCString s_frame_depending_on_who_t_00655b43
;   TerminatedCString s_depending_on_the_trigger_00655b90
;   TerminatedCString s_Description_of_who_trigg_00655baf
;   TerminatedCString s_Hero_triggers_me_00655bd6
;   TerminatedCString s_The_trigger_is_active_wh_00655bea
;   TerminatedCString s_An_actor_triggers_me_00655c28
;   TerminatedCString s_The_trigger_is_active_wh_00655c40
;   TerminatedCString s_name_is_inside_the_trigg_00655c8b
;   TerminatedCString s_Light_triggers_me_00655caf
;   TerminatedCString s_The_trigger_is_active_wh_00655cc4
;   TerminatedCString s_is_in_a_given_range_00655d0f
;   ... and 36 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150
;   core_actor.cpp_drawTextLine_FUN_0040d240
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e1350
        ;   Label: core_trigger.cpp_CTrigger_showEditorHelp_FUN_005e1350
    PUSH EBP                            ; 005e1351
    MOV EBX,dword ptr [ESP + 0x10]      ; 005e1352
    PUSH EDI                            ; 005e1356
    PUSH ESI                            ; 005e1357
    PUSH EBX                            ; 005e1358
    MOV EDX,dword ptr [ESP + 0x18]      ; 005e1359
    PUSH EDX                            ; 005e135d
    CALL core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150 ; 005e135e
        ;   XREF to: 0040d150 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150(CDemonActor * this_ptr, int * y_pos)
    ADD ESP,0x8                         ; 005e1363
    MOV ECX,dword ptr [EBX]             ; 005e1366
    PUSH 0x655a3c                       ; 005e1368 | = "With CTRL held down, use slew keys to..."
    ADD ECX,0xb                         ; 005e136d
    PUSH EBX                            ; 005e1370
    MOV dword ptr [EBX],ECX             ; 005e1371
    CALL core_actor.cpp_drawTextLine_FUN_0040d240 ; 005e1373
        ;   XREF to: 0040d240 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_drawTextLine_FUN_0040d240(int * y_position, char * text)
    ADD ESP,0x8                         ; 005e1378
    MOV ESI,dword ptr [EBX]             ; 005e137b
    PUSH 0x655a6c                       ; 005e137d | = "Each frame, the trigger either raises..."
    ADD ESI,0xb                         ; 005e1382
    PUSH EBX                            ; 005e1385
    MOV dword ptr [EBX],ESI             ; 005e1386
    CALL core_actor.cpp_drawTextLine_FUN_0040d240 ; 005e1388
        ;   XREF to: 0040d240 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_drawTextLine_FUN_0040d240(int * y_position, char * text)
    ADD ESP,0x8                         ; 005e138d
    PUSH 0x655ab2                       ; 005e1390 | = "Figuring out which of these two event..."
    PUSH EBX                            ; 005e1395
    CALL core_actor.cpp_drawTextLine_FUN_0040d240 ; 005e1396
        ;   XREF to: 0040d240 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_drawTextLine_FUN_0040d240(int * y_position, char * text)
    ADD ESP,0x8                         ; 005e139b
    PUSH 0x655af7                       ; 005e139e | = "into two phases.  First we figure out..."
    PUSH EBX                            ; 005e13a3
    CALL core_actor.cpp_drawTextLine_FUN_0040d240 ; 005e13a4
        ;   XREF to: 0040d240 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_drawTextLine_FUN_0040d240(int * y_position, char * text)
    ADD ESP,0x8                         ; 005e13a9
    PUSH 0x655b43                       ; 005e13ac | = "frame depending on \"who triggers me\..."
    PUSH EBX                            ; 005e13b1
    CALL core_actor.cpp_drawTextLine_FUN_0040d240 ; 005e13b2
        ;   XREF to: 0040d240 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_drawTextLine_FUN_0040d240(int * y_position, char * text)
    ADD ESP,0x8                         ; 005e13b7
    PUSH 0x655b90                       ; 005e13ba | = "depending on the trigger type."
    PUSH EBX                            ; 005e13bf
    CALL core_actor.cpp_drawTextLine_FUN_0040d240 ; 005e13c0
        ;   XREF to: 0040d240 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_drawTextLine_FUN_0040d240(int * y_position, char * text)
    ADD ESP,0x8                         ; 005e13c5
    MOV EDI,dword ptr [EBX]             ; 005e13c8
    PUSH 0x655baf                       ; 005e13ca | = "Description of \"who triggers\" options:"
    ADD EDI,0xb                         ; 005e13cf
    PUSH EBX                            ; 005e13d2
    MOV dword ptr [EBX],EDI             ; 005e13d3
    CALL core_actor.cpp_drawTextLine_FUN_0040d240 ; 005e13d5
        ;   XREF to: 0040d240 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_drawTextLine_FUN_0040d240(int * y_position, char * text)
    ADD ESP,0x8                         ; 005e13da
    PUSH 0x655bd6                       ; 005e13dd | = "   Hero triggers me"
    PUSH EBX                            ; 005e13e2
    CALL core_actor.cpp_drawTextLine_FUN_0040d240 ; 005e13e3
        ;   XREF to: 0040d240 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_drawTextLine_FUN_0040d240(int * y_position, char * text)
    ADD ESP,0x8                         ; 005e13e8
    PUSH 0x655bea                       ; 005e13eb | = "        The trigger is active when th..."
    PUSH EBX                            ; 005e13f0
    CALL core_actor.cpp_drawTextLine_FUN_0040d240 ; 005e13f1
        ;   XREF to: 0040d240 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_drawTextLine_FUN_0040d240(int * y_position, char * text)
    ADD ESP,0x8                         ; 005e13f6
    PUSH 0x655c28                       ; 005e13f9 | = "   An actor triggers me"
    PUSH EBX                            ; 005e13fe
    CALL core_actor.cpp_drawTextLine_FUN_0040d240 ; 005e13ff
        ;   XREF to: 0040d240 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_drawTextLine_FUN_0040d240(int * y_position, char * text)
    ADD ESP,0x8                         ; 005e1404
    PUSH 0x655c40                       ; 005e1407 | = "        The trigger is active when th..."
    PUSH EBX                            ; 005e140c
    CALL core_actor.cpp_drawTextLine_FUN_0040d240 ; 005e140d
        ;   XREF to: 0040d240 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_drawTextLine_FUN_0040d240(int * y_position, char * text)
    ADD ESP,0x8                         ; 005e1412
    PUSH 0x655c8b                       ; 005e1415 | = "        name is inside the trigger."
    PUSH EBX                            ; 005e141a
    CALL core_actor.cpp_drawTextLine_FUN_0040d240 ; 005e141b
        ;   XREF to: 0040d240 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_drawTextLine_FUN_0040d240(int * y_position, char * text)
    ADD ESP,0x8                         ; 005e1420
    PUSH 0x655caf                       ; 005e1423 | = "   Light triggers me"
    PUSH EBX                            ; 005e1428
    CALL core_actor.cpp_drawTextLine_FUN_0040d240 ; 005e1429
        ;   XREF to: 0040d240 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_drawTextLine_FUN_0040d240(int * y_position, char * text)
    ADD ESP,0x8                         ; 005e142e
    PUSH 0x655cc4                       ; 005e1431 | = "        The trigger is active when th..."
    PUSH EBX                            ; 005e1436
    CALL core_actor.cpp_drawTextLine_FUN_0040d240 ; 005e1437
        ;   XREF to: 0040d240 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_drawTextLine_FUN_0040d240(int * y_position, char * text)
    ADD ESP,0x8                         ; 005e143c
    POP ESI                             ; 005e143f
    POP EDI                             ; 005e1440
    PUSH 0x655d0f                       ; 005e1441 | = "        is in a given range."
    PUSH EBX                            ; 005e1446
    CALL core_actor.cpp_drawTextLine_FUN_0040d240 ; 005e1447
        ;   XREF to: 0040d240 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_drawTextLine_FUN_0040d240(int * y_position, char * text)
    ADD ESP,0x8                         ; 005e144c
    PUSH 0x655d2c                       ; 005e144f | = "   The action button triggers me"
    PUSH EBX                            ; 005e1454
    CALL core_actor.cpp_drawTextLine_FUN_0040d240 ; 005e1455
        ;   XREF to: 0040d240 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_drawTextLine_FUN_0040d240(int * y_position, char * text)
    ADD ESP,0x8                         ; 005e145a
    PUSH 0x655d4d                       ; 005e145d | = "        The trigger is active when th..."
    PUSH EBX                            ; 005e1462
    CALL core_actor.cpp_drawTextLine_FUN_0040d240 ; 005e1463
        ;   XREF to: 0040d240 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_drawTextLine_FUN_0040d240(int * y_position, char * text)
    ADD ESP,0x8                         ; 005e1468
    PUSH 0x655d93                       ; 005e146b | = "        when standing right in front ..."
    PUSH EBX                            ; 005e1470
    CALL core_actor.cpp_drawTextLine_FUN_0040d240 ; 005e1471
        ;   XREF to: 0040d240 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_drawTextLine_FUN_0040d240(int * y_position, char * text)
    ADD ESP,0x8                         ; 005e1476
    PUSH 0x655dc7                       ; 005e1479 | = "   Bullet triggers me"
    PUSH EBX                            ; 005e147e
    CALL core_actor.cpp_drawTextLine_FUN_0040d240 ; 005e147f
        ;   XREF to: 0040d240 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_drawTextLine_FUN_0040d240(int * y_position, char * text)
    ADD ESP,0x8                         ; 005e1484
    PUSH 0x655ddd                       ; 005e1487 | = "        The trigger is active when it..."
    PUSH EBX                            ; 005e148c
    CALL core_actor.cpp_drawTextLine_FUN_0040d240 ; 005e148d
        ;   XREF to: 0040d240 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_drawTextLine_FUN_0040d240(int * y_position, char * text)
    ADD ESP,0x8                         ; 005e1492
    PUSH 0x655e18                       ; 005e1495 | = "   Laser triggers me"
    PUSH EBX                            ; 005e149a
    CALL core_actor.cpp_drawTextLine_FUN_0040d240 ; 005e149b
        ;   XREF to: 0040d240 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_drawTextLine_FUN_0040d240(int * y_position, char * text)
    ADD ESP,0x8                         ; 005e14a0
    PUSH 0x655e2d                       ; 005e14a3 | = "        The trigger is active when it..."
    PUSH EBX                            ; 005e14a8
    CALL core_actor.cpp_drawTextLine_FUN_0040d240 ; 005e14a9
        ;   XREF to: 0040d240 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_drawTextLine_FUN_0040d240(int * y_position, char * text)
    ADD ESP,0x8                         ; 005e14ae
    PUSH 0x655e67                       ; 005e14b1 | = "   Explosion triggers me"
    PUSH EBX                            ; 005e14b6
    CALL core_actor.cpp_drawTextLine_FUN_0040d240 ; 005e14b7
        ;   XREF to: 0040d240 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_drawTextLine_FUN_0040d240(int * y_position, char * text)
    ADD ESP,0x8                         ; 005e14bc
    PUSH 0x655e80                       ; 005e14bf | = "        The trigger is active when a ..."
    PUSH EBX                            ; 005e14c4
    CALL core_actor.cpp_drawTextLine_FUN_0040d240 ; 005e14c5
        ;   XREF to: 0040d240 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_drawTextLine_FUN_0040d240(int * y_position, char * text)
    ADD ESP,0x8                         ; 005e14ca
    PUSH 0x655ec0                       ; 005e14cd | = "   Damage triggers me"
    PUSH EBX                            ; 005e14d2
    CALL core_actor.cpp_drawTextLine_FUN_0040d240 ; 005e14d3
        ;   XREF to: 0040d240 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_drawTextLine_FUN_0040d240(int * y_position, char * text)
    ADD ESP,0x8                         ; 005e14d8
    PUSH 0x655ed6                       ; 005e14db | = "        The trigger is active when it..."
    PUSH EBX                            ; 005e14e0
    CALL core_actor.cpp_drawTextLine_FUN_0040d240 ; 005e14e1
        ;   XREF to: 0040d240 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_drawTextLine_FUN_0040d240(int * y_position, char * text)
    ADD ESP,0x8                         ; 005e14e6
    PUSH 0x655f13                       ; 005e14e9 | = "   Motion triggers me"
    PUSH EBX                            ; 005e14ee
    CALL core_actor.cpp_drawTextLine_FUN_0040d240 ; 005e14ef
        ;   XREF to: 0040d240 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_drawTextLine_FUN_0040d240(int * y_position, char * text)
    ADD ESP,0x8                         ; 005e14f4
    PUSH 0x655f29                       ; 005e14f7 | = "        The trigger is active when a ..."
    PUSH EBX                            ; 005e14fc
    CALL core_actor.cpp_drawTextLine_FUN_0040d240 ; 005e14fd
        ;   XREF to: 0040d240 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_drawTextLine_FUN_0040d240(int * y_position, char * text)
    ADD ESP,0x8                         ; 005e1502
    PUSH 0x655f79                       ; 005e1505 | = "   Matched actors trigger me"
    PUSH EBX                            ; 005e150a
    CALL core_actor.cpp_drawTextLine_FUN_0040d240 ; 005e150b
        ;   XREF to: 0040d240 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_drawTextLine_FUN_0040d240(int * y_position, char * text)
    ADD ESP,0x8                         ; 005e1510
    PUSH 0x655f96                       ; 005e1513 | = "        The trigger is active when an..."
    PUSH EBX                            ; 005e1518
    CALL core_actor.cpp_drawTextLine_FUN_0040d240 ; 005e1519
        ;   XREF to: 0040d240 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_drawTextLine_FUN_0040d240(int * y_position, char * text)
    ADD ESP,0x8                         ; 005e151e
    PUSH 0x655fe3                       ; 005e1521 | = "        that matches the wildspec is ..."
    PUSH EBX                            ; 005e1526
    CALL core_actor.cpp_drawTextLine_FUN_0040d240 ; 005e1527
        ;   XREF to: 0040d240 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_drawTextLine_FUN_0040d240(int * y_position, char * text)
    ADD ESP,0x8                         ; 005e152c
    PUSH 0x656018                       ; 005e152f | = "            Actor type(s) is a list o..."
    PUSH EBX                            ; 005e1534
    CALL core_actor.cpp_drawTextLine_FUN_0040d240 ; 005e1535
        ;   XREF to: 0040d240 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_drawTextLine_FUN_0040d240(int * y_position, char * text)
    ADD ESP,0x8                         ; 005e153a
    PUSH 0x65605e                       ; 005e153d | = "              are of type CDemonActor"
    PUSH EBX                            ; 005e1542
    CALL core_actor.cpp_drawTextLine_FUN_0040d240 ; 005e1543
        ;   XREF to: 0040d240 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_drawTextLine_FUN_0040d240(int * y_position, char * text)
    ADD ESP,0x8                         ; 005e1548
    PUSH 0x656084                       ; 005e154b | = "            Actor name is wildcard pa..."
    PUSH EBX                            ; 005e1550
    CALL core_actor.cpp_drawTextLine_FUN_0040d240 ; 005e1551
        ;   XREF to: 0040d240 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_drawTextLine_FUN_0040d240(int * y_position, char * text)
    ADD ESP,0x8                         ; 005e1556
    PUSH 0x6560cf                       ; 005e1559 | = "              to match.  ? and * are ..."
    PUSH EBX                            ; 005e155e
    CALL core_actor.cpp_drawTextLine_FUN_0040d240 ; 005e155f
        ;   XREF to: 0040d240 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_drawTextLine_FUN_0040d240(int * y_position, char * text)
    ADD ESP,0x8                         ; 005e1564
    MOV EBP,dword ptr [EBX]             ; 005e1567
    PUSH 0x65610d                       ; 005e1569 | = "Description of trigger types:"
    ADD EBP,0xb                         ; 005e156e
    PUSH EBX                            ; 005e1571
    MOV dword ptr [EBX],EBP             ; 005e1572
    CALL core_actor.cpp_drawTextLine_FUN_0040d240 ; 005e1574
        ;   XREF to: 0040d240 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_drawTextLine_FUN_0040d240(int * y_position, char * text)
    ADD ESP,0x8                         ; 005e1579
    PUSH 0x65612b                       ; 005e157c | = "   Momentary"
    PUSH EBX                            ; 005e1581
    CALL core_actor.cpp_drawTextLine_FUN_0040d240 ; 005e1582
        ;   XREF to: 0040d240 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_drawTextLine_FUN_0040d240(int * y_position, char * text)
    ADD ESP,0x8                         ; 005e1587
    PUSH 0x656138                       ; 005e158a | = "        The on event is raised while ..."
    PUSH EBX                            ; 005e158f
    CALL core_actor.cpp_drawTextLine_FUN_0040d240 ; 005e1590
        ;   XREF to: 0040d240 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_drawTextLine_FUN_0040d240(int * y_position, char * text)
    ADD ESP,0x8                         ; 005e1595
    PUSH 0x656180                       ; 005e1598 | = "        event is raised when the trig..."
    PUSH EBX                            ; 005e159d
    CALL core_actor.cpp_drawTextLine_FUN_0040d240 ; 005e159e
        ;   XREF to: 0040d240 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_drawTextLine_FUN_0040d240(int * y_position, char * text)
    ADD ESP,0x8                         ; 005e15a3
    PUSH 0x6561b8                       ; 005e15a6 | = "   One shot"
    PUSH EBX                            ; 005e15ab
    CALL core_actor.cpp_drawTextLine_FUN_0040d240 ; 005e15ac
        ;   XREF to: 0040d240 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_drawTextLine_FUN_0040d240(int * y_position, char * text)
    ADD ESP,0x8                         ; 005e15b1
    PUSH 0x6561c4                       ; 005e15b4 | = "        The off event will be raised ..."
    PUSH EBX                            ; 005e15b9
    CALL core_actor.cpp_drawTextLine_FUN_0040d240 ; 005e15ba
        ;   XREF to: 0040d240 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_drawTextLine_FUN_0040d240(int * y_position, char * text)
    ADD ESP,0x8                         ; 005e15bf
    PUSH 0x656215                       ; 005e15c2 | = "        Once the trigger becomes acti..."
    PUSH EBX                            ; 005e15c7
    CALL core_actor.cpp_drawTextLine_FUN_0040d240 ; 005e15c8
        ;   XREF to: 0040d240 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_drawTextLine_FUN_0040d240(int * y_position, char * text)
    ADD ESP,0x8                         ; 005e15cd
    PUSH 0x656262                       ; 005e15d0 | = "        even the trigger becomes inac..."
    PUSH EBX                            ; 005e15d5
    CALL core_actor.cpp_drawTextLine_FUN_0040d240 ; 005e15d6
        ;   XREF to: 0040d240 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_drawTextLine_FUN_0040d240(int * y_position, char * text)
    ADD ESP,0x8                         ; 005e15db
    PUSH 0x65628d                       ; 005e15de | = "   Rising edge"
    PUSH EBX                            ; 005e15e3
    CALL core_actor.cpp_drawTextLine_FUN_0040d240 ; 005e15e4
        ;   XREF to: 0040d240 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_drawTextLine_FUN_0040d240(int * y_position, char * text)
    ADD ESP,0x8                         ; 005e15e9
    PUSH 0x65629c                       ; 005e15ec | = "        The on event is raised when t..."
    PUSH EBX                            ; 005e15f1
    CALL core_actor.cpp_drawTextLine_FUN_0040d240 ; 005e15f2
        ;   XREF to: 0040d240 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_drawTextLine_FUN_0040d240(int * y_position, char * text)
    ADD ESP,0x8                         ; 005e15f7
    PUSH 0x6562eb                       ; 005e15fa | = "        active state.  This will stro..."
    PUSH EBX                            ; 005e15ff
    CALL core_actor.cpp_drawTextLine_FUN_0040d240 ; 005e1600
        ;   XREF to: 0040d240 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_drawTextLine_FUN_0040d240(int * y_position, char * text)
    ADD ESP,0x8                         ; 005e1605
    PUSH 0x65633a                       ; 005e1608 | = "        the trigger becomes inactive ..."
    PUSH EBX                            ; 005e160d
    CALL core_actor.cpp_drawTextLine_FUN_0040d240 ; 005e160e
        ;   XREF to: 0040d240 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_drawTextLine_FUN_0040d240(int * y_position, char * text)
    ADD ESP,0x8                         ; 005e1613
    PUSH 0x65637b                       ; 005e1616 | = "   Falling edge"
    PUSH EBX                            ; 005e161b
    CALL core_actor.cpp_drawTextLine_FUN_0040d240 ; 005e161c
        ;   XREF to: 0040d240 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_drawTextLine_FUN_0040d240(int * y_position, char * text)
    ADD ESP,0x8                         ; 005e1621
    PUSH 0x65638b                       ; 005e1624 | = "        The on event is raised when t..."
    PUSH EBX                            ; 005e1629
    CALL core_actor.cpp_drawTextLine_FUN_0040d240 ; 005e162a
        ;   XREF to: 0040d240 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_drawTextLine_FUN_0040d240(int * y_position, char * text)
    ADD ESP,0x8                         ; 005e162f
    PUSH 0x6563d8                       ; 005e1632 | = "        inactive state.  This will st..."
    PUSH EBX                            ; 005e1637
    CALL core_actor.cpp_drawTextLine_FUN_0040d240 ; 005e1638
        ;   XREF to: 0040d240 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_drawTextLine_FUN_0040d240(int * y_position, char * text)
    ADD ESP,0x8                         ; 005e163d
    PUSH 0x656429                       ; 005e1640 | = "        the trigger becomes active an..."
    PUSH EBX                            ; 005e1645
    CALL core_actor.cpp_drawTextLine_FUN_0040d240 ; 005e1646
        ;   XREF to: 0040d240 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_drawTextLine_FUN_0040d240(int * y_position, char * text)
    ADD ESP,0x8                         ; 005e164b
    POP EBP                             ; 005e164e
    POP EBX                             ; 005e164f
    RET                                 ; 005e1650

