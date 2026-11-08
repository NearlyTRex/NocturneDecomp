; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00434b70(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00433e80
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00434b70
        ;   Label: FUN_00434b70
    PUSH EDX                            ; 00434b74
    CALL FUN_00433e80                   ; 00434b75
        ;   XREF to: 00433e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00433e80()
    ADD ESP,0x4                         ; 00434b7a
    MOV dword ptr [EAX],0x5f42b4        ; 00434b7d
    RET                                 ; 00434b83

