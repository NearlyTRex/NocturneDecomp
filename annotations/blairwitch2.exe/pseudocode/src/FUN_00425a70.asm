; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00425a70(int param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_005430e0
;   FUN_00547810
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00425a70
        ;   Label: FUN_00425a70
    MOV EAX,dword ptr [ESP + 0x4]       ; 00425a74
    PUSH EDX                            ; 00425a78
    ADD EAX,0x2b4                       ; 00425a79
    PUSH EAX                            ; 00425a7e
    CALL FUN_00547810                   ; 00425a7f
        ;   XREF to: 00547810 (UNCONDITIONAL_CALL)  ; undefined FUN_00547810()
    ADD ESP,0x4                         ; 00425a84
    PUSH EAX                            ; 00425a87
    CALL FUN_005430e0                   ; 00425a88
        ;   XREF to: 005430e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005430e0()
    ADD ESP,0x8                         ; 00425a8d
    MOV EAX,dword ptr [EAX + 0x5c]      ; 00425a90
    RET                                 ; 00425a93

