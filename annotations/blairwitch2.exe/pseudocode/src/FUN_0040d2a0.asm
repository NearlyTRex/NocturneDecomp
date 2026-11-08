; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040d2a0(undefined4 param_1)
;
;
; XREF[2]:
;   FUN_00409df0 at 00409e23
;   FUN_00429c70 at 00429c98
;
; Called Functions:
;   FUN_0040d260
;
; *****************************************************************************

section .text

    PUSH 0x4                            ; 0040d2a0
        ;   Label: FUN_0040d2a0
    LEA EAX,[ESP + 0xc]                 ; 0040d2a2
    PUSH EAX                            ; 0040d2a6
    MOV EDX,dword ptr [ESP + 0xc]       ; 0040d2a7
    PUSH EDX                            ; 0040d2ab
    CALL FUN_0040d260                   ; 0040d2ac
        ;   XREF to: 0040d260 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d260()
    ADD ESP,0xc                         ; 0040d2b1
    RET                                 ; 0040d2b4

