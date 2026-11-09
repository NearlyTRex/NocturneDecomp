; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_fpoly_c_rasterizePolygonHardware_FUN_004b3960(int *param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   engine_3d.c_renderPolygonSolidTexturedHardwareOp53_FUN_004058f0 at 00405946
;   engine_3d.c_renderPolygonTexturedHardwareOp40_FUN_00405850 at 00405899
;
; Referenced Globals:
;   undefined4 DAT_005fba1c
;   undefined4 DAT_01d1ad78
;   undefined4 DAT_01d1ad7c
;   undefined4 DAT_01d1adb4
;   undefined4 DAT_01d1b0fc
;   undefined4 DAT_01d1b100
;
; Called Functions:
;   engine_special.cpp_FUN_00563257
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b3960
        ;   Label: engine_fpoly.c_rasterizePolygonHardware_FUN_004b3960
    PUSH ESI                            ; 004b3961
    PUSH EDI                            ; 004b3962
    PUSH EBP                            ; 004b3963
    SUB ESP,0x14                        ; 004b3964
    MOV EBX,dword ptr [ESP + 0x2c]      ; 004b3967
    MOV EAX,[0x005fba1c]                ; 004b396b | DAT_005fba1c
    XOR EDX,EDX                         ; 004b3970
    XOR EBP,EBP                         ; 004b3972
    MOV [0x01d1b0fc],EAX                ; 004b3974 | DAT_01d1b0fc
    MOV dword ptr [0x01d1b100],EDX      ; 004b3979 | DAT_01d1b100
    MOV dword ptr [ESP + 0x4],EDX       ; 004b397f
    TEST EBX,EBX                        ; 004b3983
    JLE 0x004b39db                      ; 004b3985
        ;   XREF to: 004b39db (CONDITIONAL_JUMP)  ; LAB_004b39db
    MOV EAX,dword ptr [ESP + 0x28]      ; 004b3987
    MOV dword ptr [ESP],EAX             ; 004b398b
    MOV EAX,dword ptr [ESP + 0x4]       ; 004b398e
        ;   Label: LAB_004b398e
    MOV ECX,dword ptr [ESP + 0x2c]      ; 004b3992
    INC EAX                             ; 004b3996
    CMP EAX,ECX                         ; 004b3997
    JL 0x004b399d                       ; 004b3999
        ;   XREF to: 004b399d (CONDITIONAL_JUMP)  ; LAB_004b399d
    XOR EAX,EAX                         ; 004b399b
    MOV EBX,dword ptr [ESP + 0x28]      ; 004b399d
        ;   Label: LAB_004b399d
    SHL EAX,0x2                         ; 004b39a1
    ADD EAX,EBX                         ; 004b39a4
    MOV EBX,dword ptr [ESP]             ; 004b39a6
    MOV EDI,dword ptr [EAX]             ; 004b39a9
    MOV EBX,dword ptr [EBX]             ; 004b39ab
    MOV EAX,dword ptr [EDI + 0x14]      ; 004b39ad
    MOV EDX,dword ptr [EBX + 0x14]      ; 004b39b0
    SAR EAX,0x10                        ; 004b39b3
    SAR EDX,0x10                        ; 004b39b6
    CMP EDX,EAX                         ; 004b39b9
    JNZ 0x004b3b02                      ; 004b39bb
        ;   XREF to: 004b3b02 (CONDITIONAL_JUMP)  ; LAB_004b3b02
    MOV ESI,dword ptr [ESP]             ; 004b39c1
        ;   Label: LAB_004b39c1
    MOV EDI,dword ptr [ESP + 0x4]       ; 004b39c4
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004b39c8
    ADD ESI,0x4                         ; 004b39cc
    INC EDI                             ; 004b39cf
    MOV dword ptr [ESP],ESI             ; 004b39d0
    MOV dword ptr [ESP + 0x4],EDI       ; 004b39d3
    CMP EDI,EDX                         ; 004b39d7
    JL 0x004b398e                       ; 004b39d9
        ;   XREF to: 004b398e (CONDITIONAL_JUMP)  ; LAB_004b398e
    MOV EAX,0x1d1ad7c                   ; 004b39db
        ;   Label: LAB_004b39db
    MOV ECX,dword ptr [0x01d1b0fc]      ; 004b39e0 | DAT_01d1b0fc
    XOR EDX,EDX                         ; 004b39e6
    TEST EBP,EBP                        ; 004b39e8
    JLE 0x004b3c13                      ; 004b39ea
        ;   XREF to: 004b3c13 (CONDITIONAL_JUMP)  ; LAB_004b3c13
    CMP ECX,dword ptr [EAX]             ; 004b39f0 | DAT_01d1ad7c | DAT_01d1adb4
        ;   Label: LAB_004b39f0
    JNZ 0x004b3c07                      ; 004b39f2
        ;   XREF to: 004b3c07 (CONDITIONAL_JUMP)  ; LAB_004b3c07
    TEST EAX,EAX                        ; 004b39f8
    JZ 0x004b3c07                       ; 004b39fa
        ;   XREF to: 004b3c07 (CONDITIONAL_JUMP)  ; LAB_004b3c07
    MOV dword ptr [ESP + 0xc],EAX       ; 004b3a00 | DAT_01d1ad7c | DAT_01d1adb4
        ;   Label: LAB_004b3a00
    MOV dword ptr [0x01d1ad78],EBP      ; 004b3a04 | DAT_01d1ad78
    TEST EAX,EAX                        ; 004b3a0a
    JZ 0x004b3af4                       ; 004b3a0c
        ;   XREF to: 004b3af4 (CONDITIONAL_JUMP)  ; LAB_004b3af4
    MOV EBX,dword ptr [0x01d1b0fc]      ; 004b3a12 | DAT_01d1b0fc
    MOV ECX,EAX                         ; 004b3a18
    XOR EDX,EDX                         ; 004b3a1a
    MOV EAX,0x1d1ad7c                   ; 004b3a1c
    TEST EBP,EBP                        ; 004b3a21
    JLE 0x004b3c26                      ; 004b3a23
        ;   XREF to: 004b3c26 (CONDITIONAL_JUMP)  ; LAB_004b3c26
    CMP EBX,dword ptr [EAX]             ; 004b3a29 | DAT_01d1ad7c | DAT_01d1adb4
        ;   Label: LAB_004b3a29
    JNZ 0x004b3c1a                      ; 004b3a2b
        ;   XREF to: 004b3c1a (CONDITIONAL_JUMP)  ; LAB_004b3c1a
    CMP EAX,ECX                         ; 004b3a31
    JZ 0x004b3c1a                       ; 004b3a33
        ;   XREF to: 004b3c1a (CONDITIONAL_JUMP)  ; LAB_004b3c1a
    MOV dword ptr [ESP + 0x10],EAX      ; 004b3a39 | DAT_01d1ad7c | DAT_01d1adb4
        ;   Label: LAB_004b3a39
    MOV dword ptr [0x01d1ad78],EBP      ; 004b3a3d | DAT_01d1ad78
    TEST EAX,EAX                        ; 004b3a43
    JZ 0x004b3af4                       ; 004b3a45
        ;   XREF to: 004b3af4 (CONDITIONAL_JUMP)  ; LAB_004b3af4
    MOV EAX,[0x01d1b0fc]                ; 004b3a4b | DAT_01d1b0fc
    MOV dword ptr [ESP + 0x8],EAX       ; 004b3a50
    MOV EDX,dword ptr [ESP + 0xc]       ; 004b3a54
        ;   Label: LAB_004b3a54
    MOV EAX,dword ptr [ESP + 0x8]       ; 004b3a58
    CMP EAX,dword ptr [EDX + 0x4]       ; 004b3a5c
    JL 0x004b3aa0                       ; 004b3a5f
        ;   XREF to: 004b3aa0 (CONDITIONAL_JUMP)  ; LAB_004b3aa0
    MOV ECX,dword ptr [ESP + 0x10]      ; 004b3a61
    MOV EBP,dword ptr [0x01d1ad78]      ; 004b3a65 | DAT_01d1ad78
    MOV EBX,EAX                         ; 004b3a6b
    MOV dword ptr [EDX],0xffffffff      ; 004b3a6d
    MOV EAX,0x1d1ad7c                   ; 004b3a73
    XOR EDX,EDX                         ; 004b3a78
    TEST EBP,EBP                        ; 004b3a7a
    JLE 0x004b3c39                      ; 004b3a7c
        ;   XREF to: 004b3c39 (CONDITIONAL_JUMP)  ; LAB_004b3c39
    CMP EBX,dword ptr [EAX]             ; 004b3a82 | DAT_01d1ad7c | DAT_01d1adb4
        ;   Label: LAB_004b3a82
    JNZ 0x004b3c2d                      ; 004b3a84
        ;   XREF to: 004b3c2d (CONDITIONAL_JUMP)  ; LAB_004b3c2d
    CMP EAX,ECX                         ; 004b3a8a
    JZ 0x004b3c2d                       ; 004b3a8c
        ;   XREF to: 004b3c2d (CONDITIONAL_JUMP)  ; LAB_004b3c2d
    MOV dword ptr [ESP + 0xc],EAX       ; 004b3a92 | DAT_01d1ad7c | DAT_01d1adb4
        ;   Label: LAB_004b3a92
    MOV dword ptr [0x01d1ad78],EBP      ; 004b3a96 | DAT_01d1ad78
    TEST EAX,EAX                        ; 004b3a9c
    JZ 0x004b3af4                       ; 004b3a9e
        ;   XREF to: 004b3af4 (CONDITIONAL_JUMP)  ; LAB_004b3af4
    MOV EDX,dword ptr [ESP + 0x10]      ; 004b3aa0
        ;   Label: LAB_004b3aa0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004b3aa4
    CMP EAX,dword ptr [EDX + 0x4]       ; 004b3aa8
    JL 0x004b3c53                       ; 004b3aab
        ;   XREF to: 004b3c53 (CONDITIONAL_JUMP)  ; LAB_004b3c53
    MOV ECX,dword ptr [ESP + 0xc]       ; 004b3ab1
    MOV EBP,dword ptr [0x01d1ad78]      ; 004b3ab5 | DAT_01d1ad78
    MOV EBX,EAX                         ; 004b3abb
    MOV dword ptr [EDX],0xffffffff      ; 004b3abd
    MOV EAX,0x1d1ad7c                   ; 004b3ac3
    XOR EDX,EDX                         ; 004b3ac8
    TEST EBP,EBP                        ; 004b3aca
    JLE 0x004b3c4c                      ; 004b3acc
        ;   XREF to: 004b3c4c (CONDITIONAL_JUMP)  ; LAB_004b3c4c
    CMP EBX,dword ptr [EAX]             ; 004b3ad2 | DAT_01d1ad7c | DAT_01d1adb4
        ;   Label: LAB_004b3ad2
    JNZ 0x004b3c40                      ; 004b3ad4
        ;   XREF to: 004b3c40 (CONDITIONAL_JUMP)  ; LAB_004b3c40
    CMP EAX,ECX                         ; 004b3ada
    JZ 0x004b3c40                       ; 004b3adc
        ;   XREF to: 004b3c40 (CONDITIONAL_JUMP)  ; LAB_004b3c40
    MOV dword ptr [ESP + 0x10],EAX      ; 004b3ae2 | DAT_01d1adb4 | DAT_01d1ad7c
        ;   Label: LAB_004b3ae2
    MOV dword ptr [0x01d1ad78],EBP      ; 004b3ae6 | DAT_01d1ad78
    TEST EAX,EAX                        ; 004b3aec
    JNZ 0x004b3c53                      ; 004b3aee
        ;   XREF to: 004b3c53 (CONDITIONAL_JUMP)  ; LAB_004b3c53
    MOV EBP,dword ptr [0x01d1ad78]      ; 004b3af4 | DAT_01d1ad78
        ;   Label: LAB_004b3af4
    ADD ESP,0x14                        ; 004b3afa
    POP EBP                             ; 004b3afd
    POP EDI                             ; 004b3afe
    POP ESI                             ; 004b3aff
    POP EBX                             ; 004b3b00
    RET                                 ; 004b3b01
    MOV ESI,dword ptr [EDI + 0x14]      ; 004b3b02
        ;   Label: LAB_004b3b02
    CMP ESI,dword ptr [EBX + 0x14]      ; 004b3b05
    JGE 0x004b3b16                      ; 004b3b08
        ;   XREF to: 004b3b16 (CONDITIONAL_JUMP)  ; LAB_004b3b16
    MOV ECX,EBX                         ; 004b3b0a
    MOV EBX,EDI                         ; 004b3b0c
    MOV EDI,ECX                         ; 004b3b0e
    MOV ECX,EDX                         ; 004b3b10
    MOV EDX,EAX                         ; 004b3b12
    MOV EAX,ECX                         ; 004b3b14
    IMUL ECX,EBP,0x38                   ; 004b3b16
        ;   Label: LAB_004b3b16
    ADD ECX,0x1d1ad7c                   ; 004b3b19
    MOV dword ptr [ECX],EDX             ; 004b3b1f | DAT_01d1ad7c
    MOV ESI,dword ptr [0x01d1b0fc]      ; 004b3b21 | DAT_01d1b0fc
    MOV dword ptr [ECX + 0x4],EAX       ; 004b3b27
    CMP EDX,ESI                         ; 004b3b2a
    JGE 0x004b3b34                      ; 004b3b2c
        ;   XREF to: 004b3b34 (CONDITIONAL_JUMP)  ; LAB_004b3b34
    MOV dword ptr [0x01d1b0fc],EDX      ; 004b3b2e | DAT_01d1b0fc
    CMP EAX,dword ptr [0x01d1b100]      ; 004b3b34 | DAT_01d1b100
        ;   Label: LAB_004b3b34
    JLE 0x004b3b41                      ; 004b3b3a
        ;   XREF to: 004b3b41 (CONDITIONAL_JUMP)  ; LAB_004b3b41
    MOV [0x01d1b100],EAX                ; 004b3b3c | DAT_01d1b100
    MOV EAX,dword ptr [EBX + 0x10]      ; 004b3b41
        ;   Label: LAB_004b3b41
    MOV dword ptr [ECX + 0x8],EAX       ; 004b3b44
    MOV EAX,dword ptr [EBX + 0x18]      ; 004b3b47
    MOV dword ptr [ECX + 0x18],EAX      ; 004b3b4a
    MOV EAX,dword ptr [EBX + 0x1c]      ; 004b3b4d
    MOV dword ptr [ECX + 0x20],EAX      ; 004b3b50
    MOV ESI,dword ptr [EDI + 0x14]      ; 004b3b53
    SUB ESI,dword ptr [EBX + 0x14]      ; 004b3b56
    CMP ESI,0x10000                     ; 004b3b59
    JNC 0x004b3bf7                      ; 004b3b5f
        ;   XREF to: 004b3bf7 (CONDITIONAL_JUMP)  ; LAB_004b3bf7
    XOR ESI,ESI                         ; 004b3b65
    MOV EAX,dword ptr [EDI + 0x10]      ; 004b3b67
        ;   Label: LAB_004b3b67
    MOV EDX,dword ptr [EBX + 0x10]      ; 004b3b6a
    SUB EAX,EDX                         ; 004b3b6d
    MOV EDX,EAX                         ; 004b3b6f
    MOV EAX,ESI                         ; 004b3b71
    MOV dword ptr [0x01d1ad78],EBP      ; 004b3b73 | DAT_01d1ad78
    IMUL EDX                            ; 004b3b79
    SHRD EAX,EDX,0x10                   ; 004b3b7b
    MOV dword ptr [ECX + 0xc],EAX       ; 004b3b7f
    MOV EAX,dword ptr [EDI + 0x18]      ; 004b3b82
    MOV EDX,dword ptr [EBX + 0x18]      ; 004b3b85
    SUB EAX,EDX                         ; 004b3b88
    MOV EDX,EAX                         ; 004b3b8a
    MOV EAX,ESI                         ; 004b3b8c
    IMUL EDX                            ; 004b3b8e
    SHRD EAX,EDX,0x10                   ; 004b3b90
    MOV dword ptr [ECX + 0x1c],EAX      ; 004b3b94
    MOV EDX,dword ptr [EDI + 0x1c]      ; 004b3b97
    MOV EDI,dword ptr [EBX + 0x1c]      ; 004b3b9a
    MOV EAX,ESI                         ; 004b3b9d
    SUB EDX,EDI                         ; 004b3b9f
    IMUL EDX                            ; 004b3ba1
    SHRD EAX,EDX,0x10                   ; 004b3ba3
    MOV dword ptr [ECX + 0x24],EAX      ; 004b3ba7
    MOV EBX,dword ptr [EBX + 0x14]      ; 004b3baa
    AND EBX,0xffff                      ; 004b3bad
    XOR BX,0xffff                       ; 004b3bb3
    MOV EDX,dword ptr [ECX + 0xc]       ; 004b3bb7
    MOV EAX,EBX                         ; 004b3bba
    IMUL EDX                            ; 004b3bbc
    SHRD EAX,EDX,0x10                   ; 004b3bbe
    ADD dword ptr [ECX + 0x8],EAX       ; 004b3bc2
    MOV EAX,EBX                         ; 004b3bc5
    MOV EDX,dword ptr [ECX + 0x1c]      ; 004b3bc7
    IMUL EDX                            ; 004b3bca
    SHRD EAX,EDX,0x10                   ; 004b3bcc
    MOV ESI,dword ptr [ECX + 0x18]      ; 004b3bd0
    MOV EDX,dword ptr [ECX + 0x24]      ; 004b3bd3
    ADD ESI,EAX                         ; 004b3bd6
    MOV EAX,EBX                         ; 004b3bd8
    MOV dword ptr [ECX + 0x18],ESI      ; 004b3bda
    IMUL EDX                            ; 004b3bdd
    SHRD EAX,EDX,0x10                   ; 004b3bdf
    MOV EDI,dword ptr [ECX + 0x20]      ; 004b3be3
    MOV EBP,dword ptr [0x01d1ad78]      ; 004b3be6 | DAT_01d1ad78
    ADD EDI,EAX                         ; 004b3bec
    INC EBP                             ; 004b3bee
    MOV dword ptr [ECX + 0x20],EDI      ; 004b3bef
    JMP 0x004b39c1                      ; 004b3bf2
        ;   XREF to: 004b39c1 (UNCONDITIONAL_JUMP)  ; LAB_004b39c1
    MOV EAX,0xffffffff                  ; 004b3bf7
        ;   Label: LAB_004b3bf7
    XOR EDX,EDX                         ; 004b3bfc
    DIV ESI                             ; 004b3bfe
    MOV ESI,EAX                         ; 004b3c00
    JMP 0x004b3b67                      ; 004b3c02
        ;   XREF to: 004b3b67 (UNCONDITIONAL_JUMP)  ; LAB_004b3b67
    INC EDX                             ; 004b3c07
        ;   Label: LAB_004b3c07
    ADD EAX,0x38                        ; 004b3c08
    CMP EDX,EBP                         ; 004b3c0b
    JL 0x004b39f0                       ; 004b3c0d
        ;   XREF to: 004b39f0 (CONDITIONAL_JUMP)  ; LAB_004b39f0
    XOR EAX,EAX                         ; 004b3c13
        ;   Label: LAB_004b3c13
    JMP 0x004b3a00                      ; 004b3c15
        ;   XREF to: 004b3a00 (UNCONDITIONAL_JUMP)  ; LAB_004b3a00
    INC EDX                             ; 004b3c1a
        ;   Label: LAB_004b3c1a
    ADD EAX,0x38                        ; 004b3c1b
    CMP EDX,EBP                         ; 004b3c1e
    JL 0x004b3a29                       ; 004b3c20
        ;   XREF to: 004b3a29 (CONDITIONAL_JUMP)  ; LAB_004b3a29
    XOR EAX,EAX                         ; 004b3c26
        ;   Label: LAB_004b3c26
    JMP 0x004b3a39                      ; 004b3c28
        ;   XREF to: 004b3a39 (UNCONDITIONAL_JUMP)  ; LAB_004b3a39
    INC EDX                             ; 004b3c2d
        ;   Label: LAB_004b3c2d
    ADD EAX,0x38                        ; 004b3c2e
    CMP EDX,EBP                         ; 004b3c31
    JL 0x004b3a82                       ; 004b3c33
        ;   XREF to: 004b3a82 (CONDITIONAL_JUMP)  ; LAB_004b3a82
    XOR EAX,EAX                         ; 004b3c39
        ;   Label: LAB_004b3c39
    JMP 0x004b3a92                      ; 004b3c3b
        ;   XREF to: 004b3a92 (UNCONDITIONAL_JUMP)  ; LAB_004b3a92
    INC EDX                             ; 004b3c40
        ;   Label: LAB_004b3c40
    ADD EAX,0x38                        ; 004b3c41 | DAT_01d1adb4
    CMP EDX,EBP                         ; 004b3c44
    JL 0x004b3ad2                       ; 004b3c46
        ;   XREF to: 004b3ad2 (CONDITIONAL_JUMP)  ; LAB_004b3ad2
    XOR EAX,EAX                         ; 004b3c4c
        ;   Label: LAB_004b3c4c
    JMP 0x004b3ae2                      ; 004b3c4e
        ;   XREF to: 004b3ae2 (UNCONDITIONAL_JUMP)  ; LAB_004b3ae2
    MOV EDI,dword ptr [ESP + 0x10]      ; 004b3c53
        ;   Label: LAB_004b3c53
    MOV ESI,dword ptr [ESP + 0xc]       ; 004b3c57
    MOV EBX,dword ptr [ESP + 0x8]       ; 004b3c5b
    CALL engine_special.cpp_FUN_00563257 ; 004b3c5f
        ;   XREF to: 00563257 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_FUN_00563257()
    MOV EAX,dword ptr [ESP + 0xc]       ; 004b3c64
    MOV EDX,dword ptr [ESP + 0xc]       ; 004b3c68
    MOV EAX,dword ptr [EAX + 0xc]       ; 004b3c6c
    MOV EDI,dword ptr [EDX + 0x8]       ; 004b3c6f
    MOV ECX,dword ptr [EDX + 0x18]      ; 004b3c72
    MOV EBX,dword ptr [EDX + 0x20]      ; 004b3c75
    ADD EDI,EAX                         ; 004b3c78
    MOV EAX,dword ptr [EDX + 0x1c]      ; 004b3c7a
    MOV dword ptr [EDX + 0x8],EDI       ; 004b3c7d
    ADD ECX,EAX                         ; 004b3c80
    MOV EAX,dword ptr [EDX + 0x24]      ; 004b3c82
    MOV dword ptr [EDX + 0x18],ECX      ; 004b3c85
    ADD EBX,EAX                         ; 004b3c88
    MOV EAX,dword ptr [ESP + 0x10]      ; 004b3c8a
    MOV dword ptr [EDX + 0x20],EBX      ; 004b3c8e
    MOV EDX,dword ptr [ESP + 0x10]      ; 004b3c91
    MOV EBX,dword ptr [ESP + 0x8]       ; 004b3c95
    MOV EAX,dword ptr [EAX + 0xc]       ; 004b3c99
    INC EBX                             ; 004b3c9c
    MOV ESI,dword ptr [EDX + 0x8]       ; 004b3c9d
    MOV EDI,dword ptr [EDX + 0x18]      ; 004b3ca0
    MOV ECX,dword ptr [EDX + 0x20]      ; 004b3ca3
    ADD ESI,EAX                         ; 004b3ca6
    MOV EAX,dword ptr [EDX + 0x1c]      ; 004b3ca8
    MOV dword ptr [EDX + 0x8],ESI       ; 004b3cab
    ADD EDI,EAX                         ; 004b3cae
    MOV EAX,dword ptr [EDX + 0x24]      ; 004b3cb0
    MOV dword ptr [EDX + 0x18],EDI      ; 004b3cb3
    ADD ECX,EAX                         ; 004b3cb6
    MOV dword ptr [ESP + 0x8],EBX       ; 004b3cb8
    MOV dword ptr [EDX + 0x20],ECX      ; 004b3cbc
    JMP 0x004b3a54                      ; 004b3cbf
        ;   XREF to: 004b3a54 (UNCONDITIONAL_JUMP)  ; LAB_004b3a54

