; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b7710(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00532150
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 004b7710
        ;   Label: FUN_004b7710
    MOV EDX,dword ptr [ESP + 0x8]       ; 004b7712
    PUSH EDX                            ; 004b7716
    CALL FUN_00532150                   ; 004b7717
        ;   XREF to: 00532150 (UNCONDITIONAL_CALL)  ; undefined FUN_00532150()
    ADD ESP,0x8                         ; 004b771c
    RET                                 ; 004b771f

