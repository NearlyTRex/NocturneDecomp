; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004219f0(int param_1,int param_2,undefined2 *param_3)
;
;
; XREF[1]:
;   FUN_00423790 at 004238a9
;
; Called Functions:
;   FUN_00421ad0
;   FUN_00563cc0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004219f0
        ;   Label: FUN_004219f0
    PUSH EDI                            ; 004219f1
    PUSH EBP                            ; 004219f2
    MOV EDI,dword ptr [ESP + 0x10]      ; 004219f3
    MOV EBP,dword ptr [ESP + 0x14]      ; 004219f7
    PUSH 0x6d60                         ; 004219fb
    PUSH 0x0                            ; 00421a00
    LEA EAX,[EDI + 0x129a0]             ; 00421a02
    PUSH EAX                            ; 00421a08
    MOV dword ptr [EDI + 0x1299c],0x0   ; 00421a09
    XOR ESI,ESI                         ; 00421a13
    CALL FUN_00563cc0                   ; 00421a15
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00563cc0()
    ADD ESP,0xc                         ; 00421a1a
    TEST EBP,EBP                        ; 00421a1d
    JLE 0x00421ac3                      ; 00421a1f
        ;   XREF to: 00421ac3 (CONDITIONAL_JUMP)  ; LAB_00421ac3
    PUSH EBX                            ; 00421a25
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00421a26
    XOR EAX,EAX                         ; 00421a2a
        ;   Label: LAB_00421a2a
    PUSH ESI                            ; 00421a2c
    MOV AX,word ptr [EBX + 0x2]         ; 00421a2d
    PUSH EAX                            ; 00421a31
    XOR EAX,EAX                         ; 00421a32
    MOV AX,word ptr [EBX]               ; 00421a34
    PUSH EAX                            ; 00421a37
    PUSH EDI                            ; 00421a38
    CALL FUN_00421ad0                   ; 00421a39
        ;   XREF to: 00421ad0 (UNCONDITIONAL_CALL)  ; undefined FUN_00421ad0()
    ADD ESP,0x10                        ; 00421a3e
    XOR EAX,EAX                         ; 00421a41
    PUSH ESI                            ; 00421a43
    MOV AX,word ptr [EBX + 0x4]         ; 00421a44
    PUSH EAX                            ; 00421a48
    XOR EAX,EAX                         ; 00421a49
    MOV AX,word ptr [EBX + 0x2]         ; 00421a4b
    PUSH EAX                            ; 00421a4f
    PUSH EDI                            ; 00421a50
    CALL FUN_00421ad0                   ; 00421a51
        ;   XREF to: 00421ad0 (UNCONDITIONAL_CALL)  ; undefined FUN_00421ad0()
    ADD ESP,0x10                        ; 00421a56
    XOR EAX,EAX                         ; 00421a59
    PUSH ESI                            ; 00421a5b
    MOV AX,word ptr [EBX]               ; 00421a5c
    PUSH EAX                            ; 00421a5f
    XOR EAX,EAX                         ; 00421a60
    MOV AX,word ptr [EBX + 0x4]         ; 00421a62
    PUSH EAX                            ; 00421a66
    PUSH EDI                            ; 00421a67
    CALL FUN_00421ad0                   ; 00421a68
        ;   XREF to: 00421ad0 (UNCONDITIONAL_CALL)  ; undefined FUN_00421ad0()
    ADD ESP,0x10                        ; 00421a6d
    XOR EAX,EAX                         ; 00421a70
    PUSH ESI                            ; 00421a72
    MOV AX,word ptr [EBX]               ; 00421a73
    PUSH EAX                            ; 00421a76
    XOR EAX,EAX                         ; 00421a77
    MOV AX,word ptr [EBX + 0x2]         ; 00421a79
    PUSH EAX                            ; 00421a7d
    PUSH EDI                            ; 00421a7e
    CALL FUN_00421ad0                   ; 00421a7f
        ;   XREF to: 00421ad0 (UNCONDITIONAL_CALL)  ; undefined FUN_00421ad0()
    ADD ESP,0x10                        ; 00421a84
    XOR EAX,EAX                         ; 00421a87
    PUSH ESI                            ; 00421a89
    MOV AX,word ptr [EBX + 0x2]         ; 00421a8a
    PUSH EAX                            ; 00421a8e
    XOR EAX,EAX                         ; 00421a8f
    MOV AX,word ptr [EBX + 0x4]         ; 00421a91
    PUSH EAX                            ; 00421a95
    PUSH EDI                            ; 00421a96
    CALL FUN_00421ad0                   ; 00421a97
        ;   XREF to: 00421ad0 (UNCONDITIONAL_CALL)  ; undefined FUN_00421ad0()
    ADD ESP,0x10                        ; 00421a9c
    XOR EAX,EAX                         ; 00421a9f
    PUSH ESI                            ; 00421aa1
    MOV AX,word ptr [EBX + 0x4]         ; 00421aa2
    PUSH EAX                            ; 00421aa6
    XOR EAX,EAX                         ; 00421aa7
    MOV AX,word ptr [EBX]               ; 00421aa9
    PUSH EAX                            ; 00421aac
    PUSH EDI                            ; 00421aad
    ADD EBX,0x12                        ; 00421aae
    INC ESI                             ; 00421ab1
    CALL FUN_00421ad0                   ; 00421ab2
        ;   XREF to: 00421ad0 (UNCONDITIONAL_CALL)  ; undefined FUN_00421ad0()
    ADD ESP,0x10                        ; 00421ab7
    CMP ESI,EBP                         ; 00421aba
    JL 0x00421a2a                       ; 00421abc
        ;   XREF to: 00421a2a (CONDITIONAL_JUMP)  ; LAB_00421a2a
    POP EBX                             ; 00421ac2
    POP EBP                             ; 00421ac3
        ;   Label: LAB_00421ac3
    POP EDI                             ; 00421ac4
    POP ESI                             ; 00421ac5
    RET                                 ; 00421ac6

