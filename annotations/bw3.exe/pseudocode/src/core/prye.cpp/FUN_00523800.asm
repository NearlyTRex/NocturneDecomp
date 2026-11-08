; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00523800(int param_1)
;
; Local Variables:
; undefined        Stack[-0x6c]:1  local_6c
;
; XREF[1]:
;   FUN_00518cd0 at 00519c71
;
; Referenced Globals:
;   TerminatedCString s_core_prye_cpp_005cd6ef
;   TerminatedCString s_CPrye_aimLeftPistol_no_w_005cd700
;   undefined4 DAT_005cd727
;   undefined4 DAT_005e3524
;   undefined4 DAT_005e3528
;   undefined4 DAT_00603b28
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_01ed36e8
;   undefined4 DAT_01ed78c8
;
; Called Functions:
;   FUN_00408b00
;   FUN_00408b80
;   FUN_00408bf0
;   FUN_0040cfa0
;   FUN_004e4330
;   FUN_0053ccc0
;   FUN_0053ebe0
;   FUN_0053ec10
;   FUN_0053ecd0
;   FUN_0054dbd0
;   FUN_00576250
;   FUN_005a4b74
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00523800
        ;   Label: FUN_00523800
    PUSH ESI                            ; 00523801
    PUSH EDI                            ; 00523802
    PUSH EBP                            ; 00523803
    MOV EBP,ESP                         ; 00523804
    SUB ESP,0x164                       ; 00523806
    AND ESP,0xfffffff8                  ; 0052380c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0052380f
    CMP dword ptr [EBX + 0x20c24],0x0   ; 00523812
    JZ 0x00523caf                       ; 00523819
        ;   XREF to: 00523caf (CONDITIONAL_JUMP)  ; LAB_00523caf
    MOV EAX,dword ptr [EBX + 0x20c24]   ; 0052381f
        ;   Label: LAB_0052381f
    PUSH EAX                            ; 00523825
    MOV EDX,dword ptr [EAX + 0x154]     ; 00523826
    LEA ESI,[ESP + 0x110]               ; 0052382c
    CALL dword ptr [EDX + 0xe0]         ; 00523833
    ADD ESP,0x4                         ; 00523839
    LEA EAX,[EBX + 0x20c00]             ; 0052383c
    LEA EDI,[ESP + 0x58]                ; 00523842
    MOV dword ptr [ESP + 0x158],EAX     ; 00523846
    MOV EAX,[0x01ed36e8]                ; 0052384d | DAT_01ed36e8
    LEA ESI,[ESP + 0x10c]               ; 00523852
    MOV dword ptr [ESP + 0x14c],EAX     ; 00523859
    MOV EAX,0x3f060a92                  ; 00523860
    MOVSD ES:EDI,ESI                    ; 00523865
    MOVSD ES:EDI,ESI                    ; 00523866
    MOVSD ES:EDI,ESI                    ; 00523867
    MOV dword ptr [ESP + 0x148],EAX     ; 00523868
    LEA EAX,[ESP + 0x58]                ; 0052386f
    MOV EDI,0xbfa78d36                  ; 00523873
    PUSH EAX                            ; 00523878
    MOV EDX,dword ptr [EBX + 0x20c24]   ; 00523879
    LEA ESI,[ESP + 0xe0]                ; 0052387f
    PUSH EDX                            ; 00523886
    MOV dword ptr [ESP + 0x14c],EDI     ; 00523887
    LEA EDI,[ESP + 0x90]                ; 0052388e
    CALL FUN_00408b80                   ; 00523895
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b80()
    LEA ESI,[ESP + 0xe4]                ; 0052389a
    LEA EAX,[ESP + 0x54]                ; 005238a1
    ADD ESP,0x8                         ; 005238a5
    XOR ECX,ECX                         ; 005238a8
    MOVSD ES:EDI,ESI                    ; 005238aa
    MOVSD ES:EDI,ESI                    ; 005238ab
    MOVSD ES:EDI,ESI                    ; 005238ac
    MOV dword ptr [ESP + 0x4c],ECX      ; 005238ad
    MOV EDI,0x447a0000                  ; 005238b1
    MOV dword ptr [ESP + 0x50],ECX      ; 005238b6
    MOV dword ptr [ESP + 0x54],EDI      ; 005238ba
    PUSH EAX                            ; 005238be
    MOV EAX,dword ptr [EBX + 0x20c24]   ; 005238bf
    PUSH EAX                            ; 005238c5
    LEA ESI,[ESP + 0x3c]                ; 005238c6
    LEA EDI,[ESP + 0x12c]               ; 005238ca
    CALL FUN_00408b00                   ; 005238d1
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b00()
    LEA ESI,[ESP + 0x3c]                ; 005238d6
    ADD ESP,0x8                         ; 005238da
    MOV EDX,dword ptr [0x00603b28]      ; 005238dd | DAT_00603b28
    FLD float ptr [ESP + 0x88]          ; 005238e3
    FLD float ptr [ESP + 0x8c]          ; 005238ea
    FLD float ptr [ESP + 0x90]          ; 005238f1
    MOVSD ES:EDI,ESI                    ; 005238f8
    MOVSD ES:EDI,ESI                    ; 005238f9
    MOVSD ES:EDI,ESI                    ; 005238fa
    PUSH 0x0                            ; 005238fb
    LEA EDI,[ESP + 0x11c]               ; 005238fd
    LEA ESI,[ESP + 0x134]               ; 00523904
    PUSH 0x0                            ; 0052390b
    FXCH ST2                            ; 0052390d
    FADD float ptr [ESP + 0x12c]        ; 0052390f
    FXCH                                ; 00523916
    FADD float ptr [ESP + 0x130]        ; 00523918
    FXCH ST2                            ; 0052391f
    FADD float ptr [ESP + 0x134]        ; 00523921
    PUSH 0xff                           ; 00523928
    FXCH                                ; 0052392d
    FSTP float ptr [ESP + 0x13c]        ; 0052392f
    FXCH                                ; 00523936
    FSTP float ptr [ESP + 0x140]        ; 00523938
    PUSH 0x1                            ; 0052393f
    FSTP float ptr [ESP + 0x148]        ; 00523941
    PUSH EDX                            ; 00523948 | DAT_01ed78c8
    MOVSD ES:EDI,ESI                    ; 00523949
    MOVSD ES:EDI,ESI                    ; 0052394a
    MOVSD ES:EDI,ESI                    ; 0052394b
    CALL FUN_0053ecd0                   ; 0052394c
        ;   XREF to: 0053ecd0 (UNCONDITIONAL_CALL)  ; undefined FUN_0053ecd0()
    ADD ESP,0x14                        ; 00523951
    MOV ECX,dword ptr [EBX + 0x20c24]   ; 00523954
    PUSH ECX                            ; 0052395a
    MOV ESI,dword ptr [0x00603b28]      ; 0052395b | DAT_00603b28
    PUSH ESI                            ; 00523961 | DAT_01ed78c8
    CALL FUN_0053ec10                   ; 00523962
        ;   XREF to: 0053ec10 (UNCONDITIONAL_CALL)  ; undefined FUN_0053ec10()
    ADD ESP,0x8                         ; 00523967
    PUSH EBX                            ; 0052396a
    MOV EDI,dword ptr [0x00603b28]      ; 0052396b | DAT_00603b28
    PUSH EDI                            ; 00523971 | DAT_01ed78c8
    CALL FUN_0053ec10                   ; 00523972
        ;   XREF to: 0053ec10 (UNCONDITIONAL_CALL)  ; undefined FUN_0053ec10()
    ADD ESP,0x8                         ; 00523977
    LEA EAX,[ESP + 0x118]               ; 0052397a
    PUSH EAX                            ; 00523981
    LEA EAX,[ESP + 0x8c]                ; 00523982
    PUSH EAX                            ; 00523989
    MOV EAX,[0x00603b28]                ; 0052398a | DAT_00603b28
    PUSH EAX                            ; 0052398f | DAT_01ed78c8
    CALL FUN_0053ccc0                   ; 00523990
        ;   XREF to: 0053ccc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0053ccc0()
    MOV dword ptr [ESP + 0x16c],EAX     ; 00523995
    FLD float ptr [ESP + 0x16c]         ; 0052399c
    ADD ESP,0xc                         ; 005239a3
    MOV EDX,dword ptr [0x00603b28]      ; 005239a6 | DAT_00603b28
    PUSH EDX                            ; 005239ac | DAT_01ed78c8
    FSTP float ptr [ESP + 0x2c]         ; 005239ad
    CALL FUN_0053ebe0                   ; 005239b1
        ;   XREF to: 0053ebe0 (UNCONDITIONAL_CALL)  ; undefined FUN_0053ebe0()
    ADD ESP,0x4                         ; 005239b6
    FLDZ                                ; 005239b9
    FLD float ptr [ESP + 0x28]          ; 005239bb
    FSTP double ptr [ESP + 0x20]        ; 005239bf
    FCOMP double ptr [ESP + 0x20]       ; 005239c3
    FNSTSW AX                           ; 005239c7
    SAHF                                ; 005239c9
    JBE 0x00523cd7                      ; 005239ca
        ;   XREF to: 00523cd7 (CONDITIONAL_JUMP)  ; LAB_00523cd7
    MOV dword ptr [ESP + 0x28],0x3f800000 ; 005239d0
        ;   Label: LAB_005239d0
    FLD float ptr [ESP + 0x28]          ; 005239d8
        ;   Label: LAB_005239d8
    FLD float ptr [ESP + 0x124]         ; 005239dc
    FMUL ST1                            ; 005239e3
    FLD float ptr [ESP + 0x128]         ; 005239e5
    FMUL ST2                            ; 005239ec
    FLD float ptr [ESP + 0x12c]         ; 005239ee
    FMULP ST3                           ; 005239f5
    FLD float ptr [ESP + 0x88]          ; 005239f7
    FLD float ptr [ESP + 0x8c]          ; 005239fe
    LEA EDI,[ESP + 0x40]                ; 00523a05
    LEA ESI,[ESP + 0xd0]                ; 00523a09
    FXCH ST3                            ; 00523a10
    FSTP float ptr [ESP + 0xd0]         ; 00523a12
    FXCH                                ; 00523a19
    FSTP float ptr [ESP + 0xd4]         ; 00523a1b
    FXCH ST2                            ; 00523a22
    FSTP float ptr [ESP + 0xd8]         ; 00523a24
    MOVSD ES:EDI,ESI                    ; 00523a2b
    MOVSD ES:EDI,ESI                    ; 00523a2c
    MOVSD ES:EDI,ESI                    ; 00523a2d
    FLD float ptr [ESP + 0x90]          ; 00523a2e
    LEA EDI,[ESP + 0x94]                ; 00523a35
    LEA ESI,[ESP + 0x100]               ; 00523a3c
    FXCH ST2                            ; 00523a43
    FADD float ptr [ESP + 0x40]         ; 00523a45
    FXCH                                ; 00523a49
    FADD float ptr [ESP + 0x44]         ; 00523a4b
    FXCH ST2                            ; 00523a4f
    FADD float ptr [ESP + 0x48]         ; 00523a51
    FXCH                                ; 00523a55
    FSTP float ptr [ESP + 0x100]        ; 00523a57
    FXCH                                ; 00523a5e
    FSTP float ptr [ESP + 0x104]        ; 00523a60
    FSTP float ptr [ESP + 0x108]        ; 00523a67
    MOVSD ES:EDI,ESI                    ; 00523a6e
    MOVSD ES:EDI,ESI                    ; 00523a6f
    MOVSD ES:EDI,ESI                    ; 00523a70
    LEA EAX,[ESP + 0x94]                ; 00523a71
    LEA ESI,[ESP + 0x118]               ; 00523a78
    CMP ESI,EAX                         ; 00523a7f
    JZ 0x00523aad                       ; 00523a81
        ;   XREF to: 00523aad (CONDITIONAL_JUMP)  ; LAB_00523aad
    MOV EAX,dword ptr [ESP + 0x94]      ; 00523a83
    MOV dword ptr [ESP + 0x118],EAX     ; 00523a8a
    MOV EAX,dword ptr [ESP + 0x98]      ; 00523a91
    MOV dword ptr [ESP + 0x11c],EAX     ; 00523a98
    MOV EAX,dword ptr [ESP + 0x9c]      ; 00523a9f
    MOV dword ptr [ESP + 0x120],EAX     ; 00523aa6
    MOV ESI,dword ptr [ESP + 0x14c]     ; 00523aad
        ;   Label: LAB_00523aad
    PUSH ESI                            ; 00523ab4
    LEA EAX,[EBX + 0x158]               ; 00523ab5
    PUSH EAX                            ; 00523abb
    LEA ESI,[ESP + 0xa8]                ; 00523abc
    LEA EDI,[ESP + 0x6c]                ; 00523ac3
    CALL FUN_0054dbd0                   ; 00523ac7
        ;   XREF to: 0054dbd0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054dbd0()
    ADD ESP,0x8                         ; 00523acc
    LEA EAX,[ESP + 0x118]               ; 00523acf
    LEA ESI,[ESP + 0xa0]                ; 00523ad6
    PUSH EAX                            ; 00523add
    MOVSD ES:EDI,ESI                    ; 00523ade
    MOVSD ES:EDI,ESI                    ; 00523adf
    MOVSD ES:EDI,ESI                    ; 00523ae0
    PUSH EBX                            ; 00523ae1
    LEA ESI,[ESP + 0xc0]                ; 00523ae2
    LEA EDI,[ESP + 0xcc]                ; 00523ae9
    CALL FUN_00408bf0                   ; 00523af0
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408bf0()
    LEA ESI,[ESP + 0xc0]                ; 00523af5
    ADD ESP,0x8                         ; 00523afc
    MOVSD ES:EDI,ESI                    ; 00523aff
    MOVSD ES:EDI,ESI                    ; 00523b00
    MOVSD ES:EDI,ESI                    ; 00523b01
    LEA EAX,[ESP + 0xac]                ; 00523b02
    FLD float ptr [ESP + 0xc4]          ; 00523b09
    FLD float ptr [ESP + 0xc8]          ; 00523b10
    FLD float ptr [ESP + 0xcc]          ; 00523b17
    LEA EDI,[ESP + 0xac]                ; 00523b1e
    LEA ESI,[ESP + 0xf4]                ; 00523b25
    FXCH ST2                            ; 00523b2c
    FSUB float ptr [ESP + 0x64]         ; 00523b2e
    FXCH                                ; 00523b32
    FSUB float ptr [ESP + 0x68]         ; 00523b34
    FXCH ST2                            ; 00523b38
    FSUB float ptr [ESP + 0x6c]         ; 00523b3a
    FXCH                                ; 00523b3e
    FSTP float ptr [ESP + 0xf4]         ; 00523b40
    FXCH                                ; 00523b47
    FSTP float ptr [ESP + 0xf8]         ; 00523b49
    FSTP float ptr [ESP + 0xfc]         ; 00523b50
    MOVSD ES:EDI,ESI                    ; 00523b57
    MOVSD ES:EDI,ESI                    ; 00523b58
    MOVSD ES:EDI,ESI                    ; 00523b59
    PUSH EAX                            ; 00523b5a
    LEA ESI,[ESP + 0x80]                ; 00523b5b
    CALL FUN_00576250                   ; 00523b62
        ;   XREF to: 00576250 (UNCONDITIONAL_CALL)  ; undefined FUN_00576250()
    ADD ESP,0x4                         ; 00523b67
    FLD float ptr [ESP + 0xb0]          ; 00523b6a
    FMUL ST0                            ; 00523b71
    FLD float ptr [ESP + 0xac]          ; 00523b73
    FMUL ST0                            ; 00523b7a
    FADDP                               ; 00523b7c
    FLD float ptr [ESP + 0xb4]          ; 00523b7e
    FMUL ST0                            ; 00523b85
    FADDP                               ; 00523b87
    FSQRT                               ; 00523b89
    LEA EDI,[ESP + 0xe8]                ; 00523b8b
    LEA ESI,[ESP + 0x7c]                ; 00523b92
    MOVSD ES:EDI,ESI                    ; 00523b96
    MOVSD ES:EDI,ESI                    ; 00523b97
    MOVSD ES:EDI,ESI                    ; 00523b98
    FST float ptr [ESP + 0x30]          ; 00523b99
    MOV EAX,dword ptr [ESP + 0x30]      ; 00523b9d
    FST double ptr [ESP + 0x10]         ; 00523ba1
    MOV dword ptr [ESP + 0x2c],EAX      ; 00523ba5
    FCOMP double ptr [0x005cd727]       ; 00523ba9 | DAT_005cd727
    FNSTSW AX                           ; 00523baf
    SAHF                                ; 00523bb1
    JBE 0x00523bde                      ; 00523bb2
        ;   XREF to: 00523bde (CONDITIONAL_JUMP)  ; LAB_00523bde
    FLD float ptr [ESP + 0x58]          ; 00523bb4
    FCHS                                ; 00523bb8
    FSTP float ptr [ESP + 0x150]        ; 00523bba
    JNC 0x00523ceb                      ; 00523bc1
        ;   XREF to: 00523ceb (CONDITIONAL_JUMP)  ; LAB_00523ceb
    FLD float ptr [ESP + 0x2c]          ; 00523bc7
        ;   Label: LAB_00523bc7
    FST double ptr [ESP + 0x8]          ; 00523bcb
    FCOMP double ptr [0x005cd727]       ; 00523bcf | DAT_005cd727
    FNSTSW AX                           ; 00523bd5
    SAHF                                ; 00523bd7
    JNC 0x00523d94                      ; 00523bd8
        ;   XREF to: 00523d94 (CONDITIONAL_JUMP)  ; LAB_00523d94
    LEA EDI,[ESP + 0x70]                ; 00523bde
        ;   Label: LAB_00523bde
    LEA ESI,[ESP + 0xe8]                ; 00523be2
    MOVSD ES:EDI,ESI                    ; 00523be9
    MOVSD ES:EDI,ESI                    ; 00523bea
    MOVSD ES:EDI,ESI                    ; 00523beb
    MOV EAX,dword ptr [ESP + 0x74]      ; 00523bec
    MOV dword ptr [ESP + 0x15c],EAX     ; 00523bf0
    MOV EAX,dword ptr [ESP + 0x70]      ; 00523bf7
    FLD float ptr [ESP + 0x70]          ; 00523bfb
    MOV dword ptr [ESP + 0x154],EAX     ; 00523bff
    FCOMP float ptr [0x005e3524]        ; 00523c06 | DAT_005e3524
    FNSTSW AX                           ; 00523c0c
    SAHF                                ; 00523c0e
    JNC 0x00523c1d                      ; 00523c0f
        ;   XREF to: 00523c1d (CONDITIONAL_JUMP)  ; LAB_00523c1d
    MOV EAX,[0x005e3524]                ; 00523c11 | DAT_005e3524
    MOV dword ptr [ESP + 0x154],EAX     ; 00523c16
    FLD float ptr [ESP + 0x154]         ; 00523c1d
        ;   Label: LAB_00523c1d
    FCOMP float ptr [0x005e3528]        ; 00523c24 | DAT_005e3528
    FNSTSW AX                           ; 00523c2a
    SAHF                                ; 00523c2c
    JBE 0x00523c3b                      ; 00523c2d
        ;   XREF to: 00523c3b (CONDITIONAL_JUMP)  ; LAB_00523c3b
    MOV EAX,[0x005e3528]                ; 00523c2f | DAT_005e3528
    MOV dword ptr [ESP + 0x154],EAX     ; 00523c34
    FLD float ptr [ESP + 0x15c]         ; 00523c3b
        ;   Label: LAB_00523c3b
    FCOMP float ptr [ESP + 0x144]       ; 00523c42
    FNSTSW AX                           ; 00523c49
    SAHF                                ; 00523c4b
    JNC 0x00523c5c                      ; 00523c4c
        ;   XREF to: 00523c5c (CONDITIONAL_JUMP)  ; LAB_00523c5c
    MOV EAX,dword ptr [ESP + 0x144]     ; 00523c4e
    MOV dword ptr [ESP + 0x15c],EAX     ; 00523c55
    FLD float ptr [ESP + 0x15c]         ; 00523c5c
        ;   Label: LAB_00523c5c
    FCOMP float ptr [ESP + 0x148]       ; 00523c63
    FNSTSW AX                           ; 00523c6a
    SAHF                                ; 00523c6c
    JA 0x00523e33                       ; 00523c6d
        ;   XREF to: 00523e33 (CONDITIONAL_JUMP)  ; LAB_00523e33
    MOV EDX,dword ptr [ESP + 0x158]     ; 00523c73
        ;   Label: LAB_00523c73
    MOV EAX,dword ptr [ESP + 0x15c]     ; 00523c7a
    MOV dword ptr [EDX + 0x14],0x3f800000 ; 00523c81
    MOV dword ptr [EDX + 0xc],EAX       ; 00523c88
    MOV EAX,dword ptr [ESP + 0x154]     ; 00523c8b
    MOV dword ptr [EDX + 0x8],EAX       ; 00523c92
    MOV EAX,dword ptr [ESP + 0x15c]     ; 00523c95
    MOV dword ptr [EDX + 0x4],EAX       ; 00523c9c
    MOV EAX,dword ptr [ESP + 0x154]     ; 00523c9f
    MOV dword ptr [EDX],EAX             ; 00523ca6
    MOV ESP,EBP                         ; 00523ca8
    POP EBP                             ; 00523caa
    POP EDI                             ; 00523cab
    POP ESI                             ; 00523cac
    POP EBX                             ; 00523cad
    RET                                 ; 00523cae
    MOV ECX,0x5cd6ef                    ; 00523caf | = "..\\core\\prye.cpp"
        ;   Label: LAB_00523caf
    MOV ESI,0x1405                      ; 00523cb4
    PUSH 0x5cd700                       ; 00523cb9 | = "CPrye::aimLeftPistol - no weapon?"
    MOV dword ptr [0x01d71de0],ECX      ; 00523cbe | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 00523cc4 | DAT_01d71de4
    CALL FUN_004e4330                   ; 00523cca
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 00523ccf
    JMP 0x0052381f                      ; 00523cd2
        ;   XREF to: 0052381f (UNCONDITIONAL_JUMP)  ; LAB_0052381f
    FLD1                                ; 00523cd7
        ;   Label: LAB_00523cd7
    FCOMP double ptr [ESP + 0x20]       ; 00523cd9
    FNSTSW AX                           ; 00523cdd
    SAHF                                ; 00523cdf
    JC 0x005239d0                       ; 00523ce0
        ;   XREF to: 005239d0 (CONDITIONAL_JUMP)  ; LAB_005239d0
    JMP 0x005239d8                      ; 00523ce6
        ;   XREF to: 005239d8 (UNCONDITIONAL_JUMP)  ; LAB_005239d8
    FLD float ptr [ESP + 0x30]          ; 00523ceb
        ;   Label: LAB_00523ceb
    FMUL ST0                            ; 00523cef
    FLD float ptr [ESP + 0x150]         ; 00523cf1
    FMUL ST0                            ; 00523cf8
    FSUBP                               ; 00523cfa
    FSQRT                               ; 00523cfc
    FDIV double ptr [ESP + 0x10]        ; 00523cfe
    FLD1                                ; 00523d02
    FXCH                                ; 00523d04
    FSTP double ptr [ESP + 0x18]        ; 00523d06
    FCOMP double ptr [ESP + 0x18]       ; 00523d0a
    FNSTSW AX                           ; 00523d0e
    SAHF                                ; 00523d10
    JBE 0x00523bc7                      ; 00523d11
        ;   XREF to: 00523bc7 (CONDITIONAL_JUMP)  ; LAB_00523bc7
    FLDZ                                ; 00523d17
    FCOMP double ptr [ESP + 0x18]       ; 00523d19
    FNSTSW AX                           ; 00523d1d
    SAHF                                ; 00523d1f
    JA 0x00523bc7                       ; 00523d20
        ;   XREF to: 00523bc7 (CONDITIONAL_JUMP)  ; LAB_00523bc7
    FLD double ptr [ESP + 0x18]         ; 00523d26
    CALL FUN_005a4b74                   ; 00523d2a
        ;   XREF to: 005a4b74 (UNCONDITIONAL_CALL)  ; undefined FUN_005a4b74()
    FLDZ                                ; 00523d2f
    FXCH                                ; 00523d31
    FSTP float ptr [ESP + 0x140]        ; 00523d33
    FCOMP float ptr [ESP + 0x150]       ; 00523d3a
    FNSTSW AX                           ; 00523d41
    SAHF                                ; 00523d43
    JBE 0x00523d84                      ; 00523d44
        ;   XREF to: 00523d84 (CONDITIONAL_JUMP)  ; LAB_00523d84
    FLD float ptr [ESP + 0xec]          ; 00523d46
    FSUB float ptr [ESP + 0x140]        ; 00523d4d
    FSTP float ptr [ESP + 0xec]         ; 00523d54
        ;   Label: LAB_00523d54
    PUSH dword ptr [ESP + 0xec]         ; 00523d5b
    CALL FUN_0040cfa0                   ; 00523d62
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cfa0()
    MOV dword ptr [ESP + 0x164],EAX     ; 00523d67
    FLD float ptr [ESP + 0x164]         ; 00523d6e
    ADD ESP,0x4                         ; 00523d75
    FSTP float ptr [ESP + 0xec]         ; 00523d78
    JMP 0x00523bc7                      ; 00523d7f
        ;   XREF to: 00523bc7 (UNCONDITIONAL_JUMP)  ; LAB_00523bc7
    FLD float ptr [ESP + 0xec]          ; 00523d84
        ;   Label: LAB_00523d84
    FADD float ptr [ESP + 0x140]        ; 00523d8b
    JMP 0x00523d54                      ; 00523d92
        ;   XREF to: 00523d54 (UNCONDITIONAL_JUMP)  ; LAB_00523d54
    FLD float ptr [ESP + 0x2c]          ; 00523d94
        ;   Label: LAB_00523d94
    FMUL ST0                            ; 00523d98
    FLD float ptr [ESP + 0x5c]          ; 00523d9a
    FMUL ST0                            ; 00523d9e
    FSUBP                               ; 00523da0
    FSQRT                               ; 00523da2
    FDIV double ptr [ESP + 0x8]         ; 00523da4
    FLD1                                ; 00523da8
    FXCH                                ; 00523daa
    FSTP double ptr [ESP]               ; 00523dac
    FCOMP double ptr [ESP]              ; 00523daf
    FNSTSW AX                           ; 00523db2
    SAHF                                ; 00523db4
    JBE 0x00523bde                      ; 00523db5
        ;   XREF to: 00523bde (CONDITIONAL_JUMP)  ; LAB_00523bde
    FLDZ                                ; 00523dbb
    FCOMP double ptr [ESP]              ; 00523dbd
    FNSTSW AX                           ; 00523dc0
    SAHF                                ; 00523dc2
    JA 0x00523bde                       ; 00523dc3
        ;   XREF to: 00523bde (CONDITIONAL_JUMP)  ; LAB_00523bde
    FLD double ptr [ESP]                ; 00523dc9
    CALL FUN_005a4b74                   ; 00523dcc
        ;   XREF to: 005a4b74 (UNCONDITIONAL_CALL)  ; undefined FUN_005a4b74()
    FLDZ                                ; 00523dd1
    FXCH                                ; 00523dd3
    FSTP float ptr [ESP + 0x13c]        ; 00523dd5
    FCOMP float ptr [ESP + 0x5c]        ; 00523ddc
    FNSTSW AX                           ; 00523de0
    SAHF                                ; 00523de2
    JBE 0x00523e23                      ; 00523de3
        ;   XREF to: 00523e23 (CONDITIONAL_JUMP)  ; LAB_00523e23
    FLD float ptr [ESP + 0xe8]          ; 00523de5
    FSUB float ptr [ESP + 0x13c]        ; 00523dec
    FSTP float ptr [ESP + 0xe8]         ; 00523df3
        ;   Label: LAB_00523df3
    PUSH dword ptr [ESP + 0xe8]         ; 00523dfa
    CALL FUN_0040cfa0                   ; 00523e01
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cfa0()
    MOV dword ptr [ESP + 0x164],EAX     ; 00523e06
    FLD float ptr [ESP + 0x164]         ; 00523e0d
    ADD ESP,0x4                         ; 00523e14
    FSTP float ptr [ESP + 0xe8]         ; 00523e17
    JMP 0x00523bde                      ; 00523e1e
        ;   XREF to: 00523bde (UNCONDITIONAL_JUMP)  ; LAB_00523bde
    FLD float ptr [ESP + 0xe8]          ; 00523e23
        ;   Label: LAB_00523e23
    FADD float ptr [ESP + 0x13c]        ; 00523e2a
    JMP 0x00523df3                      ; 00523e31
        ;   XREF to: 00523df3 (UNCONDITIONAL_JUMP)  ; LAB_00523df3
    MOV EAX,dword ptr [ESP + 0x148]     ; 00523e33
        ;   Label: LAB_00523e33
    MOV dword ptr [ESP + 0x15c],EAX     ; 00523e3a
    JMP 0x00523c73                      ; 00523e41
        ;   XREF to: 00523c73 (UNCONDITIONAL_JUMP)  ; LAB_00523c73

