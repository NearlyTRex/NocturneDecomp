; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00428750(int param_1,undefined4 param_2)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00428750
        ;   Label: FUN_00428750
    MOV dword ptr [EAX + 0x27ac],0x1    ; 00428754
    MOV EDX,dword ptr [ESP + 0x8]       ; 0042875e
    MOV dword ptr [EAX + 0x2778],0xbf800000 ; 00428762
    PUSH 0xbf800000                     ; 0042876c
    MOV dword ptr [EAX + 0x2774],EDX    ; 00428771
    PUSH EAX                            ; 00428777
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 00428778
    MOV dword ptr [EAX + 0x277c],0x7149f2ca ; 0042877e
    CALL dword ptr [EDX + 0x140]        ; 00428788
    ADD ESP,0x8                         ; 0042878e
    RET                                 ; 00428791

