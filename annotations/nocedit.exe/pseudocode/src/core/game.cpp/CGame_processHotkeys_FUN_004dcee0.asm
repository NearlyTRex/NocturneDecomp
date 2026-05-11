; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_processHotkeys_FUN_004dcee0(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_game.cpp_CGame_runGameSession_FUN_004daf80 at 004db37d
;
; Referenced Globals:
;   TerminatedCString s_SPOOKHOUSE_0062b8bd
;   TerminatedCString s_quicksavedgame_noc_0062b8c8
;   TerminatedCString s_Quick_Save_0062b8db
;   TerminatedCString s_rb_0062b8e6
;   TerminatedCString s_quicksavedgame_noc_0062b8e9
;   TerminatedCString s_save_0062b8fc
;   TerminatedCString s_core_game_cpp_0062b901
;   TerminatedCString s_Restore_quick_saved_game_0062b912
;   TerminatedCString s_quicksavedgame_noc_0062b92c
;   undefined4 s_uicksavedgame.noc_0062b92d
;   undefined4 s_icksavedgame.noc_0062b92e
;   undefined4 s_cksavedgame.noc_0062b92f
;   TerminatedCString s_No_quicked_saved_game_to_0062b93f
;   TerminatedCString s_SPOOKHOUSE_0062b95d
;   TerminatedCString s_Gamma_f_0062b968
;   ... and 23 more
;
; Called Functions:
;   core_game.cpp_CGame_displayMessage_FUN_004d7f20
;   core_game.cpp_CGame_promptLoadGame_FUN_004e36f0
;   core_game.cpp_CGame_saveGame_FUN_004e0cd0
;   core_script.cpp_CScript_resetDialogState_FUN_005602b0
;   core_set.cpp_CDemonSet_reinitCamera_FUN_0056b7e0
;   core_set.cpp_CDemonSet_setCameraAmbientValue_FUN_00570e20
;   core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50
;   core_set.cpp_CDemonSet_setGamma_FUN_00570d60
;   core_setdir.cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0
;   core_sound.cpp_CSound_init_FUN_005b2dd0
;   core_sound.cpp_CSound_shutdown_FUN_005b2f70
;   crt_env.c_getenv_FUN_006013f0
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   engine_dosio.c_getFile_FUN_00481a50
;   shape_edittool.cpp_CEditorTools_showDestructiveActionConfirmDialog_FUN_0049f060
;   ... and 4 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dcee0
        ;   Label: core_game.cpp_CGame_processHotkeys_FUN_004dcee0
    PUSH ESI                            ; 004dcee1
    PUSH EDI                            ; 004dcee2
    PUSH EBP                            ; 004dcee3
    MOV EBP,ESP                         ; 004dcee4
    SUB ESP,0x20c                       ; 004dcee6
    NOP                                 ; 004dceec
    NOP                                 ; 004dceed
    NOP                                 ; 004dceee
    MOV EBX,dword ptr [EBP + 0x14]      ; 004dceef
    CMP dword ptr [0x02d828d0],0x0      ; 004dcef2 | g_ModalDialogActive
    JNZ 0x004dd33f                      ; 004dcef9
        ;   XREF to: 004dd33f (CONDITIONAL_JUMP)  ; LAB_004dd33f
    CMP dword ptr [EBX + 0xcc],0x0      ; 004dceff
    JZ 0x004dd346                       ; 004dcf06
        ;   XREF to: 004dd346 (CONDITIONAL_JUMP)  ; LAB_004dd346
    CMP dword ptr [EBX + 0x210],0x0     ; 004dcf0c
        ;   Label: LAB_004dcf0c
    JZ 0x004dcf6b                       ; 004dcf13
        ;   XREF to: 004dcf6b (CONDITIONAL_JUMP)  ; LAB_004dcf6b
    PUSH 0x1d                           ; 004dcf15
    MOV EAX,[0x0067cf44]                ; 004dcf17 | g_CKeysPtr
    PUSH EAX                            ; 004dcf1c | g_CKeysInstance
    MOV EDI,dword ptr [EAX]             ; 004dcf1d | g_CKeysInstance
    CALL dword ptr [EDI]                ; 004dcf1f
    ADD ESP,0x8                         ; 004dcf21
    TEST EAX,EAX                        ; 004dcf24
    JZ 0x004dcf6b                       ; 004dcf26
        ;   XREF to: 004dcf6b (CONDITIONAL_JUMP)  ; LAB_004dcf6b
    PUSH 0x15                           ; 004dcf28
    MOV EAX,[0x0067cf44]                ; 004dcf2a | g_CKeysPtr
    PUSH EAX                            ; 004dcf2f | g_CKeysInstance
    MOV EDI,dword ptr [EAX]             ; 004dcf30 | g_CKeysInstance
    CALL dword ptr [EDI + 0x4]          ; 004dcf32
    ADD ESP,0x8                         ; 004dcf35
    TEST EAX,EAX                        ; 004dcf38
    JZ 0x004dcf6b                       ; 004dcf3a
        ;   XREF to: 004dcf6b (CONDITIONAL_JUMP)  ; LAB_004dcf6b
    MOV EAX,0x1                         ; 004dcf3c
    MOV ECX,dword ptr [EBX + 0x1fc]     ; 004dcf41
    SUB EAX,ECX                         ; 004dcf47
    MOV dword ptr [EBX + 0x1fc],EAX     ; 004dcf49
    JZ 0x004dd441                       ; 004dcf4f
        ;   XREF to: 004dd441 (CONDITIONAL_JUMP)  ; LAB_004dd441
    MOV EDX,dword ptr [0x00681ef8]      ; 004dcf55 | g_CSoundInstance | g_CSoundPtr
    XOR EAX,EAX                         ; 004dcf5b
    PUSH EDX                            ; 004dcf5d | g_CSoundInstance
    MOV [0x02cf6a94],EAX                ; 004dcf5e | g_MouseButtonFlags
    CALL core_sound.cpp_CSound_shutdown_FUN_005b2f70 ; 004dcf63
        ;   XREF to: 005b2f70 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_shutdown_FUN_005b2f70(CSound * this_ptr)
    ADD ESP,0x4                         ; 004dcf68
        ;   Label: LAB_004dcf68
    CMP dword ptr [EBX + 0x210],0x0     ; 004dcf6b
        ;   Label: LAB_004dcf6b
    JZ 0x004dd452                       ; 004dcf72
        ;   XREF to: 004dd452 (CONDITIONAL_JUMP)  ; LAB_004dd452
    PUSH 0x1d                           ; 004dcf78
        ;   Label: LAB_004dcf78
    MOV EAX,[0x0067cf44]                ; 004dcf7a | g_CKeysPtr
    PUSH EAX                            ; 004dcf7f | g_CKeysInstance
    MOV EDI,dword ptr [EAX]             ; 004dcf80 | g_CKeysInstance
    CALL dword ptr [EDI]                ; 004dcf82
    ADD ESP,0x8                         ; 004dcf84
    TEST EAX,EAX                        ; 004dcf87
    JZ 0x004dcfb2                       ; 004dcf89
        ;   XREF to: 004dcfb2 (CONDITIONAL_JUMP)  ; LAB_004dcfb2
    PUSH 0x2c                           ; 004dcf8b
    MOV EAX,[0x0067cf44]                ; 004dcf8d | g_CKeysPtr
    PUSH EAX                            ; 004dcf92 | g_CKeysInstance
    MOV EDI,dword ptr [EAX]             ; 004dcf93 | g_CKeysInstance
    CALL dword ptr [EDI + 0x4]          ; 004dcf95
    ADD ESP,0x8                         ; 004dcf98
    TEST EAX,EAX                        ; 004dcf9b
    JZ 0x004dcfb2                       ; 004dcf9d
        ;   XREF to: 004dcfb2 (CONDITIONAL_JUMP)  ; LAB_004dcfb2
    MOV EAX,0x1                         ; 004dcf9f
    MOV ESI,dword ptr [EBX + 0x1e4]     ; 004dcfa4
    SUB EAX,ESI                         ; 004dcfaa
    MOV dword ptr [EBX + 0x1e4],EAX     ; 004dcfac
    PUSH 0x38                           ; 004dcfb2
        ;   Label: LAB_004dcfb2
    MOV EAX,[0x0067cf44]                ; 004dcfb4 | g_CKeysPtr
    PUSH EAX                            ; 004dcfb9 | g_CKeysInstance
    MOV EDI,dword ptr [EAX]             ; 004dcfba | g_CKeysInstance
    CALL dword ptr [EDI]                ; 004dcfbc
    ADD ESP,0x8                         ; 004dcfbe
    TEST EAX,EAX                        ; 004dcfc1
    JZ 0x004dcfed                       ; 004dcfc3
        ;   XREF to: 004dcfed (CONDITIONAL_JUMP)  ; LAB_004dcfed
    PUSH 0x32                           ; 004dcfc5
    MOV EAX,[0x0067cf44]                ; 004dcfc7 | g_CKeysPtr
    PUSH EAX                            ; 004dcfcc | g_CKeysInstance
    MOV EDI,dword ptr [EAX]             ; 004dcfcd | g_CKeysInstance
    CALL dword ptr [EDI + 0x4]          ; 004dcfcf
    ADD ESP,0x8                         ; 004dcfd2
    TEST EAX,EAX                        ; 004dcfd5
    JZ 0x004dcfed                       ; 004dcfd7
        ;   XREF to: 004dcfed (CONDITIONAL_JUMP)  ; LAB_004dcfed
    CMP dword ptr [0x02f43978],0x0      ; 004dcfd9 | INT_02f43978
    SETZ AL                             ; 004dcfe0
    AND EAX,0xff                        ; 004dcfe3
    MOV [0x02f43978],EAX                ; 004dcfe8 | INT_02f43978
    CMP dword ptr [EBX + 0x1dc],0x0     ; 004dcfed
        ;   Label: LAB_004dcfed
    JZ 0x004dd46c                       ; 004dcff4
        ;   XREF to: 004dd46c (CONDITIONAL_JUMP)  ; LAB_004dd46c
    PUSH 0x1d                           ; 004dcffa
        ;   Label: LAB_004dcffa
    MOV EAX,[0x0067cf44]                ; 004dcffc | g_CKeysPtr
    PUSH EAX                            ; 004dd001 | g_CKeysInstance
    MOV EDI,dword ptr [EAX]             ; 004dd002 | g_CKeysInstance
    CALL dword ptr [EDI]                ; 004dd004
    ADD ESP,0x8                         ; 004dd006
    TEST EAX,EAX                        ; 004dd009
    JZ 0x004dd047                       ; 004dd00b
        ;   XREF to: 004dd047 (CONDITIONAL_JUMP)  ; LAB_004dd047
    PUSH 0x32                           ; 004dd00d
    MOV EAX,[0x0067cf44]                ; 004dd00f | g_CKeysPtr
    PUSH EAX                            ; 004dd014 | g_CKeysInstance
    MOV EDI,dword ptr [EAX]             ; 004dd015 | g_CKeysInstance
    CALL dword ptr [EDI + 0x4]          ; 004dd017
    ADD ESP,0x8                         ; 004dd01a
    TEST EAX,EAX                        ; 004dd01d
    JZ 0x004dd047                       ; 004dd01f
        ;   XREF to: 004dd047 (CONDITIONAL_JUMP)  ; LAB_004dd047
    CALL sound_sndmain.cpp_isSoundEnabled_FUN_005a96b0 ; 004dd021
        ;   XREF to: 005a96b0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSoundEnabled_FUN_005a96b0()
        ;   Label: LAB_004dd021
    TEST EAX,EAX                        ; 004dd026
    JZ 0x004dd489                       ; 004dd028
        ;   XREF to: 004dd489 (CONDITIONAL_JUMP)  ; LAB_004dd489
    PUSH 0x0                            ; 004dd02e
    CALL sound_sndmain.cpp_setSoundEnabled_FUN_005a96c0 ; 004dd030
        ;   XREF to: 005a96c0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_setSoundEnabled_FUN_005a96c0(int enable)
    ADD ESP,0x4                         ; 004dd035
    MOV ECX,dword ptr [0x00681ef8]      ; 004dd038 | g_CSoundInstance | g_CSoundPtr
    PUSH ECX                            ; 004dd03e | g_CSoundInstance
    CALL core_sound.cpp_CSound_init_FUN_005b2dd0 ; 004dd03f
        ;   XREF to: 005b2dd0 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_init_FUN_005b2dd0(CSound * this_ptr)
    ADD ESP,0x4                         ; 004dd044
        ;   Label: LAB_004dd044
    CMP dword ptr [EBX + 0x210],0x0     ; 004dd047
        ;   Label: LAB_004dd047
    JZ 0x004dd0af                       ; 004dd04e
        ;   XREF to: 004dd0af (CONDITIONAL_JUMP)  ; LAB_004dd0af
    PUSH 0x1d                           ; 004dd050
    MOV EAX,[0x0067cf44]                ; 004dd052 | g_CKeysPtr
    PUSH EAX                            ; 004dd057 | g_CKeysInstance
    MOV EDI,dword ptr [EAX]             ; 004dd058 | g_CKeysInstance
    CALL dword ptr [EDI]                ; 004dd05a
    ADD ESP,0x8                         ; 004dd05c
    TEST EAX,EAX                        ; 004dd05f
    JZ 0x004dd0af                       ; 004dd061
        ;   XREF to: 004dd0af (CONDITIONAL_JUMP)  ; LAB_004dd0af
    PUSH 0x11                           ; 004dd063
    MOV EAX,[0x0067cf44]                ; 004dd065 | g_CKeysPtr
    PUSH EAX                            ; 004dd06a | g_CKeysInstance
    MOV EDI,dword ptr [EAX]             ; 004dd06b | g_CKeysInstance
    CALL dword ptr [EDI + 0x4]          ; 004dd06d
    ADD ESP,0x8                         ; 004dd070
    TEST EAX,EAX                        ; 004dd073
    JZ 0x004dd0af                       ; 004dd075
        ;   XREF to: 004dd0af (CONDITIONAL_JUMP)  ; LAB_004dd0af
    MOV EDI,dword ptr [0x00679398]      ; 004dd077 | g_WindowHeight
    CMP EDI,0x1e0                       ; 004dd07d
    JL 0x004dd0af                       ; 004dd083
        ;   XREF to: 004dd0af (CONDITIONAL_JUMP)  ; LAB_004dd0af
    MOV EAX,0x1                         ; 004dd085
    MOV EDX,dword ptr [EBX + 0x278]     ; 004dd08a
    SUB EAX,EDX                         ; 004dd090
    MOV dword ptr [EBX + 0x278],EAX     ; 004dd092
    JNZ 0x004dd4a4                      ; 004dd098
        ;   XREF to: 004dd4a4 (CONDITIONAL_JUMP)  ; LAB_004dd4a4
    PUSH EDI                            ; 004dd09e
    PUSH EAX                            ; 004dd09f
    PUSH EAX                            ; 004dd0a0
    MOV EAX,[0x006810c8]                ; 004dd0a1 | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EAX                            ; 004dd0a6 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_reinitCamera_FUN_0056b7e0 ; 004dd0a7
        ;   XREF to: 0056b7e0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_reinitCamera_FUN_0056b7e0(CDemonSet * this_ptr, int clear_enabled, int is_clearing, int screen_height)
        ;   Label: LAB_004dd0a7
    ADD ESP,0x10                        ; 004dd0ac
    CMP dword ptr [EBX + 0x210],0x0     ; 004dd0af
        ;   Label: LAB_004dd0af
    JZ 0x004dd0c5                       ; 004dd0b6
        ;   XREF to: 004dd0c5 (CONDITIONAL_JUMP)  ; LAB_004dd0c5
    CMP dword ptr [0x02d831b0],0x0      ; 004dd0b8 | g_MovieRecordingArmed
    JZ 0x004dd4b9                       ; 004dd0bf
        ;   XREF to: 004dd4b9 (CONDITIONAL_JUMP)  ; LAB_004dd4b9
    PUSH 0x1d                           ; 004dd0c5
        ;   Label: LAB_004dd0c5
    MOV EAX,[0x0067cf44]                ; 004dd0c7 | g_CKeysPtr
    PUSH EAX                            ; 004dd0cc | g_CKeysInstance
    MOV EDI,dword ptr [EAX]             ; 004dd0cd | g_CKeysInstance
    CALL dword ptr [EDI]                ; 004dd0cf
    ADD ESP,0x8                         ; 004dd0d1
    TEST EAX,EAX                        ; 004dd0d4
    JZ 0x004dd0fa                       ; 004dd0d6
        ;   XREF to: 004dd0fa (CONDITIONAL_JUMP)  ; LAB_004dd0fa
    PUSH 0x1f                           ; 004dd0d8
    MOV EAX,[0x0067cf44]                ; 004dd0da | g_CKeysPtr
    PUSH EAX                            ; 004dd0df | g_CKeysInstance
    MOV EDI,dword ptr [EAX]             ; 004dd0e0 | g_CKeysInstance
    CALL dword ptr [EDI + 0x4]          ; 004dd0e2
    ADD ESP,0x8                         ; 004dd0e5
    TEST EAX,EAX                        ; 004dd0e8
    JZ 0x004dd0fa                       ; 004dd0ea
        ;   XREF to: 004dd0fa (CONDITIONAL_JUMP)  ; LAB_004dd0fa
    MOV EAX,dword ptr [EBX + 0x228]     ; 004dd0ec
    TEST EAX,EAX                        ; 004dd0f2
    JZ 0x004dd512                       ; 004dd0f4
        ;   XREF to: 004dd512 (CONDITIONAL_JUMP)  ; LAB_004dd512
    PUSH 0x3c                           ; 004dd0fa
        ;   Label: LAB_004dd0fa
    MOV EAX,[0x0067cf44]                ; 004dd0fc | g_CKeysPtr
    PUSH EAX                            ; 004dd101 | g_CKeysInstance
    MOV EDI,dword ptr [EAX]             ; 004dd102 | g_CKeysInstance
    CALL dword ptr [EDI]                ; 004dd104
    ADD ESP,0x8                         ; 004dd106
    TEST EAX,EAX                        ; 004dd109
    JZ 0x004dd11b                       ; 004dd10b
        ;   XREF to: 004dd11b (CONDITIONAL_JUMP)  ; LAB_004dd11b
    MOV EDX,dword ptr [EBX + 0x228]     ; 004dd10d
    TEST EDX,EDX                        ; 004dd113
    JZ 0x004dd521                       ; 004dd115
        ;   XREF to: 004dd521 (CONDITIONAL_JUMP)  ; LAB_004dd521
    PUSH 0x3d                           ; 004dd11b
        ;   Label: LAB_004dd11b
    MOV EAX,[0x0067cf44]                ; 004dd11d | g_CKeysPtr
    PUSH EAX                            ; 004dd122 | g_CKeysInstance
    MOV EDI,dword ptr [EAX]             ; 004dd123 | g_CKeysInstance
    CALL dword ptr [EDI]                ; 004dd125
    ADD ESP,0x8                         ; 004dd127
    TEST EAX,EAX                        ; 004dd12a
    JZ 0x004dd137                       ; 004dd12c
        ;   XREF to: 004dd137 (CONDITIONAL_JUMP)  ; LAB_004dd137
    PUSH EBX                            ; 004dd12e
    CALL core_game.cpp_CGame_promptLoadGame_FUN_004e36f0 ; 004dd12f
        ;   XREF to: 004e36f0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_promptLoadGame_FUN_004e36f0(CGame * this_ptr)
    ADD ESP,0x4                         ; 004dd134
    PUSH 0x40                           ; 004dd137
        ;   Label: LAB_004dd137
    MOV EAX,[0x0067cf44]                ; 004dd139 | g_CKeysPtr
    PUSH EAX                            ; 004dd13e | g_CKeysInstance
    MOV EDI,dword ptr [EAX]             ; 004dd13f | g_CKeysInstance
    CALL dword ptr [EDI]                ; 004dd141
    ADD ESP,0x8                         ; 004dd143
    TEST EAX,EAX                        ; 004dd146
    JZ 0x004dd157                       ; 004dd148
        ;   XREF to: 004dd157 (CONDITIONAL_JUMP)  ; LAB_004dd157
    CMP dword ptr [EBX + 0x228],0x0     ; 004dd14a
    JZ 0x004dd530                       ; 004dd151
        ;   XREF to: 004dd530 (CONDITIONAL_JUMP)  ; LAB_004dd530
    CMP dword ptr [EBX + 0x1dc],0x0     ; 004dd157
        ;   Label: LAB_004dd157
    JZ 0x004dd55f                       ; 004dd15e
        ;   XREF to: 004dd55f (CONDITIONAL_JUMP)  ; LAB_004dd55f
    PUSH 0x3b                           ; 004dd164
        ;   Label: LAB_004dd164
    MOV EAX,[0x0067cf44]                ; 004dd166 | g_CKeysPtr
    PUSH EAX                            ; 004dd16b | g_CKeysInstance
    MOV EDI,dword ptr [EAX]             ; 004dd16c | g_CKeysInstance
    CALL dword ptr [EDI + 0x4]          ; 004dd16e
    ADD ESP,0x8                         ; 004dd171
    TEST EAX,EAX                        ; 004dd174
    JZ 0x004dd18d                       ; 004dd176
        ;   XREF to: 004dd18d (CONDITIONAL_JUMP)  ; LAB_004dd18d
    CMP dword ptr [EBX + 0xac8],0x0     ; 004dd178
    SETZ AL                             ; 004dd17f
    AND EAX,0xff                        ; 004dd182
    MOV dword ptr [EBX + 0xac8],EAX     ; 004dd187
    CMP dword ptr [EBX + 0x210],0x0     ; 004dd18d
        ;   Label: LAB_004dd18d
    JZ 0x004dd61e                       ; 004dd194
        ;   XREF to: 004dd61e (CONDITIONAL_JUMP)  ; LAB_004dd61e
    PUSH 0xf                            ; 004dd19a
        ;   Label: LAB_004dd19a
    MOV EAX,[0x0067cf44]                ; 004dd19c | g_CKeysPtr
    PUSH EAX                            ; 004dd1a1 | g_CKeysInstance
    MOV EDI,dword ptr [EAX]             ; 004dd1a2 | g_CKeysInstance
    CALL dword ptr [EDI + 0x4]          ; 004dd1a4
    ADD ESP,0x8                         ; 004dd1a7
    TEST EAX,EAX                        ; 004dd1aa
    JZ 0x004dd1c3                       ; 004dd1ac
        ;   XREF to: 004dd1c3 (CONDITIONAL_JUMP)  ; LAB_004dd1c3
    CMP dword ptr [EBX + 0x280],0x0     ; 004dd1ae
    SETZ AL                             ; 004dd1b5
    AND EAX,0xff                        ; 004dd1b8
    MOV dword ptr [EBX + 0x280],EAX     ; 004dd1bd
    CMP dword ptr [EBX + 0x1fc],0x0     ; 004dd1c3
        ;   Label: LAB_004dd1c3
    JZ 0x004dd638                       ; 004dd1ca
        ;   XREF to: 004dd638 (CONDITIONAL_JUMP)  ; LAB_004dd638
    PUSH 0x57                           ; 004dd1d0
        ;   Label: LAB_004dd1d0
    MOV EAX,[0x0067cf44]                ; 004dd1d2 | g_CKeysPtr
    PUSH EAX                            ; 004dd1d7 | g_CKeysInstance
    MOV EDI,dword ptr [EAX]             ; 004dd1d8 | g_CKeysInstance
    CALL dword ptr [EDI + 0x4]          ; 004dd1da
    ADD ESP,0x8                         ; 004dd1dd
    TEST EAX,EAX                        ; 004dd1e0
    JZ 0x004dd25b                       ; 004dd1e2
        ;   XREF to: 004dd25b (CONDITIONAL_JUMP)  ; LAB_004dd25b
    MOV ESI,dword ptr [EBX + 0x224]     ; 004dd1e4
    SUB ESI,0x400                       ; 004dd1ea
    MOV dword ptr [EBX + 0x224],ESI     ; 004dd1f0
    CMP ESI,0x8000                      ; 004dd1f6
    JGE 0x004dd208                      ; 004dd1fc
        ;   XREF to: 004dd208 (CONDITIONAL_JUMP)  ; LAB_004dd208
    MOV dword ptr [EBX + 0x224],0x8000  ; 004dd1fe
    FILD dword ptr [EBX + 0x224]        ; 004dd208
        ;   Label: LAB_004dd208
    FMUL double ptr [0x0062b985]        ; 004dd20e | DOUBLE_0062b985
    SUB ESP,0x8                         ; 004dd214
    FSTP double ptr [ESP]               ; 004dd217
    PUSH 0x62b968                       ; 004dd21a | = "Gamma : %f"
    LEA EAX,[EBP + 0xfffffef8]          ; 004dd21f
    NOP                                 ; 004dd225
    PUSH EAX                            ; 004dd226
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004dd227
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004dd22c
    LEA EAX,[EBP + 0xfffffef8]          ; 004dd22f
    NOP                                 ; 004dd235
    PUSH 0x3f800000                     ; 004dd236
    PUSH EAX                            ; 004dd23b
    PUSH EBX                            ; 004dd23c
    CALL core_game.cpp_CGame_displayMessage_FUN_004d7f20 ; 004dd23d
        ;   XREF to: 004d7f20 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004d7f20(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004dd242
    MOV EAX,dword ptr [EBX + 0x224]     ; 004dd245
    PUSH EAX                            ; 004dd24b
    MOV EDX,dword ptr [0x006810c8]      ; 004dd24c | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EDX                            ; 004dd252 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_setGamma_FUN_00570d60 ; 004dd253
        ;   XREF to: 00570d60 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setGamma_FUN_00570d60(CDemonSet * this_ptr, int gamma)
    ADD ESP,0x8                         ; 004dd258
    PUSH 0x58                           ; 004dd25b
        ;   Label: LAB_004dd25b
    MOV EAX,[0x0067cf44]                ; 004dd25d | g_CKeysPtr
    PUSH EAX                            ; 004dd262 | g_CKeysInstance
    MOV EDI,dword ptr [EAX]             ; 004dd263 | g_CKeysInstance
    CALL dword ptr [EDI + 0x4]          ; 004dd265
    ADD ESP,0x8                         ; 004dd268
    TEST EAX,EAX                        ; 004dd26b
    JZ 0x004dd2df                       ; 004dd26d
        ;   XREF to: 004dd2df (CONDITIONAL_JUMP)  ; LAB_004dd2df
    MOV ECX,dword ptr [EBX + 0x224]     ; 004dd26f
    ADD ECX,0x400                       ; 004dd275
    MOV dword ptr [EBX + 0x224],ECX     ; 004dd27b
    CMP ECX,0x10000                     ; 004dd281
    JLE 0x004dd293                      ; 004dd287
        ;   XREF to: 004dd293 (CONDITIONAL_JUMP)  ; LAB_004dd293
    MOV dword ptr [EBX + 0x224],0x10000 ; 004dd289
    FILD dword ptr [EBX + 0x224]        ; 004dd293
        ;   Label: LAB_004dd293
    FMUL double ptr [0x0062b985]        ; 004dd299 | DOUBLE_0062b985
    SUB ESP,0x8                         ; 004dd29f
    FSTP double ptr [ESP]               ; 004dd2a2
    PUSH 0x62b973                       ; 004dd2a5 | = "Gamma : %f"
    LEA EAX,[ESP + 0x10]                ; 004dd2aa
    PUSH EAX                            ; 004dd2ae
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004dd2af
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004dd2b4
    LEA EAX,[ESP + 0x4]                 ; 004dd2b7
    PUSH 0x3f800000                     ; 004dd2bb
    PUSH EAX                            ; 004dd2c0
    PUSH EBX                            ; 004dd2c1
    CALL core_game.cpp_CGame_displayMessage_FUN_004d7f20 ; 004dd2c2
        ;   XREF to: 004d7f20 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004d7f20(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004dd2c7
    MOV EDI,dword ptr [EBX + 0x224]     ; 004dd2ca
    PUSH EDI                            ; 004dd2d0
    MOV EAX,[0x006810c8]                ; 004dd2d1 | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EAX                            ; 004dd2d6 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_setGamma_FUN_00570d60 ; 004dd2d7
        ;   XREF to: 00570d60 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setGamma_FUN_00570d60(CDemonSet * this_ptr, int gamma)
    ADD ESP,0x8                         ; 004dd2dc
    CMP dword ptr [EBX + 0x210],0x0     ; 004dd2df
        ;   Label: LAB_004dd2df
    JZ 0x004dd332                       ; 004dd2e6
        ;   XREF to: 004dd332 (CONDITIONAL_JUMP)  ; LAB_004dd332
    PUSH 0x1d                           ; 004dd2e8
    MOV EAX,[0x0067cf44]                ; 004dd2ea | g_CKeysPtr
    PUSH EAX                            ; 004dd2ef | g_CKeysInstance
    MOV EDI,dword ptr [EAX]             ; 004dd2f0 | g_CKeysInstance
    CALL dword ptr [EDI]                ; 004dd2f2
    ADD ESP,0x8                         ; 004dd2f4
    TEST EAX,EAX                        ; 004dd2f7
    JZ 0x004dd332                       ; 004dd2f9
        ;   XREF to: 004dd332 (CONDITIONAL_JUMP)  ; LAB_004dd332
    PUSH 0x23                           ; 004dd2fb
    MOV EAX,[0x0067cf44]                ; 004dd2fd | g_CKeysPtr
    PUSH EAX                            ; 004dd302 | g_CKeysInstance
    MOV EDI,dword ptr [EAX]             ; 004dd303 | g_CKeysInstance
    CALL dword ptr [EDI + 0x4]          ; 004dd305
    ADD ESP,0x8                         ; 004dd308
    TEST EAX,EAX                        ; 004dd30b
    JZ 0x004dd332                       ; 004dd30d
        ;   XREF to: 004dd332 (CONDITIONAL_JUMP)  ; LAB_004dd332
    MOV EAX,[0x006810c8]                ; 004dd30f | g_CDemonSetPtr
    MOV EAX,dword ptr [EAX + 0x15aea0]  ; 004dd314 | g_CDemonSetInstance.camera_enabled_flag
    TEST EAX,EAX                        ; 004dd31a
    SETZ AL                             ; 004dd31c
    MOV EDI,EAX                         ; 004dd31f
    MOV EAX,[0x006810c8]                ; 004dd321 | g_CDemonSetInstance | g_CDemonSetPtr
    AND EDI,0xff                        ; 004dd326
    MOV dword ptr [EAX + 0x15aea0],EDI  ; 004dd32c | g_CDemonSetInstance.camera_enabled_flag
    CMP dword ptr [EBX + 0x210],0x0     ; 004dd332
        ;   Label: LAB_004dd332
    JNZ 0x004dd726                      ; 004dd339
        ;   XREF to: 004dd726 (CONDITIONAL_JUMP)  ; LAB_004dd726
    MOV ESP,EBP                         ; 004dd33f
        ;   Label: LAB_004dd33f
    POP EBP                             ; 004dd341
    POP EDI                             ; 004dd342
    POP ESI                             ; 004dd343
    POP EBX                             ; 004dd344
    RET                                 ; 004dd345
    CMP dword ptr [EBX + 0x210],0x0     ; 004dd346
        ;   Label: LAB_004dd346
    JZ 0x004dd3b1                       ; 004dd34d
        ;   XREF to: 004dd3b1 (CONDITIONAL_JUMP)  ; LAB_004dd3b1
    PUSH 0x1d                           ; 004dd34f
    MOV EAX,[0x0067cf44]                ; 004dd351 | g_CKeysPtr
    PUSH EAX                            ; 004dd356 | g_CKeysInstance
    MOV EDI,dword ptr [EAX]             ; 004dd357 | g_CKeysInstance
    CALL dword ptr [EDI]                ; 004dd359
    ADD ESP,0x8                         ; 004dd35b
    TEST EAX,EAX                        ; 004dd35e
    JZ 0x004dd3b1                       ; 004dd360
        ;   XREF to: 004dd3b1 (CONDITIONAL_JUMP)  ; LAB_004dd3b1
    PUSH 0x12                           ; 004dd362
    MOV EAX,[0x0067cf44]                ; 004dd364 | g_CKeysPtr
    PUSH EAX                            ; 004dd369 | g_CKeysInstance
    MOV EDI,dword ptr [EAX]             ; 004dd36a | g_CKeysInstance
    CALL dword ptr [EDI + 0x4]          ; 004dd36c
    ADD ESP,0x8                         ; 004dd36f
    TEST EAX,EAX                        ; 004dd372
    JZ 0x004dd3b1                       ; 004dd374
        ;   XREF to: 004dd3b1 (CONDITIONAL_JUMP)  ; LAB_004dd3b1
    MOV EAX,0x1                         ; 004dd376
    MOV EDI,dword ptr [EBX + 0x274]     ; 004dd37b
    SUB EAX,EDI                         ; 004dd381
    MOV dword ptr [EBX + 0x274],EAX     ; 004dd383
    JZ 0x004dd3b1                       ; 004dd389
        ;   XREF to: 004dd3b1 (CONDITIONAL_JUMP)  ; LAB_004dd3b1
    MOV EAX,[0x00680d50]                ; 004dd38b | g_CScriptInstance | g_CScriptPtr
    PUSH 0x1                            ; 004dd390
    MOV EDX,dword ptr [EAX + 0xc]       ; 004dd392 | g_CScriptInstance.focus_actor
    PUSH EDX                            ; 004dd395
    MOV ECX,dword ptr [0x006810c8]      ; 004dd396 | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH ECX                            ; 004dd39c | g_CDemonSetInstance
    CALL core_setdir.cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0 ; 004dd39d
        ;   XREF to: 005751d0 (UNCONDITIONAL_CALL)  ; int core_setdir.cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0(CDemonSet * this_ptr, CDemonActor * actor, int force_evaluation_mode)
    MOV EAX,[0x00680d50]                ; 004dd3a2 | g_CScriptPtr
    ADD ESP,0xc                         ; 004dd3a7
    MOV dword ptr [EAX + 0x10],0x0      ; 004dd3aa | g_CScriptInstance.focus_actor_changed
    MOV ESI,dword ptr [EBX + 0x274]     ; 004dd3b1
        ;   Label: LAB_004dd3b1
    TEST ESI,ESI                        ; 004dd3b7
    JNZ 0x004dcf0c                      ; 004dd3b9
        ;   XREF to: 004dcf0c (CONDITIONAL_JUMP)  ; LAB_004dcf0c
    PUSH 0x2e                           ; 004dd3bf
    MOV EAX,[0x0067cf44]                ; 004dd3c1 | g_CKeysPtr
    PUSH EAX                            ; 004dd3c6 | g_CKeysInstance
    MOV EDI,dword ptr [EAX]             ; 004dd3c7 | g_CKeysInstance
    CALL dword ptr [EDI + 0x4]          ; 004dd3c9
    ADD ESP,0x8                         ; 004dd3cc
    TEST EAX,EAX                        ; 004dd3cf
    JZ 0x004dcf0c                       ; 004dd3d1
        ;   XREF to: 004dcf0c (CONDITIONAL_JUMP)  ; LAB_004dcf0c
    PUSH 0x2a                           ; 004dd3d7
    MOV EAX,[0x0067cf44]                ; 004dd3d9 | g_CKeysPtr
    PUSH EAX                            ; 004dd3de | g_CKeysInstance
    MOV EDI,dword ptr [EAX]             ; 004dd3df | g_CKeysInstance
    CALL dword ptr [EDI]                ; 004dd3e1
    ADD ESP,0x8                         ; 004dd3e3
    TEST EAX,EAX                        ; 004dd3e6
    JZ 0x004dd423                       ; 004dd3e8
        ;   XREF to: 004dd423 (CONDITIONAL_JUMP)  ; LAB_004dd423
    MOV ECX,dword ptr [EBX + 0x270]     ; 004dd3ea
    DEC ECX                             ; 004dd3f0
    MOV dword ptr [EBX + 0x270],ECX     ; 004dd3f1
    TEST ECX,ECX                        ; 004dd3f7
    JGE 0x004dd409                      ; 004dd3f9
        ;   XREF to: 004dd409 (CONDITIONAL_JUMP)  ; LAB_004dd409
    MOV EAX,[0x006810c8]                ; 004dd3fb | g_CDemonSetPtr
    MOV EAX,dword ptr [EAX]             ; 004dd400 | g_CDemonSetInstance
    DEC EAX                             ; 004dd402
    MOV dword ptr [EBX + 0x270],EAX     ; 004dd403
    MOV EDI,dword ptr [EBX + 0x270]     ; 004dd409
        ;   Label: LAB_004dd409
    PUSH EDI                            ; 004dd40f
    MOV EAX,[0x006810c8]                ; 004dd410 | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EAX                            ; 004dd415 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 ; 004dd416
        ;   XREF to: 0056ae50 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50(CDemonSet * this_ptr, int index)
    ADD ESP,0x8                         ; 004dd41b
    JMP 0x004dcf0c                      ; 004dd41e
        ;   XREF to: 004dcf0c (UNCONDITIONAL_JUMP)  ; LAB_004dcf0c
    MOV EDI,dword ptr [EBX + 0x270]     ; 004dd423
        ;   Label: LAB_004dd423
    INC EDI                             ; 004dd429
    MOV EAX,[0x006810c8]                ; 004dd42a | g_CDemonSetPtr
    MOV dword ptr [EBX + 0x270],EDI     ; 004dd42f
    CMP EDI,dword ptr [EAX]             ; 004dd435 | g_CDemonSetInstance
    JL 0x004dd409                       ; 004dd437
        ;   XREF to: 004dd409 (CONDITIONAL_JUMP)  ; LAB_004dd409
    MOV dword ptr [EBX + 0x270],ESI     ; 004dd439
    JMP 0x004dd409                      ; 004dd43f
        ;   XREF to: 004dd409 (UNCONDITIONAL_JUMP)  ; LAB_004dd409
    MOV EDI,dword ptr [0x00681ef8]      ; 004dd441 | g_CSoundPtr
        ;   Label: LAB_004dd441
    PUSH EDI                            ; 004dd447 | g_CSoundInstance
    CALL core_sound.cpp_CSound_init_FUN_005b2dd0 ; 004dd448
        ;   XREF to: 005b2dd0 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_init_FUN_005b2dd0(CSound * this_ptr)
    JMP 0x004dcf68                      ; 004dd44d
        ;   XREF to: 004dcf68 (UNCONDITIONAL_JUMP)  ; LAB_004dcf68
    PUSH 0x62b8bd                       ; 004dd452 | = "SPOOKHOUSE"
        ;   Label: LAB_004dd452
    CALL crt_env.c_getenv_FUN_006013f0  ; 004dd457
        ;   XREF to: 006013f0 (UNCONDITIONAL_CALL)  ; char * crt_env.c_getenv_FUN_006013f0(char * name)
    ADD ESP,0x4                         ; 004dd45c
    TEST EAX,EAX                        ; 004dd45f
    JNZ 0x004dcf78                      ; 004dd461
        ;   XREF to: 004dcf78 (CONDITIONAL_JUMP)  ; LAB_004dcf78
    JMP 0x004dcfb2                      ; 004dd467
        ;   XREF to: 004dcfb2 (UNCONDITIONAL_JUMP)  ; LAB_004dcfb2
    PUSH 0x3f                           ; 004dd46c
        ;   Label: LAB_004dd46c
    MOV EAX,[0x0067cf44]                ; 004dd46e | g_CKeysPtr
    PUSH EAX                            ; 004dd473 | g_CKeysInstance
    MOV EDI,dword ptr [EAX]             ; 004dd474 | g_CKeysInstance
    CALL dword ptr [EDI + 0x4]          ; 004dd476
    ADD ESP,0x8                         ; 004dd479
    TEST EAX,EAX                        ; 004dd47c
    JNZ 0x004dd021                      ; 004dd47e
        ;   XREF to: 004dd021 (CONDITIONAL_JUMP)  ; LAB_004dd021
    JMP 0x004dcffa                      ; 004dd484
        ;   XREF to: 004dcffa (UNCONDITIONAL_JUMP)  ; LAB_004dcffa
    MOV EDX,dword ptr [0x00681ef8]      ; 004dd489 | g_CSoundInstance | g_CSoundPtr
        ;   Label: LAB_004dd489
    PUSH EDX                            ; 004dd48f | g_CSoundInstance
    CALL core_sound.cpp_CSound_shutdown_FUN_005b2f70 ; 004dd490
        ;   XREF to: 005b2f70 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_shutdown_FUN_005b2f70(CSound * this_ptr)
    ADD ESP,0x4                         ; 004dd495
    PUSH 0x1                            ; 004dd498
    CALL sound_sndmain.cpp_setSoundEnabled_FUN_005a96c0 ; 004dd49a
        ;   XREF to: 005a96c0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_setSoundEnabled_FUN_005a96c0(int enable)
    JMP 0x004dd044                      ; 004dd49f
        ;   XREF to: 004dd044 (UNCONDITIONAL_JUMP)  ; LAB_004dd044
    PUSH 0xf0                           ; 004dd4a4
        ;   Label: LAB_004dd4a4
    PUSH 0x1                            ; 004dd4a9
    PUSH 0x1                            ; 004dd4ab
    MOV ESI,dword ptr [0x006810c8]      ; 004dd4ad | g_CDemonSetPtr
    PUSH ESI                            ; 004dd4b3 | g_CDemonSetInstance
    JMP 0x004dd0a7                      ; 004dd4b4
        ;   XREF to: 004dd0a7 (UNCONDITIONAL_JUMP)  ; LAB_004dd0a7
    PUSH 0x1d                           ; 004dd4b9
        ;   Label: LAB_004dd4b9
    MOV EAX,[0x0067cf44]                ; 004dd4bb | g_CKeysPtr
    PUSH EAX                            ; 004dd4c0 | g_CKeysInstance
    MOV EDI,dword ptr [EAX]             ; 004dd4c1 | g_CKeysInstance
    CALL dword ptr [EDI]                ; 004dd4c3
    ADD ESP,0x8                         ; 004dd4c5
    TEST EAX,EAX                        ; 004dd4c8
    JZ 0x004dd0c5                       ; 004dd4ca
        ;   XREF to: 004dd0c5 (CONDITIONAL_JUMP)  ; LAB_004dd0c5
    PUSH 0x2f                           ; 004dd4d0
    MOV EAX,[0x0067cf44]                ; 004dd4d2 | g_CKeysPtr
    PUSH EAX                            ; 004dd4d7 | g_CKeysInstance
    MOV EDI,dword ptr [EAX]             ; 004dd4d8 | g_CKeysInstance
    CALL dword ptr [EDI + 0x4]          ; 004dd4da
    ADD ESP,0x8                         ; 004dd4dd
    TEST EAX,EAX                        ; 004dd4e0
    JZ 0x004dd0c5                       ; 004dd4e2
        ;   XREF to: 004dd0c5 (CONDITIONAL_JUMP)  ; LAB_004dd0c5
    CMP dword ptr [0x00679398],0x1e0    ; 004dd4e8 | g_WindowHeight
    JL 0x004dd0c5                       ; 004dd4f2
        ;   XREF to: 004dd0c5 (CONDITIONAL_JUMP)  ; LAB_004dd0c5
    CMP dword ptr [EBX + 0x1e8],0x0     ; 004dd4f8
    SETZ AL                             ; 004dd4ff
    AND EAX,0xff                        ; 004dd502
    MOV dword ptr [EBX + 0x1e8],EAX     ; 004dd507
    JMP 0x004dd0c5                      ; 004dd50d
        ;   XREF to: 004dd0c5 (UNCONDITIONAL_JUMP)  ; LAB_004dd0c5
    PUSH EAX                            ; 004dd512
        ;   Label: LAB_004dd512
    PUSH EBX                            ; 004dd513
    CALL core_game.cpp_CGame_saveGame_FUN_004e0cd0 ; 004dd514
        ;   XREF to: 004e0cd0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_saveGame_FUN_004e0cd0(CGame * this_ptr, char * save_filename)
    ADD ESP,0x8                         ; 004dd519
    JMP 0x004dd0fa                      ; 004dd51c
        ;   XREF to: 004dd0fa (UNCONDITIONAL_JUMP)  ; LAB_004dd0fa
    PUSH EDX                            ; 004dd521
        ;   Label: LAB_004dd521
    PUSH EBX                            ; 004dd522
    CALL core_game.cpp_CGame_saveGame_FUN_004e0cd0 ; 004dd523
        ;   XREF to: 004e0cd0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_saveGame_FUN_004e0cd0(CGame * this_ptr, char * save_filename)
    ADD ESP,0x8                         ; 004dd528
    JMP 0x004dd11b                      ; 004dd52b
        ;   XREF to: 004dd11b (UNCONDITIONAL_JUMP)  ; LAB_004dd11b
    PUSH 0x62b8c8                       ; 004dd530 | = "quicksavedgame.noc"
        ;   Label: LAB_004dd530
    PUSH EBX                            ; 004dd535
    CALL core_game.cpp_CGame_saveGame_FUN_004e0cd0 ; 004dd536
        ;   XREF to: 004e0cd0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_saveGame_FUN_004e0cd0(CGame * this_ptr, char * save_filename)
    ADD ESP,0x8                         ; 004dd53b
    PUSH 0x40000000                     ; 004dd53e
    PUSH 0x62b8db                       ; 004dd543 | = "Quick Save"
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004dd548
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004dd54d
    PUSH EAX                            ; 004dd550
    PUSH EBX                            ; 004dd551
    CALL core_game.cpp_CGame_displayMessage_FUN_004d7f20 ; 004dd552
        ;   XREF to: 004d7f20 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004d7f20(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004dd557
    JMP 0x004dd157                      ; 004dd55a
        ;   XREF to: 004dd157 (UNCONDITIONAL_JUMP)  ; LAB_004dd157
    PUSH 0x43                           ; 004dd55f
        ;   Label: LAB_004dd55f
    MOV EAX,[0x0067cf44]                ; 004dd561 | g_CKeysPtr
    PUSH EAX                            ; 004dd566 | g_CKeysInstance
    MOV EDI,dword ptr [EAX]             ; 004dd567 | g_CKeysInstance
    CALL dword ptr [EDI]                ; 004dd569
    ADD ESP,0x8                         ; 004dd56b
    TEST EAX,EAX                        ; 004dd56e
    JZ 0x004dd164                       ; 004dd570
        ;   XREF to: 004dd164 (CONDITIONAL_JUMP)  ; LAB_004dd164
    PUSH 0x62b8e6                       ; 004dd576 | = "rb"
    PUSH 0x62b8e9                       ; 004dd57b | = "quicksavedgame.noc"
    PUSH 0x62b8fc                       ; 004dd580 | = "save"
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 004dd585
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 004dd58a
    TEST EAX,EAX                        ; 004dd58d
    JZ 0x004dd5fd                       ; 004dd58f
        ;   XREF to: 004dd5fd (CONDITIONAL_JUMP)  ; LAB_004dd5fd
    PUSH 0x975                          ; 004dd591
    PUSH 0x62b901                       ; 004dd596 | = "..\\core\\game.cpp"
    PUSH EAX                            ; 004dd59b
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004dd59c
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004dd5a1
    PUSH 0x62b912                       ; 004dd5a4 | = "Restore quick saved game?"
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004dd5a9
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004dd5ae
    PUSH EAX                            ; 004dd5b1
    MOV EDI,dword ptr [0x00678a60]      ; 004dd5b2 | g_CEditorToolsPtr
    PUSH EDI                            ; 004dd5b8 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showDestructiveActionConfirmDialog_FUN_0049f060 ; 004dd5b9
        ;   XREF to: 0049f060 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showDestructiveActionConfirmDialog_FUN_0049f060(CEditorTools * this_ptr, char * format_string)
    ADD ESP,0x8                         ; 004dd5be
    TEST EAX,EAX                        ; 004dd5c1
    JZ 0x004dd164                       ; 004dd5c3
        ;   XREF to: 004dd164 (CONDITIONAL_JUMP)  ; LAB_004dd164
    MOV ESI,0x62b92c                    ; 004dd5c9 | = "quicksavedgame.noc"
    LEA EDI,[EBX + 0x9c8]               ; 004dd5ce
    MOV dword ptr [EBX + 0x9c4],0x1     ; 004dd5d4
    PUSH EDI                            ; 004dd5de
    MOV AL,byte ptr [ESI]               ; 004dd5df | = "quicksavedgame.noc" | s_icksavedgame.noc_0062b92e
        ;   Label: LAB_004dd5df
    MOV byte ptr [EDI],AL               ; 004dd5e1
    CMP AL,0x0                          ; 004dd5e3
    JZ 0x004dd5f7                       ; 004dd5e5
        ;   XREF to: 004dd5f7 (CONDITIONAL_JUMP)  ; LAB_004dd5f7
    MOV AL,byte ptr [ESI + 0x1]         ; 004dd5e7 | s_uicksavedgame.noc_0062b92d | s_cksavedgame.noc_0062b92f
    ADD ESI,0x2                         ; 004dd5ea
    MOV byte ptr [EDI + 0x1],AL         ; 004dd5ed
    ADD EDI,0x2                         ; 004dd5f0
    CMP AL,0x0                          ; 004dd5f3
    JNZ 0x004dd5df                      ; 004dd5f5
        ;   XREF to: 004dd5df (CONDITIONAL_JUMP)  ; LAB_004dd5df
    POP EDI                             ; 004dd5f7
        ;   Label: LAB_004dd5f7
    JMP 0x004dd164                      ; 004dd5f8
        ;   XREF to: 004dd164 (UNCONDITIONAL_JUMP)  ; LAB_004dd164
    PUSH 0x40000000                     ; 004dd5fd
        ;   Label: LAB_004dd5fd
    PUSH 0x62b93f                       ; 004dd602 | = "No quicked saved game to load"
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004dd607
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004dd60c
    PUSH EAX                            ; 004dd60f
    PUSH EBX                            ; 004dd610
    CALL core_game.cpp_CGame_displayMessage_FUN_004d7f20 ; 004dd611
        ;   XREF to: 004d7f20 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayMessage_FUN_004d7f20(CGame * this_ptr, char * message, float duration)
    ADD ESP,0xc                         ; 004dd616
    JMP 0x004dd164                      ; 004dd619
        ;   XREF to: 004dd164 (UNCONDITIONAL_JUMP)  ; LAB_004dd164
    PUSH 0x62b95d                       ; 004dd61e | = "SPOOKHOUSE"
        ;   Label: LAB_004dd61e
    CALL crt_env.c_getenv_FUN_006013f0  ; 004dd623
        ;   XREF to: 006013f0 (UNCONDITIONAL_CALL)  ; char * crt_env.c_getenv_FUN_006013f0(char * name)
    ADD ESP,0x4                         ; 004dd628
    TEST EAX,EAX                        ; 004dd62b
    JNZ 0x004dd19a                      ; 004dd62d
        ;   XREF to: 004dd19a (CONDITIONAL_JUMP)  ; LAB_004dd19a
    JMP 0x004dd1c3                      ; 004dd633
        ;   XREF to: 004dd1c3 (UNCONDITIONAL_JUMP)  ; LAB_004dd1c3
    MOV EAX,[0x00680d50]                ; 004dd638 | g_CScriptPtr
        ;   Label: LAB_004dd638
    CMP dword ptr [EAX + 0x18],0x2      ; 004dd63d | g_CScriptInstance.script_state
    JZ 0x004dd697                       ; 004dd641
        ;   XREF to: 004dd697 (CONDITIONAL_JUMP)  ; LAB_004dd697
    PUSH 0x3f                           ; 004dd643
    MOV EAX,[0x0067cf44]                ; 004dd645 | g_CKeysPtr
    PUSH EAX                            ; 004dd64a | g_CKeysInstance
    MOV EDI,dword ptr [EAX]             ; 004dd64b | g_CKeysInstance
    CALL dword ptr [EDI + 0x4]          ; 004dd64d
    ADD ESP,0x8                         ; 004dd650
    TEST EAX,EAX                        ; 004dd653
    JZ 0x004dd697                       ; 004dd655
        ;   XREF to: 004dd697 (CONDITIONAL_JUMP)  ; LAB_004dd697
    PUSH 0xf0                           ; 004dd657
    PUSH 0x0                            ; 004dd65c
    PUSH 0x0                            ; 004dd65e
    MOV ECX,dword ptr [0x006810c8]      ; 004dd660 | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH ECX                            ; 004dd666 | g_CDemonSetInstance
    MOV dword ptr [EBX + 0x278],0x1     ; 004dd667
    CALL core_set.cpp_CDemonSet_reinitCamera_FUN_0056b7e0 ; 004dd671
        ;   XREF to: 0056b7e0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_reinitCamera_FUN_0056b7e0(CDemonSet * this_ptr, int clear_enabled, int is_clearing, int screen_height)
    MOV EAX,[0x00680d50]                ; 004dd676 | g_CScriptPtr
    MOV dword ptr [EBX + 0x1dc],0x1     ; 004dd67b
    MOV ESI,dword ptr [EAX + 0x18]      ; 004dd685 | g_CScriptInstance.script_state
    ADD ESP,0x10                        ; 004dd688
    CMP ESI,0x1                         ; 004dd68b
    JNZ 0x004dd6fb                      ; 004dd68e
        ;   XREF to: 004dd6fb (CONDITIONAL_JUMP)  ; LAB_004dd6fb
    MOV dword ptr [EAX + 0x18],0x0      ; 004dd690 | g_CScriptInstance.script_state
    CMP dword ptr [EBX + 0x1dc],0x0     ; 004dd697
        ;   Label: LAB_004dd697
    JZ 0x004dd1d0                       ; 004dd69e
        ;   XREF to: 004dd1d0 (CONDITIONAL_JUMP)  ; LAB_004dd1d0
    MOV EAX,[0x00680d50]                ; 004dd6a4 | g_CScriptPtr
    CMP dword ptr [EAX + 0x18],0x2      ; 004dd6a9 | g_CScriptInstance.script_state
    JZ 0x004dd704                       ; 004dd6ad
        ;   XREF to: 004dd704 (CONDITIONAL_JUMP)  ; LAB_004dd704
    PUSH 0x3f                           ; 004dd6af
        ;   Label: LAB_004dd6af
    MOV EAX,[0x0067cf44]                ; 004dd6b1 | g_CKeysPtr
    PUSH EAX                            ; 004dd6b6 | g_CKeysInstance
    MOV EDI,dword ptr [EAX]             ; 004dd6b7 | g_CKeysInstance
    CALL dword ptr [EDI + 0x4]          ; 004dd6b9
    ADD ESP,0x8                         ; 004dd6bc
    TEST EAX,EAX                        ; 004dd6bf
    JZ 0x004dd6cf                       ; 004dd6c1
        ;   XREF to: 004dd6cf (CONDITIONAL_JUMP)  ; LAB_004dd6cf
    MOV EAX,[0x00680d50]                ; 004dd6c3 | g_CScriptPtr
    MOV dword ptr [EAX + 0x18],0x0      ; 004dd6c8 | g_CScriptInstance.script_state
    PUSH 0x43                           ; 004dd6cf
        ;   Label: LAB_004dd6cf
    MOV EAX,[0x0067cf44]                ; 004dd6d1 | g_CKeysPtr
    PUSH EAX                            ; 004dd6d6 | g_CKeysInstance
    MOV EDI,dword ptr [EAX]             ; 004dd6d7 | g_CKeysInstance
    CALL dword ptr [EDI + 0x4]          ; 004dd6d9
    ADD ESP,0x8                         ; 004dd6dc
    TEST EAX,EAX                        ; 004dd6df
    JZ 0x004dd1d0                       ; 004dd6e1
        ;   XREF to: 004dd1d0 (CONDITIONAL_JUMP)  ; LAB_004dd1d0
    MOV ECX,dword ptr [0x00680d50]      ; 004dd6e7 | g_CScriptInstance | g_CScriptPtr
    PUSH ECX                            ; 004dd6ed | g_CScriptInstance
    CALL core_script.cpp_CScript_resetDialogState_FUN_005602b0 ; 004dd6ee
        ;   XREF to: 005602b0 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_resetDialogState_FUN_005602b0(CScript * this_ptr)
    ADD ESP,0x4                         ; 004dd6f3
    JMP 0x004dd1d0                      ; 004dd6f6
        ;   XREF to: 004dd1d0 (UNCONDITIONAL_JUMP)  ; LAB_004dd1d0
    MOV dword ptr [EAX + 0x18],0x1      ; 004dd6fb | g_CScriptInstance.script_state
        ;   Label: LAB_004dd6fb
    JMP 0x004dd697                      ; 004dd702
        ;   XREF to: 004dd697 (UNCONDITIONAL_JUMP)  ; LAB_004dd697
    PUSH 0x44                           ; 004dd704
        ;   Label: LAB_004dd704
    MOV EAX,[0x0067cf44]                ; 004dd706 | g_CKeysPtr
    PUSH EAX                            ; 004dd70b | g_CKeysInstance
    MOV EDI,dword ptr [EAX]             ; 004dd70c | g_CKeysInstance
    CALL dword ptr [EDI + 0x4]          ; 004dd70e
    ADD ESP,0x8                         ; 004dd711
    TEST EAX,EAX                        ; 004dd714
    JZ 0x004dd6af                       ; 004dd716
        ;   XREF to: 004dd6af (CONDITIONAL_JUMP)  ; LAB_004dd6af
    MOV EAX,[0x00680d50]                ; 004dd718 | g_CScriptPtr
    MOV dword ptr [EAX + 0x18],0x1      ; 004dd71d | g_CScriptInstance.script_state
    JMP 0x004dd6af                      ; 004dd724
        ;   XREF to: 004dd6af (UNCONDITIONAL_JUMP)  ; LAB_004dd6af
    PUSH 0x38                           ; 004dd726
        ;   Label: LAB_004dd726
    MOV EAX,[0x0067cf44]                ; 004dd728 | g_CKeysPtr
    PUSH EAX                            ; 004dd72d | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 004dd72e | g_CKeysInstance
    CALL dword ptr [EBX]                ; 004dd730
    ADD ESP,0x8                         ; 004dd732
    TEST EAX,EAX                        ; 004dd735
    JZ 0x004dd33f                       ; 004dd737
        ;   XREF to: 004dd33f (CONDITIONAL_JUMP)  ; LAB_004dd33f
    PUSH 0x1e                           ; 004dd73d
    MOV EAX,[0x0067cf44]                ; 004dd73f | g_CKeysPtr
    PUSH EAX                            ; 004dd744 | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 004dd745 | g_CKeysInstance
    CALL dword ptr [EBX + 0x4]          ; 004dd747
    ADD ESP,0x8                         ; 004dd74a
    TEST EAX,EAX                        ; 004dd74d
    JZ 0x004dd33f                       ; 004dd74f
        ;   XREF to: 004dd33f (CONDITIONAL_JUMP)  ; LAB_004dd33f
    PUSH 0x2a                           ; 004dd755
    MOV EAX,[0x0067cf44]                ; 004dd757 | g_CKeysPtr
    MOV EBX,0x3ca3d70a                  ; 004dd75c
    PUSH EAX                            ; 004dd761 | g_CKeysInstance
    MOV dword ptr [EBP + -0x1c],EBX     ; 004dd762
    NOP                                 ; 004dd765
    NOP                                 ; 004dd766
    NOP                                 ; 004dd767
    NOP                                 ; 004dd768
    MOV EBX,dword ptr [EAX]             ; 004dd769 | g_CKeysInstance
    CALL dword ptr [EBX]                ; 004dd76b
    ADD ESP,0x8                         ; 004dd76d
    TEST EAX,EAX                        ; 004dd770
    JNZ 0x004dd7d0                      ; 004dd772
        ;   XREF to: 004dd7d0 (CONDITIONAL_JUMP)  ; LAB_004dd7d0
    MOV EAX,[0x03276acc]                ; 004dd774 | g_CDemonCameraInstance.corona_blend_factor
        ;   Label: LAB_004dd774
    MOV dword ptr [EBP + -0x20],EAX     ; 004dd779
    NOP                                 ; 004dd77c
    NOP                                 ; 004dd77d
    NOP                                 ; 004dd77e
    NOP                                 ; 004dd77f
    FILD dword ptr [EBP + -0x20]        ; 004dd780
    NOP                                 ; 004dd783
    NOP                                 ; 004dd784
    NOP                                 ; 004dd785
    NOP                                 ; 004dd786
    FMUL double ptr [0x0062b98d]        ; 004dd787 | DOUBLE_0062b98d
    FADD float ptr [EBP + -0x1c]        ; 004dd78d
    FST float ptr [EBP + 0xfffffddc]    ; 004dd790
    NOP                                 ; 004dd796
    FLDZ                                ; 004dd797
    FCOMPP                              ; 004dd799
    FNSTSW AX                           ; 004dd79b
    SAHF                                ; 004dd79d
    JBE 0x004dd7a5                      ; 004dd79e
        ;   XREF to: 004dd7a5 (CONDITIONAL_JUMP)  ; LAB_004dd7a5
    XOR EDI,EDI                         ; 004dd7a0
    MOV dword ptr [ESP],EDI             ; 004dd7a2
    FLD float ptr [ESP]                 ; 004dd7a5
        ;   Label: LAB_004dd7a5
    FLD1                                ; 004dd7a8
    FCOMPP                              ; 004dd7aa
    FNSTSW AX                           ; 004dd7ac
    SAHF                                ; 004dd7ae
    JC 0x004dd7dd                       ; 004dd7af
        ;   XREF to: 004dd7dd (CONDITIONAL_JUMP)  ; LAB_004dd7dd
    XOR EBX,EBX                         ; 004dd7b1
        ;   Label: LAB_004dd7b1
    MOV EAX,[0x006810c8]                ; 004dd7b3 | g_CDemonSetInstance | g_CDemonSetPtr
        ;   Label: LAB_004dd7b3
    CMP EBX,dword ptr [EAX]             ; 004dd7b8 | g_CDemonSetInstance
    JGE 0x004dd33f                      ; 004dd7ba
        ;   XREF to: 004dd33f (CONDITIONAL_JUMP)  ; LAB_004dd33f
    PUSH dword ptr [ESP]                ; 004dd7c0
    PUSH EBX                            ; 004dd7c3
    PUSH EAX                            ; 004dd7c4 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_setCameraAmbientValue_FUN_00570e20 ; 004dd7c5
        ;   XREF to: 00570e20 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setCameraAmbientValue_FUN_00570e20(CDemonSet * this_ptr, int index, float value)
    INC EBX                             ; 004dd7ca
    ADD ESP,0xc                         ; 004dd7cb
    JMP 0x004dd7b3                      ; 004dd7ce
        ;   XREF to: 004dd7b3 (UNCONDITIONAL_JUMP)  ; LAB_004dd7b3
    MOV dword ptr [EBP + -0x1c],0xbca3d70a ; 004dd7d0
        ;   Label: LAB_004dd7d0
    NOP                                 ; 004dd7d7
    NOP                                 ; 004dd7d8
    NOP                                 ; 004dd7d9
    NOP                                 ; 004dd7da
    JMP 0x004dd774                      ; 004dd7db
        ;   XREF to: 004dd774 (UNCONDITIONAL_JUMP)  ; LAB_004dd774
    MOV dword ptr [ESP],0x3f800000      ; 004dd7dd
        ;   Label: LAB_004dd7dd
    JMP 0x004dd7b1                      ; 004dd7e4
        ;   XREF to: 004dd7b1 (UNCONDITIONAL_JUMP)  ; LAB_004dd7b1

