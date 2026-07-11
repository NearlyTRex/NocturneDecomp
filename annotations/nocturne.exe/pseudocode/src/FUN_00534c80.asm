; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00534c80(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_0059c080
;
; Called Functions:
;   FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x59c080                       ; 00534c80 | DAT_0059c080
        ;   Label: FUN_00534c80
    PUSH 0x28                           ; 00534c85
    MOV EDX,dword ptr [ESP + 0xc]       ; 00534c87
    PUSH EDX                            ; 00534c8b
    CALL FUN_0056494f                   ; 00534c8c
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; undefined FUN_0056494f()
    ADD ESP,0xc                         ; 00534c91
    RET                                 ; 00534c94

