; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_005b1970(undefined4 param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005b12a0 at 005b133d
;
; Called Functions:
;   crt_unknown.c_FUN_005aca00
;   crt_unknown.c_FUN_005af2a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b1970
        ;   Label: crt_unknown.c_FUN_005b1970
    PUSH ESI                            ; 005b1971
    MOV EBX,dword ptr [ESP + 0xc]       ; 005b1972
    XOR ESI,ESI                         ; 005b1976
    PUSH EBX                            ; 005b1978
        ;   Label: LAB_005b1978
    CALL crt_unknown.c_FUN_005af2a0     ; 005b1979
        ;   XREF to: 005af2a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005af2a0()
    ADD ESP,0x4                         ; 005b197e
    TEST EAX,EAX                        ; 005b1981
    JNZ 0x005b1993                      ; 005b1983
        ;   XREF to: 005b1993 (CONDITIONAL_JUMP)  ; LAB_005b1993
    PUSH EBX                            ; 005b1985
    CALL crt_unknown.c_FUN_005aca00     ; 005b1986
        ;   XREF to: 005aca00 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aca00()
    INC ESI                             ; 005b198b
    ADD ESP,0x4                         ; 005b198c
    MOV EBX,EAX                         ; 005b198f
    JMP 0x005b1978                      ; 005b1991
        ;   XREF to: 005b1978 (UNCONDITIONAL_JUMP)  ; LAB_005b1978
    MOV EAX,ESI                         ; 005b1993
        ;   Label: LAB_005b1993
    POP ESI                             ; 005b1995
    POP EBX                             ; 005b1996
    RET                                 ; 005b1997

