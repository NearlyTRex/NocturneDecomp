; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00594330(undefined4 param_1)
;
;
; Called Functions:
;   FUN_004eab00
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00594330
        ;   Label: FUN_00594330
    PUSH EDX                            ; 00594334
    CALL FUN_004eab00                   ; 00594335
        ;   XREF to: 004eab00 (UNCONDITIONAL_CALL)  ; undefined FUN_004eab00()
    ADD ESP,0x4                         ; 0059433a
    RET                                 ; 0059433d

