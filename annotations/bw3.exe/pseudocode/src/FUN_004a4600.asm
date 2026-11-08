; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004a4600(int param_1)
;
;
; Called Functions:
;   FUN_005a30d7
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004a4600
        ;   Label: FUN_004a4600
    PUSH 0x5db0f0                       ; 004a4604
    PUSH 0x10                           ; 004a4609
    ADD EAX,0x30                        ; 004a460b
    PUSH EAX                            ; 004a460e
    CALL FUN_005a30d7                   ; 004a460f
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30d7()
    ADD ESP,0xc                         ; 004a4614
    PUSH 0x5db0f0                       ; 004a4617
    PUSH 0x10                           ; 004a461c
    ADD EAX,0xc0                        ; 004a461e
    PUSH EAX                            ; 004a4623
    CALL FUN_005a30d7                   ; 004a4624
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30d7()
    ADD ESP,0xc                         ; 004a4629
    SUB EAX,0xf0                        ; 004a462c
    RET                                 ; 004a4631

