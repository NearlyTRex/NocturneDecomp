; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0049f0c0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005b854f
;
; *****************************************************************************

section .text

    PUSH 0x5f66b0                       ; 0049f0c0
        ;   Label: FUN_0049f0c0
    PUSH 0x40                           ; 0049f0c5
    MOV EDX,dword ptr [ESP + 0xc]       ; 0049f0c7
    PUSH EDX                            ; 0049f0cb
    CALL FUN_005b854f                   ; 0049f0cc
        ;   XREF to: 005b854f (UNCONDITIONAL_CALL)  ; undefined FUN_005b854f()
    ADD ESP,0xc                         ; 0049f0d1
    RET                                 ; 0049f0d4

