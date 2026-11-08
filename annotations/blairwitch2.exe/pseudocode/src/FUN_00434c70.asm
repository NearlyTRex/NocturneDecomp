; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00434c70(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00433e80
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00434c70
        ;   Label: FUN_00434c70
    PUSH EDX                            ; 00434c74
    CALL FUN_00433e80                   ; 00434c75
        ;   XREF to: 00433e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00433e80()
    ADD ESP,0x4                         ; 00434c7a
    MOV dword ptr [EAX],0x5f42e4        ; 00434c7d
    RET                                 ; 00434c83

