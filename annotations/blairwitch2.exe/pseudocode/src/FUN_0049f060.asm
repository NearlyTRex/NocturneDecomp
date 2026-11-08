; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0049f060(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005b854f
;
; *****************************************************************************

section .text

    PUSH 0x5f6770                       ; 0049f060
        ;   Label: FUN_0049f060
    PUSH 0x40                           ; 0049f065
    MOV EDX,dword ptr [ESP + 0xc]       ; 0049f067
    PUSH EDX                            ; 0049f06b
    CALL FUN_005b854f                   ; 0049f06c
        ;   XREF to: 005b854f (UNCONDITIONAL_CALL)  ; undefined FUN_005b854f()
    ADD ESP,0xc                         ; 0049f071
    RET                                 ; 0049f074

