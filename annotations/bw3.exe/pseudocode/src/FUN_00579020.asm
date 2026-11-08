; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00579020(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00577d90
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00579020
        ;   Label: FUN_00579020
    PUSH EDX                            ; 00579024
    CALL FUN_00577d90                   ; 00579025
        ;   XREF to: 00577d90 (UNCONDITIONAL_CALL)  ; undefined FUN_00577d90()
    MOV dword ptr [EAX + 0x154],0x5e5fc4 ; 0057902a
    ADD ESP,0x4                         ; 00579034
    MOV dword ptr [EAX + 0x298],0x1     ; 00579037
    RET                                 ; 00579041

