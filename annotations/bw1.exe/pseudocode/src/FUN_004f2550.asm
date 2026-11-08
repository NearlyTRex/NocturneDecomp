; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f2550(undefined4 param_1)
;
;
; Called Functions:
;   FUN_004eab00
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004f2550
        ;   Label: FUN_004f2550
    PUSH EDX                            ; 004f2554
    CALL FUN_004eab00                   ; 004f2555
        ;   XREF to: 004eab00 (UNCONDITIONAL_CALL)  ; undefined FUN_004eab00()
    ADD ESP,0x4                         ; 004f255a
    RET                                 ; 004f255d

