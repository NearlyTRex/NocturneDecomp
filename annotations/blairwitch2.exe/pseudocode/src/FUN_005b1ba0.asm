; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005b1ba0(int param_1)
;
;
; Called Functions:
;   FUN_005b7f5f
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005b1ba0
        ;   Label: FUN_005b1ba0
    PUSH 0x5f22b0                       ; 005b1ba4
    PUSH 0x3                            ; 005b1ba9
    ADD EAX,0xec                        ; 005b1bab
    PUSH EAX                            ; 005b1bb0
    CALL FUN_005b7f5f                   ; 005b1bb1
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; undefined FUN_005b7f5f()
    ADD ESP,0xc                         ; 005b1bb6
    SUB EAX,0xec                        ; 005b1bb9
    RET                                 ; 005b1bbe

