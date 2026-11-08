; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e68a0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00532150
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 004e68a0
        ;   Label: FUN_004e68a0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004e68a2
    PUSH EDX                            ; 004e68a6
    CALL FUN_00532150                   ; 004e68a7
        ;   XREF to: 00532150 (UNCONDITIONAL_CALL)  ; undefined FUN_00532150()
    ADD ESP,0x8                         ; 004e68ac
    RET                                 ; 004e68af

