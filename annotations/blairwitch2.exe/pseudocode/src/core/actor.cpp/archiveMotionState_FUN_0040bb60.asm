; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_archiveMotionState_FUN_0040bb60(CMotionController *param_1,char *param_2)
;
;
; XREF[32]:
;   core_armour.cpp_CArmour_archive_FUN_0040f040 at 0040f07d
;   core_basicene.cpp_CBasicEnemy_archive_FUN_0059fc10 at 0059fc65
;   core_batcreat.cpp_CBatCreature_archive_FUN_004124a0 at 004124dd
;   core_batman.cpp_CBatman_archive_FUN_00413e60 at 00413e9d
;   core_beast.cpp_CBeast_archive_FUN_00414b10 at 00414b4d
;   core_biggs.cpp_CBiggs_archive_FUN_00415250 at 0041528d
;   core_boneguy.cpp_CBoneGuy_archive_FUN_00419c50 at 00419cb1
;   core_bride.cpp_CBride_archive_FUN_0041e800 at 0041e87e
;   core_conveyor.cpp_CConstruct_archive_FUN_00437b80 at 00437bc7
;   core_cow.cpp_CZombieCow_archive_FUN_00439830 at 0043987d
;   ... and 22 more
;
; Referenced Globals:
;   TerminatedCString s_motion_state_info_openin_005cab51
;   TerminatedCString s_motion_state_info_closin_005cab71
;   TerminatedCString s_s_s_005cab91
;   undefined4 DAT_005cab9c
;   undefined1 DAT_00609590
;   undefined4 DAT_007bc034
;   undefined4 DAT_007bc038
;
; Called Functions:
;   core_actor.cpp_adjustIndentationLevel_FUN_0040b050
;   core_actor.cpp_handleActorPropertyParseError_FUN_0040b380
;   core_motion.cpp_CMotionController_load_FUN_005041b0
;   core_motion.cpp_CMotionController_save_FUN_00504250
;   crt_stdio.c_fgetc_FUN_005b8180
;   crt_unknown.c_FUN_005b8010
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040bb60
        ;   Label: core_actor.cpp_archiveMotionState_FUN_0040bb60
    PUSH ESI                            ; 0040bb61
    PUSH EBP                            ; 0040bb62
    MOV EBX,dword ptr [ESP + 0x14]      ; 0040bb63
    CMP dword ptr [0x007bc038],0x1      ; 0040bb67 | DAT_007bc038
    JNZ 0x0040bbe6                      ; 0040bb6e
        ;   XREF to: 0040bbe6 (CONDITIONAL_JUMP)  ; LAB_0040bbe6
    MOV EBP,dword ptr [0x007bc034]      ; 0040bb74 | DAT_007bc034
        ;   Label: LAB_0040bb74
    PUSH EBP                            ; 0040bb7a
    CALL crt_stdio.c_fgetc_FUN_005b8180 ; 0040bb7b
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005b8180()
    ADD ESP,0x4                         ; 0040bb80
    MOV ESI,EAX                         ; 0040bb83
    TEST EAX,EAX                        ; 0040bb85
    JL 0x0040bbbf                       ; 0040bb87
        ;   XREF to: 0040bbbf (CONDITIONAL_JUMP)  ; LAB_0040bbbf
    CMP ESI,0xa                         ; 0040bb89
        ;   Label: LAB_0040bb89
    JNZ 0x0040bb74                      ; 0040bb8c
        ;   XREF to: 0040bb74 (CONDITIONAL_JUMP)  ; LAB_0040bb74
    MOV EAX,[0x007bc034]                ; 0040bb8e | DAT_007bc034
    PUSH EAX                            ; 0040bb93
    MOV EDX,dword ptr [ESP + 0x14]      ; 0040bb94
    PUSH EDX                            ; 0040bb98
    CALL core_motion.cpp_CMotionController_load_FUN_005041b0 ; 0040bb99
        ;   XREF to: 005041b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_load_FUN_005041b0(CMotionController * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 0040bb9e
    MOV ECX,dword ptr [0x007bc034]      ; 0040bba1 | DAT_007bc034
        ;   Label: LAB_0040bba1
    PUSH ECX                            ; 0040bba7
    CALL crt_stdio.c_fgetc_FUN_005b8180 ; 0040bba8
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005b8180()
    ADD ESP,0x4                         ; 0040bbad
    MOV ESI,EAX                         ; 0040bbb0
    TEST EAX,EAX                        ; 0040bbb2
    JL 0x0040bbcf                       ; 0040bbb4
        ;   XREF to: 0040bbcf (CONDITIONAL_JUMP)  ; LAB_0040bbcf
    CMP ESI,0xa                         ; 0040bbb6
    JNZ 0x0040bba1                      ; 0040bbb9
        ;   XREF to: 0040bba1 (CONDITIONAL_JUMP)  ; LAB_0040bba1
    POP EBP                             ; 0040bbbb
    POP ESI                             ; 0040bbbc
    POP EBX                             ; 0040bbbd
    RET                                 ; 0040bbbe
    PUSH EBX                            ; 0040bbbf
        ;   Label: LAB_0040bbbf
    PUSH 0x5cab51                       ; 0040bbc0 | = "motion state info opening brace"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b380 ; 0040bbc5
        ;   XREF to: 0040b380 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040b380(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040bbca
    JMP 0x0040bb89                      ; 0040bbcd
        ;   XREF to: 0040bb89 (UNCONDITIONAL_JUMP)  ; LAB_0040bb89
    PUSH EBX                            ; 0040bbcf
        ;   Label: LAB_0040bbcf
    PUSH 0x5cab71                       ; 0040bbd0 | = "motion state info closing brace"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b380 ; 0040bbd5
        ;   XREF to: 0040b380 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040b380(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040bbda
    CMP ESI,0xa                         ; 0040bbdd
    JNZ 0x0040bba1                      ; 0040bbe0
        ;   XREF to: 0040bba1 (CONDITIONAL_JUMP)  ; LAB_0040bba1
    POP EBP                             ; 0040bbe2
    POP ESI                             ; 0040bbe3
    POP EBX                             ; 0040bbe4
    RET                                 ; 0040bbe5
    PUSH EDI                            ; 0040bbe6
        ;   Label: LAB_0040bbe6
    PUSH EBX                            ; 0040bbe7
    PUSH 0x609590                       ; 0040bbe8 | DAT_00609590
    PUSH 0x5cab91                       ; 0040bbed | = "%s{ // %s\n"
    MOV ECX,dword ptr [0x007bc034]      ; 0040bbf2 | DAT_007bc034
    PUSH ECX                            ; 0040bbf8
    CALL crt_unknown.c_FUN_005b8010     ; 0040bbf9
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0x10                        ; 0040bbfe
    PUSH 0x1                            ; 0040bc01
    CALL core_actor.cpp_adjustIndentationLevel_FUN_0040b050 ; 0040bc03
        ;   XREF to: 0040b050 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_adjustIndentationLevel_FUN_0040b050(int indent_delta)
    ADD ESP,0x4                         ; 0040bc08
    PUSH 0x609590                       ; 0040bc0b | DAT_00609590
    MOV EBX,dword ptr [0x007bc034]      ; 0040bc10 | DAT_007bc034
    PUSH EBX                            ; 0040bc16
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0040bc17
    PUSH ESI                            ; 0040bc1b
    CALL core_motion.cpp_CMotionController_save_FUN_00504250 ; 0040bc1c
        ;   XREF to: 00504250 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_save_FUN_00504250(CMotionController * this_ptr, _FILE * file_handle, char * indent_prefix)
    ADD ESP,0xc                         ; 0040bc21
    PUSH -0x1                           ; 0040bc24
    CALL core_actor.cpp_adjustIndentationLevel_FUN_0040b050 ; 0040bc26
        ;   XREF to: 0040b050 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_adjustIndentationLevel_FUN_0040b050(int indent_delta)
    ADD ESP,0x4                         ; 0040bc2b
    PUSH 0x609590                       ; 0040bc2e | DAT_00609590
    PUSH 0x5cab9c                       ; 0040bc33 | DAT_005cab9c
    MOV EDI,dword ptr [0x007bc034]      ; 0040bc38 | DAT_007bc034
    PUSH EDI                            ; 0040bc3e
    CALL crt_unknown.c_FUN_005b8010     ; 0040bc3f
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0xc                         ; 0040bc44
    POP EDI                             ; 0040bc47
    POP EBP                             ; 0040bc48
    POP ESI                             ; 0040bc49
    POP EBX                             ; 0040bc4a
    RET                                 ; 0040bc4b

