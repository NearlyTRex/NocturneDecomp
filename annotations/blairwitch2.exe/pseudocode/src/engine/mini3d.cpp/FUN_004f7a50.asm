; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004f7a50(int param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   engine_mini3d.cpp_FUN_004f40a0 at 004f4367
;   engine_mini3d.cpp_FUN_004f6be0 at 004f6ce8
;
; Referenced Globals:
;   undefined4 DAT_006141c0
;   undefined4 DAT_01c38b40
;   undefined4 DAT_01d17ab4
;   undefined4 DAT_01d17ab8
;   undefined4 DAT_01d17ac0
;   undefined4 DAT_01d17ac4
;   undefined4 DAT_01d17ac8
;   undefined4 DAT_01d17ad0
;   undefined4 DAT_01d17ad4
;   undefined4 DAT_01d17ad8
;   undefined4 DAT_01d17adc
;   undefined4 DAT_01d17ae0
;   undefined4 DAT_01d17ae4
;   undefined4 DAT_01d17b08
;   undefined4 DAT_01d17fb8
;   ... and 1 more
;
; Called Functions:
;   engine_mini3d.cpp_FUN_004f6df0
;   engine_special.cpp_FUN_0055c45c
;   engine_special.cpp_FUN_0055ca23
;   engine_special.cpp_renderPerspectiveCorrectScanline16_FUN_0055d2e9
;   engine_special.cpp_renderPerspectiveCorrectScanline32_FUN_0055d0b3
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f7a50
        ;   Label: engine_mini3d.cpp_FUN_004f7a50
    PUSH ESI                            ; 004f7a51
    PUSH EDI                            ; 004f7a52
    PUSH EBP                            ; 004f7a53
    SUB ESP,0x18                        ; 004f7a54
    MOV EBP,dword ptr [0x01d17ab4]      ; 004f7a57 | DAT_01d17ab4
    MOV EDI,dword ptr [ESP + 0x30]      ; 004f7a5d
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004f7a61
    FLD float ptr [EAX + 0x54]          ; 004f7a65
    FLD float ptr [EAX + 0x98]          ; 004f7a68
    FSUB float ptr [EAX + 0x58]         ; 004f7a6e
    FXCH                                ; 004f7a71
    FSUB float ptr [EAX + 0x14]         ; 004f7a73
    FMULP                               ; 004f7a76
    FLD float ptr [EAX + 0x94]          ; 004f7a78
    FLD float ptr [EAX + 0x58]          ; 004f7a7e
    FSUB float ptr [EAX + 0x18]         ; 004f7a81
    FXCH                                ; 004f7a84
    FSUB float ptr [EAX + 0x54]         ; 004f7a86
    FMULP                               ; 004f7a89
    FCOMPP                              ; 004f7a8b
    FNSTSW AX                           ; 004f7a8d
    SAHF                                ; 004f7a8f
    JNC 0x004f7d90                      ; 004f7a90
        ;   XREF to: 004f7d90 (CONDITIONAL_JUMP)  ; LAB_004f7d90
    MOV EDX,0x4b0                       ; 004f7a96
    XOR ECX,ECX                         ; 004f7a9b
    XOR EBP,EBP                         ; 004f7a9d
    XOR EBX,EBX                         ; 004f7a9f
    MOV dword ptr [0x01d17fbc],ECX      ; 004f7aa1 | DAT_01d17fbc
    MOV dword ptr [0x01d17ab4],ECX      ; 004f7aa7 | DAT_01d17ab4
    MOV dword ptr [0x01d17fb8],EDX      ; 004f7aad | DAT_01d17fb8
    TEST EDI,EDI                        ; 004f7ab3
    JLE 0x004f7adf                      ; 004f7ab5
        ;   XREF to: 004f7adf (CONDITIONAL_JUMP)  ; LAB_004f7adf
    MOV ESI,dword ptr [ESP + 0x2c]      ; 004f7ab7
    LEA EAX,[EBX + 0x1]                 ; 004f7abb
        ;   Label: LAB_004f7abb
    CMP EAX,EDI                         ; 004f7abe
    JL 0x004f7ac4                       ; 004f7ac0
        ;   XREF to: 004f7ac4 (CONDITIONAL_JUMP)  ; LAB_004f7ac4
    XOR EAX,EAX                         ; 004f7ac2
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004f7ac4
        ;   Label: LAB_004f7ac4
    SHL EAX,0x6                         ; 004f7ac8
    ADD EAX,EDX                         ; 004f7acb
    PUSH EAX                            ; 004f7acd
    PUSH ESI                            ; 004f7ace
    INC EBX                             ; 004f7acf
    CALL engine_mini3d.cpp_FUN_004f6df0 ; 004f7ad0
        ;   XREF to: 004f6df0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f6df0()
    ADD ESP,0x8                         ; 004f7ad5
    ADD ESI,0x40                        ; 004f7ad8
    CMP EBX,EDI                         ; 004f7adb
    JL 0x004f7abb                       ; 004f7add
        ;   XREF to: 004f7abb (CONDITIONAL_JUMP)  ; LAB_004f7abb
    MOV EAX,0x1d17ab8                   ; 004f7adf
        ;   Label: LAB_004f7adf
    MOV EBP,dword ptr [0x01d17ab4]      ; 004f7ae4 | DAT_01d17ab4
    MOV ESI,dword ptr [0x01d17fb8]      ; 004f7aea | DAT_01d17fb8
    XOR EDX,EDX                         ; 004f7af0
    TEST EBP,EBP                        ; 004f7af2
    JLE 0x004f7cfe                      ; 004f7af4
        ;   XREF to: 004f7cfe (CONDITIONAL_JUMP)  ; LAB_004f7cfe
    CMP ESI,dword ptr [EAX]             ; 004f7afa | DAT_01d17ab8 | DAT_01d17b08
        ;   Label: LAB_004f7afa
    JNZ 0x004f7cf2                      ; 004f7afc
        ;   XREF to: 004f7cf2 (CONDITIONAL_JUMP)  ; LAB_004f7cf2
    TEST EAX,EAX                        ; 004f7b02
    JZ 0x004f7cf2                       ; 004f7b04
        ;   XREF to: 004f7cf2 (CONDITIONAL_JUMP)  ; LAB_004f7cf2
    MOV dword ptr [ESP + 0x10],EAX      ; 004f7b0a | DAT_01d17ab8 | DAT_01d17b08
        ;   Label: LAB_004f7b0a
    TEST EAX,EAX                        ; 004f7b0e
    JZ 0x004f7d90                       ; 004f7b10
        ;   XREF to: 004f7d90 (CONDITIONAL_JUMP)  ; LAB_004f7d90
    MOV ECX,dword ptr [0x01d17fb8]      ; 004f7b16 | DAT_01d17fb8
    MOV EBX,EAX                         ; 004f7b1c
    XOR EDX,EDX                         ; 004f7b1e
    MOV EAX,0x1d17ab8                   ; 004f7b20
    TEST EBP,EBP                        ; 004f7b25
    JLE 0x004f7d11                      ; 004f7b27
        ;   XREF to: 004f7d11 (CONDITIONAL_JUMP)  ; LAB_004f7d11
    CMP ECX,dword ptr [EAX]             ; 004f7b2d | DAT_01d17ab8 | DAT_01d17b08
        ;   Label: LAB_004f7b2d
    JNZ 0x004f7d05                      ; 004f7b2f
        ;   XREF to: 004f7d05 (CONDITIONAL_JUMP)  ; LAB_004f7d05
    CMP EAX,EBX                         ; 004f7b35
    JZ 0x004f7d05                       ; 004f7b37
        ;   XREF to: 004f7d05 (CONDITIONAL_JUMP)  ; LAB_004f7d05
    MOV dword ptr [ESP + 0x14],EAX      ; 004f7b3d | DAT_01d17ab8 | DAT_01d17b08
        ;   Label: LAB_004f7b3d
    TEST EAX,EAX                        ; 004f7b41
    JZ 0x004f7d90                       ; 004f7b43
        ;   XREF to: 004f7d90 (CONDITIONAL_JUMP)  ; LAB_004f7d90
    MOV EAX,[0x01d17fb8]                ; 004f7b49 | DAT_01d17fb8
    MOV dword ptr [ESP + 0xc],EAX       ; 004f7b4e
    MOV EDX,dword ptr [ESP + 0x10]      ; 004f7b52
        ;   Label: LAB_004f7b52
    MOV EAX,dword ptr [ESP + 0xc]       ; 004f7b56
    CMP EAX,dword ptr [EDX + 0x4]       ; 004f7b5a
    JL 0x004f7b96                       ; 004f7b5d
        ;   XREF to: 004f7b96 (CONDITIONAL_JUMP)  ; LAB_004f7b96
    MOV EBX,dword ptr [ESP + 0x14]      ; 004f7b5f
    MOV ECX,EAX                         ; 004f7b63
    MOV dword ptr [EDX],0xffffffff      ; 004f7b65
    MOV EAX,0x1d17ab8                   ; 004f7b6b
    XOR EDX,EDX                         ; 004f7b70
    TEST EBP,EBP                        ; 004f7b72
    JLE 0x004f7d24                      ; 004f7b74
        ;   XREF to: 004f7d24 (CONDITIONAL_JUMP)  ; LAB_004f7d24
    CMP ECX,dword ptr [EAX]             ; 004f7b7a | DAT_01d17ab8 | DAT_01d17b08
        ;   Label: LAB_004f7b7a
    JNZ 0x004f7d18                      ; 004f7b7c
        ;   XREF to: 004f7d18 (CONDITIONAL_JUMP)  ; LAB_004f7d18
    CMP EAX,EBX                         ; 004f7b82
    JZ 0x004f7d18                       ; 004f7b84
        ;   XREF to: 004f7d18 (CONDITIONAL_JUMP)  ; LAB_004f7d18
    MOV dword ptr [ESP + 0x10],EAX      ; 004f7b8a | DAT_01d17ab8 | DAT_01d17b08
        ;   Label: LAB_004f7b8a
    TEST EAX,EAX                        ; 004f7b8e
    JZ 0x004f7d90                       ; 004f7b90
        ;   XREF to: 004f7d90 (CONDITIONAL_JUMP)  ; LAB_004f7d90
    MOV EDX,dword ptr [ESP + 0x14]      ; 004f7b96
        ;   Label: LAB_004f7b96
    MOV EAX,dword ptr [ESP + 0xc]       ; 004f7b9a
    CMP EAX,dword ptr [EDX + 0x4]       ; 004f7b9e
    JL 0x004f7bda                       ; 004f7ba1
        ;   XREF to: 004f7bda (CONDITIONAL_JUMP)  ; LAB_004f7bda
    MOV ECX,dword ptr [ESP + 0x10]      ; 004f7ba3
    MOV EBX,EAX                         ; 004f7ba7
    MOV dword ptr [EDX],0xffffffff      ; 004f7ba9
    MOV EAX,0x1d17ab8                   ; 004f7baf
    XOR EDX,EDX                         ; 004f7bb4
    TEST EBP,EBP                        ; 004f7bb6
    JLE 0x004f7d37                      ; 004f7bb8
        ;   XREF to: 004f7d37 (CONDITIONAL_JUMP)  ; LAB_004f7d37
    CMP EBX,dword ptr [EAX]             ; 004f7bbe | DAT_01d17ab8 | DAT_01d17b08
        ;   Label: LAB_004f7bbe
    JNZ 0x004f7d2b                      ; 004f7bc0
        ;   XREF to: 004f7d2b (CONDITIONAL_JUMP)  ; LAB_004f7d2b
    CMP EAX,ECX                         ; 004f7bc6
    JZ 0x004f7d2b                       ; 004f7bc8
        ;   XREF to: 004f7d2b (CONDITIONAL_JUMP)  ; LAB_004f7d2b
    MOV dword ptr [ESP + 0x14],EAX      ; 004f7bce | DAT_01d17b08 | DAT_01d17ab8
        ;   Label: LAB_004f7bce
    TEST EAX,EAX                        ; 004f7bd2
    JZ 0x004f7d90                       ; 004f7bd4
        ;   XREF to: 004f7d90 (CONDITIONAL_JUMP)  ; LAB_004f7d90
    CMP dword ptr [0x01c38b40],0x0      ; 004f7bda | DAT_01c38b40
        ;   Label: LAB_004f7bda
    JZ 0x004f7d54                       ; 004f7be1
        ;   XREF to: 004f7d54 (CONDITIONAL_JUMP)  ; LAB_004f7d54
    MOV EDX,dword ptr [0x006141c0]      ; 004f7be7 | DAT_006141c0
    MOV dword ptr [0x01d17ab4],EBP      ; 004f7bed | DAT_01d17ab4
    CMP EDX,0x20                        ; 004f7bf3
    JNZ 0x004f7d3e                      ; 004f7bf6
        ;   XREF to: 004f7d3e (CONDITIONAL_JUMP)  ; LAB_004f7d3e
    MOV EDI,dword ptr [ESP + 0x14]      ; 004f7bfc
    MOV ESI,dword ptr [ESP + 0x10]      ; 004f7c00
    MOV EBX,dword ptr [ESP + 0xc]       ; 004f7c04
    CALL engine_special.cpp_FUN_0055c45c ; 004f7c08
        ;   XREF to: 0055c45c (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_FUN_0055c45c()
    MOV EDX,dword ptr [ESP + 0x10]      ; 004f7c0d
        ;   Label: LAB_004f7c0d
    MOV EAX,dword ptr [ESP + 0x10]      ; 004f7c11
    MOV ECX,dword ptr [EDX + 0x8]       ; 004f7c15 | DAT_01d17ac0
    MOV EAX,dword ptr [EAX + 0xc]       ; 004f7c18 | DAT_01d17ac4
    ADD ECX,EAX                         ; 004f7c1b
    MOV dword ptr [EDX + 0x8],ECX       ; 004f7c1d | DAT_01d17ac0
    MOV EBX,dword ptr [EDX + 0x18]      ; 004f7c20 | DAT_01d17ad0
    MOV ESI,dword ptr [EDX + 0x20]      ; 004f7c23 | DAT_01d17ad8
    MOV EDI,dword ptr [EDX + 0x28]      ; 004f7c26 | DAT_01d17ae0
    MOV EAX,dword ptr [EDX + 0x1c]      ; 004f7c29 | DAT_01d17ad4
    MOV ECX,dword ptr [EDX + 0x10]      ; 004f7c2c | DAT_01d17ac8
    ADD EBX,EAX                         ; 004f7c2f
    MOV EAX,dword ptr [EDX + 0x24]      ; 004f7c31 | DAT_01d17adc
    MOV dword ptr [EDX + 0x18],EBX      ; 004f7c34 | DAT_01d17ad0
    ADD ESI,EAX                         ; 004f7c37
    MOV EAX,dword ptr [EDX + 0x2c]      ; 004f7c39 | DAT_01d17ae4
    MOV dword ptr [EDX + 0x20],ESI      ; 004f7c3c | DAT_01d17ad8
    ADD EDI,EAX                         ; 004f7c3f
    MOV EAX,dword ptr [EDX + 0x14]      ; 004f7c41
    MOV dword ptr [EDX + 0x28],EDI      ; 004f7c44
    ADD ECX,EAX                         ; 004f7c47
    MOV dword ptr [EDX + 0x10],ECX      ; 004f7c49
    MOV EBX,dword ptr [EDX + 0x38]      ; 004f7c4c
    MOV ESI,dword ptr [EDX + 0x40]      ; 004f7c4f
    MOV EDI,dword ptr [EDX + 0x48]      ; 004f7c52
    MOV EAX,dword ptr [EDX + 0x3c]      ; 004f7c55
    MOV ECX,dword ptr [EDX + 0x30]      ; 004f7c58
    ADD EBX,EAX                         ; 004f7c5b
    MOV EAX,dword ptr [EDX + 0x44]      ; 004f7c5d
    MOV dword ptr [EDX + 0x38],EBX      ; 004f7c60
    ADD ESI,EAX                         ; 004f7c63
    MOV EAX,dword ptr [EDX + 0x4c]      ; 004f7c65
    MOV dword ptr [EDX + 0x40],ESI      ; 004f7c68
    ADD EDI,EAX                         ; 004f7c6b
    MOV EAX,dword ptr [EDX + 0x34]      ; 004f7c6d
    MOV dword ptr [EDX + 0x48],EDI      ; 004f7c70
    ADD ECX,EAX                         ; 004f7c73
    MOV EAX,dword ptr [ESP + 0x14]      ; 004f7c75
    MOV dword ptr [EDX + 0x30],ECX      ; 004f7c79
    MOV EDX,dword ptr [ESP + 0x14]      ; 004f7c7c
    MOV EAX,dword ptr [EAX + 0xc]       ; 004f7c80
    ADD dword ptr [EDX + 0x8],EAX       ; 004f7c83
    MOV ESI,dword ptr [EDX + 0x18]      ; 004f7c86
    MOV EDI,dword ptr [EDX + 0x20]      ; 004f7c89
    MOV ECX,dword ptr [EDX + 0x28]      ; 004f7c8c
    MOV EAX,dword ptr [EDX + 0x1c]      ; 004f7c8f
    MOV EBX,dword ptr [EDX + 0x10]      ; 004f7c92
    ADD ESI,EAX                         ; 004f7c95
    MOV EAX,dword ptr [EDX + 0x24]      ; 004f7c97
    MOV dword ptr [EDX + 0x18],ESI      ; 004f7c9a
    ADD EDI,EAX                         ; 004f7c9d
    MOV EAX,dword ptr [EDX + 0x2c]      ; 004f7c9f
    MOV dword ptr [EDX + 0x20],EDI      ; 004f7ca2
    ADD ECX,EAX                         ; 004f7ca5
    MOV EAX,dword ptr [EDX + 0x14]      ; 004f7ca7
    MOV dword ptr [EDX + 0x28],ECX      ; 004f7caa
    ADD EBX,EAX                         ; 004f7cad
    MOV dword ptr [EDX + 0x10],EBX      ; 004f7caf
    MOV EBP,dword ptr [0x01d17ab4]      ; 004f7cb2 | DAT_01d17ab4
    MOV ESI,dword ptr [EDX + 0x38]      ; 004f7cb8
    MOV EDI,dword ptr [EDX + 0x40]      ; 004f7cbb
    MOV ECX,dword ptr [EDX + 0x48]      ; 004f7cbe
    MOV EAX,dword ptr [EDX + 0x3c]      ; 004f7cc1
    MOV EBX,dword ptr [EDX + 0x30]      ; 004f7cc4
    ADD ESI,EAX                         ; 004f7cc7
    MOV EAX,dword ptr [EDX + 0x44]      ; 004f7cc9
    MOV dword ptr [EDX + 0x38],ESI      ; 004f7ccc
    MOV ESI,dword ptr [ESP + 0xc]       ; 004f7ccf
    ADD EDI,EAX                         ; 004f7cd3
    INC ESI                             ; 004f7cd5
    MOV EAX,dword ptr [EDX + 0x4c]      ; 004f7cd6
    MOV dword ptr [EDX + 0x40],EDI      ; 004f7cd9
    ADD ECX,EAX                         ; 004f7cdc
    MOV EAX,dword ptr [EDX + 0x34]      ; 004f7cde
    MOV dword ptr [EDX + 0x48],ECX      ; 004f7ce1
    ADD EBX,EAX                         ; 004f7ce4
    MOV dword ptr [ESP + 0xc],ESI       ; 004f7ce6
    MOV dword ptr [EDX + 0x30],EBX      ; 004f7cea
    JMP 0x004f7b52                      ; 004f7ced
        ;   XREF to: 004f7b52 (UNCONDITIONAL_JUMP)  ; LAB_004f7b52
    INC EDX                             ; 004f7cf2
        ;   Label: LAB_004f7cf2
    ADD EAX,0x50                        ; 004f7cf3
    CMP EDX,EBP                         ; 004f7cf6
    JL 0x004f7afa                       ; 004f7cf8
        ;   XREF to: 004f7afa (CONDITIONAL_JUMP)  ; LAB_004f7afa
    XOR EAX,EAX                         ; 004f7cfe
        ;   Label: LAB_004f7cfe
    JMP 0x004f7b0a                      ; 004f7d00
        ;   XREF to: 004f7b0a (UNCONDITIONAL_JUMP)  ; LAB_004f7b0a
    INC EDX                             ; 004f7d05
        ;   Label: LAB_004f7d05
    ADD EAX,0x50                        ; 004f7d06
    CMP EDX,EBP                         ; 004f7d09
    JL 0x004f7b2d                       ; 004f7d0b
        ;   XREF to: 004f7b2d (CONDITIONAL_JUMP)  ; LAB_004f7b2d
    XOR EAX,EAX                         ; 004f7d11
        ;   Label: LAB_004f7d11
    JMP 0x004f7b3d                      ; 004f7d13
        ;   XREF to: 004f7b3d (UNCONDITIONAL_JUMP)  ; LAB_004f7b3d
    INC EDX                             ; 004f7d18
        ;   Label: LAB_004f7d18
    ADD EAX,0x50                        ; 004f7d19
    CMP EDX,EBP                         ; 004f7d1c
    JL 0x004f7b7a                       ; 004f7d1e
        ;   XREF to: 004f7b7a (CONDITIONAL_JUMP)  ; LAB_004f7b7a
    XOR EAX,EAX                         ; 004f7d24
        ;   Label: LAB_004f7d24
    JMP 0x004f7b8a                      ; 004f7d26
        ;   XREF to: 004f7b8a (UNCONDITIONAL_JUMP)  ; LAB_004f7b8a
    INC EDX                             ; 004f7d2b
        ;   Label: LAB_004f7d2b
    ADD EAX,0x50                        ; 004f7d2c
    CMP EDX,EBP                         ; 004f7d2f
    JL 0x004f7bbe                       ; 004f7d31
        ;   XREF to: 004f7bbe (CONDITIONAL_JUMP)  ; LAB_004f7bbe
    XOR EAX,EAX                         ; 004f7d37
        ;   Label: LAB_004f7d37
    JMP 0x004f7bce                      ; 004f7d39
        ;   XREF to: 004f7bce (UNCONDITIONAL_JUMP)  ; LAB_004f7bce
    MOV EDI,dword ptr [ESP + 0x14]      ; 004f7d3e
        ;   Label: LAB_004f7d3e
    MOV ESI,dword ptr [ESP + 0x10]      ; 004f7d42
    MOV EBX,dword ptr [ESP + 0xc]       ; 004f7d46
    CALL engine_special.cpp_FUN_0055ca23 ; 004f7d4a
        ;   XREF to: 0055ca23 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_FUN_0055ca23()
    JMP 0x004f7c0d                      ; 004f7d4f
        ;   XREF to: 004f7c0d (UNCONDITIONAL_JUMP)  ; LAB_004f7c0d
    MOV EAX,[0x006141c0]                ; 004f7d54 | DAT_006141c0
        ;   Label: LAB_004f7d54
    MOV dword ptr [0x01d17ab4],EBP      ; 004f7d59 | DAT_01d17ab4
    CMP EAX,0x20                        ; 004f7d5f
    JNZ 0x004f7d7a                      ; 004f7d62
        ;   XREF to: 004f7d7a (CONDITIONAL_JUMP)  ; LAB_004f7d7a
    MOV EDI,dword ptr [ESP + 0x14]      ; 004f7d64
    MOV ESI,dword ptr [ESP + 0x10]      ; 004f7d68
    MOV EBX,dword ptr [ESP + 0xc]       ; 004f7d6c
    CALL engine_special.cpp_renderPerspectiveCorrectScanline32_FUN_0055d0b3 ; 004f7d70
        ;   XREF to: 0055d0b3 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_renderPerspectiveCorrectScanline32_FUN_0055d0b3()
    JMP 0x004f7c0d                      ; 004f7d75
        ;   XREF to: 004f7c0d (UNCONDITIONAL_JUMP)  ; LAB_004f7c0d
    MOV EDI,dword ptr [ESP + 0x14]      ; 004f7d7a
        ;   Label: LAB_004f7d7a
    MOV ESI,dword ptr [ESP + 0x10]      ; 004f7d7e
    MOV EBX,dword ptr [ESP + 0xc]       ; 004f7d82
    CALL engine_special.cpp_renderPerspectiveCorrectScanline16_FUN_0055d2e9 ; 004f7d86
        ;   XREF to: 0055d2e9 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_renderPerspectiveCorrectScanline16_FUN_0055d2e9()
    JMP 0x004f7c0d                      ; 004f7d8b
        ;   XREF to: 004f7c0d (UNCONDITIONAL_JUMP)  ; LAB_004f7c0d
    MOV dword ptr [0x01d17ab4],EBP      ; 004f7d90 | DAT_01d17ab4
        ;   Label: LAB_004f7d90
    ADD ESP,0x18                        ; 004f7d96
    POP EBP                             ; 004f7d99
    POP EDI                             ; 004f7d9a
    POP ESI                             ; 004f7d9b
    POP EBX                             ; 004f7d9c
    RET                                 ; 004f7d9d

