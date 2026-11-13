; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_ckptutil_c_blitUnifiedSprite_FUN_00435910(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005fba20
;   undefined4 DAT_01c5faec
;   undefined4 DAT_01c5faf0
;   undefined4 DAT_01c6b5a8
;   undefined4 DAT_01c6b5b0
;
; Called Functions:
;   cockpit_ckptutil.c_FUN_00434e80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00435910
        ;   Label: cockpit_ckptutil.c_blitUnifiedSprite_FUN_00435910
    PUSH ESI                            ; 00435911
    PUSH EDI                            ; 00435912
    PUSH EBP                            ; 00435913
    SUB ESP,0x2c                        ; 00435914
    MOV EDX,dword ptr [ESP + 0x48]      ; 00435917
    MOV EBP,dword ptr [ESP + 0x40]      ; 0043591b
    MOV EBX,dword ptr [0x01c6b5b0]      ; 0043591f | DAT_01c6b5b0
    MOV EAX,[0x01c5faf0]                ; 00435925 | DAT_01c5faf0
    MOV EDI,dword ptr [0x01c5faec]      ; 0043592a | DAT_01c5faec
    MOV ESI,dword ptr [0x01c6b5a8]      ; 00435930 | DAT_01c6b5a8
    SUB EBX,EDX                         ; 00435936
    SUB EAX,EDI                         ; 00435938
    SUB ESI,EDX                         ; 0043593a
    MOV dword ptr [ESP + 0xc],EAX       ; 0043593c
    TEST EBP,EBP                        ; 00435940
    JNZ 0x0043594c                      ; 00435942
        ;   XREF to: 0043594c (CONDITIONAL_JUMP)  ; LAB_0043594c
    ADD ESP,0x2c                        ; 00435944
        ;   Label: LAB_00435944
    POP EBP                             ; 00435947
    POP EDI                             ; 00435948
    POP ESI                             ; 00435949
    POP EBX                             ; 0043594a
    RET                                 ; 0043594b
    CALL cockpit_ckptutil.c_FUN_00434e80 ; 0043594c
        ;   XREF to: 00434e80 (UNCONDITIONAL_CALL)  ; undefined cockpit_ckptutil.c_FUN_00434e80()
        ;   Label: LAB_0043594c
    MOV EDX,dword ptr [ESP + 0x54]      ; 00435951
    MOV EBP,dword ptr [ESP + 0x4c]      ; 00435955
    MOV EDI,EDX                         ; 00435959
    MOV dword ptr [ESP + 0x28],EAX      ; 0043595b
    SHL EDI,0x5                         ; 0043595f
    MOV EAX,[0x005fba20]                ; 00435962 | DAT_005fba20
    ADD EDI,EDX                         ; 00435967
    SHL EBP,0x2                         ; 00435969
    SHL EDI,0x2                         ; 0043596c
    CMP EAX,0x8                         ; 0043596f
    JNZ 0x00435a4e                      ; 00435972
        ;   XREF to: 00435a4e (CONDITIONAL_JUMP)  ; LAB_00435a4e
    MOV EDX,dword ptr [ESP + 0x48]      ; 00435978
    MOV EAX,dword ptr [EBP + 0x1c5faec] ; 0043597c
    ADD EDX,EAX                         ; 00435982
    MOV ECX,dword ptr [ESP + 0x54]      ; 00435984
    MOV dword ptr [ESP + 0x24],EDX      ; 00435988
    TEST ECX,ECX                        ; 0043598c
    JLE 0x00435944                      ; 0043598e
        ;   XREF to: 00435944 (CONDITIONAL_JUMP)  ; LAB_00435944
    XOR ECX,ECX                         ; 00435990
    MOV dword ptr [ESP + 0x8],EDI       ; 00435992
    MOV dword ptr [ESP + 0x14],ECX      ; 00435996
    CMP dword ptr [ESP + 0x44],0x0      ; 0043599a
        ;   Label: LAB_0043599a
    JZ 0x00435a0a                       ; 0043599f
        ;   XREF to: 00435a0a (CONDITIONAL_JUMP)  ; LAB_00435a0a
    MOV EAX,dword ptr [ESP + 0x14]      ; 004359a1
    XOR EBP,EBP                         ; 004359a5
    XOR EDI,EDI                         ; 004359a7
    MOV dword ptr [ESP + 0x1c],EAX      ; 004359a9
    MOV EDX,dword ptr [ESP + 0x44]      ; 004359ad
        ;   Label: LAB_004359ad
    ADD EDX,dword ptr [ESP + 0x1c]      ; 004359b1
    CMP EDI,dword ptr [EDX]             ; 004359b5
    JGE 0x004359d2                      ; 004359b7
        ;   XREF to: 004359d2 (CONDITIONAL_JUMP)  ; LAB_004359d2
    MOV EAX,dword ptr [EDX + EBP*0x1 + 0x4] ; 004359b9
    MOV EDX,dword ptr [EDX + EBP*0x1 + 0x44] ; 004359bd
    ADD EDX,EAX                         ; 004359c1
    DEC EDX                             ; 004359c3
    CMP EAX,ESI                         ; 004359c4
    JGE 0x00435a24                      ; 004359c6
        ;   XREF to: 00435a24 (CONDITIONAL_JUMP)  ; LAB_00435a24
    CMP EDX,ESI                         ; 004359c8
    JGE 0x00435a22                      ; 004359ca
        ;   XREF to: 00435a22 (CONDITIONAL_JUMP)  ; LAB_00435a22
    INC EDI                             ; 004359cc
        ;   Label: LAB_004359cc
    ADD EBP,0x4                         ; 004359cd
    JMP 0x004359ad                      ; 004359d0
        ;   XREF to: 004359ad (UNCONDITIONAL_JUMP)  ; LAB_004359ad
    MOV ECX,dword ptr [ESP + 0x14]      ; 004359d2
        ;   Label: LAB_004359d2
    MOV EAX,dword ptr [ESP + 0xc]       ; 004359d6
    MOV EDI,dword ptr [ESP + 0x24]      ; 004359da
    MOV EBP,dword ptr [ESP + 0x40]      ; 004359de
    MOV EDX,dword ptr [ESP + 0x8]       ; 004359e2
    ADD ECX,0x84                        ; 004359e6
    ADD EDI,EAX                         ; 004359ec
    MOV EAX,dword ptr [ESP + 0x50]      ; 004359ee
    MOV dword ptr [ESP + 0x14],ECX      ; 004359f2
    ADD EBP,EAX                         ; 004359f6
    MOV dword ptr [ESP + 0x24],EDI      ; 004359f8
    MOV dword ptr [ESP + 0x40],EBP      ; 004359fc
    CMP ECX,EDX                         ; 00435a00
    JGE 0x00435944                      ; 00435a02
        ;   XREF to: 00435944 (CONDITIONAL_JUMP)  ; LAB_00435944
    JMP 0x0043599a                      ; 00435a08
        ;   XREF to: 0043599a (UNCONDITIONAL_JUMP)  ; LAB_0043599a
    MOV EBP,dword ptr [ESP + 0x50]      ; 00435a0a
        ;   Label: LAB_00435a0a
    PUSH EBP                            ; 00435a0e
    MOV EAX,dword ptr [ESP + 0x44]      ; 00435a0f
    PUSH EAX                            ; 00435a13
    MOV EDX,dword ptr [ESP + 0x2c]      ; 00435a14
    PUSH EDX                            ; 00435a18
    CALL dword ptr [ESP + 0x34]         ; 00435a19
    ADD ESP,0xc                         ; 00435a1d
    JMP 0x004359d2                      ; 00435a20
        ;   XREF to: 004359d2 (UNCONDITIONAL_JUMP)  ; LAB_004359d2
    MOV EAX,ESI                         ; 00435a22
        ;   Label: LAB_00435a22
    CMP EDX,EBX                         ; 00435a24
        ;   Label: LAB_00435a24
    JLE 0x00435a2e                      ; 00435a26
        ;   XREF to: 00435a2e (CONDITIONAL_JUMP)  ; LAB_00435a2e
    CMP EAX,EBX                         ; 00435a28
    JG 0x004359cc                       ; 00435a2a
        ;   XREF to: 004359cc (CONDITIONAL_JUMP)  ; LAB_004359cc
    MOV EDX,EBX                         ; 00435a2c
    SUB EDX,EAX                         ; 00435a2e
        ;   Label: LAB_00435a2e
    INC EDX                             ; 00435a30
    PUSH EDX                            ; 00435a31
    MOV EDX,dword ptr [ESP + 0x44]      ; 00435a32
    ADD EDX,EAX                         ; 00435a36
    PUSH EDX                            ; 00435a38
    ADD EAX,dword ptr [ESP + 0x2c]      ; 00435a39
    PUSH EAX                            ; 00435a3d
    CALL dword ptr [ESP + 0x34]         ; 00435a3e
    ADD ESP,0xc                         ; 00435a42
    INC EDI                             ; 00435a45
    ADD EBP,0x4                         ; 00435a46
    JMP 0x004359ad                      ; 00435a49
        ;   XREF to: 004359ad (UNCONDITIONAL_JUMP)  ; LAB_004359ad
    MOV EAX,dword ptr [ESP + 0x48]      ; 00435a4e
        ;   Label: LAB_00435a4e
    MOV EDX,dword ptr [EBP + 0x1c5faec] ; 00435a52
    ADD EAX,EAX                         ; 00435a58
    ADD EDX,EAX                         ; 00435a5a
    MOV EAX,dword ptr [ESP + 0xc]       ; 00435a5c
    MOV dword ptr [ESP + 0x20],EDX      ; 00435a60
    MOV EDX,EAX                         ; 00435a64
    SAR EDX,0x1f                        ; 00435a66
    SUB EAX,EDX                         ; 00435a69
    SAR EAX,0x1                         ; 00435a6b
    MOV EDX,dword ptr [ESP + 0x54]      ; 00435a6d
    MOV dword ptr [ESP + 0xc],EAX       ; 00435a71
    TEST EDX,EDX                        ; 00435a75
    JLE 0x00435944                      ; 00435a77
        ;   XREF to: 00435944 (CONDITIONAL_JUMP)  ; LAB_00435944
    MOV dword ptr [ESP + 0x4],EDI       ; 00435a7d
    XOR EBP,EBP                         ; 00435a81
    ADD EAX,EAX                         ; 00435a83
    MOV dword ptr [ESP + 0x10],EBP      ; 00435a85
    MOV dword ptr [ESP],EAX             ; 00435a89
    CMP dword ptr [ESP + 0x44],0x0      ; 00435a8c
        ;   Label: LAB_00435a8c
    JZ 0x00435afb                       ; 00435a91
        ;   XREF to: 00435afb (CONDITIONAL_JUMP)  ; LAB_00435afb
    MOV EAX,dword ptr [ESP + 0x10]      ; 00435a93
    XOR EBP,EBP                         ; 00435a97
    XOR EDI,EDI                         ; 00435a99
    MOV dword ptr [ESP + 0x18],EAX      ; 00435a9b
    MOV EDX,dword ptr [ESP + 0x44]      ; 00435a9f
        ;   Label: LAB_00435a9f
    ADD EDX,dword ptr [ESP + 0x18]      ; 00435aa3
    CMP EDI,dword ptr [EDX]             ; 00435aa7
    JGE 0x00435ac4                      ; 00435aa9
        ;   XREF to: 00435ac4 (CONDITIONAL_JUMP)  ; LAB_00435ac4
    MOV EAX,dword ptr [EDX + EBP*0x1 + 0x4] ; 00435aab
    MOV EDX,dword ptr [EDX + EBP*0x1 + 0x44] ; 00435aaf
    ADD EDX,EAX                         ; 00435ab3
    DEC EDX                             ; 00435ab5
    CMP EAX,ESI                         ; 00435ab6
    JGE 0x00435b15                      ; 00435ab8
        ;   XREF to: 00435b15 (CONDITIONAL_JUMP)  ; LAB_00435b15
    CMP EDX,ESI                         ; 00435aba
    JGE 0x00435b13                      ; 00435abc
        ;   XREF to: 00435b13 (CONDITIONAL_JUMP)  ; LAB_00435b13
    INC EDI                             ; 00435abe
        ;   Label: LAB_00435abe
    ADD EBP,0x4                         ; 00435abf
    JMP 0x00435a9f                      ; 00435ac2
        ;   XREF to: 00435a9f (UNCONDITIONAL_JUMP)  ; LAB_00435a9f
    MOV EDI,dword ptr [ESP + 0x10]      ; 00435ac4
        ;   Label: LAB_00435ac4
    MOV EAX,dword ptr [ESP]             ; 00435ac8
    MOV EBP,dword ptr [ESP + 0x20]      ; 00435acb
    MOV EDX,dword ptr [ESP + 0x40]      ; 00435acf
    MOV ECX,dword ptr [ESP + 0x4]       ; 00435ad3
    ADD EDI,0x84                        ; 00435ad7
    ADD EBP,EAX                         ; 00435add
    MOV EAX,dword ptr [ESP + 0x50]      ; 00435adf
    MOV dword ptr [ESP + 0x10],EDI      ; 00435ae3
    ADD EDX,EAX                         ; 00435ae7
    MOV dword ptr [ESP + 0x20],EBP      ; 00435ae9
    MOV dword ptr [ESP + 0x40],EDX      ; 00435aed
    CMP EDI,ECX                         ; 00435af1
    JGE 0x00435944                      ; 00435af3
        ;   XREF to: 00435944 (CONDITIONAL_JUMP)  ; LAB_00435944
    JMP 0x00435a8c                      ; 00435af9
        ;   XREF to: 00435a8c (UNCONDITIONAL_JUMP)  ; LAB_00435a8c
    MOV EDX,dword ptr [ESP + 0x50]      ; 00435afb
        ;   Label: LAB_00435afb
    PUSH EDX                            ; 00435aff
    MOV ECX,dword ptr [ESP + 0x44]      ; 00435b00
    PUSH ECX                            ; 00435b04
    MOV EDI,dword ptr [ESP + 0x28]      ; 00435b05
    PUSH EDI                            ; 00435b09
    CALL dword ptr [ESP + 0x34]         ; 00435b0a
    ADD ESP,0xc                         ; 00435b0e
    JMP 0x00435ac4                      ; 00435b11
        ;   XREF to: 00435ac4 (UNCONDITIONAL_JUMP)  ; LAB_00435ac4
    MOV EAX,ESI                         ; 00435b13
        ;   Label: LAB_00435b13
    CMP EDX,EBX                         ; 00435b15
        ;   Label: LAB_00435b15
    JLE 0x00435b1f                      ; 00435b17
        ;   XREF to: 00435b1f (CONDITIONAL_JUMP)  ; LAB_00435b1f
    CMP EAX,EBX                         ; 00435b19
    JG 0x00435abe                       ; 00435b1b
        ;   XREF to: 00435abe (CONDITIONAL_JUMP)  ; LAB_00435abe
    MOV EDX,EBX                         ; 00435b1d
    SUB EDX,EAX                         ; 00435b1f
        ;   Label: LAB_00435b1f
    INC EDX                             ; 00435b21
    PUSH EDX                            ; 00435b22
    MOV EDX,dword ptr [ESP + 0x44]      ; 00435b23
    ADD EDX,EAX                         ; 00435b27
    PUSH EDX                            ; 00435b29
    ADD EAX,EAX                         ; 00435b2a
    ADD EAX,dword ptr [ESP + 0x28]      ; 00435b2c
    PUSH EAX                            ; 00435b30
    CALL dword ptr [ESP + 0x34]         ; 00435b31
    ADD ESP,0xc                         ; 00435b35
    INC EDI                             ; 00435b38
    ADD EBP,0x4                         ; 00435b39
    JMP 0x00435a9f                      ; 00435b3c
        ;   XREF to: 00435a9f (UNCONDITIONAL_JUMP)  ; LAB_00435a9f

