; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_0060fa90(char *param_1)
;
;
; XREF[2]:
;   crt_env.c_putenv_internal_FUN_0060ee80 at 0060efd9
;   crt_unknown.c_FUN_00610900 at 00610918
;
; Called Functions:
;   crt_string.c_mbstring_termination_check_FUN_0060b630
;   crt_string.c_mbtowc_next_FUN_00605a70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060fa90
        ;   Label: crt_unknown.c_FUN_0060fa90
    PUSH ESI                            ; 0060fa91
    MOV EBX,dword ptr [ESP + 0xc]       ; 0060fa92
    XOR ESI,ESI                         ; 0060fa96
    PUSH EBX                            ; 0060fa98
        ;   Label: LAB_0060fa98
    CALL crt_string.c_mbstring_termination_check_FUN_0060b630 ; 0060fa99
        ;   XREF to: 0060b630 (UNCONDITIONAL_CALL)  ; int crt_string.c_mbstring_termination_check_FUN_0060b630(char * str)
    ADD ESP,0x4                         ; 0060fa9e
    TEST EAX,EAX                        ; 0060faa1
    JNZ 0x0060fab3                      ; 0060faa3
        ;   XREF to: 0060fab3 (CONDITIONAL_JUMP)  ; LAB_0060fab3
    PUSH EBX                            ; 0060faa5
    CALL crt_string.c_mbtowc_next_FUN_00605a70 ; 0060faa6
        ;   XREF to: 00605a70 (UNCONDITIONAL_CALL)  ; char * crt_string.c_mbtowc_next_FUN_00605a70(char * str)
    INC ESI                             ; 0060faab
    ADD ESP,0x4                         ; 0060faac
    MOV EBX,EAX                         ; 0060faaf
    JMP 0x0060fa98                      ; 0060fab1
        ;   XREF to: 0060fa98 (UNCONDITIONAL_JUMP)  ; LAB_0060fa98
    MOV EAX,ESI                         ; 0060fab3
        ;   Label: LAB_0060fab3
    POP ESI                             ; 0060fab5
    POP EBX                             ; 0060fab6
    RET                                 ; 0060fab7

