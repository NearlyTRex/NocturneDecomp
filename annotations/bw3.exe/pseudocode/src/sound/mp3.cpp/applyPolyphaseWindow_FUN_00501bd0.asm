; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_applyPolyphaseWindow_FUN_00501bd0(float *param_1,void *param_2,int param_3)
;
; Local Variables:
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
; XREF[1]:
;   sound_mp3.cpp_CMP3Decoder_synthesisPoly_FUN_005020e0 at 0050211f
;
; Referenced Globals:
;   undefined4 DAT_005ca2df
;   undefined4 DAT_005ca2e7
;   undefined4 DAT_005ca2ef
;   undefined4 DAT_005ca2f7
;   undefined4 DAT_005ca2ff
;   undefined4 DAT_005ca307
;   undefined4 DAT_005ca30f
;   undefined4 DAT_005ca317
;   undefined4 DAT_006011b0
;   undefined4 DAT_01d93248
;   undefined4 DAT_01d9324c
;   undefined4 DAT_01d93250
;   undefined4 DAT_01d93254
;   undefined4 DAT_01d93258
;   undefined4 DAT_01d93260
;   ... and 14 more
;
; Called Functions:
;   crt_memory.c_memset_FUN_005a28f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00501bd0
        ;   Label: sound_mp3.cpp_applyPolyphaseWindow_FUN_00501bd0
    PUSH ESI                            ; 00501bd1
    PUSH EDI                            ; 00501bd2
    PUSH EBP                            ; 00501bd3
    MOV EBP,ESP                         ; 00501bd4
    SUB ESP,0x8c                        ; 00501bd6
    CMP dword ptr [0x006011b0],0x1      ; 00501bdc | DAT_006011b0
    JNZ 0x00501e9f                      ; 00501be3
        ;   XREF to: 00501e9f (CONDITIONAL_JUMP)  ; LAB_00501e9f
    XOR EDX,EDX                         ; 00501be9
    XOR ECX,ECX                         ; 00501beb
    FLD double ptr [0x005ca2df]         ; 00501bed | DAT_005ca2df
    FLD double ptr [0x005ca2ff]         ; 00501bf3 | DAT_005ca2ff
    MOV dword ptr [EBP + -0x4],EDX      ; 00501bf9
        ;   Label: LAB_00501bf9
    FILD dword ptr [EBP + -0x4]         ; 00501bfc
    FADD ST0,ST1                        ; 00501bff
    FMUL ST2                            ; 00501c01
    FSIN                                ; 00501c03
    ADD ECX,0x8                         ; 00501c05
    INC EDX                             ; 00501c08
    FSTP double ptr [ECX + 0x1d93090]   ; 00501c09
    CMP EDX,0x24                        ; 00501c0f
    JL 0x00501bf9                       ; 00501c12
        ;   XREF to: 00501bf9 (CONDITIONAL_JUMP)  ; LAB_00501bf9
    FSTP ST0                            ; 00501c14
    FSTP ST0                            ; 00501c16
    XOR EDX,EDX                         ; 00501c18
    XOR ECX,ECX                         ; 00501c1a
    FLD double ptr [0x005ca2df]         ; 00501c1c | DAT_005ca2df
    FLD double ptr [0x005ca2ff]         ; 00501c22 | DAT_005ca2ff
    MOV dword ptr [EBP + -0x4],EDX      ; 00501c28
        ;   Label: LAB_00501c28
    FILD dword ptr [EBP + -0x4]         ; 00501c2b
    FADD ST0,ST1                        ; 00501c2e
    FMUL ST2                            ; 00501c30
    FSIN                                ; 00501c32
    ADD ECX,0x8                         ; 00501c34
    INC EDX                             ; 00501c37
    FSTP double ptr [ECX + 0x1d931b0]   ; 00501c38
    CMP EDX,0x12                        ; 00501c3e
    JL 0x00501c28                       ; 00501c41
        ;   XREF to: 00501c28 (CONDITIONAL_JUMP)  ; LAB_00501c28
    FSTP ST0                            ; 00501c43
    MOV EAX,0x90                        ; 00501c45
    MOV EBX,0x3ff00000                  ; 00501c4a
    FSTP ST0                            ; 00501c4f
    ADD EAX,0x8                         ; 00501c51
        ;   Label: LAB_00501c51
    XOR ECX,ECX                         ; 00501c54
    MOV dword ptr [EAX + 0x1d931b4],EBX ; 00501c56 | DAT_01d9324c | DAT_01d93254
    MOV dword ptr [EAX + 0x1d931b0],ECX ; 00501c5c | DAT_01d93248 | DAT_01d93250
    CMP EAX,0xc0                        ; 00501c62
    JNZ 0x00501c51                      ; 00501c67
        ;   XREF to: 00501c51 (CONDITIONAL_JUMP)  ; LAB_00501c51
    MOV EDX,0x18                        ; 00501c69
    MOV ECX,EAX                         ; 00501c6e
    FLD double ptr [0x005ca2e7]         ; 00501c70 | DAT_005ca2e7
    FLD double ptr [0x005ca307]         ; 00501c76 | DAT_005ca307
    FLD double ptr [0x005ca2ff]         ; 00501c7c | DAT_005ca2ff
    MOV dword ptr [EBP + -0x4],EDX      ; 00501c82
        ;   Label: LAB_00501c82
    FILD dword ptr [EBP + -0x4]         ; 00501c85
    FADD ST0,ST1                        ; 00501c88
    FADD ST0,ST2                        ; 00501c8a
    FMUL ST3                            ; 00501c8c
    FSIN                                ; 00501c8e
    ADD ECX,0x8                         ; 00501c90
    INC EDX                             ; 00501c93
    FSTP double ptr [ECX + 0x1d931b0]   ; 00501c94 | DAT_01d93258 | DAT_01d93260
    CMP EDX,0x1e                        ; 00501c9a
    JL 0x00501c82                       ; 00501c9d
        ;   XREF to: 00501c82 (CONDITIONAL_JUMP)  ; LAB_00501c82
    FSTP ST0                            ; 00501c9f
    MOV EAX,0xf0                        ; 00501ca1
    FSTP ST0                            ; 00501ca6
    FSTP ST0                            ; 00501ca8
    ADD EAX,0x8                         ; 00501caa
        ;   Label: LAB_00501caa
    XOR ESI,ESI                         ; 00501cad
    MOV dword ptr [EAX + 0x1d931b0],ESI ; 00501caf | DAT_01d932a8 | DAT_01d932b0
    MOV dword ptr [EAX + 0x1d931b4],ESI ; 00501cb5 | DAT_01d932ac | DAT_01d932b4
    CMP EAX,0x120                       ; 00501cbb
    JNZ 0x00501caa                      ; 00501cc0
        ;   XREF to: 00501caa (CONDITIONAL_JUMP)  ; LAB_00501caa
    XOR EAX,EAX                         ; 00501cc2
    ADD EAX,0x8                         ; 00501cc4
        ;   Label: LAB_00501cc4
    XOR EDX,EDX                         ; 00501cc7
    MOV dword ptr [EAX + 0x1d933f0],EDX ; 00501cc9
    MOV dword ptr [EAX + 0x1d933f4],EDX ; 00501ccf
    CMP EAX,0x30                        ; 00501cd5
    JNZ 0x00501cc4                      ; 00501cd8
        ;   XREF to: 00501cc4 (CONDITIONAL_JUMP)  ; LAB_00501cc4
    MOV EDX,0x6                         ; 00501cda
    MOV ECX,EAX                         ; 00501cdf
    FLD double ptr [0x005ca2e7]         ; 00501ce1 | DAT_005ca2e7
    FLD double ptr [0x005ca30f]         ; 00501ce7 | DAT_005ca30f
    FLD double ptr [0x005ca2ff]         ; 00501ced | DAT_005ca2ff
    MOV dword ptr [EBP + -0x4],EDX      ; 00501cf3
        ;   Label: LAB_00501cf3
    FILD dword ptr [EBP + -0x4]         ; 00501cf6
    FADD ST0,ST1                        ; 00501cf9
    FADD ST0,ST2                        ; 00501cfb
    FMUL ST3                            ; 00501cfd
    FSIN                                ; 00501cff
    ADD ECX,0x8                         ; 00501d01
    INC EDX                             ; 00501d04
    FSTP double ptr [ECX + 0x1d933f0]   ; 00501d05
    CMP EDX,0xc                         ; 00501d0b
    JL 0x00501cf3                       ; 00501d0e
        ;   XREF to: 00501cf3 (CONDITIONAL_JUMP)  ; LAB_00501cf3
    FSTP ST0                            ; 00501d10
    MOV EAX,0x60                        ; 00501d12
    MOV ESI,0x3ff00000                  ; 00501d17
    FSTP ST0                            ; 00501d1c
    FSTP ST0                            ; 00501d1e
    ADD EAX,0x8                         ; 00501d20
        ;   Label: LAB_00501d20
    XOR EBX,EBX                         ; 00501d23
    MOV dword ptr [EAX + 0x1d933f4],ESI ; 00501d25 | DAT_01d9345c | DAT_01d93464
    MOV dword ptr [EAX + 0x1d933f0],EBX ; 00501d2b | DAT_01d93458 | DAT_01d93460
    CMP EAX,0x90                        ; 00501d31
    JNZ 0x00501d20                      ; 00501d36
        ;   XREF to: 00501d20 (CONDITIONAL_JUMP)  ; LAB_00501d20
    MOV EDX,0x12                        ; 00501d38
    MOV ECX,EAX                         ; 00501d3d
    FLD double ptr [0x005ca2df]         ; 00501d3f | DAT_005ca2df
    FLD double ptr [0x005ca2ff]         ; 00501d45 | DAT_005ca2ff
    MOV dword ptr [EBP + -0x4],EDX      ; 00501d4b
        ;   Label: LAB_00501d4b
    FILD dword ptr [EBP + -0x4]         ; 00501d4e
    FADD ST0,ST1                        ; 00501d51
    FMUL ST2                            ; 00501d53
    FSIN                                ; 00501d55
    ADD ECX,0x8                         ; 00501d57
    INC EDX                             ; 00501d5a
    FSTP double ptr [ECX + 0x1d933f0]   ; 00501d5b | DAT_01d93468 | DAT_01d93470
    CMP EDX,0x24                        ; 00501d61
    JL 0x00501d4b                       ; 00501d64
        ;   XREF to: 00501d4b (CONDITIONAL_JUMP)  ; LAB_00501d4b
    FSTP ST0                            ; 00501d66
    FSTP ST0                            ; 00501d68
    XOR EDX,EDX                         ; 00501d6a
    XOR ECX,ECX                         ; 00501d6c
    FLD double ptr [0x005ca2e7]         ; 00501d6e | DAT_005ca2e7
    FLD double ptr [0x005ca2ff]         ; 00501d74 | DAT_005ca2ff
    MOV dword ptr [EBP + -0x4],EDX      ; 00501d7a
        ;   Label: LAB_00501d7a
    FILD dword ptr [EBP + -0x4]         ; 00501d7d
    FADD ST0,ST1                        ; 00501d80
    FMUL ST2                            ; 00501d82
    FSIN                                ; 00501d84
    ADD ECX,0x8                         ; 00501d86
    INC EDX                             ; 00501d89
    FSTP double ptr [ECX + 0x1d932d0]   ; 00501d8a
    CMP EDX,0xc                         ; 00501d90
    JL 0x00501d7a                       ; 00501d93
        ;   XREF to: 00501d7a (CONDITIONAL_JUMP)  ; LAB_00501d7a
    FSTP ST0                            ; 00501d95
    MOV EAX,0x60                        ; 00501d97
    FSTP ST0                            ; 00501d9c
    ADD EAX,0x8                         ; 00501d9e
        ;   Label: LAB_00501d9e
    XOR EDI,EDI                         ; 00501da1
    MOV dword ptr [EAX + 0x1d932d0],EDI ; 00501da3 | DAT_01d93338 | DAT_01d93340
    MOV dword ptr [EAX + 0x1d932d4],EDI ; 00501da9 | DAT_01d9333c | DAT_01d93344
    CMP EAX,0x120                       ; 00501daf
    JNZ 0x00501d9e                      ; 00501db4
        ;   XREF to: 00501d9e (CONDITIONAL_JUMP)  ; LAB_00501d9e
    MOV EBX,0xc                         ; 00501db6
    MOV dword ptr [EBP + -0x14],EDI     ; 00501dbb
    MOV EDI,0x1                         ; 00501dbe
    MOV dword ptr [EBP + -0x20],EBX     ; 00501dc3
    MOV ECX,0x1                         ; 00501dc6
        ;   Label: LAB_00501dc6
    MOV EDX,dword ptr [EBP + -0x20]     ; 00501dcb
    ADD EDX,ECX                         ; 00501dce
    MOV EBX,dword ptr [EBP + -0x14]     ; 00501dd0
    CMP EDX,ECX                         ; 00501dd3
    JLE 0x00501e04                      ; 00501dd5
        ;   XREF to: 00501e04 (CONDITIONAL_JUMP)  ; LAB_00501e04
    FLD double ptr [0x005ca2ef]         ; 00501dd7 | DAT_005ca2ef
    LEA ESI,[EDI + 0x6]                 ; 00501ddd
    MOV dword ptr [EBP + -0x4],ESI      ; 00501de0
        ;   Label: LAB_00501de0
    FILD dword ptr [EBP + -0x4]         ; 00501de3
    FMUL ST1                            ; 00501de6
    MOV dword ptr [EBP + -0x4],ECX      ; 00501de8
    FILD dword ptr [EBP + -0x4]         ; 00501deb
    FMULP                               ; 00501dee
    FCOS                                ; 00501df0
    ADD EBX,0x8                         ; 00501df2
    ADD ECX,0x2                         ; 00501df5
    FSTP double ptr [EBX + 0x1d93510]   ; 00501df8
    CMP ECX,EDX                         ; 00501dfe
    JL 0x00501de0                       ; 00501e00
        ;   XREF to: 00501de0 (CONDITIONAL_JUMP)  ; LAB_00501de0
    FSTP ST0                            ; 00501e02
    MOV ESI,dword ptr [EBP + -0x14]     ; 00501e04
        ;   Label: LAB_00501e04
    ADD ESI,0x30                        ; 00501e07
    ADD EDI,0x2                         ; 00501e0a
    MOV dword ptr [EBP + -0x14],ESI     ; 00501e0d
    CMP EDI,0x19                        ; 00501e10
    JNZ 0x00501dc6                      ; 00501e13
        ;   XREF to: 00501dc6 (CONDITIONAL_JUMP)  ; LAB_00501dc6
    MOV EAX,0x90                        ; 00501e15
    MOV EDX,0x26                        ; 00501e1a
    XOR EDI,EDI                         ; 00501e1f
    MOV dword ptr [EBP + -0x1c],EAX     ; 00501e21
    MOV dword ptr [EBP + -0x18],EDX     ; 00501e24
    MOV dword ptr [EBP + -0x10],EDI     ; 00501e27
    IMUL EBX,dword ptr [EBP + -0x10],0x90 ; 00501e2a
        ;   Label: LAB_00501e2a
    MOV EAX,dword ptr [EBP + -0x10]     ; 00501e31
    ADD EAX,EAX                         ; 00501e34
    ADD EAX,0x13                        ; 00501e36
    IMUL ECX,EAX,0x0                    ; 00501e39
    MOV ESI,dword ptr [EBP + -0x18]     ; 00501e3c
    MOV EDI,dword ptr [EBP + -0x1c]     ; 00501e3f
    ADD ECX,EAX                         ; 00501e42
    FLD double ptr [0x005ca2f7]         ; 00501e44 | DAT_005ca2f7
    MOV dword ptr [EBP + -0x4],0x90     ; 00501e4a
        ;   Label: LAB_00501e4a
    MOV EDX,ECX                         ; 00501e51
    MOV EAX,ECX                         ; 00501e53
    SAR EDX,0x1f                        ; 00501e55
    IDIV dword ptr [EBP + -0x4]         ; 00501e58
    MOV dword ptr [EBP + -0x4],EDX      ; 00501e5b
    FILD dword ptr [EBP + -0x4]         ; 00501e5e
    FMUL ST1                            ; 00501e61
    FCOS                                ; 00501e63
    ADD EBX,0x8                         ; 00501e65
    ADD ECX,ESI                         ; 00501e68
    FSTP double ptr [EBX + 0x1d93750]   ; 00501e6a
    CMP EBX,EDI                         ; 00501e70
    JNZ 0x00501e4a                      ; 00501e72
        ;   XREF to: 00501e4a (CONDITIONAL_JUMP)  ; LAB_00501e4a
    FSTP ST0                            ; 00501e74
    MOV ESI,dword ptr [EBP + -0x18]     ; 00501e76
    MOV EDI,dword ptr [EBP + -0x10]     ; 00501e79
    MOV EBX,dword ptr [EBP + -0x1c]     ; 00501e7c
    ADD ESI,0x4                         ; 00501e7f
    INC EDI                             ; 00501e82
    ADD EBX,0x90                        ; 00501e83
    MOV dword ptr [EBP + -0x18],ESI     ; 00501e89
    MOV dword ptr [EBP + -0x10],EDI     ; 00501e8c
    MOV dword ptr [EBP + -0x1c],EBX     ; 00501e8f
    CMP EDI,0x24                        ; 00501e92
    JL 0x00501e2a                       ; 00501e95
        ;   XREF to: 00501e2a (CONDITIONAL_JUMP)  ; LAB_00501e2a
    XOR EDX,EDX                         ; 00501e97
    MOV dword ptr [0x006011b0],EDX      ; 00501e99 | DAT_006011b0
    CMP dword ptr [EBP + 0x1c],0x2      ; 00501e9f
        ;   Label: LAB_00501e9f
    JZ 0x00501f80                       ; 00501ea3
        ;   XREF to: 00501f80 (CONDITIONAL_JUMP)  ; LAB_00501f80
    XOR EDX,EDX                         ; 00501ea9
    MOV dword ptr [EBP + -0x34],EDX     ; 00501eab
    MOV EDI,dword ptr [EBP + 0x14]      ; 00501eae
    LEA EAX,[EDX*0x4 + 0x0]             ; 00501eb1
        ;   Label: LAB_00501eb1
    ADD EAX,EDI                         ; 00501eb8
    FLD float ptr [EAX]                 ; 00501eba
    FABS                                ; 00501ebc
    FCOMP double ptr [0x005ca317]       ; 00501ebe | DAT_005ca317
    FNSTSW AX                           ; 00501ec4
    SAHF                                ; 00501ec6
    JBE 0x00501ed6                      ; 00501ec7
        ;   XREF to: 00501ed6 (CONDITIONAL_JUMP)  ; LAB_00501ed6
    MOV EAX,dword ptr [EBP + -0x34]     ; 00501ec9
    INC dword ptr [EBP + -0x34]         ; 00501ecc
    MOV dword ptr [EBP + EAX*0x4 + 0xffffff74],EDX ; 00501ecf
    INC EDX                             ; 00501ed6
        ;   Label: LAB_00501ed6
    CMP EDX,0x12                        ; 00501ed7
    JL 0x00501eb1                       ; 00501eda
        ;   XREF to: 00501eb1 (CONDITIONAL_JUMP)  ; LAB_00501eb1
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00501edc
    LEA EAX,[EDX*0x8 + 0x0]             ; 00501edf
    ADD EAX,EDX                         ; 00501ee6
    MOV EDX,0x1d93098                   ; 00501ee8
    SHL EAX,0x5                         ; 00501eed
    XOR EBX,EBX                         ; 00501ef0
    ADD EDX,EAX                         ; 00501ef2
    MOV dword ptr [EBP + -0xc],EBX      ; 00501ef4
    MOV dword ptr [EBP + -0x24],EDX     ; 00501ef7
    MOV EAX,dword ptr [EBP + -0xc]      ; 00501efa
        ;   Label: LAB_00501efa
    MOV EDX,dword ptr [EBP + 0x18]      ; 00501efd
    SHL EAX,0x2                         ; 00501f00
    ADD EDX,EAX                         ; 00501f03
    MOV dword ptr [EBP + -0x30],EDX     ; 00501f05
    MOV ESI,dword ptr [EBP + -0xc]      ; 00501f08
    IMUL EAX,ESI,0x90                   ; 00501f0b
    MOV EDX,0x1d93758                   ; 00501f11
    ADD EDX,EAX                         ; 00501f16
    MOV dword ptr [EBP + -0x2c],EDX     ; 00501f18
    MOV EAX,dword ptr [EBP + 0x14]      ; 00501f1b
    MOV dword ptr [EBP + -0x8],EAX      ; 00501f1e
    MOV EDX,dword ptr [EBP + -0x24]     ; 00501f21
    LEA EAX,[ESI*0x8 + 0x0]             ; 00501f24
    ADD EDX,EAX                         ; 00501f2b
    MOV dword ptr [EBP + -0x28],EDX     ; 00501f2d
    FLDZ                                ; 00501f30
    MOV ECX,dword ptr [EBP + 0xffffffcc] ; 00501f32
    SUB ECX,0x1                         ; 00501f38
    JL 0x00501f65                       ; 00501f3b
        ;   XREF to: 00501f65 (CONDITIONAL_JUMP)  ; LAB_00501f65
    MOV EBX,dword ptr [EBP + 0xffffffd4] ; 00501f3d
    MOV ESI,dword ptr [EBP + 0xfffffff8] ; 00501f43
    MOV EAX,dword ptr [EBP + ECX*0x4 + 0xffffff74] ; 00501f49
        ;   Label: LAB_00501f49
    FLD float ptr [ESI + EAX*0x4]       ; 00501f50
    FMUL double ptr [EBX + EAX*0x8]     ; 00501f53
    FADDP                               ; 00501f56
    SUB ECX,0x1                         ; 00501f58
    JGE 0x00501f49                      ; 00501f5b
        ;   XREF to: 00501f49 (CONDITIONAL_JUMP)  ; LAB_00501f49
    MOV EBX,dword ptr [EBP + 0xffffffd8] ; 00501f5d
    FMUL double ptr [EBX]               ; 00501f63
    MOV EBX,dword ptr [EBP + 0xffffffd0] ; 00501f65
        ;   Label: LAB_00501f65
    FSTP float ptr [EBX]                ; 00501f6b
    MOV EDI,dword ptr [EBP + -0xc]      ; 00501f6d
    INC EDI                             ; 00501f70
    MOV dword ptr [EBP + -0xc],EDI      ; 00501f71
    CMP EDI,0x24                        ; 00501f74
    JL 0x00501efa                       ; 00501f77
        ;   XREF to: 00501efa (CONDITIONAL_JUMP)  ; LAB_00501efa
    MOV ESP,EBP                         ; 00501f79
    POP EBP                             ; 00501f7b
    POP EDI                             ; 00501f7c
    POP ESI                             ; 00501f7d
    POP EBX                             ; 00501f7e
    RET                                 ; 00501f7f
    PUSH 0x90                           ; 00501f80
        ;   Label: LAB_00501f80
    PUSH 0x0                            ; 00501f85
    MOV ESI,dword ptr [EBP + 0x18]      ; 00501f87
    PUSH ESI                            ; 00501f8a
    MOV EBX,dword ptr [EBP + 0x14]      ; 00501f8b
    CALL crt_memory.c_memset_FUN_005a28f0 ; 00501f8e
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00501f93
    MOV EDX,ESI                         ; 00501f96
    XOR ECX,ECX                         ; 00501f98
    XOR EAX,EAX                         ; 00501f9a
    FLD float ptr [EBX + 0xc]           ; 00501f9c
        ;   Label: LAB_00501f9c
    FMUL double ptr [EAX + 0x1d93520]   ; 00501f9f
    FLD float ptr [EBX]                 ; 00501fa5
    FMUL double ptr [EAX + 0x1d93518]   ; 00501fa7
    FADDP                               ; 00501fad
    FLD float ptr [EBX + 0x18]          ; 00501faf
    FMUL double ptr [EAX + 0x1d93528]   ; 00501fb2
    FADDP                               ; 00501fb8
    FLD float ptr [EBX + 0x24]          ; 00501fba
    FMUL double ptr [EAX + 0x1d93530]   ; 00501fbd
    FADDP                               ; 00501fc3
    FLD float ptr [EBX + 0x30]          ; 00501fc5
    FMUL double ptr [EAX + 0x1d93538]   ; 00501fc8
    FADDP                               ; 00501fce
    FLD float ptr [EBX + 0x3c]          ; 00501fd0
    FMUL double ptr [EAX + 0x1d93540]   ; 00501fd3
    FADDP                               ; 00501fd9
    FMUL double ptr [ECX + 0x1d932d8]   ; 00501fdb
    ADD EDX,0x4                         ; 00501fe1
    ADD ECX,0x8                         ; 00501fe4
    FLD float ptr [EDX + 0x14]          ; 00501fe7
    FXCH                                ; 00501fea
    FADD ST0,ST1                        ; 00501fec
    ADD EAX,0x30                        ; 00501fee
    FSTP ST1                            ; 00501ff1
    FSTP float ptr [EDX + 0x14]         ; 00501ff3
    CMP ECX,0x60                        ; 00501ff6
    JNZ 0x00501f9c                      ; 00501ff9
        ;   XREF to: 00501f9c (CONDITIONAL_JUMP)  ; LAB_00501f9c
    MOV ECX,dword ptr [EBP + 0x18]      ; 00501ffb
    MOV EBX,dword ptr [EBP + 0x14]      ; 00501ffe
    XOR EAX,EAX                         ; 00502001
    XOR EDX,EDX                         ; 00502003
    FLD float ptr [EBX + 0x10]          ; 00502005
        ;   Label: LAB_00502005
    FMUL double ptr [EAX + 0x1d93520]   ; 00502008
    FLD float ptr [EBX + 0x4]           ; 0050200e
    FMUL double ptr [EAX + 0x1d93518]   ; 00502011
    FADDP                               ; 00502017
    FLD float ptr [EBX + 0x1c]          ; 00502019
    FMUL double ptr [EAX + 0x1d93528]   ; 0050201c
    FADDP                               ; 00502022
    FLD float ptr [EBX + 0x28]          ; 00502024
    FMUL double ptr [EAX + 0x1d93530]   ; 00502027
    FADDP                               ; 0050202d
    FLD float ptr [EBX + 0x34]          ; 0050202f
    FMUL double ptr [EAX + 0x1d93538]   ; 00502032
    FADDP                               ; 00502038
    FLD float ptr [EBX + 0x40]          ; 0050203a
    FMUL double ptr [EAX + 0x1d93540]   ; 0050203d
    FADDP                               ; 00502043
    FMUL double ptr [EDX + 0x1d932d8]   ; 00502045
    ADD ECX,0x4                         ; 0050204b
    ADD EDX,0x8                         ; 0050204e
    FLD float ptr [ECX + 0x2c]          ; 00502051
    FXCH                                ; 00502054
    FADD ST0,ST1                        ; 00502056
    ADD EAX,0x30                        ; 00502058
    FSTP ST1                            ; 0050205b
    FSTP float ptr [ECX + 0x2c]         ; 0050205d
    CMP EDX,0x60                        ; 00502060
    JNZ 0x00502005                      ; 00502063
        ;   XREF to: 00502005 (CONDITIONAL_JUMP)  ; LAB_00502005
    MOV ECX,dword ptr [EBP + 0x18]      ; 00502065
    MOV EBX,dword ptr [EBP + 0x14]      ; 00502068
    XOR EAX,EAX                         ; 0050206b
    XOR EDX,EDX                         ; 0050206d
    FLD float ptr [EBX + 0x14]          ; 0050206f
        ;   Label: LAB_0050206f
    FMUL double ptr [EAX + 0x1d93520]   ; 00502072
    FLD float ptr [EBX + 0x8]           ; 00502078
    FMUL double ptr [EAX + 0x1d93518]   ; 0050207b
    FADDP                               ; 00502081
    FLD float ptr [EBX + 0x20]          ; 00502083
    FMUL double ptr [EAX + 0x1d93528]   ; 00502086
    FADDP                               ; 0050208c
    FLD float ptr [EBX + 0x2c]          ; 0050208e
    FMUL double ptr [EAX + 0x1d93530]   ; 00502091
    FADDP                               ; 00502097
    FLD float ptr [EBX + 0x38]          ; 00502099
    FMUL double ptr [EAX + 0x1d93538]   ; 0050209c
    FADDP                               ; 005020a2
    FLD float ptr [EBX + 0x44]          ; 005020a4
    FMUL double ptr [EAX + 0x1d93540]   ; 005020a7
    FADDP                               ; 005020ad
    FMUL double ptr [EDX + 0x1d932d8]   ; 005020af
    ADD ECX,0x4                         ; 005020b5
    ADD EDX,0x8                         ; 005020b8
    FLD float ptr [ECX + 0x44]          ; 005020bb
    FXCH                                ; 005020be
    FADD ST0,ST1                        ; 005020c0
    ADD EAX,0x30                        ; 005020c2
    FSTP ST1                            ; 005020c5
    FSTP float ptr [ECX + 0x44]         ; 005020c7
    CMP EDX,0x60                        ; 005020ca
    JNZ 0x0050206f                      ; 005020cd
        ;   XREF to: 0050206f (CONDITIONAL_JUMP)  ; LAB_0050206f
    MOV ESP,EBP                         ; 005020cf
    POP EBP                             ; 005020d1
    POP EDI                             ; 005020d2
    POP ESI                             ; 005020d3
    POP EBX                             ; 005020d4
    RET                                 ; 005020d5

