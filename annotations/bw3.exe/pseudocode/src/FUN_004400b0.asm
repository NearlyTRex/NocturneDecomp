; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004400b0(int param_1)
;
;
; Called Functions:
;   FUN_005a30d7
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004400b0
        ;   Label: FUN_004400b0
    PUSH 0x5db0f0                       ; 004400b4
    PUSH 0x3                            ; 004400b9
    ADD EAX,0xec                        ; 004400bb
    PUSH EAX                            ; 004400c0
    CALL FUN_005a30d7                   ; 004400c1
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30d7()
    ADD ESP,0xc                         ; 004400c6
    SUB EAX,0xec                        ; 004400c9
    RET                                 ; 004400ce

