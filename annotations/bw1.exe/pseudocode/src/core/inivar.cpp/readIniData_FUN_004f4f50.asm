; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_inivar_cpp_readIniData_FUN_004f4f50(void)
;
; Local Variables:
; undefined        Stack[-0x210]:1  local_210
;
; XREF[1]:
;   core_main.c_initializeGameSystems_FUN_005032a0 at 00503303
;
; Referenced Globals:
;   TerminatedCString s_core_inivar_cpp_005e5906
;   TerminatedCString s_Please_copy_Nocturne_to_005e5919
;   TerminatedCString s_gamePIXX_005e5941
;   TerminatedCString s_gamePIXY_005e594a
;   TerminatedCString s_gameBPP_005e5953
;   TerminatedCString s_useDirect3D_005e595b
;   TerminatedCString s_useAGPFlag_005e5967
;   TerminatedCString s_rendererDLLPath_005e5972
;   TerminatedCString s_gamma_005e5982
;   TerminatedCString s_heroNumber_005e5988
;   TerminatedCString s_haloMode_005e5993
;   TerminatedCString s_firstTimeFlag_005e599c
;   TerminatedCString s_subtitleMode_005e59aa
;   TerminatedCString s_bloodFlag_005e59b7
;   TerminatedCString s_nudityFlag_005e59c1
;   ... and 82 more
;
; Called Functions:
;   core_game.cpp_FUN_004d0400
;   core_main.c_FUN_005030e0
;   crt_io.c__chmod_FUN_005c1dc0
;   engine_ini.cpp_CIniFile_dtor_FUN_004f4b30
;   engine_ini.cpp_CIniFile_getString_FUN_004f4c00
;   engine_ini.cpp_CIniFile_readIniHeader_FUN_004f4bc0
;   engine_ini.cpp_FUN_004f4b00
;   engine_ini.cpp_FUN_004f4d10
;   sound_sndmain.cpp_readIni_FUN_005760b0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004f4f50
        ;   Label: core_inivar.cpp_readIniData_FUN_004f4f50
    PUSH EDI                            ; 004f4f51
    PUSH EBP                            ; 004f4f52
    SUB ESP,0x204                       ; 004f4f53
    PUSH 0x180                          ; 004f4f59
    PUSH 0x61f010                       ; 004f4f5e | = ".\\system\\nocturne.ini"
    CALL crt_io.c__chmod_FUN_005c1dc0   ; 004f4f63
        ;   XREF to: 005c1dc0 (UNCONDITIONAL_CALL)  ; int crt_io.c__chmod_FUN_005c1dc0(char * path, int mode)
    ADD ESP,0x8                         ; 004f4f68
    TEST EAX,EAX                        ; 004f4f6b
    JNZ 0x004f5738                      ; 004f4f6d
        ;   XREF to: 004f5738 (CONDITIONAL_JUMP)  ; LAB_004f5738
    PUSH EBX                            ; 004f4f73
        ;   Label: LAB_004f4f73
    PUSH 0x0                            ; 004f4f74
    PUSH 0x61f010                       ; 004f4f76 | = ".\\system\\nocturne.ini"
    LEA EAX,[ESP + 0xc]                 ; 004f4f7b
    PUSH EAX                            ; 004f4f7f
    CALL engine_ini.cpp_FUN_004f4b00    ; 004f4f80
        ;   XREF to: 004f4b00 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4b00()
    ADD ESP,0xc                         ; 004f4f85
    PUSH 0x61f038                       ; 004f4f88 | = "Graphics"
    LEA EAX,[ESP + 0x8]                 ; 004f4f8d
    PUSH EAX                            ; 004f4f91
    CALL engine_ini.cpp_CIniFile_readIniHeader_FUN_004f4bc0 ; 004f4f92
        ;   XREF to: 004f4bc0 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_readIniHeader_FUN_004f4bc0(CIniFile * this_ptr, char * section)
    ADD ESP,0x8                         ; 004f4f97
    MOV EBX,dword ptr [0x0061d95c]      ; 004f4f9a | g_CGamePtr
    PUSH EBX                            ; 004f4fa0 | g_CGameInstance
    PUSH 0x5e5941                       ; 004f4fa1 | = "gamePIXX"
    LEA EAX,[ESP + 0xc]                 ; 004f4fa6
    PUSH EAX                            ; 004f4faa
    CALL engine_ini.cpp_FUN_004f4d10    ; 004f4fab
        ;   XREF to: 004f4d10 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d10()
    MOV EAX,[0x0061d95c]                ; 004f4fb0 | g_CGamePtr
    ADD ESP,0xc                         ; 004f4fb5
    ADD EAX,0x4                         ; 004f4fb8
    PUSH EAX                            ; 004f4fbb | g_CGameInstance.game_pixy
    PUSH 0x5e594a                       ; 004f4fbc | = "gamePIXY"
    LEA EAX,[ESP + 0xc]                 ; 004f4fc1
    PUSH EAX                            ; 004f4fc5
    CALL engine_ini.cpp_FUN_004f4d10    ; 004f4fc6
        ;   XREF to: 004f4d10 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d10()
    MOV EAX,[0x0061d95c]                ; 004f4fcb | g_CGamePtr
    ADD ESP,0xc                         ; 004f4fd0
    ADD EAX,0x8                         ; 004f4fd3
    PUSH EAX                            ; 004f4fd6 | g_CGameInstance.game_bpp
    PUSH 0x5e5953                       ; 004f4fd7 | = "gameBPP"
    LEA EAX,[ESP + 0xc]                 ; 004f4fdc
    PUSH EAX                            ; 004f4fe0
    CALL engine_ini.cpp_FUN_004f4d10    ; 004f4fe1
        ;   XREF to: 004f4d10 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d10()
    ADD ESP,0xc                         ; 004f4fe6
    PUSH 0x2c83370                      ; 004f4fe9 | DAT_02c83370
    PUSH 0x5e595b                       ; 004f4fee | = "useDirect3D"
    LEA EAX,[ESP + 0xc]                 ; 004f4ff3
    PUSH EAX                            ; 004f4ff7
    CALL engine_ini.cpp_FUN_004f4d10    ; 004f4ff8
        ;   XREF to: 004f4d10 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d10()
    ADD ESP,0xc                         ; 004f4ffd
    PUSH 0x2c8337c                      ; 004f5000 | DAT_02c8337c
    PUSH 0x5e5967                       ; 004f5005 | = "useAGPFlag"
    LEA EAX,[ESP + 0xc]                 ; 004f500a
    PUSH EAX                            ; 004f500e
    CALL engine_ini.cpp_FUN_004f4d10    ; 004f500f
        ;   XREF to: 004f4d10 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d10()
    ADD ESP,0xc                         ; 004f5014
    PUSH 0xfa                           ; 004f5017
    PUSH 0x6257d0                       ; 004f501c | DAT_006257d0
    PUSH 0x5e5972                       ; 004f5021 | = "rendererDLLPath"
    LEA EAX,[ESP + 0x10]                ; 004f5026
    PUSH EAX                            ; 004f502a
    CALL engine_ini.cpp_CIniFile_getString_FUN_004f4c00 ; 004f502b
        ;   XREF to: 004f4c00 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getString_FUN_004f4c00(CIniFile * this_ptr, char * key, char * output_buffer, int buffer_size)
    MOV EAX,[0x0061d95c]                ; 004f5030 | g_CGamePtr
    ADD ESP,0x10                        ; 004f5035
    ADD EAX,0x240                       ; 004f5038
    PUSH EAX                            ; 004f503d
    PUSH 0x5e5982                       ; 004f503e | = "gamma"
    LEA EAX,[ESP + 0xc]                 ; 004f5043
    PUSH EAX                            ; 004f5047
    CALL engine_ini.cpp_FUN_004f4d10    ; 004f5048
        ;   XREF to: 004f4d10 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d10()
    MOV EAX,[0x0061d95c]                ; 004f504d | g_CGamePtr
    ADD ESP,0xc                         ; 004f5052
    ADD EAX,0xd4                        ; 004f5055
    PUSH EAX                            ; 004f505a | g_CGameInstance.hero_number
    PUSH 0x5e5988                       ; 004f505b | = "heroNumber"
    LEA EAX,[ESP + 0xc]                 ; 004f5060
    PUSH EAX                            ; 004f5064
    CALL engine_ini.cpp_FUN_004f4d10    ; 004f5065
        ;   XREF to: 004f4d10 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d10()
    ADD ESP,0xc                         ; 004f506a
    POP EBX                             ; 004f506d
    MOV EAX,[0x0061d95c]                ; 004f506e | g_CGamePtr
    ADD EAX,0xc                         ; 004f5073
    PUSH EAX                            ; 004f5076 | g_CGameInstance.halo_mode
    PUSH 0x5e5993                       ; 004f5077 | = "haloMode"
    LEA EAX,[ESP + 0x8]                 ; 004f507c
    PUSH EAX                            ; 004f5080
    CALL engine_ini.cpp_FUN_004f4d10    ; 004f5081
        ;   XREF to: 004f4d10 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d10()
    ADD ESP,0xc                         ; 004f5086
    PUSH 0x1d06d68                      ; 004f5089 | DAT_01d06d68
    PUSH 0x5e599c                       ; 004f508e | = "firstTimeFlag"
    LEA EAX,[ESP + 0x8]                 ; 004f5093
    PUSH EAX                            ; 004f5097
    CALL engine_ini.cpp_FUN_004f4d10    ; 004f5098
        ;   XREF to: 004f4d10 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d10()
    MOV EAX,[0x0061d95c]                ; 004f509d | g_CGamePtr
    ADD ESP,0xc                         ; 004f50a2
    ADD EAX,0x10                        ; 004f50a5
    PUSH EAX                            ; 004f50a8 | g_CGameInstance.subtitle_mode
    PUSH 0x5e59aa                       ; 004f50a9 | = "subtitleMode"
    LEA EAX,[ESP + 0x8]                 ; 004f50ae
    PUSH EAX                            ; 004f50b2
    CALL engine_ini.cpp_FUN_004f4d10    ; 004f50b3
        ;   XREF to: 004f4d10 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d10()
    MOV EAX,[0x0061d95c]                ; 004f50b8 | g_CGamePtr
    ADD ESP,0xc                         ; 004f50bd
    ADD EAX,0x14                        ; 004f50c0
    PUSH EAX                            ; 004f50c3 | g_CGameInstance.blood_flag
    PUSH 0x5e59b7                       ; 004f50c4 | = "bloodFlag"
    LEA EAX,[ESP + 0x8]                 ; 004f50c9
    PUSH EAX                            ; 004f50cd
    CALL engine_ini.cpp_FUN_004f4d10    ; 004f50ce
        ;   XREF to: 004f4d10 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d10()
    MOV EAX,[0x0061d95c]                ; 004f50d3 | g_CGamePtr
    ADD ESP,0xc                         ; 004f50d8
    ADD EAX,0x18                        ; 004f50db
    PUSH EAX                            ; 004f50de
    PUSH 0x5e59c1                       ; 004f50df | = "nudityFlag"
    LEA EAX,[ESP + 0x8]                 ; 004f50e4
    PUSH EAX                            ; 004f50e8
    CALL engine_ini.cpp_FUN_004f4d10    ; 004f50e9
        ;   XREF to: 004f4d10 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d10()
    MOV EAX,[0x0061d95c]                ; 004f50ee | g_CGamePtr
    ADD ESP,0xc                         ; 004f50f3
    ADD EAX,0x1c                        ; 004f50f6
    PUSH EAX                            ; 004f50f9
    PUSH 0x5e59cc                       ; 004f50fa | = "foulLanguageFlag"
    LEA EAX,[ESP + 0x8]                 ; 004f50ff
    PUSH EAX                            ; 004f5103
    CALL engine_ini.cpp_FUN_004f4d10    ; 004f5104
        ;   XREF to: 004f4d10 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d10()
    MOV EAX,[0x0061d95c]                ; 004f5109 | g_CGamePtr
    ADD ESP,0xc                         ; 004f510e
    ADD EAX,0x24                        ; 004f5111
    PUSH EAX                            ; 004f5114
    PUSH 0x5e59dd                       ; 004f5115 | = "shadowFlag"
    LEA EAX,[ESP + 0x8]                 ; 004f511a
    PUSH EAX                            ; 004f511e
    CALL engine_ini.cpp_FUN_004f4d10    ; 004f511f
        ;   XREF to: 004f4d10 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d10()
    MOV EAX,[0x0061d95c]                ; 004f5124 | g_CGamePtr
    ADD ESP,0xc                         ; 004f5129
    ADD EAX,0x20                        ; 004f512c
    PUSH EAX                            ; 004f512f | g_CGameInstance.quimby_flag
    PUSH 0x5e59e8                       ; 004f5130 | = "quimbyFlag"
    LEA EAX,[ESP + 0x8]                 ; 004f5135
    PUSH EAX                            ; 004f5139
    CALL engine_ini.cpp_FUN_004f4d10    ; 004f513a
        ;   XREF to: 004f4d10 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d10()
    ADD ESP,0xc                         ; 004f513f
    PUSH 0x1d1f5d4                      ; 004f5142 | DAT_01d1f5d4
    PUSH 0x5e59f3                       ; 004f5147 | = "currentBoard"
    LEA EAX,[ESP + 0x8]                 ; 004f514c
    XOR ESI,ESI                         ; 004f5150
    PUSH EAX                            ; 004f5152
    MOV dword ptr [0x01d1f5d4],ESI      ; 004f5153 | DAT_01d1f5d4
    CALL engine_ini.cpp_FUN_004f4d10    ; 004f5159
        ;   XREF to: 004f4d10 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d10()
    ADD ESP,0xc                         ; 004f515e
    MOV EAX,[0x0061d95c]                ; 004f5161 | g_CGamePtr
    ADD EAX,0xe4                        ; 004f5166
    PUSH EAX                            ; 004f516b | g_CGameInstance.puzzle_difficulty_mode
    PUSH 0x5e5a00                       ; 004f516c | = "puzzleDifficultyMode"
    LEA EAX,[ESP + 0x8]                 ; 004f5171
    PUSH EAX                            ; 004f5175
    CALL engine_ini.cpp_FUN_004f4d10    ; 004f5176
        ;   XREF to: 004f4d10 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d10()
    MOV EAX,[0x0061d95c]                ; 004f517b | g_CGamePtr
    ADD ESP,0xc                         ; 004f5180
    ADD EAX,0xe8                        ; 004f5183
    PUSH EAX                            ; 004f5188 | g_CGameInstance.combat_difficulty_mode
    PUSH 0x5e5a15                       ; 004f5189 | = "combatDifficultyMode"
    LEA EAX,[ESP + 0x8]                 ; 004f518e
    PUSH EAX                            ; 004f5192
    CALL engine_ini.cpp_FUN_004f4d10    ; 004f5193
        ;   XREF to: 004f4d10 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d10()
    ADD ESP,0xc                         ; 004f5198
    PUSH 0x61f030                       ; 004f519b | = "Sound"
    LEA EAX,[ESP + 0x4]                 ; 004f51a0
    PUSH EAX                            ; 004f51a4
    CALL engine_ini.cpp_CIniFile_readIniHeader_FUN_004f4bc0 ; 004f51a5
        ;   XREF to: 004f4bc0 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_readIniHeader_FUN_004f4bc0(CIniFile * this_ptr, char * section)
    ADD ESP,0x8                         ; 004f51aa
    MOV EAX,ESP                         ; 004f51ad
    PUSH EAX                            ; 004f51af
    CALL sound_sndmain.cpp_readIni_FUN_005760b0 ; 004f51b0
        ;   XREF to: 005760b0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_readIni_FUN_005760b0(CIniFile * ini_file)
    ADD ESP,0x4                         ; 004f51b5
    PUSH 0x61f048                       ; 004f51b8 | = "Control"
    LEA EAX,[ESP + 0x4]                 ; 004f51bd
    PUSH EAX                            ; 004f51c1
    CALL engine_ini.cpp_CIniFile_readIniHeader_FUN_004f4bc0 ; 004f51c2
        ;   XREF to: 004f4bc0 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_readIniHeader_FUN_004f4bc0(CIniFile * this_ptr, char * section)
    MOV EAX,[0x0061d95c]                ; 004f51c7 | g_CGamePtr
    ADD ESP,0x8                         ; 004f51cc
    ADD EAX,0xd0                        ; 004f51cf
    PUSH EAX                            ; 004f51d4 | g_CGameInstance.game_control
    PUSH 0x5e5a2a                       ; 004f51d5 | = "gameControl"
    LEA EAX,[ESP + 0x8]                 ; 004f51da
    PUSH EAX                            ; 004f51de
    CALL engine_ini.cpp_FUN_004f4d10    ; 004f51df
        ;   XREF to: 004f4d10 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d10()
    ADD ESP,0xc                         ; 004f51e4
    MOV EDI,dword ptr [0x0061d95c]      ; 004f51e7 | g_CGamePtr
    PUSH EDI                            ; 004f51ed | g_CGameInstance
    CALL core_game.cpp_FUN_004d0400     ; 004f51ee
        ;   XREF to: 004d0400 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_FUN_004d0400()
    MOV EAX,[0x0061d95c]                ; 004f51f3 | g_CGamePtr
    ADD ESP,0x4                         ; 004f51f8
    ADD EAX,0x28                        ; 004f51fb
    PUSH EAX                            ; 004f51fe
    PUSH 0x5e5a36                       ; 004f51ff | = "keyWalk"
    LEA EAX,[ESP + 0x8]                 ; 004f5204
    PUSH EAX                            ; 004f5208
    CALL engine_ini.cpp_FUN_004f4d10    ; 004f5209
        ;   XREF to: 004f4d10 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d10()
    MOV EAX,[0x0061d95c]                ; 004f520e | g_CGamePtr
    ADD ESP,0xc                         ; 004f5213
    ADD EAX,0x2c                        ; 004f5216
    PUSH EAX                            ; 004f5219
    PUSH 0x5e5a3e                       ; 004f521a | = "keyBackup"
    LEA EAX,[ESP + 0x8]                 ; 004f521f
    PUSH EAX                            ; 004f5223
    CALL engine_ini.cpp_FUN_004f4d10    ; 004f5224
        ;   XREF to: 004f4d10 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d10()
    MOV EAX,[0x0061d95c]                ; 004f5229 | g_CGamePtr
    ADD ESP,0xc                         ; 004f522e
    ADD EAX,0x30                        ; 004f5231
    PUSH EAX                            ; 004f5234
    PUSH 0x5e5a48                       ; 004f5235 | = "keyRun"
    LEA EAX,[ESP + 0x8]                 ; 004f523a
    PUSH EAX                            ; 004f523e
    CALL engine_ini.cpp_FUN_004f4d10    ; 004f523f
        ;   XREF to: 004f4d10 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d10()
    MOV EAX,[0x0061d95c]                ; 004f5244 | g_CGamePtr
    ADD ESP,0xc                         ; 004f5249
    ADD EAX,0x34                        ; 004f524c
    PUSH EAX                            ; 004f524f
    PUSH 0x5e5a4f                       ; 004f5250 | = "keyStrafe"
    LEA EAX,[ESP + 0x8]                 ; 004f5255
    PUSH EAX                            ; 004f5259
    CALL engine_ini.cpp_FUN_004f4d10    ; 004f525a
        ;   XREF to: 004f4d10 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d10()
    ADD ESP,0xc                         ; 004f525f
    MOV EAX,[0x0061d95c]                ; 004f5262 | g_CGamePtr
    ADD EAX,0x38                        ; 004f5267
    PUSH EAX                            ; 004f526a
    PUSH 0x5e5a59                       ; 004f526b | = "keyStrafeLeft"
    LEA EAX,[ESP + 0x8]                 ; 004f5270
    PUSH EAX                            ; 004f5274
    CALL engine_ini.cpp_FUN_004f4d10    ; 004f5275
        ;   XREF to: 004f4d10 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d10()
    MOV EAX,[0x0061d95c]                ; 004f527a | g_CGamePtr
    ADD ESP,0xc                         ; 004f527f
    ADD EAX,0x3c                        ; 004f5282
    PUSH EAX                            ; 004f5285
    PUSH 0x5e5a67                       ; 004f5286 | = "keyStrafeRight"
    LEA EAX,[ESP + 0x8]                 ; 004f528b
    PUSH EAX                            ; 004f528f
    CALL engine_ini.cpp_FUN_004f4d10    ; 004f5290
        ;   XREF to: 004f4d10 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d10()
    MOV EAX,[0x0061d95c]                ; 004f5295 | g_CGamePtr
    ADD ESP,0xc                         ; 004f529a
    ADD EAX,0x40                        ; 004f529d
    PUSH EAX                            ; 004f52a0
    PUSH 0x5e5a76                       ; 004f52a1 | = "keyRight"
    LEA EAX,[ESP + 0x8]                 ; 004f52a6
    PUSH EAX                            ; 004f52aa
    CALL engine_ini.cpp_FUN_004f4d10    ; 004f52ab
        ;   XREF to: 004f4d10 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d10()
    MOV EAX,[0x0061d95c]                ; 004f52b0 | g_CGamePtr
    ADD ESP,0xc                         ; 004f52b5
    ADD EAX,0x44                        ; 004f52b8
    PUSH EAX                            ; 004f52bb
    PUSH 0x5e5a7f                       ; 004f52bc | = "keyLeft"
    LEA EAX,[ESP + 0x8]                 ; 004f52c1
    PUSH EAX                            ; 004f52c5
    CALL engine_ini.cpp_FUN_004f4d10    ; 004f52c6
        ;   XREF to: 004f4d10 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d10()
    MOV EAX,[0x0061d95c]                ; 004f52cb | g_CGamePtr
    ADD ESP,0xc                         ; 004f52d0
    ADD EAX,0x48                        ; 004f52d3
    PUSH EAX                            ; 004f52d6
    PUSH 0x5e5a87                       ; 004f52d7 | = "keyFire"
    LEA EAX,[ESP + 0x8]                 ; 004f52dc
    PUSH EAX                            ; 004f52e0
    CALL engine_ini.cpp_FUN_004f4d10    ; 004f52e1
        ;   XREF to: 004f4d10 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d10()
    MOV EAX,[0x0061d95c]                ; 004f52e6 | g_CGamePtr
    ADD ESP,0xc                         ; 004f52eb
    ADD EAX,0x4c                        ; 004f52ee
    PUSH EAX                            ; 004f52f1
    PUSH 0x5e5a8f                       ; 004f52f2 | = "keyUseItem"
    LEA EAX,[ESP + 0x8]                 ; 004f52f7
    PUSH EAX                            ; 004f52fb
    CALL engine_ini.cpp_FUN_004f4d10    ; 004f52fc
        ;   XREF to: 004f4d10 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d10()
    MOV EAX,[0x0061d95c]                ; 004f5301 | g_CGamePtr
    ADD ESP,0xc                         ; 004f5306
    ADD EAX,0x50                        ; 004f5309
    PUSH EAX                            ; 004f530c
    PUSH 0x5e5a9a                       ; 004f530d | = "keyLight"
    LEA EAX,[ESP + 0x8]                 ; 004f5312
    PUSH EAX                            ; 004f5316
    CALL engine_ini.cpp_FUN_004f4d10    ; 004f5317
        ;   XREF to: 004f4d10 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d10()
    MOV EAX,[0x0061d95c]                ; 004f531c | g_CGamePtr
    ADD ESP,0xc                         ; 004f5321
    ADD EAX,0x54                        ; 004f5324
    PUSH EAX                            ; 004f5327
    PUSH 0x5e5aa3                       ; 004f5328 | = "keyInfrared"
    LEA EAX,[ESP + 0x8]                 ; 004f532d
    PUSH EAX                            ; 004f5331
    CALL engine_ini.cpp_FUN_004f4d10    ; 004f5332
        ;   XREF to: 004f4d10 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d10()
    MOV EAX,[0x0061d95c]                ; 004f5337 | g_CGamePtr
    ADD ESP,0xc                         ; 004f533c
    ADD EAX,0x58                        ; 004f533f
    PUSH EAX                            ; 004f5342
    PUSH 0x5e5aaf                       ; 004f5343 | = "keyFieldNotes"
    LEA EAX,[ESP + 0x8]                 ; 004f5348
    PUSH EAX                            ; 004f534c
    CALL engine_ini.cpp_FUN_004f4d10    ; 004f534d
        ;   XREF to: 004f4d10 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d10()
    ADD ESP,0xc                         ; 004f5352
    MOV EAX,[0x0061d95c]                ; 004f5355 | g_CGamePtr
    ADD EAX,0x5c                        ; 004f535a
    PUSH EAX                            ; 004f535d
    PUSH 0x5e5abd                       ; 004f535e | = "keyMap"
    LEA EAX,[ESP + 0x8]                 ; 004f5363
    PUSH EAX                            ; 004f5367
    CALL engine_ini.cpp_FUN_004f4d10    ; 004f5368
        ;   XREF to: 004f4d10 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d10()
    MOV EAX,[0x0061d95c]                ; 004f536d | g_CGamePtr
    ADD ESP,0xc                         ; 004f5372
    ADD EAX,0x60                        ; 004f5375
    PUSH EAX                            ; 004f5378
    PUSH 0x5e5ac4                       ; 004f5379 | = "keyCompass"
    LEA EAX,[ESP + 0x8]                 ; 004f537e
    PUSH EAX                            ; 004f5382
    CALL engine_ini.cpp_FUN_004f4d10    ; 004f5383
        ;   XREF to: 004f4d10 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d10()
    MOV EAX,[0x0061d95c]                ; 004f5388 | g_CGamePtr
    ADD ESP,0xc                         ; 004f538d
    ADD EAX,0x64                        ; 004f5390
    PUSH EAX                            ; 004f5393
    PUSH 0x5e5acf                       ; 004f5394 | = "keySPS"
    LEA EAX,[ESP + 0x8]                 ; 004f5399
    PUSH EAX                            ; 004f539d
    CALL engine_ini.cpp_FUN_004f4d10    ; 004f539e
        ;   XREF to: 004f4d10 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d10()
    MOV EAX,[0x0061d95c]                ; 004f53a3 | g_CGamePtr
    ADD ESP,0xc                         ; 004f53a8
    ADD EAX,0x68                        ; 004f53ab
    PUSH EAX                            ; 004f53ae
    PUSH 0x5e5ad6                       ; 004f53af | = "keyDraw"
    LEA EAX,[ESP + 0x8]                 ; 004f53b4
    PUSH EAX                            ; 004f53b8
    CALL engine_ini.cpp_FUN_004f4d10    ; 004f53b9
        ;   XREF to: 004f4d10 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d10()
    MOV EAX,[0x0061d95c]                ; 004f53be | g_CGamePtr
    ADD ESP,0xc                         ; 004f53c3
    ADD EAX,0x6c                        ; 004f53c6
    PUSH EAX                            ; 004f53c9
    PUSH 0x5e5ade                       ; 004f53ca | = "keyJump"
    LEA EAX,[ESP + 0x8]                 ; 004f53cf
    PUSH EAX                            ; 004f53d3
    CALL engine_ini.cpp_FUN_004f4d10    ; 004f53d4
        ;   XREF to: 004f4d10 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d10()
    MOV EAX,[0x0061d95c]                ; 004f53d9 | g_CGamePtr
    ADD ESP,0xc                         ; 004f53de
    ADD EAX,0x70                        ; 004f53e1
    PUSH EAX                            ; 004f53e4
    PUSH 0x5e5ae6                       ; 004f53e5 | = "keyQuickTurn"
    LEA EAX,[ESP + 0x8]                 ; 004f53ea
    PUSH EAX                            ; 004f53ee
    CALL engine_ini.cpp_FUN_004f4d10    ; 004f53ef
        ;   XREF to: 004f4d10 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d10()
    MOV EAX,[0x0061d95c]                ; 004f53f4 | g_CGamePtr
    ADD ESP,0xc                         ; 004f53f9
    ADD EAX,0x74                        ; 004f53fc
    PUSH EAX                            ; 004f53ff
    PUSH 0x5e5af3                       ; 004f5400 | = "keyPointUp"
    LEA EAX,[ESP + 0x8]                 ; 004f5405
    PUSH EAX                            ; 004f5409
    CALL engine_ini.cpp_FUN_004f4d10    ; 004f540a
        ;   XREF to: 004f4d10 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d10()
    MOV EAX,[0x0061d95c]                ; 004f540f | g_CGamePtr
    ADD ESP,0xc                         ; 004f5414
    ADD EAX,0x78                        ; 004f5417
    PUSH EAX                            ; 004f541a
    PUSH 0x5e5afe                       ; 004f541b | = "keyPointDown"
    LEA EAX,[ESP + 0x8]                 ; 004f5420
    PUSH EAX                            ; 004f5424
    CALL engine_ini.cpp_FUN_004f4d10    ; 004f5425
        ;   XREF to: 004f4d10 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d10()
    MOV EAX,[0x0061d95c]                ; 004f542a | g_CGamePtr
    ADD ESP,0xc                         ; 004f542f
    ADD EAX,0x7c                        ; 004f5432
    PUSH EAX                            ; 004f5435
    PUSH 0x5e5b0b                       ; 004f5436 | = "keyWeapon1"
    LEA EAX,[ESP + 0x8]                 ; 004f543b
    PUSH EAX                            ; 004f543f
    CALL engine_ini.cpp_FUN_004f4d10    ; 004f5440
        ;   XREF to: 004f4d10 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d10()
    ADD ESP,0xc                         ; 004f5445
    MOV EAX,[0x0061d95c]                ; 004f5448 | g_CGamePtr
    ADD EAX,0x80                        ; 004f544d
    PUSH EAX                            ; 004f5452
    PUSH 0x5e5b16                       ; 004f5453 | = "keyWeapon2"
    LEA EAX,[ESP + 0x8]                 ; 004f5458
    PUSH EAX                            ; 004f545c
    CALL engine_ini.cpp_FUN_004f4d10    ; 004f545d
        ;   XREF to: 004f4d10 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d10()
    MOV EAX,[0x0061d95c]                ; 004f5462 | g_CGamePtr
    ADD ESP,0xc                         ; 004f5467
    ADD EAX,0x84                        ; 004f546a
    PUSH EAX                            ; 004f546f
    PUSH 0x5e5b21                       ; 004f5470 | = "keyWeapon3"
    LEA EAX,[ESP + 0x8]                 ; 004f5475
    PUSH EAX                            ; 004f5479
    CALL engine_ini.cpp_FUN_004f4d10    ; 004f547a
        ;   XREF to: 004f4d10 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d10()
    MOV EAX,[0x0061d95c]                ; 004f547f | g_CGamePtr
    ADD ESP,0xc                         ; 004f5484
    ADD EAX,0x88                        ; 004f5487
    PUSH EAX                            ; 004f548c
    PUSH 0x5e5b2c                       ; 004f548d | = "keyWeapon4"
    LEA EAX,[ESP + 0x8]                 ; 004f5492
    PUSH EAX                            ; 004f5496
    CALL engine_ini.cpp_FUN_004f4d10    ; 004f5497
        ;   XREF to: 004f4d10 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d10()
    MOV EAX,[0x0061d95c]                ; 004f549c | g_CGamePtr
    ADD ESP,0xc                         ; 004f54a1
    ADD EAX,0x8c                        ; 004f54a4
    PUSH EAX                            ; 004f54a9
    PUSH 0x5e5b37                       ; 004f54aa | = "keyWeapon5"
    LEA EAX,[ESP + 0x8]                 ; 004f54af
    PUSH EAX                            ; 004f54b3
    CALL engine_ini.cpp_FUN_004f4d10    ; 004f54b4
        ;   XREF to: 004f4d10 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d10()
    MOV EAX,[0x0061d95c]                ; 004f54b9 | g_CGamePtr
    ADD ESP,0xc                         ; 004f54be
    ADD EAX,0x90                        ; 004f54c1
    PUSH EAX                            ; 004f54c6
    PUSH 0x5e5b42                       ; 004f54c7 | = "keyNextWeapon"
    LEA EAX,[ESP + 0x8]                 ; 004f54cc
    PUSH EAX                            ; 004f54d0
    CALL engine_ini.cpp_FUN_004f4d10    ; 004f54d1
        ;   XREF to: 004f4d10 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d10()
    MOV EAX,[0x0061d95c]                ; 004f54d6 | g_CGamePtr
    ADD ESP,0xc                         ; 004f54db
    ADD EAX,0x94                        ; 004f54de
    PUSH EAX                            ; 004f54e3
    PUSH 0x5e5b50                       ; 004f54e4 | = "keyPrevWeapon"
    LEA EAX,[ESP + 0x8]                 ; 004f54e9
    PUSH EAX                            ; 004f54ed
    CALL engine_ini.cpp_FUN_004f4d10    ; 004f54ee
        ;   XREF to: 004f4d10 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d10()
    MOV EAX,[0x0061d95c]                ; 004f54f3 | g_CGamePtr
    ADD ESP,0xc                         ; 004f54f8
    ADD EAX,0x98                        ; 004f54fb
    PUSH EAX                            ; 004f5500
    PUSH 0x5e5b5e                       ; 004f5501 | = "keyNextItem"
    LEA EAX,[ESP + 0x8]                 ; 004f5506
    PUSH EAX                            ; 004f550a
    CALL engine_ini.cpp_FUN_004f4d10    ; 004f550b
        ;   XREF to: 004f4d10 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d10()
    MOV EAX,[0x0061d95c]                ; 004f5510 | g_CGamePtr
    ADD ESP,0xc                         ; 004f5515
    ADD EAX,0x9c                        ; 004f5518
    PUSH EAX                            ; 004f551d
    PUSH 0x5e5b6a                       ; 004f551e | = "keyPrevItem"
    LEA EAX,[ESP + 0x8]                 ; 004f5523
    PUSH EAX                            ; 004f5527
    CALL engine_ini.cpp_FUN_004f4d10    ; 004f5528
        ;   XREF to: 004f4d10 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d10()
    MOV EAX,[0x0061d95c]                ; 004f552d | g_CGamePtr
    ADD ESP,0xc                         ; 004f5532
    ADD EAX,0xa0                        ; 004f5535
    PUSH EAX                            ; 004f553a
    PUSH 0x5e5b76                       ; 004f553b | = "keyItemDesc"
    LEA EAX,[ESP + 0x8]                 ; 004f5540
    PUSH EAX                            ; 004f5544
    CALL engine_ini.cpp_FUN_004f4d10    ; 004f5545
        ;   XREF to: 004f4d10 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d10()
    ADD ESP,0xc                         ; 004f554a
    MOV EAX,[0x0061d95c]                ; 004f554d | g_CGamePtr
    ADD EAX,0xa4                        ; 004f5552
    PUSH EAX                            ; 004f5557
    PUSH 0x5e5b82                       ; 004f5558 | = "keyNextAmmo"
    LEA EAX,[ESP + 0x8]                 ; 004f555d
    PUSH EAX                            ; 004f5561
    CALL engine_ini.cpp_FUN_004f4d10    ; 004f5562
        ;   XREF to: 004f4d10 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d10()
    MOV EAX,[0x0061d95c]                ; 004f5567 | g_CGamePtr
    ADD ESP,0xc                         ; 004f556c
    ADD EAX,0xa8                        ; 004f556f
    PUSH EAX                            ; 004f5574
    PUSH 0x5e5b8e                       ; 004f5575 | = "invertMouseYAxis"
    LEA EAX,[ESP + 0x8]                 ; 004f557a
    PUSH EAX                            ; 004f557e
    CALL engine_ini.cpp_FUN_004f4d10    ; 004f557f
        ;   XREF to: 004f4d10 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d10()
    MOV EAX,[0x0061d95c]                ; 004f5584 | g_CGamePtr
    ADD ESP,0xc                         ; 004f5589
    ADD EAX,0xac                        ; 004f558c
    PUSH EAX                            ; 004f5591 | g_CGameInstance.always_run
    PUSH 0x5e5b9f                       ; 004f5592 | = "alwaysRun"
    LEA EAX,[ESP + 0x8]                 ; 004f5597
    PUSH EAX                            ; 004f559b
    CALL engine_ini.cpp_FUN_004f4d10    ; 004f559c
        ;   XREF to: 004f4d10 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d10()
    MOV EAX,[0x0061d95c]                ; 004f55a1 | g_CGamePtr
    ADD ESP,0xc                         ; 004f55a6
    ADD EAX,0xb0                        ; 004f55a9
    PUSH EAX                            ; 004f55ae
    PUSH 0x5e5ba9                       ; 004f55af | = "xMouseSensitivity"
    LEA EAX,[ESP + 0x8]                 ; 004f55b4
    PUSH EAX                            ; 004f55b8
    CALL engine_ini.cpp_FUN_004f4d10    ; 004f55b9
        ;   XREF to: 004f4d10 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d10()
    MOV EAX,[0x0061d95c]                ; 004f55be | g_CGamePtr
    ADD ESP,0xc                         ; 004f55c3
    ADD EAX,0xb4                        ; 004f55c6
    PUSH EAX                            ; 004f55cb
    PUSH 0x5e5bbb                       ; 004f55cc | = "yMouseSensitivity"
    LEA EAX,[ESP + 0x8]                 ; 004f55d1
    PUSH EAX                            ; 004f55d5
    CALL engine_ini.cpp_FUN_004f4d10    ; 004f55d6
        ;   XREF to: 004f4d10 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d10()
    MOV EAX,[0x0061d95c]                ; 004f55db | g_CGamePtr
    ADD ESP,0xc                         ; 004f55e0
    ADD EAX,0xb8                        ; 004f55e3
    PUSH EAX                            ; 004f55e8
    PUSH 0x5e5bcd                       ; 004f55e9 | = "xCenter"
    LEA EAX,[ESP + 0x8]                 ; 004f55ee
    PUSH EAX                            ; 004f55f2
    CALL engine_ini.cpp_FUN_004f4d10    ; 004f55f3
        ;   XREF to: 004f4d10 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d10()
    MOV EAX,[0x0061d95c]                ; 004f55f8 | g_CGamePtr
    ADD ESP,0xc                         ; 004f55fd
    ADD EAX,0xbc                        ; 004f5600
    PUSH EAX                            ; 004f5605
    PUSH 0x5e5bd5                       ; 004f5606 | = "yCenter"
    LEA EAX,[ESP + 0x8]                 ; 004f560b
    PUSH EAX                            ; 004f560f
    CALL engine_ini.cpp_FUN_004f4d10    ; 004f5610
        ;   XREF to: 004f4d10 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d10()
    MOV EAX,[0x0061d95c]                ; 004f5615 | g_CGamePtr
    ADD ESP,0xc                         ; 004f561a
    ADD EAX,0xc0                        ; 004f561d
    PUSH EAX                            ; 004f5622
    PUSH 0x5e5bdd                       ; 004f5623 | = "xStickMin"
    LEA EAX,[ESP + 0x8]                 ; 004f5628
    PUSH EAX                            ; 004f562c
    CALL engine_ini.cpp_FUN_004f4d10    ; 004f562d
        ;   XREF to: 004f4d10 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d10()
    MOV EAX,[0x0061d95c]                ; 004f5632 | g_CGamePtr
    ADD ESP,0xc                         ; 004f5637
    ADD EAX,0xc4                        ; 004f563a
    PUSH EAX                            ; 004f563f
    PUSH 0x5e5be7                       ; 004f5640 | = "xStickMax"
    LEA EAX,[ESP + 0x8]                 ; 004f5645
    PUSH EAX                            ; 004f5649
    CALL engine_ini.cpp_FUN_004f4d10    ; 004f564a
        ;   XREF to: 004f4d10 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d10()
    ADD ESP,0xc                         ; 004f564f
    MOV EAX,[0x0061d95c]                ; 004f5652 | g_CGamePtr
    ADD EAX,0xc8                        ; 004f5657
    PUSH EAX                            ; 004f565c
    PUSH 0x5e5bf1                       ; 004f565d | = "yStickMin"
    LEA EAX,[ESP + 0x8]                 ; 004f5662
    PUSH EAX                            ; 004f5666
    CALL engine_ini.cpp_FUN_004f4d10    ; 004f5667
        ;   XREF to: 004f4d10 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d10()
    MOV EAX,[0x0061d95c]                ; 004f566c | g_CGamePtr
    ADD ESP,0xc                         ; 004f5671
    ADD EAX,0xcc                        ; 004f5674
    PUSH EAX                            ; 004f5679
    PUSH 0x5e5bfb                       ; 004f567a | = "yStickMax"
    LEA EAX,[ESP + 0x8]                 ; 004f567f
    PUSH EAX                            ; 004f5683
    CALL engine_ini.cpp_FUN_004f4d10    ; 004f5684
        ;   XREF to: 004f4d10 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d10()
    MOV EAX,[0x0061d95c]                ; 004f5689 | g_CGamePtr
    ADD ESP,0xc                         ; 004f568e
    ADD EAX,0xd8                        ; 004f5691
    PUSH EAX                            ; 004f5696
    PUSH 0x5e5c05                       ; 004f5697 | = "aimMode"
    LEA EAX,[ESP + 0x8]                 ; 004f569c
    PUSH EAX                            ; 004f56a0
    CALL engine_ini.cpp_FUN_004f4d10    ; 004f56a1
        ;   XREF to: 004f4d10 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d10()
    MOV EAX,[0x0061d95c]                ; 004f56a6 | g_CGamePtr
    ADD ESP,0xc                         ; 004f56ab
    ADD EAX,0xdc                        ; 004f56ae
    PUSH EAX                            ; 004f56b3
    PUSH 0x5e5c0d                       ; 004f56b4 | = "autoUseHealth"
    LEA EAX,[ESP + 0x8]                 ; 004f56b9
    PUSH EAX                            ; 004f56bd
    CALL engine_ini.cpp_FUN_004f4d10    ; 004f56be
        ;   XREF to: 004f4d10 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d10()
    ADD ESP,0xc                         ; 004f56c3
    PUSH 0x61f080                       ; 004f56c6 | = "Debug"
    LEA EAX,[ESP + 0x4]                 ; 004f56cb
    PUSH EAX                            ; 004f56cf
    CALL engine_ini.cpp_CIniFile_readIniHeader_FUN_004f4bc0 ; 004f56d0
        ;   XREF to: 004f4bc0 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_readIniHeader_FUN_004f4bc0(CIniFile * this_ptr, char * section)
    ADD ESP,0x8                         ; 004f56d5
    MOV EBP,dword ptr [0x00611100]      ; 004f56d8 | g_CConsolePtr
    PUSH EBP                            ; 004f56de | g_CConsoleInstance
    PUSH 0x5e5c1b                       ; 004f56df | = "logConsoleFlag"
    LEA EAX,[ESP + 0x8]                 ; 004f56e4
    PUSH EAX                            ; 004f56e8
    CALL engine_ini.cpp_FUN_004f4d10    ; 004f56e9
        ;   XREF to: 004f4d10 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d10()
    MOV EAX,[0x0061d95c]                ; 004f56ee | g_CGamePtr
    ADD ESP,0xc                         ; 004f56f3
    ADD EAX,0x230                       ; 004f56f6
    PUSH EAX                            ; 004f56fb | g_CGameInstance.head_of_horror_cheat
    PUSH 0x5e5c2a                       ; 004f56fc | = "headOfHorrorCheat"
    LEA EAX,[ESP + 0x8]                 ; 004f5701
    PUSH EAX                            ; 004f5705
    CALL engine_ini.cpp_FUN_004f4d10    ; 004f5706
        ;   XREF to: 004f4d10 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004f4d10()
    ADD ESP,0xc                         ; 004f570b
    PUSH 0x61f088                       ; 004f570e | = "Editor"
    LEA EAX,[ESP + 0x4]                 ; 004f5713
    PUSH EAX                            ; 004f5717
    CALL engine_ini.cpp_CIniFile_readIniHeader_FUN_004f4bc0 ; 004f5718
        ;   XREF to: 004f4bc0 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_readIniHeader_FUN_004f4bc0(CIniFile * this_ptr, char * section)
    ADD ESP,0x8                         ; 004f571d
    PUSH ESI                            ; 004f5720
    LEA EAX,[ESP + 0x4]                 ; 004f5721
    PUSH EAX                            ; 004f5725
    CALL engine_ini.cpp_CIniFile_dtor_FUN_004f4b30 ; 004f5726
        ;   XREF to: 004f4b30 (UNCONDITIONAL_CALL)  ; CIniFile * engine_ini.cpp_CIniFile_dtor_FUN_004f4b30(CIniFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004f572b
    ADD ESP,0x204                       ; 004f572e
    POP EBP                             ; 004f5734
    POP EDI                             ; 004f5735
    POP ESI                             ; 004f5736
    RET                                 ; 004f5737
    MOV EDX,0x5e5906                    ; 004f5738 | = "..\\core\\inivar.cpp"
        ;   Label: LAB_004f5738
    MOV ECX,0x57                        ; 004f573d
    PUSH 0x5e5919                       ; 004f5742 | = "Please copy Nocturne to your hard drive"
    MOV dword ptr [0x01d1d400],EDX      ; 004f5747 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 004f574d | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004f5753
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004f5758
    JMP 0x004f4f73                      ; 004f575b
        ;   XREF to: 004f4f73 (UNCONDITIONAL_JUMP)  ; LAB_004f4f73

