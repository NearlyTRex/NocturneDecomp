; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00579ad0(int *param_1,int param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_DirectSux_Unable_to_s_s_005f4c35
;   TerminatedCString s_sound_snddx_cpp_005f5340
;   TerminatedCString s_DirectSoundDevice_startS_005f5353
;   TerminatedCString s_sound_snddx_cpp_005f5384
;   TerminatedCString s_DirectSoundDevice_startS_005f5397
;   TerminatedCString s_sound_snddx_cpp_005f53c1
;   TerminatedCString s_DirectSoundDevice_startS_005f53d4
;   TerminatedCString s_Set_frequency_hardware_s_005f542e
;   TerminatedCString s_Set_volume_hardware_sfx_005f545a
;   TerminatedCString s_Play_hardware_sfx_second_005f5483
;   TerminatedCString s_Set_hardware_sfx_seconda_005f54a6
;   TerminatedCString s_Set_hardware_sfx_seconda_005f54d2
;   TerminatedCString s_Set_hardware_sfx_seconda_005f5506
;   TerminatedCString s_Play_hardware_sfx_second_005f552f
;   undefined4 DAT_01d1d400
;   ... and 1 more
;
; Called Functions:
;   FUN_005030e0
;   FUN_005773f0
;   FUN_00577500
;   FUN_00577a50
;   FUN_005bfb40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00579ad0
        ;   Label: FUN_00579ad0
    PUSH ESI                            ; 00579ad1
    PUSH EDI                            ; 00579ad2
    PUSH EBP                            ; 00579ad3
    SUB ESP,0xaf4                       ; 00579ad4
    MOV EBP,dword ptr [ESP + 0xb08]     ; 00579ada
    MOV ESI,dword ptr [ESP + 0xb0c]     ; 00579ae1
    MOV EBX,dword ptr [ESI + 0x60]      ; 00579ae8
    TEST EBX,EBX                        ; 00579aeb
    JLE 0x00579af8                      ; 00579aed
        ;   XREF to: 00579af8 (CONDITIONAL_JUMP)  ; LAB_00579af8
    CMP EBX,0x1f                        ; 00579aef
    JL 0x00579c00                       ; 00579af2
        ;   XREF to: 00579c00 (CONDITIONAL_JUMP)  ; LAB_00579c00
    PUSH EBX                            ; 00579af8
        ;   Label: LAB_00579af8
    MOV ECX,0x5f5340                    ; 00579af9 | = "..\\sound\\snddx.cpp"
    MOV EDI,0x61a                       ; 00579afe
    PUSH 0x5f5353                       ; 00579b03 | = "DirectSoundDevice::startSfx - invalid..."
    MOV dword ptr [0x01d1d400],ECX      ; 00579b08 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 00579b0e | DAT_01d1d404
    CALL FUN_005030e0                   ; 00579b14
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x8                         ; 00579b19
    PUSH -0x1                           ; 00579b1c
        ;   Label: LAB_00579b1c
    PUSH ESI                            ; 00579b1e
    MOV EAX,dword ptr [EBP]             ; 00579b1f
    PUSH EBP                            ; 00579b22
    CALL dword ptr [EAX + 0x44]         ; 00579b23
    ADD ESP,0xc                         ; 00579b26
    TEST EAX,EAX                        ; 00579b29
    JZ 0x00579bf5                       ; 00579b2b
        ;   XREF to: 00579bf5 (CONDITIONAL_JUMP)  ; LAB_00579bf5
    XOR EBP,EBP                         ; 00579b31
    MOV EAX,dword ptr [ESI + 0x68]      ; 00579b33
    MOV dword ptr [ESP + 0xaf0],EBP     ; 00579b36
    TEST EAX,EAX                        ; 00579b3d
    JZ 0x00579c1c                       ; 00579b3f
        ;   XREF to: 00579c1c (CONDITIONAL_JUMP)  ; LAB_00579c1c
    MOV EAX,dword ptr [ESI + 0x68]      ; 00579b45
        ;   Label: LAB_00579b45
    CMP dword ptr [EAX + 0x124],0x1     ; 00579b48
    JLE 0x00579c44                      ; 00579b4f
        ;   XREF to: 00579c44 (CONDITIONAL_JUMP)  ; LAB_00579c44
    MOV EAX,0x5f53c1                    ; 00579b55 | = "..\\sound\\snddx.cpp"
        ;   Label: LAB_00579b55
    MOV EDX,0x626                       ; 00579b5a
    PUSH 0x5f53d4                       ; 00579b5f | = "DirectSoundDevice::startSfx - exotic ..."
    MOV [0x01d1d400],EAX                ; 00579b64 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 00579b69 | DAT_01d1d404
    CALL FUN_005030e0                   ; 00579b6f
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 00579b74
    MOV EAX,dword ptr [ESI + 0x68]      ; 00579b77
        ;   Label: LAB_00579b77
    CMP dword ptr [EAX + 0x124],0x1     ; 00579b7a
    JNZ 0x00579b94                      ; 00579b81
        ;   XREF to: 00579b94 (CONDITIONAL_JUMP)  ; LAB_00579b94
    CMP dword ptr [EAX + 0x13c],0x0     ; 00579b83
    JL 0x00579b94                       ; 00579b8a
        ;   XREF to: 00579b94 (CONDITIONAL_JUMP)  ; LAB_00579b94
    OR byte ptr [ESP + 0xaf0],0x1       ; 00579b8c
    MOV EAX,dword ptr [ESI + 0x68]      ; 00579b94
        ;   Label: LAB_00579b94
    MOV EDI,dword ptr [EAX + 0x164]     ; 00579b97
    CMP EDI,dword ptr [EAX + 0x110]     ; 00579b9d
    JZ 0x00579bad                       ; 00579ba3
        ;   XREF to: 00579bad (CONDITIONAL_JUMP)  ; LAB_00579bad
    OR byte ptr [ESP + 0xaf0],0x1       ; 00579ba5
    MOV ECX,dword ptr [ESP + 0xaf0]     ; 00579bad
        ;   Label: LAB_00579bad
    LEA EAX,[EBX*0x8 + 0x0]             ; 00579bb4
    PUSH ECX                            ; 00579bbb
    LEA EDI,[EBX + EAX*0x1]             ; 00579bbc
    PUSH 0x0                            ; 00579bbf
    SHL EDI,0x2                         ; 00579bc1
    PUSH 0x0                            ; 00579bc4
    MOV EAX,dword ptr [EDI + 0x2c823e0] ; 00579bc6
    PUSH EAX                            ; 00579bcc
    MOV EDX,dword ptr [EAX]             ; 00579bcd
    CALL dword ptr [EDX + 0x30]         ; 00579bcf
    CMP EAX,0x88780064                  ; 00579bd2
    JZ 0x00579c56                       ; 00579bd7
        ;   XREF to: 00579c56 (CONDITIONAL_JUMP)  ; LAB_00579c56
    TEST EAX,EAX                        ; 00579bd9
    JNZ 0x00579ef2                      ; 00579bdb
        ;   XREF to: 00579ef2 (CONDITIONAL_JUMP)  ; LAB_00579ef2
    MOV DH,byte ptr [ESI + 0x11b]       ; 00579be1
        ;   Label: LAB_00579be1
    AND DH,0xbf                         ; 00579be7
    MOV EAX,0x1                         ; 00579bea
    MOV byte ptr [ESI + 0x11b],DH       ; 00579bef
    ADD ESP,0xaf4                       ; 00579bf5
        ;   Label: LAB_00579bf5
    POP EBP                             ; 00579bfb
    POP EDI                             ; 00579bfc
    POP ESI                             ; 00579bfd
    POP EBX                             ; 00579bfe
    RET                                 ; 00579bff
    LEA EAX,[EBX*0x8 + 0x0]             ; 00579c00
        ;   Label: LAB_00579c00
    ADD EAX,EBX                         ; 00579c07
    CMP dword ptr [EAX*0x4 + 0x2c823e0],0x0 ; 00579c09
    JZ 0x00579af8                       ; 00579c11
        ;   XREF to: 00579af8 (CONDITIONAL_JUMP)  ; LAB_00579af8
    JMP 0x00579b1c                      ; 00579c17
        ;   XREF to: 00579b1c (UNCONDITIONAL_JUMP)  ; LAB_00579b1c
    MOV EDX,0x5f5384                    ; 00579c1c | = "..\\sound\\snddx.cpp"
        ;   Label: LAB_00579c1c
    MOV ECX,0x624                       ; 00579c21
    PUSH 0x5f5397                       ; 00579c26 | = "DirectSoundDevice::startSfx - no samp..."
    MOV dword ptr [0x01d1d400],EDX      ; 00579c2b | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 00579c31 | DAT_01d1d404
    CALL FUN_005030e0                   ; 00579c37
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 00579c3c
    JMP 0x00579b45                      ; 00579c3f
        ;   XREF to: 00579b45 (UNCONDITIONAL_JUMP)  ; LAB_00579b45
    CMP dword ptr [EAX + 0x13c],0x0     ; 00579c44
        ;   Label: LAB_00579c44
    JG 0x00579b55                       ; 00579c4b
        ;   XREF to: 00579b55 (CONDITIONAL_JUMP)  ; LAB_00579b55
    JMP 0x00579b77                      ; 00579c51
        ;   XREF to: 00579b77 (UNCONDITIONAL_JUMP)  ; LAB_00579b77
    PUSH 0x0                            ; 00579c56
        ;   Label: LAB_00579c56
    MOV EAX,dword ptr [EDI + 0x2c823e0] ; 00579c58
    PUSH EAX                            ; 00579c5e
    MOV EDX,dword ptr [EAX]             ; 00579c5f
    CALL dword ptr [EDX + 0x44]         ; 00579c61
    TEST EAX,EAX                        ; 00579c64
    JNZ 0x00579d74                      ; 00579c66
        ;   XREF to: 00579d74 (CONDITIONAL_JUMP)  ; LAB_00579d74
    LEA EAX,[EBX*0x8 + 0x0]             ; 00579c6c
    ADD EAX,EBX                         ; 00579c73
    PUSH 0xffffd8f0                     ; 00579c75
    MOV EAX,dword ptr [EAX*0x4 + 0x2c823e0] ; 00579c7a
    PUSH EAX                            ; 00579c81
    MOV EDX,dword ptr [EAX]             ; 00579c82
    CALL dword ptr [EDX + 0x3c]         ; 00579c84
    TEST EAX,EAX                        ; 00579c87
    JNZ 0x00579db5                      ; 00579c89
        ;   XREF to: 00579db5 (CONDITIONAL_JUMP)  ; LAB_00579db5
    MOV EDI,dword ptr [ESP + 0xaf0]     ; 00579c8f
    LEA EAX,[EBX*0x8 + 0x0]             ; 00579c96
    PUSH EDI                            ; 00579c9d
    ADD EAX,EBX                         ; 00579c9e
    PUSH 0x0                            ; 00579ca0
    MOV EAX,dword ptr [EAX*0x4 + 0x2c823e0] ; 00579ca2
    PUSH 0x0                            ; 00579ca9
    MOV EDX,dword ptr [EAX]             ; 00579cab
    PUSH EAX                            ; 00579cad
    CALL dword ptr [EDX + 0x30]         ; 00579cae
    TEST EAX,EAX                        ; 00579cb1
    JNZ 0x00579df6                      ; 00579cb3
        ;   XREF to: 00579df6 (CONDITIONAL_JUMP)  ; LAB_00579df6
    LEA EAX,[EBX*0x8 + 0x0]             ; 00579cb9
    LEA EDI,[EBX + EAX*0x1]             ; 00579cc0
    SHL EDI,0x2                         ; 00579cc3
    MOV EBP,dword ptr [EDI + 0x2c823fc] ; 00579cc6
    CMP EBP,-0x1                        ; 00579ccc
    JZ 0x00579d29                       ; 00579ccf
        ;   XREF to: 00579d29 (CONDITIONAL_JUMP)  ; LAB_00579d29
    MOV EAX,dword ptr [ESI + 0x68]      ; 00579cd1
    CMP EBP,dword ptr [EAX + 0x10c]     ; 00579cd4
    JZ 0x00579d29                       ; 00579cda
        ;   XREF to: 00579d29 (CONDITIONAL_JUMP)  ; LAB_00579d29
    FILD dword ptr [EAX + 0x10c]        ; 00579cdc
    FMUL float ptr [ESI + 0x3c]         ; 00579ce2
    SUB ESP,0x4                         ; 00579ce5
    FSTP float ptr [ESP]                ; 00579ce8
    CALL FUN_00577a50                   ; 00579ceb
        ;   XREF to: 00577a50 (UNCONDITIONAL_CALL)  ; undefined FUN_00577a50()
    MOV EDX,EAX                         ; 00579cf0
    MOV ECX,dword ptr [EDI + 0x2c823fc] ; 00579cf2
    ADD ESP,0x4                         ; 00579cf8
    SUB EDX,ECX                         ; 00579cfb
    MOV EBP,EAX                         ; 00579cfd
    CMP EDX,0x1                         ; 00579cff
    JBE 0x00579d29                      ; 00579d02
        ;   XREF to: 00579d29 (CONDITIONAL_JUMP)  ; LAB_00579d29
    PUSH EAX                            ; 00579d04
    MOV EDI,dword ptr [EDI + 0x2c823e0] ; 00579d05
    PUSH EDI                            ; 00579d0b
    MOV EDX,dword ptr [EDI]             ; 00579d0c
    CALL dword ptr [EDX + 0x44]         ; 00579d0e
    TEST EAX,EAX                        ; 00579d11
    JNZ 0x00579e37                      ; 00579d13
        ;   XREF to: 00579e37 (CONDITIONAL_JUMP)  ; LAB_00579e37
    LEA EAX,[EBX*0x8 + 0x0]             ; 00579d19
        ;   Label: LAB_00579d19
    ADD EAX,EBX                         ; 00579d20
    MOV dword ptr [EAX*0x4 + 0x2c823fc],EBP ; 00579d22
    LEA EAX,[EBX*0x8 + 0x0]             ; 00579d29
        ;   Label: LAB_00579d29
    ADD EAX,EBX                         ; 00579d30
    PUSH 0x0                            ; 00579d32
    MOV EAX,dword ptr [EAX*0x4 + 0x2c823e0] ; 00579d34
    PUSH EAX                            ; 00579d3b
    MOV EDX,dword ptr [EAX]             ; 00579d3c
    CALL dword ptr [EDX + 0x34]         ; 00579d3e
    TEST EAX,EAX                        ; 00579d41
    JNZ 0x00579e70                      ; 00579d43
        ;   XREF to: 00579e70 (CONDITIONAL_JUMP)  ; LAB_00579e70
    LEA EAX,[EBX*0x8 + 0x0]             ; 00579d49
    ADD EAX,EBX                         ; 00579d50
    MOV EBP,dword ptr [EAX*0x4 + 0x2c823f4] ; 00579d52
    MOV EBX,dword ptr [EAX*0x4 + 0x2c823e0] ; 00579d59
    PUSH EBP                            ; 00579d60
    MOV EDI,dword ptr [EBX]             ; 00579d61
    PUSH EBX                            ; 00579d63
    CALL dword ptr [EDI + 0x3c]         ; 00579d64
    TEST EAX,EAX                        ; 00579d67
    JNZ 0x00579eb1                      ; 00579d69
        ;   XREF to: 00579eb1 (CONDITIONAL_JUMP)  ; LAB_00579eb1
    JMP 0x00579be1                      ; 00579d6f
        ;   XREF to: 00579be1 (UNCONDITIONAL_JUMP)  ; LAB_00579be1
    PUSH EAX                            ; 00579d74
        ;   Label: LAB_00579d74
    CALL FUN_00577500                   ; 00579d75
        ;   XREF to: 00577500 (UNCONDITIONAL_CALL)  ; undefined FUN_00577500()
    ADD ESP,0x4                         ; 00579d7a
    PUSH EAX                            ; 00579d7d
    PUSH 0x5f542e                       ; 00579d7e | = "Set frequency hardware sfx secondary ..."
    PUSH 0x5f4c35                       ; 00579d83 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x32c]               ; 00579d88
    PUSH EAX                            ; 00579d8f
    CALL FUN_005bfb40                   ; 00579d90
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x10                        ; 00579d95
    LEA EAX,[ESP + 0x320]               ; 00579d98
    PUSH EAX                            ; 00579d9f
    CALL FUN_005773f0                   ; 00579da0
        ;   XREF to: 005773f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005773f0()
    ADD ESP,0x4                         ; 00579da5
    XOR EAX,EAX                         ; 00579da8
    ADD ESP,0xaf4                       ; 00579daa
    POP EBP                             ; 00579db0
    POP EDI                             ; 00579db1
    POP ESI                             ; 00579db2
    POP EBX                             ; 00579db3
    RET                                 ; 00579db4
    PUSH EAX                            ; 00579db5
        ;   Label: LAB_00579db5
    CALL FUN_00577500                   ; 00579db6
        ;   XREF to: 00577500 (UNCONDITIONAL_CALL)  ; undefined FUN_00577500()
    ADD ESP,0x4                         ; 00579dbb
    PUSH EAX                            ; 00579dbe
    PUSH 0x5f545a                       ; 00579dbf | = "Set volume hardware sfx secondary buffer"
    PUSH 0x5f4c35                       ; 00579dc4 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x4bc]               ; 00579dc9
    PUSH EAX                            ; 00579dd0
    CALL FUN_005bfb40                   ; 00579dd1
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x10                        ; 00579dd6
    LEA EAX,[ESP + 0x4b0]               ; 00579dd9
    PUSH EAX                            ; 00579de0
    CALL FUN_005773f0                   ; 00579de1
        ;   XREF to: 005773f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005773f0()
    ADD ESP,0x4                         ; 00579de6
    XOR EAX,EAX                         ; 00579de9
    ADD ESP,0xaf4                       ; 00579deb
    POP EBP                             ; 00579df1
    POP EDI                             ; 00579df2
    POP ESI                             ; 00579df3
    POP EBX                             ; 00579df4
    RET                                 ; 00579df5
    PUSH EAX                            ; 00579df6
        ;   Label: LAB_00579df6
    CALL FUN_00577500                   ; 00579df7
        ;   XREF to: 00577500 (UNCONDITIONAL_CALL)  ; undefined FUN_00577500()
    ADD ESP,0x4                         ; 00579dfc
    PUSH EAX                            ; 00579dff
    PUSH 0x5f5483                       ; 00579e00 | = "Play hardware sfx secondary buffer"
    PUSH 0x5f4c35                       ; 00579e05 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x7dc]               ; 00579e0a
    PUSH EAX                            ; 00579e11
    CALL FUN_005bfb40                   ; 00579e12
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x10                        ; 00579e17
    LEA EAX,[ESP + 0x7d0]               ; 00579e1a
    PUSH EAX                            ; 00579e21
    CALL FUN_005773f0                   ; 00579e22
        ;   XREF to: 005773f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005773f0()
    ADD ESP,0x4                         ; 00579e27
    XOR EAX,EAX                         ; 00579e2a
    ADD ESP,0xaf4                       ; 00579e2c
    POP EBP                             ; 00579e32
    POP EDI                             ; 00579e33
    POP ESI                             ; 00579e34
    POP EBX                             ; 00579e35
    RET                                 ; 00579e36
    PUSH EAX                            ; 00579e37
        ;   Label: LAB_00579e37
    CALL FUN_00577500                   ; 00579e38
        ;   XREF to: 00577500 (UNCONDITIONAL_CALL)  ; undefined FUN_00577500()
    ADD ESP,0x4                         ; 00579e3d
    PUSH EAX                            ; 00579e40
    PUSH 0x5f54a6                       ; 00579e41 | = "Set hardware sfx secondary buffer fre..."
    PUSH 0x5f4c35                       ; 00579e46 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x64c]               ; 00579e4b
    PUSH EAX                            ; 00579e52
    CALL FUN_005bfb40                   ; 00579e53
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x10                        ; 00579e58
    LEA EAX,[ESP + 0x640]               ; 00579e5b
    PUSH EAX                            ; 00579e62
    CALL FUN_005773f0                   ; 00579e63
        ;   XREF to: 005773f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005773f0()
    ADD ESP,0x4                         ; 00579e68
    JMP 0x00579d19                      ; 00579e6b
        ;   XREF to: 00579d19 (UNCONDITIONAL_JUMP)  ; LAB_00579d19
    PUSH EAX                            ; 00579e70
        ;   Label: LAB_00579e70
    CALL FUN_00577500                   ; 00579e71
        ;   XREF to: 00577500 (UNCONDITIONAL_CALL)  ; undefined FUN_00577500()
    ADD ESP,0x4                         ; 00579e76
    PUSH EAX                            ; 00579e79
    PUSH 0x5f54d2                       ; 00579e7a | = "Set hardware sfx secondary buffer pla..."
    PUSH 0x5f4c35                       ; 00579e7f | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x96c]               ; 00579e84
    PUSH EAX                            ; 00579e8b
    CALL FUN_005bfb40                   ; 00579e8c
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x10                        ; 00579e91
    LEA EAX,[ESP + 0x960]               ; 00579e94
    PUSH EAX                            ; 00579e9b
    CALL FUN_005773f0                   ; 00579e9c
        ;   XREF to: 005773f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005773f0()
    ADD ESP,0x4                         ; 00579ea1
    XOR EAX,EAX                         ; 00579ea4
    ADD ESP,0xaf4                       ; 00579ea6
    POP EBP                             ; 00579eac
    POP EDI                             ; 00579ead
    POP ESI                             ; 00579eae
    POP EBX                             ; 00579eaf
    RET                                 ; 00579eb0
    PUSH EAX                            ; 00579eb1
        ;   Label: LAB_00579eb1
    CALL FUN_00577500                   ; 00579eb2
        ;   XREF to: 00577500 (UNCONDITIONAL_CALL)  ; undefined FUN_00577500()
    ADD ESP,0x4                         ; 00579eb7
    PUSH EAX                            ; 00579eba
    PUSH 0x5f5506                       ; 00579ebb | = "Set hardware sfx secondary buffer volume"
    PUSH 0x5f4c35                       ; 00579ec0 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x19c]               ; 00579ec5
    PUSH EAX                            ; 00579ecc
    CALL FUN_005bfb40                   ; 00579ecd
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x10                        ; 00579ed2
    LEA EAX,[ESP + 0x190]               ; 00579ed5
    PUSH EAX                            ; 00579edc
    CALL FUN_005773f0                   ; 00579edd
        ;   XREF to: 005773f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005773f0()
    ADD ESP,0x4                         ; 00579ee2
    XOR EAX,EAX                         ; 00579ee5
    ADD ESP,0xaf4                       ; 00579ee7
    POP EBP                             ; 00579eed
    POP EDI                             ; 00579eee
    POP ESI                             ; 00579eef
    POP EBX                             ; 00579ef0
    RET                                 ; 00579ef1
    PUSH EAX                            ; 00579ef2
        ;   Label: LAB_00579ef2
    CALL FUN_00577500                   ; 00579ef3
        ;   XREF to: 00577500 (UNCONDITIONAL_CALL)  ; undefined FUN_00577500()
    ADD ESP,0x4                         ; 00579ef8
    PUSH EAX                            ; 00579efb
    PUSH 0x5f552f                       ; 00579efc | = "Play hardware sfx secondary buffer"
    PUSH 0x5f4c35                       ; 00579f01 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0xc]                 ; 00579f06
    PUSH EAX                            ; 00579f0a
    CALL FUN_005bfb40                   ; 00579f0b
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x10                        ; 00579f10
    MOV EAX,ESP                         ; 00579f13
    PUSH EAX                            ; 00579f15
    CALL FUN_005773f0                   ; 00579f16
        ;   XREF to: 005773f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005773f0()
    ADD ESP,0x4                         ; 00579f1b
    XOR EAX,EAX                         ; 00579f1e
    ADD ESP,0xaf4                       ; 00579f20
    POP EBP                             ; 00579f26
    POP EDI                             ; 00579f27
    POP ESI                             ; 00579f28
    POP EBX                             ; 00579f29
    RET                                 ; 00579f2a

