; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_00574000(char *param_1)
;
;
; XREF[2]:
;   crt_env.c_putenv_internal_FUN_00573930 at 005739cd
;   crt_unknown.c_FUN_00574680 at 00574698
;
; Called Functions:
;   crt_string.c_mbstring_termination_check_FUN_00570ca0
;   crt_string.c_mbtowc_next_FUN_0056da80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00574000
        ;   Label: crt_unknown.c_FUN_00574000
    PUSH ESI                            ; 00574001
    MOV EBX,dword ptr [ESP + 0xc]       ; 00574002
    XOR ESI,ESI                         ; 00574006
    PUSH EBX                            ; 00574008
        ;   Label: LAB_00574008
    CALL crt_string.c_mbstring_termination_check_FUN_00570ca0 ; 00574009
        ;   XREF to: 00570ca0 (UNCONDITIONAL_CALL)  ; int crt_string.c_mbstring_termination_check_FUN_00570ca0(char * str)
    ADD ESP,0x4                         ; 0057400e
    TEST EAX,EAX                        ; 00574011
    JNZ 0x00574023                      ; 00574013
        ;   XREF to: 00574023 (CONDITIONAL_JUMP)  ; LAB_00574023
    PUSH EBX                            ; 00574015
    CALL crt_string.c_mbtowc_next_FUN_0056da80 ; 00574016
        ;   XREF to: 0056da80 (UNCONDITIONAL_CALL)  ; char * crt_string.c_mbtowc_next_FUN_0056da80(char * str)
    INC ESI                             ; 0057401b
    ADD ESP,0x4                         ; 0057401c
    MOV EBX,EAX                         ; 0057401f
    JMP 0x00574008                      ; 00574021
        ;   XREF to: 00574008 (UNCONDITIONAL_JUMP)  ; LAB_00574008
    MOV EAX,ESI                         ; 00574023
        ;   Label: LAB_00574023
    POP ESI                             ; 00574025
    POP EBX                             ; 00574026
    RET                                 ; 00574027

