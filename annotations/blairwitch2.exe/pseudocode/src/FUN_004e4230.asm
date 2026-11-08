; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e4230(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00408a80
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004e4230
        ;   Label: FUN_004e4230
    PUSH EDX                            ; 004e4234
    CALL FUN_00408a80                   ; 004e4235
        ;   XREF to: 00408a80 (UNCONDITIONAL_CALL)  ; undefined FUN_00408a80()
    ADD ESP,0x4                         ; 004e423a
    RET                                 ; 004e423d

