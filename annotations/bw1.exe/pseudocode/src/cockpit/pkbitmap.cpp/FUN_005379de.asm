; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_pkbitmap_cpp_FUN_005379de(CPackedBitmap *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)
;
;
; Called Functions:
;   cockpit_pkbitmap.cpp_CPackedBitmap_renderWithGlobalClipping_FUN_005378e0
;
; *****************************************************************************

section .text

    MOV EAX,EAX                         ; 005379de
        ;   Label: cockpit_pkbitmap.cpp_FUN_005379de
    PUSH EBX                            ; 005379e0
    PUSH ESI                            ; 005379e1
    PUSH EDI                            ; 005379e2
    PUSH EBP                            ; 005379e3
    SUB ESP,0x8                         ; 005379e4
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005379e7
    MOV EDX,dword ptr [ESP + 0x20]      ; 005379eb
    MOV ECX,dword ptr [ESP + 0x24]      ; 005379ef
    MOV ESI,dword ptr [ESP + 0x28]      ; 005379f3
    CMP dword ptr [EAX + 0x20],0x0      ; 005379f7
    JZ 0x00537a8d                       ; 005379fb
        ;   XREF to: 00537a8d (CONDITIONAL_JUMP)  ; LAB_00537a8d
    CMP dword ptr [EAX + 0x14],0x0      ; 00537a01
    JZ 0x00537a8d                       ; 00537a05
        ;   XREF to: 00537a8d (CONDITIONAL_JUMP)  ; LAB_00537a8d
    CMP EDX,dword ptr [ESP + 0x30]      ; 00537a0b
    JG 0x00537a8d                       ; 00537a0f
        ;   XREF to: 00537a8d (CONDITIONAL_JUMP)  ; LAB_00537a8d
    CMP ECX,dword ptr [ESP + 0x34]      ; 00537a15
    JG 0x00537a8d                       ; 00537a19
        ;   XREF to: 00537a8d (CONDITIONAL_JUMP)  ; LAB_00537a8d
    MOV EDI,dword ptr [EAX + 0x18]      ; 00537a1f
    MOV EBX,dword ptr [EAX + 0x1c]      ; 00537a22
    ADD EDI,EDX                         ; 00537a25
    ADD EBX,ECX                         ; 00537a27
    DEC EDI                             ; 00537a29
    DEC EBX                             ; 00537a2a
    CMP EDI,ESI                         ; 00537a2b
    JL 0x00537a8d                       ; 00537a2d
        ;   XREF to: 00537a8d (CONDITIONAL_JUMP)  ; LAB_00537a8d
    CMP EBX,dword ptr [ESP + 0x2c]      ; 00537a2f
    JL 0x00537a8d                       ; 00537a33
        ;   XREF to: 00537a8d (CONDITIONAL_JUMP)  ; LAB_00537a8d
    XOR EBP,EBP                         ; 00537a35
    MOV dword ptr [ESP],EBP             ; 00537a37
    CMP EDX,ESI                         ; 00537a3a
    JL 0x00537a95                       ; 00537a3c
        ;   XREF to: 00537a95 (CONDITIONAL_JUMP)  ; LAB_00537a95
    XOR ESI,ESI                         ; 00537a3e
        ;   Label: LAB_00537a3e
    MOV EBP,dword ptr [ESP + 0x2c]      ; 00537a40
    MOV dword ptr [ESP + 0x4],ESI       ; 00537a44
    CMP ECX,EBP                         ; 00537a48
    JGE 0x00537a56                      ; 00537a4a
        ;   XREF to: 00537a56 (CONDITIONAL_JUMP)  ; LAB_00537a56
    MOV ESI,EBP                         ; 00537a4c
    SUB ESI,ECX                         ; 00537a4e
    MOV ECX,EBP                         ; 00537a50
    MOV dword ptr [ESP + 0x4],ESI       ; 00537a52
    MOV ESI,dword ptr [EAX + 0x18]      ; 00537a56
        ;   Label: LAB_00537a56
    MOV EBP,dword ptr [ESP + 0x30]      ; 00537a59
    DEC ESI                             ; 00537a5d
    CMP EDI,EBP                         ; 00537a5e
    JLE 0x00537a66                      ; 00537a60
        ;   XREF to: 00537a66 (CONDITIONAL_JUMP)  ; LAB_00537a66
    SUB EDI,EBP                         ; 00537a62
    SUB ESI,EDI                         ; 00537a64
    MOV EDI,dword ptr [EAX + 0x1c]      ; 00537a66
        ;   Label: LAB_00537a66
    MOV EBP,dword ptr [ESP + 0x34]      ; 00537a69
    DEC EDI                             ; 00537a6d
    CMP EBX,EBP                         ; 00537a6e
    JLE 0x00537a76                      ; 00537a70
        ;   XREF to: 00537a76 (CONDITIONAL_JUMP)  ; LAB_00537a76
    SUB EBX,EBP                         ; 00537a72
    SUB EDI,EBX                         ; 00537a74
    PUSH EDI                            ; 00537a76
        ;   Label: LAB_00537a76
    PUSH ESI                            ; 00537a77
    MOV EBX,dword ptr [ESP + 0xc]       ; 00537a78
    PUSH EBX                            ; 00537a7c
    MOV ESI,dword ptr [ESP + 0xc]       ; 00537a7d
    PUSH ESI                            ; 00537a81
    PUSH ECX                            ; 00537a82
    PUSH EDX                            ; 00537a83
    PUSH EAX                            ; 00537a84
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_renderWithGlobalClipping_FUN_005378e0 ; 00537a85
        ;   XREF to: 005378e0 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_renderWithGlobalClipping_FUN_005378e0(CPackedBitmap * this_ptr, int dest_x, int dest_y, int src_left, ...)
    ADD ESP,0x1c                        ; 00537a8a
    ADD ESP,0x8                         ; 00537a8d
        ;   Label: LAB_00537a8d
    POP EBP                             ; 00537a90
    POP EDI                             ; 00537a91
    POP ESI                             ; 00537a92
    POP EBX                             ; 00537a93
    RET                                 ; 00537a94
    MOV EBP,ESI                         ; 00537a95
        ;   Label: LAB_00537a95
    SUB EBP,EDX                         ; 00537a97
    MOV EDX,ESI                         ; 00537a99
    MOV dword ptr [ESP],EBP             ; 00537a9b
    JMP 0x00537a3e                      ; 00537a9e
        ;   XREF to: 00537a3e (UNCONDITIONAL_JUMP)  ; LAB_00537a3e

