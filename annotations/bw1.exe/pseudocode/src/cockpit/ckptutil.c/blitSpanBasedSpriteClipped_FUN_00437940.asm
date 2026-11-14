; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_ckptutil_c_blitSpanBasedSpriteClipped_FUN_00437940(void)
;
;
; Referenced Globals:
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_01c4354c
;   undefined4 DAT_01c43550
;   undefined4 DAT_01c4f008
;   undefined4 DAT_01c4f010
;
; Called Functions:
;   cockpit_ckptutil.c_FUN_00437270
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00437940
        ;   Label: cockpit_ckptutil.c_blitSpanBasedSpriteClipped_FUN_00437940
    PUSH ESI                            ; 00437941
    PUSH EDI                            ; 00437942
    PUSH EBP                            ; 00437943
    SUB ESP,0x34                        ; 00437944
    MOV EDI,dword ptr [ESP + 0x54]      ; 00437947
    MOV ESI,dword ptr [ESP + 0x58]      ; 0043794b
    MOV EBX,dword ptr [ESP + 0x58]      ; 0043794f
    MOV ECX,dword ptr [0x01c4f010]      ; 00437953 | DAT_01c4f010
    MOV EAX,[0x01c43550]                ; 00437959 | DAT_01c43550
    MOV EBP,dword ptr [0x01c4354c]      ; 0043795e | DAT_01c4354c
    MOV EDX,dword ptr [0x01c4f008]      ; 00437964 | DAT_01c4f008
    SUB EAX,EBP                         ; 0043796a
    ADD ESI,ECX                         ; 0043796c
    MOV dword ptr [ESP + 0x10],EAX      ; 0043796e
    MOV EAX,dword ptr [ESP + 0x48]      ; 00437972
    ADD EBX,EDX                         ; 00437976
    TEST EAX,EAX                        ; 00437978
    JNZ 0x00437984                      ; 0043797a
        ;   XREF to: 00437984 (CONDITIONAL_JUMP)  ; LAB_00437984
    ADD ESP,0x34                        ; 0043797c
        ;   Label: LAB_0043797c
    POP EBP                             ; 0043797f
    POP EDI                             ; 00437980
    POP ESI                             ; 00437981
    POP EBX                             ; 00437982
    RET                                 ; 00437983
    MOV EAX,dword ptr [ESP + 0x60]      ; 00437984
        ;   Label: LAB_00437984
    IMUL EAX,EDI                        ; 00437988
    MOV EDX,dword ptr [ESP + 0x50]      ; 0043798b
    MOV ECX,dword ptr [ESP + 0x48]      ; 0043798f
    ADD EAX,EDX                         ; 00437993
    ADD ECX,EAX                         ; 00437995
    MOV EBP,dword ptr [ESP + 0x64]      ; 00437997
    MOV dword ptr [ESP + 0x48],ECX      ; 0043799b
    CALL cockpit_ckptutil.c_FUN_00437270 ; 0043799f
        ;   XREF to: 00437270 (UNCONDITIONAL_CALL)  ; undefined cockpit_ckptutil.c_FUN_00437270()
    MOV dword ptr [ESP + 0x30],EAX      ; 004379a4
    MOV EAX,EBP                         ; 004379a8
    SHL EAX,0x5                         ; 004379aa
    ADD EAX,EBP                         ; 004379ad
    SHL EAX,0x2                         ; 004379af
    MOV EDX,dword ptr [ESP + 0x5c]      ; 004379b2
    MOV dword ptr [ESP],EAX             ; 004379b6
    MOV EAX,EDI                         ; 004379b9
    ADD EDX,EDI                         ; 004379bb
    SHL EAX,0x5                         ; 004379bd
    SHL EDX,0x2                         ; 004379c0
    LEA EBP,[EDI + EAX*0x1]             ; 004379c3
    MOV EAX,[0x0061b4a0]                ; 004379c6 | DAT_0061b4a0
    SHL EBP,0x2                         ; 004379cb
    CMP EAX,0x8                         ; 004379ce
    JNZ 0x00437a98                      ; 004379d1
        ;   XREF to: 00437a98 (CONDITIONAL_JUMP)  ; LAB_00437a98
    MOV EAX,dword ptr [EDX + 0x1c4354c] ; 004379d7
    MOV EDX,dword ptr [ESP + 0x50]      ; 004379dd
    ADD EDX,EAX                         ; 004379e1
    MOV ECX,dword ptr [ESP + 0x64]      ; 004379e3
    MOV dword ptr [ESP + 0x2c],EDX      ; 004379e7
    CMP EDI,ECX                         ; 004379eb
    JGE 0x0043797c                      ; 004379ed
        ;   XREF to: 0043797c (CONDITIONAL_JUMP)  ; LAB_0043797c
    MOV EAX,dword ptr [ESP]             ; 004379ef
    MOV dword ptr [ESP + 0x14],EBP      ; 004379f2
    MOV dword ptr [ESP + 0x8],EAX       ; 004379f6
    MOV EAX,dword ptr [ESP + 0x14]      ; 004379fa
        ;   Label: LAB_004379fa
    XOR EBP,EBP                         ; 004379fe
    XOR EDI,EDI                         ; 00437a00
    MOV dword ptr [ESP + 0x24],EAX      ; 00437a02
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00437a06
        ;   Label: LAB_00437a06
    ADD EAX,dword ptr [ESP + 0x24]      ; 00437a0a
    CMP EDI,dword ptr [EAX]             ; 00437a0e
    JGE 0x00437a2c                      ; 00437a10
        ;   XREF to: 00437a2c (CONDITIONAL_JUMP)  ; LAB_00437a2c
    LEA EDX,[EAX + EBP*0x1]             ; 00437a12
    MOV EAX,dword ptr [EDX + 0x4]       ; 00437a15
    MOV EDX,dword ptr [EDX + 0x44]      ; 00437a18
    ADD EDX,EAX                         ; 00437a1b
    DEC EDX                             ; 00437a1d
    CMP EAX,EBX                         ; 00437a1e
    JGE 0x00437a66                      ; 00437a20
        ;   XREF to: 00437a66 (CONDITIONAL_JUMP)  ; LAB_00437a66
    CMP EDX,EBX                         ; 00437a22
    JGE 0x00437a64                      ; 00437a24
        ;   XREF to: 00437a64 (CONDITIONAL_JUMP)  ; LAB_00437a64
    INC EDI                             ; 00437a26
        ;   Label: LAB_00437a26
    ADD EBP,0x4                         ; 00437a27
    JMP 0x00437a06                      ; 00437a2a
        ;   XREF to: 00437a06 (UNCONDITIONAL_JUMP)  ; LAB_00437a06
    MOV EDI,dword ptr [ESP + 0x14]      ; 00437a2c
        ;   Label: LAB_00437a2c
    MOV EAX,dword ptr [ESP + 0x10]      ; 00437a30
    MOV EBP,dword ptr [ESP + 0x2c]      ; 00437a34
    MOV EDX,dword ptr [ESP + 0x48]      ; 00437a38
    MOV ECX,dword ptr [ESP + 0x8]       ; 00437a3c
    ADD EDI,0x84                        ; 00437a40
    ADD EBP,EAX                         ; 00437a46
    MOV EAX,dword ptr [ESP + 0x60]      ; 00437a48
    MOV dword ptr [ESP + 0x14],EDI      ; 00437a4c
    ADD EDX,EAX                         ; 00437a50
    MOV dword ptr [ESP + 0x2c],EBP      ; 00437a52
    MOV dword ptr [ESP + 0x48],EDX      ; 00437a56
    CMP EDI,ECX                         ; 00437a5a
    JGE 0x0043797c                      ; 00437a5c
        ;   XREF to: 0043797c (CONDITIONAL_JUMP)  ; LAB_0043797c
    JMP 0x004379fa                      ; 00437a62
        ;   XREF to: 004379fa (UNCONDITIONAL_JUMP)  ; LAB_004379fa
    MOV EAX,EBX                         ; 00437a64
        ;   Label: LAB_00437a64
    CMP EDX,ESI                         ; 00437a66
        ;   Label: LAB_00437a66
    JLE 0x00437a70                      ; 00437a68
        ;   XREF to: 00437a70 (CONDITIONAL_JUMP)  ; LAB_00437a70
    CMP EAX,ESI                         ; 00437a6a
    JG 0x00437a26                       ; 00437a6c
        ;   XREF to: 00437a26 (CONDITIONAL_JUMP)  ; LAB_00437a26
    MOV EDX,ESI                         ; 00437a6e
    SUB EDX,EAX                         ; 00437a70
        ;   Label: LAB_00437a70
    INC EDX                             ; 00437a72
    PUSH EDX                            ; 00437a73
    MOV EDX,dword ptr [ESP + 0x4c]      ; 00437a74
    ADD EDX,EAX                         ; 00437a78
    PUSH EDX                            ; 00437a7a
    MOV EDX,dword ptr [ESP + 0x34]      ; 00437a7b
    MOV ECX,dword ptr [ESP + 0x60]      ; 00437a7f
    ADD EAX,EDX                         ; 00437a83
    SUB EAX,ECX                         ; 00437a85
    PUSH EAX                            ; 00437a87
    CALL dword ptr [ESP + 0x3c]         ; 00437a88
    ADD ESP,0xc                         ; 00437a8c
    INC EDI                             ; 00437a8f
    ADD EBP,0x4                         ; 00437a90
    JMP 0x00437a06                      ; 00437a93
        ;   XREF to: 00437a06 (UNCONDITIONAL_JUMP)  ; LAB_00437a06
    MOV EAX,dword ptr [ESP + 0x50]      ; 00437a98
        ;   Label: LAB_00437a98
    MOV EDX,dword ptr [EDX + 0x1c4354c] ; 00437a9c
    ADD EAX,EAX                         ; 00437aa2
    ADD EDX,EAX                         ; 00437aa4
    MOV EAX,dword ptr [ESP + 0x10]      ; 00437aa6
    MOV dword ptr [ESP + 0x28],EDX      ; 00437aaa
    MOV EDX,EAX                         ; 00437aae
    SAR EDX,0x1f                        ; 00437ab0
    SUB EAX,EDX                         ; 00437ab3
    SAR EAX,0x1                         ; 00437ab5
    MOV EDX,dword ptr [ESP + 0x64]      ; 00437ab7
    MOV dword ptr [ESP + 0x10],EAX      ; 00437abb
    CMP EDI,EDX                         ; 00437abf
    JGE 0x0043797c                      ; 00437ac1
        ;   XREF to: 0043797c (CONDITIONAL_JUMP)  ; LAB_0043797c
    MOV EAX,dword ptr [ESP + 0x58]      ; 00437ac7
    ADD EAX,EAX                         ; 00437acb
    MOV dword ptr [ESP + 0x1c],EAX      ; 00437acd
    MOV EAX,dword ptr [ESP + 0x10]      ; 00437ad1
    ADD EAX,EAX                         ; 00437ad5
    MOV dword ptr [ESP + 0x4],EAX       ; 00437ad7
    MOV EAX,dword ptr [ESP]             ; 00437adb
    MOV dword ptr [ESP + 0x18],EBP      ; 00437ade
    MOV dword ptr [ESP + 0xc],EAX       ; 00437ae2
    MOV EAX,dword ptr [ESP + 0x18]      ; 00437ae6
        ;   Label: LAB_00437ae6
    XOR EBP,EBP                         ; 00437aea
    XOR EDI,EDI                         ; 00437aec
    MOV dword ptr [ESP + 0x20],EAX      ; 00437aee
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00437af2
        ;   Label: LAB_00437af2
    ADD EAX,dword ptr [ESP + 0x20]      ; 00437af6
    CMP EDI,dword ptr [EAX]             ; 00437afa
    JGE 0x00437b18                      ; 00437afc
        ;   XREF to: 00437b18 (CONDITIONAL_JUMP)  ; LAB_00437b18
    LEA EDX,[EAX + EBP*0x1]             ; 00437afe
    MOV EAX,dword ptr [EDX + 0x4]       ; 00437b01
    MOV EDX,dword ptr [EDX + 0x44]      ; 00437b04
    ADD EDX,EAX                         ; 00437b07
    DEC EDX                             ; 00437b09
    CMP EAX,EBX                         ; 00437b0a
    JGE 0x00437b52                      ; 00437b0c
        ;   XREF to: 00437b52 (CONDITIONAL_JUMP)  ; LAB_00437b52
    CMP EDX,EBX                         ; 00437b0e
    JGE 0x00437b50                      ; 00437b10
        ;   XREF to: 00437b50 (CONDITIONAL_JUMP)  ; LAB_00437b50
    INC EDI                             ; 00437b12
        ;   Label: LAB_00437b12
    ADD EBP,0x4                         ; 00437b13
    JMP 0x00437af2                      ; 00437b16
        ;   XREF to: 00437af2 (UNCONDITIONAL_JUMP)  ; LAB_00437af2
    MOV EDI,dword ptr [ESP + 0x18]      ; 00437b18
        ;   Label: LAB_00437b18
    MOV EAX,dword ptr [ESP + 0x4]       ; 00437b1c
    MOV EBP,dword ptr [ESP + 0x28]      ; 00437b20
    MOV EDX,dword ptr [ESP + 0x48]      ; 00437b24
    MOV ECX,dword ptr [ESP + 0xc]       ; 00437b28
    ADD EDI,0x84                        ; 00437b2c
    ADD EBP,EAX                         ; 00437b32
    MOV EAX,dword ptr [ESP + 0x60]      ; 00437b34
    MOV dword ptr [ESP + 0x18],EDI      ; 00437b38
    ADD EDX,EAX                         ; 00437b3c
    MOV dword ptr [ESP + 0x28],EBP      ; 00437b3e
    MOV dword ptr [ESP + 0x48],EDX      ; 00437b42
    CMP EDI,ECX                         ; 00437b46
    JGE 0x0043797c                      ; 00437b48
        ;   XREF to: 0043797c (CONDITIONAL_JUMP)  ; LAB_0043797c
    JMP 0x00437ae6                      ; 00437b4e
        ;   XREF to: 00437ae6 (UNCONDITIONAL_JUMP)  ; LAB_00437ae6
    MOV EAX,EBX                         ; 00437b50
        ;   Label: LAB_00437b50
    CMP EDX,ESI                         ; 00437b52
        ;   Label: LAB_00437b52
    JLE 0x00437b5c                      ; 00437b54
        ;   XREF to: 00437b5c (CONDITIONAL_JUMP)  ; LAB_00437b5c
    CMP EAX,ESI                         ; 00437b56
    JG 0x00437b12                       ; 00437b58
        ;   XREF to: 00437b12 (CONDITIONAL_JUMP)  ; LAB_00437b12
    MOV EDX,ESI                         ; 00437b5a
    SUB EDX,EAX                         ; 00437b5c
        ;   Label: LAB_00437b5c
    INC EDX                             ; 00437b5e
    PUSH EDX                            ; 00437b5f
    MOV EDX,dword ptr [ESP + 0x4c]      ; 00437b60
    ADD EDX,EAX                         ; 00437b64
    PUSH EDX                            ; 00437b66
    ADD EAX,EAX                         ; 00437b67
    MOV EDX,dword ptr [ESP + 0x30]      ; 00437b69
    MOV ECX,dword ptr [ESP + 0x24]      ; 00437b6d
    ADD EAX,EDX                         ; 00437b71
    SUB EAX,ECX                         ; 00437b73
    PUSH EAX                            ; 00437b75
    CALL dword ptr [ESP + 0x3c]         ; 00437b76
    ADD ESP,0xc                         ; 00437b7a
    INC EDI                             ; 00437b7d
    ADD EBP,0x4                         ; 00437b7e
    JMP 0x00437af2                      ; 00437b81
        ;   XREF to: 00437af2 (UNCONDITIONAL_JUMP)  ; LAB_00437af2

