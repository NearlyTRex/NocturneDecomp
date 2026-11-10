; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_texture_cpp_FUN_0056ad5e(int param_1,char *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_02cf5fd8
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_unknown.c_FUN_005a3650
;   crt_unknown.c_FUN_005a3770
;   engine_dosio.cpp_getFileSize_FUN_004657f0
;   engine_dosio.cpp_makePath_FUN_00465e80
;   engine_dosio.cpp_splitPath_FUN_00465e50
;   engine_texture.cpp_FUN_0056aa10
;   engine_texture.cpp_FUN_0056aab0
;   support_trstream.cpp_FUN_00573fc0
;   unkafter_turret.cpp_CInStreamFile_ctor_FUN_005738c0
;   unkafter_turret.cpp_CInStreamFile_dtor_FUN_00573a40
;   unkafter_turret.cpp_FUN_00573c00
;   unkafter_turret.cpp_FUN_00573db0
;
; *****************************************************************************

section .text

    MOV ECX,ECX                         ; 0056ad5e
        ;   Label: engine_texture.cpp_FUN_0056ad5e
    PUSH ESI                            ; 0056ad60
    PUSH EDI                            ; 0056ad61
    PUSH EBP                            ; 0056ad62
    SUB ESP,0x358                       ; 0056ad63
    MOV ESI,dword ptr [ESP + 0x36c]     ; 0056ad69
    TEST ESI,ESI                        ; 0056ad70
    JZ 0x0056b1fd                       ; 0056ad72
        ;   XREF to: 0056b1fd (CONDITIONAL_JUMP)  ; LAB_0056b1fd
    MOV EDX,dword ptr [0x02cf5fd8]      ; 0056ad78 | DAT_02cf5fd8
    TEST EDX,EDX                        ; 0056ad7e
    JNZ 0x0056b217                      ; 0056ad80
        ;   XREF to: 0056b217 (CONDITIONAL_JUMP)  ; LAB_0056b217
    PUSH ESI                            ; 0056ad86
    MOV dword ptr [ESP + 0x350],EDX     ; 0056ad87
    PUSH 0x5d61f7                       ; 0056ad8e
    MOV dword ptr [ESP + 0x344],EDX     ; 0056ad93
    MOV dword ptr [ESP + 0x358],EDX     ; 0056ad9a
    CALL engine_dosio.cpp_getFileSize_FUN_004657f0 ; 0056ada1
        ;   XREF to: 004657f0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFileSize_FUN_004657f0(char * directory, char * filename)
    ADD ESP,0x8                         ; 0056ada6
    CMP EAX,0x1000                      ; 0056ada9
    JNZ 0x0056b255                      ; 0056adae
        ;   XREF to: 0056b255 (CONDITIONAL_JUMP)  ; LAB_0056b255
    MOV dword ptr [ESP + 0x350],0x40    ; 0056adb4
    MOV EAX,dword ptr [ESP + 0x350]     ; 0056adbf
        ;   Label: LAB_0056adbf
    IMUL EAX,EAX                        ; 0056adc6
    PUSH EAX                            ; 0056adc9
    CALL crt_unknown.c_FUN_005a3650     ; 0056adca
        ;   XREF to: 005a3650 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005a3650(ulong size)
    ADD ESP,0x4                         ; 0056adcf
    MOV dword ptr [ESP + 0x338],EAX     ; 0056add2
    TEST EAX,EAX                        ; 0056add9
    JNZ 0x0056adff                      ; 0056addb
        ;   XREF to: 0056adff (CONDITIONAL_JUMP)  ; LAB_0056adff
    MOV EBP,0x5d624e                    ; 0056addd
    MOV EAX,0x577                       ; 0056ade2
    PUSH 0x5d6264                       ; 0056ade7
    MOV dword ptr [0x01d71de0],EBP      ; 0056adec | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 0056adf2 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0056adf7
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0056adfc
    PUSH 0x300                          ; 0056adff
        ;   Label: LAB_0056adff
    CALL crt_unknown.c_FUN_005a3650     ; 0056ae04
        ;   XREF to: 005a3650 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005a3650(ulong size)
    ADD ESP,0x4                         ; 0056ae09
    MOV dword ptr [ESP + 0x32c],EAX     ; 0056ae0c
    TEST EAX,EAX                        ; 0056ae13
    JNZ 0x0056ae3a                      ; 0056ae15
        ;   XREF to: 0056ae3a (CONDITIONAL_JUMP)  ; LAB_0056ae3a
    MOV EDX,0x5d628b                    ; 0056ae17
    MOV ECX,0x57b                       ; 0056ae1c
    PUSH 0x5d62a1                       ; 0056ae21
    MOV dword ptr [0x01d71de0],EDX      ; 0056ae26 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 0056ae2c | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0056ae32
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0056ae37
    PUSH EBX                            ; 0056ae3a
        ;   Label: LAB_0056ae3a
    LEA EAX,[ESP + 0x304]               ; 0056ae3b
    PUSH EAX                            ; 0056ae42
    CALL unkafter_turret.cpp_CInStreamFile_ctor_FUN_005738c0 ; 0056ae43
        ;   XREF to: 005738c0 (UNCONDITIONAL_CALL)  ; CInStreamFile * unkafter_turret.cpp_CInStreamFile_ctor_FUN_005738c0(CInStreamFile * this_ptr)
    ADD ESP,0x4                         ; 0056ae48
    PUSH 0x1                            ; 0056ae4b
    PUSH ESI                            ; 0056ae4d
    PUSH 0x5d62c8                       ; 0056ae4e
    LEA EAX,[ESP + 0x310]               ; 0056ae53
    PUSH EAX                            ; 0056ae5a
    CALL support_trstream.cpp_FUN_00573fc0 ; 0056ae5b
        ;   XREF to: 00573fc0 (UNCONDITIONAL_CALL)  ; undefined support_trstream.cpp_FUN_00573fc0()
    ADD ESP,0x10                        ; 0056ae60
    TEST EAX,EAX                        ; 0056ae63
    JZ 0x0056b2ab                       ; 0056ae65
        ;   XREF to: 0056b2ab (CONDITIONAL_JUMP)  ; LAB_0056b2ab
    MOV EAX,dword ptr [ESP + 0x354]     ; 0056ae6b
        ;   Label: LAB_0056ae6b
    IMUL EAX,EAX                        ; 0056ae72
    PUSH EAX                            ; 0056ae75
    MOV EAX,dword ptr [ESP + 0x340]     ; 0056ae76
    PUSH EAX                            ; 0056ae7d
    LEA EAX,[ESP + 0x30c]               ; 0056ae7e
    PUSH EAX                            ; 0056ae85
    CALL unkafter_turret.cpp_FUN_00573c00 ; 0056ae86
        ;   XREF to: 00573c00 (UNCONDITIONAL_CALL)  ; undefined unkafter_turret.cpp_FUN_00573c00()
    ADD ESP,0xc                         ; 0056ae8b
    LEA EAX,[ESP + 0x304]               ; 0056ae8e
    PUSH EAX                            ; 0056ae95
    CALL unkafter_turret.cpp_FUN_00573db0 ; 0056ae96
        ;   XREF to: 00573db0 (UNCONDITIONAL_CALL)  ; undefined unkafter_turret.cpp_FUN_00573db0()
    ADD ESP,0x4                         ; 0056ae9b
    PUSH 0x0                            ; 0056ae9e
    LEA EAX,[ESP + 0x8]                 ; 0056aea0
    PUSH EAX                            ; 0056aea4
    PUSH 0x0                            ; 0056aea5
    PUSH 0x0                            ; 0056aea7
    PUSH ESI                            ; 0056aea9
    CALL engine_dosio.cpp_splitPath_FUN_00465e50 ; 0056aeaa
        ;   XREF to: 00465e50 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_splitPath_FUN_00465e50(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0056aeaf
    PUSH 0x5d6339                       ; 0056aeb2
    LEA EAX,[ESP + 0x8]                 ; 0056aeb7
    PUSH EAX                            ; 0056aebb
    PUSH 0x0                            ; 0056aebc
    PUSH 0x0                            ; 0056aebe
    LEA EAX,[ESP + 0x114]               ; 0056aec0
    PUSH EAX                            ; 0056aec7
    CALL engine_dosio.cpp_makePath_FUN_00465e80 ; 0056aec8
        ;   XREF to: 00465e80 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_makePath_FUN_00465e80(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0056aecd
    PUSH 0x5d633e                       ; 0056aed0
    LEA EAX,[ESP + 0x8]                 ; 0056aed5
    PUSH EAX                            ; 0056aed9
    PUSH 0x0                            ; 0056aeda
    PUSH 0x0                            ; 0056aedc
    LEA EAX,[ESP + 0x214]               ; 0056aede
    PUSH EAX                            ; 0056aee5
    CALL engine_dosio.cpp_makePath_FUN_00465e80 ; 0056aee6
        ;   XREF to: 00465e80 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_makePath_FUN_00465e80(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0056aeeb
    PUSH 0x1                            ; 0056aeee
    LEA EAX,[ESP + 0x108]               ; 0056aef0
    PUSH EAX                            ; 0056aef7
    PUSH 0x5d6343                       ; 0056aef8
    LEA EAX,[ESP + 0x310]               ; 0056aefd
    PUSH EAX                            ; 0056af04
    CALL support_trstream.cpp_FUN_00573fc0 ; 0056af05
        ;   XREF to: 00573fc0 (UNCONDITIONAL_CALL)  ; undefined support_trstream.cpp_FUN_00573fc0()
    ADD ESP,0x10                        ; 0056af0a
    TEST EAX,EAX                        ; 0056af0d
    JZ 0x0056b2de                       ; 0056af0f
        ;   XREF to: 0056b2de (CONDITIONAL_JUMP)  ; LAB_0056b2de
    PUSH 0x300                          ; 0056af15
        ;   Label: LAB_0056af15
    MOV EBX,dword ptr [ESP + 0x334]     ; 0056af1a
    PUSH EBX                            ; 0056af21
    LEA EAX,[ESP + 0x30c]               ; 0056af22
    PUSH EAX                            ; 0056af29
    CALL unkafter_turret.cpp_FUN_00573c00 ; 0056af2a
        ;   XREF to: 00573c00 (UNCONDITIONAL_CALL)  ; undefined unkafter_turret.cpp_FUN_00573c00()
    ADD ESP,0xc                         ; 0056af2f
    LEA EAX,[ESP + 0x304]               ; 0056af32
    PUSH EAX                            ; 0056af39
    CALL unkafter_turret.cpp_FUN_00573db0 ; 0056af3a
        ;   XREF to: 00573db0 (UNCONDITIONAL_CALL)  ; undefined unkafter_turret.cpp_FUN_00573db0()
    ADD ESP,0x4                         ; 0056af3f
    PUSH 0x1                            ; 0056af42
    LEA EAX,[ESP + 0x208]               ; 0056af44
    PUSH EAX                            ; 0056af4b
    PUSH 0x5d6384                       ; 0056af4c
    LEA EAX,[ESP + 0x310]               ; 0056af51
    PUSH EAX                            ; 0056af58
    CALL support_trstream.cpp_FUN_00573fc0 ; 0056af59
        ;   XREF to: 00573fc0 (UNCONDITIONAL_CALL)  ; undefined support_trstream.cpp_FUN_00573fc0()
    ADD ESP,0x10                        ; 0056af5e
    TEST EAX,EAX                        ; 0056af61
    JZ 0x0056afd9                       ; 0056af63
        ;   XREF to: 0056afd9 (CONDITIONAL_JUMP)  ; LAB_0056afd9
    MOV EAX,dword ptr [ESP + 0x354]     ; 0056af65
    IMUL EAX,EAX                        ; 0056af6c
    PUSH EAX                            ; 0056af6f
    CALL crt_unknown.c_FUN_005a3650     ; 0056af70
        ;   XREF to: 005a3650 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005a3650(ulong size)
    ADD ESP,0x4                         ; 0056af75
    MOV dword ptr [ESP + 0x350],EAX     ; 0056af78
    TEST EAX,EAX                        ; 0056af7f
    JNZ 0x0056afa6                      ; 0056af81
        ;   XREF to: 0056afa6 (CONDITIONAL_JUMP)  ; LAB_0056afa6
    MOV EDI,0x5d6388                    ; 0056af83
    MOV EBP,0x595                       ; 0056af88
    PUSH 0x5d639e                       ; 0056af8d
    MOV dword ptr [0x01d71de0],EDI      ; 0056af92 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBP      ; 0056af98 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0056af9e
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0056afa3
    MOV EAX,dword ptr [ESP + 0x354]     ; 0056afa6
        ;   Label: LAB_0056afa6
    IMUL EAX,EAX                        ; 0056afad
    PUSH EAX                            ; 0056afb0
    MOV ECX,dword ptr [ESP + 0x354]     ; 0056afb1
    PUSH ECX                            ; 0056afb8
    LEA EAX,[ESP + 0x30c]               ; 0056afb9
    PUSH EAX                            ; 0056afc0
    CALL unkafter_turret.cpp_FUN_00573c00 ; 0056afc1
        ;   XREF to: 00573c00 (UNCONDITIONAL_CALL)  ; undefined unkafter_turret.cpp_FUN_00573c00()
    ADD ESP,0xc                         ; 0056afc6
    LEA EAX,[ESP + 0x304]               ; 0056afc9
    PUSH EAX                            ; 0056afd0
    CALL unkafter_turret.cpp_FUN_00573db0 ; 0056afd1
        ;   XREF to: 00573db0 (UNCONDITIONAL_CALL)  ; undefined unkafter_turret.cpp_FUN_00573db0()
    ADD ESP,0x4                         ; 0056afd6
    MOV EAX,dword ptr [ESP + 0x354]     ; 0056afd9
        ;   Label: LAB_0056afd9
    IMUL EAX,EAX                        ; 0056afe0
    SHL EAX,0x2                         ; 0056afe3
    PUSH EAX                            ; 0056afe6
    CALL crt_unknown.c_FUN_005a3650     ; 0056afe7
        ;   XREF to: 005a3650 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005a3650(ulong size)
    ADD ESP,0x4                         ; 0056afec
    MOV dword ptr [ESP + 0x338],EAX     ; 0056afef
    TEST EAX,EAX                        ; 0056aff6
    JNZ 0x0056b01d                      ; 0056aff8
        ;   XREF to: 0056b01d (CONDITIONAL_JUMP)  ; LAB_0056b01d
    MOV ESI,0x5d63c5                    ; 0056affa
    MOV EDI,0x5d4                       ; 0056afff
    PUSH 0x5d63db                       ; 0056b004
    MOV dword ptr [0x01d71de0],ESI      ; 0056b009 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 0056b00f | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0056b015
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0056b01a
    CMP dword ptr [ESP + 0x350],0x0     ; 0056b01d
        ;   Label: LAB_0056b01d
    JZ 0x0056b06b                       ; 0056b025
        ;   XREF to: 0056b06b (CONDITIONAL_JUMP)  ; LAB_0056b06b
    MOV EAX,dword ptr [ESP + 0x354]     ; 0056b027
    IMUL EAX,EAX                        ; 0056b02e
    SHL EAX,0x2                         ; 0056b031
    PUSH EAX                            ; 0056b034
    CALL crt_unknown.c_FUN_005a3650     ; 0056b035
        ;   XREF to: 005a3650 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005a3650(ulong size)
    ADD ESP,0x4                         ; 0056b03a
    MOV dword ptr [ESP + 0x340],EAX     ; 0056b03d
    TEST EAX,EAX                        ; 0056b044
    JNZ 0x0056b06b                      ; 0056b046
        ;   XREF to: 0056b06b (CONDITIONAL_JUMP)  ; LAB_0056b06b
    MOV ECX,0x5d6402                    ; 0056b048
    MOV EBX,0x5da                       ; 0056b04d
    PUSH 0x5d6418                       ; 0056b052
    MOV dword ptr [0x01d71de0],ECX      ; 0056b057 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBX      ; 0056b05d | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0056b063
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0056b068
    XOR ESI,ESI                         ; 0056b06b
        ;   Label: LAB_0056b06b
    MOV EDI,dword ptr [ESP + 0x354]     ; 0056b06d
    MOV dword ptr [ESP + 0x348],ESI     ; 0056b074
    TEST EDI,EDI                        ; 0056b07b
    JLE 0x0056b18a                      ; 0056b07d
        ;   XREF to: 0056b18a (CONDITIONAL_JUMP)  ; LAB_0056b18a
    LEA EAX,[EDI + EDI*0x1]             ; 0056b083
    MOV dword ptr [ESP + 0x344],EAX     ; 0056b086
    LEA EAX,[EDI*0x4 + 0x0]             ; 0056b08d
    MOV dword ptr [ESP + 0x334],EAX     ; 0056b094
    IMUL EAX,EDI,0x0                    ; 0056b09b
    MOV dword ptr [ESP + 0x34c],EAX     ; 0056b09e
    MOV EAX,dword ptr [ESP + 0x348]     ; 0056b0a5
        ;   Label: LAB_0056b0a5
    IMUL EAX,dword ptr [ESP + 0x354]    ; 0056b0ac
    MOV EDX,dword ptr [ESP + 0x33c]     ; 0056b0b4
    MOV ESI,dword ptr [ESP + 0x338]     ; 0056b0bb
    MOV ECX,dword ptr [ESP + 0x34c]     ; 0056b0c2
    MOV EBX,dword ptr [ESP + 0x34c]     ; 0056b0c9
    ADD ESI,ECX                         ; 0056b0d0
    MOV ECX,dword ptr [ESP + 0x340]     ; 0056b0d2
    MOV EBP,dword ptr [ESP + 0x350]     ; 0056b0d9
    ADD ECX,EBX                         ; 0056b0e0
    ADD EDX,EAX                         ; 0056b0e2
    XOR EDI,EDI                         ; 0056b0e4
    ADD EAX,EBP                         ; 0056b0e6
    MOV EBP,dword ptr [ESP + 0x354]     ; 0056b0e8
    MOV dword ptr [ESP + 0x358],EDI     ; 0056b0ef
    TEST EBP,EBP                        ; 0056b0f6
    JLE 0x0056b155                      ; 0056b0f8
        ;   XREF to: 0056b155 (CONDITIONAL_JUMP)  ; LAB_0056b155
    MOV EBP,dword ptr [ESP + 0x344]     ; 0056b0fa
    MOV EDI,dword ptr [ESP + 0x344]     ; 0056b101
    ADD EBP,ECX                         ; 0056b108
    ADD EDI,ESI                         ; 0056b10a
    MOV BL,byte ptr [EDX]               ; 0056b10c
        ;   Label: LAB_0056b10c
    MOV byte ptr [ESI],BL               ; 0056b10e
    MOV byte ptr [ESI + 0x1],BL         ; 0056b110
    MOV byte ptr [EDI],BL               ; 0056b113
    MOV byte ptr [EDI + 0x1],BL         ; 0056b115
    CMP dword ptr [ESP + 0x350],0x0     ; 0056b118
    JZ 0x0056b12f                       ; 0056b120
        ;   XREF to: 0056b12f (CONDITIONAL_JUMP)  ; LAB_0056b12f
    MOV BL,byte ptr [EAX]               ; 0056b122
    MOV byte ptr [ECX],BL               ; 0056b124
    MOV byte ptr [ECX + 0x1],BL         ; 0056b126
    MOV byte ptr [EBP],BL               ; 0056b129
    MOV byte ptr [EBP + 0x1],BL         ; 0056b12c
    MOV EBX,dword ptr [ESP + 0x358]     ; 0056b12f
        ;   Label: LAB_0056b12f
    INC EDX                             ; 0056b136
    INC EAX                             ; 0056b137
    ADD EDI,0x2                         ; 0056b138
    ADD ESI,0x2                         ; 0056b13b
    ADD EBP,0x2                         ; 0056b13e
    INC EBX                             ; 0056b141
    ADD ECX,0x2                         ; 0056b142
    MOV dword ptr [ESP + 0x358],EBX     ; 0056b145
    CMP EBX,dword ptr [ESP + 0x354]     ; 0056b14c
    JL 0x0056b10c                       ; 0056b153
        ;   XREF to: 0056b10c (CONDITIONAL_JUMP)  ; LAB_0056b10c
    MOV EAX,dword ptr [ESP + 0x334]     ; 0056b155
        ;   Label: LAB_0056b155
    MOV EDX,dword ptr [ESP + 0x34c]     ; 0056b15c
    MOV ECX,dword ptr [ESP + 0x348]     ; 0056b163
    MOV EBX,dword ptr [ESP + 0x354]     ; 0056b16a
    ADD EDX,EAX                         ; 0056b171
    INC ECX                             ; 0056b173
    MOV dword ptr [ESP + 0x34c],EDX     ; 0056b174
    MOV dword ptr [ESP + 0x348],ECX     ; 0056b17b
    CMP ECX,EBX                         ; 0056b182
    JL 0x0056b0a5                       ; 0056b184
        ;   XREF to: 0056b0a5 (CONDITIONAL_JUMP)  ; LAB_0056b0a5
    MOV ESI,dword ptr [ESP + 0x33c]     ; 0056b18a
        ;   Label: LAB_0056b18a
    PUSH ESI                            ; 0056b191
    CALL crt_unknown.c_FUN_005a3770     ; 0056b192
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3770()
    ADD ESP,0x4                         ; 0056b197
    MOV EDI,dword ptr [ESP + 0x350]     ; 0056b19a
    TEST EDI,EDI                        ; 0056b1a1
    JZ 0x0056b1ae                       ; 0056b1a3
        ;   XREF to: 0056b1ae (CONDITIONAL_JUMP)  ; LAB_0056b1ae
    PUSH EDI                            ; 0056b1a5
    CALL crt_unknown.c_FUN_005a3770     ; 0056b1a6
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3770()
    ADD ESP,0x4                         ; 0056b1ab
    MOV EAX,dword ptr [ESP + 0x340]     ; 0056b1ae
        ;   Label: LAB_0056b1ae
    PUSH EAX                            ; 0056b1b5
    MOV EDX,dword ptr [ESP + 0x334]     ; 0056b1b6
    PUSH EDX                            ; 0056b1bd
    MOV ECX,dword ptr [ESP + 0x340]     ; 0056b1be
    MOV EAX,dword ptr [ESP + 0x35c]     ; 0056b1c5
    PUSH ECX                            ; 0056b1cc
    ADD EAX,EAX                         ; 0056b1cd
    PUSH EAX                            ; 0056b1cf
    MOV EBX,dword ptr [ESP + 0x37c]     ; 0056b1d0
    PUSH EBX                            ; 0056b1d7
    CALL engine_texture.cpp_FUN_0056aab0 ; 0056b1d8
        ;   XREF to: 0056aab0 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_0056aab0()
    ADD ESP,0x14                        ; 0056b1dd
    PUSH 0x0                            ; 0056b1e0
    LEA EAX,[ESP + 0x308]               ; 0056b1e2
    PUSH EAX                            ; 0056b1e9
    CALL unkafter_turret.cpp_CInStreamFile_dtor_FUN_00573a40 ; 0056b1ea
        ;   XREF to: 00573a40 (UNCONDITIONAL_CALL)  ; CInStreamFile * unkafter_turret.cpp_CInStreamFile_dtor_FUN_00573a40(CInStreamFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0056b1ef
    POP EBX                             ; 0056b1f2
    ADD ESP,0x358                       ; 0056b1f3
    POP EBP                             ; 0056b1f9
    POP EDI                             ; 0056b1fa
    POP ESI                             ; 0056b1fb
    RET                                 ; 0056b1fc
    MOV EAX,dword ptr [ESP + 0x368]     ; 0056b1fd
        ;   Label: LAB_0056b1fd
    PUSH EAX                            ; 0056b204
    CALL engine_texture.cpp_FUN_0056aa10 ; 0056b205
        ;   XREF to: 0056aa10 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_0056aa10()
    ADD ESP,0x4                         ; 0056b20a
    ADD ESP,0x358                       ; 0056b20d
    POP EBP                             ; 0056b213
    POP EDI                             ; 0056b214
    POP ESI                             ; 0056b215
    RET                                 ; 0056b216
    MOV EDI,dword ptr [ESP + 0x368]     ; 0056b217
        ;   Label: LAB_0056b217
    ADD EDI,0x8                         ; 0056b21e
    MOV EBP,dword ptr [ESP + 0x368]     ; 0056b221
    PUSH EDI                            ; 0056b228
    MOV AL,byte ptr [ESI]               ; 0056b229
        ;   Label: LAB_0056b229
    MOV byte ptr [EDI],AL               ; 0056b22b
    CMP AL,0x0                          ; 0056b22d
    JZ 0x0056b241                       ; 0056b22f
        ;   XREF to: 0056b241 (CONDITIONAL_JUMP)  ; LAB_0056b241
    MOV AL,byte ptr [ESI + 0x1]         ; 0056b231
    ADD ESI,0x2                         ; 0056b234
    MOV byte ptr [EDI + 0x1],AL         ; 0056b237
    ADD EDI,0x2                         ; 0056b23a
    CMP AL,0x0                          ; 0056b23d
    JNZ 0x0056b229                      ; 0056b23f
        ;   XREF to: 0056b229 (CONDITIONAL_JUMP)  ; LAB_0056b229
    POP EDI                             ; 0056b241
        ;   Label: LAB_0056b241
    PUSH EBP                            ; 0056b242
    CALL engine_texture.cpp_FUN_0056aa10 ; 0056b243
        ;   XREF to: 0056aa10 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_0056aa10()
    ADD ESP,0x4                         ; 0056b248
    ADD ESP,0x358                       ; 0056b24b
    POP EBP                             ; 0056b251
    POP EDI                             ; 0056b252
    POP ESI                             ; 0056b253
    RET                                 ; 0056b254
    CMP EAX,0x4000                      ; 0056b255
        ;   Label: LAB_0056b255
    JNZ 0x0056b26c                      ; 0056b25a
        ;   XREF to: 0056b26c (CONDITIONAL_JUMP)  ; LAB_0056b26c
    MOV dword ptr [ESP + 0x350],0x80    ; 0056b25c
    JMP 0x0056adbf                      ; 0056b267
        ;   XREF to: 0056adbf (UNCONDITIONAL_JUMP)  ; LAB_0056adbf
    CMP EAX,0x10000                     ; 0056b26c
        ;   Label: LAB_0056b26c
    JNZ 0x0056b283                      ; 0056b271
        ;   XREF to: 0056b283 (CONDITIONAL_JUMP)  ; LAB_0056b283
    MOV dword ptr [ESP + 0x350],0x100   ; 0056b273
    JMP 0x0056adbf                      ; 0056b27e
        ;   XREF to: 0056adbf (UNCONDITIONAL_JUMP)  ; LAB_0056adbf
    PUSH ESI                            ; 0056b283
        ;   Label: LAB_0056b283
    MOV EBP,0x5d61fb                    ; 0056b284
    MOV EAX,0x572                       ; 0056b289
    PUSH 0x5d6211                       ; 0056b28e
    MOV dword ptr [0x01d71de0],EBP      ; 0056b293 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 0056b299 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0056b29e
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 0056b2a3
    JMP 0x0056adbf                      ; 0056b2a6
        ;   XREF to: 0056adbf (UNCONDITIONAL_JUMP)  ; LAB_0056adbf
    MOV EAX,dword ptr [ESP + 0x36c]     ; 0056b2ab
        ;   Label: LAB_0056b2ab
    ADD EAX,0x8                         ; 0056b2b2
    PUSH EAX                            ; 0056b2b5
    MOV EBX,0x5d62cc                    ; 0056b2b6
    MOV EDI,0x580                       ; 0056b2bb
    PUSH 0x5d62e2                       ; 0056b2c0
    MOV dword ptr [0x01d71de0],EBX      ; 0056b2c5 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 0056b2cb | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0056b2d1
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 0056b2d6
    JMP 0x0056ae6b                      ; 0056b2d9
        ;   XREF to: 0056ae6b (UNCONDITIONAL_JUMP)  ; LAB_0056ae6b
    LEA EAX,[ESP + 0x104]               ; 0056b2de
        ;   Label: LAB_0056b2de
    PUSH EAX                            ; 0056b2e5
    MOV EDX,0x5d6347                    ; 0056b2e6
    MOV ECX,0x58d                       ; 0056b2eb
    PUSH 0x5d635d                       ; 0056b2f0
    MOV dword ptr [0x01d71de0],EDX      ; 0056b2f5 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 0056b2fb | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0056b301
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 0056b306
    JMP 0x0056af15                      ; 0056b309
        ;   XREF to: 0056af15 (UNCONDITIONAL_JUMP)  ; LAB_0056af15

