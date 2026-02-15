; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_archiveMotionState_FUN_0040b9f0(CMotionController *motion_controller,char *property_name)
;
; Parameters:
; CMotionController * Stack[0x4]:4   motion_controller
; char *           Stack[0x8]:4   property_name
;
; XREF[29]:
;   core_armour.cpp_CArmour_archive_FUN_004123a0 at 004123dd
;   core_batcreat.cpp_CBatCreature_archive_FUN_00415d70 at 00415dad
;   core_batman.cpp_CBatman_archive_FUN_00417580 at 004175bd
;   core_beast.cpp_CBeast_archive_FUN_00418330 at 0041836d
;   core_biggs.cpp_CBiggs_archive_FUN_00418ac0 at 00418afd
;   core_boneguy.cpp_CBoneGuy_archive_FUN_0041d270 at 0041d2d1
;   core_bride.cpp_CBride_archive_FUN_00424560 at 004245de
;   core_cow.cpp_CZombieCow_archive_FUN_00444840 at 0044488d
;   core_dog.cpp_CZombieDog_archive_FUN_0047f7b0 at 0047f7fd
;   core_dracbrid.cpp_CDraculaBride_archive_FUN_00485dd0 at 00485ea6
;   ... and 19 more
;
; Referenced Globals:
;   TerminatedCString s_motion_state_info_openin_00613f33
;   TerminatedCString s_motion_state_info_closin_00613f53
;   TerminatedCString s_s_s_00613f73
;   TerminatedCString s_s_00613f7e
;   char[104] g_PropertyNamePrefix
;   _FILE* g_ActorDataFile
;   int g_ActorReadingMode
;
; Called Functions:
;   core_actor.cpp_adjustIndentationLevel_FUN_0040aee0
;   core_actor.cpp_handleActorPropertyParseError_FUN_0040b210
;   core_motion.cpp_CMotionController_load_FUN_0052e5d0
;   core_motion.cpp_CMotionController_save_FUN_0052e670
;   crt_stdio.c_fgetc_FUN_005fe840
;   crt_stdio.c_fprintf_FUN_005fe6d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040b9f0
        ;   Label: core_actor.cpp_archiveMotionState_FUN_0040b9f0
    PUSH ESI                            ; 0040b9f1
    PUSH EBP                            ; 0040b9f2
    MOV EBX,dword ptr [ESP + 0x14]      ; 0040b9f3
    CMP dword ptr [0x00822038],0x1      ; 0040b9f7 | g_ActorReadingMode
    JNZ 0x0040ba76                      ; 0040b9fe
        ;   XREF to: 0040ba76 (CONDITIONAL_JUMP)  ; LAB_0040ba76
    MOV EBP,dword ptr [0x00822034]      ; 0040ba04 | g_ActorDataFile
        ;   Label: LAB_0040ba04
    PUSH EBP                            ; 0040ba0a
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0040ba0b
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 0040ba10
    MOV ESI,EAX                         ; 0040ba13
    TEST EAX,EAX                        ; 0040ba15
    JL 0x0040ba4f                       ; 0040ba17
        ;   XREF to: 0040ba4f (CONDITIONAL_JUMP)  ; LAB_0040ba4f
    CMP ESI,0xa                         ; 0040ba19
        ;   Label: LAB_0040ba19
    JNZ 0x0040ba04                      ; 0040ba1c
        ;   XREF to: 0040ba04 (CONDITIONAL_JUMP)  ; LAB_0040ba04
    MOV EAX,[0x00822034]                ; 0040ba1e | g_ActorDataFile
    PUSH EAX                            ; 0040ba23
    MOV EDX,dword ptr [ESP + 0x14]      ; 0040ba24
    PUSH EDX                            ; 0040ba28
    CALL core_motion.cpp_CMotionController_load_FUN_0052e5d0 ; 0040ba29
        ;   XREF to: 0052e5d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_load_FUN_0052e5d0(CMotionController * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 0040ba2e
    MOV ECX,dword ptr [0x00822034]      ; 0040ba31 | g_ActorDataFile
        ;   Label: LAB_0040ba31
    PUSH ECX                            ; 0040ba37
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0040ba38
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 0040ba3d
    MOV ESI,EAX                         ; 0040ba40
    TEST EAX,EAX                        ; 0040ba42
    JL 0x0040ba5f                       ; 0040ba44
        ;   XREF to: 0040ba5f (CONDITIONAL_JUMP)  ; LAB_0040ba5f
    CMP ESI,0xa                         ; 0040ba46
    JNZ 0x0040ba31                      ; 0040ba49
        ;   XREF to: 0040ba31 (CONDITIONAL_JUMP)  ; LAB_0040ba31
    POP EBP                             ; 0040ba4b
    POP ESI                             ; 0040ba4c
    POP EBX                             ; 0040ba4d
    RET                                 ; 0040ba4e
    PUSH EBX                            ; 0040ba4f
        ;   Label: LAB_0040ba4f
    PUSH 0x613f33                       ; 0040ba50 | = "motion state info opening brace"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b210 ; 0040ba55
        ;   XREF to: 0040b210 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040b210(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040ba5a
    JMP 0x0040ba19                      ; 0040ba5d
        ;   XREF to: 0040ba19 (UNCONDITIONAL_JUMP)  ; LAB_0040ba19
    PUSH EBX                            ; 0040ba5f
        ;   Label: LAB_0040ba5f
    PUSH 0x613f53                       ; 0040ba60 | = "motion state info closing brace"
    CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b210 ; 0040ba65
        ;   XREF to: 0040b210 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_handleActorPropertyParseError_FUN_0040b210(char * property_description, char * property_type)
    ADD ESP,0x8                         ; 0040ba6a
    CMP ESI,0xa                         ; 0040ba6d
    JNZ 0x0040ba31                      ; 0040ba70
        ;   XREF to: 0040ba31 (CONDITIONAL_JUMP)  ; LAB_0040ba31
    POP EBP                             ; 0040ba72
    POP ESI                             ; 0040ba73
    POP EBX                             ; 0040ba74
    RET                                 ; 0040ba75
    PUSH EDI                            ; 0040ba76
        ;   Label: LAB_0040ba76
    PUSH EBX                            ; 0040ba77
    PUSH 0x66e178                       ; 0040ba78 | g_PropertyNamePrefix
    PUSH 0x613f73                       ; 0040ba7d | = "%s{ // %s\n"
    MOV ECX,dword ptr [0x00822034]      ; 0040ba82 | g_ActorDataFile
    PUSH ECX                            ; 0040ba88
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0040ba89
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x10                        ; 0040ba8e
    PUSH 0x1                            ; 0040ba91
    CALL core_actor.cpp_adjustIndentationLevel_FUN_0040aee0 ; 0040ba93
        ;   XREF to: 0040aee0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_adjustIndentationLevel_FUN_0040aee0(int indent_delta)
    ADD ESP,0x4                         ; 0040ba98
    PUSH 0x66e178                       ; 0040ba9b | g_PropertyNamePrefix
    MOV EBX,dword ptr [0x00822034]      ; 0040baa0 | g_ActorDataFile
    PUSH EBX                            ; 0040baa6
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0040baa7
    PUSH ESI                            ; 0040baab
    CALL core_motion.cpp_CMotionController_save_FUN_0052e670 ; 0040baac
        ;   XREF to: 0052e670 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_save_FUN_0052e670(CMotionController * this_ptr, _FILE * file_handle)
    ADD ESP,0xc                         ; 0040bab1
    PUSH -0x1                           ; 0040bab4
    CALL core_actor.cpp_adjustIndentationLevel_FUN_0040aee0 ; 0040bab6
        ;   XREF to: 0040aee0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_adjustIndentationLevel_FUN_0040aee0(int indent_delta)
    ADD ESP,0x4                         ; 0040babb
    PUSH 0x66e178                       ; 0040babe | g_PropertyNamePrefix
    PUSH 0x613f7e                       ; 0040bac3 | = "%s}\n"
    MOV EDI,dword ptr [0x00822034]      ; 0040bac8 | g_ActorDataFile
    PUSH EDI                            ; 0040bace
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0040bacf
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0040bad4
    POP EDI                             ; 0040bad7
    POP EBP                             ; 0040bad8
    POP ESI                             ; 0040bad9
    POP EBX                             ; 0040bada
    RET                                 ; 0040badb

