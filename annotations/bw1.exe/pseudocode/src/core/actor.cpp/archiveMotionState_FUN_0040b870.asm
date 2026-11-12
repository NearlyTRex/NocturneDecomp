; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_archiveMotionState_FUN_0040b870(CMotionController *motion_controller,char *property_name)
;
; Parameters:
; CMotionController * Stack[0x4]:4   motion_controller
; char *           Stack[0x8]:4   property_name
;
; XREF[39]:
;   core_armour.cpp_CArmour_archive_FUN_0040ebe0 at 0040ec1d
;   core_batcreat.cpp_CBatCreature_archive_FUN_00412110 at 0041214d
;   core_batman.cpp_CBatman_archive_FUN_00413b60 at 00413b9d
;   core_beast.cpp_CBeast_archive_FUN_00414800 at 0041483d
;   core_biggs.cpp_CBiggs_archive_FUN_00414f30 at 00414f6d
;   core_bird.cpp_CBird_archive_FUN_00415780 at 004157bd
;   core_boneguy.cpp_CBoneGuy_archive_FUN_0041d0d0 at 0041d131
;   core_bride.cpp_CBride_archive_FUN_00424840 at 004248be
;   core_carved.cpp_CCarved_archive_FUN_0042b3c0 at 0042b3fd
;   core_construc.cpp_CConstruct_archive_FUN_00446e30 at 00446e77
;   ... and 29 more
;
; Referenced Globals:
;   TerminatedCString s_motion_state_info_openin_005d2ab4
;   TerminatedCString s_motion_state_info_closin_005d2ad4
;   TerminatedCString s_s_s_005d2af4
;   undefined4 DAT_005d2aff
;   undefined1 DAT_006106c0
;   undefined4 DAT_007c3034
;   undefined4 DAT_007c3038
;
; Called Functions:
;   core_actor.cpp_adjustIndentationLevel_FUN_0040ad60
;   core_actor.cpp_handleActorPropertyParseError_FUN_0040b090
;   core_motion.cpp_CMotionController_load_FUN_00525380
;   core_motion.cpp_CMotionController_save_FUN_00525420
;   crt_stdio.c_fgetc_FUN_005c0530
;   crt_unknown.c_FUN_005c03c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040b870
        ;   Label: core_actor.cpp_archiveMotionState_FUN_0040b870
    PUSH ESI                            ; 0040b871
    PUSH EBP                            ; 0040b872
    MOV EBX,dword ptr [ESP + 0x14]      ; 0040b873
    CMP dword ptr [0x007c3038],0x1      ; 0040b877 | DAT_007c3038
    JNZ 0x0040b8f6                      ; 0040b87e
        ;   XREF to: 0040b8f6 (CONDITIONAL_JUMP)  ; LAB_0040b8f6
    MOV EBP,dword ptr [0x007c3034]      ; 0040b884 | DAT_007c3034
        ;   Label: LAB_0040b884
    PUSH EBP                            ; 0040b88a
    CALL crt_stdio.c_fgetc_FUN_005c0530 ; 0040b88b
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005c0530(_FILE * file)
    ADD ESP,0x4                         ; 0040b890
    MOV ESI,EAX                         ; 0040b893
    TEST EAX,EAX                        ; 0040b895
    JL 0x0040b8cf                       ; 0040b897
        ;   XREF to: 0040b8cf (CONDITIONAL_JUMP)  ; LAB_0040b8cf
    CMP ESI,0xa                         ; 0040b899
        ;   Label: LAB_0040b899
    JNZ 0x0040b884                      ; 0040b89c
        ;   XREF to: 0040b884 (CONDITIONAL_JUMP)  ; LAB_0040b884
    MOV EAX,[0x007c3034]                ; 0040b89e | DAT_007c3034
    PUSH EAX                            ; 0040b8a3
    MOV EDX,dword ptr [ESP + 0x14]      ; 0040b8a4
    PUSH EDX                            ; 0040b8a8
    CALL core_motion.cpp_CMotionController_load_FUN_00525380 ; 0040b8a9
        ;   XREF to: 00525380 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_load_FUN_00525380(CMotionController * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 0040b8ae
    MOV ECX,dword ptr [0x007c3034]      ; 0040b8b1 | DAT_007c3034
        ;   Label: LAB_0040b8b1
    PUSH ECX                            ; 0040b8b7
    CALL crt_stdio.c_fgetc_FUN_005c0530 ; 0040b8b8
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005c0530(_FILE * file)
    ADD ESP,0x4                         ; 0040b8bd
    MOV ESI,EAX                         ; 0040b8c0
    TEST EAX,EAX                        ; 0040b8c2
    JL 0x0040b8df                       ; 0040b8c4
        ;   XREF to: 0040b8df (CONDITIONAL_JUMP)  ; LAB_0040b8df
    CMP ESI,0xa                         ; 0040b8c6
    JNZ 0x0040b8b1                      ; 0040b8c9
        ;   XREF to: 0040b8b1 (CONDITIONAL_JUMP)  ; LAB_0040b8b1
    POP EBP                             ; 0040b8cb
    POP ESI                             ; 0040b8cc
    POP EBX                             ; 0040b8cd
    RET                                 ; 0040b8ce
    PUSH EBX                            ; 0040b8cf
        ;   Label: LAB_0040b8cf
    PUSH 0x5d2ab4                       ; 0040b8d0 | = "motion state info opening brace"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b090 ; 0040b8d5
        ;   XREF to: 0040b090 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040b090(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040b8da
    JMP 0x0040b899                      ; 0040b8dd
        ;   XREF to: 0040b899 (UNCONDITIONAL_JUMP)  ; LAB_0040b899
    PUSH EBX                            ; 0040b8df
        ;   Label: LAB_0040b8df
    PUSH 0x5d2ad4                       ; 0040b8e0 | = "motion state info closing brace"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b090 ; 0040b8e5
        ;   XREF to: 0040b090 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040b090(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040b8ea
    CMP ESI,0xa                         ; 0040b8ed
    JNZ 0x0040b8b1                      ; 0040b8f0
        ;   XREF to: 0040b8b1 (CONDITIONAL_JUMP)  ; LAB_0040b8b1
    POP EBP                             ; 0040b8f2
    POP ESI                             ; 0040b8f3
    POP EBX                             ; 0040b8f4
    RET                                 ; 0040b8f5
    PUSH EDI                            ; 0040b8f6
        ;   Label: LAB_0040b8f6
    PUSH EBX                            ; 0040b8f7
    PUSH 0x6106c0                       ; 0040b8f8 | DAT_006106c0
    PUSH 0x5d2af4                       ; 0040b8fd | = "%s{ // %s\n"
    MOV ECX,dword ptr [0x007c3034]      ; 0040b902 | DAT_007c3034
    PUSH ECX                            ; 0040b908
    CALL crt_unknown.c_FUN_005c03c0     ; 0040b909
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0x10                        ; 0040b90e
    PUSH 0x1                            ; 0040b911
    CALL core_actor.cpp_adjustIndentationLevel_FUN_0040ad60 ; 0040b913
        ;   XREF to: 0040ad60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_adjustIndentationLevel_FUN_0040ad60(int indent_delta)
    ADD ESP,0x4                         ; 0040b918
    PUSH 0x6106c0                       ; 0040b91b | DAT_006106c0
    MOV EBX,dword ptr [0x007c3034]      ; 0040b920 | DAT_007c3034
    PUSH EBX                            ; 0040b926
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0040b927
    PUSH ESI                            ; 0040b92b
    CALL core_motion.cpp_CMotionController_save_FUN_00525420 ; 0040b92c
        ;   XREF to: 00525420 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_save_FUN_00525420(CMotionController * this_ptr, _FILE * file_handle, char * indent_prefix)
    ADD ESP,0xc                         ; 0040b931
    PUSH -0x1                           ; 0040b934
    CALL core_actor.cpp_adjustIndentationLevel_FUN_0040ad60 ; 0040b936
        ;   XREF to: 0040ad60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_adjustIndentationLevel_FUN_0040ad60(int indent_delta)
    ADD ESP,0x4                         ; 0040b93b
    PUSH 0x6106c0                       ; 0040b93e | DAT_006106c0
    PUSH 0x5d2aff                       ; 0040b943 | DAT_005d2aff
    MOV EDI,dword ptr [0x007c3034]      ; 0040b948 | DAT_007c3034
    PUSH EDI                            ; 0040b94e
    CALL crt_unknown.c_FUN_005c03c0     ; 0040b94f
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c03c0()
    ADD ESP,0xc                         ; 0040b954
    POP EDI                             ; 0040b957
    POP EBP                             ; 0040b958
    POP ESI                             ; 0040b959
    POP EBX                             ; 0040b95a
    RET                                 ; 0040b95b

