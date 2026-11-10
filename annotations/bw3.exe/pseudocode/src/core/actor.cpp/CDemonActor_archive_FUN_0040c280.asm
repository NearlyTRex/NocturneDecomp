; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_CDemonActor_archive_FUN_0040c280(CDemonActor *this_ptr)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x8]:1  local_8
;
; XREF[48]:
;   core_ammo.cpp_CAmmo_archive_FUN_0040e000 at 0040e006
;   core_ammobox.cpp_CAmmoBox_archive_FUN_0040e8f0 at 0040e8f6
;   core_barrier.cpp_CBarrier_archive_FUN_0040ebd0 at 0040ebd6
;   core_bat.cpp_CBat_archive_FUN_0040ef20 at 0040ef26
;   core_battery.cpp_CBattery_archive_FUN_0040f630 at 0040f636
;   core_bird.cpp_CBird_archive_FUN_0040ff80 at 0040ff9b
;   core_bodypart.cpp_CBodyPart_archive_FUN_00414fd0 at 00414fdc
;   core_boxactor.cpp_CBoxActor_archive_FUN_0041fb90 at 0041fba0
;   core_chain.cpp_CChain_archive_FUN_0042a9d0 at 0042a9d6
;   core_charactr.cpp_CCharacter_archive_FUN_0042b450 at 0042b45c
;   ... and 38 more
;
; Referenced Globals:
;   TerminatedCString s_location_005b5d79
;   TerminatedCString s_orient_005b5d82
;   undefined4 DAT_005b5d89
;   TerminatedCString s_wasCreated_005b5d8d
;   TerminatedCString s_createProb_005b5d98
;   TerminatedCString s_createEvent_005b5da3
;   int g_CDemonActorClassVersion = 0x7
;
; Called Functions:
;   core_actor.cpp_archiveFloat_FUN_0040b830
;   core_actor.cpp_archiveInteger_FUN_0040b8b0
;   core_actor.cpp_archiveLocation_FUN_0040b540
;   core_actor.cpp_archiveOrientation_FUN_0040b4a0
;   core_actor.cpp_archiveString_FUN_0040b680
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040c280
        ;   Label: core_actor.cpp_CDemonActor_archive_FUN_0040c280
    SUB ESP,0x4                         ; 0040c281
    MOV EBX,dword ptr [ESP + 0xc]       ; 0040c284
    PUSH 0x5b5d79                       ; 0040c288 | = "location"
    LEA EAX,[EBX + 0x20]                ; 0040c28d
    PUSH EAX                            ; 0040c290
    CALL core_actor.cpp_archiveLocation_FUN_0040b540 ; 0040c291
        ;   XREF to: 0040b540 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveLocation_FUN_0040b540()
    ADD ESP,0x8                         ; 0040c296
    PUSH 0x5b5d82                       ; 0040c299 | = "orient"
    LEA EAX,[EBX + 0x30]                ; 0040c29e
    PUSH EAX                            ; 0040c2a1
    CALL core_actor.cpp_archiveOrientation_FUN_0040b4a0 ; 0040c2a2
        ;   XREF to: 0040b4a0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveOrientation_FUN_0040b4a0()
    MOV EDX,dword ptr [0x005f0988]      ; 0040c2a7 | g_CDemonActorClassVersion
    ADD ESP,0x8                         ; 0040c2ad
    CMP EDX,0x7                         ; 0040c2b0
    JL 0x0040c2c3                       ; 0040c2b3
        ;   XREF to: 0040c2c3 (CONDITIONAL_JUMP)  ; LAB_0040c2c3
    CMP dword ptr [0x005f0988],0x6      ; 0040c2b5 | g_CDemonActorClassVersion
    JGE 0x0040c2e3                      ; 0040c2bc
        ;   XREF to: 0040c2e3 (CONDITIONAL_JUMP)  ; LAB_0040c2e3
    ADD ESP,0x4                         ; 0040c2be
    POP EBX                             ; 0040c2c1
    RET                                 ; 0040c2c2
    PUSH 0x5b5d89                       ; 0040c2c3 | DAT_005b5d89
        ;   Label: LAB_0040c2c3
    LEA EAX,[ESP + 0x4]                 ; 0040c2c8
    PUSH EAX                            ; 0040c2cc
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 0040c2cd
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 0040c2d2
    CMP dword ptr [0x005f0988],0x6      ; 0040c2d5 | g_CDemonActorClassVersion
    JGE 0x0040c2e3                      ; 0040c2dc
        ;   XREF to: 0040c2e3 (CONDITIONAL_JUMP)  ; LAB_0040c2e3
    ADD ESP,0x4                         ; 0040c2de
    POP EBX                             ; 0040c2e1
    RET                                 ; 0040c2e2
    PUSH 0x5b5d8d                       ; 0040c2e3 | = "wasCreated"
        ;   Label: LAB_0040c2e3
    LEA EAX,[EBX + 0x70]                ; 0040c2e8
    PUSH EAX                            ; 0040c2eb
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 0040c2ec
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0040c2f1
    PUSH 0x5b5d98                       ; 0040c2f4 | = "createProb"
    LEA EAX,[EBX + 0x74]                ; 0040c2f9
    PUSH EAX                            ; 0040c2fc
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 0040c2fd
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b830()
    ADD ESP,0x8                         ; 0040c302
    PUSH 0x5b5da3                       ; 0040c305 | = "createEvent"
    ADD EBX,0x78                        ; 0040c30a
    PUSH EBX                            ; 0040c30d
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 0040c30e
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0040c313
    ADD ESP,0x4                         ; 0040c316
    POP EBX                             ; 0040c319
    RET                                 ; 0040c31a

