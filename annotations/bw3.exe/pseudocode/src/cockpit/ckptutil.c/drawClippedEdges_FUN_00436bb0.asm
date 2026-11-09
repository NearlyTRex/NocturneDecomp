; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_drawClippedEdges_FUN_00436bb0(short *param_1,int param_2,int param_3,int param_4)
;
;
; Referenced Globals:
;   undefined4 DAT_01c6b5a8
;   undefined4 DAT_01c6b5ac
;   undefined4 DAT_01c6b5b0
;   undefined4 DAT_01c6b5b4
;   undefined4 DAT_01c6b5c0
;
; Called Functions:
;   engine_2d.c_drawLine_FUN_004011a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00436bb0
        ;   Label: cockpit_ckptutil.c_drawClippedEdges_FUN_00436bb0
    PUSH ESI                            ; 00436bb1
    PUSH EDI                            ; 00436bb2
    PUSH EBP                            ; 00436bb3
    SUB ESP,0x4                         ; 00436bb4
    MOV EDX,0xfb                        ; 00436bb7
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00436bbc
    XOR EDI,EDI                         ; 00436bc0
    MOV dword ptr [0x01c6b5c0],EDX      ; 00436bc2 | DAT_01c6b5c0
    TEST ECX,ECX                        ; 00436bc8
    JLE 0x00436c8d                      ; 00436bca
        ;   XREF to: 00436c8d (CONDITIONAL_JUMP)  ; LAB_00436c8d
    MOV EBX,dword ptr [ESP + 0x18]      ; 00436bd0
    MOV AX,word ptr [EBX]               ; 00436bd4
        ;   Label: LAB_00436bd4
    MOV EBP,dword ptr [ESP + 0x20]      ; 00436bd7
    MOVSX ECX,AX                        ; 00436bdb
    MOV EAX,[0x01c6b5a8]                ; 00436bde | DAT_01c6b5a8
    ADD ECX,EBP                         ; 00436be3
    CMP ECX,EAX                         ; 00436be5
    JGE 0x00436beb                      ; 00436be7
        ;   XREF to: 00436beb (CONDITIONAL_JUMP)  ; LAB_00436beb
    MOV ECX,EAX                         ; 00436be9
    MOV EDX,dword ptr [0x01c6b5b0]      ; 00436beb | DAT_01c6b5b0
        ;   Label: LAB_00436beb
    CMP ECX,EDX                         ; 00436bf1
    JL 0x00436bf7                       ; 00436bf3
        ;   XREF to: 00436bf7 (CONDITIONAL_JUMP)  ; LAB_00436bf7
    MOV ECX,EDX                         ; 00436bf5
    MOV AX,word ptr [EBX + 0x2]         ; 00436bf7
        ;   Label: LAB_00436bf7
    MOV ESI,dword ptr [ESP + 0x24]      ; 00436bfb
    MOVSX EDX,AX                        ; 00436bff
    MOV EBP,dword ptr [0x01c6b5ac]      ; 00436c02 | DAT_01c6b5ac
    ADD EDX,ESI                         ; 00436c08
    CMP EDX,EBP                         ; 00436c0a
    JGE 0x00436c10                      ; 00436c0c
        ;   XREF to: 00436c10 (CONDITIONAL_JUMP)  ; LAB_00436c10
    MOV EDX,EBP                         ; 00436c0e
    MOV EAX,[0x01c6b5b4]                ; 00436c10 | DAT_01c6b5b4
        ;   Label: LAB_00436c10
    CMP EDX,EAX                         ; 00436c15
    JL 0x00436c1b                       ; 00436c17
        ;   XREF to: 00436c1b (CONDITIONAL_JUMP)  ; LAB_00436c1b
    MOV EDX,EAX                         ; 00436c19
    MOV AX,word ptr [EBX + 0x4]         ; 00436c1b
        ;   Label: LAB_00436c1b
    MOV EBP,dword ptr [ESP + 0x20]      ; 00436c1f
    MOVSX ESI,AX                        ; 00436c23
    MOV EAX,[0x01c6b5a8]                ; 00436c26 | DAT_01c6b5a8
    ADD ESI,EBP                         ; 00436c2b
    CMP ESI,EAX                         ; 00436c2d
    JGE 0x00436c33                      ; 00436c2f
        ;   XREF to: 00436c33 (CONDITIONAL_JUMP)  ; LAB_00436c33
    MOV ESI,EAX                         ; 00436c31
    MOV EBP,dword ptr [0x01c6b5b0]      ; 00436c33 | DAT_01c6b5b0
        ;   Label: LAB_00436c33
    CMP ESI,EBP                         ; 00436c39
    JL 0x00436c3f                       ; 00436c3b
        ;   XREF to: 00436c3f (CONDITIONAL_JUMP)  ; LAB_00436c3f
    MOV ESI,EBP                         ; 00436c3d
    MOV AX,word ptr [EBX + 0x6]         ; 00436c3f
        ;   Label: LAB_00436c3f
    ADD EAX,EAX                         ; 00436c43
    SAR AX,0x1                          ; 00436c45
    MOV word ptr [ESP],AX               ; 00436c48
    MOV EAX,dword ptr [ESP + -0x2]      ; 00436c4c
    MOV EBP,dword ptr [ESP + 0x24]      ; 00436c50
    SAR EAX,0x10                        ; 00436c54
    ADD EAX,EBP                         ; 00436c57
    MOV EBP,dword ptr [0x01c6b5ac]      ; 00436c59 | DAT_01c6b5ac
    CMP EAX,EBP                         ; 00436c5f
    JGE 0x00436c65                      ; 00436c61
        ;   XREF to: 00436c65 (CONDITIONAL_JUMP)  ; LAB_00436c65
    MOV EAX,EBP                         ; 00436c63
    MOV EBP,dword ptr [0x01c6b5b4]      ; 00436c65 | DAT_01c6b5b4
        ;   Label: LAB_00436c65
    CMP EAX,EBP                         ; 00436c6b
    JL 0x00436c71                       ; 00436c6d
        ;   XREF to: 00436c71 (CONDITIONAL_JUMP)  ; LAB_00436c71
    MOV EAX,EBP                         ; 00436c6f
    PUSH EAX                            ; 00436c71
        ;   Label: LAB_00436c71
    PUSH ESI                            ; 00436c72
    PUSH EDX                            ; 00436c73
    PUSH ECX                            ; 00436c74
    CALL engine_2d.c_drawLine_FUN_004011a0 ; 00436c75
        ;   XREF to: 004011a0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004011a0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 00436c7a
    INC EDI                             ; 00436c7d
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00436c7e
    ADD EBX,0x8                         ; 00436c82
    CMP EDI,ESI                         ; 00436c85
    JL 0x00436bd4                       ; 00436c87
        ;   XREF to: 00436bd4 (CONDITIONAL_JUMP)  ; LAB_00436bd4
    ADD ESP,0x4                         ; 00436c8d
        ;   Label: LAB_00436c8d
    POP EBP                             ; 00436c90
    POP EDI                             ; 00436c91
    POP ESI                             ; 00436c92
    POP EBX                             ; 00436c93
    RET                                 ; 00436c94

