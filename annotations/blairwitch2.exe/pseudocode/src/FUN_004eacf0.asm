; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004eacf0(undefined4 param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_005a6ed0 at 005a6fca
;
; Called Functions:
;   FUN_00589c80
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004eacf0
        ;   Label: FUN_004eacf0
    PUSH dword ptr [ESP + 0x8]          ; 004eacf4
    PUSH EDX                            ; 004eacf8
    CALL FUN_00589c80                   ; 004eacf9
        ;   XREF to: 00589c80 (UNCONDITIONAL_CALL)  ; undefined FUN_00589c80()
    ADD ESP,0x8                         ; 004eacfe
    RET                                 ; 004ead01

