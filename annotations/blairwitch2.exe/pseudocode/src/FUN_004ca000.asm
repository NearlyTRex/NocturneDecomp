; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004ca000(int param_1)
;
;
; Called Functions:
;   FUN_005b7f5f
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004ca000
        ;   Label: FUN_004ca000
    PUSH 0x5f22b0                       ; 004ca004
    PUSH 0x4                            ; 004ca009
    ADD EAX,0x8                         ; 004ca00b
    PUSH EAX                            ; 004ca00e
    CALL FUN_005b7f5f                   ; 004ca00f
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; undefined FUN_005b7f5f()
    ADD ESP,0xc                         ; 004ca014
    SUB EAX,0x8                         ; 004ca017
    RET                                 ; 004ca01a

