; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00528650(undefined4 param_1)
;
;
; Called Functions:
;   FUN_0057bb60
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00528650
        ;   Label: FUN_00528650
    PUSH EDX                            ; 00528654
    CALL FUN_0057bb60                   ; 00528655
        ;   XREF to: 0057bb60 (UNCONDITIONAL_CALL)  ; undefined FUN_0057bb60()
    ADD ESP,0x4                         ; 0052865a
    RET                                 ; 0052865d

