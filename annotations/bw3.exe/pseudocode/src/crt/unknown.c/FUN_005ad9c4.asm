; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005ad9c4(uint param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005adc24 at 005adc37
;
; Called Functions:
;   crt_unknown.c_FUN_005abb64
;   crt_unknown.c_FUN_005ad8bc
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005ad9c4
        ;   Label: crt_unknown.c_FUN_005ad9c4
    AND EAX,0xf                         ; 005ad9c8
    SHL EAX,0x4                         ; 005ad9cb
    ADD EAX,0x2d25a70                   ; 005ad9ce
    PUSH EAX                            ; 005ad9d3
    CALL crt_unknown.c_FUN_005ad8bc     ; 005ad9d4
        ;   XREF to: 005ad8bc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ad8bc()
    ADD ESP,0x4                         ; 005ad9d9
    MOV EDX,dword ptr [ESP + 0x4]       ; 005ad9dc
    PUSH EDX                            ; 005ad9e0
    CALL crt_unknown.c_FUN_005abb64     ; 005ad9e1
        ;   XREF to: 005abb64 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005abb64()
    ADD ESP,0x4                         ; 005ad9e6
    RET                                 ; 005ad9e9

