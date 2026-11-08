; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040d2c0(undefined4 param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_00409df0 at 00409e09
;
; Called Functions:
;   FUN_0040d260
;
; *****************************************************************************

section .text

    PUSH 0xc                            ; 0040d2c0
        ;   Label: FUN_0040d2c0
    MOV EDX,dword ptr [ESP + 0xc]       ; 0040d2c2
    PUSH EDX                            ; 0040d2c6
    MOV ECX,dword ptr [ESP + 0xc]       ; 0040d2c7
    PUSH ECX                            ; 0040d2cb
    CALL FUN_0040d260                   ; 0040d2cc
        ;   XREF to: 0040d260 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d260()
    ADD ESP,0xc                         ; 0040d2d1
    RET                                 ; 0040d2d4

