; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004d6550(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005a08a0
;
; Called Functions:
;   FUN_005644a7
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004d6550
        ;   Label: FUN_004d6550
    PUSH 0x5a08a0                       ; 004d6554 | DAT_005a08a0
    PUSH 0x5                            ; 004d6559
    ADD EAX,0x98                        ; 004d655b
    PUSH EAX                            ; 004d6560
    CALL FUN_005644a7                   ; 004d6561
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; undefined FUN_005644a7()
    ADD ESP,0xc                         ; 004d6566
    SUB EAX,0x98                        ; 004d6569
    RET                                 ; 004d656e

