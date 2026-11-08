; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ed3f0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00531bf0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004ed3f0
        ;   Label: FUN_004ed3f0
    PUSH EDX                            ; 004ed3f4
    CALL FUN_00531bf0                   ; 004ed3f5
        ;   XREF to: 00531bf0 (UNCONDITIONAL_CALL)  ; undefined FUN_00531bf0()
    ADD ESP,0x4                         ; 004ed3fa
    RET                                 ; 004ed3fd

