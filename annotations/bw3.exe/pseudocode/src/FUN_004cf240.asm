; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004cf240(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005a3de6
;
; *****************************************************************************

section .text

    PUSH 0x5e0e80                       ; 004cf240
        ;   Label: FUN_004cf240
    PUSH 0x100                          ; 004cf245
    MOV EDX,dword ptr [ESP + 0xc]       ; 004cf24a
    PUSH EDX                            ; 004cf24e
    CALL FUN_005a3de6                   ; 004cf24f
        ;   XREF to: 005a3de6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3de6()
    ADD ESP,0xc                         ; 004cf254
    RET                                 ; 004cf257

