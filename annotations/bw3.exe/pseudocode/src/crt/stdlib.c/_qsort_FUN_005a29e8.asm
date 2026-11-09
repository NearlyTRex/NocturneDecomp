; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_stdlib_c__qsort_FUN_005a29e8(undefined4 *param_1,uint param_2,uint param_3,code *param_4)
;
; Local Variables:
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
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
;
; XREF[5]:
;   core_set.cpp_FUN_00539f30 at 0053a03e
;   engine_3d.c_flushPremiumRenderBuffer_FUN_00406f30 at 00406f83
;   engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0046e4e0 at 0046e53d
;   engine_pod.cpp_FUN_00512fb0 at 00513442
;   shape_edittool.cpp_CStrList_sort_FUN_004823d0 at 00482429
;
; Called Functions:
;   crt_unknown.c_FUN_005a2950
;   crt_unknown.c_FUN_005a29c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a29e8
        ;   Label: crt_stdlib.c__qsort_FUN_005a29e8
    PUSH ESI                            ; 005a29e9
    PUSH EDI                            ; 005a29ea
    PUSH ES                             ; 005a29eb
    PUSH FS                             ; 005a29ec
    PUSH GS                             ; 005a29ee
    PUSH EBP                            ; 005a29f0
    SUB ESP,0x150                       ; 005a29f1
    MOV EAX,dword ptr [ESP + 0x170]     ; 005a29f7
    MOV EBP,dword ptr [ESP + 0x178]     ; 005a29fe
    MOV EDX,dword ptr [ESP + 0x17c]     ; 005a2a05
    MOV dword ptr [ESP + 0x124],EAX     ; 005a2a0c
    OR EAX,EBP                          ; 005a2a13
    MOV dword ptr [ESP + 0x130],EDX     ; 005a2a15
    TEST AL,0x3                         ; 005a2a1c
    JZ 0x005a2a27                       ; 005a2a1e
        ;   XREF to: 005a2a27 (CONDITIONAL_JUMP)  ; LAB_005a2a27
    MOV EAX,0x2                         ; 005a2a20
    JMP 0x005a2a32                      ; 005a2a25
        ;   XREF to: 005a2a32 (UNCONDITIONAL_JUMP)  ; LAB_005a2a32
    CMP EBP,0x4                         ; 005a2a27
        ;   Label: LAB_005a2a27
    SETA AL                             ; 005a2a2a
    AND EAX,0xff                        ; 005a2a2d
    MOV dword ptr [ESP + 0x134],EAX     ; 005a2a32
        ;   Label: LAB_005a2a32
    LEA EAX,[EBP + EBP*0x1]             ; 005a2a39
    MOV dword ptr [ESP + 0x10c],EAX     ; 005a2a3d
    LEA EAX,[EBP*0x4 + 0x0]             ; 005a2a44
    XOR EDX,EDX                         ; 005a2a4b
    SUB EAX,EBP                         ; 005a2a4d
    MOV dword ptr [ESP + 0x114],EDX     ; 005a2a4f
    MOV dword ptr [ESP + 0x108],EAX     ; 005a2a56
    MOV EBX,dword ptr [ESP + 0x174]     ; 005a2a5d
        ;   Label: LAB_005a2a5d
    CMP EBX,0x1                         ; 005a2a64
    JBE 0x005a2b9c                      ; 005a2a67
        ;   XREF to: 005a2b9c (CONDITIONAL_JUMP)  ; LAB_005a2b9c
    CMP EBX,0x10                        ; 005a2a6d
    JNC 0x005a2bd2                      ; 005a2a70
        ;   XREF to: 005a2bd2 (CONDITIONAL_JUMP)  ; LAB_005a2bd2
    MOV EAX,dword ptr [ESP + 0x108]     ; 005a2a76
    MOV dword ptr [ESP + 0x12c],EAX     ; 005a2a7d
    TEST EAX,EAX                        ; 005a2a84
    JLE 0x005a2b9c                      ; 005a2a86
        ;   XREF to: 005a2b9c (CONDITIONAL_JUMP)  ; LAB_005a2b9c
    MOV EAX,EBX                         ; 005a2a8c
    IMUL EAX,EBP                        ; 005a2a8e
    MOV EDX,dword ptr [ESP + 0x124]     ; 005a2a91
    ADD EDX,EAX                         ; 005a2a98
    MOV dword ptr [ESP + 0x11c],EDX     ; 005a2a9a
    MOV EAX,dword ptr [ESP + 0x124]     ; 005a2aa1
        ;   Label: LAB_005a2aa1
    ADD EAX,dword ptr [ESP + 0x12c]     ; 005a2aa8
    MOV EBX,dword ptr [ESP + 0x11c]     ; 005a2aaf
    MOV dword ptr [ESP + 0x120],EAX     ; 005a2ab6
    CMP EAX,EBX                         ; 005a2abd
    JNC 0x005a2b7d                      ; 005a2abf
        ;   XREF to: 005a2b7d (CONDITIONAL_JUMP)  ; LAB_005a2b7d
    MOV EAX,dword ptr [ESP + 0x120]     ; 005a2ac5
        ;   Label: LAB_005a2ac5
    MOV EDI,dword ptr [ESP + 0x124]     ; 005a2acc
    MOV dword ptr [ESP + 0x14c],EAX     ; 005a2ad3
    CMP EAX,EDI                         ; 005a2ada
    JA 0x005a2b35                       ; 005a2adc
        ;   XREF to: 005a2b35 (CONDITIONAL_JUMP)  ; LAB_005a2b35
    JMP 0x005a2b57                      ; 005a2ade
        ;   XREF to: 005a2b57 (UNCONDITIONAL_JUMP)  ; LAB_005a2b57
    CMP dword ptr [ESP + 0x134],0x0     ; 005a2ae3
        ;   Label: LAB_005a2ae3
    JZ 0x005a2afd                       ; 005a2aeb
        ;   XREF to: 005a2afd (CONDITIONAL_JUMP)  ; LAB_005a2afd
    MOV ESI,dword ptr [ESP + 0x14c]     ; 005a2aed
    MOV ECX,EBP                         ; 005a2af4
    CALL crt_unknown.c_FUN_005a29c0     ; 005a2af6
        ;   XREF to: 005a29c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a29c0()
    JMP 0x005a2b13                      ; 005a2afb
        ;   XREF to: 005a2b13 (UNCONDITIONAL_JUMP)  ; LAB_005a2b13
    MOV EDX,dword ptr [ESP + 0x14c]     ; 005a2afd
        ;   Label: LAB_005a2afd
    MOV EBX,dword ptr [ESP + 0x14c]     ; 005a2b04
    MOV EAX,dword ptr [EDI]             ; 005a2b0b
    MOV EDX,dword ptr [EDX]             ; 005a2b0d
    MOV dword ptr [EBX],EAX             ; 005a2b0f
    MOV dword ptr [EDI],EDX             ; 005a2b11
    MOV EAX,dword ptr [ESP + 0x12c]     ; 005a2b13
        ;   Label: LAB_005a2b13
    MOV EDX,dword ptr [ESP + 0x14c]     ; 005a2b1a
    SUB EDX,EAX                         ; 005a2b21
    MOV EBX,dword ptr [ESP + 0x124]     ; 005a2b23
    MOV dword ptr [ESP + 0x14c],EDX     ; 005a2b2a
    CMP EDX,EBX                         ; 005a2b31
    JBE 0x005a2b57                      ; 005a2b33
        ;   XREF to: 005a2b57 (CONDITIONAL_JUMP)  ; LAB_005a2b57
    MOV ECX,dword ptr [ESP + 0x14c]     ; 005a2b35
        ;   Label: LAB_005a2b35
    MOV ESI,dword ptr [ESP + 0x12c]     ; 005a2b3c
    MOV EDI,ECX                         ; 005a2b43
    PUSH ECX                            ; 005a2b45
    SUB EDI,ESI                         ; 005a2b46
    PUSH EDI                            ; 005a2b48
    CALL dword ptr [ESP + 0x138]        ; 005a2b49
    ADD ESP,0x8                         ; 005a2b50
    TEST EAX,EAX                        ; 005a2b53
    JG 0x005a2ae3                       ; 005a2b55
        ;   XREF to: 005a2ae3 (CONDITIONAL_JUMP)  ; LAB_005a2ae3
    MOV EAX,dword ptr [ESP + 0x12c]     ; 005a2b57
        ;   Label: LAB_005a2b57
    MOV ECX,dword ptr [ESP + 0x120]     ; 005a2b5e
    ADD ECX,EAX                         ; 005a2b65
    MOV ESI,dword ptr [ESP + 0x11c]     ; 005a2b67
    MOV dword ptr [ESP + 0x120],ECX     ; 005a2b6e
    CMP ECX,ESI                         ; 005a2b75
    JC 0x005a2ac5                       ; 005a2b77
        ;   XREF to: 005a2ac5 (CONDITIONAL_JUMP)  ; LAB_005a2ac5
    MOV EAX,dword ptr [ESP + 0x10c]     ; 005a2b7d
        ;   Label: LAB_005a2b7d
    MOV ESI,dword ptr [ESP + 0x12c]     ; 005a2b84
    SUB ESI,EAX                         ; 005a2b8b
    MOV dword ptr [ESP + 0x12c],ESI     ; 005a2b8d
    TEST ESI,ESI                        ; 005a2b94
    JG 0x005a2aa1                       ; 005a2b96
        ;   XREF to: 005a2aa1 (CONDITIONAL_JUMP)  ; LAB_005a2aa1
    MOV EDX,dword ptr [ESP + 0x114]     ; 005a2b9c
        ;   Label: LAB_005a2b9c
    TEST EDX,EDX                        ; 005a2ba3
    JZ 0x005a307f                       ; 005a2ba5
        ;   XREF to: 005a307f (CONDITIONAL_JUMP)  ; LAB_005a307f
    LEA EBX,[EDX + -0x1]                ; 005a2bab
    MOV dword ptr [ESP + 0x114],EBX     ; 005a2bae
    MOV EDX,dword ptr [ESP + EBX*0x4]   ; 005a2bb5
    MOV EAX,dword ptr [ESP + EBX*0x4 + 0x80] ; 005a2bb8
    MOV dword ptr [ESP + 0x124],EDX     ; 005a2bbf
    MOV dword ptr [ESP + 0x174],EAX     ; 005a2bc6
    JMP 0x005a2a5d                      ; 005a2bcd
        ;   XREF to: 005a2a5d (UNCONDITIONAL_JUMP)  ; LAB_005a2a5d
    MOV EAX,EBX                         ; 005a2bd2
        ;   Label: LAB_005a2bd2
    SHR EAX,0x1                         ; 005a2bd4
    IMUL EAX,EBP                        ; 005a2bd6
    MOV EDI,dword ptr [ESP + 0x124]     ; 005a2bd9
    ADD EDI,EAX                         ; 005a2be0
    CMP EBX,0x1d                        ; 005a2be2
    JBE 0x005a2cbc                      ; 005a2be5
        ;   XREF to: 005a2cbc (CONDITIONAL_JUMP)  ; LAB_005a2cbc
    MOV EAX,dword ptr [ESP + 0x124]     ; 005a2beb
    MOV dword ptr [ESP + 0x110],EAX     ; 005a2bf2
    LEA EAX,[EBX + -0x1]                ; 005a2bf9
    IMUL EAX,EBP                        ; 005a2bfc
    MOV EBX,dword ptr [ESP + 0x124]     ; 005a2bff
    ADD EBX,EAX                         ; 005a2c06
    MOV EAX,dword ptr [ESP + 0x174]     ; 005a2c08
    CMP EAX,0x2a                        ; 005a2c0f
    JBE 0x005a2ca0                      ; 005a2c12
        ;   XREF to: 005a2ca0 (CONDITIONAL_JUMP)  ; LAB_005a2ca0
    MOV ESI,EAX                         ; 005a2c18
    SHR ESI,0x3                         ; 005a2c1a
    IMUL ESI,EBP                        ; 005a2c1d
    LEA EAX,[ESI + ESI*0x1]             ; 005a2c20
    MOV EDX,dword ptr [ESP + 0x130]     ; 005a2c23
    MOV dword ptr [ESP + 0x104],EAX     ; 005a2c2a
    MOV EAX,dword ptr [ESP + 0x124]     ; 005a2c31
    MOV ECX,dword ptr [ESP + 0x104]     ; 005a2c38
    PUSH EDX                            ; 005a2c3f
    ADD EAX,ECX                         ; 005a2c40
    PUSH EAX                            ; 005a2c42
    MOV EAX,dword ptr [ESP + 0x12c]     ; 005a2c43
    ADD EAX,ESI                         ; 005a2c4a
    PUSH EAX                            ; 005a2c4c
    MOV EAX,dword ptr [ESP + 0x130]     ; 005a2c4d
    PUSH EAX                            ; 005a2c54
    CALL crt_unknown.c_FUN_005a2950     ; 005a2c55
        ;   XREF to: 005a2950 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a2950()
    ADD ESP,0x10                        ; 005a2c5a
    MOV EDX,dword ptr [ESP + 0x130]     ; 005a2c5d
    PUSH EDX                            ; 005a2c64
    MOV dword ptr [ESP + 0x114],EAX     ; 005a2c65
    LEA EAX,[EDI + ESI*0x1]             ; 005a2c6c
    PUSH EAX                            ; 005a2c6f
    PUSH EDI                            ; 005a2c70
    SUB EDI,ESI                         ; 005a2c71
    PUSH EDI                            ; 005a2c73
    CALL crt_unknown.c_FUN_005a2950     ; 005a2c74
        ;   XREF to: 005a2950 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a2950()
    ADD ESP,0x10                        ; 005a2c79
    MOV ECX,dword ptr [ESP + 0x130]     ; 005a2c7c
    PUSH ECX                            ; 005a2c83
    MOV EDI,EAX                         ; 005a2c84
    MOV EAX,EBX                         ; 005a2c86
    PUSH EBX                            ; 005a2c88
    SUB EAX,ESI                         ; 005a2c89
    MOV ESI,dword ptr [ESP + 0x10c]     ; 005a2c8b
    PUSH EAX                            ; 005a2c92
    SUB EBX,ESI                         ; 005a2c93
    PUSH EBX                            ; 005a2c95
    CALL crt_unknown.c_FUN_005a2950     ; 005a2c96
        ;   XREF to: 005a2950 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a2950()
    ADD ESP,0x10                        ; 005a2c9b
    MOV EBX,EAX                         ; 005a2c9e
    MOV EAX,dword ptr [ESP + 0x130]     ; 005a2ca0
        ;   Label: LAB_005a2ca0
    PUSH EAX                            ; 005a2ca7
    PUSH EBX                            ; 005a2ca8
    PUSH EDI                            ; 005a2ca9
    MOV EDX,dword ptr [ESP + 0x11c]     ; 005a2caa
    PUSH EDX                            ; 005a2cb1
    CALL crt_unknown.c_FUN_005a2950     ; 005a2cb2
        ;   XREF to: 005a2950 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a2950()
    ADD ESP,0x10                        ; 005a2cb7
    MOV EDI,EAX                         ; 005a2cba
    MOV EBX,dword ptr [ESP + 0x134]     ; 005a2cbc
        ;   Label: LAB_005a2cbc
    TEST EBX,EBX                        ; 005a2cc3
    JZ 0x005a2cf3                       ; 005a2cc5
        ;   XREF to: 005a2cf3 (CONDITIONAL_JUMP)  ; LAB_005a2cf3
    MOV EAX,dword ptr [ESP + 0x124]     ; 005a2cc7
    MOV dword ptr [ESP + 0x128],EAX     ; 005a2cce
    JZ 0x005a2ce2                       ; 005a2cd5
        ;   XREF to: 005a2ce2 (CONDITIONAL_JUMP)  ; LAB_005a2ce2
    MOV ECX,EBP                         ; 005a2cd7
    MOV ESI,EAX                         ; 005a2cd9
    CALL crt_unknown.c_FUN_005a29c0     ; 005a2cdb
        ;   XREF to: 005a29c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a29c0()
    JMP 0x005a2d0a                      ; 005a2ce0
        ;   XREF to: 005a2d0a (UNCONDITIONAL_JUMP)  ; LAB_005a2d0a
    MOV EBX,dword ptr [ESP + 0x124]     ; 005a2ce2
        ;   Label: LAB_005a2ce2
    MOV EDX,dword ptr [EAX]             ; 005a2ce9
    MOV EAX,dword ptr [EDI]             ; 005a2ceb
    MOV dword ptr [EBX],EAX             ; 005a2ced
    MOV dword ptr [EDI],EDX             ; 005a2cef
    JMP 0x005a2d0a                      ; 005a2cf1
        ;   XREF to: 005a2d0a (UNCONDITIONAL_JUMP)  ; LAB_005a2d0a
    LEA EAX,[ESP + 0x100]               ; 005a2cf3
        ;   Label: LAB_005a2cf3
    MOV dword ptr [ESP + 0x128],EAX     ; 005a2cfa
    MOV EAX,dword ptr [EDI]             ; 005a2d01
    MOV dword ptr [ESP + 0x100],EAX     ; 005a2d03
    MOV EAX,dword ptr [ESP + 0x124]     ; 005a2d0a
        ;   Label: LAB_005a2d0a
    MOV dword ptr [ESP + 0x144],EAX     ; 005a2d11
    MOV dword ptr [ESP + 0x138],EAX     ; 005a2d18
    MOV EAX,dword ptr [ESP + 0x174]     ; 005a2d1f
    DEC EAX                             ; 005a2d26
    IMUL EAX,EBP                        ; 005a2d27
    MOV EDX,dword ptr [ESP + 0x124]     ; 005a2d2a
    ADD EDX,EAX                         ; 005a2d31
    MOV EAX,dword ptr [ESP + 0x174]     ; 005a2d33
    MOV dword ptr [ESP + 0x13c],EDX     ; 005a2d3a
    MOV dword ptr [ESP + 0x140],EDX     ; 005a2d41
    MOV dword ptr [ESP + 0x148],EAX     ; 005a2d48
    CMP dword ptr [ESP + 0x148],0x0     ; 005a2d4f
        ;   Label: LAB_005a2d4f
    JZ 0x005a2ded                       ; 005a2d57
        ;   XREF to: 005a2ded (CONDITIONAL_JUMP)  ; LAB_005a2ded
    MOV EAX,dword ptr [ESP + 0x128]     ; 005a2d5d
    PUSH EAX                            ; 005a2d64
    MOV EDX,dword ptr [ESP + 0x148]     ; 005a2d65
    PUSH EDX                            ; 005a2d6c
    CALL dword ptr [ESP + 0x138]        ; 005a2d6d
    ADD ESP,0x8                         ; 005a2d74
    TEST EAX,EAX                        ; 005a2d77
    JG 0x005a2ded                       ; 005a2d79
        ;   XREF to: 005a2ded (CONDITIONAL_JUMP)  ; LAB_005a2ded
    JNZ 0x005a2dc9                      ; 005a2d7b
        ;   XREF to: 005a2dc9 (CONDITIONAL_JUMP)  ; LAB_005a2dc9
    CMP dword ptr [ESP + 0x134],0x0     ; 005a2d7d
    JZ 0x005a2d9e                       ; 005a2d85
        ;   XREF to: 005a2d9e (CONDITIONAL_JUMP)  ; LAB_005a2d9e
    MOV EDI,dword ptr [ESP + 0x144]     ; 005a2d87
    MOV ESI,dword ptr [ESP + 0x138]     ; 005a2d8e
    MOV ECX,EBP                         ; 005a2d95
    CALL crt_unknown.c_FUN_005a29c0     ; 005a2d97
        ;   XREF to: 005a29c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a29c0()
    JMP 0x005a2dc2                      ; 005a2d9c
        ;   XREF to: 005a2dc2 (UNCONDITIONAL_JUMP)  ; LAB_005a2dc2
    MOV EAX,dword ptr [ESP + 0x144]     ; 005a2d9e
        ;   Label: LAB_005a2d9e
    MOV EDI,dword ptr [ESP + 0x138]     ; 005a2da5
    MOV EDX,dword ptr [ESP + 0x138]     ; 005a2dac
    MOV EAX,dword ptr [EAX]             ; 005a2db3
    MOV EDI,dword ptr [EDI]             ; 005a2db5
    MOV dword ptr [EDX],EAX             ; 005a2db7
    MOV EAX,dword ptr [ESP + 0x144]     ; 005a2db9
    MOV dword ptr [EAX],EDI             ; 005a2dc0
    ADD dword ptr [ESP + 0x138],EBP     ; 005a2dc2
        ;   Label: LAB_005a2dc2
    MOV ESI,dword ptr [ESP + 0x144]     ; 005a2dc9
        ;   Label: LAB_005a2dc9
    MOV EDI,dword ptr [ESP + 0x148]     ; 005a2dd0
    ADD ESI,EBP                         ; 005a2dd7
    DEC EDI                             ; 005a2dd9
    MOV dword ptr [ESP + 0x144],ESI     ; 005a2dda
    MOV dword ptr [ESP + 0x148],EDI     ; 005a2de1
    JMP 0x005a2d4f                      ; 005a2de8
        ;   XREF to: 005a2d4f (UNCONDITIONAL_JUMP)  ; LAB_005a2d4f
    CMP dword ptr [ESP + 0x148],0x0     ; 005a2ded
        ;   Label: LAB_005a2ded
    JZ 0x005a2e8b                       ; 005a2df5
        ;   XREF to: 005a2e8b (CONDITIONAL_JUMP)  ; LAB_005a2e8b
    MOV EDX,dword ptr [ESP + 0x128]     ; 005a2dfb
    PUSH EDX                            ; 005a2e02
    MOV EBX,dword ptr [ESP + 0x144]     ; 005a2e03
    PUSH EBX                            ; 005a2e0a
    CALL dword ptr [ESP + 0x138]        ; 005a2e0b
    ADD ESP,0x8                         ; 005a2e12
    TEST EAX,EAX                        ; 005a2e15
    JL 0x005a2e8b                       ; 005a2e17
        ;   XREF to: 005a2e8b (CONDITIONAL_JUMP)  ; LAB_005a2e8b
    JNZ 0x005a2e67                      ; 005a2e19
        ;   XREF to: 005a2e67 (CONDITIONAL_JUMP)  ; LAB_005a2e67
    CMP dword ptr [ESP + 0x134],0x0     ; 005a2e1b
    JZ 0x005a2e3c                       ; 005a2e23
        ;   XREF to: 005a2e3c (CONDITIONAL_JUMP)  ; LAB_005a2e3c
    MOV EDI,dword ptr [ESP + 0x13c]     ; 005a2e25
    MOV ESI,dword ptr [ESP + 0x140]     ; 005a2e2c
    MOV ECX,EBP                         ; 005a2e33
    CALL crt_unknown.c_FUN_005a29c0     ; 005a2e35
        ;   XREF to: 005a29c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a29c0()
    JMP 0x005a2e60                      ; 005a2e3a
        ;   XREF to: 005a2e60 (UNCONDITIONAL_JUMP)  ; LAB_005a2e60
    MOV EAX,dword ptr [ESP + 0x13c]     ; 005a2e3c
        ;   Label: LAB_005a2e3c
    MOV EDX,dword ptr [ESP + 0x140]     ; 005a2e43
    MOV EBX,dword ptr [ESP + 0x140]     ; 005a2e4a
    MOV EAX,dword ptr [EAX]             ; 005a2e51
    MOV EDX,dword ptr [EDX]             ; 005a2e53
    MOV dword ptr [EBX],EAX             ; 005a2e55
    MOV EAX,dword ptr [ESP + 0x13c]     ; 005a2e57
    MOV dword ptr [EAX],EDX             ; 005a2e5e
    SUB dword ptr [ESP + 0x13c],EBP     ; 005a2e60
        ;   Label: LAB_005a2e60
    MOV EBX,dword ptr [ESP + 0x140]     ; 005a2e67
        ;   Label: LAB_005a2e67
    MOV ECX,dword ptr [ESP + 0x148]     ; 005a2e6e
    SUB EBX,EBP                         ; 005a2e75
    DEC ECX                             ; 005a2e77
    MOV dword ptr [ESP + 0x140],EBX     ; 005a2e78
    MOV dword ptr [ESP + 0x148],ECX     ; 005a2e7f
    JMP 0x005a2ded                      ; 005a2e86
        ;   XREF to: 005a2ded (UNCONDITIONAL_JUMP)  ; LAB_005a2ded
    CMP dword ptr [ESP + 0x148],0x0     ; 005a2e8b
        ;   Label: LAB_005a2e8b
    JZ 0x005a2f1e                       ; 005a2e93
        ;   XREF to: 005a2f1e (CONDITIONAL_JUMP)  ; LAB_005a2f1e
    CMP dword ptr [ESP + 0x134],0x0     ; 005a2e99
    JZ 0x005a2eba                       ; 005a2ea1
        ;   XREF to: 005a2eba (CONDITIONAL_JUMP)  ; LAB_005a2eba
    MOV EDI,dword ptr [ESP + 0x140]     ; 005a2ea3
    MOV ESI,dword ptr [ESP + 0x144]     ; 005a2eaa
    MOV ECX,EBP                         ; 005a2eb1
    CALL crt_unknown.c_FUN_005a29c0     ; 005a2eb3
        ;   XREF to: 005a29c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a29c0()
    JMP 0x005a2ede                      ; 005a2eb8
        ;   XREF to: 005a2ede (UNCONDITIONAL_JUMP)  ; LAB_005a2ede
    MOV EDX,dword ptr [ESP + 0x140]     ; 005a2eba
        ;   Label: LAB_005a2eba
    MOV EAX,dword ptr [ESP + 0x144]     ; 005a2ec1
    MOV EBX,dword ptr [ESP + 0x144]     ; 005a2ec8
    MOV EDX,dword ptr [EDX]             ; 005a2ecf
    MOV EAX,dword ptr [EAX]             ; 005a2ed1
    MOV dword ptr [EBX],EDX             ; 005a2ed3
    MOV EDX,dword ptr [ESP + 0x140]     ; 005a2ed5
    MOV dword ptr [EDX],EAX             ; 005a2edc
    MOV EDI,dword ptr [ESP + 0x144]     ; 005a2ede
        ;   Label: LAB_005a2ede
    ADD EDI,EBP                         ; 005a2ee5
    MOV EAX,dword ptr [ESP + 0x148]     ; 005a2ee7
    MOV dword ptr [ESP + 0x144],EDI     ; 005a2eee
    DEC EAX                             ; 005a2ef5
    MOV dword ptr [ESP + 0x148],EAX     ; 005a2ef6
    JZ 0x005a2f1e                       ; 005a2efd
        ;   XREF to: 005a2f1e (CONDITIONAL_JUMP)  ; LAB_005a2f1e
    MOV EBX,dword ptr [ESP + 0x140]     ; 005a2eff
    LEA ECX,[EAX + -0x1]                ; 005a2f06
    SUB EBX,EBP                         ; 005a2f09
    MOV dword ptr [ESP + 0x148],ECX     ; 005a2f0b
    MOV dword ptr [ESP + 0x140],EBX     ; 005a2f12
    JMP 0x005a2d4f                      ; 005a2f19
        ;   XREF to: 005a2d4f (UNCONDITIONAL_JUMP)  ; LAB_005a2d4f
    MOV EAX,dword ptr [ESP + 0x174]     ; 005a2f1e
        ;   Label: LAB_005a2f1e
    IMUL EAX,EBP                        ; 005a2f25
    MOV EDX,dword ptr [ESP + 0x124]     ; 005a2f28
    MOV ECX,dword ptr [ESP + 0x138]     ; 005a2f2f
    MOV ESI,dword ptr [ESP + 0x124]     ; 005a2f36
    MOV EDI,dword ptr [ESP + 0x138]     ; 005a2f3d
    ADD EDX,EAX                         ; 005a2f44
    MOV EAX,dword ptr [ESP + 0x144]     ; 005a2f46
    SUB ECX,ESI                         ; 005a2f4d
    SUB EAX,EDI                         ; 005a2f4f
    MOV dword ptr [ESP + 0x118],EDX     ; 005a2f51
    CMP ECX,EAX                         ; 005a2f58
    JL 0x005a2f5e                       ; 005a2f5a
        ;   XREF to: 005a2f5e (CONDITIONAL_JUMP)  ; LAB_005a2f5e
    MOV ECX,EAX                         ; 005a2f5c
    TEST ECX,ECX                        ; 005a2f5e
        ;   Label: LAB_005a2f5e
    JBE 0x005a2f97                      ; 005a2f60
        ;   XREF to: 005a2f97 (CONDITIONAL_JUMP)  ; LAB_005a2f97
    MOV EDI,dword ptr [ESP + 0x144]     ; 005a2f62
    MOV ESI,dword ptr [ESP + 0x124]     ; 005a2f69
    SUB EDI,ECX                         ; 005a2f70
    PUSH ES                             ; 005a2f72
    PUSH DS                             ; 005a2f73
    POP ES                              ; 005a2f74
    MOVZX EDX,CL                        ; 005a2f75
    SHR ECX,0x2                         ; 005a2f78
    JZ 0x005a2f88                       ; 005a2f7b
        ;   XREF to: 005a2f88 (CONDITIONAL_JUMP)  ; LAB_005a2f88
    MOV EAX,dword ptr [EDI]             ; 005a2f7d
        ;   Label: LAB_005a2f7d
    XCHG dword ptr [ESI],EAX            ; 005a2f7f
    STOSD ES:EDI                        ; 005a2f81
    ADD ESI,0x4                         ; 005a2f82
    DEC ECX                             ; 005a2f85
    JNZ 0x005a2f7d                      ; 005a2f86
        ;   XREF to: 005a2f7d (CONDITIONAL_JUMP)  ; LAB_005a2f7d
    AND DL,0x3                          ; 005a2f88
        ;   Label: LAB_005a2f88
    JZ 0x005a2f96                       ; 005a2f8b
        ;   XREF to: 005a2f96 (CONDITIONAL_JUMP)  ; LAB_005a2f96
    MOV AL,byte ptr [EDI]               ; 005a2f8d
        ;   Label: LAB_005a2f8d
    XCHG byte ptr [ESI],AL              ; 005a2f8f
    STOSB ES:EDI                        ; 005a2f91
    INC ESI                             ; 005a2f92
    DEC EDX                             ; 005a2f93
    JNZ 0x005a2f8d                      ; 005a2f94
        ;   XREF to: 005a2f8d (CONDITIONAL_JUMP)  ; LAB_005a2f8d
    POP ES                              ; 005a2f96
        ;   Label: LAB_005a2f96
    MOV ECX,dword ptr [ESP + 0x118]     ; 005a2f97
        ;   Label: LAB_005a2f97
    MOV EAX,dword ptr [ESP + 0x13c]     ; 005a2f9e
    SUB ECX,EAX                         ; 005a2fa5
    MOV EDX,dword ptr [ESP + 0x140]     ; 005a2fa7
    SUB ECX,EBP                         ; 005a2fae
    SUB EAX,EDX                         ; 005a2fb0
    CMP EAX,ECX                         ; 005a2fb2
    JNC 0x005a2fb8                      ; 005a2fb4
        ;   XREF to: 005a2fb8 (CONDITIONAL_JUMP)  ; LAB_005a2fb8
    MOV ECX,EAX                         ; 005a2fb6
    TEST ECX,ECX                        ; 005a2fb8
        ;   Label: LAB_005a2fb8
    JBE 0x005a2ff1                      ; 005a2fba
        ;   XREF to: 005a2ff1 (CONDITIONAL_JUMP)  ; LAB_005a2ff1
    MOV EDI,dword ptr [ESP + 0x118]     ; 005a2fbc
    MOV ESI,dword ptr [ESP + 0x144]     ; 005a2fc3
    SUB EDI,ECX                         ; 005a2fca
    PUSH ES                             ; 005a2fcc
    PUSH DS                             ; 005a2fcd
    POP ES                              ; 005a2fce
    MOVZX EDX,CL                        ; 005a2fcf
    SHR ECX,0x2                         ; 005a2fd2
    JZ 0x005a2fe2                       ; 005a2fd5
        ;   XREF to: 005a2fe2 (CONDITIONAL_JUMP)  ; LAB_005a2fe2
    MOV EAX,dword ptr [EDI]             ; 005a2fd7
        ;   Label: LAB_005a2fd7
    XCHG dword ptr [ESI],EAX            ; 005a2fd9
    STOSD ES:EDI                        ; 005a2fdb
    ADD ESI,0x4                         ; 005a2fdc
    DEC ECX                             ; 005a2fdf
    JNZ 0x005a2fd7                      ; 005a2fe0
        ;   XREF to: 005a2fd7 (CONDITIONAL_JUMP)  ; LAB_005a2fd7
    AND DL,0x3                          ; 005a2fe2
        ;   Label: LAB_005a2fe2
    JZ 0x005a2ff0                       ; 005a2fe5
        ;   XREF to: 005a2ff0 (CONDITIONAL_JUMP)  ; LAB_005a2ff0
    MOV AL,byte ptr [EDI]               ; 005a2fe7
        ;   Label: LAB_005a2fe7
    XCHG byte ptr [ESI],AL              ; 005a2fe9
    STOSB ES:EDI                        ; 005a2feb
    INC ESI                             ; 005a2fec
    DEC EDX                             ; 005a2fed
    JNZ 0x005a2fe7                      ; 005a2fee
        ;   XREF to: 005a2fe7 (CONDITIONAL_JUMP)  ; LAB_005a2fe7
    POP ES                              ; 005a2ff0
        ;   Label: LAB_005a2ff0
    MOV EBX,dword ptr [ESP + 0x144]     ; 005a2ff1
        ;   Label: LAB_005a2ff1
    MOV ECX,dword ptr [ESP + 0x138]     ; 005a2ff8
    MOV EDI,dword ptr [ESP + 0x13c]     ; 005a2fff
    MOV ESI,dword ptr [ESP + 0x140]     ; 005a3006
    SUB EBX,ECX                         ; 005a300d
    SUB EDI,ESI                         ; 005a300f
    MOV ECX,dword ptr [ESP + 0x114]     ; 005a3011
    MOV ESI,dword ptr [ESP + 0x118]     ; 005a3018
    SHL ECX,0x2                         ; 005a301f
    SUB ESI,EDI                         ; 005a3022
    CMP EDI,EBX                         ; 005a3024
    JC 0x005a3040                       ; 005a3026
        ;   XREF to: 005a3040 (CONDITIONAL_JUMP)  ; LAB_005a3040
    MOV EAX,EDI                         ; 005a3028
    XOR EDX,EDX                         ; 005a302a
    DIV EBP                             ; 005a302c
    XOR EDX,EDX                         ; 005a302e
    MOV dword ptr [ESP + ECX*0x1 + 0x80],EAX ; 005a3030
    MOV EAX,EBX                         ; 005a3037
    DIV EBP                             ; 005a3039
    MOV dword ptr [ESP + ECX*0x1],ESI   ; 005a303b
    JMP 0x005a306c                      ; 005a303e
        ;   XREF to: 005a306c (UNCONDITIONAL_JUMP)  ; LAB_005a306c
    CMP EBX,EBP                         ; 005a3040
        ;   Label: LAB_005a3040
    JBE 0x005a2b9c                      ; 005a3042
        ;   XREF to: 005a2b9c (CONDITIONAL_JUMP)  ; LAB_005a2b9c
    MOV EAX,dword ptr [ESP + 0x124]     ; 005a3048
    XOR EDX,EDX                         ; 005a304f
    MOV dword ptr [ESP + ECX*0x1],EAX   ; 005a3051
    MOV EAX,EBX                         ; 005a3054
    DIV EBP                             ; 005a3056
    XOR EDX,EDX                         ; 005a3058
    MOV dword ptr [ESP + ECX*0x1 + 0x80],EAX ; 005a305a
    MOV EAX,EDI                         ; 005a3061
    DIV EBP                             ; 005a3063
    MOV dword ptr [ESP + 0x124],ESI     ; 005a3065
    MOV dword ptr [ESP + 0x174],EAX     ; 005a306c
        ;   Label: LAB_005a306c
    INC dword ptr [ESP + 0x114]         ; 005a3073
    JMP 0x005a2a5d                      ; 005a307a
        ;   XREF to: 005a2a5d (UNCONDITIONAL_JUMP)  ; LAB_005a2a5d
    ADD ESP,0x150                       ; 005a307f
        ;   Label: LAB_005a307f
    POP EBP                             ; 005a3085
    POP GS                              ; 005a3086
    POP FS                              ; 005a3088
    POP ES                              ; 005a308a
    POP EDI                             ; 005a308b
    POP ESI                             ; 005a308c
    POP EBX                             ; 005a308d
    RET                                 ; 005a308e

