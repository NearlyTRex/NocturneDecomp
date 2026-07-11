; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00461f60(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[1]:
;   FUN_00443250 at 0044392e
;
; Called Functions:
;   FUN_00545a40
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0xc]       ; 00461f60
        ;   Label: FUN_00461f60
    PUSH EDX                            ; 00461f64
    MOV ECX,dword ptr [ESP + 0xc]       ; 00461f65
    PUSH ECX                            ; 00461f69
    CALL FUN_00545a40                   ; 00461f6a
        ;   XREF to: 00545a40 (UNCONDITIONAL_CALL)  ; undefined FUN_00545a40()
    ADD ESP,0x8                         ; 00461f6f
    RET                                 ; 00461f72

