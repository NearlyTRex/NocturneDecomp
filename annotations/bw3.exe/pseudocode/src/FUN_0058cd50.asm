; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0058cd50(undefined4 param_1)
;
;
; Called Functions:
;   FUN_0054eae0
;   FUN_005888d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0058cd50
        ;   Label: FUN_0058cd50
    MOV EDX,dword ptr [ESP + 0x8]       ; 0058cd51
    PUSH EDX                            ; 0058cd55
    CALL FUN_005888d0                   ; 0058cd56
        ;   XREF to: 005888d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005888d0()
    ADD ESP,0x4                         ; 0058cd5b
    PUSH 0x5d8992                       ; 0058cd5e
    MOV EBX,EAX                         ; 0058cd63
    ADD EAX,0x158                       ; 0058cd65
    PUSH EAX                            ; 0058cd6a
    MOV dword ptr [EAX + -0x4],0x5e6a34 ; 0058cd6b
    CALL FUN_0054eae0                   ; 0058cd72
        ;   XREF to: 0054eae0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054eae0()
    MOV dword ptr [EBX + 0xd140],0x2    ; 0058cd77
    MOV dword ptr [EBX + 0x2538],0x41c80000 ; 0058cd81
    ADD ESP,0x8                         ; 0058cd8b
    MOV dword ptr [EBX + 0xce5c],0x41200000 ; 0058cd8e
    MOV EAX,EBX                         ; 0058cd98
    MOV dword ptr [EBX + 0xce60],0x41200000 ; 0058cd9a
    POP EBX                             ; 0058cda4
    RET                                 ; 0058cda5

