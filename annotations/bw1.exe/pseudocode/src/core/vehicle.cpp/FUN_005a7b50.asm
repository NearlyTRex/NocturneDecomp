; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint FUN_005a7b50(int param_1,float param_2)
;
;
; Referenced Globals:
;   undefined4 s_model_t_horn_wav_005f8fe2+1
;   TerminatedCString s_core_vehicle_cpp_005f8ff5
;   TerminatedCString s_CMobster_process_Out_of_005f9009
;   TerminatedCString s_mobster3_dfm_005f902c
;   TerminatedCString s_mobster4_dfm_005f9039
;   TerminatedCString s_ext_modelt_fast_wav_005f9046
;   TerminatedCString s_skid_wav_005f905d
;   undefined4 DAT_005f906b
;   undefined4 DAT_005f906f
;   undefined4 DAT_005f9073
;   undefined4 DAT_005f907b
;   undefined4 DAT_005f9083
;   undefined4 DAT_005f908b
;   undefined4 DAT_0061f650
;   undefined4 DAT_00622c18
;   ... and 12 more
;
; Called Functions:
;   FUN_00408b00
;   FUN_00408bb0
;   FUN_0040c600
;   FUN_0040cd00
;   FUN_0042c010
;   FUN_004325b0
;   FUN_00447f00
;   FUN_005030e0
;   FUN_0051b160
;   FUN_0051bd60
;   FUN_0051c7d0
;   FUN_005593c0
;   FUN_00569f50
;   FUN_005735a0
;   FUN_00573980
;   ... and 3 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a7b50
        ;   Label: FUN_005a7b50
    PUSH ESI                            ; 005a7b51
    PUSH EDI                            ; 005a7b52
    PUSH EBP                            ; 005a7b53
    MOV EBP,ESP                         ; 005a7b54
    SUB ESP,0x164                       ; 005a7b56
    AND ESP,0xfffffff8                  ; 005a7b5c
    MOV EBX,dword ptr [EBP + 0x14]      ; 005a7b5f
    LEA EAX,[EBX + 0x1020]              ; 005a7b62
    MOV EDX,dword ptr [EAX]             ; 005a7b68
    FLD float ptr [EBX + 0x102c]        ; 005a7b6a
    MOV dword ptr [ESP + 0x160],EDX     ; 005a7b70
    LEA EDX,[ESP + 0xd4]                ; 005a7b77
    FILD dword ptr [ESP + 0x160]        ; 005a7b7e
    PUSH EDX                            ; 005a7b85
    LEA EDX,[ESP + 0xfc]                ; 005a7b86
    FXCH                                ; 005a7b8d
    FDIV float ptr [EBX + 0x1030]       ; 005a7b8f
    FMULP                               ; 005a7b95
    PUSH EDX                            ; 005a7b97
    FSTP float ptr [ESP + 0x148]        ; 005a7b98
    PUSH dword ptr [ESP + 0x148]        ; 005a7b9f
    PUSH EAX                            ; 005a7ba6
    CALL FUN_00447f00                   ; 005a7ba7
        ;   XREF to: 00447f00 (UNCONDITIONAL_CALL)  ; undefined FUN_00447f00()
    ADD ESP,0x10                        ; 005a7bac
    FLD float ptr [EBX + 0x102c]        ; 005a7baf
    FADD float ptr [EBP + 0x18]         ; 005a7bb5
    FST float ptr [EBX + 0x102c]        ; 005a7bb8
    FCOMP float ptr [EBX + 0x1030]      ; 005a7bbe
    FNSTSW AX                           ; 005a7bc4
    SAHF                                ; 005a7bc6
    JBE 0x005a7bdb                      ; 005a7bc7
        ;   XREF to: 005a7bdb (CONDITIONAL_JUMP)  ; LAB_005a7bdb
    FLD float ptr [EBX + 0x1030]        ; 005a7bc9
    FSUBR float ptr [EBX + 0x102c]      ; 005a7bcf
    FSTP float ptr [EBX + 0x102c]       ; 005a7bd5
    LEA EAX,[EBX + 0x1020]              ; 005a7bdb
        ;   Label: LAB_005a7bdb
    MOV EDX,dword ptr [EAX]             ; 005a7be1
    FLD float ptr [EBX + 0x102c]        ; 005a7be3
    MOV dword ptr [ESP + 0x160],EDX     ; 005a7be9
    LEA EDX,[EBX + 0x30]                ; 005a7bf0
    FILD dword ptr [ESP + 0x160]        ; 005a7bf3
    PUSH EDX                            ; 005a7bfa
    LEA ESI,[EBX + 0x20]                ; 005a7bfb
    FXCH                                ; 005a7bfe
    FDIV float ptr [EBX + 0x1030]       ; 005a7c00
    FMULP                               ; 005a7c06
    PUSH ESI                            ; 005a7c08
    FSTP float ptr [ESP + 0x148]        ; 005a7c09
    PUSH dword ptr [ESP + 0x148]        ; 005a7c10
    PUSH EAX                            ; 005a7c17
    LEA EDI,[ESP + 0xf0]                ; 005a7c18
    CALL FUN_00447f00                   ; 005a7c1f
        ;   XREF to: 00447f00 (UNCONDITIONAL_CALL)  ; undefined FUN_00447f00()
    FLD float ptr [ESI]                 ; 005a7c24
    FLD float ptr [ESI + 0x4]           ; 005a7c26
    FLD float ptr [ESI + 0x8]           ; 005a7c29
    ADD ESP,0x10                        ; 005a7c2c
    XOR EDX,EDX                         ; 005a7c2f
    LEA ESI,[ESP + 0xbc]                ; 005a7c31
    FLD float ptr [EBP + 0x18]          ; 005a7c38
    FLDZ                                ; 005a7c3b
    MOV dword ptr [ESP + 0x148],EDX     ; 005a7c3d
    FXCH ST4                            ; 005a7c44
    FSUB float ptr [ESP + 0xf8]         ; 005a7c46
    FXCH ST3                            ; 005a7c4d
    FSUB float ptr [ESP + 0xfc]         ; 005a7c4f
    FXCH ST2                            ; 005a7c56
    FSUB float ptr [ESP + 0x100]        ; 005a7c58
    FXCH ST3                            ; 005a7c5f
    FSTP float ptr [ESP + 0xbc]         ; 005a7c61
    FXCH                                ; 005a7c68
    FSTP float ptr [ESP + 0xc0]         ; 005a7c6a
    FXCH                                ; 005a7c71
    FSTP float ptr [ESP + 0xc4]         ; 005a7c73
    LEA EDX,[EBX + 0x8c4]               ; 005a7c7a
    MOVSD ES:EDI,ESI                    ; 005a7c80
    MOVSD ES:EDI,ESI                    ; 005a7c81
    MOVSD ES:EDI,ESI                    ; 005a7c82
    FXCH                                ; 005a7c83
    FCOMPP                              ; 005a7c85
    FNSTSW AX                           ; 005a7c87
    SAHF                                ; 005a7c89
    JNC 0x005a7eef                      ; 005a7c8a
        ;   XREF to: 005a7eef (CONDITIONAL_JUMP)  ; LAB_005a7eef
    FLD1                                ; 005a7c90
    FLD float ptr [ESP + 0xe0]          ; 005a7c92
    FXCH                                ; 005a7c99
    FDIV float ptr [EBP + 0x18]         ; 005a7c9b
    FXCH                                ; 005a7c9e
    FMUL ST1                            ; 005a7ca0
    FLD float ptr [ESP + 0xe4]          ; 005a7ca2
    FMUL ST2                            ; 005a7ca9
    FLD float ptr [ESP + 0xe8]          ; 005a7cab
    FMULP ST3                           ; 005a7cb2
    LEA EDI,[ESP + 0x128]               ; 005a7cb4
    LEA ESI,[ESP + 0xa4]                ; 005a7cbb
    LEA EAX,[ESP + 0x128]               ; 005a7cc2
    FXCH                                ; 005a7cc9
    FSTP float ptr [ESP + 0xa4]         ; 005a7ccb
    FSTP float ptr [ESP + 0xa8]         ; 005a7cd2
    FSTP float ptr [ESP + 0xac]         ; 005a7cd9
    MOVSD ES:EDI,ESI                    ; 005a7ce0
    MOVSD ES:EDI,ESI                    ; 005a7ce1
    MOVSD ES:EDI,ESI                    ; 005a7ce2
    CMP EDX,EAX                         ; 005a7ce3
    JZ 0x005a7d04                       ; 005a7ce5
        ;   XREF to: 005a7d04 (CONDITIONAL_JUMP)  ; LAB_005a7d04
    MOV EAX,dword ptr [ESP + 0x128]     ; 005a7ce7
    MOV dword ptr [EDX],EAX             ; 005a7cee
    MOV EAX,dword ptr [ESP + 0x12c]     ; 005a7cf0
    MOV dword ptr [EDX + 0x4],EAX       ; 005a7cf7
    MOV EAX,dword ptr [ESP + 0x130]     ; 005a7cfa
    MOV dword ptr [EDX + 0x8],EAX       ; 005a7d01
    LEA EAX,[EBX + 0x8c4]               ; 005a7d04
        ;   Label: LAB_005a7d04
    FLD float ptr [EAX + 0x4]           ; 005a7d0a
    FMUL ST0                            ; 005a7d0d
    FLD float ptr [EAX]                 ; 005a7d0f
    FMUL ST0                            ; 005a7d11
    FADDP                               ; 005a7d13
    FLD float ptr [EAX + 0x8]           ; 005a7d15
    FMUL ST0                            ; 005a7d18
    FADDP                               ; 005a7d1a
    FSQRT                               ; 005a7d1c
    FSTP float ptr [ESP + 0x148]        ; 005a7d1e
    LEA EAX,[EBX + 0x8c4]               ; 005a7d25
        ;   Label: LAB_005a7d25
    FLD float ptr [0x005f906b]          ; 005a7d2b | DAT_005f906b
    FLD float ptr [EAX]                 ; 005a7d31
    FMUL ST1                            ; 005a7d33
    FLD float ptr [EAX + 0x4]           ; 005a7d35
    FMUL ST2                            ; 005a7d38
    FLD float ptr [EAX + 0x8]           ; 005a7d3a
    FMULP ST3                           ; 005a7d3d
    LEA EDI,[ESP + 0x110]               ; 005a7d3f
    LEA ESI,[ESP + 0xb0]                ; 005a7d46
    LEA EDX,[EBX + 0x1060]              ; 005a7d4d
    LEA EAX,[ESP + 0x110]               ; 005a7d53
    FXCH                                ; 005a7d5a
    FSTP float ptr [ESP + 0xb0]         ; 005a7d5c
    FSTP float ptr [ESP + 0xb4]         ; 005a7d63
    FSTP float ptr [ESP + 0xb8]         ; 005a7d6a
    MOVSD ES:EDI,ESI                    ; 005a7d71
    MOVSD ES:EDI,ESI                    ; 005a7d72
    MOVSD ES:EDI,ESI                    ; 005a7d73
    CMP EDX,EAX                         ; 005a7d74
    JZ 0x005a7d95                       ; 005a7d76
        ;   XREF to: 005a7d95 (CONDITIONAL_JUMP)  ; LAB_005a7d95
    MOV EAX,dword ptr [ESP + 0x110]     ; 005a7d78
    MOV dword ptr [EDX],EAX             ; 005a7d7f
    MOV EAX,dword ptr [ESP + 0x114]     ; 005a7d81
    MOV dword ptr [EDX + 0x4],EAX       ; 005a7d88
    MOV EAX,dword ptr [ESP + 0x118]     ; 005a7d8b
    MOV dword ptr [EDX + 0x8],EAX       ; 005a7d92
    LEA EAX,[EBX + 0x8c4]               ; 005a7d95
        ;   Label: LAB_005a7d95
    PUSH EAX                            ; 005a7d9b
    PUSH EBX                            ; 005a7d9c
    LEA ESI,[ESP + 0x10c]               ; 005a7d9d
    LEA EDI,[ESP + 0xa0]                ; 005a7da4
    CALL FUN_00408b00                   ; 005a7dab
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b00()
    LEA ESI,[ESP + 0x10c]               ; 005a7db0
    LEA EAX,[ESP + 0xa0]                ; 005a7db7
    ADD ESP,0x8                         ; 005a7dbe
    LEA EDX,[EBX + 0x8d0]               ; 005a7dc1
    MOVSD ES:EDI,ESI                    ; 005a7dc7
    MOVSD ES:EDI,ESI                    ; 005a7dc8
    MOVSD ES:EDI,ESI                    ; 005a7dc9
    CMP EDX,EAX                         ; 005a7dca
    JZ 0x005a7deb                       ; 005a7dcc
        ;   XREF to: 005a7deb (CONDITIONAL_JUMP)  ; LAB_005a7deb
    MOV EAX,dword ptr [ESP + 0x98]      ; 005a7dce
    MOV dword ptr [EDX],EAX             ; 005a7dd5
    MOV EAX,dword ptr [ESP + 0x9c]      ; 005a7dd7
    MOV dword ptr [EDX + 0x4],EAX       ; 005a7dde
    MOV EAX,dword ptr [ESP + 0xa0]      ; 005a7de1
    MOV dword ptr [EDX + 0x8],EAX       ; 005a7de8
    MOV ESI,dword ptr [EBX + 0x938]     ; 005a7deb
        ;   Label: LAB_005a7deb
    XOR ECX,ECX                         ; 005a7df1
    TEST ESI,ESI                        ; 005a7df3
    JLE 0x005a7e27                      ; 005a7df5
        ;   XREF to: 005a7e27 (CONDITIONAL_JUMP)  ; LAB_005a7e27
    FLD float ptr [ESP + 0x148]         ; 005a7df7
    MOV ESI,EBX                         ; 005a7dfe
    FLD float ptr [ESI + 0x948]         ; 005a7e00
        ;   Label: LAB_005a7e00
    FMUL ST1                            ; 005a7e06
    FADD float ptr [ESI + 0xacc]        ; 005a7e08
    INC ECX                             ; 005a7e0e
    FSTP float ptr [ESI + 0xacc]        ; 005a7e0f
    MOV EDI,dword ptr [EBX + 0x938]     ; 005a7e15
    ADD ESI,0x1b4                       ; 005a7e1b
    CMP ECX,EDI                         ; 005a7e21
    JL 0x005a7e00                       ; 005a7e23
        ;   XREF to: 005a7e00 (CONDITIONAL_JUMP)  ; LAB_005a7e00
    FSTP ST0                            ; 005a7e25
    FLD float ptr [EBX + 0x24]          ; 005a7e27
        ;   Label: LAB_005a7e27
    FLD float ptr [EBX + 0x34]          ; 005a7e2a
    LEA ESI,[ESP + 0x80]                ; 005a7e2d
    LEA EDI,[ESP + 0x68]                ; 005a7e34
    MOV dword ptr [EBX + 0x30],0x0      ; 005a7e38
    PUSH EBX                            ; 005a7e3f
    MOV EAX,dword ptr [EBX + 0x154]     ; 005a7e40
    FXCH                                ; 005a7e46
    FADD float ptr [0x005f906f]         ; 005a7e48 | DAT_005f906f
    FXCH                                ; 005a7e4e
    FADD float ptr [0x005f9073]         ; 005a7e50 | DAT_005f9073
    FXCH                                ; 005a7e56
    FSTP float ptr [EBX + 0x24]         ; 005a7e58
    FSTP float ptr [EBX + 0x34]         ; 005a7e5b
    CALL dword ptr [EAX + 0x1c]         ; 005a7e5e
    MOV ECX,0x6                         ; 005a7e61
    ADD ESP,0x4                         ; 005a7e66
    XOR EAX,EAX                         ; 005a7e69
    LEA ESI,[ESP + 0x80]                ; 005a7e6b
    MOV dword ptr [ESP + 0x158],EAX     ; 005a7e72
    MOV dword ptr [ESP + 0x154],EAX     ; 005a7e79
    MOVSD.REP ES:EDI,ESI                ; 005a7e80
    MOV EDX,dword ptr [0x00622c18]      ; 005a7e82 | DAT_00622c18
        ;   Label: LAB_005a7e82
    MOV EAX,dword ptr [ESP + 0x158]     ; 005a7e88
    CMP EAX,dword ptr [EDX + 0x14f0a8]  ; 005a7e8f | DAT_01fd1210
    JGE 0x005a809d                      ; 005a7e95
        ;   XREF to: 005a809d (CONDITIONAL_JUMP)  ; LAB_005a809d
    MOV ECX,dword ptr [ESP + 0x154]     ; 005a7e9b
    MOV ESI,dword ptr [0x01d33c68]      ; 005a7ea2 | DAT_01d33c68
    ADD EDX,ECX                         ; 005a7ea8
    PUSH ESI                            ; 005a7eaa
    MOV EAX,dword ptr [EDX + 0x14f0ac]  ; 005a7eab | DAT_01fd1214
    PUSH EAX                            ; 005a7eb1
    MOV dword ptr [ESP + 0x164],EAX     ; 005a7eb2
    CALL FUN_0040c600                   ; 005a7eb9
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c600()
    ADD ESP,0x8                         ; 005a7ebe
    TEST EAX,EAX                        ; 005a7ec1
    JZ 0x005a7f17                       ; 005a7ec3
        ;   XREF to: 005a7f17 (CONDITIONAL_JUMP)  ; LAB_005a7f17
    CMP EBX,dword ptr [EAX + 0xc28c]    ; 005a7ec5
    JNZ 0x005a7f17                      ; 005a7ecb
        ;   XREF to: 005a7f17 (CONDITIONAL_JUMP)  ; LAB_005a7f17
    MOV EDI,dword ptr [ESP + 0x158]     ; 005a7ecd
        ;   Label: LAB_005a7ecd
    MOV ESI,dword ptr [ESP + 0x154]     ; 005a7ed4
    INC EDI                             ; 005a7edb
    ADD ESI,0x4                         ; 005a7edc
    MOV dword ptr [ESP + 0x158],EDI     ; 005a7edf
    MOV dword ptr [ESP + 0x154],ESI     ; 005a7ee6
    JMP 0x005a7e82                      ; 005a7eed
        ;   XREF to: 005a7e82 (UNCONDITIONAL_JUMP)  ; LAB_005a7e82
    CMP EDX,0x2c8af28                   ; 005a7eef
        ;   Label: LAB_005a7eef
    JZ 0x005a7d25                       ; 005a7ef5
        ;   XREF to: 005a7d25 (CONDITIONAL_JUMP)  ; LAB_005a7d25
    MOV EAX,[0x02c8af28]                ; 005a7efb | DAT_02c8af28
    MOV dword ptr [EDX],EAX             ; 005a7f00
    MOV EAX,[0x02c8af2c]                ; 005a7f02 | DAT_02c8af2c
    MOV dword ptr [EDX + 0x4],EAX       ; 005a7f07
    MOV EAX,[0x02c8af30]                ; 005a7f0a | DAT_02c8af30
    MOV dword ptr [EDX + 0x8],EAX       ; 005a7f0f
    JMP 0x005a7d25                      ; 005a7f12
        ;   XREF to: 005a7d25 (UNCONDITIONAL_JUMP)  ; LAB_005a7d25
    LEA EAX,[ESP + 0x40]                ; 005a7f17
        ;   Label: LAB_005a7f17
    PUSH EAX                            ; 005a7f1b
    CALL FUN_005593c0                   ; 005a7f1c
        ;   XREF to: 005593c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005593c0()
    ADD ESP,0x4                         ; 005a7f21
    LEA EDX,[ESP + 0x40]                ; 005a7f24
    PUSH EDX                            ; 005a7f28
    MOV ECX,dword ptr [ESP + 0x160]     ; 005a7f29
    MOV EAX,dword ptr [ESP + 0x160]     ; 005a7f30
    PUSH ECX                            ; 005a7f37
    MOV EAX,dword ptr [EAX + 0x154]     ; 005a7f38
    CALL dword ptr [EAX + 0x3c]         ; 005a7f3e
    ADD ESP,0x8                         ; 005a7f41
    CMP EAX,0x2                         ; 005a7f44
    JNZ 0x005a7ecd                      ; 005a7f47
        ;   XREF to: 005a7ecd (CONDITIONAL_JUMP)  ; LAB_005a7ecd
    FLD float ptr [EBX + 0x24]          ; 005a7f49
    FADD float ptr [ESP + 0x78]         ; 005a7f4c
    MOV EAX,dword ptr [ESP + 0x15c]     ; 005a7f50
    FCOMP float ptr [EAX + 0x24]        ; 005a7f57
    FNSTSW AX                           ; 005a7f5a
    SAHF                                ; 005a7f5c
    JC 0x005a7ecd                       ; 005a7f5d
        ;   XREF to: 005a7ecd (CONDITIONAL_JUMP)  ; LAB_005a7ecd
    MOV EAX,dword ptr [ESP + 0x15c]     ; 005a7f63
    FLD float ptr [EAX + 0x24]          ; 005a7f6a
    FADD float ptr [ESP + 0x58]         ; 005a7f6d
    FLD float ptr [EBX + 0x24]          ; 005a7f71
    FADD float ptr [ESP + 0x6c]         ; 005a7f74
    FCOMPP                              ; 005a7f78
    FNSTSW AX                           ; 005a7f7a
    SAHF                                ; 005a7f7c
    JA 0x005a7ecd                       ; 005a7f7d
        ;   XREF to: 005a7ecd (CONDITIONAL_JUMP)  ; LAB_005a7ecd
    MOV EAX,dword ptr [ESP + 0x15c]     ; 005a7f83
    ADD EAX,0x20                        ; 005a7f8a
    PUSH EAX                            ; 005a7f8d
    PUSH EBX                            ; 005a7f8e
    LEA ESI,[ESP + 0xf4]                ; 005a7f8f
    LEA EDI,[ESP + 0x124]               ; 005a7f96
    CALL FUN_00408bb0                   ; 005a7f9d
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408bb0()
    LEA ESI,[ESP + 0xf4]                ; 005a7fa2
    ADD ESP,0x8                         ; 005a7fa9
    MOVSD ES:EDI,ESI                    ; 005a7fac
    MOVSD ES:EDI,ESI                    ; 005a7fad
    MOVSD ES:EDI,ESI                    ; 005a7fae
    FLD float ptr [ESP + 0x11c]         ; 005a7faf
    FADD float ptr [ESP + 0x5c]         ; 005a7fb6
    FCOMP float ptr [ESP + 0x68]        ; 005a7fba
    FNSTSW AX                           ; 005a7fbe
    SAHF                                ; 005a7fc0
    JC 0x005a7ecd                       ; 005a7fc1
        ;   XREF to: 005a7ecd (CONDITIONAL_JUMP)  ; LAB_005a7ecd
    FLD float ptr [ESP + 0x11c]         ; 005a7fc7
    FSUB float ptr [ESP + 0x5c]         ; 005a7fce
    FCOMP float ptr [ESP + 0x74]        ; 005a7fd2
    FNSTSW AX                           ; 005a7fd6
    SAHF                                ; 005a7fd8
    JA 0x005a7ecd                       ; 005a7fd9
        ;   XREF to: 005a7ecd (CONDITIONAL_JUMP)  ; LAB_005a7ecd
    FLD float ptr [ESP + 0x124]         ; 005a7fdf
    FADD float ptr [ESP + 0x5c]         ; 005a7fe6
    FCOMP float ptr [ESP + 0x70]        ; 005a7fea
    FNSTSW AX                           ; 005a7fee
    SAHF                                ; 005a7ff0
    JC 0x005a7ecd                       ; 005a7ff1
        ;   XREF to: 005a7ecd (CONDITIONAL_JUMP)  ; LAB_005a7ecd
    FLD float ptr [ESP + 0x124]         ; 005a7ff7
    FSUB float ptr [ESP + 0x5c]         ; 005a7ffe
    FST float ptr [ESP]                 ; 005a8002
    FCOMP float ptr [ESP + 0x7c]        ; 005a8005
    FNSTSW AX                           ; 005a8009
    SAHF                                ; 005a800b
    JBE 0x005a8056                      ; 005a800c
        ;   XREF to: 005a8056 (CONDITIONAL_JUMP)  ; LAB_005a8056
    FLD float ptr [ESP]                 ; 005a800e
    FLD float ptr [ESP + 0x7c]          ; 005a8011
    FADD double ptr [0x005f908b]        ; 005a8015 | DAT_005f908b
    FCOMPP                              ; 005a801b
    FNSTSW AX                           ; 005a801d
    SAHF                                ; 005a801f
    JBE 0x005a7ecd                      ; 005a8020
        ;   XREF to: 005a7ecd (CONDITIONAL_JUMP)  ; LAB_005a7ecd
    MOV ECX,dword ptr [EBX + 0x1054]    ; 005a8026
    PUSH ECX                            ; 005a802c
    CALL FUN_005735a0                   ; 005a802d
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005735a0()
    ADD ESP,0x4                         ; 005a8032
    TEST EAX,EAX                        ; 005a8035
    JNZ 0x005a7ecd                      ; 005a8037
        ;   XREF to: 005a7ecd (CONDITIONAL_JUMP)  ; LAB_005a7ecd
    PUSH 0x5f8fe3                       ; 005a803d | s_model_t_horn_wav_005f8fe2+1
    PUSH EBX                            ; 005a8042
    CALL FUN_005a89c0                   ; 005a8043
        ;   XREF to: 005a89c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a89c0()
    ADD ESP,0x8                         ; 005a8048
    MOV dword ptr [EBX + 0x1054],EAX    ; 005a804b
    JMP 0x005a7ecd                      ; 005a8051
        ;   XREF to: 005a7ecd (UNCONDITIONAL_JUMP)  ; LAB_005a7ecd
    LEA EAX,[ESP + 0x4]                 ; 005a8056
        ;   Label: LAB_005a8056
    PUSH EAX                            ; 005a805a
    MOV ESI,0x4                         ; 005a805b
    MOV EDI,0x4479c000                  ; 005a8060
    CALL FUN_0042c010                   ; 005a8065
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; undefined FUN_0042c010()
    ADD ESP,0x4                         ; 005a806a
    LEA EDX,[ESP + 0x4]                 ; 005a806d
    MOV EAX,dword ptr [ESP + 0x15c]     ; 005a8071
    MOV dword ptr [ESP + 0x34],ESI      ; 005a8078
    MOV dword ptr [ESP + 0x8],EDI       ; 005a807c
    PUSH EDX                            ; 005a8080
    MOV EDX,dword ptr [ESP + 0x160]     ; 005a8081
    MOV EAX,dword ptr [EAX + 0x154]     ; 005a8088
    PUSH EDX                            ; 005a808e
    CALL dword ptr [EAX + 0x108]        ; 005a808f
    ADD ESP,0x8                         ; 005a8095
    JMP 0x005a7ecd                      ; 005a8098
        ;   XREF to: 005a7ecd (UNCONDITIONAL_JUMP)  ; LAB_005a7ecd
    CMP dword ptr [EBX + 0x106c],0x0    ; 005a809d
        ;   Label: LAB_005a809d
    JZ 0x005a8101                       ; 005a80a4
        ;   XREF to: 005a8101 (CONDITIONAL_JUMP)  ; LAB_005a8101
    MOV ECX,dword ptr [EBX + 0x1058]    ; 005a80a6
        ;   Label: LAB_005a80a6
    PUSH ECX                            ; 005a80ac
    CALL FUN_005735a0                   ; 005a80ad
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005735a0()
    ADD ESP,0x4                         ; 005a80b2
    TEST EAX,EAX                        ; 005a80b5
    JNZ 0x005a80cd                      ; 005a80b7
        ;   XREF to: 005a80cd (CONDITIONAL_JUMP)  ; LAB_005a80cd
    PUSH 0x5f9046                       ; 005a80b9 | = "ext-modelt-fast_??.wav"
    PUSH EBX                            ; 005a80be
    CALL FUN_005a89c0                   ; 005a80bf
        ;   XREF to: 005a89c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a89c0()
    ADD ESP,0x8                         ; 005a80c4
    MOV dword ptr [EBX + 0x1058],EAX    ; 005a80c7
    MOV ESI,dword ptr [EBX + 0x1058]    ; 005a80cd
        ;   Label: LAB_005a80cd
    PUSH 0x3f800000                     ; 005a80d3
    PUSH ESI                            ; 005a80d8
    CALL FUN_00573980                   ; 005a80d9
        ;   XREF to: 00573980 (UNCONDITIONAL_CALL)  ; undefined FUN_00573980()
    FLD float ptr [EBX + 0x8d0]         ; 005a80de
    FABS                                ; 005a80e4
    ADD ESP,0x8                         ; 005a80e6
    FCOMP double ptr [0x005f9083]       ; 005a80e9 | DAT_005f9083
    FNSTSW AX                           ; 005a80ef
    SAHF                                ; 005a80f1
    JA 0x005a8458                       ; 005a80f2
        ;   XREF to: 005a8458 (CONDITIONAL_JUMP)  ; LAB_005a8458
    MOV ESP,EBP                         ; 005a80f8
        ;   Label: LAB_005a80f8
    POP EBP                             ; 005a80fa
    POP EDI                             ; 005a80fb
    POP ESI                             ; 005a80fc
    POP EBX                             ; 005a80fd
    MOV EAX,EAX                         ; 005a80fe
    RET                                 ; 005a8100
    LEA EDI,[ESP + 0x134]               ; 005a8101
        ;   Label: LAB_005a8101
    LEA ECX,[EBX + 0x20]                ; 005a8108
    LEA ESI,[ESP + 0xc8]                ; 005a810b
    MOV EAX,[0x01d06ab4]                ; 005a8112 | DAT_01d06ab4
    FLD float ptr [ECX]                 ; 005a8117
    FLD float ptr [ECX + 0x4]           ; 005a8119
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 005a811c
    FLD float ptr [ECX + 0x8]           ; 005a8123
    FXCH ST2                            ; 005a8126
    FSUB float ptr [EAX + 0x20]         ; 005a8128
    FXCH                                ; 005a812b
    FSUB float ptr [EAX + 0x24]         ; 005a812d
    FXCH ST2                            ; 005a8130
    FSUB float ptr [EAX + 0x28]         ; 005a8132
    FXCH                                ; 005a8135
    FSTP float ptr [ESP + 0xc8]         ; 005a8137
    FXCH                                ; 005a813e
    FSTP float ptr [ESP + 0xcc]         ; 005a8140
    FSTP float ptr [ESP + 0xd0]         ; 005a8147
    MOVSD ES:EDI,ESI                    ; 005a814e
    MOVSD ES:EDI,ESI                    ; 005a814f
    MOVSD ES:EDI,ESI                    ; 005a8150
    FLD float ptr [ESP + 0x138]         ; 005a8151
    FMUL ST0                            ; 005a8158
    FLD float ptr [ESP + 0x134]         ; 005a815a
    FMUL ST0                            ; 005a8161
    FADDP                               ; 005a8163
    FLD float ptr [ESP + 0x13c]         ; 005a8165
    FMUL ST0                            ; 005a816c
    FADDP                               ; 005a816e
    FSQRT                               ; 005a8170
    FCOMP double ptr [0x005f907b]       ; 005a8172 | DAT_005f907b
    FNSTSW AX                           ; 005a8178
    SAHF                                ; 005a817a
    JBE 0x005a80a6                      ; 005a817b
        ;   XREF to: 005a80a6 (CONDITIONAL_JUMP)  ; LAB_005a80a6
    CMP dword ptr [EDX + 0x14d164],0x672 ; 005a8181 | DAT_01fcf2cc
    JGE 0x005a80a6                      ; 005a818b
        ;   XREF to: 005a80a6 (CONDITIONAL_JUMP)  ; LAB_005a80a6
    XOR EAX,EAX                         ; 005a8191
    XOR EDI,EDI                         ; 005a8193
    XOR ESI,ESI                         ; 005a8195
    MOV dword ptr [ESP + 0x14c],EAX     ; 005a8197
    MOV dword ptr [ESP + 0x150],EAX     ; 005a819e
    MOV EAX,[0x00622c18]                ; 005a81a5 | DAT_00622c18
        ;   Label: LAB_005a81a5
    CMP EDI,dword ptr [EAX + 0x150fec]  ; 005a81aa | DAT_01fd3154
    JL 0x005a8366                       ; 005a81b0
        ;   XREF to: 005a8366 (CONDITIONAL_JUMP)  ; LAB_005a8366
    CMP dword ptr [ESP + 0x150],0x0     ; 005a81b6
    JNZ 0x005a83c1                      ; 005a81be
        ;   XREF to: 005a83c1 (CONDITIONAL_JUMP)  ; LAB_005a83c1
    CMP dword ptr [ESP + 0x150],0x0     ; 005a81c4
        ;   Label: LAB_005a81c4
    JNZ 0x005a83f1                      ; 005a81cc
        ;   XREF to: 005a83f1 (CONDITIONAL_JUMP)  ; LAB_005a83f1
    MOV ECX,dword ptr [EBX + 0x1070]    ; 005a81d2
    TEST ECX,ECX                        ; 005a81d8
    JNZ 0x005a83d4                      ; 005a81da
        ;   XREF to: 005a83d4 (CONDITIONAL_JUMP)  ; LAB_005a83d4
    PUSH 0xc340                         ; 005a81e0
        ;   Label: LAB_005a81e0
    CALL FUN_005c0f32                   ; 005a81e5
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0f32()
    ADD ESP,0x4                         ; 005a81ea
    TEST EAX,EAX                        ; 005a81ed
    JZ 0x005a81fa                       ; 005a81ef
        ;   XREF to: 005a81fa (CONDITIONAL_JUMP)  ; LAB_005a81fa
    PUSH EAX                            ; 005a81f1
    CALL FUN_0051c7d0                   ; 005a81f2
        ;   XREF to: 0051c7d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051c7d0()
    ADD ESP,0x4                         ; 005a81f7
    PUSH 0x584                          ; 005a81fa
        ;   Label: LAB_005a81fa
    MOV ESI,EAX                         ; 005a81ff
    CALL FUN_005c0f32                   ; 005a8201
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0f32()
    ADD ESP,0x4                         ; 005a8206
    TEST EAX,EAX                        ; 005a8209
    JZ 0x005a8216                       ; 005a820b
        ;   XREF to: 005a8216 (CONDITIONAL_JUMP)  ; LAB_005a8216
    PUSH EAX                            ; 005a820d
    CALL FUN_00598380                   ; 005a820e
        ;   XREF to: 00598380 (UNCONDITIONAL_CALL)  ; undefined FUN_00598380()
    ADD ESP,0x4                         ; 005a8213
    MOV EDI,EAX                         ; 005a8216
        ;   Label: LAB_005a8216
    TEST ESI,ESI                        ; 005a8218
    JNZ 0x005a842c                      ; 005a821a
        ;   XREF to: 005a842c (CONDITIONAL_JUMP)  ; LAB_005a842c
    MOV EAX,0x5f8ff5                    ; 005a8220 | = "..\\core\\vehicle.cpp"
        ;   Label: LAB_005a8220
    MOV EDX,0x161                       ; 005a8225
    PUSH 0x5f9009                       ; 005a822a | = "CMobster::process - Out of memory!"
    MOV [0x01d1d400],EAX                ; 005a822f | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 005a8234 | DAT_01d1d404
    CALL FUN_005030e0                   ; 005a823a
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 005a823f
    PUSH 0x3f000000                     ; 005a8242
        ;   Label: LAB_005a8242
    CALL FUN_0040cd00                   ; 005a8247
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cd00()
    MOV EDX,EAX                         ; 005a824c
    ADD ESP,0x4                         ; 005a824e
    LEA EAX,[ESI + 0x158]               ; 005a8251
    TEST EDX,EDX                        ; 005a8257
    JZ 0x005a8439                       ; 005a8259
        ;   XREF to: 005a8439 (CONDITIONAL_JUMP)  ; LAB_005a8439
    PUSH 0x5f902c                       ; 005a825f | = "mobster3.dfm"
    PUSH EAX                            ; 005a8264
        ;   Label: LAB_005a8264
    CALL FUN_00569f50                   ; 005a8265
        ;   XREF to: 00569f50 (UNCONDITIONAL_CALL)  ; undefined FUN_00569f50()
    ADD ESP,0x8                         ; 005a826a
    MOV ECX,dword ptr [ESP + 0x150]     ; 005a826d
    MOV dword ptr [ESI + 0xc28c],EBX    ; 005a8274
    TEST ECX,ECX                        ; 005a827a
    JNZ 0x005a8443                      ; 005a827c
        ;   XREF to: 005a8443 (CONDITIONAL_JUMP)  ; LAB_005a8443
    MOV dword ptr [ESI + 0xc290],ECX    ; 005a8282
    MOV dword ptr [EBX + 0x1070],ESI    ; 005a8288
    PUSH ESI                            ; 005a828e
        ;   Label: LAB_005a828e
    MOV EAX,[0x0061f650]                ; 005a828f | DAT_0061f650
    PUSH EAX                            ; 005a8294 | DAT_01d2c900
    CALL FUN_0051bd60                   ; 005a8295
        ;   XREF to: 0051bd60 (UNCONDITIONAL_CALL)  ; undefined FUN_0051bd60()
    ADD ESP,0x8                         ; 005a829a
    PUSH EDI                            ; 005a829d
    MOV EDX,dword ptr [0x0061f650]      ; 005a829e | DAT_0061f650
    PUSH EDX                            ; 005a82a4 | DAT_01d2c900
    CALL FUN_0051bd60                   ; 005a82a5
        ;   XREF to: 0051bd60 (UNCONDITIONAL_CALL)  ; undefined FUN_0051bd60()
    LEA EDX,[EBX + 0x20]                ; 005a82aa
    LEA EAX,[ESI + 0x20]                ; 005a82ad
    MOV ECX,dword ptr [EDX]             ; 005a82b0
    MOV dword ptr [EAX],ECX             ; 005a82b2
    MOV ECX,dword ptr [EDX + 0x4]       ; 005a82b4
    MOV dword ptr [EAX + 0x4],ECX       ; 005a82b7
    MOV ECX,dword ptr [EDX + 0x8]       ; 005a82ba
    MOV dword ptr [EAX + 0x8],ECX       ; 005a82bd
    MOV EDX,dword ptr [EDX + 0xc]       ; 005a82c0
    MOV dword ptr [EAX + 0xc],EDX       ; 005a82c3
    LEA EDX,[ESI + 0x30]                ; 005a82c6
    LEA EAX,[EBX + 0x30]                ; 005a82c9
    ADD ESP,0x8                         ; 005a82cc
    CMP EDX,EAX                         ; 005a82cf
    JZ 0x005a82e3                       ; 005a82d1
        ;   XREF to: 005a82e3 (CONDITIONAL_JUMP)  ; LAB_005a82e3
    MOV ECX,dword ptr [EAX]             ; 005a82d3
    MOV dword ptr [EDX],ECX             ; 005a82d5
    MOV ECX,dword ptr [EAX + 0x4]       ; 005a82d7
    MOV dword ptr [EDX + 0x4],ECX       ; 005a82da
    MOV ECX,dword ptr [EAX + 0x8]       ; 005a82dd
    MOV dword ptr [EDX + 0x8],ECX       ; 005a82e0
    LEA EDX,[EBX + 0x20]                ; 005a82e3
        ;   Label: LAB_005a82e3
    LEA EAX,[EDI + 0x20]                ; 005a82e6
    MOV ECX,dword ptr [EDX]             ; 005a82e9
    MOV dword ptr [EAX],ECX             ; 005a82eb
    MOV ECX,dword ptr [EDX + 0x4]       ; 005a82ed
    MOV dword ptr [EAX + 0x4],ECX       ; 005a82f0
    MOV ECX,dword ptr [EDX + 0x8]       ; 005a82f3
    MOV dword ptr [EAX + 0x8],ECX       ; 005a82f6
    MOV EDX,dword ptr [EDX + 0xc]       ; 005a82f9
    MOV dword ptr [EAX + 0xc],EDX       ; 005a82fc
    LEA EAX,[EDI + 0x30]                ; 005a82ff
    LEA EDX,[EBX + 0x30]                ; 005a8302
    CMP EAX,EDX                         ; 005a8305
    JZ 0x005a8319                       ; 005a8307
        ;   XREF to: 005a8319 (CONDITIONAL_JUMP)  ; LAB_005a8319
    MOV ECX,dword ptr [EDX]             ; 005a8309
    MOV dword ptr [EAX],ECX             ; 005a830b
    MOV ECX,dword ptr [EDX + 0x4]       ; 005a830d
    MOV dword ptr [EAX + 0x4],ECX       ; 005a8310
    MOV ECX,dword ptr [EDX + 0x8]       ; 005a8313
    MOV dword ptr [EAX + 0x8],ECX       ; 005a8316
    PUSH ESI                            ; 005a8319
        ;   Label: LAB_005a8319
    MOV EAX,dword ptr [ESI + 0x154]     ; 005a831a
    CALL dword ptr [EAX]                ; 005a8320
    ADD ESP,0x4                         ; 005a8322
    MOV EAX,dword ptr [EDI + 0x154]     ; 005a8325
    PUSH EDI                            ; 005a832b
    CALL dword ptr [EAX]                ; 005a832c
    ADD ESP,0x4                         ; 005a832e
    PUSH 0x0                            ; 005a8331
    PUSH 0x0                            ; 005a8333
    PUSH EDI                            ; 005a8335
    PUSH 0x1                            ; 005a8336
    PUSH ESI                            ; 005a8338
    CALL FUN_004325b0                   ; 005a8339
        ;   XREF to: 004325b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004325b0()
    ADD ESP,0x14                        ; 005a833e
    PUSH ESI                            ; 005a8341
    MOV ECX,dword ptr [0x0061f650]      ; 005a8342 | DAT_0061f650
    PUSH ECX                            ; 005a8348 | DAT_01d2c900
    CALL FUN_0051b160                   ; 005a8349
        ;   XREF to: 0051b160 (UNCONDITIONAL_CALL)  ; undefined FUN_0051b160()
    ADD ESP,0x8                         ; 005a834e
    PUSH EDI                            ; 005a8351
    MOV ESI,dword ptr [0x0061f650]      ; 005a8352 | DAT_0061f650
    PUSH ESI                            ; 005a8358 | DAT_01d2c900
    CALL FUN_0051b160                   ; 005a8359
        ;   XREF to: 0051b160 (UNCONDITIONAL_CALL)  ; undefined FUN_0051b160()
    ADD ESP,0x8                         ; 005a835e
    JMP 0x005a80a6                      ; 005a8361
        ;   XREF to: 005a80a6 (UNCONDITIONAL_JUMP)  ; LAB_005a80a6
    MOV EDX,dword ptr [0x01d33c68]      ; 005a8366 | DAT_01d33c68
        ;   Label: LAB_005a8366
    PUSH EDX                            ; 005a836c
    MOV ECX,dword ptr [ESI + EAX*0x1 + 0x150ff0] ; 005a836d
    PUSH ECX                            ; 005a8374
    CALL FUN_0040c600                   ; 005a8375
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c600()
    ADD ESP,0x8                         ; 005a837a
    TEST EAX,EAX                        ; 005a837d
    JZ 0x005a83b8                       ; 005a837f
        ;   XREF to: 005a83b8 (CONDITIONAL_JUMP)  ; LAB_005a83b8
    MOV EDX,dword ptr [EAX + 0xc28c]    ; 005a8381
    CMP EBX,EDX                         ; 005a8387
    JNZ 0x005a83b8                      ; 005a8389
        ;   XREF to: 005a83b8 (CONDITIONAL_JUMP)  ; LAB_005a83b8
    CMP dword ptr [EAX + 0xc290],0x0    ; 005a838b
    JNZ 0x005a83a7                      ; 005a8392
        ;   XREF to: 005a83a7 (CONDITIONAL_JUMP)  ; LAB_005a83a7
    MOV dword ptr [EDX + 0x1070],EAX    ; 005a8394
    MOV dword ptr [ESP + 0x150],0x1     ; 005a839a
    JMP 0x005a83b8                      ; 005a83a5
        ;   XREF to: 005a83b8 (UNCONDITIONAL_JUMP)  ; LAB_005a83b8
    MOV dword ptr [EDX + 0x1074],EAX    ; 005a83a7
        ;   Label: LAB_005a83a7
    MOV dword ptr [ESP + 0x14c],0x1     ; 005a83ad
    INC EDI                             ; 005a83b8
        ;   Label: LAB_005a83b8
    ADD ESI,0x4                         ; 005a83b9
    JMP 0x005a81a5                      ; 005a83bc
        ;   XREF to: 005a81a5 (UNCONDITIONAL_JUMP)  ; LAB_005a81a5
    CMP dword ptr [ESP + 0x14c],0x0     ; 005a83c1
        ;   Label: LAB_005a83c1
    JZ 0x005a81c4                       ; 005a83c9
        ;   XREF to: 005a81c4 (CONDITIONAL_JUMP)  ; LAB_005a81c4
    JMP 0x005a80a6                      ; 005a83cf
        ;   XREF to: 005a80a6 (UNCONDITIONAL_JUMP)  ; LAB_005a80a6
    PUSH ECX                            ; 005a83d4
        ;   Label: LAB_005a83d4
    MOV EDX,dword ptr [ECX + 0x154]     ; 005a83d5
    CALL dword ptr [EDX + 0x10c]        ; 005a83db
    ADD ESP,0x4                         ; 005a83e1
    TEST EAX,EAX                        ; 005a83e4
    JZ 0x005a80a6                       ; 005a83e6
        ;   XREF to: 005a80a6 (CONDITIONAL_JUMP)  ; LAB_005a80a6
    JMP 0x005a81e0                      ; 005a83ec
        ;   XREF to: 005a81e0 (UNCONDITIONAL_JUMP)  ; LAB_005a81e0
    CMP dword ptr [ESP + 0x14c],0x0     ; 005a83f1
        ;   Label: LAB_005a83f1
    JNZ 0x005a81e0                      ; 005a83f9
        ;   XREF to: 005a81e0 (CONDITIONAL_JUMP)  ; LAB_005a81e0
    MOV EDX,dword ptr [EBX + 0x1074]    ; 005a83ff
    TEST EDX,EDX                        ; 005a8405
    JZ 0x005a81e0                       ; 005a8407
        ;   XREF to: 005a81e0 (CONDITIONAL_JUMP)  ; LAB_005a81e0
    MOV EAX,EDX                         ; 005a840d
    PUSH EAX                            ; 005a840f
    MOV EDX,dword ptr [EDX + 0x154]     ; 005a8410
    CALL dword ptr [EDX + 0x10c]        ; 005a8416
    ADD ESP,0x4                         ; 005a841c
    TEST EAX,EAX                        ; 005a841f
    JZ 0x005a80a6                       ; 005a8421
        ;   XREF to: 005a80a6 (CONDITIONAL_JUMP)  ; LAB_005a80a6
    JMP 0x005a81e0                      ; 005a8427
        ;   XREF to: 005a81e0 (UNCONDITIONAL_JUMP)  ; LAB_005a81e0
    TEST EAX,EAX                        ; 005a842c
        ;   Label: LAB_005a842c
    JZ 0x005a8220                       ; 005a842e
        ;   XREF to: 005a8220 (CONDITIONAL_JUMP)  ; LAB_005a8220
    JMP 0x005a8242                      ; 005a8434
        ;   XREF to: 005a8242 (UNCONDITIONAL_JUMP)  ; LAB_005a8242
    PUSH 0x5f9039                       ; 005a8439 | = "mobster4.dfm"
        ;   Label: LAB_005a8439
    JMP 0x005a8264                      ; 005a843e
        ;   XREF to: 005a8264 (UNCONDITIONAL_JUMP)  ; LAB_005a8264
    MOV dword ptr [ESI + 0xc290],0x1    ; 005a8443
        ;   Label: LAB_005a8443
    MOV dword ptr [EBX + 0x1074],ESI    ; 005a844d
    JMP 0x005a828e                      ; 005a8453
        ;   XREF to: 005a828e (UNCONDITIONAL_JUMP)  ; LAB_005a828e
    MOV EDI,dword ptr [EBX + 0x105c]    ; 005a8458
        ;   Label: LAB_005a8458
    PUSH EDI                            ; 005a845e
    CALL FUN_005735a0                   ; 005a845f
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005735a0()
    ADD ESP,0x4                         ; 005a8464
    TEST EAX,EAX                        ; 005a8467
    JNZ 0x005a80f8                      ; 005a8469
        ;   XREF to: 005a80f8 (CONDITIONAL_JUMP)  ; LAB_005a80f8
    PUSH 0x5f905d                       ; 005a846f | = "skid_??.wav"
    PUSH EBX                            ; 005a8474
    CALL FUN_005a89c0                   ; 005a8475
        ;   XREF to: 005a89c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a89c0()
    ADD ESP,0x8                         ; 005a847a
    MOV dword ptr [EBX + 0x105c],EAX    ; 005a847d
    MOV ESP,EBP                         ; 005a8483
    POP EBP                             ; 005a8485
    POP EDI                             ; 005a8486
    POP ESI                             ; 005a8487
    POP EBX                             ; 005a8488
    RET                                 ; 005a8489

