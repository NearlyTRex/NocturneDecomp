; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_baron_cpp_CBaron_archive_FUN_00413a70(CBaron *this_ptr)
;
; Parameters:
; CBaron *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_summonEvent_00615069
;   TerminatedCString s_goAwayEvent_00615075
;   TerminatedCString s_summoned_00615081
;   int g_CBaronClassVersion = 0x2
;
; Called Functions:
;   core_actor.cpp_archiveInteger_FUN_0040b7f0
;   core_actor.cpp_archiveString_FUN_0040b5c0
;   core_hero.cpp_CHero_archive_FUN_004f2610
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00413a70
        ;   Label: core_baron.cpp_CBaron_archive_FUN_00413a70
    MOV EBX,dword ptr [ESP + 0x8]       ; 00413a71
    PUSH EBX                            ; 00413a75
    CALL core_hero.cpp_CHero_archive_FUN_004f2610 ; 00413a76
        ;   XREF to: 004f2610 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_archive_FUN_004f2610(CHero * this_ptr)
    MOV EDX,dword ptr [0x0066e45c]      ; 00413a7b | g_CBaronClassVersion
    ADD ESP,0x4                         ; 00413a81
    CMP EDX,0x2                         ; 00413a84
    JGE 0x00413a8b                      ; 00413a87
        ;   XREF to: 00413a8b (CONDITIONAL_JUMP)  ; LAB_00413a8b
    POP EBX                             ; 00413a89
    RET                                 ; 00413a8a
    PUSH 0x615069                       ; 00413a8b | = "summonEvent"
        ;   Label: LAB_00413a8b
    LEA EAX,[EBX + 0x1fbd4]             ; 00413a90
    PUSH EAX                            ; 00413a96
    CALL core_actor.cpp_archiveString_FUN_0040b5c0 ; 00413a97
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b5c0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00413a9c
    PUSH 0x615075                       ; 00413a9f | = "goAwayEvent"
    LEA EAX,[EBX + 0x1fc38]             ; 00413aa4
    PUSH EAX                            ; 00413aaa
    CALL core_actor.cpp_archiveString_FUN_0040b5c0 ; 00413aab
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b5c0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00413ab0
    PUSH 0x615081                       ; 00413ab3 | = "summoned"
    ADD EBX,0x1fccc                     ; 00413ab8
    PUSH EBX                            ; 00413abe
    CALL core_actor.cpp_archiveInteger_FUN_0040b7f0 ; 00413abf
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00413ac4
    POP EBX                             ; 00413ac7
    RET                                 ; 00413ac8

