; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_0043f8c0(undefined4 *param_1)
;
;
; XREF[4]:
;   FUN_0042ac20 at 0042ac48
;   FUN_005991d0 at 005991f7
;   FUN_00599f60 at 00599f87
;   FUN_0059aaa0 at 0059aac7
;
; Called Functions:
;   FUN_005a28f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043f8c0
        ;   Label: FUN_0043f8c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0043f8c1
    PUSH 0x190                          ; 0043f8c5
    PUSH 0x0                            ; 0043f8ca
    LEA EAX,[EBX + 0x4]                 ; 0043f8cc
    PUSH EAX                            ; 0043f8cf
    MOV dword ptr [EBX],0x0             ; 0043f8d0
    CALL FUN_005a28f0                   ; 0043f8d6
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28f0()
    ADD ESP,0xc                         ; 0043f8db
    PUSH 0x28                           ; 0043f8de
    PUSH 0x0                            ; 0043f8e0
    LEA EAX,[EBX + 0x194]               ; 0043f8e2
    PUSH EAX                            ; 0043f8e8
    CALL FUN_005a28f0                   ; 0043f8e9
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28f0()
    ADD ESP,0xc                         ; 0043f8ee
    MOV EAX,EBX                         ; 0043f8f1
    POP EBX                             ; 0043f8f3
    RET                                 ; 0043f8f4

