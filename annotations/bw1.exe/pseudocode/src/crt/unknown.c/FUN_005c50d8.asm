; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c50d8(undefined4 param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c7280 at 005c7321
;
; Called Functions:
;   crt_unknown.c_FUN_005c8bc0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005c50d8
        ;   Label: crt_unknown.c_FUN_005c50d8
    PUSH EDX                            ; 005c50dc
    CALL crt_unknown.c_FUN_005c8bc0     ; 005c50dd
        ;   XREF to: 005c8bc0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c8bc0()
    ADD ESP,0x4                         ; 005c50e2
    RET                                 ; 005c50e5

