; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_inivar_cpp_readIniData_FUN_004fbd90(void)
;
; Local Variables:
; undefined1       Stack[-0x204]:1  local_204
;
; XREF[3]:
;   core_main.c_initializeGameSystems_FUN_00507a60 at 00507b41
;   core_msnedit.cpp_CDemonMission_FUN_00537680 at 00537691
;   core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0 at 00538224
;
; Referenced Globals:
;   TerminatedCString s_core_inivar_cpp_0062fd91
;   TerminatedCString s_Please_copy_Nocturne_to__0062fda4
;   TerminatedCString s_gamePIXX_0062fdcc
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
;   ... and 119 more
;
; Called Functions:
;   core_game.cpp_CGame_restoreDefaultControls_FUN_004dbbc0
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_msnedit.cpp_CDemonMission_readIni_FUN_00537530
;   core_setedit.cpp_CDemonSet_readIni_FUN_00584900
;   engine_dosio.c_setReadonlyAttribute_FUN_00600c30
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
    PUSH 0x67cce0                       ; 004fbd9e | = ".\\system\\nocturne.ini"
    CALL engine_dosio.c_setReadonlyAttribute_FUN_00600c30 ; 004fbda3
        ;   XREF to: 00600c30 (UNCONDITIONAL_CALL)  ; DWORD engine_dosio.c_setReadonlyAttribute_FUN_00600c30(char * filename, DWORD file_attributes)
    ADD ESP,0x8                         ; 004fbda8
    TEST EAX,EAX                        ; 004fbdab
    JNZ 0x004fc4e5                      ; 004fbdad
        ;   XREF to: 004fc4e5 (CONDITIONAL_JUMP)  ; LAB_004fc4e5
    PUSH EBX                            ; 004fbdb3
        ;   Label: LAB_004fbdb3
    PUSH 0x0                            ; 004fbdb4
    PUSH 0x67cce0                       ; 004fbdb6 | = ".\\system\\nocturne.ini"
    LEA EAX,[ESP + 0x14]                ; 004fbdbb
    PUSH EAX                            ; 004fbdbf
    CALL engine_ini.cpp_CIniFile_ctor_FUN_004fba70 ; 004fbdc0
        ;   XREF to: 004fba70 (UNCONDITIONAL_CALL)  ; CIniFile * engine_ini.cpp_CIniFile_ctor_FUN_004fba70(CIniFile * this_ptr, char * filename, int read_mode)
    ADD ESP,0xc                         ; 004fbdc5
    PUSH 0x67cd08                       ; 004fbdc8 | = "Graphics"
    LEA EAX,[ESP + 0x10]                ; 004fbdcd
    PUSH EAX                            ; 004fbdd1
    CALL engine_ini.cpp_CIniFile_readIniHeader_FUN_004fbae0 ; 004fbdd2
        ;   XREF to: 004fbae0 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_readIniHeader_FUN_004fbae0(CIniFile * this_ptr, char * section)
    ADD ESP,0x8                         ; 004fbdd7
    MOV EBX,dword ptr [0x0067b654]      ; 004fbdda | g_CGameInstance | g_CGamePtr
    PUSH EBX                            ; 004fbde0 | g_CGameInstance
    PUSH 0x62fdcc                       ; 004fbde1 | = "gamePIXX"
    LEA EAX,[ESP + 0x14]                ; 004fbde6
    PUSH EAX                            ; 004fbdea
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fbdeb
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * this_ptr, char * key_name, int * value_ptr)
    MOV EAX,[0x0067b654]                ; 004fbdf0 | g_CGamePtr
    ADD ESP,0xc                         ; 004fbdf5
    ADD EAX,0x4                         ; 004fbdf8
    PUSH EAX                            ; 004fbdfb | g_CGameInstance.game_pixy
    PUSH 0x62fdd5                       ; 004fbdfc | = "gamePIXY"
    LEA EAX,[ESP + 0x14]                ; 004fbe01
    PUSH EAX                            ; 004fbe05
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fbe06
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * this_ptr, char * key_name, int * value_ptr)
    MOV EAX,[0x0067b654]                ; 004fbe0b | g_CGamePtr
    ADD ESP,0xc                         ; 004fbe10
    ADD EAX,0x8                         ; 004fbe13
    PUSH EAX                            ; 004fbe16 | DAT_02d81aa4
    PUSH 0x62fdde                       ; 004fbe17 | = "gameBPP"
    LEA EAX,[ESP + 0x14]                ; 004fbe1c
    PUSH EAX                            ; 004fbe20
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fbe21
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * this_ptr, char * key_name, int * value_ptr)
    ADD ESP,0xc                         ; 004fbe26
    PUSH 0x3f6b878                      ; 004fbe29 | g_FullscreenMode
    PUSH 0x62fde6                       ; 004fbe2e | = "useDirect3D"
    LEA EAX,[ESP + 0x14]                ; 004fbe33
    PUSH EAX                            ; 004fbe37
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fbe38
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * this_ptr, char * key_name, int * value_ptr)
    ADD ESP,0xc                         ; 004fbe3d
    PUSH 0x3f6b884                      ; 004fbe40 | g_PodSystemVersion
    PUSH 0x62fdf2                       ; 004fbe45 | = "useAGPFlag"
    LEA EAX,[ESP + 0x14]                ; 004fbe4a
    PUSH EAX                            ; 004fbe4e
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fbe4f
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * this_ptr, char * key_name, int * value_ptr)
    ADD ESP,0xc                         ; 004fbe54
    PUSH 0xfa                           ; 004fbe57
    PUSH 0x684010                       ; 004fbe5c | = "trid3d.dll"
    PUSH 0x62fdfd                       ; 004fbe61 | = "rendererDLLPath"
    LEA EAX,[ESP + 0x18]                ; 004fbe66
    PUSH EAX                            ; 004fbe6a
    CALL engine_ini.cpp_CIniFile_getString_FUN_004fbb20 ; 004fbe6b
        ;   XREF to: 004fbb20 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getString_FUN_004fbb20(CIniFile * this_ptr, char * key, char * output_buffer, int buffer_size, ...)
    MOV EAX,[0x0067b654]                ; 004fbe70 | g_CGamePtr
    ADD ESP,0x10                        ; 004fbe75
    ADD EAX,0x224                       ; 004fbe78
    PUSH EAX                            ; 004fbe7d | DAT_02d81cc0
    PUSH 0x62fe0d                       ; 004fbe7e | = "gamma"
    LEA EAX,[ESP + 0x14]                ; 004fbe83
    PUSH EAX                            ; 004fbe87
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fbe88
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * this_ptr, char * key_name, int * value_ptr)
    MOV EAX,[0x0067b654]                ; 004fbe8d | g_CGamePtr
    ADD ESP,0xc                         ; 004fbe92
    ADD EAX,0xc0                        ; 004fbe95
    PUSH EAX                            ; 004fbe9a | g_CGameInstance.hero_number
    PUSH 0x62fe13                       ; 004fbe9b | = "heroNumber"
    LEA EAX,[ESP + 0x14]                ; 004fbea0
    PUSH EAX                            ; 004fbea4
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fbea5
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * this_ptr, char * key_name, int * value_ptr)
    ADD ESP,0xc                         ; 004fbeaa
    POP EBX                             ; 004fbead
    MOV EAX,[0x0067b654]                ; 004fbeae | g_CGamePtr
    ADD EAX,0xc                         ; 004fbeb3
    PUSH EAX                            ; 004fbeb6 | DAT_02d81aa8
    PUSH 0x62fe1e                       ; 004fbeb7 | = "haloMode"
    LEA EAX,[ESP + 0x10]                ; 004fbebc
    PUSH EAX                            ; 004fbec0
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fbec1
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * this_ptr, char * key_name, int * value_ptr)
    ADD ESP,0xc                         ; 004fbec6
    PUSH 0x2db8a64                      ; 004fbec9 | g_SkipIntroVideo
    PUSH 0x62fe27                       ; 004fbece | = "firstTimeFlag"
    LEA EAX,[ESP + 0x10]                ; 004fbed3
    PUSH EAX                            ; 004fbed7
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fbed8
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * this_ptr, char * key_name, int * value_ptr)
    MOV EAX,[0x0067b654]                ; 004fbedd | g_CGamePtr
    ADD ESP,0xc                         ; 004fbee2
    ADD EAX,0x10                        ; 004fbee5
    PUSH EAX                            ; 004fbee8 | DAT_02d81aac
    PUSH 0x62fe35                       ; 004fbee9 | = "subtitleMode"
    LEA EAX,[ESP + 0x10]                ; 004fbeee
    PUSH EAX                            ; 004fbef2
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fbef3
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * this_ptr, char * key_name, int * value_ptr)
    MOV EAX,[0x0067b654]                ; 004fbef8 | g_CGamePtr
    ADD ESP,0xc                         ; 004fbefd
    ADD EAX,0x14                        ; 004fbf00
    PUSH EAX                            ; 004fbf03 | g_CGameInstance.blood_flag
    PUSH 0x62fe42                       ; 004fbf04 | = "bloodFlag"
    LEA EAX,[ESP + 0x10]                ; 004fbf09
    PUSH EAX                            ; 004fbf0d
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fbf0e
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * this_ptr, char * key_name, int * value_ptr)
    MOV EAX,[0x0067b654]                ; 004fbf13 | g_CGamePtr
    ADD ESP,0xc                         ; 004fbf18
    ADD EAX,0x18                        ; 004fbf1b
    PUSH EAX                            ; 004fbf1e | g_CGameInstance.nudity_flag
    PUSH 0x62fe4c                       ; 004fbf1f | = "nudityFlag"
    LEA EAX,[ESP + 0x10]                ; 004fbf24
    PUSH EAX                            ; 004fbf28
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fbf29
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * this_ptr, char * key_name, int * value_ptr)
    MOV EAX,[0x0067b654]                ; 004fbf2e | g_CGamePtr
    ADD ESP,0xc                         ; 004fbf33
    ADD EAX,0x1c                        ; 004fbf36
    PUSH EAX                            ; 004fbf39 | DAT_02d81ab8
    PUSH 0x62fe57                       ; 004fbf3a | = "foulLanguageFlag"
    LEA EAX,[ESP + 0x10]                ; 004fbf3f
    PUSH EAX                            ; 004fbf43
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fbf44
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * this_ptr, char * key_name, int * value_ptr)
    MOV EAX,[0x0067b654]                ; 004fbf49 | g_CGamePtr
    ADD ESP,0xc                         ; 004fbf4e
    ADD EAX,0x24                        ; 004fbf51
    PUSH EAX                            ; 004fbf54 | DAT_02d81ac0
    PUSH 0x62fe68                       ; 004fbf55 | = "shadowFlag"
    LEA EAX,[ESP + 0x10]                ; 004fbf5a
    PUSH EAX                            ; 004fbf5e
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fbf5f
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * this_ptr, char * key_name, int * value_ptr)
    MOV EAX,[0x0067b654]                ; 004fbf64 | g_CGamePtr
    ADD ESP,0xc                         ; 004fbf69
    ADD EAX,0x20                        ; 004fbf6c
    PUSH EAX                            ; 004fbf6f | DAT_02d81abc
    PUSH 0x62fe73                       ; 004fbf70 | = "quimbyFlag"
    LEA EAX,[ESP + 0x10]                ; 004fbf75
    PUSH EAX                            ; 004fbf79
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fbf7a
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * this_ptr, char * key_name, int * value_ptr)
    MOV EAX,[0x0067b654]                ; 004fbf7f | g_CGamePtr
    MOV ESI,dword ptr [EAX + 0x20]      ; 004fbf84 | DAT_02d81abc
    ADD ESP,0xc                         ; 004fbf87
    TEST ESI,ESI                        ; 004fbf8a
    JZ 0x004fbfa3                       ; 004fbf8c
        ;   XREF to: 004fbfa3 (CONDITIONAL_JUMP)  ; LAB_004fbfa3
    MOV dword ptr [EAX + 0x18],0x0      ; 004fbf8e | g_CGameInstance.nudity_flag
    MOV dword ptr [EAX + 0x1c],0x0      ; 004fbf95 | DAT_02d81ab8
    MOV dword ptr [EAX + 0x14],0x0      ; 004fbf9c | g_CGameInstance.blood_flag
    PUSH 0x2f275f4                      ; 004fbfa3 | g_GraphicsCardHandle
        ;   Label: LAB_004fbfa3
    PUSH 0x62fe7e                       ; 004fbfa8 | = "currentBoard"
    LEA EAX,[ESP + 0x10]                ; 004fbfad
    XOR EDI,EDI                         ; 004fbfb1
    PUSH EAX                            ; 004fbfb3
    MOV dword ptr [0x02f275f4],EDI      ; 004fbfb4 | g_GraphicsCardHandle
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fbfba
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * this_ptr, char * key_name, int * value_ptr)
    ADD ESP,0xc                         ; 004fbfbf
    PUSH 0x67cd00                       ; 004fbfc2 | = "Sound"
    LEA EAX,[ESP + 0xc]                 ; 004fbfc7
    PUSH EAX                            ; 004fbfcb
    CALL engine_ini.cpp_CIniFile_readIniHeader_FUN_004fbae0 ; 004fbfcc
        ;   XREF to: 004fbae0 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_readIniHeader_FUN_004fbae0(CIniFile * this_ptr, char * section)
    ADD ESP,0x8                         ; 004fbfd1
    LEA EAX,[ESP + 0x8]                 ; 004fbfd4
    PUSH EAX                            ; 004fbfd8
    CALL sound_sndmain.cpp_readIni_FUN_005abf20 ; 004fbfd9
        ;   XREF to: 005abf20 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_readIni_FUN_005abf20(CIniFile * ini_file)
    ADD ESP,0x4                         ; 004fbfde
    PUSH 0x67cd18                       ; 004fbfe1 | = "Control"
    LEA EAX,[ESP + 0xc]                 ; 004fbfe6
    PUSH EAX                            ; 004fbfea
    CALL engine_ini.cpp_CIniFile_readIniHeader_FUN_004fbae0 ; 004fbfeb
        ;   XREF to: 004fbae0 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_readIniHeader_FUN_004fbae0(CIniFile * this_ptr, char * section)
    MOV EAX,[0x0067b654]                ; 004fbff0 | g_CGamePtr
    ADD ESP,0x8                         ; 004fbff5
    ADD EAX,0xbc                        ; 004fbff8
    PUSH EAX                            ; 004fbffd | g_CGameInstance.game_control
    PUSH 0x62fe8b                       ; 004fbffe | = "gameControl"
    LEA EAX,[ESP + 0x10]                ; 004fc003
    PUSH EAX                            ; 004fc007
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fc008
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * this_ptr, char * key_name, int * value_ptr)
    ADD ESP,0xc                         ; 004fc00d
    MOV EBP,dword ptr [0x0067b654]      ; 004fc010 | g_CGamePtr
    PUSH EBP                            ; 004fc016 | g_CGameInstance
    CALL core_game.cpp_CGame_restoreDefaultControls_FUN_004dbbc0 ; 004fc017
        ;   XREF to: 004dbbc0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_restoreDefaultControls_FUN_004dbbc0(CGame * this_ptr)
    MOV EAX,[0x0067b654]                ; 004fc01c | g_CGamePtr
    ADD ESP,0x4                         ; 004fc021
    ADD EAX,0x28                        ; 004fc024
    PUSH EAX                            ; 004fc027 | g_CGameInstance.key_walk
    PUSH 0x62fe97                       ; 004fc028 | = "keyWalk"
    LEA EAX,[ESP + 0x10]                ; 004fc02d
    PUSH EAX                            ; 004fc031
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fc032
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * this_ptr, char * key_name, int * value_ptr)
    MOV EAX,[0x0067b654]                ; 004fc037 | g_CGamePtr
    ADD ESP,0xc                         ; 004fc03c
    ADD EAX,0x2c                        ; 004fc03f
    PUSH EAX                            ; 004fc042 | g_CGameInstance.key_backup
    PUSH 0x62fe9f                       ; 004fc043 | = "keyBackup"
    LEA EAX,[ESP + 0x10]                ; 004fc048
    PUSH EAX                            ; 004fc04c
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fc04d
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * this_ptr, char * key_name, int * value_ptr)
    MOV EAX,[0x0067b654]                ; 004fc052 | g_CGamePtr
    ADD ESP,0xc                         ; 004fc057
    ADD EAX,0x30                        ; 004fc05a
    PUSH EAX                            ; 004fc05d | g_CGameInstance.key_run
    PUSH 0x62fea9                       ; 004fc05e | = "keyRun"
    LEA EAX,[ESP + 0x10]                ; 004fc063
    PUSH EAX                            ; 004fc067
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fc068
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * this_ptr, char * key_name, int * value_ptr)
    MOV EAX,[0x0067b654]                ; 004fc06d | g_CGamePtr
    ADD ESP,0xc                         ; 004fc072
    ADD EAX,0x34                        ; 004fc075
    PUSH EAX                            ; 004fc078 | g_CGameInstance.key_strafe
    PUSH 0x62feb0                       ; 004fc079 | = "keyStrafe"
    LEA EAX,[ESP + 0x10]                ; 004fc07e
    PUSH EAX                            ; 004fc082
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fc083
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * this_ptr, char * key_name, int * value_ptr)
    MOV EAX,[0x0067b654]                ; 004fc088 | g_CGamePtr
    ADD ESP,0xc                         ; 004fc08d
    ADD EAX,0x38                        ; 004fc090
    PUSH EAX                            ; 004fc093 | g_CGameInstance.key_strafe_left
    PUSH 0x62feba                       ; 004fc094 | = "keyStrafeLeft"
    LEA EAX,[ESP + 0x10]                ; 004fc099
    PUSH EAX                            ; 004fc09d
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fc09e
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * this_ptr, char * key_name, int * value_ptr)
    ADD ESP,0xc                         ; 004fc0a3
    POP ESI                             ; 004fc0a6
    POP EDI                             ; 004fc0a7
    MOV EAX,[0x0067b654]                ; 004fc0a8 | g_CGamePtr
    ADD EAX,0x3c                        ; 004fc0ad
    PUSH EAX                            ; 004fc0b0 | g_CGameInstance.key_strafe_right
    PUSH 0x62fec8                       ; 004fc0b1 | = "keyStrafeRight"
    LEA EAX,[ESP + 0x8]                 ; 004fc0b6
    PUSH EAX                            ; 004fc0ba
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fc0bb
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * this_ptr, char * key_name, int * value_ptr)
    MOV EAX,[0x0067b654]                ; 004fc0c0 | g_CGamePtr
    ADD ESP,0xc                         ; 004fc0c5
    ADD EAX,0x40                        ; 004fc0c8
    PUSH EAX                            ; 004fc0cb | g_CGameInstance.key_right
    PUSH 0x62fed7                       ; 004fc0cc | = "keyRight"
    LEA EAX,[ESP + 0x8]                 ; 004fc0d1
    PUSH EAX                            ; 004fc0d5
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fc0d6
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * this_ptr, char * key_name, int * value_ptr)
    MOV EAX,[0x0067b654]                ; 004fc0db | g_CGamePtr
    ADD ESP,0xc                         ; 004fc0e0
    ADD EAX,0x44                        ; 004fc0e3
    PUSH EAX                            ; 004fc0e6 | g_CGameInstance.key_left
    PUSH 0x62fee0                       ; 004fc0e7 | = "keyLeft"
    LEA EAX,[ESP + 0x8]                 ; 004fc0ec
    PUSH EAX                            ; 004fc0f0
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fc0f1
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * this_ptr, char * key_name, int * value_ptr)
    MOV EAX,[0x0067b654]                ; 004fc0f6 | g_CGamePtr
    ADD ESP,0xc                         ; 004fc0fb
    ADD EAX,0x48                        ; 004fc0fe
    PUSH EAX                            ; 004fc101 | g_CGameInstance.key_fire
    PUSH 0x62fee8                       ; 004fc102 | = "keyFire"
    LEA EAX,[ESP + 0x8]                 ; 004fc107
    PUSH EAX                            ; 004fc10b
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fc10c
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * this_ptr, char * key_name, int * value_ptr)
    MOV EAX,[0x0067b654]                ; 004fc111 | g_CGamePtr
    ADD ESP,0xc                         ; 004fc116
    ADD EAX,0x4c                        ; 004fc119
    PUSH EAX                            ; 004fc11c | g_CGameInstance.key_use_item
    PUSH 0x62fef0                       ; 004fc11d | = "keyUseItem"
    LEA EAX,[ESP + 0x8]                 ; 004fc122
    PUSH EAX                            ; 004fc126
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fc127
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * this_ptr, char * key_name, int * value_ptr)
    MOV EAX,[0x0067b654]                ; 004fc12c | g_CGamePtr
    ADD ESP,0xc                         ; 004fc131
    ADD EAX,0x50                        ; 004fc134
    PUSH EAX                            ; 004fc137 | g_CGameInstance.key_light
    PUSH 0x62fefb                       ; 004fc138 | = "keyLight"
    LEA EAX,[ESP + 0x8]                 ; 004fc13d
    PUSH EAX                            ; 004fc141
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fc142
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * this_ptr, char * key_name, int * value_ptr)
    MOV EAX,[0x0067b654]                ; 004fc147 | g_CGamePtr
    ADD ESP,0xc                         ; 004fc14c
    ADD EAX,0x54                        ; 004fc14f
    PUSH EAX                            ; 004fc152 | g_CGameInstance.key_infrared
    PUSH 0x62ff04                       ; 004fc153 | = "keyInfrared"
    LEA EAX,[ESP + 0x8]                 ; 004fc158
    PUSH EAX                            ; 004fc15c
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fc15d
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * this_ptr, char * key_name, int * value_ptr)
    MOV EAX,[0x0067b654]                ; 004fc162 | g_CGamePtr
    ADD ESP,0xc                         ; 004fc167
    ADD EAX,0x58                        ; 004fc16a
    PUSH EAX                            ; 004fc16d | g_CGameInstance.key_draw
    PUSH 0x62ff10                       ; 004fc16e | = "keyDraw"
    LEA EAX,[ESP + 0x8]                 ; 004fc173
    PUSH EAX                            ; 004fc177
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fc178
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * this_ptr, char * key_name, int * value_ptr)
    MOV EAX,[0x0067b654]                ; 004fc17d | g_CGamePtr
    ADD ESP,0xc                         ; 004fc182
    ADD EAX,0x5c                        ; 004fc185
    PUSH EAX                            ; 004fc188 | g_CGameInstance.key_jump
    PUSH 0x62ff18                       ; 004fc189 | = "keyJump"
    LEA EAX,[ESP + 0x8]                 ; 004fc18e
    PUSH EAX                            ; 004fc192
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fc193
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * this_ptr, char * key_name, int * value_ptr)
    ADD ESP,0xc                         ; 004fc198
    MOV EAX,[0x0067b654]                ; 004fc19b | g_CGamePtr
    ADD EAX,0x60                        ; 004fc1a0
    PUSH EAX                            ; 004fc1a3 | g_CGameInstance.key_point_up
    PUSH 0x62ff20                       ; 004fc1a4 | = "keyPointUp"
    LEA EAX,[ESP + 0x8]                 ; 004fc1a9
    PUSH EAX                            ; 004fc1ad
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fc1ae
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * this_ptr, char * key_name, int * value_ptr)
    MOV EAX,[0x0067b654]                ; 004fc1b3 | g_CGamePtr
    ADD ESP,0xc                         ; 004fc1b8
    ADD EAX,0x64                        ; 004fc1bb
    PUSH EAX                            ; 004fc1be | g_CGameInstance.key_point_down
    PUSH 0x62ff2b                       ; 004fc1bf | = "keyPointDown"
    LEA EAX,[ESP + 0x8]                 ; 004fc1c4
    PUSH EAX                            ; 004fc1c8
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fc1c9
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * this_ptr, char * key_name, int * value_ptr)
    MOV EAX,[0x0067b654]                ; 004fc1ce | g_CGamePtr
    ADD ESP,0xc                         ; 004fc1d3
    ADD EAX,0x68                        ; 004fc1d6
    PUSH EAX                            ; 004fc1d9 | g_CGameInstance.key_weapon_1
    PUSH 0x62ff38                       ; 004fc1da | = "keyWeapon1"
    LEA EAX,[ESP + 0x8]                 ; 004fc1df
    PUSH EAX                            ; 004fc1e3
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fc1e4
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * this_ptr, char * key_name, int * value_ptr)
    MOV EAX,[0x0067b654]                ; 004fc1e9 | g_CGamePtr
    ADD ESP,0xc                         ; 004fc1ee
    ADD EAX,0x6c                        ; 004fc1f1
    PUSH EAX                            ; 004fc1f4 | g_CGameInstance.key_weapon_2
    PUSH 0x62ff43                       ; 004fc1f5 | = "keyWeapon2"
    LEA EAX,[ESP + 0x8]                 ; 004fc1fa
    PUSH EAX                            ; 004fc1fe
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fc1ff
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * this_ptr, char * key_name, int * value_ptr)
    MOV EAX,[0x0067b654]                ; 004fc204 | g_CGamePtr
    ADD ESP,0xc                         ; 004fc209
    ADD EAX,0x70                        ; 004fc20c
    PUSH EAX                            ; 004fc20f | g_CGameInstance.key_weapon_3
    PUSH 0x62ff4e                       ; 004fc210 | = "keyWeapon3"
    LEA EAX,[ESP + 0x8]                 ; 004fc215
    PUSH EAX                            ; 004fc219
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fc21a
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * this_ptr, char * key_name, int * value_ptr)
    MOV EAX,[0x0067b654]                ; 004fc21f | g_CGamePtr
    ADD ESP,0xc                         ; 004fc224
    ADD EAX,0x74                        ; 004fc227
    PUSH EAX                            ; 004fc22a | g_CGameInstance.key_weapon_4
    PUSH 0x62ff59                       ; 004fc22b | = "keyWeapon4"
    LEA EAX,[ESP + 0x8]                 ; 004fc230
    PUSH EAX                            ; 004fc234
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fc235
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * this_ptr, char * key_name, int * value_ptr)
    MOV EAX,[0x0067b654]                ; 004fc23a | g_CGamePtr
    ADD ESP,0xc                         ; 004fc23f
    ADD EAX,0x78                        ; 004fc242
    PUSH EAX                            ; 004fc245 | g_CGameInstance.key_weapon_5
    PUSH 0x62ff64                       ; 004fc246 | = "keyWeapon5"
    LEA EAX,[ESP + 0x8]                 ; 004fc24b
    PUSH EAX                            ; 004fc24f
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fc250
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * this_ptr, char * key_name, int * value_ptr)
    MOV EAX,[0x0067b654]                ; 004fc255 | g_CGamePtr
    ADD ESP,0xc                         ; 004fc25a
    ADD EAX,0x7c                        ; 004fc25d
    PUSH EAX                            ; 004fc260 | g_CGameInstance.key_next_weapon
    PUSH 0x62ff6f                       ; 004fc261 | = "keyNextWeapon"
    LEA EAX,[ESP + 0x8]                 ; 004fc266
    PUSH EAX                            ; 004fc26a
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fc26b
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * this_ptr, char * key_name, int * value_ptr)
    MOV EAX,[0x0067b654]                ; 004fc270 | g_CGamePtr
    ADD ESP,0xc                         ; 004fc275
    ADD EAX,0x80                        ; 004fc278
    PUSH EAX                            ; 004fc27d | g_CGameInstance.key_prev_weapon
    PUSH 0x62ff7d                       ; 004fc27e | = "keyPrevWeapon"
    LEA EAX,[ESP + 0x8]                 ; 004fc283
    PUSH EAX                            ; 004fc287
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fc288
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * this_ptr, char * key_name, int * value_ptr)
    ADD ESP,0xc                         ; 004fc28d
    MOV EAX,[0x0067b654]                ; 004fc290 | g_CGamePtr
    ADD EAX,0x84                        ; 004fc295
    PUSH EAX                            ; 004fc29a | g_CGameInstance.key_next_item
    PUSH 0x62ff8b                       ; 004fc29b | = "keyNextItem"
    LEA EAX,[ESP + 0x8]                 ; 004fc2a0
    PUSH EAX                            ; 004fc2a4
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fc2a5
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * this_ptr, char * key_name, int * value_ptr)
    MOV EAX,[0x0067b654]                ; 004fc2aa | g_CGamePtr
    ADD ESP,0xc                         ; 004fc2af
    ADD EAX,0x88                        ; 004fc2b2
    PUSH EAX                            ; 004fc2b7 | g_CGameInstance.key_prev_item
    PUSH 0x62ff97                       ; 004fc2b8 | = "keyPrevItem"
    LEA EAX,[ESP + 0x8]                 ; 004fc2bd
    PUSH EAX                            ; 004fc2c1
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fc2c2
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * this_ptr, char * key_name, int * value_ptr)
    MOV EAX,[0x0067b654]                ; 004fc2c7 | g_CGamePtr
    ADD ESP,0xc                         ; 004fc2cc
    ADD EAX,0x8c                        ; 004fc2cf
    PUSH EAX                            ; 004fc2d4 | g_CGameInstance.key_item_desc
    PUSH 0x62ffa3                       ; 004fc2d5 | = "keyItemDesc"
    LEA EAX,[ESP + 0x8]                 ; 004fc2da
    PUSH EAX                            ; 004fc2de
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fc2df
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * this_ptr, char * key_name, int * value_ptr)
    MOV EAX,[0x0067b654]                ; 004fc2e4 | g_CGamePtr
    ADD ESP,0xc                         ; 004fc2e9
    ADD EAX,0x90                        ; 004fc2ec
    PUSH EAX                            ; 004fc2f1 | g_CGameInstance.key_next_ammo
    PUSH 0x62ffaf                       ; 004fc2f2 | = "keyNextAmmo"
    LEA EAX,[ESP + 0x8]                 ; 004fc2f7
    PUSH EAX                            ; 004fc2fb
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fc2fc
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * this_ptr, char * key_name, int * value_ptr)
    MOV EAX,[0x0067b654]                ; 004fc301 | g_CGamePtr
    ADD ESP,0xc                         ; 004fc306
    ADD EAX,0x94                        ; 004fc309
    PUSH EAX                            ; 004fc30e | DAT_02d81b30
    PUSH 0x62ffbb                       ; 004fc30f | = "invertMouseYAxis"
    LEA EAX,[ESP + 0x8]                 ; 004fc314
    PUSH EAX                            ; 004fc318
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fc319
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * this_ptr, char * key_name, int * value_ptr)
    MOV EAX,[0x0067b654]                ; 004fc31e | g_CGamePtr
    ADD ESP,0xc                         ; 004fc323
    ADD EAX,0x98                        ; 004fc326
    PUSH EAX                            ; 004fc32b | g_CGameInstance.always_run
    PUSH 0x62ffcc                       ; 004fc32c | = "alwaysRun"
    LEA EAX,[ESP + 0x8]                 ; 004fc331
    PUSH EAX                            ; 004fc335
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fc336
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * this_ptr, char * key_name, int * value_ptr)
    MOV EAX,[0x0067b654]                ; 004fc33b | g_CGamePtr
    ADD ESP,0xc                         ; 004fc340
    ADD EAX,0x9c                        ; 004fc343
    PUSH EAX                            ; 004fc348 | DAT_02d81b38
    PUSH 0x62ffd6                       ; 004fc349 | = "xMouseSensitivity"
    LEA EAX,[ESP + 0x8]                 ; 004fc34e
    PUSH EAX                            ; 004fc352
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fc353
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * this_ptr, char * key_name, int * value_ptr)
    MOV EAX,[0x0067b654]                ; 004fc358 | g_CGamePtr
    ADD ESP,0xc                         ; 004fc35d
    ADD EAX,0xa0                        ; 004fc360
    PUSH EAX                            ; 004fc365 | DAT_02d81b3c
    PUSH 0x62ffe8                       ; 004fc366 | = "yMouseSensitivity"
    LEA EAX,[ESP + 0x8]                 ; 004fc36b
    PUSH EAX                            ; 004fc36f
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fc370
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * this_ptr, char * key_name, int * value_ptr)
    MOV EAX,[0x0067b654]                ; 004fc375 | g_CGamePtr
    ADD ESP,0xc                         ; 004fc37a
    ADD EAX,0xa4                        ; 004fc37d
    PUSH EAX                            ; 004fc382 | g_CGameInstance.x_center
    PUSH 0x62fffa                       ; 004fc383 | = "xCenter"
    LEA EAX,[ESP + 0x8]                 ; 004fc388
    PUSH EAX                            ; 004fc38c
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fc38d
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * this_ptr, char * key_name, int * value_ptr)
    ADD ESP,0xc                         ; 004fc392
    MOV EAX,[0x0067b654]                ; 004fc395 | g_CGamePtr
    ADD EAX,0xa8                        ; 004fc39a
    PUSH EAX                            ; 004fc39f | DAT_02d81b44
    PUSH 0x630002                       ; 004fc3a0 | = "yCenter"
    LEA EAX,[ESP + 0x8]                 ; 004fc3a5
    PUSH EAX                            ; 004fc3a9
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fc3aa
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * this_ptr, char * key_name, int * value_ptr)
    MOV EAX,[0x0067b654]                ; 004fc3af | g_CGamePtr
    ADD ESP,0xc                         ; 004fc3b4
    ADD EAX,0xac                        ; 004fc3b7
    PUSH EAX                            ; 004fc3bc | DAT_02d81b48
    PUSH 0x63000a                       ; 004fc3bd | = "xStickMin"
    LEA EAX,[ESP + 0x8]                 ; 004fc3c2
    PUSH EAX                            ; 004fc3c6
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fc3c7
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * this_ptr, char * key_name, int * value_ptr)
    MOV EAX,[0x0067b654]                ; 004fc3cc | g_CGamePtr
    ADD ESP,0xc                         ; 004fc3d1
    ADD EAX,0xb0                        ; 004fc3d4
    PUSH EAX                            ; 004fc3d9 | DAT_02d81b4c
    PUSH 0x630014                       ; 004fc3da | = "xStickMax"
    LEA EAX,[ESP + 0x8]                 ; 004fc3df
    PUSH EAX                            ; 004fc3e3
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fc3e4
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * this_ptr, char * key_name, int * value_ptr)
    MOV EAX,[0x0067b654]                ; 004fc3e9 | g_CGamePtr
    ADD ESP,0xc                         ; 004fc3ee
    ADD EAX,0xb4                        ; 004fc3f1
    PUSH EAX                            ; 004fc3f6 | DAT_02d81b50
    PUSH 0x63001e                       ; 004fc3f7 | = "yStickMin"
    LEA EAX,[ESP + 0x8]                 ; 004fc3fc
    PUSH EAX                            ; 004fc400
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fc401
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * this_ptr, char * key_name, int * value_ptr)
    MOV EAX,[0x0067b654]                ; 004fc406 | g_CGamePtr
    ADD ESP,0xc                         ; 004fc40b
    ADD EAX,0xb8                        ; 004fc40e
    PUSH EAX                            ; 004fc413 | DAT_02d81b54
    PUSH 0x630028                       ; 004fc414 | = "yStickMax"
    LEA EAX,[ESP + 0x8]                 ; 004fc419
    PUSH EAX                            ; 004fc41d
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fc41e
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * this_ptr, char * key_name, int * value_ptr)
    MOV EAX,[0x0067b654]                ; 004fc423 | g_CGamePtr
    ADD ESP,0xc                         ; 004fc428
    ADD EAX,0xc4                        ; 004fc42b
    PUSH EAX                            ; 004fc430 | DAT_02d81b60
    PUSH 0x630032                       ; 004fc431 | = "aimMode"
    LEA EAX,[ESP + 0x8]                 ; 004fc436
    PUSH EAX                            ; 004fc43a
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fc43b
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * this_ptr, char * key_name, int * value_ptr)
    MOV EAX,[0x0067b654]                ; 004fc440 | g_CGamePtr
    ADD ESP,0xc                         ; 004fc445
    ADD EAX,0xc8                        ; 004fc448
    PUSH EAX                            ; 004fc44d | DAT_02d81b64
    PUSH 0x63003a                       ; 004fc44e | = "autoUseHealth"
    LEA EAX,[ESP + 0x8]                 ; 004fc453
    PUSH EAX                            ; 004fc457
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fc458
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * this_ptr, char * key_name, int * value_ptr)
    ADD ESP,0xc                         ; 004fc45d
    PUSH 0x67cd50                       ; 004fc460 | = "Debug"
    LEA EAX,[ESP + 0x4]                 ; 004fc465
    PUSH EAX                            ; 004fc469
    CALL engine_ini.cpp_CIniFile_readIniHeader_FUN_004fbae0 ; 004fc46a
        ;   XREF to: 004fbae0 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_readIniHeader_FUN_004fbae0(CIniFile * this_ptr, char * section)
    ADD ESP,0x8                         ; 004fc46f
    MOV EAX,[0x0066e8e0]                ; 004fc472 | g_CConsolePtr
    PUSH EAX                            ; 004fc477 | g_ConsolePtr
    PUSH 0x630048                       ; 004fc478 | = "logConsoleFlag"
    LEA EAX,[ESP + 0x8]                 ; 004fc47d
    PUSH EAX                            ; 004fc481
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fc482
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * this_ptr, char * key_name, int * value_ptr)
    ADD ESP,0xc                         ; 004fc487
    MOV EAX,[0x0067b654]                ; 004fc48a | g_CGamePtr
    ADD EAX,0x214                       ; 004fc48f
    PUSH EAX                            ; 004fc494 | DAT_02d81cb0
    PUSH 0x630057                       ; 004fc495 | = "headOfHorrorCheat"
    LEA EAX,[ESP + 0x8]                 ; 004fc49a
    PUSH EAX                            ; 004fc49e
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004fc49f
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * this_ptr, char * key_name, int * value_ptr)
    ADD ESP,0xc                         ; 004fc4a4
    PUSH 0x67cd58                       ; 004fc4a7 | = "Editor"
    LEA EAX,[ESP + 0x4]                 ; 004fc4ac
    PUSH EAX                            ; 004fc4b0
    CALL engine_ini.cpp_CIniFile_readIniHeader_FUN_004fbae0 ; 004fc4b1
        ;   XREF to: 004fbae0 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_readIniHeader_FUN_004fbae0(CIniFile * this_ptr, char * section)
    ADD ESP,0x8                         ; 004fc4b6
    MOV EAX,ESP                         ; 004fc4b9
    PUSH EAX                            ; 004fc4bb
    MOV EDX,dword ptr [0x0067d550]      ; 004fc4bc | g_CDemonMissionInstance | g_CDemonMissionPtr
    PUSH EDX                            ; 004fc4c2 | g_CDemonMissionInstance
    CALL core_msnedit.cpp_CDemonMission_readIni_FUN_00537530 ; 004fc4c3
        ;   XREF to: 00537530 (UNCONDITIONAL_CALL)  ; void core_msnedit.cpp_CDemonMission_readIni_FUN_00537530(CDemonMission * this_ptr, CIniFile * ini_file)
    ADD ESP,0x8                         ; 004fc4c8
    MOV EAX,ESP                         ; 004fc4cb
    PUSH EAX                            ; 004fc4cd
    MOV ECX,dword ptr [0x006810c8]      ; 004fc4ce | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH ECX                            ; 004fc4d4 | g_CDemonSetInstance
    CALL core_setedit.cpp_CDemonSet_readIni_FUN_00584900 ; 004fc4d5
        ;   XREF to: 00584900 (UNCONDITIONAL_CALL)  ; void core_setedit.cpp_CDemonSet_readIni_FUN_00584900(CDemonSet * set_ptr, CIniFile * ini_file)
    ADD ESP,0x8                         ; 004fc4da
    ADD ESP,0x200                       ; 004fc4dd
    POP EBP                             ; 004fc4e3
    RET                                 ; 004fc4e4
    MOV EDX,0x62fd91                    ; 004fc4e5 | = "..\\core\\inivar.cpp"
        ;   Label: LAB_004fc4e5
    MOV ECX,0x57                        ; 004fc4ea
    PUSH 0x62fda4                       ; 004fc4ef | = "Please copy Nocturne to your hard drive"
    MOV dword ptr [0x02f0ca48],EDX      ; 004fc4f4 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 004fc4fa | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004fc500
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004fc505
    JMP 0x004fbdb3                      ; 004fc508
        ;   XREF to: 004fbdb3 (UNCONDITIONAL_JUMP)  ; LAB_004fbdb3

