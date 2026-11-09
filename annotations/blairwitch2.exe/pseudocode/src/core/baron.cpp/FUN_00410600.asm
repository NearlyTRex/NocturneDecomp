; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_baron_cpp_FUN_00410600(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_summonEvent_005cb577
;   TerminatedCString s_goAwayEvent_005cb583
;   TerminatedCString s_summoned_005cb58f
;   int g_CBaronClassVersion = 0x2
;
; Called Functions:
;   core_actor.cpp_archiveInteger_FUN_0040b960
;   core_actor.cpp_archiveString_FUN_0040b730
;   core_hero.cpp_FUN_004ce590
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00410600
        ;   Label: core_baron.cpp_FUN_00410600
    MOV EBX,dword ptr [ESP + 0x8]       ; 00410601
    PUSH EBX                            ; 00410605
    CALL core_hero.cpp_FUN_004ce590     ; 00410606
        ;   XREF to: 004ce590 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004ce590()
    MOV EDX,dword ptr [0x0060980c]      ; 0041060b | g_CBaronClassVersion
    ADD ESP,0x4                         ; 00410611
    CMP EDX,0x2                         ; 00410614
    JGE 0x0041061b                      ; 00410617
        ;   XREF to: 0041061b (CONDITIONAL_JUMP)  ; LAB_0041061b
    POP EBX                             ; 00410619
    RET                                 ; 0041061a
    PUSH 0x5cb577                       ; 0041061b | = "summonEvent"
        ;   Label: LAB_0041061b
    LEA EAX,[EBX + 0x25640]             ; 00410620
    PUSH EAX                            ; 00410626
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 00410627
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0041062c
    PUSH 0x5cb583                       ; 0041062f | = "goAwayEvent"
    LEA EAX,[EBX + 0x256a4]             ; 00410634
    PUSH EAX                            ; 0041063a
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 0041063b
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00410640
    PUSH 0x5cb58f                       ; 00410643 | = "summoned"
    ADD EBX,0x25738                     ; 00410648
    PUSH EBX                            ; 0041064e
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 0041064f
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00410654
    POP EBX                             ; 00410657
    RET                                 ; 00410658

