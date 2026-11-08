; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0058a210(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_00409ec0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 0058a210
        ;   Label: FUN_0058a210
    PUSH EDX                            ; 0058a214
    MOV ECX,dword ptr [ESP + 0x8]       ; 0058a215
    PUSH ECX                            ; 0058a219
    CALL FUN_00409ec0                   ; 0058a21a
        ;   XREF to: 00409ec0 (UNCONDITIONAL_CALL)  ; undefined FUN_00409ec0()
    ADD ESP,0x8                         ; 0058a21f
    RET                                 ; 0058a222

