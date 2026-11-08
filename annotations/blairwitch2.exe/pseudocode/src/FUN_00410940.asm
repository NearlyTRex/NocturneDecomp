; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00410940(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00548e80
;   FUN_00589b50
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00410940
        ;   Label: FUN_00410940
    PUSH EDX                            ; 00410944
    CALL FUN_00589b50                   ; 00410945
        ;   XREF to: 00589b50 (UNCONDITIONAL_CALL)  ; undefined FUN_00589b50()
    ADD ESP,0x4                         ; 0041094a
    PUSH 0x5cb5a7                       ; 0041094d
    CALL FUN_00548e80                   ; 00410952
        ;   XREF to: 00548e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00548e80()
    ADD ESP,0x4                         ; 00410957
    RET                                 ; 0041095a

