; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0044d440(undefined4 param_1)
;
;
; Called Functions:
;   FUN_0044d4c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044d440
        ;   Label: FUN_0044d440
    MOV EBX,dword ptr [ESP + 0x8]       ; 0044d441
    PUSH EBX                            ; 0044d445
    CALL FUN_0044d4c0                   ; 0044d446
        ;   XREF to: 0044d4c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0044d4c0()
    ADD ESP,0x4                         ; 0044d44b
    MOV EAX,EBX                         ; 0044d44e
    POP EBX                             ; 0044d450
    RET                                 ; 0044d451

