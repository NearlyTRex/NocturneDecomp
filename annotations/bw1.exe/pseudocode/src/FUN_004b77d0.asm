; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b77d0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00532150
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 004b77d0
        ;   Label: FUN_004b77d0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004b77d2
    PUSH EDX                            ; 004b77d6
    CALL FUN_00532150                   ; 004b77d7
        ;   XREF to: 00532150 (UNCONDITIONAL_CALL)  ; undefined FUN_00532150()
    ADD ESP,0x8                         ; 004b77dc
    RET                                 ; 004b77df

