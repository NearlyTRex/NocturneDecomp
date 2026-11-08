; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004a4730(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00509e10
;   FUN_005a30d7
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004a4730
        ;   Label: FUN_004a4730
    PUSH EAX                            ; 004a4734
    CALL FUN_00509e10                   ; 004a4735
        ;   XREF to: 00509e10 (UNCONDITIONAL_CALL)  ; undefined FUN_00509e10()
    ADD ESP,0x4                         ; 004a473a
    PUSH 0x5db0f0                       ; 004a473d
    PUSH 0x3                            ; 004a4742
    ADD EAX,0xb0                        ; 004a4744
    PUSH EAX                            ; 004a4749
    CALL FUN_005a30d7                   ; 004a474a
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30d7()
    ADD ESP,0xc                         ; 004a474f
    MOV dword ptr [EAX + -0x74],0x5df974 ; 004a4752
    SUB EAX,0xb0                        ; 004a4759
    RET                                 ; 004a475e

