; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004ae760(int param_1)
;
;
; Called Functions:
;   FUN_005a30d7
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004ae760
        ;   Label: FUN_004ae760
    PUSH 0x5db0f0                       ; 004ae764
    PUSH 0x4                            ; 004ae769
    ADD EAX,0x4                         ; 004ae76b
    PUSH EAX                            ; 004ae76e
    CALL FUN_005a30d7                   ; 004ae76f
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30d7()
    ADD ESP,0xc                         ; 004ae774
    SUB EAX,0x4                         ; 004ae777
    RET                                 ; 004ae77a

