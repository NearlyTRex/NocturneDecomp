; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00443c90(undefined4 param_1)
;
;
; Called Functions:
;   FUN_0042e220
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00443c90
        ;   Label: FUN_00443c90
    PUSH EDX                            ; 00443c94
    CALL FUN_0042e220                   ; 00443c95
        ;   XREF to: 0042e220 (UNCONDITIONAL_CALL)  ; undefined FUN_0042e220()
    ADD ESP,0x4                         ; 00443c9a
    RET                                 ; 00443c9d

