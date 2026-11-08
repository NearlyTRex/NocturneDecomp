; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b77a0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00532150
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 004b77a0
        ;   Label: FUN_004b77a0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004b77a2
    PUSH EDX                            ; 004b77a6
    CALL FUN_00532150                   ; 004b77a7
        ;   XREF to: 00532150 (UNCONDITIONAL_CALL)  ; undefined FUN_00532150()
    ADD ESP,0x8                         ; 004b77ac
    RET                                 ; 004b77af

