; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b76c0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00532150
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 004b76c0
        ;   Label: FUN_004b76c0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004b76c2
    PUSH EDX                            ; 004b76c6
    CALL FUN_00532150                   ; 004b76c7
        ;   XREF to: 00532150 (UNCONDITIONAL_CALL)  ; undefined FUN_00532150()
    ADD ESP,0x8                         ; 004b76cc
    RET                                 ; 004b76cf

