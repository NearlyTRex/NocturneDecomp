; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00545f30(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00543500
;   FUN_0054eae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00545f30
        ;   Label: FUN_00545f30
    MOV EDX,dword ptr [ESP + 0x8]       ; 00545f31
    PUSH EDX                            ; 00545f35
    CALL FUN_00543500                   ; 00545f36
        ;   XREF to: 00543500 (UNCONDITIONAL_CALL)  ; undefined FUN_00543500()
    ADD ESP,0x4                         ; 00545f3b
    PUSH 0x5d13f6                       ; 00545f3e
    MOV EBX,EAX                         ; 00545f43
    ADD EAX,0x158                       ; 00545f45
    PUSH EAX                            ; 00545f4a
    MOV dword ptr [EAX + -0x4],0x5e4014 ; 00545f4b
    CALL FUN_0054eae0                   ; 00545f52
        ;   XREF to: 0054eae0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054eae0()
    MOV dword ptr [EBX + 0x2538],0x42200000 ; 00545f57
    MOV dword ptr [EBX + 0xce5c],0x41c80000 ; 00545f61
    ADD ESP,0x8                         ; 00545f6b
    MOV dword ptr [EBX + 0xce60],0x41a00000 ; 00545f6e
    MOV EAX,EBX                         ; 00545f78
    MOV dword ptr [EBX + 0xd0a8],0x2    ; 00545f7a
    POP EBX                             ; 00545f84
    RET                                 ; 00545f85

