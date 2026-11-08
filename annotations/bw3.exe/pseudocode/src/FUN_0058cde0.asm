; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0058cde0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_0054eae0
;   FUN_005888d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0058cde0
        ;   Label: FUN_0058cde0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0058cde1
    PUSH EDX                            ; 0058cde5
    CALL FUN_005888d0                   ; 0058cde6
        ;   XREF to: 005888d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005888d0()
    ADD ESP,0x4                         ; 0058cdeb
    PUSH 0x5d89a4                       ; 0058cdee
    MOV EBX,EAX                         ; 0058cdf3
    ADD EAX,0x158                       ; 0058cdf5
    PUSH EAX                            ; 0058cdfa
    MOV dword ptr [EAX + -0x4],0x5e6b84 ; 0058cdfb
    CALL FUN_0054eae0                   ; 0058ce02
        ;   XREF to: 0054eae0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054eae0()
    MOV dword ptr [EBX + 0xd140],0x3    ; 0058ce07
    MOV dword ptr [EBX + 0x2538],0x41f00000 ; 0058ce11
    ADD ESP,0x8                         ; 0058ce1b
    MOV dword ptr [EBX + 0xce5c],0x41700000 ; 0058ce1e
    MOV EAX,EBX                         ; 0058ce28
    MOV dword ptr [EBX + 0xce60],0x41200000 ; 0058ce2a
    POP EBX                             ; 0058ce34
    RET                                 ; 0058ce35

