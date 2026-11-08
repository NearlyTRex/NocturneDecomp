; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00463680(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00462710
;   FUN_0054eae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00463680
        ;   Label: FUN_00463680
    MOV EDX,dword ptr [ESP + 0x8]       ; 00463681
    PUSH EDX                            ; 00463685
    CALL FUN_00462710                   ; 00463686
        ;   XREF to: 00462710 (UNCONDITIONAL_CALL)  ; undefined FUN_00462710()
    ADD ESP,0x4                         ; 0046368b
    PUSH 0x5bbc98                       ; 0046368e
    MOV EBX,EAX                         ; 00463693
    ADD EAX,0x158                       ; 00463695
    PUSH EAX                            ; 0046369a
    MOV dword ptr [EAX + -0x4],0x5de724 ; 0046369b
    CALL FUN_0054eae0                   ; 004636a2
        ;   XREF to: 0054eae0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054eae0()
    MOV dword ptr [EBX + 0x2538],0x41a00000 ; 004636a7
    MOV dword ptr [EBX + 0xce5c],0x40a00000 ; 004636b1
    ADD ESP,0x8                         ; 004636bb
    MOV dword ptr [EBX + 0xce60],0x41200000 ; 004636be
    MOV EAX,EBX                         ; 004636c8
    MOV dword ptr [EBX + 0xd060],0x1    ; 004636ca
    POP EBX                             ; 004636d4
    RET                                 ; 004636d5

