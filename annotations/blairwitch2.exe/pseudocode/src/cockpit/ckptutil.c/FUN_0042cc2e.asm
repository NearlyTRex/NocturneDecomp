; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_ckptutil_c_FUN_0042cc2e(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8)
;
;
; Referenced Globals:
;   undefined4 DAT_006141c0
;   undefined4 DAT_01c2a38c
;   undefined4 DAT_01c2a390
;   undefined4 DAT_01c35e48
;   undefined4 DAT_01c35e50
;
; Called Functions:
;   cockpit_ckptutil.c_FUN_0042c410
;
; *****************************************************************************

section .text

    MOV ECX,ECX                         ; 0042cc2e
        ;   Label: cockpit_ckptutil.c_FUN_0042cc2e
    PUSH EBX                            ; 0042cc30
    PUSH ESI                            ; 0042cc31
    PUSH EDI                            ; 0042cc32
    PUSH EBP                            ; 0042cc33
    SUB ESP,0x34                        ; 0042cc34
    MOV EDI,dword ptr [ESP + 0x54]      ; 0042cc37
    MOV ESI,dword ptr [ESP + 0x58]      ; 0042cc3b
    MOV EBX,dword ptr [ESP + 0x58]      ; 0042cc3f
    MOV ECX,dword ptr [0x01c35e50]      ; 0042cc43 | DAT_01c35e50
    MOV EAX,[0x01c2a390]                ; 0042cc49 | DAT_01c2a390
    MOV EBP,dword ptr [0x01c2a38c]      ; 0042cc4e | DAT_01c2a38c
    MOV EDX,dword ptr [0x01c35e48]      ; 0042cc54 | DAT_01c35e48
    SUB EAX,EBP                         ; 0042cc5a
    ADD ESI,ECX                         ; 0042cc5c
    MOV dword ptr [ESP + 0x10],EAX      ; 0042cc5e
    MOV EAX,dword ptr [ESP + 0x48]      ; 0042cc62
    ADD EBX,EDX                         ; 0042cc66
    TEST EAX,EAX                        ; 0042cc68
    JNZ 0x0042cc74                      ; 0042cc6a
        ;   XREF to: 0042cc74 (CONDITIONAL_JUMP)  ; LAB_0042cc74
    ADD ESP,0x34                        ; 0042cc6c
        ;   Label: LAB_0042cc6c
    POP EBP                             ; 0042cc6f
    POP EDI                             ; 0042cc70
    POP ESI                             ; 0042cc71
    POP EBX                             ; 0042cc72
    RET                                 ; 0042cc73
    MOV EAX,dword ptr [ESP + 0x60]      ; 0042cc74
        ;   Label: LAB_0042cc74
    IMUL EAX,EDI                        ; 0042cc78
    MOV EDX,dword ptr [ESP + 0x50]      ; 0042cc7b
    MOV ECX,dword ptr [ESP + 0x48]      ; 0042cc7f
    ADD EAX,EDX                         ; 0042cc83
    ADD ECX,EAX                         ; 0042cc85
    MOV EBP,dword ptr [ESP + 0x64]      ; 0042cc87
    MOV dword ptr [ESP + 0x48],ECX      ; 0042cc8b
    CALL cockpit_ckptutil.c_FUN_0042c410 ; 0042cc8f
        ;   XREF to: 0042c410 (UNCONDITIONAL_CALL)  ; undefined cockpit_ckptutil.c_FUN_0042c410()
    MOV dword ptr [ESP + 0x30],EAX      ; 0042cc94
    MOV EAX,EBP                         ; 0042cc98
    SHL EAX,0x5                         ; 0042cc9a
    ADD EAX,EBP                         ; 0042cc9d
    SHL EAX,0x2                         ; 0042cc9f
    MOV EDX,dword ptr [ESP + 0x5c]      ; 0042cca2
    MOV dword ptr [ESP],EAX             ; 0042cca6
    MOV EAX,EDI                         ; 0042cca9
    ADD EDX,EDI                         ; 0042ccab
    SHL EAX,0x5                         ; 0042ccad
    SHL EDX,0x2                         ; 0042ccb0
    LEA EBP,[EDI + EAX*0x1]             ; 0042ccb3
    MOV EAX,[0x006141c0]                ; 0042ccb6 | DAT_006141c0
    SHL EBP,0x2                         ; 0042ccbb
    CMP EAX,0x8                         ; 0042ccbe
    JNZ 0x0042cd88                      ; 0042ccc1
        ;   XREF to: 0042cd88 (CONDITIONAL_JUMP)  ; LAB_0042cd88
    MOV EAX,dword ptr [EDX + 0x1c2a38c] ; 0042ccc7
    MOV EDX,dword ptr [ESP + 0x50]      ; 0042cccd
    ADD EDX,EAX                         ; 0042ccd1
    MOV ECX,dword ptr [ESP + 0x64]      ; 0042ccd3
    MOV dword ptr [ESP + 0x2c],EDX      ; 0042ccd7
    CMP EDI,ECX                         ; 0042ccdb
    JGE 0x0042cc6c                      ; 0042ccdd
        ;   XREF to: 0042cc6c (CONDITIONAL_JUMP)  ; LAB_0042cc6c
    MOV EAX,dword ptr [ESP]             ; 0042ccdf
    MOV dword ptr [ESP + 0x14],EBP      ; 0042cce2
    MOV dword ptr [ESP + 0x8],EAX       ; 0042cce6
    MOV EAX,dword ptr [ESP + 0x14]      ; 0042ccea
        ;   Label: LAB_0042ccea
    XOR EBP,EBP                         ; 0042ccee
    XOR EDI,EDI                         ; 0042ccf0
    MOV dword ptr [ESP + 0x24],EAX      ; 0042ccf2
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0042ccf6
        ;   Label: LAB_0042ccf6
    ADD EAX,dword ptr [ESP + 0x24]      ; 0042ccfa
    CMP EDI,dword ptr [EAX]             ; 0042ccfe
    JGE 0x0042cd1c                      ; 0042cd00
        ;   XREF to: 0042cd1c (CONDITIONAL_JUMP)  ; LAB_0042cd1c
    LEA EDX,[EAX + EBP*0x1]             ; 0042cd02
    MOV EAX,dword ptr [EDX + 0x4]       ; 0042cd05
    MOV EDX,dword ptr [EDX + 0x44]      ; 0042cd08
    ADD EDX,EAX                         ; 0042cd0b
    DEC EDX                             ; 0042cd0d
    CMP EAX,EBX                         ; 0042cd0e
    JGE 0x0042cd56                      ; 0042cd10
        ;   XREF to: 0042cd56 (CONDITIONAL_JUMP)  ; LAB_0042cd56
    CMP EDX,EBX                         ; 0042cd12
    JGE 0x0042cd54                      ; 0042cd14
        ;   XREF to: 0042cd54 (CONDITIONAL_JUMP)  ; LAB_0042cd54
    INC EDI                             ; 0042cd16
        ;   Label: LAB_0042cd16
    ADD EBP,0x4                         ; 0042cd17
    JMP 0x0042ccf6                      ; 0042cd1a
        ;   XREF to: 0042ccf6 (UNCONDITIONAL_JUMP)  ; LAB_0042ccf6
    MOV EDI,dword ptr [ESP + 0x14]      ; 0042cd1c
        ;   Label: LAB_0042cd1c
    MOV EAX,dword ptr [ESP + 0x10]      ; 0042cd20
    MOV EBP,dword ptr [ESP + 0x2c]      ; 0042cd24
    MOV EDX,dword ptr [ESP + 0x48]      ; 0042cd28
    MOV ECX,dword ptr [ESP + 0x8]       ; 0042cd2c
    ADD EDI,0x84                        ; 0042cd30
    ADD EBP,EAX                         ; 0042cd36
    MOV EAX,dword ptr [ESP + 0x60]      ; 0042cd38
    MOV dword ptr [ESP + 0x14],EDI      ; 0042cd3c
    ADD EDX,EAX                         ; 0042cd40
    MOV dword ptr [ESP + 0x2c],EBP      ; 0042cd42
    MOV dword ptr [ESP + 0x48],EDX      ; 0042cd46
    CMP EDI,ECX                         ; 0042cd4a
    JGE 0x0042cc6c                      ; 0042cd4c
        ;   XREF to: 0042cc6c (CONDITIONAL_JUMP)  ; LAB_0042cc6c
    JMP 0x0042ccea                      ; 0042cd52
        ;   XREF to: 0042ccea (UNCONDITIONAL_JUMP)  ; LAB_0042ccea
    MOV EAX,EBX                         ; 0042cd54
        ;   Label: LAB_0042cd54
    CMP EDX,ESI                         ; 0042cd56
        ;   Label: LAB_0042cd56
    JLE 0x0042cd60                      ; 0042cd58
        ;   XREF to: 0042cd60 (CONDITIONAL_JUMP)  ; LAB_0042cd60
    CMP EAX,ESI                         ; 0042cd5a
    JG 0x0042cd16                       ; 0042cd5c
        ;   XREF to: 0042cd16 (CONDITIONAL_JUMP)  ; LAB_0042cd16
    MOV EDX,ESI                         ; 0042cd5e
    SUB EDX,EAX                         ; 0042cd60
        ;   Label: LAB_0042cd60
    INC EDX                             ; 0042cd62
    PUSH EDX                            ; 0042cd63
    MOV EDX,dword ptr [ESP + 0x4c]      ; 0042cd64
    ADD EDX,EAX                         ; 0042cd68
    PUSH EDX                            ; 0042cd6a
    MOV EDX,dword ptr [ESP + 0x34]      ; 0042cd6b
    MOV ECX,dword ptr [ESP + 0x60]      ; 0042cd6f
    ADD EAX,EDX                         ; 0042cd73
    SUB EAX,ECX                         ; 0042cd75
    PUSH EAX                            ; 0042cd77
    CALL dword ptr [ESP + 0x3c]         ; 0042cd78
    ADD ESP,0xc                         ; 0042cd7c
    INC EDI                             ; 0042cd7f
    ADD EBP,0x4                         ; 0042cd80
    JMP 0x0042ccf6                      ; 0042cd83
        ;   XREF to: 0042ccf6 (UNCONDITIONAL_JUMP)  ; LAB_0042ccf6
    MOV EAX,dword ptr [ESP + 0x50]      ; 0042cd88
        ;   Label: LAB_0042cd88
    MOV EDX,dword ptr [EDX + 0x1c2a38c] ; 0042cd8c
    ADD EAX,EAX                         ; 0042cd92
    ADD EDX,EAX                         ; 0042cd94
    MOV EAX,dword ptr [ESP + 0x10]      ; 0042cd96
    MOV dword ptr [ESP + 0x28],EDX      ; 0042cd9a
    MOV EDX,EAX                         ; 0042cd9e
    SAR EDX,0x1f                        ; 0042cda0
    SUB EAX,EDX                         ; 0042cda3
    SAR EAX,0x1                         ; 0042cda5
    MOV EDX,dword ptr [ESP + 0x64]      ; 0042cda7
    MOV dword ptr [ESP + 0x10],EAX      ; 0042cdab
    CMP EDI,EDX                         ; 0042cdaf
    JGE 0x0042cc6c                      ; 0042cdb1
        ;   XREF to: 0042cc6c (CONDITIONAL_JUMP)  ; LAB_0042cc6c
    MOV EAX,dword ptr [ESP + 0x58]      ; 0042cdb7
    ADD EAX,EAX                         ; 0042cdbb
    MOV dword ptr [ESP + 0x1c],EAX      ; 0042cdbd
    MOV EAX,dword ptr [ESP + 0x10]      ; 0042cdc1
    ADD EAX,EAX                         ; 0042cdc5
    MOV dword ptr [ESP + 0x4],EAX       ; 0042cdc7
    MOV EAX,dword ptr [ESP]             ; 0042cdcb
    MOV dword ptr [ESP + 0x18],EBP      ; 0042cdce
    MOV dword ptr [ESP + 0xc],EAX       ; 0042cdd2
    MOV EAX,dword ptr [ESP + 0x18]      ; 0042cdd6
        ;   Label: LAB_0042cdd6
    XOR EBP,EBP                         ; 0042cdda
    XOR EDI,EDI                         ; 0042cddc
    MOV dword ptr [ESP + 0x20],EAX      ; 0042cdde
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0042cde2
        ;   Label: LAB_0042cde2
    ADD EAX,dword ptr [ESP + 0x20]      ; 0042cde6
    CMP EDI,dword ptr [EAX]             ; 0042cdea
    JGE 0x0042ce08                      ; 0042cdec
        ;   XREF to: 0042ce08 (CONDITIONAL_JUMP)  ; LAB_0042ce08
    LEA EDX,[EAX + EBP*0x1]             ; 0042cdee
    MOV EAX,dword ptr [EDX + 0x4]       ; 0042cdf1
    MOV EDX,dword ptr [EDX + 0x44]      ; 0042cdf4
    ADD EDX,EAX                         ; 0042cdf7
    DEC EDX                             ; 0042cdf9
    CMP EAX,EBX                         ; 0042cdfa
    JGE 0x0042ce42                      ; 0042cdfc
        ;   XREF to: 0042ce42 (CONDITIONAL_JUMP)  ; LAB_0042ce42
    CMP EDX,EBX                         ; 0042cdfe
    JGE 0x0042ce40                      ; 0042ce00
        ;   XREF to: 0042ce40 (CONDITIONAL_JUMP)  ; LAB_0042ce40
    INC EDI                             ; 0042ce02
        ;   Label: LAB_0042ce02
    ADD EBP,0x4                         ; 0042ce03
    JMP 0x0042cde2                      ; 0042ce06
        ;   XREF to: 0042cde2 (UNCONDITIONAL_JUMP)  ; LAB_0042cde2
    MOV EDI,dword ptr [ESP + 0x18]      ; 0042ce08
        ;   Label: LAB_0042ce08
    MOV EAX,dword ptr [ESP + 0x4]       ; 0042ce0c
    MOV EBP,dword ptr [ESP + 0x28]      ; 0042ce10
    MOV EDX,dword ptr [ESP + 0x48]      ; 0042ce14
    MOV ECX,dword ptr [ESP + 0xc]       ; 0042ce18
    ADD EDI,0x84                        ; 0042ce1c
    ADD EBP,EAX                         ; 0042ce22
    MOV EAX,dword ptr [ESP + 0x60]      ; 0042ce24
    MOV dword ptr [ESP + 0x18],EDI      ; 0042ce28
    ADD EDX,EAX                         ; 0042ce2c
    MOV dword ptr [ESP + 0x28],EBP      ; 0042ce2e
    MOV dword ptr [ESP + 0x48],EDX      ; 0042ce32
    CMP EDI,ECX                         ; 0042ce36
    JGE 0x0042cc6c                      ; 0042ce38
        ;   XREF to: 0042cc6c (CONDITIONAL_JUMP)  ; LAB_0042cc6c
    JMP 0x0042cdd6                      ; 0042ce3e
        ;   XREF to: 0042cdd6 (UNCONDITIONAL_JUMP)  ; LAB_0042cdd6
    MOV EAX,EBX                         ; 0042ce40
        ;   Label: LAB_0042ce40
    CMP EDX,ESI                         ; 0042ce42
        ;   Label: LAB_0042ce42
    JLE 0x0042ce4c                      ; 0042ce44
        ;   XREF to: 0042ce4c (CONDITIONAL_JUMP)  ; LAB_0042ce4c
    CMP EAX,ESI                         ; 0042ce46
    JG 0x0042ce02                       ; 0042ce48
        ;   XREF to: 0042ce02 (CONDITIONAL_JUMP)  ; LAB_0042ce02
    MOV EDX,ESI                         ; 0042ce4a
    SUB EDX,EAX                         ; 0042ce4c
        ;   Label: LAB_0042ce4c
    INC EDX                             ; 0042ce4e
    PUSH EDX                            ; 0042ce4f
    MOV EDX,dword ptr [ESP + 0x4c]      ; 0042ce50
    ADD EDX,EAX                         ; 0042ce54
    PUSH EDX                            ; 0042ce56
    ADD EAX,EAX                         ; 0042ce57
    MOV EDX,dword ptr [ESP + 0x30]      ; 0042ce59
    MOV ECX,dword ptr [ESP + 0x24]      ; 0042ce5d
    ADD EAX,EDX                         ; 0042ce61
    SUB EAX,ECX                         ; 0042ce63
    PUSH EAX                            ; 0042ce65
    CALL dword ptr [ESP + 0x3c]         ; 0042ce66
    ADD ESP,0xc                         ; 0042ce6a
    INC EDI                             ; 0042ce6d
    ADD EBP,0x4                         ; 0042ce6e
    JMP 0x0042cde2                      ; 0042ce71
        ;   XREF to: 0042cde2 (UNCONDITIONAL_JUMP)  ; LAB_0042cde2

