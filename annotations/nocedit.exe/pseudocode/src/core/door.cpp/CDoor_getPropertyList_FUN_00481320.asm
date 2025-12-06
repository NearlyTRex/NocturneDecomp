; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_door.cpp_CDoor_getPropertyList_FUN_00481320(CDoor * this_ptr, CActorPropertyList * property_list)
;
; Parameters:
; CDoor *          Stack[0x4]:4   this_ptr
; CActorPropertyList * Stack[0x8]:4   property_list
;
; Referenced Globals:
;   TerminatedCString s_Model_file_kfm_00621354
;   TerminatedCString s_Door_type_00621391
;   TerminatedCString s_Door_side_006213a6
;   TerminatedCString s_Door_state_006213b0
;   TerminatedCString s_Door_swing_006213d7
;   TerminatedCString s_Open_condition_006213e2
;   TerminatedCString s_Close_condition_006213f1
;   TerminatedCString s_Open_rule_00621401
;   TerminatedCString s_Open_sound_0062140b
;   TerminatedCString s_Close_sound_00621416
;   TerminatedCString s_Key_mask_00621422
;   TerminatedCString s_Maximum_open_distance_ft_0062142b
;   TerminatedCString s_Maximum_open_param_00621446
;   TerminatedCString s_Opening_speed_sec_00621459
;   TerminatedCString s_Close_speed_sec_0062146d
;   ... and 14 more
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_FUN_0040e160
;   core_actor.cpp_CActorPropertyList_FUN_0040e1e0
;   core_actor.cpp_CActorPropertyList_FUN_0040e2d0
;   core_actor.cpp_CActorPropertyList_FUN_0040e300
;   core_actor.cpp_CActorPropertyList_FUN_0040e330
;   core_actor.cpp_CActorPropertyList_FUN_0040e3b0
;   core_actor.cpp_CActorPropertyList_FUN_0040e460
;   core_actor.cpp_CActorPropertyList_FUN_0040e480
;   core_actor.cpp_CActorPropertyList_FUN_0040e5a0
;   core_actor.cpp_CActorPropertyList_FUN_0040e640
;   core_actor.cpp_CActorPropertyList_FUN_0040e670
;   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00481320
        ;   Label: core_door.cpp_CDoor_getPropertyList_FUN_00481320
    PUSH ESI                            ; 00481321
    PUSH EDI                            ; 00481322
    MOV EBX,dword ptr [ESP + 0x10]      ; 00481323
    MOV ESI,dword ptr [ESP + 0x14]      ; 00481327
    PUSH ESI                            ; 0048132b
    PUSH EBX                            ; 0048132c
    CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290 ; 0048132d | void core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290(CDemonActor * this_ptr, CActorPropertyList * property_list)
        ;   XREF to: 0040d290 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00481332
    PUSH 0x0                            ; 00481335
    LEA EAX,[EBX + 0x158]               ; 00481337
    PUSH EAX                            ; 0048133d
    PUSH 0x621354                       ; 0048133e | = "Model file (.kfm)" | s_Model_file_kfm_00621354 = Model file (.kfm)
    PUSH ESI                            ; 00481343
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e3b0 ; 00481344 | void core_actor.cpp_CActorPropertyList_FUN_0040e3b0(CActorPropertyList * this_ptr)
        ;   XREF to: 0040e3b0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00481349
    LEA EAX,[EBX + 0x2d8]               ; 0048134c
    PUSH EAX                            ; 00481352
    PUSH 0x670300                       ; 00481353 | void * PTR_s_Normal_00670300
    PUSH 0x4                            ; 00481358
    PUSH 0x621391                       ; 0048135a | = "Door type" | s_Door_type_00621391 = Door type
    PUSH ESI                            ; 0048135f
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e640 ; 00481360 | void core_actor.cpp_CActorPropertyList_FUN_0040e640(CActorPropertyList * this_ptr)
        ;   XREF to: 0040e640 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [EBX + 0x2d8]     ; 00481365
    ADD ESP,0x14                        ; 0048136b
    CMP EDX,0x2                         ; 0048136e
    JZ 0x0048155a                       ; 00481371 | LAB_0048155a
        ;   XREF to: 0048155a (CONDITIONAL_JUMP)
    PUSH 0x4812b0                       ; 00481377
        ;   Label: LAB_00481377
    PUSH 0x481250                       ; 0048137c
    PUSH 0x6213b0                       ; 00481381 | = "Door state" | s_Door_state_006213b0 = Door state
    PUSH ESI                            ; 00481386
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e670 ; 00481387 | void core_actor.cpp_CActorPropertyList_FUN_0040e670(CActorPropertyList * this_ptr)
        ;   XREF to: 0040e670 (UNCONDITIONAL_CALL)
    MOV ECX,dword ptr [EBX + 0x2d8]     ; 0048138c
    ADD ESP,0x10                        ; 00481392
    TEST ECX,ECX                        ; 00481395
    JNZ 0x004813b5                      ; 00481397 | LAB_004813b5
        ;   XREF to: 004813b5 (CONDITIONAL_JUMP)
    LEA EAX,[EBX + 0x2e4]               ; 00481399
    PUSH EAX                            ; 0048139f
    PUSH 0x670330                       ; 004813a0 | void * PTR_s_Clockwise_00670330
    PUSH 0x2                            ; 004813a5
    PUSH 0x6213d7                       ; 004813a7 | = "Door swing" | s_Door_swing_006213d7 = Door swing
    PUSH ESI                            ; 004813ac
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e640 ; 004813ad | void core_actor.cpp_CActorPropertyList_FUN_0040e640(CActorPropertyList * this_ptr)
        ;   XREF to: 0040e640 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 004813b2
    LEA EAX,[EBX + 0x2e8]               ; 004813b5
        ;   Label: LAB_004813b5
    PUSH EAX                            ; 004813bb
    PUSH 0x6213e2                       ; 004813bc | = "Open condition" | s_Open_condition_006213e2 = Open condition
    PUSH ESI                            ; 004813c1
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e460 ; 004813c2 | void core_actor.cpp_CActorPropertyList_FUN_0040e460(CActorPropertyList * this_ptr)
        ;   XREF to: 0040e460 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004813c7
    LEA EAX,[EBX + 0x34c]               ; 004813ca
    PUSH EAX                            ; 004813d0
    PUSH 0x6213f1                       ; 004813d1 | = "Close condition" | s_Close_condition_006213f1 = Close condition
    PUSH ESI                            ; 004813d6
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e460 ; 004813d7 | void core_actor.cpp_CActorPropertyList_FUN_0040e460(CActorPropertyList * this_ptr)
        ;   XREF to: 0040e460 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004813dc
    PUSH -0x1                           ; 004813df
    LEA EAX,[EBX + 0x478]               ; 004813e1
    PUSH EAX                            ; 004813e7
    PUSH 0x621401                       ; 004813e8 | = "Open rule" | s_Open_rule_00621401 = Open rule
    PUSH ESI                            ; 004813ed
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e5a0 ; 004813ee | int core_actor.cpp_CActorPropertyList_FUN_0040e5a0(CActorPropertyList * this_ptr)
        ;   XREF to: 0040e5a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004813f3
    LEA EAX,[EBX + 0x864]               ; 004813f6
    PUSH EAX                            ; 004813fc
    PUSH 0x62140b                       ; 004813fd | = "Open sound" | s_Open_sound_0062140b = Open sound
    PUSH ESI                            ; 00481402
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e2d0 ; 00481403 | void core_actor.cpp_CActorPropertyList_FUN_0040e2d0(CActorPropertyList * this_ptr)
        ;   XREF to: 0040e2d0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00481408
    LEA EAX,[EBX + 0x8c8]               ; 0048140b
    PUSH EAX                            ; 00481411
    PUSH 0x621416                       ; 00481412 | = "Close sound" | s_Close_sound_00621416 = Close sound
    PUSH ESI                            ; 00481417
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e2d0 ; 00481418 | void core_actor.cpp_CActorPropertyList_FUN_0040e2d0(CActorPropertyList * this_ptr)
        ;   XREF to: 0040e2d0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0048141d
    PUSH 0x0                            ; 00481420
    LEA EAX,[EBX + 0x990]               ; 00481422
    PUSH EAX                            ; 00481428
    PUSH 0x621422                       ; 00481429 | = "Key mask" | s_Key_mask_00621422 = Key mask
    PUSH ESI                            ; 0048142e
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e1e0 ; 0048142f | void core_actor.cpp_CActorPropertyList_FUN_0040e1e0(CActorPropertyList * this_ptr)
        ;   XREF to: 0040e1e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00481434
    MOV EDI,dword ptr [EBX + 0x2d8]     ; 00481437
    LEA EAX,[EBX + 0x9b0]               ; 0048143d
    CMP EDI,0x1                         ; 00481443
    JNZ 0x0048157a                      ; 00481446 | LAB_0048157a
        ;   XREF to: 0048157a (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 0048144c
    PUSH EAX                            ; 0048144e
    PUSH 0x62142b                       ; 0048144f | = "Maximum open distance (ft)" | s_Maximum_open_distance_ft_0062142b = Maximum open distance (ft)
    PUSH ESI                            ; 00481454
        ;   Label: LAB_00481454
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e160 ; 00481455 | void core_actor.cpp_CActorPropertyList_FUN_0040e160(CActorPropertyList * this_ptr)
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0048145a
    PUSH 0x0                            ; 0048145d
    LEA EAX,[EBX + 0x9b4]               ; 0048145f
    PUSH EAX                            ; 00481465
    PUSH 0x621459                       ; 00481466 | = "Opening speed (sec)" | s_Opening_speed_sec_00621459 = Opening speed (sec)
    PUSH ESI                            ; 0048146b
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e160 ; 0048146c | void core_actor.cpp_CActorPropertyList_FUN_0040e160(CActorPropertyList * this_ptr)
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00481471
    PUSH 0x0                            ; 00481474
    LEA EAX,[EBX + 0x9b8]               ; 00481476
    PUSH EAX                            ; 0048147c
    PUSH 0x62146d                       ; 0048147d | = "Close speed (sec)" | s_Close_speed_sec_0062146d = Close speed (sec)
    PUSH ESI                            ; 00481482
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e160 ; 00481483 | void core_actor.cpp_CActorPropertyList_FUN_0040e160(CActorPropertyList * this_ptr)
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00481488
    LEA EAX,[EBX + 0x2d4]               ; 0048148b
    PUSH EAX                            ; 00481491
    PUSH 0x62147f                       ; 00481492 | = "groundType" | s_groundType_0062147f = groundType
    PUSH ESI                            ; 00481497
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e300 ; 00481498 | void core_actor.cpp_CActorPropertyList_FUN_0040e300(CActorPropertyList * this_ptr)
        ;   XREF to: 0040e300 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0048149d
    LEA EAX,[EBX + 0x3b0]               ; 004814a0
    PUSH EAX                            ; 004814a6
    PUSH 0x62148a                       ; 004814a7 | = "Event to trigger when open" | s_Event_to_trigger_when_op_0062148a = Event to trigger when open
    PUSH ESI                            ; 004814ac
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e480 ; 004814ad | void core_actor.cpp_CActorPropertyList_FUN_0040e480(CActorPropertyList * this_ptr)
        ;   XREF to: 0040e480 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004814b2
    LEA EAX,[EBX + 0x414]               ; 004814b5
    PUSH EAX                            ; 004814bb
    PUSH 0x6214a5                       ; 004814bc | = "Event to trigger when closed" | s_Event_to_trigger_when_cl_006214a5 = Event to trigger when closed
    PUSH ESI                            ; 004814c1
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e480 ; 004814c2 | void core_actor.cpp_CActorPropertyList_FUN_0040e480(CActorPropertyList * this_ptr)
        ;   XREF to: 0040e480 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004814c7
    LEA EAX,[EBX + 0x9d0]               ; 004814ca
    PUSH EAX                            ; 004814d0
    PUSH 0x6214c2                       ; 004814d1 | = "Block virtual director" | s_Block_virtual_director_006214c2 = Block virtual director
    PUSH ESI                            ; 004814d6
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e330 ; 004814d7 | void core_actor.cpp_CActorPropertyList_FUN_0040e330(CActorPropertyList * this_ptr)
        ;   XREF to: 0040e330 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004814dc
    LEA EAX,[EBX + 0x9c8]               ; 004814df
    PUSH EAX                            ; 004814e5
    PUSH 0x670340                       ; 004814e6 | void * PTR_s_No_00670340
    PUSH 0x3                            ; 004814eb
    PUSH 0x6214e5                       ; 004814ed | = "One shot" | s_One_shot_006214e5 = One shot
    PUSH ESI                            ; 004814f2
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e640 ; 004814f3 | void core_actor.cpp_CActorPropertyList_FUN_0040e640(CActorPropertyList * this_ptr)
        ;   XREF to: 0040e640 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 004814f8
    LEA EAX,[EBX + 0x9d4]               ; 004814fb
    PUSH EAX                            ; 00481501
    PUSH 0x6214ee                       ; 00481502 | = "Plot as box in shadow" | s_Plot_as_box_in_shadow_006214ee = Plot as box in shadow
    PUSH ESI                            ; 00481507
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e330 ; 00481508 | void core_actor.cpp_CActorPropertyList_FUN_0040e330(CActorPropertyList * this_ptr)
        ;   XREF to: 0040e330 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0048150d
    LEA EAX,[EBX + 0x9d8]               ; 00481510
    PUSH EAX                            ; 00481516
    PUSH 0x670358                       ; 00481517 | void * PTR_s_Both_00670358
    PUSH 0x4                            ; 0048151c
    PUSH 0x62153c                       ; 0048151e | = "Open from side" | s_Open_from_side_0062153c = Open from side
    PUSH ESI                            ; 00481523
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e640 ; 00481524 | void core_actor.cpp_CActorPropertyList_FUN_0040e640(CActorPropertyList * this_ptr)
        ;   XREF to: 0040e640 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 00481529
    LEA EAX,[EBX + 0x9dc]               ; 0048152c
    PUSH EAX                            ; 00481532
    PUSH 0x62154b                       ; 00481533 | = "Leave bullet holes on me" | s_Leave_bullet_holes_on_me_0062154b = Leave bullet holes on me
    PUSH ESI                            ; 00481538
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e330 ; 00481539 | void core_actor.cpp_CActorPropertyList_FUN_0040e330(CActorPropertyList * this_ptr)
        ;   XREF to: 0040e330 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0048153e
    ADD EBX,0x92c                       ; 00481541
    PUSH EBX                            ; 00481547
    PUSH 0x621564                       ; 00481548 | = "Locked sound" | s_Locked_sound_00621564 = Locked sound
    PUSH ESI                            ; 0048154d
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e2d0 ; 0048154e | void core_actor.cpp_CActorPropertyList_FUN_0040e2d0(CActorPropertyList * this_ptr)
        ;   XREF to: 0040e2d0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00481553
    POP EDI                             ; 00481556
    POP ESI                             ; 00481557
    POP EBX                             ; 00481558
    RET                                 ; 00481559
    LEA EAX,[EBX + 0x2dc]               ; 0048155a
        ;   Label: LAB_0048155a
    PUSH EAX                            ; 00481560
    PUSH 0x670320                       ; 00481561 | void * PTR_s_Left_00670320
    PUSH EDX                            ; 00481566
    PUSH 0x6213a6                       ; 00481567 | = "Door side" | s_Door_side_006213a6 = Door side
    PUSH ESI                            ; 0048156c
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e640 ; 0048156d | void core_actor.cpp_CActorPropertyList_FUN_0040e640(CActorPropertyList * this_ptr)
        ;   XREF to: 0040e640 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 00481572
    JMP 0x00481377                      ; 00481575 | LAB_00481377
        ;   XREF to: 00481377 (UNCONDITIONAL_JUMP)
    PUSH 0x0                            ; 0048157a
        ;   Label: LAB_0048157a
    PUSH EAX                            ; 0048157c
    PUSH 0x621446                       ; 0048157d | = "Maximum open param" | s_Maximum_open_param_00621446 = Maximum open param
    JMP 0x00481454                      ; 00481582 | LAB_00481454
        ;   XREF to: 00481454 (UNCONDITIONAL_JUMP)

