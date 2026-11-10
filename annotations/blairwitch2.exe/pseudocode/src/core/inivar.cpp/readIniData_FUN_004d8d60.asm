; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_inivar_cpp_readIniData_FUN_004d8d60(void)
;
; Local Variables:
; undefined        Stack[-0x20c]:1  local_20c
;
; XREF[1]:
;   core_main.c_initializeGameSystems_FUN_004e46c0 at 004e4723
;
; Referenced Globals:
;   TerminatedCString s_core_inivar_cpp_005dada5
;   TerminatedCString s_Please_copy_Nocturne_to_005dadb8
;   TerminatedCString s_gamePIXX_005dade0
;   TerminatedCString s_gamePIXY_005dade9
;   TerminatedCString s_gameBPP_005dadf2
;   TerminatedCString s_useDirect3D_005dadfa
;   TerminatedCString s_useAGPFlag_005dae06
;   TerminatedCString s_rendererDLLPath_005dae11
;   TerminatedCString s_gamma_005dae21
;   TerminatedCString s_heroNumber_005dae27
;   TerminatedCString s_haloMode_005dae32
;   TerminatedCString s_firstTimeFlag_005dae3b
;   TerminatedCString s_subtitleMode_005dae49
;   TerminatedCString s_bloodFlag_005dae56
;   TerminatedCString s_nudityFlag_005dae60
;   ... and 78 more
;
; Called Functions:
;   core_game.cpp_CGame_restoreDefaultControls_FUN_004b6e10
;   core_main.c_FUN_004e4500
;   crt_io.c__chmod_FUN_005b99e0
;   engine_ini.cpp_CIniFile_dtor_FUN_004d8940
;   engine_ini.cpp_CIniFile_getString_FUN_004d8a10
;   engine_ini.cpp_CIniFile_readIniHeader_FUN_004d89d0
;   engine_ini.cpp_FUN_004d8910
;   engine_ini.cpp_FUN_004d8b20
;   sound_sndmain.cpp_readIni_FUN_00553680
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 004d8d60
        ;   Label: core_inivar.cpp_readIniData_FUN_004d8d60
    PUSH EBP                            ; 004d8d61
    SUB ESP,0x204                       ; 004d8d62
    PUSH ESI                            ; 004d8d68
    PUSH 0x180                          ; 004d8d69
    PUSH 0x617b50                       ; 004d8d6e | = ".\\system\\nocturne.ini"
    CALL crt_io.c__chmod_FUN_005b99e0   ; 004d8d73
        ;   XREF to: 005b99e0 (UNCONDITIONAL_CALL)  ; int crt_io.c__chmod_FUN_005b99e0(char * path, int mode)
    ADD ESP,0x8                         ; 004d8d78
    TEST EAX,EAX                        ; 004d8d7b
    JNZ 0x004d94a7                      ; 004d8d7d
        ;   XREF to: 004d94a7 (CONDITIONAL_JUMP)  ; LAB_004d94a7
    PUSH EBX                            ; 004d8d83
        ;   Label: LAB_004d8d83
    PUSH 0x0                            ; 004d8d84
    PUSH 0x617b50                       ; 004d8d86 | = ".\\system\\nocturne.ini"
    LEA EAX,[ESP + 0x10]                ; 004d8d8b
    PUSH EAX                            ; 004d8d8f
    CALL engine_ini.cpp_FUN_004d8910    ; 004d8d90
        ;   XREF to: 004d8910 (UNCONDITIONAL_CALL)  ; CIniFile * engine_ini.cpp_FUN_004d8910(CIniFile * this_ptr, char * filename, char * section)
    ADD ESP,0xc                         ; 004d8d95
    PUSH 0x617b78                       ; 004d8d98 | = "Graphics"
    LEA EAX,[ESP + 0xc]                 ; 004d8d9d
    PUSH EAX                            ; 004d8da1
    CALL engine_ini.cpp_CIniFile_readIniHeader_FUN_004d89d0 ; 004d8da2
        ;   XREF to: 004d89d0 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_readIniHeader_FUN_004d89d0(CIniFile * this_ptr, char * section)
    ADD ESP,0x8                         ; 004d8da7
    MOV EBX,dword ptr [0x00616494]      ; 004d8daa | g_CGamePtr
    PUSH EBX                            ; 004d8db0
    PUSH 0x5dade0                       ; 004d8db1 | = "gamePIXX"
    LEA EAX,[ESP + 0x10]                ; 004d8db6
    PUSH EAX                            ; 004d8dba
    CALL engine_ini.cpp_FUN_004d8b20    ; 004d8dbb
        ;   XREF to: 004d8b20 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8b20()
    MOV EAX,[0x00616494]                ; 004d8dc0 | g_CGamePtr
    ADD ESP,0xc                         ; 004d8dc5
    ADD EAX,0x4                         ; 004d8dc8
    PUSH EAX                            ; 004d8dcb | g_CGameInstance.game_pixy
    PUSH 0x5dade9                       ; 004d8dcc | = "gamePIXY"
    LEA EAX,[ESP + 0x10]                ; 004d8dd1
    PUSH EAX                            ; 004d8dd5
    CALL engine_ini.cpp_FUN_004d8b20    ; 004d8dd6
        ;   XREF to: 004d8b20 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8b20()
    MOV EAX,[0x00616494]                ; 004d8ddb | g_CGamePtr
    ADD ESP,0xc                         ; 004d8de0
    ADD EAX,0x8                         ; 004d8de3
    PUSH EAX                            ; 004d8de6
    PUSH 0x5dadf2                       ; 004d8de7 | = "gameBPP"
    LEA EAX,[ESP + 0x10]                ; 004d8dec
    PUSH EAX                            ; 004d8df0
    CALL engine_ini.cpp_FUN_004d8b20    ; 004d8df1
        ;   XREF to: 004d8b20 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8b20()
    ADD ESP,0xc                         ; 004d8df6
    PUSH 0x264bba0                      ; 004d8df9 | DAT_0264bba0
    PUSH 0x5dadfa                       ; 004d8dfe | = "useDirect3D"
    LEA EAX,[ESP + 0x10]                ; 004d8e03
    PUSH EAX                            ; 004d8e07
    CALL engine_ini.cpp_FUN_004d8b20    ; 004d8e08
        ;   XREF to: 004d8b20 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8b20()
    ADD ESP,0xc                         ; 004d8e0d
    PUSH 0x264bbac                      ; 004d8e10 | DAT_0264bbac
    PUSH 0x5dae06                       ; 004d8e15 | = "useAGPFlag"
    LEA EAX,[ESP + 0x10]                ; 004d8e1a
    PUSH EAX                            ; 004d8e1e
    CALL engine_ini.cpp_FUN_004d8b20    ; 004d8e1f
        ;   XREF to: 004d8b20 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8b20()
    ADD ESP,0xc                         ; 004d8e24
    PUSH 0xfa                           ; 004d8e27
    PUSH 0x61e180                       ; 004d8e2c | DAT_0061e180
    PUSH 0x5dae11                       ; 004d8e31 | = "rendererDLLPath"
    LEA EAX,[ESP + 0x14]                ; 004d8e36
    PUSH EAX                            ; 004d8e3a
    CALL engine_ini.cpp_CIniFile_getString_FUN_004d8a10 ; 004d8e3b
        ;   XREF to: 004d8a10 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getString_FUN_004d8a10(CIniFile * this_ptr, char * key, char * output_buffer, int buffer_size)
    MOV EAX,[0x00616494]                ; 004d8e40 | g_CGamePtr
    ADD ESP,0x10                        ; 004d8e45
    ADD EAX,0x240                       ; 004d8e48
    PUSH EAX                            ; 004d8e4d
    PUSH 0x5dae21                       ; 004d8e4e | = "gamma"
    LEA EAX,[ESP + 0x10]                ; 004d8e53
    PUSH EAX                            ; 004d8e57
    CALL engine_ini.cpp_FUN_004d8b20    ; 004d8e58
        ;   XREF to: 004d8b20 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8b20()
    MOV EAX,[0x00616494]                ; 004d8e5d | g_CGamePtr
    ADD ESP,0xc                         ; 004d8e62
    ADD EAX,0xd4                        ; 004d8e65
    PUSH EAX                            ; 004d8e6a
    PUSH 0x5dae27                       ; 004d8e6b | = "heroNumber"
    LEA EAX,[ESP + 0x10]                ; 004d8e70
    PUSH EAX                            ; 004d8e74
    CALL engine_ini.cpp_FUN_004d8b20    ; 004d8e75
        ;   XREF to: 004d8b20 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8b20()
    ADD ESP,0xc                         ; 004d8e7a
    POP EBX                             ; 004d8e7d
    MOV EAX,[0x00616494]                ; 004d8e7e | g_CGamePtr
    ADD EAX,0xc                         ; 004d8e83
    PUSH EAX                            ; 004d8e86 | g_CGameInstance.field3_0xc
    PUSH 0x5dae32                       ; 004d8e87 | = "haloMode"
    LEA EAX,[ESP + 0xc]                 ; 004d8e8c
    PUSH EAX                            ; 004d8e90
    CALL engine_ini.cpp_FUN_004d8b20    ; 004d8e91
        ;   XREF to: 004d8b20 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8b20()
    ADD ESP,0xc                         ; 004d8e96
    PUSH 0x1cee1a8                      ; 004d8e99 | DAT_01cee1a8
    PUSH 0x5dae3b                       ; 004d8e9e | = "firstTimeFlag"
    LEA EAX,[ESP + 0xc]                 ; 004d8ea3
    PUSH EAX                            ; 004d8ea7
    CALL engine_ini.cpp_FUN_004d8b20    ; 004d8ea8
        ;   XREF to: 004d8b20 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8b20()
    MOV EAX,[0x00616494]                ; 004d8ead | g_CGamePtr
    ADD ESP,0xc                         ; 004d8eb2
    ADD EAX,0x10                        ; 004d8eb5
    PUSH EAX                            ; 004d8eb8 | g_CGameInstance.field7_0x10
    PUSH 0x5dae49                       ; 004d8eb9 | = "subtitleMode"
    LEA EAX,[ESP + 0xc]                 ; 004d8ebe
    PUSH EAX                            ; 004d8ec2
    CALL engine_ini.cpp_FUN_004d8b20    ; 004d8ec3
        ;   XREF to: 004d8b20 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8b20()
    MOV EAX,[0x00616494]                ; 004d8ec8 | g_CGamePtr
    ADD ESP,0xc                         ; 004d8ecd
    ADD EAX,0x14                        ; 004d8ed0
    PUSH EAX                            ; 004d8ed3
    PUSH 0x5dae56                       ; 004d8ed4 | = "bloodFlag"
    LEA EAX,[ESP + 0xc]                 ; 004d8ed9
    PUSH EAX                            ; 004d8edd
    CALL engine_ini.cpp_FUN_004d8b20    ; 004d8ede
        ;   XREF to: 004d8b20 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8b20()
    MOV EAX,[0x00616494]                ; 004d8ee3 | g_CGamePtr
    ADD ESP,0xc                         ; 004d8ee8
    ADD EAX,0x18                        ; 004d8eeb
    PUSH EAX                            ; 004d8eee
    PUSH 0x5dae60                       ; 004d8eef | = "nudityFlag"
    LEA EAX,[ESP + 0xc]                 ; 004d8ef4
    PUSH EAX                            ; 004d8ef8
    CALL engine_ini.cpp_FUN_004d8b20    ; 004d8ef9
        ;   XREF to: 004d8b20 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8b20()
    MOV EAX,[0x00616494]                ; 004d8efe | g_CGamePtr
    ADD ESP,0xc                         ; 004d8f03
    ADD EAX,0x1c                        ; 004d8f06
    PUSH EAX                            ; 004d8f09
    PUSH 0x5dae6b                       ; 004d8f0a | = "foulLanguageFlag"
    LEA EAX,[ESP + 0xc]                 ; 004d8f0f
    PUSH EAX                            ; 004d8f13
    CALL engine_ini.cpp_FUN_004d8b20    ; 004d8f14
        ;   XREF to: 004d8b20 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8b20()
    MOV EAX,[0x00616494]                ; 004d8f19 | g_CGamePtr
    ADD ESP,0xc                         ; 004d8f1e
    ADD EAX,0x24                        ; 004d8f21
    PUSH EAX                            ; 004d8f24
    PUSH 0x5dae7c                       ; 004d8f25 | = "shadowFlag"
    LEA EAX,[ESP + 0xc]                 ; 004d8f2a
    PUSH EAX                            ; 004d8f2e
    CALL engine_ini.cpp_FUN_004d8b20    ; 004d8f2f
        ;   XREF to: 004d8b20 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8b20()
    MOV EAX,[0x00616494]                ; 004d8f34 | g_CGamePtr
    ADD ESP,0xc                         ; 004d8f39
    ADD EAX,0x20                        ; 004d8f3c
    PUSH EAX                            ; 004d8f3f
    PUSH 0x5dae87                       ; 004d8f40 | = "quimbyFlag"
    LEA EAX,[ESP + 0xc]                 ; 004d8f45
    PUSH EAX                            ; 004d8f49
    CALL engine_ini.cpp_FUN_004d8b20    ; 004d8f4a
        ;   XREF to: 004d8b20 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8b20()
    ADD ESP,0xc                         ; 004d8f4f
    PUSH 0x61ec60                       ; 004d8f52 | DAT_0061ec60
    PUSH 0x5dae92                       ; 004d8f57 | = "particleDensity"
    LEA EAX,[ESP + 0xc]                 ; 004d8f5c
    PUSH EAX                            ; 004d8f60
    CALL engine_ini.cpp_FUN_004d8b20    ; 004d8f61
        ;   XREF to: 004d8b20 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8b20()
    MOV EAX,[0x00616494]                ; 004d8f66 | g_CGamePtr
    MOV ESI,dword ptr [EAX + 0x20]      ; 004d8f6b | g_CGameInstance.field23_0x20
    ADD ESP,0xc                         ; 004d8f6e
    TEST ESI,ESI                        ; 004d8f71
    JZ 0x004d8f8a                       ; 004d8f73
        ;   XREF to: 004d8f8a (CONDITIONAL_JUMP)  ; LAB_004d8f8a
    MOV dword ptr [EAX + 0x18],0x0      ; 004d8f75 | g_CGameInstance.field15_0x18
    MOV dword ptr [EAX + 0x1c],0x0      ; 004d8f7c | g_CGameInstance.field19_0x1c
    MOV dword ptr [EAX + 0x14],0x0      ; 004d8f83 | g_CGameInstance.field11_0x14
    PUSH 0x1d06a74                      ; 004d8f8a | DAT_01d06a74
        ;   Label: LAB_004d8f8a
    PUSH 0x5daea2                       ; 004d8f8f | = "currentBoard"
    LEA EAX,[ESP + 0xc]                 ; 004d8f94
    XOR EDI,EDI                         ; 004d8f98
    PUSH EAX                            ; 004d8f9a
    MOV dword ptr [0x01d06a74],EDI      ; 004d8f9b | DAT_01d06a74
    CALL engine_ini.cpp_FUN_004d8b20    ; 004d8fa1
        ;   XREF to: 004d8b20 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8b20()
    MOV EAX,[0x00616494]                ; 004d8fa6 | g_CGamePtr
    ADD ESP,0xc                         ; 004d8fab
    ADD EAX,0xe4                        ; 004d8fae
    PUSH EAX                            ; 004d8fb3
    PUSH 0x5daeaf                       ; 004d8fb4 | = "puzzleDifficultyMode"
    LEA EAX,[ESP + 0xc]                 ; 004d8fb9
    PUSH EAX                            ; 004d8fbd
    CALL engine_ini.cpp_FUN_004d8b20    ; 004d8fbe
        ;   XREF to: 004d8b20 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8b20()
    MOV EAX,[0x00616494]                ; 004d8fc3 | g_CGamePtr
    ADD ESP,0xc                         ; 004d8fc8
    ADD EAX,0xe8                        ; 004d8fcb
    PUSH EAX                            ; 004d8fd0
    PUSH 0x5daec4                       ; 004d8fd1 | = "combatDifficultyMode"
    LEA EAX,[ESP + 0xc]                 ; 004d8fd6
    PUSH EAX                            ; 004d8fda
    CALL engine_ini.cpp_FUN_004d8b20    ; 004d8fdb
        ;   XREF to: 004d8b20 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8b20()
    ADD ESP,0xc                         ; 004d8fe0
    PUSH 0x617b70                       ; 004d8fe3 | = "Sound"
    LEA EAX,[ESP + 0x8]                 ; 004d8fe8
    PUSH EAX                            ; 004d8fec
    CALL engine_ini.cpp_CIniFile_readIniHeader_FUN_004d89d0 ; 004d8fed
        ;   XREF to: 004d89d0 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_readIniHeader_FUN_004d89d0(CIniFile * this_ptr, char * section)
    ADD ESP,0x8                         ; 004d8ff2
    LEA EAX,[ESP + 0x4]                 ; 004d8ff5
    PUSH EAX                            ; 004d8ff9
    CALL sound_sndmain.cpp_readIni_FUN_00553680 ; 004d8ffa
        ;   XREF to: 00553680 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_readIni_FUN_00553680(CIniFile * ini_file)
    ADD ESP,0x4                         ; 004d8fff
    PUSH 0x617b88                       ; 004d9002 | = "Control"
    LEA EAX,[ESP + 0x8]                 ; 004d9007
    PUSH EAX                            ; 004d900b
    CALL engine_ini.cpp_CIniFile_readIniHeader_FUN_004d89d0 ; 004d900c
        ;   XREF to: 004d89d0 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_readIniHeader_FUN_004d89d0(CIniFile * this_ptr, char * section)
    MOV EAX,[0x00616494]                ; 004d9011 | g_CGamePtr
    ADD ESP,0x8                         ; 004d9016
    ADD EAX,0xd0                        ; 004d9019
    PUSH EAX                            ; 004d901e | g_CGameInstance.field160_0xd0
    PUSH 0x5daed9                       ; 004d901f | = "gameControl"
    LEA EAX,[ESP + 0xc]                 ; 004d9024
    PUSH EAX                            ; 004d9028
    CALL engine_ini.cpp_FUN_004d8b20    ; 004d9029
        ;   XREF to: 004d8b20 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8b20()
    ADD ESP,0xc                         ; 004d902e
    MOV EBP,dword ptr [0x00616494]      ; 004d9031 | g_CGamePtr
    PUSH EBP                            ; 004d9037
    CALL core_game.cpp_CGame_restoreDefaultControls_FUN_004b6e10 ; 004d9038
        ;   XREF to: 004b6e10 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_restoreDefaultControls_FUN_004b6e10(CGame * this_ptr)
    MOV EAX,[0x00616494]                ; 004d903d | g_CGamePtr
    ADD ESP,0x4                         ; 004d9042
    ADD EAX,0x28                        ; 004d9045
    PUSH EAX                            ; 004d9048
    PUSH 0x5daee5                       ; 004d9049 | = "keyWalk"
    LEA EAX,[ESP + 0xc]                 ; 004d904e
    PUSH EAX                            ; 004d9052
    CALL engine_ini.cpp_FUN_004d8b20    ; 004d9053
        ;   XREF to: 004d8b20 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8b20()
    MOV EAX,[0x00616494]                ; 004d9058 | g_CGamePtr
    ADD ESP,0xc                         ; 004d905d
    ADD EAX,0x2c                        ; 004d9060
    PUSH EAX                            ; 004d9063
    PUSH 0x5daeed                       ; 004d9064 | = "keyBackup"
    LEA EAX,[ESP + 0xc]                 ; 004d9069
    PUSH EAX                            ; 004d906d
    CALL engine_ini.cpp_FUN_004d8b20    ; 004d906e
        ;   XREF to: 004d8b20 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8b20()
    MOV EAX,[0x00616494]                ; 004d9073 | g_CGamePtr
    ADD ESP,0xc                         ; 004d9078
    ADD EAX,0x30                        ; 004d907b
    PUSH EAX                            ; 004d907e
    PUSH 0x5daef7                       ; 004d907f | = "keyRun"
    LEA EAX,[ESP + 0xc]                 ; 004d9084
    PUSH EAX                            ; 004d9088
    CALL engine_ini.cpp_FUN_004d8b20    ; 004d9089
        ;   XREF to: 004d8b20 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8b20()
    ADD ESP,0xc                         ; 004d908e
    POP ESI                             ; 004d9091
    MOV EAX,[0x00616494]                ; 004d9092 | g_CGamePtr
    ADD EAX,0x34                        ; 004d9097
    PUSH EAX                            ; 004d909a
    PUSH 0x5daefe                       ; 004d909b | = "keyStrafe"
    LEA EAX,[ESP + 0x8]                 ; 004d90a0
    PUSH EAX                            ; 004d90a4
    CALL engine_ini.cpp_FUN_004d8b20    ; 004d90a5
        ;   XREF to: 004d8b20 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8b20()
    MOV EAX,[0x00616494]                ; 004d90aa | g_CGamePtr
    ADD ESP,0xc                         ; 004d90af
    ADD EAX,0x38                        ; 004d90b2
    PUSH EAX                            ; 004d90b5
    PUSH 0x5daf08                       ; 004d90b6 | = "keyStrafeLeft"
    LEA EAX,[ESP + 0x8]                 ; 004d90bb
    PUSH EAX                            ; 004d90bf
    CALL engine_ini.cpp_FUN_004d8b20    ; 004d90c0
        ;   XREF to: 004d8b20 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8b20()
    MOV EAX,[0x00616494]                ; 004d90c5 | g_CGamePtr
    ADD ESP,0xc                         ; 004d90ca
    ADD EAX,0x3c                        ; 004d90cd
    PUSH EAX                            ; 004d90d0
    PUSH 0x5daf16                       ; 004d90d1 | = "keyStrafeRight"
    LEA EAX,[ESP + 0x8]                 ; 004d90d6
    PUSH EAX                            ; 004d90da
    CALL engine_ini.cpp_FUN_004d8b20    ; 004d90db
        ;   XREF to: 004d8b20 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8b20()
    MOV EAX,[0x00616494]                ; 004d90e0 | g_CGamePtr
    ADD ESP,0xc                         ; 004d90e5
    ADD EAX,0x40                        ; 004d90e8
    PUSH EAX                            ; 004d90eb
    PUSH 0x5daf25                       ; 004d90ec | = "keyRight"
    LEA EAX,[ESP + 0x8]                 ; 004d90f1
    PUSH EAX                            ; 004d90f5
    CALL engine_ini.cpp_FUN_004d8b20    ; 004d90f6
        ;   XREF to: 004d8b20 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8b20()
    MOV EAX,[0x00616494]                ; 004d90fb | g_CGamePtr
    ADD ESP,0xc                         ; 004d9100
    ADD EAX,0x44                        ; 004d9103
    PUSH EAX                            ; 004d9106
    PUSH 0x5daf2e                       ; 004d9107 | = "keyLeft"
    LEA EAX,[ESP + 0x8]                 ; 004d910c
    PUSH EAX                            ; 004d9110
    CALL engine_ini.cpp_FUN_004d8b20    ; 004d9111
        ;   XREF to: 004d8b20 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8b20()
    MOV EAX,[0x00616494]                ; 004d9116 | g_CGamePtr
    ADD ESP,0xc                         ; 004d911b
    ADD EAX,0x48                        ; 004d911e
    PUSH EAX                            ; 004d9121
    PUSH 0x5daf36                       ; 004d9122 | = "keyFire"
    LEA EAX,[ESP + 0x8]                 ; 004d9127
    PUSH EAX                            ; 004d912b
    CALL engine_ini.cpp_FUN_004d8b20    ; 004d912c
        ;   XREF to: 004d8b20 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8b20()
    MOV EAX,[0x00616494]                ; 004d9131 | g_CGamePtr
    ADD ESP,0xc                         ; 004d9136
    ADD EAX,0x4c                        ; 004d9139
    PUSH EAX                            ; 004d913c
    PUSH 0x5daf3e                       ; 004d913d | = "keyUseItem"
    LEA EAX,[ESP + 0x8]                 ; 004d9142
    PUSH EAX                            ; 004d9146
    CALL engine_ini.cpp_FUN_004d8b20    ; 004d9147
        ;   XREF to: 004d8b20 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8b20()
    MOV EAX,[0x00616494]                ; 004d914c | g_CGamePtr
    ADD ESP,0xc                         ; 004d9151
    ADD EAX,0x50                        ; 004d9154
    PUSH EAX                            ; 004d9157
    PUSH 0x5daf49                       ; 004d9158 | = "keyLight"
    LEA EAX,[ESP + 0x8]                 ; 004d915d
    PUSH EAX                            ; 004d9161
    CALL engine_ini.cpp_FUN_004d8b20    ; 004d9162
        ;   XREF to: 004d8b20 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8b20()
    MOV EAX,[0x00616494]                ; 004d9167 | g_CGamePtr
    ADD ESP,0xc                         ; 004d916c
    ADD EAX,0x68                        ; 004d916f
    PUSH EAX                            ; 004d9172
    PUSH 0x5daf52                       ; 004d9173 | = "keyDraw"
    LEA EAX,[ESP + 0x8]                 ; 004d9178
    PUSH EAX                            ; 004d917c
    CALL engine_ini.cpp_FUN_004d8b20    ; 004d917d
        ;   XREF to: 004d8b20 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8b20()
    ADD ESP,0xc                         ; 004d9182
    MOV EAX,[0x00616494]                ; 004d9185 | g_CGamePtr
    ADD EAX,0x74                        ; 004d918a
    PUSH EAX                            ; 004d918d
    PUSH 0x5daf5a                       ; 004d918e | = "keyPointUp"
    LEA EAX,[ESP + 0x8]                 ; 004d9193
    PUSH EAX                            ; 004d9197
    CALL engine_ini.cpp_FUN_004d8b20    ; 004d9198
        ;   XREF to: 004d8b20 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8b20()
    MOV EAX,[0x00616494]                ; 004d919d | g_CGamePtr
    ADD ESP,0xc                         ; 004d91a2
    ADD EAX,0x78                        ; 004d91a5
    PUSH EAX                            ; 004d91a8
    PUSH 0x5daf65                       ; 004d91a9 | = "keyPointDown"
    LEA EAX,[ESP + 0x8]                 ; 004d91ae
    PUSH EAX                            ; 004d91b2
    CALL engine_ini.cpp_FUN_004d8b20    ; 004d91b3
        ;   XREF to: 004d8b20 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8b20()
    MOV EAX,[0x00616494]                ; 004d91b8 | g_CGamePtr
    ADD ESP,0xc                         ; 004d91bd
    ADD EAX,0x7c                        ; 004d91c0
    PUSH EAX                            ; 004d91c3
    PUSH 0x5daf72                       ; 004d91c4 | = "keyWeapon1"
    LEA EAX,[ESP + 0x8]                 ; 004d91c9
    PUSH EAX                            ; 004d91cd
    CALL engine_ini.cpp_FUN_004d8b20    ; 004d91ce
        ;   XREF to: 004d8b20 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8b20()
    MOV EAX,[0x00616494]                ; 004d91d3 | g_CGamePtr
    ADD ESP,0xc                         ; 004d91d8
    ADD EAX,0x80                        ; 004d91db
    PUSH EAX                            ; 004d91e0
    PUSH 0x5daf7d                       ; 004d91e1 | = "keyWeapon2"
    LEA EAX,[ESP + 0x8]                 ; 004d91e6
    PUSH EAX                            ; 004d91ea
    CALL engine_ini.cpp_FUN_004d8b20    ; 004d91eb
        ;   XREF to: 004d8b20 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8b20()
    MOV EAX,[0x00616494]                ; 004d91f0 | g_CGamePtr
    ADD ESP,0xc                         ; 004d91f5
    ADD EAX,0x84                        ; 004d91f8
    PUSH EAX                            ; 004d91fd
    PUSH 0x5daf88                       ; 004d91fe | = "keyWeapon3"
    LEA EAX,[ESP + 0x8]                 ; 004d9203
    PUSH EAX                            ; 004d9207
    CALL engine_ini.cpp_FUN_004d8b20    ; 004d9208
        ;   XREF to: 004d8b20 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8b20()
    MOV EAX,[0x00616494]                ; 004d920d | g_CGamePtr
    ADD ESP,0xc                         ; 004d9212
    ADD EAX,0xaf0                       ; 004d9215
    PUSH EAX                            ; 004d921a
    PUSH 0x5daf93                       ; 004d921b | = "keyDrop"
    LEA EAX,[ESP + 0x8]                 ; 004d9220
    PUSH EAX                            ; 004d9224
    CALL engine_ini.cpp_FUN_004d8b20    ; 004d9225
        ;   XREF to: 004d8b20 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8b20()
    MOV EAX,[0x00616494]                ; 004d922a | g_CGamePtr
    ADD ESP,0xc                         ; 004d922f
    ADD EAX,0x90                        ; 004d9232
    PUSH EAX                            ; 004d9237
    PUSH 0x5daf9b                       ; 004d9238 | = "keyNextWeapon"
    LEA EAX,[ESP + 0x8]                 ; 004d923d
    PUSH EAX                            ; 004d9241
    CALL engine_ini.cpp_FUN_004d8b20    ; 004d9242
        ;   XREF to: 004d8b20 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8b20()
    MOV EAX,[0x00616494]                ; 004d9247 | g_CGamePtr
    ADD ESP,0xc                         ; 004d924c
    ADD EAX,0x94                        ; 004d924f
    PUSH EAX                            ; 004d9254
    PUSH 0x5dafa9                       ; 004d9255 | = "keyPrevWeapon"
    LEA EAX,[ESP + 0x8]                 ; 004d925a
    PUSH EAX                            ; 004d925e
    CALL engine_ini.cpp_FUN_004d8b20    ; 004d925f
        ;   XREF to: 004d8b20 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8b20()
    MOV EAX,[0x00616494]                ; 004d9264 | g_CGamePtr
    ADD ESP,0xc                         ; 004d9269
    ADD EAX,0x98                        ; 004d926c
    PUSH EAX                            ; 004d9271
    PUSH 0x5dafb7                       ; 004d9272 | = "keyNextItem"
    LEA EAX,[ESP + 0x8]                 ; 004d9277
    PUSH EAX                            ; 004d927b
    CALL engine_ini.cpp_FUN_004d8b20    ; 004d927c
        ;   XREF to: 004d8b20 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8b20()
    ADD ESP,0xc                         ; 004d9281
    MOV EAX,[0x00616494]                ; 004d9284 | g_CGamePtr
    ADD EAX,0x9c                        ; 004d9289
    PUSH EAX                            ; 004d928e
    PUSH 0x5dafc3                       ; 004d928f | = "keyPrevItem"
    LEA EAX,[ESP + 0x8]                 ; 004d9294
    PUSH EAX                            ; 004d9298
    CALL engine_ini.cpp_FUN_004d8b20    ; 004d9299
        ;   XREF to: 004d8b20 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8b20()
    MOV EAX,[0x00616494]                ; 004d929e | g_CGamePtr
    ADD ESP,0xc                         ; 004d92a3
    ADD EAX,0xa0                        ; 004d92a6
    PUSH EAX                            ; 004d92ab
    PUSH 0x5dafcf                       ; 004d92ac | = "keyItemDesc"
    LEA EAX,[ESP + 0x8]                 ; 004d92b1
    PUSH EAX                            ; 004d92b5
    CALL engine_ini.cpp_FUN_004d8b20    ; 004d92b6
        ;   XREF to: 004d8b20 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8b20()
    MOV EAX,[0x00616494]                ; 004d92bb | g_CGamePtr
    ADD ESP,0xc                         ; 004d92c0
    ADD EAX,0xa4                        ; 004d92c3
    PUSH EAX                            ; 004d92c8
    PUSH 0x5dafdb                       ; 004d92c9 | = "keyNextAmmo"
    LEA EAX,[ESP + 0x8]                 ; 004d92ce
    PUSH EAX                            ; 004d92d2
    CALL engine_ini.cpp_FUN_004d8b20    ; 004d92d3
        ;   XREF to: 004d8b20 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8b20()
    MOV EAX,[0x00616494]                ; 004d92d8 | g_CGamePtr
    ADD ESP,0xc                         ; 004d92dd
    ADD EAX,0xa8                        ; 004d92e0
    PUSH EAX                            ; 004d92e5 | g_CGameInstance.invert_mouse_y_axis
    PUSH 0x5dafe7                       ; 004d92e6 | = "invertMouseYAxis"
    LEA EAX,[ESP + 0x8]                 ; 004d92eb
    PUSH EAX                            ; 004d92ef
    CALL engine_ini.cpp_FUN_004d8b20    ; 004d92f0
        ;   XREF to: 004d8b20 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8b20()
    MOV EAX,[0x00616494]                ; 004d92f5 | g_CGamePtr
    ADD ESP,0xc                         ; 004d92fa
    ADD EAX,0xac                        ; 004d92fd
    PUSH EAX                            ; 004d9302 | g_CGameInstance.always_run
    PUSH 0x5daff8                       ; 004d9303 | = "alwaysRun"
    LEA EAX,[ESP + 0x8]                 ; 004d9308
    PUSH EAX                            ; 004d930c
    CALL engine_ini.cpp_FUN_004d8b20    ; 004d930d
        ;   XREF to: 004d8b20 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8b20()
    MOV EAX,[0x00616494]                ; 004d9312 | g_CGamePtr
    ADD ESP,0xc                         ; 004d9317
    ADD EAX,0xb0                        ; 004d931a
    PUSH EAX                            ; 004d931f | g_CGameInstance.x_mouse_sensitivity
    PUSH 0x5db002                       ; 004d9320 | = "xMouseSensitivity"
    LEA EAX,[ESP + 0x8]                 ; 004d9325
    PUSH EAX                            ; 004d9329
    CALL engine_ini.cpp_FUN_004d8b20    ; 004d932a
        ;   XREF to: 004d8b20 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8b20()
    MOV EAX,[0x00616494]                ; 004d932f | g_CGamePtr
    ADD ESP,0xc                         ; 004d9334
    ADD EAX,0xb4                        ; 004d9337
    PUSH EAX                            ; 004d933c | g_CGameInstance.y_mouse_sensitivity
    PUSH 0x5db014                       ; 004d933d | = "yMouseSensitivity"
    LEA EAX,[ESP + 0x8]                 ; 004d9342
    PUSH EAX                            ; 004d9346
    CALL engine_ini.cpp_FUN_004d8b20    ; 004d9347
        ;   XREF to: 004d8b20 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8b20()
    MOV EAX,[0x00616494]                ; 004d934c | g_CGamePtr
    ADD ESP,0xc                         ; 004d9351
    ADD EAX,0xb8                        ; 004d9354
    PUSH EAX                            ; 004d9359 | g_CGameInstance.x_center
    PUSH 0x5db026                       ; 004d935a | = "xCenter"
    LEA EAX,[ESP + 0x8]                 ; 004d935f
    PUSH EAX                            ; 004d9363
    CALL engine_ini.cpp_FUN_004d8b20    ; 004d9364
        ;   XREF to: 004d8b20 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8b20()
    MOV EAX,[0x00616494]                ; 004d9369 | g_CGamePtr
    ADD ESP,0xc                         ; 004d936e
    ADD EAX,0xbc                        ; 004d9371
    PUSH EAX                            ; 004d9376
    PUSH 0x5db02e                       ; 004d9377 | = "yCenter"
    LEA EAX,[ESP + 0x8]                 ; 004d937c
    PUSH EAX                            ; 004d9380
    CALL engine_ini.cpp_FUN_004d8b20    ; 004d9381
        ;   XREF to: 004d8b20 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8b20()
    ADD ESP,0xc                         ; 004d9386
    MOV EAX,[0x00616494]                ; 004d9389 | g_CGamePtr
    ADD EAX,0xc0                        ; 004d938e
    PUSH EAX                            ; 004d9393
    PUSH 0x5db036                       ; 004d9394 | = "xStickMin"
    LEA EAX,[ESP + 0x8]                 ; 004d9399
    PUSH EAX                            ; 004d939d
    CALL engine_ini.cpp_FUN_004d8b20    ; 004d939e
        ;   XREF to: 004d8b20 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8b20()
    MOV EAX,[0x00616494]                ; 004d93a3 | g_CGamePtr
    ADD ESP,0xc                         ; 004d93a8
    ADD EAX,0xc4                        ; 004d93ab
    PUSH EAX                            ; 004d93b0
    PUSH 0x5db040                       ; 004d93b1 | = "xStickMax"
    LEA EAX,[ESP + 0x8]                 ; 004d93b6
    PUSH EAX                            ; 004d93ba
    CALL engine_ini.cpp_FUN_004d8b20    ; 004d93bb
        ;   XREF to: 004d8b20 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8b20()
    MOV EAX,[0x00616494]                ; 004d93c0 | g_CGamePtr
    ADD ESP,0xc                         ; 004d93c5
    ADD EAX,0xc8                        ; 004d93c8
    PUSH EAX                            ; 004d93cd
    PUSH 0x5db04a                       ; 004d93ce | = "yStickMin"
    LEA EAX,[ESP + 0x8]                 ; 004d93d3
    PUSH EAX                            ; 004d93d7
    CALL engine_ini.cpp_FUN_004d8b20    ; 004d93d8
        ;   XREF to: 004d8b20 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8b20()
    MOV EAX,[0x00616494]                ; 004d93dd | g_CGamePtr
    ADD ESP,0xc                         ; 004d93e2
    ADD EAX,0xcc                        ; 004d93e5
    PUSH EAX                            ; 004d93ea
    PUSH 0x5db054                       ; 004d93eb | = "yStickMax"
    LEA EAX,[ESP + 0x8]                 ; 004d93f0
    PUSH EAX                            ; 004d93f4
    CALL engine_ini.cpp_FUN_004d8b20    ; 004d93f5
        ;   XREF to: 004d8b20 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8b20()
    MOV EAX,[0x00616494]                ; 004d93fa | g_CGamePtr
    ADD ESP,0xc                         ; 004d93ff
    ADD EAX,0xd8                        ; 004d9402
    PUSH EAX                            ; 004d9407 | g_CGameInstance.field168_0xd8
    PUSH 0x5db05e                       ; 004d9408 | = "aimMode"
    LEA EAX,[ESP + 0x8]                 ; 004d940d
    PUSH EAX                            ; 004d9411
    CALL engine_ini.cpp_FUN_004d8b20    ; 004d9412
        ;   XREF to: 004d8b20 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8b20()
    MOV EAX,[0x00616494]                ; 004d9417 | g_CGamePtr
    ADD ESP,0xc                         ; 004d941c
    ADD EAX,0xdc                        ; 004d941f
    PUSH EAX                            ; 004d9424 | g_CGameInstance.field172_0xdc
    PUSH 0x5db066                       ; 004d9425 | = "autoUseHealth"
    LEA EAX,[ESP + 0x8]                 ; 004d942a
    PUSH EAX                            ; 004d942e
    CALL engine_ini.cpp_FUN_004d8b20    ; 004d942f
        ;   XREF to: 004d8b20 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8b20()
    ADD ESP,0xc                         ; 004d9434
    PUSH 0x617bc0                       ; 004d9437 | = "Debug"
    LEA EAX,[ESP + 0x4]                 ; 004d943c
    PUSH EAX                            ; 004d9440
    CALL engine_ini.cpp_CIniFile_readIniHeader_FUN_004d89d0 ; 004d9441
        ;   XREF to: 004d89d0 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_readIniHeader_FUN_004d89d0(CIniFile * this_ptr, char * section)
    ADD ESP,0x8                         ; 004d9446
    MOV EAX,[0x00609ed0]                ; 004d9449 | g_CConsolePtr
    PUSH EAX                            ; 004d944e | g_CConsoleInstance
    PUSH 0x5db074                       ; 004d944f | = "logConsoleFlag"
    LEA EAX,[ESP + 0x8]                 ; 004d9454
    PUSH EAX                            ; 004d9458
    CALL engine_ini.cpp_FUN_004d8b20    ; 004d9459
        ;   XREF to: 004d8b20 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8b20()
    MOV EAX,[0x00616494]                ; 004d945e | g_CGamePtr
    ADD ESP,0xc                         ; 004d9463
    ADD EAX,0x230                       ; 004d9466
    PUSH EAX                            ; 004d946b
    PUSH 0x5db083                       ; 004d946c | = "headOfHorrorCheat"
    LEA EAX,[ESP + 0x8]                 ; 004d9471
    PUSH EAX                            ; 004d9475
    CALL engine_ini.cpp_FUN_004d8b20    ; 004d9476
        ;   XREF to: 004d8b20 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8b20()
    ADD ESP,0xc                         ; 004d947b
    PUSH 0x617bc8                       ; 004d947e | = "Editor"
    LEA EAX,[ESP + 0x4]                 ; 004d9483
    PUSH EAX                            ; 004d9487
    CALL engine_ini.cpp_CIniFile_readIniHeader_FUN_004d89d0 ; 004d9488
        ;   XREF to: 004d89d0 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_readIniHeader_FUN_004d89d0(CIniFile * this_ptr, char * section)
    ADD ESP,0x8                         ; 004d948d
    PUSH EDI                            ; 004d9490
    LEA EAX,[ESP + 0x4]                 ; 004d9491
    PUSH EAX                            ; 004d9495
    CALL engine_ini.cpp_CIniFile_dtor_FUN_004d8940 ; 004d9496
        ;   XREF to: 004d8940 (UNCONDITIONAL_CALL)  ; CIniFile * engine_ini.cpp_CIniFile_dtor_FUN_004d8940(CIniFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004d949b
    ADD ESP,0x204                       ; 004d949e
    POP EBP                             ; 004d94a4
    POP EDI                             ; 004d94a5
    RET                                 ; 004d94a6
    MOV EDX,0x5dada5                    ; 004d94a7 | = "..\\core\\inivar.cpp"
        ;   Label: LAB_004d94a7
    MOV ECX,0x58                        ; 004d94ac
    PUSH 0x5dadb8                       ; 004d94b1 | = "Please copy Nocturne to your hard drive"
    MOV dword ptr [0x01d046a0],EDX      ; 004d94b6 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 004d94bc | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004d94c2
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004d94c7
    JMP 0x004d8d83                      ; 004d94ca
        ;   XREF to: 004d8d83 (UNCONDITIONAL_JUMP)  ; LAB_004d8d83

