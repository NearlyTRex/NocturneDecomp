; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00463710(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00462710
;   FUN_0054eae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00463710
        ;   Label: FUN_00463710
    MOV EDX,dword ptr [ESP + 0x8]       ; 00463711
    PUSH EDX                            ; 00463715
    CALL FUN_00462710                   ; 00463716
        ;   XREF to: 00462710 (UNCONDITIONAL_CALL)  ; undefined FUN_00462710()
    ADD ESP,0x4                         ; 0046371b
    PUSH 0x5bbca5                       ; 0046371e
    MOV EBX,EAX                         ; 00463723
    ADD EAX,0x158                       ; 00463725
    PUSH EAX                            ; 0046372a
    MOV dword ptr [EAX + -0x4],0x5de874 ; 0046372b
    CALL FUN_0054eae0                   ; 00463732
        ;   XREF to: 0054eae0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054eae0()
    MOV dword ptr [EBX + 0x2538],0x41f00000 ; 00463737
    MOV dword ptr [EBX + 0xce5c],0x41200000 ; 00463741
    MOV dword ptr [EBX + 0xce60],0x41200000 ; 0046374b
    MOV dword ptr [EBX + 0xfc],0x1      ; 00463755
    ADD ESP,0x8                         ; 0046375f
    MOV dword ptr [EBX + 0xf8],0x0      ; 00463762
    MOV EAX,EBX                         ; 0046376c
    MOV dword ptr [EBX + 0xd060],0x2    ; 0046376e
    POP EBX                             ; 00463778
    RET                                 ; 00463779

