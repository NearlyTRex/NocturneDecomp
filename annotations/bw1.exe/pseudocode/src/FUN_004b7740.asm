; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b7740(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00532150
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 004b7740
        ;   Label: FUN_004b7740
    MOV EDX,dword ptr [ESP + 0x8]       ; 004b7742
    PUSH EDX                            ; 004b7746
    CALL FUN_00532150                   ; 004b7747
        ;   XREF to: 00532150 (UNCONDITIONAL_CALL)  ; undefined FUN_00532150()
    ADD ESP,0x8                         ; 004b774c
    RET                                 ; 004b774f

