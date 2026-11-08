; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004a4690(int param_1)
;
;
; Called Functions:
;   FUN_005a30d7
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004a4690
        ;   Label: FUN_004a4690
    PUSH 0x5db0f0                       ; 004a4694
    PUSH 0x3                            ; 004a4699
    ADD EAX,0x1c                        ; 004a469b
    PUSH EAX                            ; 004a469e
    CALL FUN_005a30d7                   ; 004a469f
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30d7()
    ADD ESP,0xc                         ; 004a46a4
    SUB EAX,0x1c                        ; 004a46a7
    RET                                 ; 004a46aa

