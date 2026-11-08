; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004c5e40(undefined4 param_1)
;
;
; Called Functions:
;   FUN_0042e220
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004c5e40
        ;   Label: FUN_004c5e40
    PUSH EDX                            ; 004c5e44
    CALL FUN_0042e220                   ; 004c5e45
        ;   XREF to: 0042e220 (UNCONDITIONAL_CALL)  ; undefined FUN_0042e220()
    ADD ESP,0x4                         ; 004c5e4a
    RET                                 ; 004c5e4d

