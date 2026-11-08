; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0059c670(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00587dc0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0059c670
        ;   Label: FUN_0059c670
    PUSH EDX                            ; 0059c674
    CALL FUN_00587dc0                   ; 0059c675
        ;   XREF to: 00587dc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00587dc0()
    ADD ESP,0x4                         ; 0059c67a
    RET                                 ; 0059c67d

