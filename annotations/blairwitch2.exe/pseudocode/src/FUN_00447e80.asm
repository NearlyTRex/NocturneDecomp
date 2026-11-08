; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00447e80(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005b854f
;
; *****************************************************************************

section .text

    PUSH 0x5f3c00                       ; 00447e80
        ;   Label: FUN_00447e80
    PUSH 0x4                            ; 00447e85
    MOV EDX,dword ptr [ESP + 0xc]       ; 00447e87
    PUSH EDX                            ; 00447e8b
    CALL FUN_005b854f                   ; 00447e8c
        ;   XREF to: 005b854f (UNCONDITIONAL_CALL)  ; undefined FUN_005b854f()
    ADD ESP,0xc                         ; 00447e91
    RET                                 ; 00447e94

