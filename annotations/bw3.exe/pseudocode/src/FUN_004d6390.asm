; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004d6390(undefined4 param_1)
;
;
; Called Functions:
;   FUN_004d5430
;   FUN_0054eae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d6390
        ;   Label: FUN_004d6390
    MOV EDX,dword ptr [ESP + 0x8]       ; 004d6391
    PUSH EDX                            ; 004d6395
    CALL FUN_004d5430                   ; 004d6396
        ;   XREF to: 004d5430 (UNCONDITIONAL_CALL)  ; undefined FUN_004d5430()
    ADD ESP,0x4                         ; 004d639b
    PUSH 0x5c5436                       ; 004d639e
    MOV EBX,EAX                         ; 004d63a3
    ADD EAX,0x158                       ; 004d63a5
    PUSH EAX                            ; 004d63aa
    MOV dword ptr [EAX + -0x4],0x5e1bb4 ; 004d63ab
    CALL FUN_0054eae0                   ; 004d63b2
        ;   XREF to: 0054eae0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054eae0()
    MOV dword ptr [EBX + 0x2538],0x42480000 ; 004d63b7
    ADD ESP,0x8                         ; 004d63c1
    MOV dword ptr [EBX + 0xce5c],0x41c80000 ; 004d63c4
    MOV EAX,EBX                         ; 004d63ce
    MOV dword ptr [EBX + 0xce60],0x41700000 ; 004d63d0
    POP EBX                             ; 004d63da
    RET                                 ; 004d63db

