; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_moloch_cpp_CMoloch_archive_FUN_00502200(CMoloch *this_ptr)
;
; Parameters:
; CMoloch *        Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_humanToDemonCond_005df269
;   TerminatedCString s_demonToHumanCond_005df27a
;   TerminatedCString s_inHumanForm_005df28b
;   TerminatedCString s_morphing_005df297
;   TerminatedCString s_morphTimer_005df2a0
;
; Called Functions:
;   core_actor.cpp_archiveFloat_FUN_0040b8e0
;   core_actor.cpp_archiveInteger_FUN_0040b960
;   core_actor.cpp_archiveString_FUN_0040b730
;   core_hero.cpp_CHero_archive_FUN_004ce590
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00502200
        ;   Label: core_moloch.cpp_CMoloch_archive_FUN_00502200
    MOV EBX,dword ptr [ESP + 0x8]       ; 00502201
    PUSH EBX                            ; 00502205
    CALL core_hero.cpp_CHero_archive_FUN_004ce590 ; 00502206
        ;   XREF to: 004ce590 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_archive_FUN_004ce590(CHero * this_ptr)
    ADD ESP,0x4                         ; 0050220b
    PUSH 0x5df269                       ; 0050220e | = "humanToDemonCond"
    LEA EAX,[EBX + 0x27900]             ; 00502213
    PUSH EAX                            ; 00502219
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 0050221a
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0050221f
    PUSH 0x5df27a                       ; 00502222 | = "demonToHumanCond"
    LEA EAX,[EBX + 0x27964]             ; 00502227
    PUSH EAX                            ; 0050222d
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 0050222e
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00502233
    PUSH 0x5df28b                       ; 00502236 | = "inHumanForm"
    LEA EAX,[EBX + 0x278f4]             ; 0050223b
    PUSH EAX                            ; 00502241
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 00502242
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00502247
    PUSH 0x5df297                       ; 0050224a | = "morphing"
    LEA EAX,[EBX + 0x278f8]             ; 0050224f
    PUSH EAX                            ; 00502255
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 00502256
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0050225b
    PUSH 0x5df2a0                       ; 0050225e | = "morphTimer"
    ADD EBX,0x278fc                     ; 00502263
    PUSH EBX                            ; 00502269
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 0050226a
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b8e0(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 0050226f
    POP EBX                             ; 00502272
    RET                                 ; 00502273

