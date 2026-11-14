; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_inivar_cpp_readIniData_FUN_004d8e70(void)
;
; Local Variables:
; undefined        Stack[-0x210]:1  local_210
;
; XREF[1]:
;   core_main.c_initializeGameSystems_FUN_004e44e0 at 004e4543
;
; Referenced Globals:
;   TerminatedCString s_core_inivar_cpp_005c58cc
;   TerminatedCString s_Please_copy_Blair_Witch_005c58df
;   TerminatedCString s_gamePIXX_005c590c
;   TerminatedCString s_gamePIXY_005c5915
;   TerminatedCString s_gameBPP_005c591e
;   TerminatedCString s_useDirect3D_005c5926
;   TerminatedCString s_useAGPFlag_005c5932
;   TerminatedCString s_rendererDLLPath_005c593d
;   TerminatedCString s_gamma_005c594d
;   TerminatedCString s_heroNumber_005c5953
;   TerminatedCString s_haloMode_005c595e
;   TerminatedCString s_firstTimeFlag_005c5967
;   TerminatedCString s_subtitleMode_005c5975
;   TerminatedCString s_bloodFlag_005c5982
;   TerminatedCString s_nudityFlag_005c598c
;   ... and 81 more
;
; Called Functions:
;   core_game.cpp_FUN_004b8e60
;   core_main.c_FUN_004e4330
;   crt_io.c__chmod_FUN_005a4bd0
;   engine_ini.cpp_CIniFile_dtor_FUN_004d8a50
;   engine_ini.cpp_CIniFile_getString_FUN_004d8b20
;   engine_ini.cpp_CIniFile_readIniHeader_FUN_004d8ae0
;   engine_ini.cpp_FUN_004d8a20
;   engine_ini.cpp_FUN_004d8c30
;   sound_sndmain.cpp_readIni_FUN_00559220
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004d8e70
        ;   Label: core_inivar.cpp_readIniData_FUN_004d8e70
    PUSH EDI                            ; 004d8e71
    PUSH EBP                            ; 004d8e72
    SUB ESP,0x204                       ; 004d8e73
    PUSH 0x180                          ; 004d8e79
    PUSH 0x6000b0                       ; 004d8e7e | = ".\\system\\bw3.ini"
    CALL crt_io.c__chmod_FUN_005a4bd0   ; 004d8e83
        ;   XREF to: 005a4bd0 (UNCONDITIONAL_CALL)  ; int crt_io.c__chmod_FUN_005a4bd0(char * path, int mode)
    ADD ESP,0x8                         ; 004d8e88
    TEST EAX,EAX                        ; 004d8e8b
    JNZ 0x004d9595                      ; 004d8e8d
        ;   XREF to: 004d9595 (CONDITIONAL_JUMP)  ; LAB_004d9595
    PUSH EBX                            ; 004d8e93
        ;   Label: LAB_004d8e93
    PUSH 0x0                            ; 004d8e94
    PUSH 0x6000b0                       ; 004d8e96 | = ".\\system\\bw3.ini"
    LEA EAX,[ESP + 0xc]                 ; 004d8e9b
    PUSH EAX                            ; 004d8e9f
    CALL engine_ini.cpp_FUN_004d8a20    ; 004d8ea0
        ;   XREF to: 004d8a20 (UNCONDITIONAL_CALL)  ; CIniFile * engine_ini.cpp_FUN_004d8a20(CIniFile * this_ptr, char * filename, char * section)
    ADD ESP,0xc                         ; 004d8ea5
    PUSH 0x6000d8                       ; 004d8ea8 | = "Graphics"
    LEA EAX,[ESP + 0x8]                 ; 004d8ead
    PUSH EAX                            ; 004d8eb1
    CALL engine_ini.cpp_CIniFile_readIniHeader_FUN_004d8ae0 ; 004d8eb2
        ;   XREF to: 004d8ae0 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_readIniHeader_FUN_004d8ae0(CIniFile * this_ptr, char * section)
    ADD ESP,0x8                         ; 004d8eb7
    MOV EBX,dword ptr [0x005fe9dc]      ; 004d8eba | g_CGamePtr
    PUSH EBX                            ; 004d8ec0
    PUSH 0x5c590c                       ; 004d8ec1 | = "gamePIXX"
    LEA EAX,[ESP + 0xc]                 ; 004d8ec6
    PUSH EAX                            ; 004d8eca
    CALL engine_ini.cpp_FUN_004d8c30    ; 004d8ecb
        ;   XREF to: 004d8c30 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8c30()
    MOV EAX,[0x005fe9dc]                ; 004d8ed0 | g_CGamePtr
    ADD ESP,0xc                         ; 004d8ed5
    ADD EAX,0x4                         ; 004d8ed8
    PUSH EAX                            ; 004d8edb
    PUSH 0x5c5915                       ; 004d8edc | = "gamePIXY"
    LEA EAX,[ESP + 0xc]                 ; 004d8ee1
    PUSH EAX                            ; 004d8ee5
    CALL engine_ini.cpp_FUN_004d8c30    ; 004d8ee6
        ;   XREF to: 004d8c30 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8c30()
    MOV EAX,[0x005fe9dc]                ; 004d8eeb | g_CGamePtr
    ADD ESP,0xc                         ; 004d8ef0
    ADD EAX,0x8                         ; 004d8ef3
    PUSH EAX                            ; 004d8ef6
    PUSH 0x5c591e                       ; 004d8ef7 | = "gameBPP"
    LEA EAX,[ESP + 0xc]                 ; 004d8efc
    PUSH EAX                            ; 004d8f00
    CALL engine_ini.cpp_FUN_004d8c30    ; 004d8f01
        ;   XREF to: 004d8c30 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8c30()
    ADD ESP,0xc                         ; 004d8f06
    PUSH 0x2cf5fcc                      ; 004d8f09 | DAT_02cf5fcc
    PUSH 0x5c5926                       ; 004d8f0e | = "useDirect3D"
    LEA EAX,[ESP + 0xc]                 ; 004d8f13
    PUSH EAX                            ; 004d8f17
    CALL engine_ini.cpp_FUN_004d8c30    ; 004d8f18
        ;   XREF to: 004d8c30 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8c30()
    ADD ESP,0xc                         ; 004d8f1d
    PUSH 0x2cf5fd8                      ; 004d8f20 | DAT_02cf5fd8
    PUSH 0x5c5932                       ; 004d8f25 | = "useAGPFlag"
    LEA EAX,[ESP + 0xc]                 ; 004d8f2a
    PUSH EAX                            ; 004d8f2e
    CALL engine_ini.cpp_FUN_004d8c30    ; 004d8f2f
        ;   XREF to: 004d8c30 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8c30()
    ADD ESP,0xc                         ; 004d8f34
    PUSH 0xfa                           ; 004d8f37
    PUSH 0x606730                       ; 004d8f3c | DAT_00606730
    PUSH 0x5c593d                       ; 004d8f41 | = "rendererDLLPath"
    LEA EAX,[ESP + 0x10]                ; 004d8f46
    PUSH EAX                            ; 004d8f4a
    CALL engine_ini.cpp_CIniFile_getString_FUN_004d8b20 ; 004d8f4b
        ;   XREF to: 004d8b20 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getString_FUN_004d8b20(CIniFile * this_ptr, char * key, char * output_buffer, int buffer_size)
    MOV EAX,[0x005fe9dc]                ; 004d8f50 | g_CGamePtr
    ADD ESP,0x10                        ; 004d8f55
    ADD EAX,0x248                       ; 004d8f58
    PUSH EAX                            ; 004d8f5d
    PUSH 0x5c594d                       ; 004d8f5e | = "gamma"
    LEA EAX,[ESP + 0xc]                 ; 004d8f63
    PUSH EAX                            ; 004d8f67
    CALL engine_ini.cpp_FUN_004d8c30    ; 004d8f68
        ;   XREF to: 004d8c30 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8c30()
    MOV EAX,[0x005fe9dc]                ; 004d8f6d | g_CGamePtr
    ADD ESP,0xc                         ; 004d8f72
    ADD EAX,0xd8                        ; 004d8f75
    PUSH EAX                            ; 004d8f7a | g_CGameInstance.hero_number
    PUSH 0x5c5953                       ; 004d8f7b | = "heroNumber"
    LEA EAX,[ESP + 0xc]                 ; 004d8f80
    PUSH EAX                            ; 004d8f84
    CALL engine_ini.cpp_FUN_004d8c30    ; 004d8f85
        ;   XREF to: 004d8c30 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8c30()
    ADD ESP,0xc                         ; 004d8f8a
    POP EBX                             ; 004d8f8d
    MOV EAX,[0x005fe9dc]                ; 004d8f8e | g_CGamePtr
    ADD EAX,0xc                         ; 004d8f93
    PUSH EAX                            ; 004d8f96 | g_CGameInstance.halo_mode
    PUSH 0x5c595e                       ; 004d8f97 | = "haloMode"
    LEA EAX,[ESP + 0x8]                 ; 004d8f9c
    PUSH EAX                            ; 004d8fa0
    CALL engine_ini.cpp_FUN_004d8c30    ; 004d8fa1
        ;   XREF to: 004d8c30 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8c30()
    ADD ESP,0xc                         ; 004d8fa6
    PUSH 0x1d5bc7c                      ; 004d8fa9 | DAT_01d5bc7c
    PUSH 0x5c5967                       ; 004d8fae | = "firstTimeFlag"
    LEA EAX,[ESP + 0x8]                 ; 004d8fb3
    PUSH EAX                            ; 004d8fb7
    CALL engine_ini.cpp_FUN_004d8c30    ; 004d8fb8
        ;   XREF to: 004d8c30 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8c30()
    MOV EAX,[0x005fe9dc]                ; 004d8fbd | g_CGamePtr
    ADD ESP,0xc                         ; 004d8fc2
    ADD EAX,0x10                        ; 004d8fc5
    PUSH EAX                            ; 004d8fc8
    PUSH 0x5c5975                       ; 004d8fc9 | = "subtitleMode"
    LEA EAX,[ESP + 0x8]                 ; 004d8fce
    PUSH EAX                            ; 004d8fd2
    CALL engine_ini.cpp_FUN_004d8c30    ; 004d8fd3
        ;   XREF to: 004d8c30 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8c30()
    MOV EAX,[0x005fe9dc]                ; 004d8fd8 | g_CGamePtr
    ADD ESP,0xc                         ; 004d8fdd
    ADD EAX,0x14                        ; 004d8fe0
    PUSH EAX                            ; 004d8fe3
    PUSH 0x5c5982                       ; 004d8fe4 | = "bloodFlag"
    LEA EAX,[ESP + 0x8]                 ; 004d8fe9
    PUSH EAX                            ; 004d8fed
    CALL engine_ini.cpp_FUN_004d8c30    ; 004d8fee
        ;   XREF to: 004d8c30 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8c30()
    MOV EAX,[0x005fe9dc]                ; 004d8ff3 | g_CGamePtr
    ADD ESP,0xc                         ; 004d8ff8
    ADD EAX,0x18                        ; 004d8ffb
    PUSH EAX                            ; 004d8ffe
    PUSH 0x5c598c                       ; 004d8fff | = "nudityFlag"
    LEA EAX,[ESP + 0x8]                 ; 004d9004
    PUSH EAX                            ; 004d9008
    CALL engine_ini.cpp_FUN_004d8c30    ; 004d9009
        ;   XREF to: 004d8c30 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8c30()
    MOV EAX,[0x005fe9dc]                ; 004d900e | g_CGamePtr
    ADD ESP,0xc                         ; 004d9013
    ADD EAX,0x1c                        ; 004d9016
    PUSH EAX                            ; 004d9019
    PUSH 0x5c5997                       ; 004d901a | = "foulLanguageFlag"
    LEA EAX,[ESP + 0x8]                 ; 004d901f
    PUSH EAX                            ; 004d9023
    CALL engine_ini.cpp_FUN_004d8c30    ; 004d9024
        ;   XREF to: 004d8c30 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8c30()
    MOV EAX,[0x005fe9dc]                ; 004d9029 | g_CGamePtr
    ADD ESP,0xc                         ; 004d902e
    ADD EAX,0x24                        ; 004d9031
    PUSH EAX                            ; 004d9034 | g_CGameInstance.shadow_flag
    PUSH 0x5c59a8                       ; 004d9035 | = "shadowFlag"
    LEA EAX,[ESP + 0x8]                 ; 004d903a
    PUSH EAX                            ; 004d903e
    CALL engine_ini.cpp_FUN_004d8c30    ; 004d903f
        ;   XREF to: 004d8c30 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8c30()
    ADD ESP,0xc                         ; 004d9044
    PUSH 0x1d74020                      ; 004d9047 | DAT_01d74020
    PUSH 0x5c59b3                       ; 004d904c | = "currentBoard"
    LEA EAX,[ESP + 0x8]                 ; 004d9051
    XOR ESI,ESI                         ; 004d9055
    PUSH EAX                            ; 004d9057
    MOV dword ptr [0x01d74020],ESI      ; 004d9058 | DAT_01d74020
    CALL engine_ini.cpp_FUN_004d8c30    ; 004d905e
        ;   XREF to: 004d8c30 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8c30()
    ADD ESP,0xc                         ; 004d9063
    PUSH 0x6000d0                       ; 004d9066 | = "Sound"
    LEA EAX,[ESP + 0x4]                 ; 004d906b
    PUSH EAX                            ; 004d906f
    CALL engine_ini.cpp_CIniFile_readIniHeader_FUN_004d8ae0 ; 004d9070
        ;   XREF to: 004d8ae0 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_readIniHeader_FUN_004d8ae0(CIniFile * this_ptr, char * section)
    ADD ESP,0x8                         ; 004d9075
    MOV EAX,ESP                         ; 004d9078
    PUSH EAX                            ; 004d907a
    CALL sound_sndmain.cpp_readIni_FUN_00559220 ; 004d907b
        ;   XREF to: 00559220 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_readIni_FUN_00559220(CIniFile * ini_file)
    ADD ESP,0x4                         ; 004d9080
    PUSH 0x6000e8                       ; 004d9083 | = "Control"
    LEA EAX,[ESP + 0x4]                 ; 004d9088
    PUSH EAX                            ; 004d908c
    CALL engine_ini.cpp_CIniFile_readIniHeader_FUN_004d8ae0 ; 004d908d
        ;   XREF to: 004d8ae0 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_readIniHeader_FUN_004d8ae0(CIniFile * this_ptr, char * section)
    MOV EAX,[0x005fe9dc]                ; 004d9092 | g_CGamePtr
    ADD ESP,0x8                         ; 004d9097
    ADD EAX,0xd4                        ; 004d909a
    PUSH EAX                            ; 004d909f | g_CGameInstance.game_control
    PUSH 0x5c59c0                       ; 004d90a0 | = "gameControl"
    LEA EAX,[ESP + 0x8]                 ; 004d90a5
    PUSH EAX                            ; 004d90a9
    CALL engine_ini.cpp_FUN_004d8c30    ; 004d90aa
        ;   XREF to: 004d8c30 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8c30()
    ADD ESP,0xc                         ; 004d90af
    MOV EDI,dword ptr [0x005fe9dc]      ; 004d90b2 | g_CGamePtr
    PUSH EDI                            ; 004d90b8
    CALL core_game.cpp_FUN_004b8e60     ; 004d90b9
        ;   XREF to: 004b8e60 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_FUN_004b8e60()
    MOV EAX,[0x005fe9dc]                ; 004d90be | g_CGamePtr
    ADD ESP,0x4                         ; 004d90c3
    ADD EAX,0x28                        ; 004d90c6
    PUSH EAX                            ; 004d90c9
    PUSH 0x5c59cc                       ; 004d90ca | = "keyWalk"
    LEA EAX,[ESP + 0x8]                 ; 004d90cf
    PUSH EAX                            ; 004d90d3
    CALL engine_ini.cpp_FUN_004d8c30    ; 004d90d4
        ;   XREF to: 004d8c30 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8c30()
    MOV EAX,[0x005fe9dc]                ; 004d90d9 | g_CGamePtr
    ADD ESP,0xc                         ; 004d90de
    ADD EAX,0x2c                        ; 004d90e1
    PUSH EAX                            ; 004d90e4
    PUSH 0x5c59d4                       ; 004d90e5 | = "keyBackup"
    LEA EAX,[ESP + 0x8]                 ; 004d90ea
    PUSH EAX                            ; 004d90ee
    CALL engine_ini.cpp_FUN_004d8c30    ; 004d90ef
        ;   XREF to: 004d8c30 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8c30()
    MOV EAX,[0x005fe9dc]                ; 004d90f4 | g_CGamePtr
    ADD ESP,0xc                         ; 004d90f9
    ADD EAX,0x30                        ; 004d90fc
    PUSH EAX                            ; 004d90ff
    PUSH 0x5c59de                       ; 004d9100 | = "keyRun"
    LEA EAX,[ESP + 0x8]                 ; 004d9105
    PUSH EAX                            ; 004d9109
    CALL engine_ini.cpp_FUN_004d8c30    ; 004d910a
        ;   XREF to: 004d8c30 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8c30()
    MOV EAX,[0x005fe9dc]                ; 004d910f | g_CGamePtr
    ADD ESP,0xc                         ; 004d9114
    ADD EAX,0x34                        ; 004d9117
    PUSH EAX                            ; 004d911a
    PUSH 0x5c59e5                       ; 004d911b | = "keyStrafe"
    LEA EAX,[ESP + 0x8]                 ; 004d9120
    PUSH EAX                            ; 004d9124
    CALL engine_ini.cpp_FUN_004d8c30    ; 004d9125
        ;   XREF to: 004d8c30 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8c30()
    MOV EAX,[0x005fe9dc]                ; 004d912a | g_CGamePtr
    ADD ESP,0xc                         ; 004d912f
    ADD EAX,0x38                        ; 004d9132
    PUSH EAX                            ; 004d9135
    PUSH 0x5c59ef                       ; 004d9136 | = "keyStrafeLeft"
    LEA EAX,[ESP + 0x8]                 ; 004d913b
    PUSH EAX                            ; 004d913f
    CALL engine_ini.cpp_FUN_004d8c30    ; 004d9140
        ;   XREF to: 004d8c30 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8c30()
    MOV EAX,[0x005fe9dc]                ; 004d9145 | g_CGamePtr
    ADD ESP,0xc                         ; 004d914a
    ADD EAX,0x3c                        ; 004d914d
    PUSH EAX                            ; 004d9150
    PUSH 0x5c59fd                       ; 004d9151 | = "keyStrafeRight"
    LEA EAX,[ESP + 0x8]                 ; 004d9156
    PUSH EAX                            ; 004d915a
    CALL engine_ini.cpp_FUN_004d8c30    ; 004d915b
        ;   XREF to: 004d8c30 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8c30()
    ADD ESP,0xc                         ; 004d9160
    MOV EAX,[0x005fe9dc]                ; 004d9163 | g_CGamePtr
    ADD EAX,0x40                        ; 004d9168
    PUSH EAX                            ; 004d916b
    PUSH 0x5c5a0c                       ; 004d916c | = "keyRight"
    LEA EAX,[ESP + 0x8]                 ; 004d9171
    PUSH EAX                            ; 004d9175
    CALL engine_ini.cpp_FUN_004d8c30    ; 004d9176
        ;   XREF to: 004d8c30 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8c30()
    MOV EAX,[0x005fe9dc]                ; 004d917b | g_CGamePtr
    ADD ESP,0xc                         ; 004d9180
    ADD EAX,0x44                        ; 004d9183
    PUSH EAX                            ; 004d9186
    PUSH 0x5c5a15                       ; 004d9187 | = "keyLeft"
    LEA EAX,[ESP + 0x8]                 ; 004d918c
    PUSH EAX                            ; 004d9190
    CALL engine_ini.cpp_FUN_004d8c30    ; 004d9191
        ;   XREF to: 004d8c30 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8c30()
    MOV EAX,[0x005fe9dc]                ; 004d9196 | g_CGamePtr
    ADD ESP,0xc                         ; 004d919b
    ADD EAX,0x48                        ; 004d919e
    PUSH EAX                            ; 004d91a1 | g_CGameInstance.key_fire
    PUSH 0x5c5a1d                       ; 004d91a2 | = "keyFire"
    LEA EAX,[ESP + 0x8]                 ; 004d91a7
    PUSH EAX                            ; 004d91ab
    CALL engine_ini.cpp_FUN_004d8c30    ; 004d91ac
        ;   XREF to: 004d8c30 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8c30()
    MOV EAX,[0x005fe9dc]                ; 004d91b1 | g_CGamePtr
    ADD ESP,0xc                         ; 004d91b6
    ADD EAX,0x4c                        ; 004d91b9
    PUSH EAX                            ; 004d91bc
    PUSH 0x5c5a25                       ; 004d91bd | = "keyAction"
    LEA EAX,[ESP + 0x8]                 ; 004d91c2
    PUSH EAX                            ; 004d91c6
    CALL engine_ini.cpp_FUN_004d8c30    ; 004d91c7
        ;   XREF to: 004d8c30 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8c30()
    MOV EAX,[0x005fe9dc]                ; 004d91cc | g_CGamePtr
    ADD ESP,0xc                         ; 004d91d1
    ADD EAX,0x50                        ; 004d91d4
    PUSH EAX                            ; 004d91d7 | g_CGameInstance.key_use_item
    PUSH 0x5c5a2f                       ; 004d91d8 | = "keyUseItem"
    LEA EAX,[ESP + 0x8]                 ; 004d91dd
    PUSH EAX                            ; 004d91e1
    CALL engine_ini.cpp_FUN_004d8c30    ; 004d91e2
        ;   XREF to: 004d8c30 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8c30()
    MOV EAX,[0x005fe9dc]                ; 004d91e7 | g_CGamePtr
    ADD ESP,0xc                         ; 004d91ec
    ADD EAX,0x54                        ; 004d91ef
    PUSH EAX                            ; 004d91f2 | g_CGameInstance.key_light
    PUSH 0x5c5a3a                       ; 004d91f3 | = "keyLight"
    LEA EAX,[ESP + 0x8]                 ; 004d91f8
    PUSH EAX                            ; 004d91fc
    CALL engine_ini.cpp_FUN_004d8c30    ; 004d91fd
        ;   XREF to: 004d8c30 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8c30()
    MOV EAX,[0x005fe9dc]                ; 004d9202 | g_CGamePtr
    ADD ESP,0xc                         ; 004d9207
    ADD EAX,0x5c                        ; 004d920a
    PUSH EAX                            ; 004d920d
    PUSH 0x5c5a43                       ; 004d920e | = "keyFieldNotes"
    LEA EAX,[ESP + 0x8]                 ; 004d9213
    PUSH EAX                            ; 004d9217
    CALL engine_ini.cpp_FUN_004d8c30    ; 004d9218
        ;   XREF to: 004d8c30 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8c30()
    MOV EAX,[0x005fe9dc]                ; 004d921d | g_CGamePtr
    ADD ESP,0xc                         ; 004d9222
    ADD EAX,0x60                        ; 004d9225
    PUSH EAX                            ; 004d9228
    PUSH 0x5c5a51                       ; 004d9229 | = "keyMap"
    LEA EAX,[ESP + 0x8]                 ; 004d922e
    PUSH EAX                            ; 004d9232
    CALL engine_ini.cpp_FUN_004d8c30    ; 004d9233
        ;   XREF to: 004d8c30 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8c30()
    MOV EAX,[0x005fe9dc]                ; 004d9238 | g_CGamePtr
    ADD ESP,0xc                         ; 004d923d
    ADD EAX,0x68                        ; 004d9240
    PUSH EAX                            ; 004d9243
    PUSH 0x5c5a58                       ; 004d9244 | = "keyVoodooDoll"
    LEA EAX,[ESP + 0x8]                 ; 004d9249
    PUSH EAX                            ; 004d924d
    CALL engine_ini.cpp_FUN_004d8c30    ; 004d924e
        ;   XREF to: 004d8c30 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8c30()
    ADD ESP,0xc                         ; 004d9253
    MOV EAX,[0x005fe9dc]                ; 004d9256 | g_CGamePtr
    ADD EAX,0x6c                        ; 004d925b
    PUSH EAX                            ; 004d925e
    PUSH 0x5c5a66                       ; 004d925f | = "keyDraw"
    LEA EAX,[ESP + 0x8]                 ; 004d9264
    PUSH EAX                            ; 004d9268
    CALL engine_ini.cpp_FUN_004d8c30    ; 004d9269
        ;   XREF to: 004d8c30 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8c30()
    MOV EAX,[0x005fe9dc]                ; 004d926e | g_CGamePtr
    ADD ESP,0xc                         ; 004d9273
    ADD EAX,0x74                        ; 004d9276
    PUSH EAX                            ; 004d9279
    PUSH 0x5c5a6e                       ; 004d927a | = "keyQuickTurn"
    LEA EAX,[ESP + 0x8]                 ; 004d927f
    PUSH EAX                            ; 004d9283
    CALL engine_ini.cpp_FUN_004d8c30    ; 004d9284
        ;   XREF to: 004d8c30 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8c30()
    MOV EAX,[0x005fe9dc]                ; 004d9289 | g_CGamePtr
    ADD ESP,0xc                         ; 004d928e
    ADD EAX,0x78                        ; 004d9291
    PUSH EAX                            ; 004d9294
    PUSH 0x5c5a7b                       ; 004d9295 | = "keyPointUp"
    LEA EAX,[ESP + 0x8]                 ; 004d929a
    PUSH EAX                            ; 004d929e
    CALL engine_ini.cpp_FUN_004d8c30    ; 004d929f
        ;   XREF to: 004d8c30 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8c30()
    MOV EAX,[0x005fe9dc]                ; 004d92a4 | g_CGamePtr
    ADD ESP,0xc                         ; 004d92a9
    ADD EAX,0x7c                        ; 004d92ac
    PUSH EAX                            ; 004d92af
    PUSH 0x5c5a86                       ; 004d92b0 | = "keyPointDown"
    LEA EAX,[ESP + 0x8]                 ; 004d92b5
    PUSH EAX                            ; 004d92b9
    CALL engine_ini.cpp_FUN_004d8c30    ; 004d92ba
        ;   XREF to: 004d8c30 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8c30()
    MOV EAX,[0x005fe9dc]                ; 004d92bf | g_CGamePtr
    ADD ESP,0xc                         ; 004d92c4
    ADD EAX,0x80                        ; 004d92c7
    PUSH EAX                            ; 004d92cc
    PUSH 0x5c5a93                       ; 004d92cd | = "keyWeapon1"
    LEA EAX,[ESP + 0x8]                 ; 004d92d2
    PUSH EAX                            ; 004d92d6
    CALL engine_ini.cpp_FUN_004d8c30    ; 004d92d7
        ;   XREF to: 004d8c30 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8c30()
    MOV EAX,[0x005fe9dc]                ; 004d92dc | g_CGamePtr
    ADD ESP,0xc                         ; 004d92e1
    ADD EAX,0x84                        ; 004d92e4
    PUSH EAX                            ; 004d92e9
    PUSH 0x5c5a9e                       ; 004d92ea | = "keyWeapon2"
    LEA EAX,[ESP + 0x8]                 ; 004d92ef
    PUSH EAX                            ; 004d92f3
    CALL engine_ini.cpp_FUN_004d8c30    ; 004d92f4
        ;   XREF to: 004d8c30 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8c30()
    MOV EAX,[0x005fe9dc]                ; 004d92f9 | g_CGamePtr
    ADD ESP,0xc                         ; 004d92fe
    ADD EAX,0x88                        ; 004d9301
    PUSH EAX                            ; 004d9306
    PUSH 0x5c5aa9                       ; 004d9307 | = "keyWeapon3"
    LEA EAX,[ESP + 0x8]                 ; 004d930c
    PUSH EAX                            ; 004d9310
    CALL engine_ini.cpp_FUN_004d8c30    ; 004d9311
        ;   XREF to: 004d8c30 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8c30()
    MOV EAX,[0x005fe9dc]                ; 004d9316 | g_CGamePtr
    ADD ESP,0xc                         ; 004d931b
    ADD EAX,0x8c                        ; 004d931e
    PUSH EAX                            ; 004d9323
    PUSH 0x5c5ab4                       ; 004d9324 | = "keyWeapon4"
    LEA EAX,[ESP + 0x8]                 ; 004d9329
    PUSH EAX                            ; 004d932d
    CALL engine_ini.cpp_FUN_004d8c30    ; 004d932e
        ;   XREF to: 004d8c30 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8c30()
    MOV EAX,[0x005fe9dc]                ; 004d9333 | g_CGamePtr
    ADD ESP,0xc                         ; 004d9338
    ADD EAX,0x90                        ; 004d933b
    PUSH EAX                            ; 004d9340
    PUSH 0x5c5abf                       ; 004d9341 | = "keyWeapon5"
    LEA EAX,[ESP + 0x8]                 ; 004d9346
    PUSH EAX                            ; 004d934a
    CALL engine_ini.cpp_FUN_004d8c30    ; 004d934b
        ;   XREF to: 004d8c30 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8c30()
    ADD ESP,0xc                         ; 004d9350
    MOV EAX,[0x005fe9dc]                ; 004d9353 | g_CGamePtr
    ADD EAX,0x94                        ; 004d9358
    PUSH EAX                            ; 004d935d | g_CGameInstance.key_next_weapon
    PUSH 0x5c5aca                       ; 004d935e | = "keyNextWeapon"
    LEA EAX,[ESP + 0x8]                 ; 004d9363
    PUSH EAX                            ; 004d9367
    CALL engine_ini.cpp_FUN_004d8c30    ; 004d9368
        ;   XREF to: 004d8c30 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8c30()
    MOV EAX,[0x005fe9dc]                ; 004d936d | g_CGamePtr
    ADD ESP,0xc                         ; 004d9372
    ADD EAX,0x98                        ; 004d9375
    PUSH EAX                            ; 004d937a | g_CGameInstance.key_prev_weapon
    PUSH 0x5c5ad8                       ; 004d937b | = "keyPrevWeapon"
    LEA EAX,[ESP + 0x8]                 ; 004d9380
    PUSH EAX                            ; 004d9384
    CALL engine_ini.cpp_FUN_004d8c30    ; 004d9385
        ;   XREF to: 004d8c30 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8c30()
    MOV EAX,[0x005fe9dc]                ; 004d938a | g_CGamePtr
    ADD ESP,0xc                         ; 004d938f
    ADD EAX,0x9c                        ; 004d9392
    PUSH EAX                            ; 004d9397 | g_CGameInstance.key_next_item
    PUSH 0x5c5ae6                       ; 004d9398 | = "keyNextItem"
    LEA EAX,[ESP + 0x8]                 ; 004d939d
    PUSH EAX                            ; 004d93a1
    CALL engine_ini.cpp_FUN_004d8c30    ; 004d93a2
        ;   XREF to: 004d8c30 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8c30()
    MOV EAX,[0x005fe9dc]                ; 004d93a7 | g_CGamePtr
    ADD ESP,0xc                         ; 004d93ac
    ADD EAX,0xa0                        ; 004d93af
    PUSH EAX                            ; 004d93b4 | g_CGameInstance.key_prev_item
    PUSH 0x5c5af2                       ; 004d93b5 | = "keyPrevItem"
    LEA EAX,[ESP + 0x8]                 ; 004d93ba
    PUSH EAX                            ; 004d93be
    CALL engine_ini.cpp_FUN_004d8c30    ; 004d93bf
        ;   XREF to: 004d8c30 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8c30()
    MOV EAX,[0x005fe9dc]                ; 004d93c4 | g_CGamePtr
    ADD ESP,0xc                         ; 004d93c9
    ADD EAX,0xac                        ; 004d93cc
    PUSH EAX                            ; 004d93d1
    PUSH 0x5c5afe                       ; 004d93d2 | = "invertMouseYAxis"
    LEA EAX,[ESP + 0x8]                 ; 004d93d7
    PUSH EAX                            ; 004d93db
    CALL engine_ini.cpp_FUN_004d8c30    ; 004d93dc
        ;   XREF to: 004d8c30 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8c30()
    MOV EAX,[0x005fe9dc]                ; 004d93e1 | g_CGamePtr
    ADD ESP,0xc                         ; 004d93e6
    ADD EAX,0xb0                        ; 004d93e9
    PUSH EAX                            ; 004d93ee
    PUSH 0x5c5b0f                       ; 004d93ef | = "alwaysRun"
    LEA EAX,[ESP + 0x8]                 ; 004d93f4
    PUSH EAX                            ; 004d93f8
    CALL engine_ini.cpp_FUN_004d8c30    ; 004d93f9
        ;   XREF to: 004d8c30 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8c30()
    MOV EAX,[0x005fe9dc]                ; 004d93fe | g_CGamePtr
    ADD ESP,0xc                         ; 004d9403
    ADD EAX,0xb4                        ; 004d9406
    PUSH EAX                            ; 004d940b
    PUSH 0x5c5b19                       ; 004d940c | = "xMouseSensitivity"
    LEA EAX,[ESP + 0x8]                 ; 004d9411
    PUSH EAX                            ; 004d9415
    CALL engine_ini.cpp_FUN_004d8c30    ; 004d9416
        ;   XREF to: 004d8c30 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8c30()
    MOV EAX,[0x005fe9dc]                ; 004d941b | g_CGamePtr
    ADD ESP,0xc                         ; 004d9420
    ADD EAX,0xb8                        ; 004d9423
    PUSH EAX                            ; 004d9428
    PUSH 0x5c5b2b                       ; 004d9429 | = "yMouseSensitivity"
    LEA EAX,[ESP + 0x8]                 ; 004d942e
    PUSH EAX                            ; 004d9432
    CALL engine_ini.cpp_FUN_004d8c30    ; 004d9433
        ;   XREF to: 004d8c30 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8c30()
    MOV EAX,[0x005fe9dc]                ; 004d9438 | g_CGamePtr
    ADD ESP,0xc                         ; 004d943d
    ADD EAX,0xbc                        ; 004d9440
    PUSH EAX                            ; 004d9445 | g_CGameInstance.x_center
    PUSH 0x5c5b3d                       ; 004d9446 | = "xCenter"
    LEA EAX,[ESP + 0x8]                 ; 004d944b
    PUSH EAX                            ; 004d944f
    CALL engine_ini.cpp_FUN_004d8c30    ; 004d9450
        ;   XREF to: 004d8c30 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8c30()
    ADD ESP,0xc                         ; 004d9455
    MOV EAX,[0x005fe9dc]                ; 004d9458 | g_CGamePtr
    ADD EAX,0xc0                        ; 004d945d
    PUSH EAX                            ; 004d9462 | g_CGameInstance.y_center
    PUSH 0x5c5b45                       ; 004d9463 | = "yCenter"
    LEA EAX,[ESP + 0x8]                 ; 004d9468
    PUSH EAX                            ; 004d946c
    CALL engine_ini.cpp_FUN_004d8c30    ; 004d946d
        ;   XREF to: 004d8c30 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8c30()
    MOV EAX,[0x005fe9dc]                ; 004d9472 | g_CGamePtr
    ADD ESP,0xc                         ; 004d9477
    ADD EAX,0xc4                        ; 004d947a
    PUSH EAX                            ; 004d947f | g_CGameInstance.x_stick_min
    PUSH 0x5c5b4d                       ; 004d9480 | = "xStickMin"
    LEA EAX,[ESP + 0x8]                 ; 004d9485
    PUSH EAX                            ; 004d9489
    CALL engine_ini.cpp_FUN_004d8c30    ; 004d948a
        ;   XREF to: 004d8c30 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8c30()
    MOV EAX,[0x005fe9dc]                ; 004d948f | g_CGamePtr
    ADD ESP,0xc                         ; 004d9494
    ADD EAX,0xc8                        ; 004d9497
    PUSH EAX                            ; 004d949c | g_CGameInstance.x_stick_max
    PUSH 0x5c5b57                       ; 004d949d | = "xStickMax"
    LEA EAX,[ESP + 0x8]                 ; 004d94a2
    PUSH EAX                            ; 004d94a6
    CALL engine_ini.cpp_FUN_004d8c30    ; 004d94a7
        ;   XREF to: 004d8c30 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8c30()
    MOV EAX,[0x005fe9dc]                ; 004d94ac | g_CGamePtr
    ADD ESP,0xc                         ; 004d94b1
    ADD EAX,0xcc                        ; 004d94b4
    PUSH EAX                            ; 004d94b9 | g_CGameInstance.y_stick_min
    PUSH 0x5c5b61                       ; 004d94ba | = "yStickMin"
    LEA EAX,[ESP + 0x8]                 ; 004d94bf
    PUSH EAX                            ; 004d94c3
    CALL engine_ini.cpp_FUN_004d8c30    ; 004d94c4
        ;   XREF to: 004d8c30 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8c30()
    MOV EAX,[0x005fe9dc]                ; 004d94c9 | g_CGamePtr
    ADD ESP,0xc                         ; 004d94ce
    ADD EAX,0xd0                        ; 004d94d1
    PUSH EAX                            ; 004d94d6 | g_CGameInstance.y_stick_max
    PUSH 0x5c5b6b                       ; 004d94d7 | = "yStickMax"
    LEA EAX,[ESP + 0x8]                 ; 004d94dc
    PUSH EAX                            ; 004d94e0
    CALL engine_ini.cpp_FUN_004d8c30    ; 004d94e1
        ;   XREF to: 004d8c30 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8c30()
    MOV EAX,[0x005fe9dc]                ; 004d94e6 | g_CGamePtr
    ADD ESP,0xc                         ; 004d94eb
    ADD EAX,0xdc                        ; 004d94ee
    PUSH EAX                            ; 004d94f3 | g_CGameInstance.aim_mode
    PUSH 0x5c5b75                       ; 004d94f4 | = "aimMode"
    LEA EAX,[ESP + 0x8]                 ; 004d94f9
    PUSH EAX                            ; 004d94fd
    CALL engine_ini.cpp_FUN_004d8c30    ; 004d94fe
        ;   XREF to: 004d8c30 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8c30()
    MOV EAX,[0x005fe9dc]                ; 004d9503 | g_CGamePtr
    ADD ESP,0xc                         ; 004d9508
    ADD EAX,0xe0                        ; 004d950b
    PUSH EAX                            ; 004d9510 | g_CGameInstance.show_hero_numbers
    PUSH 0x5c5b7d                       ; 004d9511 | = "show_hero_numbers"
    LEA EAX,[ESP + 0x8]                 ; 004d9516
    PUSH EAX                            ; 004d951a
    CALL engine_ini.cpp_FUN_004d8c30    ; 004d951b
        ;   XREF to: 004d8c30 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8c30()
    MOV EAX,[0x005fe9dc]                ; 004d9520 | g_CGamePtr
    ADD ESP,0xc                         ; 004d9525
    ADD EAX,0xe4                        ; 004d9528
    PUSH EAX                            ; 004d952d
    PUSH 0x5c5b8f                       ; 004d952e | = "show_crosshair"
    LEA EAX,[ESP + 0x8]                 ; 004d9533
    PUSH EAX                            ; 004d9537
    CALL engine_ini.cpp_FUN_004d8c30    ; 004d9538
        ;   XREF to: 004d8c30 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8c30()
    ADD ESP,0xc                         ; 004d953d
    PUSH 0x600120                       ; 004d9540 | = "Debug"
    LEA EAX,[ESP + 0x4]                 ; 004d9545
    PUSH EAX                            ; 004d9549
    CALL engine_ini.cpp_CIniFile_readIniHeader_FUN_004d8ae0 ; 004d954a
        ;   XREF to: 004d8ae0 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_readIniHeader_FUN_004d8ae0(CIniFile * this_ptr, char * section)
    ADD ESP,0x8                         ; 004d954f
    MOV EBP,dword ptr [0x005f1690]      ; 004d9552 | g_CConsolePtr
    PUSH EBP                            ; 004d9558 | g_CConsoleInstance
    PUSH 0x5c5b9e                       ; 004d9559 | = "logConsoleFlag"
    LEA EAX,[ESP + 0x8]                 ; 004d955e
    PUSH EAX                            ; 004d9562
    CALL engine_ini.cpp_FUN_004d8c30    ; 004d9563
        ;   XREF to: 004d8c30 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8c30()
    ADD ESP,0xc                         ; 004d9568
    PUSH 0x600128                       ; 004d956b | = "Editor"
    LEA EAX,[ESP + 0x4]                 ; 004d9570
    PUSH EAX                            ; 004d9574
    CALL engine_ini.cpp_CIniFile_readIniHeader_FUN_004d8ae0 ; 004d9575
        ;   XREF to: 004d8ae0 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_readIniHeader_FUN_004d8ae0(CIniFile * this_ptr, char * section)
    ADD ESP,0x8                         ; 004d957a
    PUSH ESI                            ; 004d957d
    LEA EAX,[ESP + 0x4]                 ; 004d957e
    PUSH EAX                            ; 004d9582
    CALL engine_ini.cpp_CIniFile_dtor_FUN_004d8a50 ; 004d9583
        ;   XREF to: 004d8a50 (UNCONDITIONAL_CALL)  ; CIniFile * engine_ini.cpp_CIniFile_dtor_FUN_004d8a50(CIniFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004d9588
    ADD ESP,0x204                       ; 004d958b
    POP EBP                             ; 004d9591
    POP EDI                             ; 004d9592
    POP ESI                             ; 004d9593
    RET                                 ; 004d9594
    MOV EDX,0x5c58cc                    ; 004d9595 | = "..\\core\\inivar.cpp"
        ;   Label: LAB_004d9595
    MOV ECX,0x57                        ; 004d959a
    PUSH 0x5c58df                       ; 004d959f | = "Please copy Blair Witch 3 to your har..."
    MOV dword ptr [0x01d71de0],EDX      ; 004d95a4 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 004d95aa | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004d95b0
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004d95b5
    JMP 0x004d8e93                      ; 004d95b8
        ;   XREF to: 004d8e93 (UNCONDITIONAL_JUMP)  ; LAB_004d8e93

