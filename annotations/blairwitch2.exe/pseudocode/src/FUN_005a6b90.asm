; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a6b90(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00589b50
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a6b90
        ;   Label: FUN_005a6b90
    PUSH EDX                            ; 005a6b94
    CALL FUN_00589b50                   ; 005a6b95
        ;   XREF to: 00589b50 (UNCONDITIONAL_CALL)  ; undefined FUN_00589b50()
    ADD ESP,0x4                         ; 005a6b9a
    RET                                 ; 005a6b9d

