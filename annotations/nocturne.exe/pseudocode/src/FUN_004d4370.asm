; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004d4370(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_0059df00
;
; Called Functions:
;   FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x59df00                       ; 004d4370 | DAT_0059df00
        ;   Label: FUN_004d4370
    PUSH 0x8                            ; 004d4375
    MOV EDX,dword ptr [ESP + 0xc]       ; 004d4377
    PUSH EDX                            ; 004d437b
    CALL FUN_0056494f                   ; 004d437c
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; undefined FUN_0056494f()
    ADD ESP,0xc                         ; 004d4381
    RET                                 ; 004d4384

