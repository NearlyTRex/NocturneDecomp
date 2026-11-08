; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004a7a40(int param_1)
;
;
; Called Functions:
;   FUN_005b7f5f
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004a7a40
        ;   Label: FUN_004a7a40
    PUSH 0x5f22b0                       ; 004a7a44
    PUSH 0x4                            ; 004a7a49
    ADD EAX,0x4                         ; 004a7a4b
    PUSH EAX                            ; 004a7a4e
    CALL FUN_005b7f5f                   ; 004a7a4f
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; undefined FUN_005b7f5f()
    ADD ESP,0xc                         ; 004a7a54
    SUB EAX,0x4                         ; 004a7a57
    RET                                 ; 004a7a5a

