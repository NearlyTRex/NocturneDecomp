; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a9120(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005a4930
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a9120
        ;   Label: FUN_005a9120
    PUSH EDX                            ; 005a9124
    CALL FUN_005a4930                   ; 005a9125
        ;   XREF to: 005a4930 (UNCONDITIONAL_CALL)  ; undefined FUN_005a4930()
    ADD ESP,0x4                         ; 005a912a
    RET                                 ; 005a912d

