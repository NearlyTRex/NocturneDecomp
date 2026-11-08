; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b7770(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00532150
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 004b7770
        ;   Label: FUN_004b7770
    MOV EDX,dword ptr [ESP + 0x8]       ; 004b7772
    PUSH EDX                            ; 004b7776
    CALL FUN_00532150                   ; 004b7777
        ;   XREF to: 00532150 (UNCONDITIONAL_CALL)  ; undefined FUN_00532150()
    ADD ESP,0x8                         ; 004b777c
    RET                                 ; 004b777f

