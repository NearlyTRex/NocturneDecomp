; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004359e0(int param_1,undefined4 *param_2,undefined4 *param_3,int param_4)
;
; Local Variables:
; undefined4       Stack[-0xfc]:4  local_fc
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined        Stack[-0xd8]:1  local_d8
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined        Stack[-0xc0]:1  local_c0
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   FUN_00438510 at 0043853c
;   FUN_004d5770 at 004d5796
;
; Referenced Globals:
;   undefined4 DAT_0059b360
;
; Called Functions:
;   FUN_004357b0
;   FUN_004363e0
;   FUN_00518130
;   FUN_0051b800
;   FUN_0051b880
;   FUN_0051d3c0
;   FUN_0051e020
;   FUN_0055a8b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004359e0
        ;   Label: FUN_004359e0
    PUSH ESI                            ; 004359e1
    PUSH EDI                            ; 004359e2
    PUSH EBP                            ; 004359e3
    SUB ESP,0xec                        ; 004359e4
    MOV EDX,dword ptr [ESP + 0x100]     ; 004359ea
    MOV ECX,dword ptr [EDX + 0x104]     ; 004359f1
    XOR EAX,EAX                         ; 004359f7
    TEST ECX,ECX                        ; 004359f9
    JLE 0x00435a30                      ; 004359fb
        ;   XREF to: 00435a30 (CONDITIONAL_JUMP)  ; LAB_00435a30
    XOR EDX,EDX                         ; 004359fd
    MOV ECX,dword ptr [ESP + 0x100]     ; 004359ff
        ;   Label: LAB_004359ff
    MOV ECX,dword ptr [ECX + 0x3aafc]   ; 00435a06
    MOV dword ptr [ECX + EDX*0x1],EAX   ; 00435a0c
    MOV ECX,dword ptr [ESP + 0x100]     ; 00435a0f
    INC EAX                             ; 00435a16
    MOV EBX,dword ptr [ECX + 0x104]     ; 00435a17
    ADD EDX,0x4                         ; 00435a1d
    CMP EAX,EBX                         ; 00435a20
    JL 0x004359ff                       ; 00435a22
        ;   XREF to: 004359ff (CONDITIONAL_JUMP)  ; LAB_004359ff
    LEA EAX,[EAX]                       ; 00435a24
    LEA EDX,[EDX]                       ; 00435a2a
    XOR ESI,ESI                         ; 00435a30
        ;   Label: LAB_00435a30
    MOV dword ptr [ESP + 0xd4],ESI      ; 00435a32
    MOV EAX,dword ptr [ESP + 0x100]     ; 00435a39
        ;   Label: LAB_00435a39
    MOV EAX,dword ptr [EAX + 0x104]     ; 00435a40
    MOV EDI,dword ptr [ESP + 0xd4]      ; 00435a46
    DEC EAX                             ; 00435a4d
    CMP EAX,EDI                         ; 00435a4e
    JLE 0x00435b77                      ; 00435a50
        ;   XREF to: 00435b77 (CONDITIONAL_JUMP)  ; LAB_00435b77
    MOV EAX,dword ptr [ESP + 0x100]     ; 00435a56
    LEA EBP,[EDI + 0x1]                 ; 00435a5d
    CMP EBP,dword ptr [EAX + 0x104]     ; 00435a60
    JGE 0x00435b6b                      ; 00435a66
        ;   XREF to: 00435b6b (CONDITIONAL_JUMP)  ; LAB_00435b6b
    LEA EAX,[EDI*0x4 + 0x0]             ; 00435a6c
    LEA EBX,[EBP*0x4 + 0x0]             ; 00435a73
    MOV dword ptr [ESP + 0x74],EAX      ; 00435a7a
    MOV EAX,dword ptr [ESP + 0x100]     ; 00435a7e
        ;   Label: LAB_00435a7e
    MOV EDX,dword ptr [ESP + 0x74]      ; 00435a85
    MOV EAX,dword ptr [EAX + 0x3aafc]   ; 00435a89
    ADD EDX,EAX                         ; 00435a8f
    MOV EDI,dword ptr [EDX]             ; 00435a91
    MOV ESI,dword ptr [EBX + EAX*0x1]   ; 00435a93
    IMUL EAX,EDI,0xc                    ; 00435a96
    MOV dword ptr [ESP + 0x84],EAX      ; 00435a99
    MOV EAX,dword ptr [ESP + 0x100]     ; 00435aa0
    MOV ECX,dword ptr [ESP + 0x84]      ; 00435aa7
    MOV EAX,dword ptr [EAX + 0x10c]     ; 00435aae
    ADD ECX,EAX                         ; 00435ab4
    MOV dword ptr [ESP + 0x84],ECX      ; 00435ab6
    IMUL ECX,ESI,0xc                    ; 00435abd
    ADD ECX,EAX                         ; 00435ac0
    MOV EAX,dword ptr [ESP + 0x84]      ; 00435ac2
    MOV EAX,dword ptr [EAX + 0x4]       ; 00435ac9
    CMP EAX,dword ptr [ECX + 0x4]       ; 00435acc
    JGE 0x00435ae3                      ; 00435acf
        ;   XREF to: 00435ae3 (CONDITIONAL_JUMP)  ; LAB_00435ae3
    MOV EAX,dword ptr [ESP + 0x100]     ; 00435ad1
    MOV dword ptr [EDX],ESI             ; 00435ad8
    MOV EAX,dword ptr [EAX + 0x3aafc]   ; 00435ada
    MOV dword ptr [EBX + EAX*0x1],EDI   ; 00435ae0
    IMUL EDX,EDI,0xc                    ; 00435ae3
        ;   Label: LAB_00435ae3
    IMUL ECX,ESI,0xc                    ; 00435ae6
    MOV EAX,dword ptr [ESP + 0x100]     ; 00435ae9
    MOV EAX,dword ptr [EAX + 0x10c]     ; 00435af0
    ADD EDX,EAX                         ; 00435af6
    MOV dword ptr [ESP + 0x70],ECX      ; 00435af8
    ADD EAX,ECX                         ; 00435afc
    MOV ECX,dword ptr [EDX + 0x4]       ; 00435afe
    CMP ECX,dword ptr [EAX + 0x4]       ; 00435b01
    JNZ 0x00435b52                      ; 00435b04
        ;   XREF to: 00435b52 (CONDITIONAL_JUMP)  ; LAB_00435b52
    MOV EAX,dword ptr [EDX]             ; 00435b06
    CDQ                                 ; 00435b08
    XOR EAX,EDX                         ; 00435b09
    SUB EAX,EDX                         ; 00435b0b
    MOV ECX,EAX                         ; 00435b0d
    MOV EAX,dword ptr [ESP + 0x100]     ; 00435b0f
    MOV EDX,dword ptr [ESP + 0x70]      ; 00435b16
    MOV EAX,dword ptr [EAX + 0x10c]     ; 00435b1a
    ADD EAX,EDX                         ; 00435b20
    MOV EAX,dword ptr [EAX]             ; 00435b22
    CDQ                                 ; 00435b24
    XOR EAX,EDX                         ; 00435b25
    SUB EAX,EDX                         ; 00435b27
    CMP ECX,EAX                         ; 00435b29
    JLE 0x00435b52                      ; 00435b2b
        ;   XREF to: 00435b52 (CONDITIONAL_JUMP)  ; LAB_00435b52
    MOV EAX,dword ptr [ESP + 0x100]     ; 00435b2d
    MOV ECX,dword ptr [ESP + 0x74]      ; 00435b34
    MOV EAX,dword ptr [EAX + 0x3aafc]   ; 00435b38
    ADD EAX,ECX                         ; 00435b3e
    MOV dword ptr [EAX],ESI             ; 00435b40
    MOV EAX,dword ptr [ESP + 0x100]     ; 00435b42
    MOV EAX,dword ptr [EAX + 0x3aafc]   ; 00435b49
    MOV dword ptr [EBX + EAX*0x1],EDI   ; 00435b4f
    MOV EAX,dword ptr [ESP + 0x100]     ; 00435b52
        ;   Label: LAB_00435b52
    INC EBP                             ; 00435b59
    MOV ECX,dword ptr [EAX + 0x104]     ; 00435b5a
    ADD EBX,0x4                         ; 00435b60
    CMP EBP,ECX                         ; 00435b63
    JL 0x00435a7e                       ; 00435b65
        ;   XREF to: 00435a7e (CONDITIONAL_JUMP)  ; LAB_00435a7e
    INC dword ptr [ESP + 0xd4]          ; 00435b6b
        ;   Label: LAB_00435b6b
    JMP 0x00435a39                      ; 00435b72
        ;   XREF to: 00435a39 (UNCONDITIONAL_JUMP)  ; LAB_00435a39
    MOV EAX,dword ptr [ESP + 0x100]     ; 00435b77
        ;   Label: LAB_00435b77
    MOV EBP,dword ptr [ESP + 0x104]     ; 00435b7e
    ADD EAX,0x3ab08                     ; 00435b85
    CMP EAX,EBP                         ; 00435b8a
    JZ 0x00435ba0                       ; 00435b8c
        ;   XREF to: 00435ba0 (CONDITIONAL_JUMP)  ; LAB_00435ba0
    MOV EDX,EBP                         ; 00435b8e
    MOV ECX,dword ptr [EDX]             ; 00435b90
    MOV dword ptr [EAX],ECX             ; 00435b92
    MOV ECX,dword ptr [EDX + 0x4]       ; 00435b94
    MOV dword ptr [EAX + 0x4],ECX       ; 00435b97
    MOV ECX,dword ptr [EDX + 0x8]       ; 00435b9a
    MOV dword ptr [EAX + 0x8],ECX       ; 00435b9d
    MOV EAX,dword ptr [ESP + 0x100]     ; 00435ba0
        ;   Label: LAB_00435ba0
    MOV EDX,dword ptr [ESP + 0x108]     ; 00435ba7
    ADD EAX,0x3ab14                     ; 00435bae
    CMP EAX,EDX                         ; 00435bb3
    JZ 0x00435bc7                       ; 00435bb5
        ;   XREF to: 00435bc7 (CONDITIONAL_JUMP)  ; LAB_00435bc7
    MOV ECX,dword ptr [EDX]             ; 00435bb7
    MOV dword ptr [EAX],ECX             ; 00435bb9
    MOV ECX,dword ptr [EDX + 0x4]       ; 00435bbb
    MOV dword ptr [EAX + 0x4],ECX       ; 00435bbe
    MOV ECX,dword ptr [EDX + 0x8]       ; 00435bc1
    MOV dword ptr [EAX + 0x8],ECX       ; 00435bc4
    MOV EAX,dword ptr [ESP + 0x100]     ; 00435bc7
        ;   Label: LAB_00435bc7
    MOV ECX,dword ptr [EAX + 0x104]     ; 00435bce
    XOR EBP,EBP                         ; 00435bd4
    TEST ECX,ECX                        ; 00435bd6
    JLE 0x00435c83                      ; 00435bd8
        ;   XREF to: 00435c83 (CONDITIONAL_JUMP)  ; LAB_00435c83
    LEA ESI,[EAX + 0x398]               ; 00435bde
    LEA ECX,[ESI + 0xc0]                ; 00435be4
    LEA EAX,[ESI + 0x18]                ; 00435bea
    LEA EDX,[ESI + 0xc]                 ; 00435bed
    IMUL EBX,EBP,0x11c                  ; 00435bf0
        ;   Label: LAB_00435bf0
    ADD EBX,ESI                         ; 00435bf6
    CMP EBX,ECX                         ; 00435bf8
    JZ 0x00435c0c                       ; 00435bfa
        ;   XREF to: 00435c0c (CONDITIONAL_JUMP)  ; LAB_00435c0c
    MOV EDI,dword ptr [ECX]             ; 00435bfc
    MOV dword ptr [EBX],EDI             ; 00435bfe
    MOV EDI,dword ptr [ECX + 0x4]       ; 00435c00
    MOV dword ptr [EBX + 0x4],EDI       ; 00435c03
    MOV EDI,dword ptr [ECX + 0x8]       ; 00435c06
    MOV dword ptr [EBX + 0x8],EDI       ; 00435c09
    MOV EBX,dword ptr [ESP + 0x100]     ; 00435c0c
        ;   Label: LAB_00435c0c
    MOV dword ptr [EDX + 0x8],0x0       ; 00435c13
    ADD EAX,0x11c                       ; 00435c1a
    MOV EDI,dword ptr [EDX + 0x8]       ; 00435c1f
    MOV dword ptr [EDX + 0x4],EDI       ; 00435c22
    MOV EDI,dword ptr [EDX + 0x4]       ; 00435c25
    MOV dword ptr [EDX],EDI             ; 00435c28
    MOV dword ptr [EAX + 0xfffffeec],0x0 ; 00435c2a
    ADD ECX,0x11c                       ; 00435c34
    MOV dword ptr [EAX + 0xfffffef8],0x0 ; 00435c3a
    INC EBP                             ; 00435c44
    FLD float ptr [EAX + 0xfffffef8]    ; 00435c45
    MOV EDI,dword ptr [EAX + 0xfffffeec] ; 00435c4b
    MOV dword ptr [EAX + 0xfffffee8],EDI ; 00435c51
    FST float ptr [EAX + 0xfffffef4]    ; 00435c57
    MOV EDI,dword ptr [EAX + 0xfffffee8] ; 00435c5d
    MOV dword ptr [EAX + 0xfffffee4],EDI ; 00435c63
    FSTP float ptr [EAX + 0xfffffef0]   ; 00435c69
    MOV EDI,dword ptr [EBX + 0x104]     ; 00435c6f
    ADD EDX,0x11c                       ; 00435c75
    CMP EBP,EDI                         ; 00435c7b
    JL 0x00435bf0                       ; 00435c7d
        ;   XREF to: 00435bf0 (CONDITIONAL_JUMP)  ; LAB_00435bf0
    MOV EBP,dword ptr [ESP + 0x100]     ; 00435c83
        ;   Label: LAB_00435c83
    PUSH EBP                            ; 00435c8a
    CALL FUN_004357b0                   ; 00435c8b
        ;   XREF to: 004357b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004357b0()
    ADD ESP,0x4                         ; 00435c90
    MOV ECX,dword ptr [EBP + 0x39ce8]   ; 00435c93
    XOR EAX,EAX                         ; 00435c99
    TEST ECX,ECX                        ; 00435c9b
    JLE 0x00435cd0                      ; 00435c9d
        ;   XREF to: 00435cd0 (CONDITIONAL_JUMP)  ; LAB_00435cd0
    MOV EBX,dword ptr [ESP + 0x100]     ; 00435c9f
    MOV EDX,dword ptr [EBP + 0x39cec]   ; 00435ca6
        ;   Label: LAB_00435ca6
    IMUL EDX,EDX,0x11c                  ; 00435cac
    ADD EDX,EBX                         ; 00435cb2
    MOV dword ptr [EDX + 0x40c],0x1     ; 00435cb4
    INC EAX                             ; 00435cbe
    MOV ESI,dword ptr [EBX + 0x39ce8]   ; 00435cbf
    ADD EBP,0x4                         ; 00435cc5
    CMP EAX,ESI                         ; 00435cc8
    JL 0x00435ca6                       ; 00435cca
        ;   XREF to: 00435ca6 (CONDITIONAL_JUMP)  ; LAB_00435ca6
    LEA EAX,[EAX]                       ; 00435ccc
    MOV EDI,dword ptr [ESP + 0x10c]     ; 00435cd0
        ;   Label: LAB_00435cd0
    TEST EDI,EDI                        ; 00435cd7
    JZ 0x00436295                       ; 00435cd9
        ;   XREF to: 00436295 (CONDITIONAL_JUMP)  ; LAB_00436295
    PUSH EDI                            ; 00435cdf
    CALL FUN_0051e020                   ; 00435ce0
        ;   XREF to: 0051e020 (UNCONDITIONAL_CALL)  ; undefined FUN_0051e020()
    ADD ESP,0x4                         ; 00435ce5
    PUSH EAX                            ; 00435ce8
    MOV EBX,EAX                         ; 00435ce9
    MOV dword ptr [ESP + 0x7c],EAX      ; 00435ceb
    CALL FUN_00518130                   ; 00435cef
        ;   XREF to: 00518130 (UNCONDITIONAL_CALL)  ; undefined FUN_00518130()
    ADD ESP,0x4                         ; 00435cf4
    MOV EAX,dword ptr [ESP + 0x100]     ; 00435cf7
    MOV EBP,EDI                         ; 00435cfe
    MOV EDX,dword ptr [EAX + 0x104]     ; 00435d00
    XOR EBP,EDI                         ; 00435d06
    TEST EDX,EDX                        ; 00435d08
    JLE 0x00435db4                      ; 00435d0a
        ;   XREF to: 00435db4 (CONDITIONAL_JUMP)  ; LAB_00435db4
    LEA EDX,[EAX + 0x398]               ; 00435d10
    LEA ESI,[EBX + 0x1c00]              ; 00435d16
    XOR EDI,EDI                         ; 00435d1c
    LEA ECX,[EDX + 0xc0]                ; 00435d1e
    FLD float ptr [ECX]                 ; 00435d24
        ;   Label: LAB_00435d24
    FADD float ptr [ESI]                ; 00435d26
    FSTP float ptr [ESP + 0x18]         ; 00435d28
    FLD float ptr [ECX + 0x4]           ; 00435d2c
    FADD float ptr [ESI + 0x4]          ; 00435d2f
    FSTP float ptr [ESP + 0x1c]         ; 00435d32
    FLD float ptr [ECX + 0x8]           ; 00435d36
    FADD float ptr [ESI + 0x8]          ; 00435d39
    LEA EAX,[ESP + 0x18]                ; 00435d3c
    FSTP float ptr [ESP + 0x20]         ; 00435d40
    CMP EDX,EAX                         ; 00435d44
    JZ 0x00435d5c                       ; 00435d46
        ;   XREF to: 00435d5c (CONDITIONAL_JUMP)  ; LAB_00435d5c
    MOV EAX,dword ptr [ESP + 0x18]      ; 00435d48
    MOV dword ptr [EDX],EAX             ; 00435d4c
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00435d4e
    MOV dword ptr [EDX + 0x4],EAX       ; 00435d52
    MOV EAX,dword ptr [ESP + 0x20]      ; 00435d55
    MOV dword ptr [EDX + 0x8],EAX       ; 00435d59
    MOV EBX,dword ptr [ESP + 0x100]     ; 00435d5c
        ;   Label: LAB_00435d5c
    MOV EBX,dword ptr [EBX + 0x10c]     ; 00435d63
    MOV EAX,EDX                         ; 00435d69
    ADD EBX,EDI                         ; 00435d6b
    ADD ECX,0x11c                       ; 00435d6d
    FLD float ptr [EAX]                 ; 00435d73
    FMUL float ptr [0x0059b360]         ; 00435d75 | DAT_0059b360
    FISTP dword ptr [EBX]               ; 00435d7b
    FLD float ptr [EAX + 0x4]           ; 00435d7d
    FMUL float ptr [0x0059b360]         ; 00435d80 | DAT_0059b360
    FISTP dword ptr [EBX + 0x4]         ; 00435d86
    FLD float ptr [EAX + 0x8]           ; 00435d89
    FMUL float ptr [0x0059b360]         ; 00435d8c | DAT_0059b360
    FISTP dword ptr [EBX + 0x8]         ; 00435d92
    MOV EAX,dword ptr [ESP + 0x100]     ; 00435d95
    INC EBP                             ; 00435d9c
    ADD EDX,0x11c                       ; 00435d9d
    MOV EBX,dword ptr [EAX + 0x104]     ; 00435da3
    ADD EDI,0xc                         ; 00435da9
    CMP EBP,EBX                         ; 00435dac
    JL 0x00435d24                       ; 00435dae
        ;   XREF to: 00435d24 (CONDITIONAL_JUMP)  ; LAB_00435d24
    MOV ESI,dword ptr [ESP + 0x10c]     ; 00435db4
        ;   Label: LAB_00435db4
    PUSH ESI                            ; 00435dbb
    CALL FUN_0051b800                   ; 00435dbc
        ;   XREF to: 0051b800 (UNCONDITIONAL_CALL)  ; undefined FUN_0051b800()
    ADD ESP,0x4                         ; 00435dc1
    PUSH ESI                            ; 00435dc4
    CALL FUN_0051d3c0                   ; 00435dc5
        ;   XREF to: 0051d3c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051d3c0()
    ADD ESP,0x4                         ; 00435dca
    MOV EAX,dword ptr [ESP + 0x100]     ; 00435dcd
    XOR EBP,EBP                         ; 00435dd4
    MOV EDX,dword ptr [EAX + 0x39ce8]   ; 00435dd6
    MOV dword ptr [ESP + 0xd0],EBP      ; 00435ddc
    TEST EDX,EDX                        ; 00435de3
    JLE 0x00435f47                      ; 00435de5
        ;   XREF to: 00435f47 (CONDITIONAL_JUMP)  ; LAB_00435f47
    LEA EAX,[ESI + 0xe80]               ; 00435deb
    MOV dword ptr [ESP + 0x88],EAX      ; 00435df1
    MOV EAX,dword ptr [ESP + 0x100]     ; 00435df8
    ADD EAX,0x398                       ; 00435dff
    MOV dword ptr [ESP + 0x7c],EAX      ; 00435e04
    MOV EAX,dword ptr [ESP + 0x100]     ; 00435e08
    MOV dword ptr [ESP + 0xb4],EAX      ; 00435e0f
    MOV EAX,dword ptr [ESP + 0xb4]      ; 00435e16
        ;   Label: LAB_00435e16
    IMUL EAX,dword ptr [EAX + 0x39cec],0x11c ; 00435e1d
    MOV ECX,0x7149f2ca                  ; 00435e27
    MOV EDX,dword ptr [ESP + 0x7c]      ; 00435e2c
    XOR EBX,EBX                         ; 00435e30
    ADD EDX,EAX                         ; 00435e32
    MOV EAX,dword ptr [ESP + 0x78]      ; 00435e34
    MOV dword ptr [ESP + 0xe8],ECX      ; 00435e38
    MOV dword ptr [ESP + 0xdc],EBX      ; 00435e3f
    MOV ESI,dword ptr [EAX + 0x2c]      ; 00435e46
    MOV dword ptr [ESP + 0xe0],EDX      ; 00435e49
    TEST ESI,ESI                        ; 00435e50
    JLE 0x004361bb                      ; 00435e52
        ;   XREF to: 004361bb (CONDITIONAL_JUMP)  ; LAB_004361bb
    MOV dword ptr [ESP + 0xb0],EBX      ; 00435e58
    MOV EAX,dword ptr [ESP + 0x78]      ; 00435e5f
        ;   Label: LAB_00435e5f
    MOV EDX,dword ptr [ESP + 0xb0]      ; 00435e63
    XOR EBX,EBX                         ; 00435e6a
    MOV EAX,dword ptr [EAX + 0x40]      ; 00435e6c
    MOV dword ptr [ESP + 0x30],EBX      ; 00435e6f
    MOV dword ptr [ESP + 0x34],EBX      ; 00435e73
    ADD EDX,EAX                         ; 00435e77
    MOV dword ptr [ESP + 0x38],EBX      ; 00435e79
    MOV dword ptr [ESP + 0x80],EDX      ; 00435e7d
    LEA EBX,[EDX + 0x4]                 ; 00435e84
    LEA EDI,[EDX + 0x10]                ; 00435e87
    XOR EBP,EBP                         ; 00435e8a
    MOV ESI,EDX                         ; 00435e8c
    MOV EDX,dword ptr [ESP + 0x80]      ; 00435e8e
        ;   Label: LAB_00435e8e
    XOR EAX,EAX                         ; 00435e95
    MOV AL,byte ptr [EDX]               ; 00435e97
    CMP EBP,EAX                         ; 00435e99
    JGE 0x00436122                      ; 00435e9b
        ;   XREF to: 00436122 (CONDITIONAL_JUMP)  ; LAB_00436122
    XOR EAX,EAX                         ; 00435ea1
    MOV AL,byte ptr [ESI + 0x1]         ; 00435ea3
    IMUL EAX,EAX,0x30                   ; 00435ea6
    ADD EAX,dword ptr [ESP + 0x88]      ; 00435ea9
    PUSH EAX                            ; 00435eb0
    PUSH EDI                            ; 00435eb1
    LEA EAX,[ESP + 0x44]                ; 00435eb2
    PUSH EAX                            ; 00435eb6
    CALL FUN_0055a8b0                   ; 00435eb7
        ;   XREF to: 0055a8b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0055a8b0()
    FLD float ptr [EAX]                 ; 00435ebc
    FMUL float ptr [EBX]                ; 00435ebe
    ADD ESP,0xc                         ; 00435ec0
    FSTP float ptr [ESP + 0x54]         ; 00435ec3
    FLD float ptr [EAX + 0x4]           ; 00435ec7
    FMUL float ptr [EBX]                ; 00435eca
    FSTP float ptr [ESP + 0x58]         ; 00435ecc
    FLD float ptr [EAX + 0x8]           ; 00435ed0
    FMUL float ptr [EBX]                ; 00435ed3
    INC ESI                             ; 00435ed5
    ADD EBX,0x4                         ; 00435ed6
    INC EBP                             ; 00435ed9
    ADD EDI,0xc                         ; 00435eda
    FLD float ptr [ESP + 0x30]          ; 00435edd
    FLD float ptr [ESP + 0x34]          ; 00435ee1
    FLD float ptr [ESP + 0x38]          ; 00435ee5
    FXCH ST2                            ; 00435ee9
    FADD float ptr [ESP + 0x54]         ; 00435eeb
    FXCH                                ; 00435eef
    FADD float ptr [ESP + 0x58]         ; 00435ef1
    FXCH ST3                            ; 00435ef5
    FSTP float ptr [ESP + 0x5c]         ; 00435ef7
    FSTP float ptr [ESP + 0x30]         ; 00435efb
    FADD float ptr [ESP + 0x5c]         ; 00435eff
    FXCH                                ; 00435f03
    FSTP float ptr [ESP + 0x34]         ; 00435f05
    FSTP float ptr [ESP + 0x38]         ; 00435f09
    JMP 0x00435e8e                      ; 00435f0d
        ;   XREF to: 00435e8e (UNCONDITIONAL_JUMP)  ; LAB_00435e8e
    MOV EBX,dword ptr [ESP + 0xb4]      ; 00435f12
        ;   Label: LAB_00435f12
    MOV ESI,dword ptr [ESP + 0xd0]      ; 00435f19
    MOV EDX,dword ptr [ESP + 0x100]     ; 00435f20
    ADD EBX,0x4                         ; 00435f27
    INC ESI                             ; 00435f2a
    MOV EDI,dword ptr [EDX + 0x39ce8]   ; 00435f2b
    MOV dword ptr [ESP + 0xb4],EBX      ; 00435f31
    MOV dword ptr [ESP + 0xd0],ESI      ; 00435f38
    CMP ESI,EDI                         ; 00435f3f
    JL 0x00435e16                       ; 00435f41
        ;   XREF to: 00435e16 (CONDITIONAL_JUMP)  ; LAB_00435e16
    MOV EAX,dword ptr [ESP + 0x100]     ; 00435f47
        ;   Label: LAB_00435f47
    MOV EBP,dword ptr [EAX + 0x37b4c]   ; 00435f4e
    XOR EBX,EBX                         ; 00435f54
    TEST EBP,EBP                        ; 00435f56
    JLE 0x00435f80                      ; 00435f58
        ;   XREF to: 00435f80 (CONDITIONAL_JUMP)  ; LAB_00435f80
    MOV EDI,dword ptr [ESP + 0x10c]     ; 00435f5a
    MOV EBP,dword ptr [ESP + 0x100]     ; 00435f61
    PUSH EDI                            ; 00435f68
        ;   Label: LAB_00435f68
    PUSH EBX                            ; 00435f69
    PUSH EBP                            ; 00435f6a
    CALL FUN_004363e0                   ; 00435f6b
        ;   XREF to: 004363e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004363e0()
    INC EBX                             ; 00435f70
    MOV EDX,dword ptr [EBP + 0x37b4c]   ; 00435f71
    ADD ESP,0xc                         ; 00435f77
    CMP EBX,EDX                         ; 00435f7a
    JL 0x00435f68                       ; 00435f7c
        ;   XREF to: 00435f68 (CONDITIONAL_JUMP)  ; LAB_00435f68
    MOV EAX,EAX                         ; 00435f7e
    MOV EAX,dword ptr [ESP + 0x100]     ; 00435f80
        ;   Label: LAB_00435f80
    XOR ECX,ECX                         ; 00435f87
    MOV EBX,dword ptr [EAX + 0x39ce8]   ; 00435f89
    MOV dword ptr [ESP + 0x6c],ECX      ; 00435f8f
    TEST EBX,EBX                        ; 00435f93
    JLE 0x00436285                      ; 00435f95
        ;   XREF to: 00436285 (CONDITIONAL_JUMP)  ; LAB_00436285
    MOV EAX,dword ptr [ESP + 0x10c]     ; 00435f9b
    ADD EAX,0xe80                       ; 00435fa2
    MOV dword ptr [ESP + 0xa4],EAX      ; 00435fa7
    MOV EAX,dword ptr [ESP + 0x100]     ; 00435fae
    ADD EAX,0x398                       ; 00435fb5
    MOV dword ptr [ESP + 0x94],EAX      ; 00435fba
    MOV EAX,dword ptr [ESP + 0x100]     ; 00435fc1
    MOV dword ptr [ESP + 0xc4],ECX      ; 00435fc8
    MOV dword ptr [ESP + 0xc8],EAX      ; 00435fcf
    MOV EAX,dword ptr [ESP + 0xc8]      ; 00435fd6
        ;   Label: LAB_00435fd6
    IMUL EAX,dword ptr [EAX + 0x39cec],0x11c ; 00435fdd
    MOV ESI,dword ptr [ESP + 0x100]     ; 00435fe7
    XOR ECX,ECX                         ; 00435fee
    MOV EDX,dword ptr [ESP + 0x94]      ; 00435ff0
    MOV dword ptr [ESP + 0xcc],ECX      ; 00435ff7
    ADD EDX,EAX                         ; 00435ffe
    MOV EAX,dword ptr [ESP + 0xc4]      ; 00436000
    MOV dword ptr [ESP + 0xbc],ECX      ; 00436007
    ADD EAX,ESI                         ; 0043600e
    MOV dword ptr [ESP + 0x90],EDX      ; 00436010
    MOV dword ptr [ESP + 0xc0],EAX      ; 00436017
    MOV EAX,dword ptr [ESP + 0x78]      ; 0043601e
        ;   Label: LAB_0043601e
    MOV EDI,dword ptr [ESP + 0xcc]      ; 00436022
    CMP EDI,dword ptr [EAX]             ; 00436029
    JGE 0x00436245                      ; 0043602b
        ;   XREF to: 00436245 (CONDITIONAL_JUMP)  ; LAB_00436245
    MOV EBP,0x7149f2ca                  ; 00436031
    XOR EAX,EAX                         ; 00436036
    XOR EDX,EDX                         ; 00436038
    MOV dword ptr [ESP + 0x9c],EBP      ; 0043603a
    MOV dword ptr [ESP + 0xd8],EAX      ; 00436041
    MOV EAX,dword ptr [ESP + 0xbc]      ; 00436048
    MOV dword ptr [ESP + 0xb8],EDX      ; 0043604f
    MOV dword ptr [ESP + 0xac],EAX      ; 00436056
    MOV EAX,dword ptr [ESP + 0x78]      ; 0043605d
        ;   Label: LAB_0043605d
    ADD EAX,dword ptr [ESP + 0xac]      ; 00436061
    MOV EDX,dword ptr [ESP + 0xd8]      ; 00436068
    CMP EDX,dword ptr [EAX + 0x2c]      ; 0043606f
    JGE 0x00436304                      ; 00436072
        ;   XREF to: 00436304 (CONDITIONAL_JUMP)  ; LAB_00436304
    MOV EDX,dword ptr [ESP + 0xb8]      ; 00436078
    MOV EAX,dword ptr [EAX + 0x40]      ; 0043607f
    XOR ESI,ESI                         ; 00436082
    ADD EDX,EAX                         ; 00436084
    XOR EAX,EAX                         ; 00436086
    MOV dword ptr [ESP + 0xa0],EDX      ; 00436088
    MOV dword ptr [ESP + 0xc],EAX       ; 0043608f
    LEA EBX,[EDX + 0x4]                 ; 00436093
    MOV dword ptr [ESP + 0x10],EAX      ; 00436096
    LEA EDI,[EDX + 0x10]                ; 0043609a
    MOV dword ptr [ESP + 0x14],EAX      ; 0043609d
    MOV EBP,EDX                         ; 004360a1
    MOV EDX,dword ptr [ESP + 0xa0]      ; 004360a3
        ;   Label: LAB_004360a3
    XOR EAX,EAX                         ; 004360aa
    MOV AL,byte ptr [EDX]               ; 004360ac
    CMP ESI,EAX                         ; 004360ae
    JGE 0x0043634a                      ; 004360b0
        ;   XREF to: 0043634a (CONDITIONAL_JUMP)  ; LAB_0043634a
    XOR EAX,EAX                         ; 004360b6
    MOV AL,byte ptr [EBP + 0x1]         ; 004360b8
    IMUL EAX,EAX,0x30                   ; 004360bb
    ADD EAX,dword ptr [ESP + 0xa4]      ; 004360be
    PUSH EAX                            ; 004360c5
    PUSH EDI                            ; 004360c6
    LEA EAX,[ESP + 0x2c]                ; 004360c7
    PUSH EAX                            ; 004360cb
    CALL FUN_0055a8b0                   ; 004360cc
        ;   XREF to: 0055a8b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0055a8b0()
    FLD float ptr [EAX]                 ; 004360d1
    FMUL float ptr [EBX]                ; 004360d3
    ADD ESP,0xc                         ; 004360d5
    FSTP float ptr [ESP]                ; 004360d8
    FLD float ptr [EAX + 0x4]           ; 004360db
    FMUL float ptr [EBX]                ; 004360de
    FSTP float ptr [ESP + 0x4]          ; 004360e0
    FLD float ptr [EAX + 0x8]           ; 004360e4
    FMUL float ptr [EBX]                ; 004360e7
    INC EBP                             ; 004360e9
    ADD EBX,0x4                         ; 004360ea
    INC ESI                             ; 004360ed
    ADD EDI,0xc                         ; 004360ee
    FLD float ptr [ESP + 0xc]           ; 004360f1
    FLD float ptr [ESP + 0x10]          ; 004360f5
    FLD float ptr [ESP + 0x14]          ; 004360f9
    FXCH ST2                            ; 004360fd
    FADD float ptr [ESP]                ; 004360ff
    FXCH                                ; 00436102
    FADD float ptr [ESP + 0x4]          ; 00436104
    FXCH ST3                            ; 00436108
    FSTP float ptr [ESP + 0x8]          ; 0043610a
    FSTP float ptr [ESP + 0xc]          ; 0043610e
    FADD float ptr [ESP + 0x8]          ; 00436112
    FXCH                                ; 00436116
    FSTP float ptr [ESP + 0x10]         ; 00436118
    FSTP float ptr [ESP + 0x14]         ; 0043611c
    JMP 0x004360a3                      ; 00436120
        ;   XREF to: 004360a3 (UNCONDITIONAL_JUMP)  ; LAB_004360a3
    MOV EAX,dword ptr [ESP + 0xe0]      ; 00436122
        ;   Label: LAB_00436122
    FLD float ptr [EAX]                 ; 00436129
    FSUB float ptr [ESP + 0x30]         ; 0043612b
    FSTP float ptr [ESP + 0x60]         ; 0043612f
    FLD float ptr [EAX + 0x4]           ; 00436133
    FSUB float ptr [ESP + 0x34]         ; 00436136
    FST float ptr [ESP + 0x64]          ; 0043613a
    FMUL float ptr [ESP + 0x64]         ; 0043613e
    FLD float ptr [ESP + 0x60]          ; 00436142
    FMUL ST0                            ; 00436146
    FLD float ptr [EAX + 0x8]           ; 00436148
    FSUB float ptr [ESP + 0x38]         ; 0043614b
    FXCH                                ; 0043614f
    FADDP ST2,ST0                       ; 00436151
    FST float ptr [ESP + 0x68]          ; 00436153
    FMUL float ptr [ESP + 0x68]         ; 00436157
    FADDP                               ; 0043615b
    FST float ptr [ESP + 0x8c]          ; 0043615d
    FCOMP float ptr [ESP + 0xe8]        ; 00436164
    FNSTSW AX                           ; 0043616b
    SAHF                                ; 0043616d
    JNC 0x0043618c                      ; 0043616e
        ;   XREF to: 0043618c (CONDITIONAL_JUMP)  ; LAB_0043618c
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00436170
    MOV dword ptr [ESP + 0xe8],EAX      ; 00436177
    MOV EAX,dword ptr [ESP + 0xdc]      ; 0043617e
    MOV dword ptr [ESP + 0xe4],EAX      ; 00436185
    MOV ESI,dword ptr [ESP + 0xb0]      ; 0043618c
        ;   Label: LAB_0043618c
    MOV EDI,dword ptr [ESP + 0xdc]      ; 00436193
    MOV EDX,dword ptr [ESP + 0x78]      ; 0043619a
    ADD ESI,0x34                        ; 0043619e
    INC EDI                             ; 004361a1
    MOV EBP,dword ptr [EDX + 0x2c]      ; 004361a2
    MOV dword ptr [ESP + 0xb0],ESI      ; 004361a5
    MOV dword ptr [ESP + 0xdc],EDI      ; 004361ac
    CMP EDI,EBP                         ; 004361b3
    JL 0x00435e5f                       ; 004361b5
        ;   XREF to: 00435e5f (CONDITIONAL_JUMP)  ; LAB_00435e5f
    IMUL EBP,dword ptr [ESP + 0xe4],0x34 ; 004361bb
        ;   Label: LAB_004361bb
    MOV EAX,dword ptr [ESP + 0x78]      ; 004361c3
    MOV EAX,dword ptr [EAX + 0x40]      ; 004361c7
    ADD EBP,EAX                         ; 004361ca
    XOR EAX,EAX                         ; 004361cc
    MOV EDX,dword ptr [ESP + 0xe0]      ; 004361ce
    MOV AL,byte ptr [EBP]               ; 004361d5
    XOR EDI,EDI                         ; 004361d8
    MOV dword ptr [EDX + 0xdc],EAX      ; 004361da
    TEST EAX,EAX                        ; 004361e0
    JLE 0x00435f12                      ; 004361e2
        ;   XREF to: 00435f12 (CONDITIONAL_JUMP)  ; LAB_00435f12
    LEA EAX,[EDX + 0xec]                ; 004361e8
    LEA EBX,[EBP + 0x10]                ; 004361ee
    MOV ESI,dword ptr [ESP + 0xe0]      ; 004361f1
    MOV EDX,EBP                         ; 004361f8
    XOR ECX,ECX                         ; 004361fa
        ;   Label: LAB_004361fa
    MOV CL,byte ptr [EDX + 0x1]         ; 004361fc
    MOV dword ptr [ESI + 0xe0],ECX      ; 004361ff
    CMP EAX,EBX                         ; 00436205
    JZ 0x00436219                       ; 00436207
        ;   XREF to: 00436219 (CONDITIONAL_JUMP)  ; LAB_00436219
    MOV ECX,dword ptr [EBX]             ; 00436209
    MOV dword ptr [EAX],ECX             ; 0043620b
    MOV ECX,dword ptr [EBX + 0x4]       ; 0043620d
    MOV dword ptr [EAX + 0x4],ECX       ; 00436210
    MOV ECX,dword ptr [EBX + 0x8]       ; 00436213
    MOV dword ptr [EAX + 0x8],ECX       ; 00436216
    FLD float ptr [EBP + 0x4]           ; 00436219
        ;   Label: LAB_00436219
    MOV ECX,dword ptr [ESP + 0xe0]      ; 0043621c
    ADD EAX,0xc                         ; 00436223
    ADD EBX,0xc                         ; 00436226
    INC EDX                             ; 00436229
    ADD ESI,0x4                         ; 0043622a
    ADD EBP,0x4                         ; 0043622d
    INC EDI                             ; 00436230
    FSTP float ptr [ESI + 0x10c]        ; 00436231
    CMP EDI,dword ptr [ECX + 0xdc]      ; 00436237
    JGE 0x00435f12                      ; 0043623d
        ;   XREF to: 00435f12 (CONDITIONAL_JUMP)  ; LAB_00435f12
    JMP 0x004361fa                      ; 00436243
        ;   XREF to: 004361fa (UNCONDITIONAL_JUMP)  ; LAB_004361fa
    MOV ECX,dword ptr [ESP + 0xc4]      ; 00436245
        ;   Label: LAB_00436245
    MOV EBX,dword ptr [ESP + 0xc8]      ; 0043624c
    MOV ESI,dword ptr [ESP + 0x6c]      ; 00436253
    MOV EDX,dword ptr [ESP + 0x100]     ; 00436257
    ADD ECX,0x4                         ; 0043625e
    ADD EBX,0x4                         ; 00436261
    INC ESI                             ; 00436264
    MOV EDI,dword ptr [EDX + 0x39ce8]   ; 00436265
    MOV dword ptr [ESP + 0xc4],ECX      ; 0043626b
    MOV dword ptr [ESP + 0xc8],EBX      ; 00436272
    MOV dword ptr [ESP + 0x6c],ESI      ; 00436279
    CMP ESI,EDI                         ; 0043627d
    JL 0x00435fd6                       ; 0043627f
        ;   XREF to: 00435fd6 (CONDITIONAL_JUMP)  ; LAB_00435fd6
    MOV EBP,dword ptr [ESP + 0x10c]     ; 00436285
        ;   Label: LAB_00436285
    PUSH EBP                            ; 0043628c
    CALL FUN_0051b880                   ; 0043628d
        ;   XREF to: 0051b880 (UNCONDITIONAL_CALL)  ; undefined FUN_0051b880()
    ADD ESP,0x4                         ; 00436292
    MOV EAX,dword ptr [ESP + 0x100]     ; 00436295
        ;   Label: LAB_00436295
    MOV ECX,dword ptr [EAX + 0x104]     ; 0043629c
    XOR EDX,EDX                         ; 004362a2
    TEST ECX,ECX                        ; 004362a4
    JLE 0x004362d0                      ; 004362a6
        ;   XREF to: 004362d0 (CONDITIONAL_JUMP)  ; LAB_004362d0
    MOV ECX,dword ptr [ESP + 0x100]     ; 004362a8
    MOV dword ptr [EAX + 0x470],0xffffffff ; 004362af
        ;   Label: LAB_004362af
    INC EDX                             ; 004362b9
    MOV EBX,dword ptr [ECX + 0x104]     ; 004362ba
    ADD EAX,0x11c                       ; 004362c0
    CMP EDX,EBX                         ; 004362c5
    JL 0x004362af                       ; 004362c7
        ;   XREF to: 004362af (CONDITIONAL_JUMP)  ; LAB_004362af
    LEA EAX,[EAX]                       ; 004362c9
    NOP                                 ; 004362cf
    MOV EAX,dword ptr [ESP + 0x100]     ; 004362d0
        ;   Label: LAB_004362d0
    MOV dword ptr [EAX + 0x3ab2c],0x0   ; 004362d7
    MOV EDX,dword ptr [EAX + 0x3ab2c]   ; 004362e1
    MOV dword ptr [EAX + 0x3ab28],EDX   ; 004362e7
    MOV EDX,dword ptr [EAX + 0x3ab28]   ; 004362ed
    MOV dword ptr [EAX + 0x3ab24],EDX   ; 004362f3
    ADD ESP,0xec                        ; 004362f9
    POP EBP                             ; 004362ff
    POP EDI                             ; 00436300
    POP ESI                             ; 00436301
    POP EBX                             ; 00436302
    RET                                 ; 00436303
    MOV ESI,dword ptr [ESP + 0xbc]      ; 00436304
        ;   Label: LAB_00436304
    MOV EDX,dword ptr [ESP + 0xc0]      ; 0043630b
    MOV EBP,dword ptr [ESP + 0xcc]      ; 00436312
    MOV EAX,dword ptr [ESP + 0x98]      ; 00436319
    ADD ESI,0x4                         ; 00436320
    LEA EDI,[EDX + 0x190]               ; 00436323
    INC EBP                             ; 00436329
    MOV dword ptr [EDX + 0x39e7c],EAX   ; 0043632a
    MOV dword ptr [ESP + 0xbc],ESI      ; 00436330
    MOV dword ptr [ESP + 0xc0],EDI      ; 00436337
    MOV dword ptr [ESP + 0xcc],EBP      ; 0043633e
    JMP 0x0043601e                      ; 00436345
        ;   XREF to: 0043601e (UNCONDITIONAL_JUMP)  ; LAB_0043601e
    MOV EAX,dword ptr [ESP + 0x90]      ; 0043634a
        ;   Label: LAB_0043634a
    FLD float ptr [EAX]                 ; 00436351
    FSUB float ptr [ESP + 0xc]          ; 00436353
    FSTP float ptr [ESP + 0x48]         ; 00436357
    FLD float ptr [EAX + 0x4]           ; 0043635b
    FSUB float ptr [ESP + 0x10]         ; 0043635e
    FST float ptr [ESP + 0x4c]          ; 00436362
    FMUL float ptr [ESP + 0x4c]         ; 00436366
    FLD float ptr [ESP + 0x48]          ; 0043636a
    FMUL ST0                            ; 0043636e
    FLD float ptr [EAX + 0x8]           ; 00436370
    FSUB float ptr [ESP + 0x14]         ; 00436373
    FXCH                                ; 00436377
    FADDP ST2,ST0                       ; 00436379
    FST float ptr [ESP + 0x50]          ; 0043637b
    FMUL float ptr [ESP + 0x50]         ; 0043637f
    FADDP                               ; 00436383
    FST float ptr [ESP + 0xa8]          ; 00436385
    FCOMP float ptr [ESP + 0x9c]        ; 0043638c
    FNSTSW AX                           ; 00436393
    SAHF                                ; 00436395
    JNC 0x004363b4                      ; 00436396
        ;   XREF to: 004363b4 (CONDITIONAL_JUMP)  ; LAB_004363b4
    MOV EAX,dword ptr [ESP + 0xa8]      ; 00436398
    MOV dword ptr [ESP + 0x9c],EAX      ; 0043639f
    MOV EAX,dword ptr [ESP + 0xd8]      ; 004363a6
    MOV dword ptr [ESP + 0x98],EAX      ; 004363ad
    MOV ESI,dword ptr [ESP + 0xd8]      ; 004363b4
        ;   Label: LAB_004363b4
    MOV EBX,dword ptr [ESP + 0xb8]      ; 004363bb
    INC ESI                             ; 004363c2
    ADD EBX,0x34                        ; 004363c3
    MOV dword ptr [ESP + 0xd8],ESI      ; 004363c6
    MOV dword ptr [ESP + 0xb8],EBX      ; 004363cd
    JMP 0x0043605d                      ; 004363d4
        ;   XREF to: 0043605d (UNCONDITIONAL_JUMP)  ; LAB_0043605d

