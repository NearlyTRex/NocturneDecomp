; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b7520(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00532150
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 004b7520
        ;   Label: FUN_004b7520
    MOV EDX,dword ptr [ESP + 0x8]       ; 004b7522
    PUSH EDX                            ; 004b7526
    CALL FUN_00532150                   ; 004b7527
        ;   XREF to: 00532150 (UNCONDITIONAL_CALL)  ; undefined FUN_00532150()
    ADD ESP,0x8                         ; 004b752c
    RET                                 ; 004b752f

