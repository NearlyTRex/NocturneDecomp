; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00429080(undefined4 param_1)
;
;
; Called Functions:
;   FUN_0040c7e0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00429080
        ;   Label: FUN_00429080
    PUSH EDX                            ; 00429084
    CALL FUN_0040c7e0                   ; 00429085
        ;   XREF to: 0040c7e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c7e0()
    ADD ESP,0x4                         ; 0042908a
    RET                                 ; 0042908d

