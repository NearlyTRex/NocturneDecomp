; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int sound_snddx_cpp_FUN_00578cc0(undefined4 param_1,int param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_DirectSux_Unable_to_s_s_005f4c35
;   TerminatedCString s_sound_snddx_cpp_005f4f08
;   TerminatedCString s_DirectSoundDevice_alloca_005f4f1b
;   TerminatedCString s_sound_snddx_cpp_005f4f56
;   TerminatedCString s_DirectSoundDevice_alloca_005f4f69
;   TerminatedCString s_DirectSoundDevice_alloca_005f4fa0
;   TerminatedCString s_Duplicate_sound_buffer_005f4fd2
;   TerminatedCString s_get_DirectSound3DBuffer_005f4fe9
;   CConsole* g_CConsolePtr = 007db5f0
;   undefined4 DAT_00627870
;   CConsole g_CConsoleInstance
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_02c81d94
;   undefined4 DAT_02c81da0
;   ... and 11 more
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_unknown.c_sprintf_FUN_005bfb40
;   engine_console.cpp_CConsole_printf_FUN_00445430
;   sound_snddx.cpp_FUN_00577500
;   sound_snddx.cpp_FUN_00577880
;   sound_sndmain.cpp_FUN_005773f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00578cc0
        ;   Label: sound_snddx.cpp_FUN_00578cc0
    PUSH ESI                            ; 00578cc1
    PUSH EDI                            ; 00578cc2
    PUSH EBP                            ; 00578cc3
    SUB ESP,0x320                       ; 00578cc4
    MOV EBP,dword ptr [ESP + 0x338]     ; 00578cca
    TEST EBP,EBP                        ; 00578cd1
    JLE 0x00578cde                      ; 00578cd3
        ;   XREF to: 00578cde (CONDITIONAL_JUMP)  ; LAB_00578cde
    CMP EBP,0x41                        ; 00578cd5
    JL 0x00578e08                       ; 00578cd8
        ;   XREF to: 00578e08 (CONDITIONAL_JUMP)  ; LAB_00578e08
    PUSH EBP                            ; 00578cde
        ;   Label: LAB_00578cde
    MOV EBX,0x5f4f08                    ; 00578cdf | = "..\\sound\\snddx.cpp"
    MOV ESI,0x47b                       ; 00578ce4
    PUSH 0x5f4f1b                       ; 00578ce9 | = "DirectSoundDevice::allocateSfx - Inva..."
    MOV dword ptr [0x01d1d400],EBX      ; 00578cee | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 00578cf4 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00578cfa
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 00578cff
    CMP dword ptr [0x02c81d94],0x0      ; 00578d02 | DAT_02c81d94
        ;   Label: LAB_00578d02
    JNZ 0x00578d2d                      ; 00578d09
        ;   XREF to: 00578d2d (CONDITIONAL_JUMP)  ; LAB_00578d2d
    MOV EAX,0x5f4f56                    ; 00578d0b | = "..\\sound\\snddx.cpp"
    MOV EDX,0x47c                       ; 00578d10
    PUSH 0x5f4f69                       ; 00578d15 | = "DirectSoundDevice::allocateSfx - dSou..."
    MOV [0x01d1d400],EAX                ; 00578d1a | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 00578d1f | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00578d25
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00578d2a
    MOV EAX,0x24                        ; 00578d2d
        ;   Label: LAB_00578d2d
    MOV ECX,dword ptr [0x02c82404]      ; 00578d32 | DAT_02c82404
    MOV EBX,0x1                         ; 00578d38
    TEST ECX,ECX                        ; 00578d3d
    JZ 0x00578d55                       ; 00578d3f
        ;   XREF to: 00578d55 (CONDITIONAL_JUMP)  ; LAB_00578d55
    ADD EAX,0x24                        ; 00578d41
        ;   Label: LAB_00578d41
    INC EBX                             ; 00578d44
    CMP EAX,0x45c                       ; 00578d45
    JGE 0x00578d55                      ; 00578d4a
        ;   XREF to: 00578d55 (CONDITIONAL_JUMP)  ; LAB_00578d55
    CMP dword ptr [EAX + 0x2c823e0],0x0 ; 00578d4c | DAT_02c82428 | DAT_02c8244c
    JNZ 0x00578d41                      ; 00578d53
        ;   XREF to: 00578d41 (CONDITIONAL_JUMP)  ; LAB_00578d41
    CMP EBX,0x1f                        ; 00578d55
        ;   Label: LAB_00578d55
    JGE 0x00578e33                      ; 00578d58
        ;   XREF to: 00578e33 (CONDITIONAL_JUMP)  ; LAB_00578e33
    LEA EAX,[EBP*0x4 + 0x0]             ; 00578d5e
    SUB EAX,EBP                         ; 00578d65
    MOV ESI,0x2c81dc4                   ; 00578d67
    SHL EAX,0x3                         ; 00578d6c
    ADD ESI,EAX                         ; 00578d6f
    LEA EAX,[EBX*0x8 + 0x0]             ; 00578d71
    ADD EAX,EBX                         ; 00578d78
    MOV EDI,0x2c823e0                   ; 00578d7a
    SHL EAX,0x2                         ; 00578d7f
    ADD EDI,EAX                         ; 00578d82
    MOV EAX,dword ptr [ESI + 0x4]       ; 00578d84
    TEST EAX,EAX                        ; 00578d87
    JZ 0x00578d9c                       ; 00578d89
        ;   XREF to: 00578d9c (CONDITIONAL_JUMP)  ; LAB_00578d9c
    IMUL EDX,EAX,0x24                   ; 00578d8b
        ;   Label: LAB_00578d8b
    MOV ECX,dword ptr [EDX + 0x2c823e0] ; 00578d8e
    CMP ECX,dword ptr [ESI]             ; 00578d94
    JNZ 0x00578e54                      ; 00578d96
        ;   XREF to: 00578e54 (CONDITIONAL_JUMP)  ; LAB_00578e54
    TEST EAX,EAX                        ; 00578d9c
        ;   Label: LAB_00578d9c
    JNZ 0x00578e67                      ; 00578d9e
        ;   XREF to: 00578e67 (CONDITIONAL_JUMP)  ; LAB_00578e67
    MOV EAX,dword ptr [ESI]             ; 00578da4
    MOV dword ptr [EDI],EAX             ; 00578da6 | DAT_02c82428
    MOV dword ptr [EDI + 0x8],EBP       ; 00578da8 | DAT_02c82430
    MOV EDX,dword ptr [ESI + 0x4]       ; 00578dab
    TEST EDX,EDX                        ; 00578dae
    JZ 0x00578dc2                       ; 00578db0
        ;   XREF to: 00578dc2 (CONDITIONAL_JUMP)  ; LAB_00578dc2
    LEA EAX,[EDX*0x8 + 0x0]             ; 00578db2
    ADD EAX,EDX                         ; 00578db9
    MOV dword ptr [EAX*0x4 + 0x2c823ec],EBX ; 00578dbb
    MOV EAX,dword ptr [ESI + 0x4]       ; 00578dc2
        ;   Label: LAB_00578dc2
    MOV dword ptr [EDI + 0xc],0x0       ; 00578dc5 | DAT_02c82434
    MOV dword ptr [EDI + 0x10],EAX      ; 00578dcc | DAT_02c82438
    MOV dword ptr [ESI + 0x4],EBX       ; 00578dcf
    CMP dword ptr [0x02c81da0],0x0      ; 00578dd2 | DAT_02c81da0
    JNZ 0x00578ee4                      ; 00578dd9
        ;   XREF to: 00578ee4 (CONDITIONAL_JUMP)  ; LAB_00578ee4
    MOV dword ptr [EDI + 0x1c],0xffffffff ; 00578ddf | DAT_02c82444
        ;   Label: LAB_00578ddf
    MOV dword ptr [EDI + 0x20],0xffffffff ; 00578de6 | DAT_02c82448
    MOV dword ptr [EDI + 0x18],0x0      ; 00578ded | DAT_02c82440
    MOV EAX,EBX                         ; 00578df4
    MOV dword ptr [EDI + 0x14],0x0      ; 00578df6 | DAT_02c8243c
    ADD ESP,0x320                       ; 00578dfd
        ;   Label: LAB_00578dfd
    POP EBP                             ; 00578e03
    POP EDI                             ; 00578e04
    POP ESI                             ; 00578e05
    POP EBX                             ; 00578e06
    RET                                 ; 00578e07
    LEA EAX,[EBP*0x4 + 0x0]             ; 00578e08
        ;   Label: LAB_00578e08
    SUB EAX,EBP                         ; 00578e0f
    SHL EAX,0x3                         ; 00578e11
    CMP dword ptr [EAX + 0x2c81dc4],0x0 ; 00578e14
    JZ 0x00578cde                       ; 00578e1b
        ;   XREF to: 00578cde (CONDITIONAL_JUMP)  ; LAB_00578cde
    CMP dword ptr [EAX + 0x2c81dcc],0x1 ; 00578e21
    JL 0x00578cde                       ; 00578e28
        ;   XREF to: 00578cde (CONDITIONAL_JUMP)  ; LAB_00578cde
    JMP 0x00578d02                      ; 00578e2e
        ;   XREF to: 00578d02 (UNCONDITIONAL_JUMP)  ; LAB_00578d02
    PUSH 0x5f4fa0                       ; 00578e33 | = "DirectSoundDevice::allocateSfx - no f..."
        ;   Label: LAB_00578e33
    MOV EDI,dword ptr [0x00611100]      ; 00578e38 | g_CConsolePtr
    PUSH EDI                            ; 00578e3e | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00445430 ; 00578e3f
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00445430(CConsole * this_ptr, char * format)
    ADD ESP,0x8                         ; 00578e44
    XOR EAX,EAX                         ; 00578e47
    ADD ESP,0x320                       ; 00578e49
    POP EBP                             ; 00578e4f
    POP EDI                             ; 00578e50
    POP ESI                             ; 00578e51
    POP EBX                             ; 00578e52
    RET                                 ; 00578e53
    MOV EAX,dword ptr [EDX + 0x2c823f0] ; 00578e54
        ;   Label: LAB_00578e54
    TEST EAX,EAX                        ; 00578e5a
    JNZ 0x00578d8b                      ; 00578e5c
        ;   XREF to: 00578d8b (CONDITIONAL_JUMP)  ; LAB_00578d8b
    JMP 0x00578d9c                      ; 00578e62
        ;   XREF to: 00578d9c (UNCONDITIONAL_JUMP)  ; LAB_00578d9c
    PUSH EDI                            ; 00578e67 | DAT_02c82428
        ;   Label: LAB_00578e67
    MOV ECX,dword ptr [ESI]             ; 00578e68
    MOV EAX,[0x02c81d94]                ; 00578e6a | DAT_02c81d94
    PUSH ECX                            ; 00578e6f
    MOV EDX,dword ptr [EAX]             ; 00578e70
    PUSH EAX                            ; 00578e72
    CALL dword ptr [EDX + 0x14]         ; 00578e73
    TEST EAX,EAX                        ; 00578e76
    JNZ 0x00578ea3                      ; 00578e78
        ;   XREF to: 00578ea3 (CONDITIONAL_JUMP)  ; LAB_00578ea3
    MOV EAX,dword ptr [EDI]             ; 00578e7a | DAT_02c82428
    TEST EAX,EAX                        ; 00578e7c
    JZ 0x00578dfd                       ; 00578e7e
        ;   XREF to: 00578dfd (CONDITIONAL_JUMP)  ; LAB_00578dfd
    MOV EDX,dword ptr [ESI + 0x4]       ; 00578e84
    LEA EAX,[EDX*0x8 + 0x0]             ; 00578e87
    ADD EAX,EDX                         ; 00578e8e
    SHL EAX,0x2                         ; 00578e90
    ADD EAX,0x2c823e0                   ; 00578e93
    MOV dword ptr [EAX + 0xc],EBX       ; 00578e98
    MOV dword ptr [EDI + 0x8],EBP       ; 00578e9b | DAT_02c82430
    JMP 0x00578dc2                      ; 00578e9e
        ;   XREF to: 00578dc2 (UNCONDITIONAL_JUMP)  ; LAB_00578dc2
    PUSH EAX                            ; 00578ea3
        ;   Label: LAB_00578ea3
    CALL sound_snddx.cpp_FUN_00577500   ; 00578ea4
        ;   XREF to: 00577500 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_00577500(uint error_code)
    ADD ESP,0x4                         ; 00578ea9
    PUSH EAX                            ; 00578eac
    PUSH 0x5f4fd2                       ; 00578ead | = "Duplicate sound buffer"
    PUSH 0x5f4c35                       ; 00578eb2 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x19c]               ; 00578eb7
    PUSH EAX                            ; 00578ebe
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00578ebf
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x10                        ; 00578ec4
    LEA EAX,[ESP + 0x190]               ; 00578ec7
    PUSH EAX                            ; 00578ece
    CALL sound_sndmain.cpp_FUN_005773f0 ; 00578ecf
        ;   XREF to: 005773f0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005773f0()
    ADD ESP,0x4                         ; 00578ed4
    XOR EAX,EAX                         ; 00578ed7
    ADD ESP,0x320                       ; 00578ed9
    POP EBP                             ; 00578edf
    POP EDI                             ; 00578ee0
    POP ESI                             ; 00578ee1
    POP EBX                             ; 00578ee2
    RET                                 ; 00578ee3
    LEA EDX,[EDI + 0x4]                 ; 00578ee4
        ;   Label: LAB_00578ee4
    PUSH EDX                            ; 00578ee7
    MOV EAX,dword ptr [EDI]             ; 00578ee8 | DAT_02c82428
    PUSH 0x627870                       ; 00578eea | DAT_00627870
    MOV ECX,dword ptr [EAX]             ; 00578eef
    PUSH EAX                            ; 00578ef1
    CALL dword ptr [ECX]                ; 00578ef2
    TEST EAX,EAX                        ; 00578ef4
    JNZ 0x00578f18                      ; 00578ef6
        ;   XREF to: 00578f18 (CONDITIONAL_JUMP)  ; LAB_00578f18
    CMP dword ptr [EDI + 0x4],0x0       ; 00578ef8 | DAT_02c8242c
        ;   Label: LAB_00578ef8
    JNZ 0x00578ddf                      ; 00578efc
        ;   XREF to: 00578ddf (CONDITIONAL_JUMP)  ; LAB_00578ddf
    PUSH EBX                            ; 00578f02
    CALL sound_snddx.cpp_FUN_00577880   ; 00578f03
        ;   XREF to: 00577880 (UNCONDITIONAL_CALL)  ; undefined sound_snddx.cpp_FUN_00577880()
    ADD ESP,0x4                         ; 00578f08
    XOR EAX,EAX                         ; 00578f0b
    ADD ESP,0x320                       ; 00578f0d
    POP EBP                             ; 00578f13
    POP EDI                             ; 00578f14
    POP ESI                             ; 00578f15
    POP EBX                             ; 00578f16
    RET                                 ; 00578f17
    PUSH EAX                            ; 00578f18
        ;   Label: LAB_00578f18
    CALL sound_snddx.cpp_FUN_00577500   ; 00578f19
        ;   XREF to: 00577500 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_00577500(uint error_code)
    ADD ESP,0x4                         ; 00578f1e
    PUSH EAX                            ; 00578f21
    PUSH 0x5f4fe9                       ; 00578f22 | = "get DirectSound3DBuffer interface fro..."
    PUSH 0x5f4c35                       ; 00578f27 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0xc]                 ; 00578f2c
    PUSH EAX                            ; 00578f30
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00578f31
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x10                        ; 00578f36
    MOV EAX,ESP                         ; 00578f39
    PUSH EAX                            ; 00578f3b
    CALL sound_sndmain.cpp_FUN_005773f0 ; 00578f3c
        ;   XREF to: 005773f0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005773f0()
    ADD ESP,0x4                         ; 00578f41
    JMP 0x00578ef8                      ; 00578f44
        ;   XREF to: 00578ef8 (UNCONDITIONAL_JUMP)  ; LAB_00578ef8

