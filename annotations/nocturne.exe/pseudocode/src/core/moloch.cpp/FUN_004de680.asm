; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_moloch_cpp_FUN_004de680(CHero *param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_humanToDemonCond_0058a83a
;   TerminatedCString s_demonToHumanCond_0058a84b
;   TerminatedCString s_inHumanForm_0058a85c
;   TerminatedCString s_morphing_0058a868
;   TerminatedCString s_morphTimer_0058a871
;
; Called Functions:
;   core_actor.cpp_archiveFloat_FUN_0040c880
;   core_actor.cpp_archiveInteger_FUN_0040c900
;   core_actor.cpp_archiveString_FUN_0040c6d0
;   core_hero.cpp_FUN_004b49a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004de680
        ;   Label: core_moloch.cpp_FUN_004de680
    MOV EBX,dword ptr [ESP + 0x8]       ; 004de681
    PUSH EBX                            ; 004de685
    CALL core_hero.cpp_FUN_004b49a0     ; 004de686
        ;   XREF to: 004b49a0 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_FUN_004b49a0(CHero * this_ptr)
    ADD ESP,0x4                         ; 004de68b
    PUSH 0x58a83a                       ; 004de68e | = "humanToDemonCond"
    LEA EAX,[EBX + 0x21cfc]             ; 004de693
    PUSH EAX                            ; 004de699
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 004de69a
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040c6d0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004de69f
    PUSH 0x58a84b                       ; 004de6a2 | = "demonToHumanCond"
    LEA EAX,[EBX + 0x21d60]             ; 004de6a7
    PUSH EAX                            ; 004de6ad
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 004de6ae
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040c6d0(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004de6b3
    PUSH 0x58a85c                       ; 004de6b6 | = "inHumanForm"
    LEA EAX,[EBX + 0x21cf0]             ; 004de6bb
    PUSH EAX                            ; 004de6c1
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 004de6c2
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040c900(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004de6c7
    PUSH 0x58a868                       ; 004de6ca | = "morphing"
    LEA EAX,[EBX + 0x21cf4]             ; 004de6cf
    PUSH EAX                            ; 004de6d5
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 004de6d6
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040c900(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004de6db
    PUSH 0x58a871                       ; 004de6de | = "morphTimer"
    ADD EBX,0x21cf8                     ; 004de6e3
    PUSH EBX                            ; 004de6e9
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 004de6ea
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040c880(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 004de6ef
    POP EBX                             ; 004de6f2
    RET                                 ; 004de6f3

