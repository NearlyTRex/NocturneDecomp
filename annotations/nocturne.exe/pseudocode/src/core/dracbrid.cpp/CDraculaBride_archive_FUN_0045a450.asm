; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dracbrid_cpp_CDraculaBride_archive_FUN_0045a450(CEnemy *param_1)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_speed_0057d75e
;   TerminatedCString s_modelName_0057d764
;   TerminatedCString s_guardDistance_0057d76e
;   TerminatedCString s_riseEvent_0057d77c
;   TerminatedCString s_initialState_0057d786
;   TerminatedCString s_vincoffin_0057d793
;   TerminatedCString s_incoffin_0057d79d
;   TerminatedCString s_motionState_0057d7a6
;   TerminatedCString s_clothCount_0057d7b2
;   TerminatedCString s_freakyVoiceNumber_0057d7bd
;   TerminatedCString s_exploded_0057d7cf
;   TerminatedCString s_partCount_0057d7d8
;   TerminatedCString s_fadeTimer_0057d7e2
;   TerminatedCString s_partList_0057d7ec
;   TerminatedCString s_mistState_0057d7f5
;   ... and 4 more
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040c980
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040ca80
;   core_actor.cpp_archiveFloat_FUN_0040c880
;   core_actor.cpp_archiveInteger_FUN_0040c900
;   core_actor.cpp_archiveMotionState_FUN_0040cb00
;   core_actor.cpp_archiveString_FUN_0040c6d0
;   core_actor.cpp_archiveVector_FUN_0040c450
;   core_enemy.cpp_CEnemy_archive_FUN_004796c0
;   core_motion.cpp_CMotionController_jumpToMotionByName_FUN_004e1960
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045a450
        ;   Label: core_dracbrid.cpp_CDraculaBride_archive_FUN_0045a450
    PUSH ESI                            ; 0045a451
    PUSH EDI                            ; 0045a452
    PUSH EBP                            ; 0045a453
    SUB ESP,0x4                         ; 0045a454
    MOV EDI,dword ptr [ESP + 0x18]      ; 0045a457
    PUSH EDI                            ; 0045a45b
    CALL core_enemy.cpp_CEnemy_archive_FUN_004796c0 ; 0045a45c
        ;   XREF to: 004796c0 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_archive_FUN_004796c0(CEnemy * this_ptr)
    MOV EDX,dword ptr [0x005ae6c8]      ; 0045a461 | g_INT_005ae6c8
    ADD ESP,0x4                         ; 0045a467
    CMP EDX,0x2                         ; 0045a46a
    JL 0x0045a631                       ; 0045a46d
        ;   XREF to: 0045a631 (CONDITIONAL_JUMP)  ; LAB_0045a631
    PUSH 0x57d764                       ; 0045a473 | = "modelName"
        ;   Label: LAB_0045a473
    LEA EAX,[EDI + 0x150]               ; 0045a478
    PUSH EAX                            ; 0045a47e
    CALL core_actor.cpp_archiveDeformableModelInstance_FUN_0040ca80 ; 0045a47f
        ;   XREF to: 0040ca80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveDeformableModelInstance_FUN_0040ca80()
    MOV ECX,dword ptr [0x005ae6c8]      ; 0045a484 | g_INT_005ae6c8
    ADD ESP,0x8                         ; 0045a48a
    CMP ECX,0x2                         ; 0045a48d
    JL 0x0045a4ab                       ; 0045a490
        ;   XREF to: 0045a4ab (CONDITIONAL_JUMP)  ; LAB_0045a4ab
    CMP ECX,0x6                         ; 0045a492
    JGE 0x0045a4ab                      ; 0045a495
        ;   XREF to: 0045a4ab (CONDITIONAL_JUMP)  ; LAB_0045a4ab
    PUSH 0x57d76e                       ; 0045a497 | = "guardDistance"
    LEA EAX,[EDI + 0xbc9c]              ; 0045a49c
    PUSH EAX                            ; 0045a4a2
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 0045a4a3
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040c880(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0045a4a8
    CMP dword ptr [0x005ae6c8],0x3      ; 0045a4ab | g_INT_005ae6c8
        ;   Label: LAB_0045a4ab
    JL 0x0045a511                       ; 0045a4b2
        ;   XREF to: 0045a511 (CONDITIONAL_JUMP)  ; LAB_0045a511
    PUSH 0x57d77c                       ; 0045a4b4 | = "riseEvent"
    LEA EAX,[EDI + 0xbd48]              ; 0045a4b9
    PUSH EAX                            ; 0045a4bf
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 0045a4c0
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040c6d0(char * string_buffer, char * property_type)
    MOV EBP,dword ptr [0x005ae6c8]      ; 0045a4c5 | g_INT_005ae6c8
    ADD ESP,0x8                         ; 0045a4cb
    CMP EBP,0x4                         ; 0045a4ce
    JGE 0x0045a511                      ; 0045a4d1
        ;   XREF to: 0045a511 (CONDITIONAL_JUMP)  ; LAB_0045a511
    PUSH 0x57d786                       ; 0045a4d3 | = "initialState"
    LEA EAX,[ESP + 0x4]                 ; 0045a4d8
    PUSH EAX                            ; 0045a4dc
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 0045a4dd
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040c900(int * int_ptr, char * property_name)
    MOV EAX,[0x00763e88]                ; 0045a4e2 | DAT_00763e88
    ADD ESP,0x8                         ; 0045a4e7
    CMP EAX,0x1                         ; 0045a4ea
    JNZ 0x0045a511                      ; 0045a4ed
        ;   XREF to: 0045a511 (CONDITIONAL_JUMP)  ; LAB_0045a511
    MOV EDX,dword ptr [ESP]             ; 0045a4ef
    LEA EAX,[EDI + 0x150]               ; 0045a4f2
    CMP EDX,0x1                         ; 0045a4f8
    JNZ 0x0045a64a                      ; 0045a4fb
        ;   XREF to: 0045a64a (CONDITIONAL_JUMP)  ; LAB_0045a64a
    PUSH 0x0                            ; 0045a501
    PUSH 0x57d793                       ; 0045a503 | = "vincoffin"
    PUSH EAX                            ; 0045a508
        ;   Label: LAB_0045a508
    CALL core_motion.cpp_CMotionController_jumpToMotionByName_FUN_004e1960 ; 0045a509
        ;   XREF to: 004e1960 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_jumpToMotionByName_FUN_004e1960(CMotionController * this_ptr, char * motion_name, float frame_number)
    ADD ESP,0xc                         ; 0045a50e
    CMP dword ptr [0x005ae6c8],0x4      ; 0045a511 | g_INT_005ae6c8
        ;   Label: LAB_0045a511
    JL 0x0045a52e                       ; 0045a518
        ;   XREF to: 0045a52e (CONDITIONAL_JUMP)  ; LAB_0045a52e
    PUSH 0x57d7a6                       ; 0045a51a | = "motionState"
    LEA EAX,[EDI + 0x150]               ; 0045a51f
    PUSH EAX                            ; 0045a525
    CALL core_actor.cpp_archiveMotionState_FUN_0040cb00 ; 0045a526
        ;   XREF to: 0040cb00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveMotionState_FUN_0040cb00(CMotionController * motion_controller, char * property_name)
    ADD ESP,0x8                         ; 0045a52b
    CMP dword ptr [0x005ae6c8],0x4      ; 0045a52e | g_INT_005ae6c8
        ;   Label: LAB_0045a52e
    JNZ 0x0045a580                      ; 0045a535
        ;   XREF to: 0045a580 (CONDITIONAL_JUMP)  ; LAB_0045a580
    PUSH 0x57d7b2                       ; 0045a537 | = "clothCount"
    LEA EAX,[EDI + 0x2a8c]              ; 0045a53c
    PUSH EAX                            ; 0045a542
    XOR EBX,EBX                         ; 0045a543
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 0045a545
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040c900(int * int_ptr, char * property_name)
    MOV ESI,dword ptr [EDI + 0x2a8c]    ; 0045a54a
    ADD ESP,0x8                         ; 0045a550
    TEST ESI,ESI                        ; 0045a553
    JLE 0x0045a580                      ; 0045a555
        ;   XREF to: 0045a580 (CONDITIONAL_JUMP)  ; LAB_0045a580
    LEA ESI,[EDI + 0x2a90]              ; 0045a557
    PUSH 0x0                            ; 0045a55d
        ;   Label: LAB_0045a55d
    PUSH ESI                            ; 0045a55f
    INC EBX                             ; 0045a560
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 0045a561
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040c6d0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0045a566
    MOV EBP,dword ptr [EDI + 0x2a8c]    ; 0045a569
    ADD ESI,0x28                        ; 0045a56f
    CMP EBX,EBP                         ; 0045a572
    JL 0x0045a55d                       ; 0045a574
        ;   XREF to: 0045a55d (CONDITIONAL_JUMP)  ; LAB_0045a55d
    LEA EAX,[EAX]                       ; 0045a576
    LEA EDX,[EDX]                       ; 0045a57c
    CMP dword ptr [0x005ae6c8],0x7      ; 0045a580 | g_INT_005ae6c8
        ;   Label: LAB_0045a580
    JL 0x0045a59d                       ; 0045a587
        ;   XREF to: 0045a59d (CONDITIONAL_JUMP)  ; LAB_0045a59d
    PUSH 0x57d7bd                       ; 0045a589 | = "freakyVoiceNumber"
    LEA EAX,[EDI + 0xbdac]              ; 0045a58e
    PUSH EAX                            ; 0045a594
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 0045a595
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040c900(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0045a59a
    CMP dword ptr [0x005ae6c8],0x8      ; 0045a59d | g_INT_005ae6c8
        ;   Label: LAB_0045a59d
    JL 0x0045a620                       ; 0045a5a4
        ;   XREF to: 0045a620 (CONDITIONAL_JUMP)  ; LAB_0045a620
    PUSH 0x57d7cf                       ; 0045a5aa | = "exploded"
    LEA EAX,[EDI + 0xbe4c]              ; 0045a5af
    PUSH EAX                            ; 0045a5b5
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 0045a5b6
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040c900(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0045a5bb
    PUSH 0x57d7d8                       ; 0045a5be | = "partCount"
    LEA EAX,[EDI + 0xbdd0]              ; 0045a5c3
    PUSH EAX                            ; 0045a5c9
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 0045a5ca
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040c900(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0045a5cf
    PUSH 0x57d7e2                       ; 0045a5d2 | = "fadeTimer"
    LEA EAX,[EDI + 0xbe50]              ; 0045a5d7
    PUSH EAX                            ; 0045a5dd
    XOR EBX,EBX                         ; 0045a5de
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 0045a5e0
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040c880(float * float_ptr, char * property_name)
    MOV ECX,dword ptr [EDI + 0xbdd0]    ; 0045a5e5
    ADD ESP,0x8                         ; 0045a5eb
    TEST ECX,ECX                        ; 0045a5ee
    JLE 0x0045a620                      ; 0045a5f0
        ;   XREF to: 0045a620 (CONDITIONAL_JUMP)  ; LAB_0045a620
    LEA ESI,[EDI + 0xbdd4]              ; 0045a5f2
    PUSH 0x57d7ec                       ; 0045a5f8 | = "partList"
        ;   Label: LAB_0045a5f8
    PUSH ESI                            ; 0045a5fd
    INC EBX                             ; 0045a5fe
    CALL core_actor.cpp_archiveActor_FUN_0040c980 ; 0045a5ff
        ;   XREF to: 0040c980 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveActor_FUN_0040c980(CDemonActor * * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 0045a604
    MOV EBP,dword ptr [EDI + 0xbdd0]    ; 0045a607
    ADD ESI,0x4                         ; 0045a60d
    CMP EBX,EBP                         ; 0045a610
    JL 0x0045a5f8                       ; 0045a612
        ;   XREF to: 0045a5f8 (CONDITIONAL_JUMP)  ; LAB_0045a5f8
    LEA EAX,[EAX]                       ; 0045a614
    LEA EDX,[EDX]                       ; 0045a61a
    CMP dword ptr [0x005ae6c8],0x9      ; 0045a620 | g_INT_005ae6c8
        ;   Label: LAB_0045a620
    JGE 0x0045a656                      ; 0045a627
        ;   XREF to: 0045a656 (CONDITIONAL_JUMP)  ; LAB_0045a656
    ADD ESP,0x4                         ; 0045a629
    POP EBP                             ; 0045a62c
    POP EDI                             ; 0045a62d
    POP ESI                             ; 0045a62e
    POP EBX                             ; 0045a62f
    RET                                 ; 0045a630
    PUSH 0x57d75e                       ; 0045a631 | = "speed"
        ;   Label: LAB_0045a631
    LEA EAX,[EDI + 0xbc8c]              ; 0045a636
    PUSH EAX                            ; 0045a63c
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 0045a63d
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040c880(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0045a642
    JMP 0x0045a473                      ; 0045a645
        ;   XREF to: 0045a473 (UNCONDITIONAL_JUMP)  ; LAB_0045a473
    PUSH 0x0                            ; 0045a64a
        ;   Label: LAB_0045a64a
    PUSH 0x57d79d                       ; 0045a64c | = "incoffin"
    JMP 0x0045a508                      ; 0045a651
        ;   XREF to: 0045a508 (UNCONDITIONAL_JUMP)  ; LAB_0045a508
    PUSH 0x57d7f5                       ; 0045a656 | = "mistState"
        ;   Label: LAB_0045a656
    LEA EAX,[EDI + 0xbdb0]              ; 0045a65b
    PUSH EAX                            ; 0045a661
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 0045a662
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040c900(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0045a667
    PUSH 0x57d7ff                       ; 0045a66a | = "vanishTimer"
    LEA EAX,[EDI + 0xbdb4]              ; 0045a66f
    PUSH EAX                            ; 0045a675
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 0045a676
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040c880(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0045a67b
    PUSH 0x57d80b                       ; 0045a67e | = "newPos"
    ADD EDI,0xbdc0                      ; 0045a683
    PUSH EDI                            ; 0045a689
    CALL core_actor.cpp_archiveVector_FUN_0040c450 ; 0045a68a
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveVector_FUN_0040c450(CVector3f * vector_ptr, char * property_name)
    ADD ESP,0x8                         ; 0045a68f
    ADD ESP,0x4                         ; 0045a692
    POP EBP                             ; 0045a695
    POP EDI                             ; 0045a696
    POP ESI                             ; 0045a697
    POP EBX                             ; 0045a698
    RET                                 ; 0045a699

