; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_inivar.cpp_readIniData_FUN_004fbd90(void)
;
; Local Variables:
; undefined1       Stack[-0x204]:1  local_204
;
; XREF[3]:
;   core_main.c_initializeGameSystems_FUN_00507a60 at 00507b41
;   core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0 at 00538224
;   core_msnedit.cpp_DementedMissionEditorSomething_FUN_00537680 at 00537691
;
; Referenced Globals:
;   TerminatedCString s_core_inivar_cpp_0062fd91
;   TerminatedCString s_Please_copy_Nocturne_to__0062fda4
;   TerminatedCString s_gamePIXY_0062fdd5
;   TerminatedCString s_gameBPP_0062fdde
;   TerminatedCString s_useDirect3D_0062fde6
;   TerminatedCString s_useAGPFlag_0062fdf2
;   TerminatedCString s_rendererDLLPath_0062fdfd
;   TerminatedCString s_gamma_0062fe0d
;   TerminatedCString s_heroNumber_0062fe13
;   TerminatedCString s_haloMode_0062fe1e
;   TerminatedCString s_firstTimeFlag_0062fe27
;   TerminatedCString s_subtitleMode_0062fe35
;   TerminatedCString s_bloodFlag_0062fe42
;   TerminatedCString s_nudityFlag_0062fe4c
;   TerminatedCString s_foulLanguageFlag_0062fe57
;   ... and 118 more
;
; Called Functions:
;   core_game.cpp_CGame_restoreDefaultControls_FUN_004dbbc0
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_msnedit.cpp_readIni_FUN_00537530
;   core_setedit.cpp_CDemonSet_readIni_FUN_00584900
;   crt_file.c_setReadonlyAttribute_FUN_00600c30
;   engine_ini.cpp_CIniFile_ctor_FUN_004fba70
;   engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
;   engine_ini.cpp_CIniFile_getString_FUN_004fbb20
;   engine_ini.cpp_CIniFile_readIniHeader_FUN_004fbae0
;   sound_sndmain.cpp_readIni_FUN_005abf20
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004fbd90
        ;   Label: core_inivar.cpp_readIniData_FUN_004fbd90
    SUB ESP,0x200                       ; 004fbd91
    PUSH EDI                            ; 004fbd97
    PUSH ESI                            ; 004fbd98
    PUSH 0x180                          ; 004fbd99
    PUSH 0x67cce0                       ; 004fbd9e | = ".\\system\\nocturne.ini" | s_system_nocturne_ini_0067cce0 = .\system\nocturne.ini
    CALL crt_file.c_setReadonlyAttribute_FUN_00600c30 ; 004fbda3 | DWORD crt_file.c_setReadonlyAttribute_FUN_00600c30(char * filename, DWORD file_attributes)
        ;   XREF to: 00600c30 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004fbda8
    TEST EAX,EAX                        ; 004fbdab
    JNZ 0x004fc4e5                      ; 004fbdad | LAB_004fc4e5
        ;   XREF to: 004fc4e5 (CONDITIONAL_JUMP)
    PUSH EBX                            ; 004fbdb3
        ;   Label: LAB_004fbdb3
    PUSH 0x0                            ; 004fbdb4
    PUSH 0x67cce0                       ; 004fbdb6 | = ".\\system\\nocturne.ini" | s_system_nocturne_ini_0067cce0 = .\system\nocturne.ini
    LEA EAX,[ESP + 0x14]                ; 004fbdbb
    PUSH EAX                            ; 004fbdbf
    CALL engine_ini.cpp_CIniFile_ctor_FUN_004fba70 ; 004fbdc0 | CIniFile * engine_ini.cpp_CIniFile_ctor_FUN_004fba70(CIniFile * this, char * filename, int read_mode)
        ;   XREF to: 004fba70 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004fbdc5
    PUSH 0x67cd08                       ; 004fbdc8 | = "Graphics" | s_Graphics_0067cd08 = Graphics
    LEA EAX,[ESP + 0x10]                ; 004fbdcd
    PUSH EAX                            ; 004fbdd1
    CALL engine_ini.cpp_CIniFile_readIniHeader_FUN_004fbae0 ; 004fbdd2 | void engine_ini.cpp_CIniFile_readIniHeader_FUN_004fbae0(CIniFile * this, char * section)
        ;   XREF to: 004fbae0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004fbdd7
    MOV EBX,dword ptr [0x0067b654]      ; 004fbdda | CGame g_CGameInstance | CGame * g_CGamePtr
    PUSH EBX                            ; 004fbde0 | CGame g_CGameInstance
    PUSH 0x62fdcc                       ; 004fbde1 | = "gamePIXX" | s_gamePIXX_0062fdcc = gamePIXX
    LEA EAX,[ESP + 0x14]                ; 004fbde6
    PUSH EAX                            ; 004fbdea
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fbdeb | void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * ini_file, char * key_name, int * value_ptr)
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
    MOV EAX,[0x0067b654]                ; 004fbdf0 | CGame * g_CGamePtr
    ADD ESP,0xc                         ; 004fbdf5
    ADD EAX,0x4                         ; 004fbdf8
    PUSH EAX                            ; 004fbdfb | g_CGameInstance.game_pixy
    PUSH 0x62fdd5                       ; 004fbdfc | = "gamePIXY" | s_gamePIXY_0062fdd5 = gamePIXY
    LEA EAX,[ESP + 0x14]                ; 004fbe01
    PUSH EAX                            ; 004fbe05
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fbe06 | void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * ini_file, char * key_name, int * value_ptr)
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
    MOV EAX,[0x0067b654]                ; 004fbe0b | CGame * g_CGamePtr
    ADD ESP,0xc                         ; 004fbe10
    ADD EAX,0x8                         ; 004fbe13
    PUSH EAX                            ; 004fbe16 | DAT_02d81aa4
    PUSH 0x62fdde                       ; 004fbe17 | = "gameBPP" | s_gameBPP_0062fdde = gameBPP
    LEA EAX,[ESP + 0x14]                ; 004fbe1c
    PUSH EAX                            ; 004fbe20
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fbe21 | void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * ini_file, char * key_name, int * value_ptr)
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004fbe26
    PUSH 0x3f6b878                      ; 004fbe29 | int g_FullscreenMode
    PUSH 0x62fde6                       ; 004fbe2e | = "useDirect3D" | s_useDirect3D_0062fde6 = useDirect3D
    LEA EAX,[ESP + 0x14]                ; 004fbe33
    PUSH EAX                            ; 004fbe37
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fbe38 | void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * ini_file, char * key_name, int * value_ptr)
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004fbe3d
    PUSH 0x3f6b884                      ; 004fbe40 | int g_PodSystemVersion
    PUSH 0x62fdf2                       ; 004fbe45 | = "useAGPFlag" | s_useAGPFlag_0062fdf2 = useAGPFlag
    LEA EAX,[ESP + 0x14]                ; 004fbe4a
    PUSH EAX                            ; 004fbe4e
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fbe4f | void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * ini_file, char * key_name, int * value_ptr)
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004fbe54
    PUSH 0xfa                           ; 004fbe57
    PUSH 0x684010                       ; 004fbe5c | = "trid3d.dll" | g_RendererDllName = trid3d.dll
    PUSH 0x62fdfd                       ; 004fbe61 | = "rendererDLLPath" | s_rendererDLLPath_0062fdfd = rendererDLLPath
    LEA EAX,[ESP + 0x18]                ; 004fbe66
    PUSH EAX                            ; 004fbe6a
    CALL engine_ini.cpp_CIniFile_getString_FUN_004fbb20 ; 004fbe6b | void engine_ini.cpp_CIniFile_getString_FUN_004fbb20(CIniFile * this, char * key, char * output_buffer, int buffer_size, ...)
        ;   XREF to: 004fbb20 (UNCONDITIONAL_CALL)
    MOV EAX,[0x0067b654]                ; 004fbe70 | CGame * g_CGamePtr
    ADD ESP,0x10                        ; 004fbe75
    ADD EAX,0x224                       ; 004fbe78
    PUSH EAX                            ; 004fbe7d | DAT_02d81cc0
    PUSH 0x62fe0d                       ; 004fbe7e | = "gamma" | s_gamma_0062fe0d = gamma
    LEA EAX,[ESP + 0x14]                ; 004fbe83
    PUSH EAX                            ; 004fbe87
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fbe88 | void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * ini_file, char * key_name, int * value_ptr)
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
    MOV EAX,[0x0067b654]                ; 004fbe8d | CGame * g_CGamePtr
    ADD ESP,0xc                         ; 004fbe92
    ADD EAX,0xc0                        ; 004fbe95
    PUSH EAX                            ; 004fbe9a | g_CGameInstance.hero_number
    PUSH 0x62fe13                       ; 004fbe9b | = "heroNumber" | s_heroNumber_0062fe13 = heroNumber
    LEA EAX,[ESP + 0x14]                ; 004fbea0
    PUSH EAX                            ; 004fbea4
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fbea5 | void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * ini_file, char * key_name, int * value_ptr)
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004fbeaa
    POP EBX                             ; 004fbead
    MOV EAX,[0x0067b654]                ; 004fbeae | CGame * g_CGamePtr
    ADD EAX,0xc                         ; 004fbeb3
    PUSH EAX                            ; 004fbeb6 | DAT_02d81aa8
    PUSH 0x62fe1e                       ; 004fbeb7 | = "haloMode" | s_haloMode_0062fe1e = haloMode
    LEA EAX,[ESP + 0x10]                ; 004fbebc
    PUSH EAX                            ; 004fbec0
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fbec1 | void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * ini_file, char * key_name, int * value_ptr)
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004fbec6
    PUSH 0x2db8a64                      ; 004fbec9 | int g_SkipIntroVideo
    PUSH 0x62fe27                       ; 004fbece | = "firstTimeFlag" | s_firstTimeFlag_0062fe27 = firstTimeFlag
    LEA EAX,[ESP + 0x10]                ; 004fbed3
    PUSH EAX                            ; 004fbed7
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fbed8 | void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * ini_file, char * key_name, int * value_ptr)
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
    MOV EAX,[0x0067b654]                ; 004fbedd | CGame * g_CGamePtr
    ADD ESP,0xc                         ; 004fbee2
    ADD EAX,0x10                        ; 004fbee5
    PUSH EAX                            ; 004fbee8 | DAT_02d81aac
    PUSH 0x62fe35                       ; 004fbee9 | = "subtitleMode" | s_subtitleMode_0062fe35 = subtitleMode
    LEA EAX,[ESP + 0x10]                ; 004fbeee
    PUSH EAX                            ; 004fbef2
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fbef3 | void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * ini_file, char * key_name, int * value_ptr)
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
    MOV EAX,[0x0067b654]                ; 004fbef8 | CGame * g_CGamePtr
    ADD ESP,0xc                         ; 004fbefd
    ADD EAX,0x14                        ; 004fbf00
    PUSH EAX                            ; 004fbf03 | g_CGameInstance.blood_flag
    PUSH 0x62fe42                       ; 004fbf04 | = "bloodFlag" | s_bloodFlag_0062fe42 = bloodFlag
    LEA EAX,[ESP + 0x10]                ; 004fbf09
    PUSH EAX                            ; 004fbf0d
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fbf0e | void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * ini_file, char * key_name, int * value_ptr)
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
    MOV EAX,[0x0067b654]                ; 004fbf13 | CGame * g_CGamePtr
    ADD ESP,0xc                         ; 004fbf18
    ADD EAX,0x18                        ; 004fbf1b
    PUSH EAX                            ; 004fbf1e | g_CGameInstance.nudity_flag
    PUSH 0x62fe4c                       ; 004fbf1f | = "nudityFlag" | s_nudityFlag_0062fe4c = nudityFlag
    LEA EAX,[ESP + 0x10]                ; 004fbf24
    PUSH EAX                            ; 004fbf28
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fbf29 | void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * ini_file, char * key_name, int * value_ptr)
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
    MOV EAX,[0x0067b654]                ; 004fbf2e | CGame * g_CGamePtr
    ADD ESP,0xc                         ; 004fbf33
    ADD EAX,0x1c                        ; 004fbf36
    PUSH EAX                            ; 004fbf39 | DAT_02d81ab8
    PUSH 0x62fe57                       ; 004fbf3a | = "foulLanguageFlag" | s_foulLanguageFlag_0062fe57 = foulLanguageFlag
    LEA EAX,[ESP + 0x10]                ; 004fbf3f
    PUSH EAX                            ; 004fbf43
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fbf44 | void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * ini_file, char * key_name, int * value_ptr)
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
    MOV EAX,[0x0067b654]                ; 004fbf49 | CGame * g_CGamePtr
    ADD ESP,0xc                         ; 004fbf4e
    ADD EAX,0x24                        ; 004fbf51
    PUSH EAX                            ; 004fbf54 | DAT_02d81ac0
    PUSH 0x62fe68                       ; 004fbf55 | = "shadowFlag" | s_shadowFlag_0062fe68 = shadowFlag
    LEA EAX,[ESP + 0x10]                ; 004fbf5a
    PUSH EAX                            ; 004fbf5e
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fbf5f | void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * ini_file, char * key_name, int * value_ptr)
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
    MOV EAX,[0x0067b654]                ; 004fbf64 | CGame * g_CGamePtr
    ADD ESP,0xc                         ; 004fbf69
    ADD EAX,0x20                        ; 004fbf6c
    PUSH EAX                            ; 004fbf6f | DAT_02d81abc
    PUSH 0x62fe73                       ; 004fbf70 | = "quimbyFlag" | s_quimbyFlag_0062fe73 = quimbyFlag
    LEA EAX,[ESP + 0x10]                ; 004fbf75
    PUSH EAX                            ; 004fbf79
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fbf7a | void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * ini_file, char * key_name, int * value_ptr)
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
    MOV EAX,[0x0067b654]                ; 004fbf7f | CGame * g_CGamePtr
    MOV ESI,dword ptr [EAX + 0x20]      ; 004fbf84 | DAT_02d81abc
    ADD ESP,0xc                         ; 004fbf87
    TEST ESI,ESI                        ; 004fbf8a
    JZ 0x004fbfa3                       ; 004fbf8c | LAB_004fbfa3
        ;   XREF to: 004fbfa3 (CONDITIONAL_JUMP)
    MOV dword ptr [EAX + 0x18],0x0      ; 004fbf8e | g_CGameInstance.nudity_flag
    MOV dword ptr [EAX + 0x1c],0x0      ; 004fbf95 | DAT_02d81ab8
    MOV dword ptr [EAX + 0x14],0x0      ; 004fbf9c | g_CGameInstance.blood_flag
    PUSH 0x2f275f4                      ; 004fbfa3 | int g_GraphicsCardHandle
        ;   Label: LAB_004fbfa3
    PUSH 0x62fe7e                       ; 004fbfa8 | = "currentBoard" | s_currentBoard_0062fe7e = currentBoard
    LEA EAX,[ESP + 0x10]                ; 004fbfad
    XOR EDI,EDI                         ; 004fbfb1
    PUSH EAX                            ; 004fbfb3
    MOV dword ptr [0x02f275f4],EDI      ; 004fbfb4 | int g_GraphicsCardHandle
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fbfba | void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * ini_file, char * key_name, int * value_ptr)
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004fbfbf
    PUSH 0x67cd00                       ; 004fbfc2 | = "Sound" | s_Sound_0067cd00 = Sound
    LEA EAX,[ESP + 0xc]                 ; 004fbfc7
    PUSH EAX                            ; 004fbfcb
    CALL engine_ini.cpp_CIniFile_readIniHeader_FUN_004fbae0 ; 004fbfcc | void engine_ini.cpp_CIniFile_readIniHeader_FUN_004fbae0(CIniFile * this, char * section)
        ;   XREF to: 004fbae0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004fbfd1
    LEA EAX,[ESP + 0x8]                 ; 004fbfd4
    PUSH EAX                            ; 004fbfd8
    CALL sound_sndmain.cpp_readIni_FUN_005abf20 ; 004fbfd9 | void sound_sndmain.cpp_readIni_FUN_005abf20(CIniFile * ini_file)
        ;   XREF to: 005abf20 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004fbfde
    PUSH 0x67cd18                       ; 004fbfe1 | = "Control" | s_Control_0067cd18 = Control
    LEA EAX,[ESP + 0xc]                 ; 004fbfe6
    PUSH EAX                            ; 004fbfea
    CALL engine_ini.cpp_CIniFile_readIniHeader_FUN_004fbae0 ; 004fbfeb | void engine_ini.cpp_CIniFile_readIniHeader_FUN_004fbae0(CIniFile * this, char * section)
        ;   XREF to: 004fbae0 (UNCONDITIONAL_CALL)
    MOV EAX,[0x0067b654]                ; 004fbff0 | CGame * g_CGamePtr
    ADD ESP,0x8                         ; 004fbff5
    ADD EAX,0xbc                        ; 004fbff8
    PUSH EAX                            ; 004fbffd | g_CGameInstance.game_control
    PUSH 0x62fe8b                       ; 004fbffe | = "gameControl" | s_gameControl_0062fe8b = gameControl
    LEA EAX,[ESP + 0x10]                ; 004fc003
    PUSH EAX                            ; 004fc007
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fc008 | void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * ini_file, char * key_name, int * value_ptr)
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004fc00d
    MOV EBP,dword ptr [0x0067b654]      ; 004fc010 | CGame * g_CGamePtr
    PUSH EBP                            ; 004fc016 | CGame g_CGameInstance
    CALL core_game.cpp_CGame_restoreDefaultControls_FUN_004dbbc0 ; 004fc017 | undefined core_game.cpp_CGame_restoreDefaultControls_FUN_004dbbc0()
        ;   XREF to: 004dbbc0 (UNCONDITIONAL_CALL)
    MOV EAX,[0x0067b654]                ; 004fc01c | CGame * g_CGamePtr
    ADD ESP,0x4                         ; 004fc021
    ADD EAX,0x28                        ; 004fc024
    PUSH EAX                            ; 004fc027 | g_CGameInstance.key_walk
    PUSH 0x62fe97                       ; 004fc028 | = "keyWalk" | s_keyWalk_0062fe97 = keyWalk
    LEA EAX,[ESP + 0x10]                ; 004fc02d
    PUSH EAX                            ; 004fc031
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fc032 | void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * ini_file, char * key_name, int * value_ptr)
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
    MOV EAX,[0x0067b654]                ; 004fc037 | CGame * g_CGamePtr
    ADD ESP,0xc                         ; 004fc03c
    ADD EAX,0x2c                        ; 004fc03f
    PUSH EAX                            ; 004fc042 | g_CGameInstance.key_backup
    PUSH 0x62fe9f                       ; 004fc043 | = "keyBackup" | s_keyBackup_0062fe9f = keyBackup
    LEA EAX,[ESP + 0x10]                ; 004fc048
    PUSH EAX                            ; 004fc04c
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fc04d | void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * ini_file, char * key_name, int * value_ptr)
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
    MOV EAX,[0x0067b654]                ; 004fc052 | CGame * g_CGamePtr
    ADD ESP,0xc                         ; 004fc057
    ADD EAX,0x30                        ; 004fc05a
    PUSH EAX                            ; 004fc05d | g_CGameInstance.key_run
    PUSH 0x62fea9                       ; 004fc05e | = "keyRun" | s_keyRun_0062fea9 = keyRun
    LEA EAX,[ESP + 0x10]                ; 004fc063
    PUSH EAX                            ; 004fc067
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fc068 | void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * ini_file, char * key_name, int * value_ptr)
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
    MOV EAX,[0x0067b654]                ; 004fc06d | CGame * g_CGamePtr
    ADD ESP,0xc                         ; 004fc072
    ADD EAX,0x34                        ; 004fc075
    PUSH EAX                            ; 004fc078 | g_CGameInstance.key_strafe
    PUSH 0x62feb0                       ; 004fc079 | = "keyStrafe" | s_keyStrafe_0062feb0 = keyStrafe
    LEA EAX,[ESP + 0x10]                ; 004fc07e
    PUSH EAX                            ; 004fc082
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fc083 | void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * ini_file, char * key_name, int * value_ptr)
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
    MOV EAX,[0x0067b654]                ; 004fc088 | CGame * g_CGamePtr
    ADD ESP,0xc                         ; 004fc08d
    ADD EAX,0x38                        ; 004fc090
    PUSH EAX                            ; 004fc093 | g_CGameInstance.key_strafe_left
    PUSH 0x62feba                       ; 004fc094 | = "keyStrafeLeft" | s_keyStrafeLeft_0062feba = keyStrafeLeft
    LEA EAX,[ESP + 0x10]                ; 004fc099
    PUSH EAX                            ; 004fc09d
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fc09e | void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * ini_file, char * key_name, int * value_ptr)
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004fc0a3
    POP ESI                             ; 004fc0a6
    POP EDI                             ; 004fc0a7
    MOV EAX,[0x0067b654]                ; 004fc0a8 | CGame * g_CGamePtr
    ADD EAX,0x3c                        ; 004fc0ad
    PUSH EAX                            ; 004fc0b0 | g_CGameInstance.key_strafe_right
    PUSH 0x62fec8                       ; 004fc0b1 | = "keyStrafeRight" | s_keyStrafeRight_0062fec8 = keyStrafeRight
    LEA EAX,[ESP + 0x8]                 ; 004fc0b6
    PUSH EAX                            ; 004fc0ba
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fc0bb | void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * ini_file, char * key_name, int * value_ptr)
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
    MOV EAX,[0x0067b654]                ; 004fc0c0 | CGame * g_CGamePtr
    ADD ESP,0xc                         ; 004fc0c5
    ADD EAX,0x40                        ; 004fc0c8
    PUSH EAX                            ; 004fc0cb | g_CGameInstance.key_right
    PUSH 0x62fed7                       ; 004fc0cc | = "keyRight" | s_keyRight_0062fed7 = keyRight
    LEA EAX,[ESP + 0x8]                 ; 004fc0d1
    PUSH EAX                            ; 004fc0d5
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fc0d6 | void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * ini_file, char * key_name, int * value_ptr)
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
    MOV EAX,[0x0067b654]                ; 004fc0db | CGame * g_CGamePtr
    ADD ESP,0xc                         ; 004fc0e0
    ADD EAX,0x44                        ; 004fc0e3
    PUSH EAX                            ; 004fc0e6 | g_CGameInstance.key_left
    PUSH 0x62fee0                       ; 004fc0e7 | = "keyLeft" | s_keyLeft_0062fee0 = keyLeft
    LEA EAX,[ESP + 0x8]                 ; 004fc0ec
    PUSH EAX                            ; 004fc0f0
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fc0f1 | void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * ini_file, char * key_name, int * value_ptr)
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
    MOV EAX,[0x0067b654]                ; 004fc0f6 | CGame * g_CGamePtr
    ADD ESP,0xc                         ; 004fc0fb
    ADD EAX,0x48                        ; 004fc0fe
    PUSH EAX                            ; 004fc101 | g_CGameInstance.key_fire
    PUSH 0x62fee8                       ; 004fc102 | = "keyFire" | s_keyFire_0062fee8 = keyFire
    LEA EAX,[ESP + 0x8]                 ; 004fc107
    PUSH EAX                            ; 004fc10b
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fc10c | void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * ini_file, char * key_name, int * value_ptr)
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
    MOV EAX,[0x0067b654]                ; 004fc111 | CGame * g_CGamePtr
    ADD ESP,0xc                         ; 004fc116
    ADD EAX,0x4c                        ; 004fc119
    PUSH EAX                            ; 004fc11c | g_CGameInstance.key_use_item
    PUSH 0x62fef0                       ; 004fc11d | = "keyUseItem" | s_keyUseItem_0062fef0 = keyUseItem
    LEA EAX,[ESP + 0x8]                 ; 004fc122
    PUSH EAX                            ; 004fc126
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fc127 | void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * ini_file, char * key_name, int * value_ptr)
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
    MOV EAX,[0x0067b654]                ; 004fc12c | CGame * g_CGamePtr
    ADD ESP,0xc                         ; 004fc131
    ADD EAX,0x50                        ; 004fc134
    PUSH EAX                            ; 004fc137 | g_CGameInstance.key_light
    PUSH 0x62fefb                       ; 004fc138 | = "keyLight" | s_keyLight_0062fefb = keyLight
    LEA EAX,[ESP + 0x8]                 ; 004fc13d
    PUSH EAX                            ; 004fc141
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fc142 | void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * ini_file, char * key_name, int * value_ptr)
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
    MOV EAX,[0x0067b654]                ; 004fc147 | CGame * g_CGamePtr
    ADD ESP,0xc                         ; 004fc14c
    ADD EAX,0x54                        ; 004fc14f
    PUSH EAX                            ; 004fc152 | g_CGameInstance.key_infrared
    PUSH 0x62ff04                       ; 004fc153 | = "keyInfrared" | s_keyInfrared_0062ff04 = keyInfrared
    LEA EAX,[ESP + 0x8]                 ; 004fc158
    PUSH EAX                            ; 004fc15c
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fc15d | void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * ini_file, char * key_name, int * value_ptr)
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
    MOV EAX,[0x0067b654]                ; 004fc162 | CGame * g_CGamePtr
    ADD ESP,0xc                         ; 004fc167
    ADD EAX,0x58                        ; 004fc16a
    PUSH EAX                            ; 004fc16d | g_CGameInstance.key_draw
    PUSH 0x62ff10                       ; 004fc16e | = "keyDraw" | s_keyDraw_0062ff10 = keyDraw
    LEA EAX,[ESP + 0x8]                 ; 004fc173
    PUSH EAX                            ; 004fc177
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fc178 | void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * ini_file, char * key_name, int * value_ptr)
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
    MOV EAX,[0x0067b654]                ; 004fc17d | CGame * g_CGamePtr
    ADD ESP,0xc                         ; 004fc182
    ADD EAX,0x5c                        ; 004fc185
    PUSH EAX                            ; 004fc188 | g_CGameInstance.key_jump
    PUSH 0x62ff18                       ; 004fc189 | = "keyJump" | s_keyJump_0062ff18 = keyJump
    LEA EAX,[ESP + 0x8]                 ; 004fc18e
    PUSH EAX                            ; 004fc192
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fc193 | void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * ini_file, char * key_name, int * value_ptr)
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004fc198
    MOV EAX,[0x0067b654]                ; 004fc19b | CGame * g_CGamePtr
    ADD EAX,0x60                        ; 004fc1a0
    PUSH EAX                            ; 004fc1a3 | g_CGameInstance.key_point_up
    PUSH 0x62ff20                       ; 004fc1a4 | = "keyPointUp" | s_keyPointUp_0062ff20 = keyPointUp
    LEA EAX,[ESP + 0x8]                 ; 004fc1a9
    PUSH EAX                            ; 004fc1ad
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fc1ae | void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * ini_file, char * key_name, int * value_ptr)
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
    MOV EAX,[0x0067b654]                ; 004fc1b3 | CGame * g_CGamePtr
    ADD ESP,0xc                         ; 004fc1b8
    ADD EAX,0x64                        ; 004fc1bb
    PUSH EAX                            ; 004fc1be | g_CGameInstance.key_point_down
    PUSH 0x62ff2b                       ; 004fc1bf | = "keyPointDown" | s_keyPointDown_0062ff2b = keyPointDown
    LEA EAX,[ESP + 0x8]                 ; 004fc1c4
    PUSH EAX                            ; 004fc1c8
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fc1c9 | void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * ini_file, char * key_name, int * value_ptr)
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
    MOV EAX,[0x0067b654]                ; 004fc1ce | CGame * g_CGamePtr
    ADD ESP,0xc                         ; 004fc1d3
    ADD EAX,0x68                        ; 004fc1d6
    PUSH EAX                            ; 004fc1d9 | g_CGameInstance.key_weapon_1
    PUSH 0x62ff38                       ; 004fc1da | = "keyWeapon1" | s_keyWeapon1_0062ff38 = keyWeapon1
    LEA EAX,[ESP + 0x8]                 ; 004fc1df
    PUSH EAX                            ; 004fc1e3
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fc1e4 | void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * ini_file, char * key_name, int * value_ptr)
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
    MOV EAX,[0x0067b654]                ; 004fc1e9 | CGame * g_CGamePtr
    ADD ESP,0xc                         ; 004fc1ee
    ADD EAX,0x6c                        ; 004fc1f1
    PUSH EAX                            ; 004fc1f4 | g_CGameInstance.key_weapon_2
    PUSH 0x62ff43                       ; 004fc1f5 | = "keyWeapon2" | s_keyWeapon2_0062ff43 = keyWeapon2
    LEA EAX,[ESP + 0x8]                 ; 004fc1fa
    PUSH EAX                            ; 004fc1fe
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fc1ff | void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * ini_file, char * key_name, int * value_ptr)
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
    MOV EAX,[0x0067b654]                ; 004fc204 | CGame * g_CGamePtr
    ADD ESP,0xc                         ; 004fc209
    ADD EAX,0x70                        ; 004fc20c
    PUSH EAX                            ; 004fc20f | g_CGameInstance.key_weapon_3
    PUSH 0x62ff4e                       ; 004fc210 | = "keyWeapon3" | s_keyWeapon3_0062ff4e = keyWeapon3
    LEA EAX,[ESP + 0x8]                 ; 004fc215
    PUSH EAX                            ; 004fc219
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fc21a | void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * ini_file, char * key_name, int * value_ptr)
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
    MOV EAX,[0x0067b654]                ; 004fc21f | CGame * g_CGamePtr
    ADD ESP,0xc                         ; 004fc224
    ADD EAX,0x74                        ; 004fc227
    PUSH EAX                            ; 004fc22a | g_CGameInstance.key_weapon_4
    PUSH 0x62ff59                       ; 004fc22b | = "keyWeapon4" | s_keyWeapon4_0062ff59 = keyWeapon4
    LEA EAX,[ESP + 0x8]                 ; 004fc230
    PUSH EAX                            ; 004fc234
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fc235 | void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * ini_file, char * key_name, int * value_ptr)
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
    MOV EAX,[0x0067b654]                ; 004fc23a | CGame * g_CGamePtr
    ADD ESP,0xc                         ; 004fc23f
    ADD EAX,0x78                        ; 004fc242
    PUSH EAX                            ; 004fc245 | g_CGameInstance.key_weapon_5
    PUSH 0x62ff64                       ; 004fc246 | = "keyWeapon5" | s_keyWeapon5_0062ff64 = keyWeapon5
    LEA EAX,[ESP + 0x8]                 ; 004fc24b
    PUSH EAX                            ; 004fc24f
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fc250 | void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * ini_file, char * key_name, int * value_ptr)
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
    MOV EAX,[0x0067b654]                ; 004fc255 | CGame * g_CGamePtr
    ADD ESP,0xc                         ; 004fc25a
    ADD EAX,0x7c                        ; 004fc25d
    PUSH EAX                            ; 004fc260 | g_CGameInstance.key_next_weapon
    PUSH 0x62ff6f                       ; 004fc261 | = "keyNextWeapon" | s_keyNextWeapon_0062ff6f = keyNextWeapon
    LEA EAX,[ESP + 0x8]                 ; 004fc266
    PUSH EAX                            ; 004fc26a
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fc26b | void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * ini_file, char * key_name, int * value_ptr)
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
    MOV EAX,[0x0067b654]                ; 004fc270 | CGame * g_CGamePtr
    ADD ESP,0xc                         ; 004fc275
    ADD EAX,0x80                        ; 004fc278
    PUSH EAX                            ; 004fc27d | g_CGameInstance.key_prev_weapon
    PUSH 0x62ff7d                       ; 004fc27e | = "keyPrevWeapon" | s_keyPrevWeapon_0062ff7d = keyPrevWeapon
    LEA EAX,[ESP + 0x8]                 ; 004fc283
    PUSH EAX                            ; 004fc287
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fc288 | void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * ini_file, char * key_name, int * value_ptr)
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004fc28d
    MOV EAX,[0x0067b654]                ; 004fc290 | CGame * g_CGamePtr
    ADD EAX,0x84                        ; 004fc295
    PUSH EAX                            ; 004fc29a | g_CGameInstance.key_next_item
    PUSH 0x62ff8b                       ; 004fc29b | = "keyNextItem" | s_keyNextItem_0062ff8b = keyNextItem
    LEA EAX,[ESP + 0x8]                 ; 004fc2a0
    PUSH EAX                            ; 004fc2a4
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fc2a5 | void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * ini_file, char * key_name, int * value_ptr)
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
    MOV EAX,[0x0067b654]                ; 004fc2aa | CGame * g_CGamePtr
    ADD ESP,0xc                         ; 004fc2af
    ADD EAX,0x88                        ; 004fc2b2
    PUSH EAX                            ; 004fc2b7 | g_CGameInstance.key_prev_item
    PUSH 0x62ff97                       ; 004fc2b8 | = "keyPrevItem" | s_keyPrevItem_0062ff97 = keyPrevItem
    LEA EAX,[ESP + 0x8]                 ; 004fc2bd
    PUSH EAX                            ; 004fc2c1
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fc2c2 | void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * ini_file, char * key_name, int * value_ptr)
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
    MOV EAX,[0x0067b654]                ; 004fc2c7 | CGame * g_CGamePtr
    ADD ESP,0xc                         ; 004fc2cc
    ADD EAX,0x8c                        ; 004fc2cf
    PUSH EAX                            ; 004fc2d4 | g_CGameInstance.key_item_desc
    PUSH 0x62ffa3                       ; 004fc2d5 | = "keyItemDesc" | s_keyItemDesc_0062ffa3 = keyItemDesc
    LEA EAX,[ESP + 0x8]                 ; 004fc2da
    PUSH EAX                            ; 004fc2de
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fc2df | void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * ini_file, char * key_name, int * value_ptr)
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
    MOV EAX,[0x0067b654]                ; 004fc2e4 | CGame * g_CGamePtr
    ADD ESP,0xc                         ; 004fc2e9
    ADD EAX,0x90                        ; 004fc2ec
    PUSH EAX                            ; 004fc2f1 | g_CGameInstance.key_next_ammo
    PUSH 0x62ffaf                       ; 004fc2f2 | = "keyNextAmmo" | s_keyNextAmmo_0062ffaf = keyNextAmmo
    LEA EAX,[ESP + 0x8]                 ; 004fc2f7
    PUSH EAX                            ; 004fc2fb
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fc2fc | void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * ini_file, char * key_name, int * value_ptr)
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
    MOV EAX,[0x0067b654]                ; 004fc301 | CGame * g_CGamePtr
    ADD ESP,0xc                         ; 004fc306
    ADD EAX,0x94                        ; 004fc309
    PUSH EAX                            ; 004fc30e | DAT_02d81b30
    PUSH 0x62ffbb                       ; 004fc30f | = "invertMouseYAxis" | s_invertMouseYAxis_0062ffbb = invertMouseYAxis
    LEA EAX,[ESP + 0x8]                 ; 004fc314
    PUSH EAX                            ; 004fc318
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fc319 | void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * ini_file, char * key_name, int * value_ptr)
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
    MOV EAX,[0x0067b654]                ; 004fc31e | CGame * g_CGamePtr
    ADD ESP,0xc                         ; 004fc323
    ADD EAX,0x98                        ; 004fc326
    PUSH EAX                            ; 004fc32b | g_CGameInstance.always_run
    PUSH 0x62ffcc                       ; 004fc32c | = "alwaysRun" | s_alwaysRun_0062ffcc = alwaysRun
    LEA EAX,[ESP + 0x8]                 ; 004fc331
    PUSH EAX                            ; 004fc335
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fc336 | void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * ini_file, char * key_name, int * value_ptr)
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
    MOV EAX,[0x0067b654]                ; 004fc33b | CGame * g_CGamePtr
    ADD ESP,0xc                         ; 004fc340
    ADD EAX,0x9c                        ; 004fc343
    PUSH EAX                            ; 004fc348 | DAT_02d81b38
    PUSH 0x62ffd6                       ; 004fc349 | = "xMouseSensitivity" | s_xMouseSensitivity_0062ffd6 = xMouseSensitivity
    LEA EAX,[ESP + 0x8]                 ; 004fc34e
    PUSH EAX                            ; 004fc352
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fc353 | void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * ini_file, char * key_name, int * value_ptr)
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
    MOV EAX,[0x0067b654]                ; 004fc358 | CGame * g_CGamePtr
    ADD ESP,0xc                         ; 004fc35d
    ADD EAX,0xa0                        ; 004fc360
    PUSH EAX                            ; 004fc365 | DAT_02d81b3c
    PUSH 0x62ffe8                       ; 004fc366 | = "yMouseSensitivity" | s_yMouseSensitivity_0062ffe8 = yMouseSensitivity
    LEA EAX,[ESP + 0x8]                 ; 004fc36b
    PUSH EAX                            ; 004fc36f
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fc370 | void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * ini_file, char * key_name, int * value_ptr)
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
    MOV EAX,[0x0067b654]                ; 004fc375 | CGame * g_CGamePtr
    ADD ESP,0xc                         ; 004fc37a
    ADD EAX,0xa4                        ; 004fc37d
    PUSH EAX                            ; 004fc382 | g_CGameInstance.x_center
    PUSH 0x62fffa                       ; 004fc383 | = "xCenter" | s_xCenter_0062fffa = xCenter
    LEA EAX,[ESP + 0x8]                 ; 004fc388
    PUSH EAX                            ; 004fc38c
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fc38d | void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * ini_file, char * key_name, int * value_ptr)
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004fc392
    MOV EAX,[0x0067b654]                ; 004fc395 | CGame * g_CGamePtr
    ADD EAX,0xa8                        ; 004fc39a
    PUSH EAX                            ; 004fc39f | DAT_02d81b44
    PUSH 0x630002                       ; 004fc3a0 | = "yCenter" | s_yCenter_00630002 = yCenter
    LEA EAX,[ESP + 0x8]                 ; 004fc3a5
    PUSH EAX                            ; 004fc3a9
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fc3aa | void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * ini_file, char * key_name, int * value_ptr)
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
    MOV EAX,[0x0067b654]                ; 004fc3af | CGame * g_CGamePtr
    ADD ESP,0xc                         ; 004fc3b4
    ADD EAX,0xac                        ; 004fc3b7
    PUSH EAX                            ; 004fc3bc | DAT_02d81b48
    PUSH 0x63000a                       ; 004fc3bd | = "xStickMin" | s_xStickMin_0063000a = xStickMin
    LEA EAX,[ESP + 0x8]                 ; 004fc3c2
    PUSH EAX                            ; 004fc3c6
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fc3c7 | void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * ini_file, char * key_name, int * value_ptr)
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
    MOV EAX,[0x0067b654]                ; 004fc3cc | CGame * g_CGamePtr
    ADD ESP,0xc                         ; 004fc3d1
    ADD EAX,0xb0                        ; 004fc3d4
    PUSH EAX                            ; 004fc3d9 | DAT_02d81b4c
    PUSH 0x630014                       ; 004fc3da | = "xStickMax" | s_xStickMax_00630014 = xStickMax
    LEA EAX,[ESP + 0x8]                 ; 004fc3df
    PUSH EAX                            ; 004fc3e3
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fc3e4 | void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * ini_file, char * key_name, int * value_ptr)
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
    MOV EAX,[0x0067b654]                ; 004fc3e9 | CGame * g_CGamePtr
    ADD ESP,0xc                         ; 004fc3ee
    ADD EAX,0xb4                        ; 004fc3f1
    PUSH EAX                            ; 004fc3f6 | DAT_02d81b50
    PUSH 0x63001e                       ; 004fc3f7 | = "yStickMin" | s_yStickMin_0063001e = yStickMin
    LEA EAX,[ESP + 0x8]                 ; 004fc3fc
    PUSH EAX                            ; 004fc400
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fc401 | void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * ini_file, char * key_name, int * value_ptr)
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
    MOV EAX,[0x0067b654]                ; 004fc406 | CGame * g_CGamePtr
    ADD ESP,0xc                         ; 004fc40b
    ADD EAX,0xb8                        ; 004fc40e
    PUSH EAX                            ; 004fc413 | DAT_02d81b54
    PUSH 0x630028                       ; 004fc414 | = "yStickMax" | s_yStickMax_00630028 = yStickMax
    LEA EAX,[ESP + 0x8]                 ; 004fc419
    PUSH EAX                            ; 004fc41d
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fc41e | void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * ini_file, char * key_name, int * value_ptr)
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
    MOV EAX,[0x0067b654]                ; 004fc423 | CGame * g_CGamePtr
    ADD ESP,0xc                         ; 004fc428
    ADD EAX,0xc4                        ; 004fc42b
    PUSH EAX                            ; 004fc430 | DAT_02d81b60
    PUSH 0x630032                       ; 004fc431 | = "aimMode" | s_aimMode_00630032 = aimMode
    LEA EAX,[ESP + 0x8]                 ; 004fc436
    PUSH EAX                            ; 004fc43a
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fc43b | void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * ini_file, char * key_name, int * value_ptr)
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
    MOV EAX,[0x0067b654]                ; 004fc440 | CGame * g_CGamePtr
    ADD ESP,0xc                         ; 004fc445
    ADD EAX,0xc8                        ; 004fc448
    PUSH EAX                            ; 004fc44d | DAT_02d81b64
    PUSH 0x63003a                       ; 004fc44e | = "autoUseHealth" | s_autoUseHealth_0063003a = autoUseHealth
    LEA EAX,[ESP + 0x8]                 ; 004fc453
    PUSH EAX                            ; 004fc457
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fc458 | void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * ini_file, char * key_name, int * value_ptr)
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004fc45d
    PUSH 0x67cd50                       ; 004fc460 | = "Debug" | s_Debug_0067cd50 = Debug
    LEA EAX,[ESP + 0x4]                 ; 004fc465
    PUSH EAX                            ; 004fc469
    CALL engine_ini.cpp_CIniFile_readIniHeader_FUN_004fbae0 ; 004fc46a | void engine_ini.cpp_CIniFile_readIniHeader_FUN_004fbae0(CIniFile * this, char * section)
        ;   XREF to: 004fbae0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004fc46f
    MOV EAX,[0x0066e8e0]                ; 004fc472 | CConsole * g_CConsolePtr
    PUSH EAX                            ; 004fc477 | CConsole g_ConsolePtr
    PUSH 0x630048                       ; 004fc478 | = "logConsoleFlag" | s_logConsoleFlag_00630048 = logConsoleFlag
    LEA EAX,[ESP + 0x8]                 ; 004fc47d
    PUSH EAX                            ; 004fc481
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fc482 | void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * ini_file, char * key_name, int * value_ptr)
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004fc487
    MOV EAX,[0x0067b654]                ; 004fc48a | CGame * g_CGamePtr
    ADD EAX,0x214                       ; 004fc48f
    PUSH EAX                            ; 004fc494 | DAT_02d81cb0
    PUSH 0x630057                       ; 004fc495 | = "headOfHorrorCheat" | s_headOfHorrorCheat_00630057 = headOfHorrorCheat
    LEA EAX,[ESP + 0x8]                 ; 004fc49a
    PUSH EAX                            ; 004fc49e
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fc49f | void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * ini_file, char * key_name, int * value_ptr)
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004fc4a4
    PUSH 0x67cd58                       ; 004fc4a7 | = "Editor" | s_Editor_0067cd58 = Editor
    LEA EAX,[ESP + 0x4]                 ; 004fc4ac
    PUSH EAX                            ; 004fc4b0
    CALL engine_ini.cpp_CIniFile_readIniHeader_FUN_004fbae0 ; 004fc4b1 | void engine_ini.cpp_CIniFile_readIniHeader_FUN_004fbae0(CIniFile * this, char * section)
        ;   XREF to: 004fbae0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004fc4b6
    MOV EAX,ESP                         ; 004fc4b9
    PUSH EAX                            ; 004fc4bb
    MOV EDX,dword ptr [0x0067d550]      ; 004fc4bc | CDemonMission g_CDemonMissionInstance | CDemonMission * g_CDemonMissionPtr
    PUSH EDX                            ; 004fc4c2 | CDemonMission g_CDemonMissionInstance
    CALL core_msnedit.cpp_readIni_FUN_00537530 ; 004fc4c3 | void core_msnedit.cpp_readIni_FUN_00537530(CDemonMission * mission_ptr, CIniFile * ini_file)
        ;   XREF to: 00537530 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004fc4c8
    MOV EAX,ESP                         ; 004fc4cb
    PUSH EAX                            ; 004fc4cd
    MOV ECX,dword ptr [0x006810c8]      ; 004fc4ce | CDemonSet g_CDemonSetInstance | CDemonSet * g_CDemonSetPtr
    PUSH ECX                            ; 004fc4d4 | CDemonSet g_CDemonSetInstance
    CALL core_setedit.cpp_CDemonSet_readIni_FUN_00584900 ; 004fc4d5 | void core_setedit.cpp_CDemonSet_readIni_FUN_00584900(CDemonSet * set_ptr, CIniFile * ini_file)
        ;   XREF to: 00584900 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004fc4da
    ADD ESP,0x200                       ; 004fc4dd
    POP EBP                             ; 004fc4e3
    RET                                 ; 004fc4e4
    MOV EDX,0x62fd91                    ; 004fc4e5 | = "..\\core\\inivar.cpp" | s_core_inivar_cpp_0062fd91 = ..\core\inivar.cpp
        ;   Label: LAB_004fc4e5
    MOV ECX,0x57                        ; 004fc4ea
    PUSH 0x62fda4                       ; 004fc4ef | = "Please copy Nocturne to your hard drive" | s_Please_copy_Nocturne_to__0062fda4 = Please copy Nocturne to your hard drive
    MOV dword ptr [0x02f0ca48],EDX      ; 004fc4f4 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 004fc4fa | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004fc500 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004fc505
    JMP 0x004fbdb3                      ; 004fc508 | LAB_004fbdb3
        ;   XREF to: 004fbdb3 (UNCONDITIONAL_JUMP)

