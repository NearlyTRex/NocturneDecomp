; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00541b80(undefined4 param_1)
;
;
; Called Functions:
;   FUN_004eab00
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00541b80
        ;   Label: FUN_00541b80
    PUSH EDX                            ; 00541b84
    CALL FUN_004eab00                   ; 00541b85
        ;   XREF to: 004eab00 (UNCONDITIONAL_CALL)  ; undefined FUN_004eab00()
    ADD ESP,0x4                         ; 00541b8a
    RET                                 ; 00541b8d

