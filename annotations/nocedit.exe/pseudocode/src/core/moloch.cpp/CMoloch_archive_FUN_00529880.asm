; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_moloch_cpp_CMoloch_archive_FUN_00529880(CMoloch *this_ptr)
;
; Parameters:
; CMoloch *        Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_humanToDemonCond_00639e6d
;   TerminatedCString s_demonToHumanCond_00639e7e
;   TerminatedCString s_inHumanForm_00639e8f
;   TerminatedCString s_morphing_00639e9b
;   TerminatedCString s_morphTimer_00639ea4
;
; Called Functions:
;   core_actor.cpp_archiveFloat_FUN_0040b770
;   core_actor.cpp_archiveInteger_FUN_0040b7f0
;   core_actor.cpp_archiveString_FUN_0040b5c0
;   core_hero.cpp_CHero_archive_FUN_004f2610
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00529880
        ;   Label: core_moloch.cpp_CMoloch_archive_FUN_00529880
    MOV EBX,dword ptr [ESP + 0x8]       ; 00529881
    PUSH EBX                            ; 00529885
    CALL core_hero.cpp_CHero_archive_FUN_004f2610 ; 00529886
        ;   XREF to: 004f2610 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_archive_FUN_004f2610(CHero * this_ptr)
    ADD ESP,0x4                         ; 0052988b
    PUSH 0x639e6d                       ; 0052988e | = "humanToDemonCond"
    LEA EAX,[EBX + 0x21e94]             ; 00529893
    PUSH EAX                            ; 00529899
    CALL core_actor.cpp_archiveString_FUN_0040b5c0 ; 0052989a
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b5c0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0052989f
    PUSH 0x639e7e                       ; 005298a2 | = "demonToHumanCond"
    LEA EAX,[EBX + 0x21ef8]             ; 005298a7
    PUSH EAX                            ; 005298ad
    CALL core_actor.cpp_archiveString_FUN_0040b5c0 ; 005298ae
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b5c0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 005298b3
    PUSH 0x639e8f                       ; 005298b6 | = "inHumanForm"
    LEA EAX,[EBX + 0x21e88]             ; 005298bb
    PUSH EAX                            ; 005298c1
    CALL core_actor.cpp_archiveInteger_FUN_0040b7f0 ; 005298c2
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 005298c7
    PUSH 0x639e9b                       ; 005298ca | = "morphing"
    LEA EAX,[EBX + 0x21e8c]             ; 005298cf
    PUSH EAX                            ; 005298d5
    CALL core_actor.cpp_archiveInteger_FUN_0040b7f0 ; 005298d6
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 005298db
    PUSH 0x639ea4                       ; 005298de | = "morphTimer"
    ADD EBX,0x21e90                     ; 005298e3
    PUSH EBX                            ; 005298e9
    CALL core_actor.cpp_archiveFloat_FUN_0040b770 ; 005298ea
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 005298ef
    POP EBX                             ; 005298f2
    RET                                 ; 005298f3

