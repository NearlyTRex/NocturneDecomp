; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_CDemonActor_archive_FUN_0040c040(CDemonActor *this_ptr)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x8]:1  local_8
;
; XREF[52]:
;   core_ammo.cpp_CAmmo_archive_FUN_0040dd40 at 0040dd46
;   core_ammobox.cpp_CAmmoBox_archive_FUN_0040e400 at 0040e406
;   core_anvil.cpp_CAnvil_archive_FUN_0040e860 at 0040e866
;   core_backgnd.cpp_FUN_0040f050 at 0040f056
;   core_barrier.cpp_CBarrier_archive_FUN_00410940 at 00410946
;   core_bat.cpp_CBat_archive_FUN_00410c90 at 00410c96
;   core_battery.cpp_CBattery_archive_FUN_004145a0 at 004145a6
;   core_bodypart.cpp_FUN_004193c0 at 004193cc
;   core_boxactor.cpp_CBoxActor_archive_FUN_00422760 at 00422770
;   core_chain.cpp_CChain_archive_FUN_00436d50 at 00436d56
;   ... and 42 more
;
; Referenced Globals:
;   TerminatedCString s_location_005d2d2d
;   TerminatedCString s_orient_005d2d36
;   undefined4 DAT_005d2d3d
;   TerminatedCString s_wasCreated_005d2d41
;   TerminatedCString s_createProb_005d2d4c
;   TerminatedCString s_createEvent_005d2d57
;   int g_CDemonActorClassVersion = 0x7
;
; Called Functions:
;   core_actor.cpp_archiveFloat_FUN_0040b5f0
;   core_actor.cpp_archiveInteger_FUN_0040b670
;   core_actor.cpp_archiveLocation_FUN_0040b300
;   core_actor.cpp_archiveOrientation_FUN_0040b260
;   core_actor.cpp_archiveString_FUN_0040b440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040c040
        ;   Label: core_actor.cpp_CDemonActor_archive_FUN_0040c040
    SUB ESP,0x4                         ; 0040c041
    MOV EBX,dword ptr [ESP + 0xc]       ; 0040c044
    PUSH 0x5d2d2d                       ; 0040c048 | = "location"
    LEA EAX,[EBX + 0x20]                ; 0040c04d
    PUSH EAX                            ; 0040c050
    CALL core_actor.cpp_archiveLocation_FUN_0040b300 ; 0040c051
        ;   XREF to: 0040b300 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveLocation_FUN_0040b300()
    ADD ESP,0x8                         ; 0040c056
    PUSH 0x5d2d36                       ; 0040c059 | = "orient"
    LEA EAX,[EBX + 0x30]                ; 0040c05e
    PUSH EAX                            ; 0040c061
    CALL core_actor.cpp_archiveOrientation_FUN_0040b260 ; 0040c062
        ;   XREF to: 0040b260 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveOrientation_FUN_0040b260()
    MOV EDX,dword ptr [0x006106b8]      ; 0040c067 | g_CDemonActorClassVersion
    ADD ESP,0x8                         ; 0040c06d
    CMP EDX,0x7                         ; 0040c070
    JL 0x0040c083                       ; 0040c073
        ;   XREF to: 0040c083 (CONDITIONAL_JUMP)  ; LAB_0040c083
    CMP dword ptr [0x006106b8],0x6      ; 0040c075 | g_CDemonActorClassVersion
    JGE 0x0040c0a3                      ; 0040c07c
        ;   XREF to: 0040c0a3 (CONDITIONAL_JUMP)  ; LAB_0040c0a3
    ADD ESP,0x4                         ; 0040c07e
    POP EBX                             ; 0040c081
    RET                                 ; 0040c082
    PUSH 0x5d2d3d                       ; 0040c083 | DAT_005d2d3d
        ;   Label: LAB_0040c083
    LEA EAX,[ESP + 0x4]                 ; 0040c088
    PUSH EAX                            ; 0040c08c
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 0040c08d
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b5f0()
    ADD ESP,0x8                         ; 0040c092
    CMP dword ptr [0x006106b8],0x6      ; 0040c095 | g_CDemonActorClassVersion
    JGE 0x0040c0a3                      ; 0040c09c
        ;   XREF to: 0040c0a3 (CONDITIONAL_JUMP)  ; LAB_0040c0a3
    ADD ESP,0x4                         ; 0040c09e
    POP EBX                             ; 0040c0a1
    RET                                 ; 0040c0a2
    PUSH 0x5d2d41                       ; 0040c0a3 | = "wasCreated"
        ;   Label: LAB_0040c0a3
    LEA EAX,[EBX + 0x70]                ; 0040c0a8
    PUSH EAX                            ; 0040c0ab
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 0040c0ac
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0040c0b1
    PUSH 0x5d2d4c                       ; 0040c0b4 | = "createProb"
    LEA EAX,[EBX + 0x74]                ; 0040c0b9
    PUSH EAX                            ; 0040c0bc
    CALL core_actor.cpp_archiveFloat_FUN_0040b5f0 ; 0040c0bd
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b5f0()
    ADD ESP,0x8                         ; 0040c0c2
    PUSH 0x5d2d57                       ; 0040c0c5 | = "createEvent"
    ADD EBX,0x78                        ; 0040c0ca
    PUSH EBX                            ; 0040c0cd
    CALL core_actor.cpp_archiveString_FUN_0040b440 ; 0040c0ce
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b440(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0040c0d3
    ADD ESP,0x4                         ; 0040c0d6
    POP EBX                             ; 0040c0d9
    RET                                 ; 0040c0da

