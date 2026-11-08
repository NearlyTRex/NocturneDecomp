; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0055cc40(int *param_1,int param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_DirectSux_Unable_to_s_s_005d452f
;   TerminatedCString s_sound_snddx_cpp_005d4c3a
;   TerminatedCString s_DirectSoundDevice_startS_005d4c4d
;   TerminatedCString s_sound_snddx_cpp_005d4c7e
;   TerminatedCString s_DirectSoundDevice_startS_005d4c91
;   TerminatedCString s_sound_snddx_cpp_005d4cbb
;   TerminatedCString s_DirectSoundDevice_startS_005d4cce
;   TerminatedCString s_Set_frequency_hardware_s_005d4d28
;   TerminatedCString s_Set_volume_hardware_sfx_005d4d54
;   TerminatedCString s_Play_hardware_sfx_second_005d4d7d
;   TerminatedCString s_Set_hardware_sfx_seconda_005d4da0
;   TerminatedCString s_Set_hardware_sfx_seconda_005d4dcc
;   TerminatedCString s_Set_hardware_sfx_seconda_005d4e00
;   TerminatedCString s_Play_hardware_sfx_second_005d4e29
;   undefined4 DAT_01d71de0
;   ... and 1 more
;
; Called Functions:
;   FUN_004e4330
;   FUN_0055a560
;   FUN_0055a670
;   FUN_0055abc0
;   FUN_005a28c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055cc40
        ;   Label: FUN_0055cc40
    PUSH ESI                            ; 0055cc41
    PUSH EDI                            ; 0055cc42
    PUSH EBP                            ; 0055cc43
    SUB ESP,0xaf4                       ; 0055cc44
    MOV EBP,dword ptr [ESP + 0xb08]     ; 0055cc4a
    MOV ESI,dword ptr [ESP + 0xb0c]     ; 0055cc51
    MOV EBX,dword ptr [ESI + 0x60]      ; 0055cc58
    TEST EBX,EBX                        ; 0055cc5b
    JLE 0x0055cc68                      ; 0055cc5d
        ;   XREF to: 0055cc68 (CONDITIONAL_JUMP)  ; LAB_0055cc68
    CMP EBX,0x1f                        ; 0055cc5f
    JL 0x0055cd70                       ; 0055cc62
        ;   XREF to: 0055cd70 (CONDITIONAL_JUMP)  ; LAB_0055cd70
    PUSH EBX                            ; 0055cc68
        ;   Label: LAB_0055cc68
    MOV ECX,0x5d4c3a                    ; 0055cc69 | = "..\\sound\\snddx.cpp"
    MOV EDI,0x612                       ; 0055cc6e
    PUSH 0x5d4c4d                       ; 0055cc73 | = "DirectSoundDevice::startSfx - invalid..."
    MOV dword ptr [0x01d71de0],ECX      ; 0055cc78 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 0055cc7e | DAT_01d71de4
    CALL FUN_004e4330                   ; 0055cc84
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x8                         ; 0055cc89
    PUSH -0x1                           ; 0055cc8c
        ;   Label: LAB_0055cc8c
    PUSH ESI                            ; 0055cc8e
    MOV EAX,dword ptr [EBP]             ; 0055cc8f
    PUSH EBP                            ; 0055cc92
    CALL dword ptr [EAX + 0x44]         ; 0055cc93
    ADD ESP,0xc                         ; 0055cc96
    TEST EAX,EAX                        ; 0055cc99
    JZ 0x0055cd65                       ; 0055cc9b
        ;   XREF to: 0055cd65 (CONDITIONAL_JUMP)  ; LAB_0055cd65
    XOR EBP,EBP                         ; 0055cca1
    MOV EAX,dword ptr [ESI + 0x68]      ; 0055cca3
    MOV dword ptr [ESP + 0xaf0],EBP     ; 0055cca6
    TEST EAX,EAX                        ; 0055ccad
    JZ 0x0055cd8c                       ; 0055ccaf
        ;   XREF to: 0055cd8c (CONDITIONAL_JUMP)  ; LAB_0055cd8c
    MOV EAX,dword ptr [ESI + 0x68]      ; 0055ccb5
        ;   Label: LAB_0055ccb5
    CMP dword ptr [EAX + 0x124],0x1     ; 0055ccb8
    JLE 0x0055cdb4                      ; 0055ccbf
        ;   XREF to: 0055cdb4 (CONDITIONAL_JUMP)  ; LAB_0055cdb4
    MOV EAX,0x5d4cbb                    ; 0055ccc5 | = "..\\sound\\snddx.cpp"
        ;   Label: LAB_0055ccc5
    MOV EDX,0x61e                       ; 0055ccca
    PUSH 0x5d4cce                       ; 0055cccf | = "DirectSoundDevice::startSfx - exotic ..."
    MOV [0x01d71de0],EAX                ; 0055ccd4 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 0055ccd9 | DAT_01d71de4
    CALL FUN_004e4330                   ; 0055ccdf
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 0055cce4
    MOV EAX,dword ptr [ESI + 0x68]      ; 0055cce7
        ;   Label: LAB_0055cce7
    CMP dword ptr [EAX + 0x124],0x1     ; 0055ccea
    JNZ 0x0055cd04                      ; 0055ccf1
        ;   XREF to: 0055cd04 (CONDITIONAL_JUMP)  ; LAB_0055cd04
    CMP dword ptr [EAX + 0x13c],0x0     ; 0055ccf3
    JL 0x0055cd04                       ; 0055ccfa
        ;   XREF to: 0055cd04 (CONDITIONAL_JUMP)  ; LAB_0055cd04
    OR byte ptr [ESP + 0xaf0],0x1       ; 0055ccfc
    MOV EAX,dword ptr [ESI + 0x68]      ; 0055cd04
        ;   Label: LAB_0055cd04
    MOV EDI,dword ptr [EAX + 0x164]     ; 0055cd07
    CMP EDI,dword ptr [EAX + 0x110]     ; 0055cd0d
    JZ 0x0055cd1d                       ; 0055cd13
        ;   XREF to: 0055cd1d (CONDITIONAL_JUMP)  ; LAB_0055cd1d
    OR byte ptr [ESP + 0xaf0],0x1       ; 0055cd15
    MOV ECX,dword ptr [ESP + 0xaf0]     ; 0055cd1d
        ;   Label: LAB_0055cd1d
    LEA EAX,[EBX*0x8 + 0x0]             ; 0055cd24
    PUSH ECX                            ; 0055cd2b
    LEA EDI,[EBX + EAX*0x1]             ; 0055cd2c
    PUSH 0x0                            ; 0055cd2f
    SHL EDI,0x2                         ; 0055cd31
    PUSH 0x0                            ; 0055cd34
    MOV EAX,dword ptr [EDI + 0x2cf500c] ; 0055cd36
    PUSH EAX                            ; 0055cd3c
    MOV EDX,dword ptr [EAX]             ; 0055cd3d
    CALL dword ptr [EDX + 0x30]         ; 0055cd3f
    CMP EAX,0x88780064                  ; 0055cd42
    JZ 0x0055cdc6                       ; 0055cd47
        ;   XREF to: 0055cdc6 (CONDITIONAL_JUMP)  ; LAB_0055cdc6
    TEST EAX,EAX                        ; 0055cd49
    JNZ 0x0055d062                      ; 0055cd4b
        ;   XREF to: 0055d062 (CONDITIONAL_JUMP)  ; LAB_0055d062
    MOV DH,byte ptr [ESI + 0x11b]       ; 0055cd51
        ;   Label: LAB_0055cd51
    AND DH,0xbf                         ; 0055cd57
    MOV EAX,0x1                         ; 0055cd5a
    MOV byte ptr [ESI + 0x11b],DH       ; 0055cd5f
    ADD ESP,0xaf4                       ; 0055cd65
        ;   Label: LAB_0055cd65
    POP EBP                             ; 0055cd6b
    POP EDI                             ; 0055cd6c
    POP ESI                             ; 0055cd6d
    POP EBX                             ; 0055cd6e
    RET                                 ; 0055cd6f
    LEA EAX,[EBX*0x8 + 0x0]             ; 0055cd70
        ;   Label: LAB_0055cd70
    ADD EAX,EBX                         ; 0055cd77
    CMP dword ptr [EAX*0x4 + 0x2cf500c],0x0 ; 0055cd79
    JZ 0x0055cc68                       ; 0055cd81
        ;   XREF to: 0055cc68 (CONDITIONAL_JUMP)  ; LAB_0055cc68
    JMP 0x0055cc8c                      ; 0055cd87
        ;   XREF to: 0055cc8c (UNCONDITIONAL_JUMP)  ; LAB_0055cc8c
    MOV EDX,0x5d4c7e                    ; 0055cd8c | = "..\\sound\\snddx.cpp"
        ;   Label: LAB_0055cd8c
    MOV ECX,0x61c                       ; 0055cd91
    PUSH 0x5d4c91                       ; 0055cd96 | = "DirectSoundDevice::startSfx - no samp..."
    MOV dword ptr [0x01d71de0],EDX      ; 0055cd9b | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 0055cda1 | DAT_01d71de4
    CALL FUN_004e4330                   ; 0055cda7
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 0055cdac
    JMP 0x0055ccb5                      ; 0055cdaf
        ;   XREF to: 0055ccb5 (UNCONDITIONAL_JUMP)  ; LAB_0055ccb5
    CMP dword ptr [EAX + 0x13c],0x0     ; 0055cdb4
        ;   Label: LAB_0055cdb4
    JG 0x0055ccc5                       ; 0055cdbb
        ;   XREF to: 0055ccc5 (CONDITIONAL_JUMP)  ; LAB_0055ccc5
    JMP 0x0055cce7                      ; 0055cdc1
        ;   XREF to: 0055cce7 (UNCONDITIONAL_JUMP)  ; LAB_0055cce7
    PUSH 0x0                            ; 0055cdc6
        ;   Label: LAB_0055cdc6
    MOV EAX,dword ptr [EDI + 0x2cf500c] ; 0055cdc8
    PUSH EAX                            ; 0055cdce
    MOV EDX,dword ptr [EAX]             ; 0055cdcf
    CALL dword ptr [EDX + 0x44]         ; 0055cdd1
    TEST EAX,EAX                        ; 0055cdd4
    JNZ 0x0055cee4                      ; 0055cdd6
        ;   XREF to: 0055cee4 (CONDITIONAL_JUMP)  ; LAB_0055cee4
    LEA EAX,[EBX*0x8 + 0x0]             ; 0055cddc
    ADD EAX,EBX                         ; 0055cde3
    PUSH 0xffffd8f0                     ; 0055cde5
    MOV EAX,dword ptr [EAX*0x4 + 0x2cf500c] ; 0055cdea
    PUSH EAX                            ; 0055cdf1
    MOV EDX,dword ptr [EAX]             ; 0055cdf2
    CALL dword ptr [EDX + 0x3c]         ; 0055cdf4
    TEST EAX,EAX                        ; 0055cdf7
    JNZ 0x0055cf25                      ; 0055cdf9
        ;   XREF to: 0055cf25 (CONDITIONAL_JUMP)  ; LAB_0055cf25
    MOV EDI,dword ptr [ESP + 0xaf0]     ; 0055cdff
    LEA EAX,[EBX*0x8 + 0x0]             ; 0055ce06
    PUSH EDI                            ; 0055ce0d
    ADD EAX,EBX                         ; 0055ce0e
    PUSH 0x0                            ; 0055ce10
    MOV EAX,dword ptr [EAX*0x4 + 0x2cf500c] ; 0055ce12
    PUSH 0x0                            ; 0055ce19
    MOV EDX,dword ptr [EAX]             ; 0055ce1b
    PUSH EAX                            ; 0055ce1d
    CALL dword ptr [EDX + 0x30]         ; 0055ce1e
    TEST EAX,EAX                        ; 0055ce21
    JNZ 0x0055cf66                      ; 0055ce23
        ;   XREF to: 0055cf66 (CONDITIONAL_JUMP)  ; LAB_0055cf66
    LEA EAX,[EBX*0x8 + 0x0]             ; 0055ce29
    LEA EDI,[EBX + EAX*0x1]             ; 0055ce30
    SHL EDI,0x2                         ; 0055ce33
    MOV EBP,dword ptr [EDI + 0x2cf5028] ; 0055ce36
    CMP EBP,-0x1                        ; 0055ce3c
    JZ 0x0055ce99                       ; 0055ce3f
        ;   XREF to: 0055ce99 (CONDITIONAL_JUMP)  ; LAB_0055ce99
    MOV EAX,dword ptr [ESI + 0x68]      ; 0055ce41
    CMP EBP,dword ptr [EAX + 0x10c]     ; 0055ce44
    JZ 0x0055ce99                       ; 0055ce4a
        ;   XREF to: 0055ce99 (CONDITIONAL_JUMP)  ; LAB_0055ce99
    FILD dword ptr [EAX + 0x10c]        ; 0055ce4c
    FMUL float ptr [ESI + 0x3c]         ; 0055ce52
    SUB ESP,0x4                         ; 0055ce55
    FSTP float ptr [ESP]                ; 0055ce58
    CALL FUN_0055abc0                   ; 0055ce5b
        ;   XREF to: 0055abc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0055abc0()
    MOV EDX,EAX                         ; 0055ce60
    MOV ECX,dword ptr [EDI + 0x2cf5028] ; 0055ce62
    ADD ESP,0x4                         ; 0055ce68
    SUB EDX,ECX                         ; 0055ce6b
    MOV EBP,EAX                         ; 0055ce6d
    CMP EDX,0x1                         ; 0055ce6f
    JBE 0x0055ce99                      ; 0055ce72
        ;   XREF to: 0055ce99 (CONDITIONAL_JUMP)  ; LAB_0055ce99
    PUSH EAX                            ; 0055ce74
    MOV EDI,dword ptr [EDI + 0x2cf500c] ; 0055ce75
    PUSH EDI                            ; 0055ce7b
    MOV EDX,dword ptr [EDI]             ; 0055ce7c
    CALL dword ptr [EDX + 0x44]         ; 0055ce7e
    TEST EAX,EAX                        ; 0055ce81
    JNZ 0x0055cfa7                      ; 0055ce83
        ;   XREF to: 0055cfa7 (CONDITIONAL_JUMP)  ; LAB_0055cfa7
    LEA EAX,[EBX*0x8 + 0x0]             ; 0055ce89
        ;   Label: LAB_0055ce89
    ADD EAX,EBX                         ; 0055ce90
    MOV dword ptr [EAX*0x4 + 0x2cf5028],EBP ; 0055ce92
    LEA EAX,[EBX*0x8 + 0x0]             ; 0055ce99
        ;   Label: LAB_0055ce99
    ADD EAX,EBX                         ; 0055cea0
    PUSH 0x0                            ; 0055cea2
    MOV EAX,dword ptr [EAX*0x4 + 0x2cf500c] ; 0055cea4
    PUSH EAX                            ; 0055ceab
    MOV EDX,dword ptr [EAX]             ; 0055ceac
    CALL dword ptr [EDX + 0x34]         ; 0055ceae
    TEST EAX,EAX                        ; 0055ceb1
    JNZ 0x0055cfe0                      ; 0055ceb3
        ;   XREF to: 0055cfe0 (CONDITIONAL_JUMP)  ; LAB_0055cfe0
    LEA EAX,[EBX*0x8 + 0x0]             ; 0055ceb9
    ADD EAX,EBX                         ; 0055cec0
    MOV EBP,dword ptr [EAX*0x4 + 0x2cf5020] ; 0055cec2
    MOV EBX,dword ptr [EAX*0x4 + 0x2cf500c] ; 0055cec9
    PUSH EBP                            ; 0055ced0
    MOV EDI,dword ptr [EBX]             ; 0055ced1
    PUSH EBX                            ; 0055ced3
    CALL dword ptr [EDI + 0x3c]         ; 0055ced4
    TEST EAX,EAX                        ; 0055ced7
    JNZ 0x0055d021                      ; 0055ced9
        ;   XREF to: 0055d021 (CONDITIONAL_JUMP)  ; LAB_0055d021
    JMP 0x0055cd51                      ; 0055cedf
        ;   XREF to: 0055cd51 (UNCONDITIONAL_JUMP)  ; LAB_0055cd51
    PUSH EAX                            ; 0055cee4
        ;   Label: LAB_0055cee4
    CALL FUN_0055a670                   ; 0055cee5
        ;   XREF to: 0055a670 (UNCONDITIONAL_CALL)  ; undefined FUN_0055a670()
    ADD ESP,0x4                         ; 0055ceea
    PUSH EAX                            ; 0055ceed
    PUSH 0x5d4d28                       ; 0055ceee | = "Set frequency hardware sfx secondary ..."
    PUSH 0x5d452f                       ; 0055cef3 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x32c]               ; 0055cef8
    PUSH EAX                            ; 0055ceff
    CALL FUN_005a28c0                   ; 0055cf00
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28c0()
    ADD ESP,0x10                        ; 0055cf05
    LEA EAX,[ESP + 0x320]               ; 0055cf08
    PUSH EAX                            ; 0055cf0f
    CALL FUN_0055a560                   ; 0055cf10
        ;   XREF to: 0055a560 (UNCONDITIONAL_CALL)  ; undefined FUN_0055a560()
    ADD ESP,0x4                         ; 0055cf15
    XOR EAX,EAX                         ; 0055cf18
    ADD ESP,0xaf4                       ; 0055cf1a
    POP EBP                             ; 0055cf20
    POP EDI                             ; 0055cf21
    POP ESI                             ; 0055cf22
    POP EBX                             ; 0055cf23
    RET                                 ; 0055cf24
    PUSH EAX                            ; 0055cf25
        ;   Label: LAB_0055cf25
    CALL FUN_0055a670                   ; 0055cf26
        ;   XREF to: 0055a670 (UNCONDITIONAL_CALL)  ; undefined FUN_0055a670()
    ADD ESP,0x4                         ; 0055cf2b
    PUSH EAX                            ; 0055cf2e
    PUSH 0x5d4d54                       ; 0055cf2f | = "Set volume hardware sfx secondary buffer"
    PUSH 0x5d452f                       ; 0055cf34 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x4bc]               ; 0055cf39
    PUSH EAX                            ; 0055cf40
    CALL FUN_005a28c0                   ; 0055cf41
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28c0()
    ADD ESP,0x10                        ; 0055cf46
    LEA EAX,[ESP + 0x4b0]               ; 0055cf49
    PUSH EAX                            ; 0055cf50
    CALL FUN_0055a560                   ; 0055cf51
        ;   XREF to: 0055a560 (UNCONDITIONAL_CALL)  ; undefined FUN_0055a560()
    ADD ESP,0x4                         ; 0055cf56
    XOR EAX,EAX                         ; 0055cf59
    ADD ESP,0xaf4                       ; 0055cf5b
    POP EBP                             ; 0055cf61
    POP EDI                             ; 0055cf62
    POP ESI                             ; 0055cf63
    POP EBX                             ; 0055cf64
    RET                                 ; 0055cf65
    PUSH EAX                            ; 0055cf66
        ;   Label: LAB_0055cf66
    CALL FUN_0055a670                   ; 0055cf67
        ;   XREF to: 0055a670 (UNCONDITIONAL_CALL)  ; undefined FUN_0055a670()
    ADD ESP,0x4                         ; 0055cf6c
    PUSH EAX                            ; 0055cf6f
    PUSH 0x5d4d7d                       ; 0055cf70 | = "Play hardware sfx secondary buffer"
    PUSH 0x5d452f                       ; 0055cf75 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x7dc]               ; 0055cf7a
    PUSH EAX                            ; 0055cf81
    CALL FUN_005a28c0                   ; 0055cf82
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28c0()
    ADD ESP,0x10                        ; 0055cf87
    LEA EAX,[ESP + 0x7d0]               ; 0055cf8a
    PUSH EAX                            ; 0055cf91
    CALL FUN_0055a560                   ; 0055cf92
        ;   XREF to: 0055a560 (UNCONDITIONAL_CALL)  ; undefined FUN_0055a560()
    ADD ESP,0x4                         ; 0055cf97
    XOR EAX,EAX                         ; 0055cf9a
    ADD ESP,0xaf4                       ; 0055cf9c
    POP EBP                             ; 0055cfa2
    POP EDI                             ; 0055cfa3
    POP ESI                             ; 0055cfa4
    POP EBX                             ; 0055cfa5
    RET                                 ; 0055cfa6
    PUSH EAX                            ; 0055cfa7
        ;   Label: LAB_0055cfa7
    CALL FUN_0055a670                   ; 0055cfa8
        ;   XREF to: 0055a670 (UNCONDITIONAL_CALL)  ; undefined FUN_0055a670()
    ADD ESP,0x4                         ; 0055cfad
    PUSH EAX                            ; 0055cfb0
    PUSH 0x5d4da0                       ; 0055cfb1 | = "Set hardware sfx secondary buffer fre..."
    PUSH 0x5d452f                       ; 0055cfb6 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x64c]               ; 0055cfbb
    PUSH EAX                            ; 0055cfc2
    CALL FUN_005a28c0                   ; 0055cfc3
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28c0()
    ADD ESP,0x10                        ; 0055cfc8
    LEA EAX,[ESP + 0x640]               ; 0055cfcb
    PUSH EAX                            ; 0055cfd2
    CALL FUN_0055a560                   ; 0055cfd3
        ;   XREF to: 0055a560 (UNCONDITIONAL_CALL)  ; undefined FUN_0055a560()
    ADD ESP,0x4                         ; 0055cfd8
    JMP 0x0055ce89                      ; 0055cfdb
        ;   XREF to: 0055ce89 (UNCONDITIONAL_JUMP)  ; LAB_0055ce89
    PUSH EAX                            ; 0055cfe0
        ;   Label: LAB_0055cfe0
    CALL FUN_0055a670                   ; 0055cfe1
        ;   XREF to: 0055a670 (UNCONDITIONAL_CALL)  ; undefined FUN_0055a670()
    ADD ESP,0x4                         ; 0055cfe6
    PUSH EAX                            ; 0055cfe9
    PUSH 0x5d4dcc                       ; 0055cfea | = "Set hardware sfx secondary buffer pla..."
    PUSH 0x5d452f                       ; 0055cfef | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x96c]               ; 0055cff4
    PUSH EAX                            ; 0055cffb
    CALL FUN_005a28c0                   ; 0055cffc
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28c0()
    ADD ESP,0x10                        ; 0055d001
    LEA EAX,[ESP + 0x960]               ; 0055d004
    PUSH EAX                            ; 0055d00b
    CALL FUN_0055a560                   ; 0055d00c
        ;   XREF to: 0055a560 (UNCONDITIONAL_CALL)  ; undefined FUN_0055a560()
    ADD ESP,0x4                         ; 0055d011
    XOR EAX,EAX                         ; 0055d014
    ADD ESP,0xaf4                       ; 0055d016
    POP EBP                             ; 0055d01c
    POP EDI                             ; 0055d01d
    POP ESI                             ; 0055d01e
    POP EBX                             ; 0055d01f
    RET                                 ; 0055d020
    PUSH EAX                            ; 0055d021
        ;   Label: LAB_0055d021
    CALL FUN_0055a670                   ; 0055d022
        ;   XREF to: 0055a670 (UNCONDITIONAL_CALL)  ; undefined FUN_0055a670()
    ADD ESP,0x4                         ; 0055d027
    PUSH EAX                            ; 0055d02a
    PUSH 0x5d4e00                       ; 0055d02b | = "Set hardware sfx secondary buffer volume"
    PUSH 0x5d452f                       ; 0055d030 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x19c]               ; 0055d035
    PUSH EAX                            ; 0055d03c
    CALL FUN_005a28c0                   ; 0055d03d
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28c0()
    ADD ESP,0x10                        ; 0055d042
    LEA EAX,[ESP + 0x190]               ; 0055d045
    PUSH EAX                            ; 0055d04c
    CALL FUN_0055a560                   ; 0055d04d
        ;   XREF to: 0055a560 (UNCONDITIONAL_CALL)  ; undefined FUN_0055a560()
    ADD ESP,0x4                         ; 0055d052
    XOR EAX,EAX                         ; 0055d055
    ADD ESP,0xaf4                       ; 0055d057
    POP EBP                             ; 0055d05d
    POP EDI                             ; 0055d05e
    POP ESI                             ; 0055d05f
    POP EBX                             ; 0055d060
    RET                                 ; 0055d061
    PUSH EAX                            ; 0055d062
        ;   Label: LAB_0055d062
    CALL FUN_0055a670                   ; 0055d063
        ;   XREF to: 0055a670 (UNCONDITIONAL_CALL)  ; undefined FUN_0055a670()
    ADD ESP,0x4                         ; 0055d068
    PUSH EAX                            ; 0055d06b
    PUSH 0x5d4e29                       ; 0055d06c | = "Play hardware sfx secondary buffer"
    PUSH 0x5d452f                       ; 0055d071 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0xc]                 ; 0055d076
    PUSH EAX                            ; 0055d07a
    CALL FUN_005a28c0                   ; 0055d07b
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28c0()
    ADD ESP,0x10                        ; 0055d080
    MOV EAX,ESP                         ; 0055d083
    PUSH EAX                            ; 0055d085
    CALL FUN_0055a560                   ; 0055d086
        ;   XREF to: 0055a560 (UNCONDITIONAL_CALL)  ; undefined FUN_0055a560()
    ADD ESP,0x4                         ; 0055d08b
    XOR EAX,EAX                         ; 0055d08e
    ADD ESP,0xaf4                       ; 0055d090
    POP EBP                             ; 0055d096
    POP EDI                             ; 0055d097
    POP ESI                             ; 0055d098
    POP EBX                             ; 0055d099
    RET                                 ; 0055d09a

