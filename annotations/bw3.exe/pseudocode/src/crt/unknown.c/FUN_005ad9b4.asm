; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005ad9b4(undefined4 param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005adc24 at 005adc32
;
; Called Functions:
;   crt_unknown.c_FUN_005aba00
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005ad9b4
        ;   Label: crt_unknown.c_FUN_005ad9b4
    PUSH EDX                            ; 005ad9b8
    CALL crt_unknown.c_FUN_005aba00     ; 005ad9b9
        ;   XREF to: 005aba00 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aba00()
    ADD ESP,0x4                         ; 005ad9be
    RET                                 ; 005ad9c1

