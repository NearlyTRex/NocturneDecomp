; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0059dcb0(int param_1,undefined4 param_2)
;
;
; XREF[12]:
;   FUN_005a1180 at 005a126d
;   FUN_005a1f40 at 005a1ffe
;   FUN_005a2130 at 005a21f5
;   FUN_005a2ac0 at 005a2d88
;   FUN_005a3280 at 005a333b
;   FUN_005a4220 at 005a42e5
;   FUN_005a4fe0 at 005a50cd
;   FUN_005a6140 at 005a61c5
;   FUN_005a9580 at 005a966d
;   FUN_005a9770 at 005a985d
;   ... and 2 more
;
; Called Functions:
;   FUN_0059dce0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0059dcb0
        ;   Label: FUN_0059dcb0
    PUSH EDX                            ; 0059dcb4
    CALL FUN_0059dce0                   ; 0059dcb5
        ;   XREF to: 0059dce0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059dce0()
    ADD ESP,0x4                         ; 0059dcba
    TEST EAX,EAX                        ; 0059dcbd
    JZ 0x0059dcc2                       ; 0059dcbf
        ;   XREF to: 0059dcc2 (CONDITIONAL_JUMP)  ; LAB_0059dcc2
    RET                                 ; 0059dcc1
    MOV EDX,dword ptr [ESP + 0x4]       ; 0059dcc2
        ;   Label: LAB_0059dcc2
    MOV EAX,dword ptr [ESP + 0x8]       ; 0059dcc6
    MOV dword ptr [EDX + 0x848],EAX     ; 0059dcca
    RET                                 ; 0059dcd0

