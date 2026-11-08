; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b7550(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00532150
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 004b7550
        ;   Label: FUN_004b7550
    MOV EDX,dword ptr [ESP + 0x8]       ; 004b7552
    PUSH EDX                            ; 004b7556
    CALL FUN_00532150                   ; 004b7557
        ;   XREF to: 00532150 (UNCONDITIONAL_CALL)  ; undefined FUN_00532150()
    ADD ESP,0x8                         ; 004b755c
    RET                                 ; 004b755f

