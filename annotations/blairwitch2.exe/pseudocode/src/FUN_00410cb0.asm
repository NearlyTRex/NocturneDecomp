; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00410cb0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00408790
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00410cb0
        ;   Label: FUN_00410cb0
    PUSH EDX                            ; 00410cb4
    CALL FUN_00408790                   ; 00410cb5
        ;   XREF to: 00408790 (UNCONDITIONAL_CALL)  ; undefined FUN_00408790()
    MOV dword ptr [EAX + 0x2b0],0x5f2c84 ; 00410cba
    MOV dword ptr [EAX + 0x2bc],0x40a00000 ; 00410cc4
    MOV byte ptr [EAX + 0x2c4],0x0      ; 00410cce
    MOV dword ptr [EAX + 0x2c0],0x1     ; 00410cd5
    ADD ESP,0x4                         ; 00410cdf
    MOV EDX,dword ptr [EAX + 0x2bc]     ; 00410ce2
    MOV dword ptr [EAX + 0x2b8],EDX     ; 00410ce8
    MOV EDX,dword ptr [EAX + 0x2b8]     ; 00410cee
    MOV dword ptr [EAX + 0x2b4],EDX     ; 00410cf4
    RET                                 ; 00410cfa

