; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00598fe0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_0054eae0
;   FUN_00598780
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00598fe0
        ;   Label: FUN_00598fe0
    MOV EDX,dword ptr [ESP + 0x8]       ; 00598fe1
    PUSH EDX                            ; 00598fe5
    CALL FUN_00598780                   ; 00598fe6
        ;   XREF to: 00598780 (UNCONDITIONAL_CALL)  ; undefined FUN_00598780()
    ADD ESP,0x4                         ; 00598feb
    PUSH 0x5d98bf                       ; 00598fee
    MOV EBX,EAX                         ; 00598ff3
    ADD EAX,0x158                       ; 00598ff5
    PUSH EAX                            ; 00598ffa
    MOV dword ptr [EAX + -0x4],0x5e7b54 ; 00598ffb
    CALL FUN_0054eae0                   ; 00599002
        ;   XREF to: 0054eae0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054eae0()
    MOV dword ptr [EBX + 0x2538],0x41f00000 ; 00599007
    ADD ESP,0x8                         ; 00599011
    MOV dword ptr [EBX + 0xce5c],0x41200000 ; 00599014
    MOV EAX,EBX                         ; 0059901e
    MOV dword ptr [EBX + 0xce60],0x41200000 ; 00599020
    POP EBX                             ; 0059902a
    RET                                 ; 0059902b

