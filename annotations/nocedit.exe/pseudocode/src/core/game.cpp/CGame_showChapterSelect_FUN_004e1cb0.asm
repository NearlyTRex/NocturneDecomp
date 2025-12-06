; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_game.cpp_CGame_showChapterSelect_FUN_004e1cb0(CGame * this_ptr, int unknown)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   unknown
; Local Variables:
; undefined4       Stack[-0x6ec]:4  local_6ec
; undefined1       Stack[-0x344]:1  local_344
; undefined1       Stack[-0x144]:1  local_144
; undefined1       Stack[-0x143]:1  local_143
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_main.c_showDeveloperToolsMenu_FUN_005073a0 at 0050777b
;   core_menu.cpp_showMainGameMenu_FUN_00512f40 at 005131af
;
; Referenced Globals:
;   TerminatedCString s_rt_0062cc71
;   TerminatedCString s_world_0062cc74
;   TerminatedCString s_core_game_cpp_0062cc7a
;   TerminatedCString s_rb_0062cc8b
;   TerminatedCString s_enemy_pod_0062cc8e
;   undefined4 g_PodDir
;   TerminatedCString s_core_game_cpp_0062cc99
;   TerminatedCString s_core_game_cpp_0062ccaa
;   TerminatedCString s_rt_0062ccbb
;   TerminatedCString s_pod_ini_0062ccbe
;   TerminatedCString s_core_game_cpp_0062ccc6
;   TerminatedCString s_Game_0062ccd7
;   TerminatedCString s_system_nocturne_ini_0062ccdc
;   TerminatedCString s_Act1Code_0062ccf0
;   TerminatedCString s_Act2Code_0062ccf9
;   ... and 82 more
;
; Called Functions:
;   core_event.cpp_CEventList_FUN_004b0460
;   core_game.cpp_CGame_loadSaveGame_FUN_004e12b0
;   core_level.cpp_CLevelLoader_show_FUN_00503dc0
;   core_mission.cpp_CDemonMission_createHeros_FUN_00524a80
;   core_mission.cpp_CDemonMission_FUN_00524760
;   core_mission.cpp_CDemonMission_load_FUN_00522d90
;   core_mission.cpp_CDemonMission_run_FUN_00524420
;   crt_string.c_stricmp_FUN_005fe7f0
;   engine_dosio.c_getFile_FUN_00481a50
;   engine_ini.cpp_CIniFile_ctor_FUN_004fba70
;   engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
;   shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
;   shape_edittool.cpp_CPickList_clear_FUN_004a5770
;   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
;   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
;   ... and 6 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e1cb0
        ;   Label: core_game.cpp_CGame_showChapterSelect_FUN_004e1cb0
    PUSH ESI                            ; 004e1cb1
    PUSH EDI                            ; 004e1cb2
    PUSH EBP                            ; 004e1cb3
    SUB ESP,0x6dc                       ; 004e1cb4
    PUSH 0x62cc8b                       ; 004e1cba | = "rb" | s_rb_0062cc8b = rb
    PUSH 0x62cc8e                       ; 004e1cbf | = "enemy.pod" | s_enemy_pod_0062cc8e = enemy.pod
    PUSH 0x62cc98                       ; 004e1cc4 | g_PodDir
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 004e1cc9 | FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004e1cce
    TEST EAX,EAX                        ; 004e1cd1
    JNZ 0x004e20a6                      ; 004e1cd3 | LAB_004e20a6
        ;   XREF to: 004e20a6 (CONDITIONAL_JUMP)
    MOV dword ptr [ESP + 0x6d8],0x1     ; 004e1cd9
    MOV EAX,dword ptr [ESP + 0x6f0]     ; 004e1ce4
        ;   Label: LAB_004e1ce4
    MOV dword ptr [EAX + 0x24c],0x0     ; 004e1ceb
    PUSH 0xeea                          ; 004e1cf5
    MOV dword ptr [EAX + 0x254],0x0     ; 004e1cfa
    PUSH 0x62ccaa                       ; 004e1d04 | = "..\\core\\game.cpp" | s_core_game_cpp_0062ccaa = ..\core\game.cpp
    MOV dword ptr [EAX + 0x248],0x0     ; 004e1d09
    XOR EBX,EBX                         ; 004e1d13
    MOV dword ptr [EAX + 0x250],0x0     ; 004e1d15
    PUSH 0x62ccbb                       ; 004e1d1f | = "rt" | s_rt_0062ccbb = rt
    MOV dword ptr [EAX + 0x234],0x0     ; 004e1d24
    MOV EAX,[0x02cf1cd0]                ; 004e1d2e | CBitFont * g_EditorFont
    PUSH EBX                            ; 004e1d33
    MOV dword ptr [ESP + 0x6e0],EAX     ; 004e1d34
    MOV EAX,[0x020a5720]                ; 004e1d3b | CBitFont * g_ThemeFont
    PUSH 0x62ccbe                       ; 004e1d40 | = "pod.ini" | s_pod_ini_0062ccbe = pod.ini
    MOV [0x02cf1cd0],EAX                ; 004e1d45 | CBitFont * g_EditorFont
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 004e1d4a | FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 004e1d4f
    TEST EAX,EAX                        ; 004e1d52
    JZ 0x004e1d6e                       ; 004e1d54 | LAB_004e1d6e
        ;   XREF to: 004e1d6e (CONDITIONAL_JUMP)
    PUSH 0xeec                          ; 004e1d56
    PUSH 0x62ccc6                       ; 004e1d5b | = "..\\core\\game.cpp" | s_core_game_cpp_0062ccc6 = ..\core\game.cpp
    PUSH EAX                            ; 004e1d60
    MOV EBX,0x1                         ; 004e1d61
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004e1d66 | int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004e1d6b
    MOV ESI,dword ptr [ESP + 0x6f4]     ; 004e1d6e
        ;   Label: LAB_004e1d6e
    CMP ESI,0x1                         ; 004e1d75
    JNZ 0x004e1d7c                      ; 004e1d78 | LAB_004e1d7c
        ;   XREF to: 004e1d7c (CONDITIONAL_JUMP)
    MOV EBX,ESI                         ; 004e1d7a
    CMP dword ptr [ESP + 0x6d8],0x0     ; 004e1d7c
        ;   Label: LAB_004e1d7c
    JZ 0x004e1d91                       ; 004e1d84 | LAB_004e1d91
        ;   XREF to: 004e1d91 (CONDITIONAL_JUMP)
    MOV dword ptr [ESP + 0x6f4],0x1     ; 004e1d86
    PUSH 0x62ccd7                       ; 004e1d91 | = "Game" | s_Game_0062ccd7 = Game
        ;   Label: LAB_004e1d91
    XOR EAX,EAX                         ; 004e1d96
    PUSH 0x62ccdc                       ; 004e1d98 | = "system\\nocturne.ini" | s_system_nocturne_ini_0062ccdc = system\nocturne.ini
    MOV dword ptr [ESP + 0x6dc],EAX     ; 004e1d9d
    LEA EAX,[ESP + 0x3b0]               ; 004e1da4
    PUSH EAX                            ; 004e1dab
    CALL engine_ini.cpp_CIniFile_ctor_FUN_004fba70 ; 004e1dac | CIniFile * engine_ini.cpp_CIniFile_ctor_FUN_004fba70(CIniFile * this, char * filename, int read_mode)
        ;   XREF to: 004fba70 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004e1db1
    LEA EAX,[ESP + 0x6c0]               ; 004e1db4
    XOR EDX,EDX                         ; 004e1dbb
    PUSH EAX                            ; 004e1dbd
    MOV dword ptr [ESP + 0x6c4],EDX     ; 004e1dbe
    PUSH 0x62ccf0                       ; 004e1dc5 | = "Act1Code" | s_Act1Code_0062ccf0 = Act1Code
    LEA EAX,[ESP + 0x3b0]               ; 004e1dca
    MOV dword ptr [ESP + 0x6cc],EDX     ; 004e1dd1
    PUSH EAX                            ; 004e1dd8
    MOV dword ptr [ESP + 0x6d4],EDX     ; 004e1dd9
    MOV dword ptr [ESP + 0x6d8],EDX     ; 004e1de0
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004e1de7 | void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * ini_file, char * key_name, int * value_ptr)
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004e1dec
    LEA EAX,[ESP + 0x6c4]               ; 004e1def
    PUSH EAX                            ; 004e1df6
    PUSH 0x62ccf9                       ; 004e1df7 | = "Act2Code" | s_Act2Code_0062ccf9 = Act2Code
    LEA EAX,[ESP + 0x3b0]               ; 004e1dfc
    PUSH EAX                            ; 004e1e03
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004e1e04 | void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * ini_file, char * key_name, int * value_ptr)
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004e1e09
    LEA EAX,[ESP + 0x6c8]               ; 004e1e0c
    PUSH EAX                            ; 004e1e13
    PUSH 0x62cd02                       ; 004e1e14 | = "Act3Code" | s_Act3Code_0062cd02 = Act3Code
    LEA EAX,[ESP + 0x3b0]               ; 004e1e19
    PUSH EAX                            ; 004e1e20
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004e1e21 | void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * ini_file, char * key_name, int * value_ptr)
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004e1e26
    LEA EAX,[ESP + 0x6cc]               ; 004e1e29
    PUSH EAX                            ; 004e1e30
    PUSH 0x62cd0b                       ; 004e1e31 | = "Act4Code" | s_Act4Code_0062cd0b = Act4Code
    LEA EAX,[ESP + 0x3b0]               ; 004e1e36
    PUSH EAX                            ; 004e1e3d
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30 ; 004e1e3e | void engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30(CIniFile * ini_file, char * key_name, int * value_ptr)
        ;   XREF to: 004fbc30 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004e1e43
    CMP dword ptr [ESP + 0x6c0],0x331   ; 004e1e46
    JNZ 0x004e1e85                      ; 004e1e51 | LAB_004e1e85
        ;   XREF to: 004e1e85 (CONDITIONAL_JUMP)
    CMP dword ptr [ESP + 0x6c4],0x3cc   ; 004e1e53
    JNZ 0x004e1e85                      ; 004e1e5e | LAB_004e1e85
        ;   XREF to: 004e1e85 (CONDITIONAL_JUMP)
    CMP dword ptr [ESP + 0x6c8],0x3ac   ; 004e1e60
    JNZ 0x004e1e85                      ; 004e1e6b | LAB_004e1e85
        ;   XREF to: 004e1e85 (CONDITIONAL_JUMP)
    CMP dword ptr [ESP + 0x6cc],0xd6    ; 004e1e6d
    JNZ 0x004e1e85                      ; 004e1e78 | LAB_004e1e85
        ;   XREF to: 004e1e85 (CONDITIONAL_JUMP)
    MOV dword ptr [ESP + 0x6d4],0x1     ; 004e1e7a
    PUSH 0x62cd14                       ; 004e1e85 | = "'Dark Reign of the Vampire King'" | s_Dark_Reign_of_the_Vampir_0062cd14 = 'Dark Reign of the Vampire King'
        ;   Label: LAB_004e1e85
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004e1e8a | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004e1e8f
    PUSH 0x62cd35                       ; 004e1e92 | = "'Tomb of the Underground God'" | s_Tomb_of_the_Underground__0062cd35 = 'Tomb of the Underground God'
    MOV dword ptr [ESP + 0x6b0],EAX     ; 004e1e97
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004e1e9e | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004e1ea3
    PUSH 0x62cd53                       ; 004e1ea6 | = "'Windy City Massacre'" | s_Windy_City_Massacre_0062cd53 = 'Windy City Massacre'
    MOV dword ptr [ESP + 0x6b4],EAX     ; 004e1eab
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004e1eb2 | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004e1eb7
    PUSH 0x62cd69                       ; 004e1eba | = "'The House on the Edge of Hell'" | s_The_House_on_the_Edge_of_0062cd69 = 'The House on the Edge of Hell'
    MOV dword ptr [ESP + 0x6b8],EAX     ; 004e1ebf
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004e1ec6 | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004e1ecb
    PUSH 0x62cd89                       ; 004e1ece | = "'Epilogue'" | s_Epilogue_0062cd89 = 'Epilogue'
    MOV EBP,0xffffffff                  ; 004e1ed3
    MOV dword ptr [ESP + 0x6bc],EAX     ; 004e1ed8
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004e1edf | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004e1ee4
    MOV EDI,EBP                         ; 004e1ee7
    MOV dword ptr [ESP + 0x6bc],EAX     ; 004e1ee9
    TEST EBX,EBX                        ; 004e1ef0
    JNZ 0x004e2836                      ; 004e1ef2 | LAB_004e2836
        ;   XREF to: 004e2836 (CONDITIONAL_JUMP)
    TEST EDI,EDI                        ; 004e1ef8
        ;   Label: LAB_004e1ef8
    JL 0x004e20c7                       ; 004e1efa | LAB_004e20c7
        ;   XREF to: 004e20c7 (CONDITIONAL_JUMP)
    LEA EAX,[EBP*0x4 + 0x0]             ; 004e1f00
    SUB EAX,EBP                         ; 004e1f07
    SHL EAX,0x2                         ; 004e1f09
    SHL EDI,0x2                         ; 004e1f0c
    ADD EAX,EBP                         ; 004e1f0f
    MOV ESI,dword ptr [EDI + EAX*0x4 + 0x67b750] ; 004e1f11 | undefined4 DAT_0067b718
    LEA EDI,[ESP + 0x5a8]               ; 004e1f18
    PUSH EDI                            ; 004e1f1f
    MOV AL,byte ptr [ESI]               ; 004e1f20
        ;   Label: LAB_004e1f20
    MOV byte ptr [EDI],AL               ; 004e1f22
    CMP AL,0x0                          ; 004e1f24
    JZ 0x004e1f38                       ; 004e1f26 | LAB_004e1f38
        ;   XREF to: 004e1f38 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 004e1f28
    ADD ESI,0x2                         ; 004e1f2b
    MOV byte ptr [EDI + 0x1],AL         ; 004e1f2e
    ADD EDI,0x2                         ; 004e1f31
    CMP AL,0x0                          ; 004e1f34
    JNZ 0x004e1f20                      ; 004e1f36 | LAB_004e1f20
        ;   XREF to: 004e1f20 (CONDITIONAL_JUMP)
    POP EDI                             ; 004e1f38
        ;   Label: LAB_004e1f38
    PUSH 0x62d20e                       ; 004e1f39 | = "rt" | s_rt_0062d20e = rt
    LEA EAX,[ESP + 0x5ac]               ; 004e1f3e
    PUSH EAX                            ; 004e1f45
    PUSH 0x62d211                       ; 004e1f46 | = "world" | s_world_0062d211 = world
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 004e1f4b | FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004e1f50
    TEST EAX,EAX                        ; 004e1f53
    JZ 0x004e208f                       ; 004e1f55 | LAB_004e208f
        ;   XREF to: 004e208f (CONDITIONAL_JUMP)
    PUSH 0xf77                          ; 004e1f5b
    PUSH 0x62d217                       ; 004e1f60 | = "..\\core\\game.cpp" | s_core_game_cpp_0062d217 = ..\core\game.cpp
    PUSH EAX                            ; 004e1f65
    MOV EDI,0x2d830a8                   ; 004e1f66 | undefined1 DAT_02d830a8
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004e1f6b | int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
    MOV ECX,0x41000000                  ; 004e1f70
    ADD ESP,0xc                         ; 004e1f75
    MOV EBX,dword ptr [EBP*0x4 + 0x67b854] ; 004e1f78 | DAT_0067b850
    MOV ESI,dword ptr [ESP + EBP*0x4 + 0x6ac] ; 004e1f7f
    MOV dword ptr [0x02d831a8],EBX      ; 004e1f86 | char * g_CurrentDisplayText
    PUSH EDI                            ; 004e1f8c | undefined1 DAT_02d830a8
    MOV AL,byte ptr [ESI]               ; 004e1f8d
        ;   Label: LAB_004e1f8d
    MOV byte ptr [EDI],AL               ; 004e1f8f | undefined1 DAT_02d830a8 | DAT_02d830aa
    CMP AL,0x0                          ; 004e1f91
    JZ 0x004e1fa5                       ; 004e1f93 | LAB_004e1fa5
        ;   XREF to: 004e1fa5 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 004e1f95
    ADD ESI,0x2                         ; 004e1f98
    MOV byte ptr [EDI + 0x1],AL         ; 004e1f9b | undefined1 DAT_02d830a9 | DAT_02d830ab
    ADD EDI,0x2                         ; 004e1f9e
    CMP AL,0x0                          ; 004e1fa1
    JNZ 0x004e1f8d                      ; 004e1fa3 | LAB_004e1f8d
        ;   XREF to: 004e1f8d (CONDITIONAL_JUMP)
    POP EDI                             ; 004e1fa5
        ;   Label: LAB_004e1fa5
    MOV dword ptr [0x02d831ac],ECX      ; 004e1fa6 | float g_OverlayDisplayTimer
    MOV EDX,dword ptr [0x006793d0]      ; 004e1fac | CEventList g_CEventListInstance | CEventList * g_CEventListPtr
        ;   Label: LAB_004e1fac
    PUSH EDX                            ; 004e1fb2 | CEventList g_CEventListInstance
    CALL core_event.cpp_CEventList_FUN_004b0460 ; 004e1fb3 | void core_event.cpp_CEventList_FUN_004b0460(CEventList * this_ptr)
        ;   XREF to: 004b0460 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004e1fb8
    LEA EAX,[ESP + 0x5a8]               ; 004e1fbb
    PUSH EAX                            ; 004e1fc2
    PUSH 0x2d82c80                      ; 004e1fc3 | char g_CurrentSaveFile
    MOV ESI,0x1                         ; 004e1fc8
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 004e1fcd | int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004e1fd2
    TEST EAX,EAX                        ; 004e1fd5
    JZ 0x004e2001                       ; 004e1fd7 | LAB_004e2001
        ;   XREF to: 004e2001 (CONDITIONAL_JUMP)
    LEA ESI,[ESP + 0x5a8]               ; 004e1fd9
    MOV EDI,0x2d82c80                   ; 004e1fe0 | char g_CurrentSaveFile
    PUSH EDI                            ; 004e1fe5 | char g_CurrentSaveFile
    MOV AL,byte ptr [ESI]               ; 004e1fe6
        ;   Label: LAB_004e1fe6
    MOV byte ptr [EDI],AL               ; 004e1fe8 | char g_CurrentSaveFile | DAT_02d82c82
    CMP AL,0x0                          ; 004e1fea
    JZ 0x004e1ffe                       ; 004e1fec | LAB_004e1ffe
        ;   XREF to: 004e1ffe (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 004e1fee
    ADD ESI,0x2                         ; 004e1ff1
    MOV byte ptr [EDI + 0x1],AL         ; 004e1ff4 | undefined1 DAT_02d82c81 | DAT_02d82c83
    ADD EDI,0x2                         ; 004e1ff7
    CMP AL,0x0                          ; 004e1ffa
    JNZ 0x004e1fe6                      ; 004e1ffc | LAB_004e1fe6
        ;   XREF to: 004e1fe6 (CONDITIONAL_JUMP)
    POP EDI                             ; 004e1ffe
        ;   Label: LAB_004e1ffe
    XOR ESI,ESI                         ; 004e1fff
    PUSH EBP                            ; 004e2001
        ;   Label: LAB_004e2001
    PUSH 0x0                            ; 004e2002
    PUSH 0xa                            ; 004e2004
    MOV ECX,dword ptr [0x0067cf80]      ; 004e2006 | CLevelLoader g_CLevelLoaderInstance | CLevelLoader * g_CLevelLoaderPtr
    PUSH ECX                            ; 004e200c | CLevelLoader g_CLevelLoaderInstance
    CALL core_level.cpp_CLevelLoader_show_FUN_00503dc0 ; 004e200d | void core_level.cpp_CLevelLoader_show_FUN_00503dc0(CLevelLoader * this_ptr, int total_frames, int use_custom_viewport, int image_variant)
        ;   XREF to: 00503dc0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004e2012
    PUSH ESI                            ; 004e2015
    LEA EAX,[ESP + 0x5ac]               ; 004e2016
    PUSH EAX                            ; 004e201d
    MOV EBX,dword ptr [0x0067d550]      ; 004e201e | CDemonMission g_CDemonMissionInstance | CDemonMission * g_CDemonMissionPtr
    PUSH EBX                            ; 004e2024 | CDemonMission g_CDemonMissionInstance
    CALL core_mission.cpp_CDemonMission_load_FUN_00522d90 ; 004e2025 | void core_mission.cpp_CDemonMission_load_FUN_00522d90(CDemonMission * this_ptr, char * mission_filename, int load_flags)
        ;   XREF to: 00522d90 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004e202a
    PUSH 0x0                            ; 004e202d
    MOV ESI,dword ptr [0x0067d550]      ; 004e202f | CDemonMission * g_CDemonMissionPtr
    PUSH ESI                            ; 004e2035 | CDemonMission g_CDemonMissionInstance
    CALL core_mission.cpp_CDemonMission_createHeros_FUN_00524a80 ; 004e2036 | int core_mission.cpp_CDemonMission_createHeros_FUN_00524a80(CDemonMission * this_ptr, int creation_flags)
        ;   XREF to: 00524a80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004e203b
    TEST EAX,EAX                        ; 004e203e
    JZ 0x004e208f                       ; 004e2040 | LAB_004e208f
        ;   XREF to: 004e208f (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [0x0067d550]      ; 004e2042 | CDemonMission * g_CDemonMissionPtr
    PUSH EDI                            ; 004e2048 | CDemonMission g_CDemonMissionInstance
    CALL core_mission.cpp_CDemonMission_FUN_00524760 ; 004e2049 | int core_mission.cpp_CDemonMission_FUN_00524760(CDemonMission * this_ptr)
        ;   XREF to: 00524760 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004e204e
    MOV EBP,dword ptr [0x0067d550]      ; 004e2051 | CDemonMission * g_CDemonMissionPtr
    PUSH EBP                            ; 004e2057 | CDemonMission g_CDemonMissionInstance
    CALL core_mission.cpp_CDemonMission_run_FUN_00524420 ; 004e2058 | void core_mission.cpp_CDemonMission_run_FUN_00524420(CDemonMission * this_ptr)
        ;   XREF to: 00524420 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004e205d
    MOV EAX,dword ptr [ESP + 0x6f0]     ; 004e2060
    CMP dword ptr [EAX + 0x9c4],0x0     ; 004e2067
    JZ 0x004e208f                       ; 004e206e | LAB_004e208f
        ;   XREF to: 004e208f (CONDITIONAL_JUMP)
    PUSH 0x1                            ; 004e2070
    ADD EAX,0x9c8                       ; 004e2072
    PUSH EAX                            ; 004e2077
    MOV ECX,dword ptr [ESP + 0x6f8]     ; 004e2078
    PUSH ECX                            ; 004e207f
    MOV dword ptr [EAX + -0x4],0x0      ; 004e2080
    CALL core_game.cpp_CGame_loadSaveGame_FUN_004e12b0 ; 004e2087 | void core_game.cpp_CGame_loadSaveGame_FUN_004e12b0(CGame * this_ptr, char * save_filename, int load_mode, char * chapter_name)
        ;   XREF to: 004e12b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004e208c
    MOV EAX,dword ptr [ESP + 0x6d0]     ; 004e208f
        ;   Label: LAB_004e208f
    MOV [0x02cf1cd0],EAX                ; 004e2096 | CBitFont * g_EditorFont
    ADD ESP,0x6dc                       ; 004e209b
    POP EBP                             ; 004e20a1
    POP EDI                             ; 004e20a2
    POP ESI                             ; 004e20a3
    POP EBX                             ; 004e20a4
    RET                                 ; 004e20a5
    PUSH 0xecf                          ; 004e20a6
        ;   Label: LAB_004e20a6
    PUSH 0x62cc99                       ; 004e20ab | = "..\\core\\game.cpp" | s_core_game_cpp_0062cc99 = ..\core\game.cpp
    PUSH EAX                            ; 004e20b0
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004e20b1 | int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004e20b6
    XOR ECX,ECX                         ; 004e20b9
    MOV dword ptr [ESP + 0x6d8],ECX     ; 004e20bb
    JMP 0x004e1ce4                      ; 004e20c2 | LAB_004e1ce4
        ;   XREF to: 004e1ce4 (UNCONDITIONAL_JUMP)
    MOV EAX,ESP                         ; 004e20c7
        ;   Label: LAB_004e20c7
    PUSH EAX                            ; 004e20c9
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 004e20ca | CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004e20cf
    PUSH 0x62cd94                       ; 004e20d2 | = "Volume 1 - 'Dark Reign of the Vampire..." | s_Volume_1_Dark_Reign_of_t_0062cd94 = Volume 1 - 'Dark Reign of the Vampire King'
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004e20d7 | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004e20dc
    PUSH EAX                            ; 004e20df
    LEA EAX,[ESP + 0x4]                 ; 004e20e0
    PUSH EAX                            ; 004e20e4
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004e20e5 | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004e20ea
    PUSH 0x62cdc0                       ; 004e20ed | = "Volume 2 - 'Tomb of the Underground God'" | s_Volume_2_Tomb_of_the_Und_0062cdc0 = Volume 2 - 'Tomb of the Underground God'
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004e20f2 | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004e20f7
    PUSH EAX                            ; 004e20fa
    LEA EAX,[ESP + 0x4]                 ; 004e20fb
    PUSH EAX                            ; 004e20ff
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004e2100 | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004e2105
    PUSH 0x62cde9                       ; 004e2108 | = "Volume 3 - 'Windy City Massacre'" | s_Volume_3_Windy_City_Mass_0062cde9 = Volume 3 - 'Windy City Massacre'
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004e210d | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004e2112
    PUSH EAX                            ; 004e2115
    LEA EAX,[ESP + 0x4]                 ; 004e2116
    PUSH EAX                            ; 004e211a
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004e211b | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004e2120
    PUSH 0x62ce0a                       ; 004e2123 | = "Volume 4 - 'The House on the Edge of ..." | s_Volume_4_The_House_on_th_0062ce0a = Volume 4 - 'The House on the Edge of Hell'
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004e2128 | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004e212d
    PUSH EAX                            ; 004e2130
    LEA EAX,[ESP + 0x4]                 ; 004e2131
    PUSH EAX                            ; 004e2135
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004e2136 | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004e213b
    CMP dword ptr [ESP + 0x6d4],0x0     ; 004e213e
    JZ 0x004e2163                       ; 004e2146 | LAB_004e2163
        ;   XREF to: 004e2163 (CONDITIONAL_JUMP)
    PUSH 0x62ce35                       ; 004e2148 | = "Volume 5 - 'Epilogue'" | s_Volume_5_Epilogue_0062ce35 = Volume 5 - 'Epilogue'
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004e214d | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004e2152
    PUSH EAX                            ; 004e2155
    LEA EAX,[ESP + 0x4]                 ; 004e2156
    PUSH EAX                            ; 004e215a
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004e215b | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004e2160
    MOV ESI,dword ptr [ESP + 0x6d8]     ; 004e2163
        ;   Label: LAB_004e2163
    TEST ESI,ESI                        ; 004e216a
    JNZ 0x004e21b2                      ; 004e216c | LAB_004e21b2
        ;   XREF to: 004e21b2 (CONDITIONAL_JUMP)
    MOV EBP,dword ptr [ESP]             ; 004e216e
    XOR EBX,EBX                         ; 004e2171
    TEST EBP,EBP                        ; 004e2173
    JLE 0x004e21b2                      ; 004e2175 | LAB_004e21b2
        ;   XREF to: 004e21b2 (CONDITIONAL_JUMP)
    PUSH 0x62ce4b                       ; 004e2177 | = "rt" | s_rt_0062ce4b = rt
        ;   Label: LAB_004e2177
    MOV EDX,dword ptr [ESI + 0x67b750]  ; 004e217c | PTR_s_hq_act1_msn_0067b750+1
    PUSH EDX                            ; 004e2182
    PUSH 0x62ce4e                       ; 004e2183 | = "world" | s_world_0062ce4e = world
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 004e2188 | FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004e218d
    TEST EAX,EAX                        ; 004e2190
    JNZ 0x004e232b                      ; 004e2192 | LAB_004e232b
        ;   XREF to: 004e232b (CONDITIONAL_JUMP)
    PUSH EAX                            ; 004e2198
    PUSH EBX                            ; 004e2199
    LEA EAX,[ESP + 0x8]                 ; 004e219a
    PUSH EAX                            ; 004e219e
    CALL shape_edittool.cpp_CPickList_enableItem_FUN_004a5410 ; 004e219f | void shape_edittool.cpp_CPickList_enableItem_FUN_004a5410(CPickList * this_ptr, int item_index, bool enable_flag)
        ;   XREF to: 004a5410 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004e21a4
        ;   Label: LAB_004e21a4
    MOV EAX,dword ptr [ESP]             ; 004e21a7
    INC EBX                             ; 004e21aa
    ADD ESI,0x34                        ; 004e21ab
    CMP EBX,EAX                         ; 004e21ae
    JL 0x004e2177                       ; 004e21b0 | LAB_004e2177
        ;   XREF to: 004e2177 (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 004e21b2
        ;   Label: LAB_004e21b2
    PUSH -0x1                           ; 004e21b4
    PUSH 0x62ce65                       ; 004e21b6 | = "Choose a story to play" | s_Choose_a_story_to_play_0062ce65 = Choose a story to play
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004e21bb | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004e21c0
    PUSH EAX                            ; 004e21c3
    LEA EAX,[ESP + 0xc]                 ; 004e21c4
    PUSH EAX                            ; 004e21c8
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 004e21c9 | int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004e21ce
    MOV EBP,EAX                         ; 004e21d1
    TEST EAX,EAX                        ; 004e21d3
    JL 0x004e2340                       ; 004e21d5 | LAB_004e2340
        ;   XREF to: 004e2340 (CONDITIONAL_JUMP)
    JNZ 0x004e21f5                      ; 004e21db | LAB_004e21f5
        ;   XREF to: 004e21f5 (CONDITIONAL_JUMP)
    CMP dword ptr [ESP + 0x6c0],0x331   ; 004e21dd
    JNZ 0x004e21f5                      ; 004e21e8 | LAB_004e21f5
        ;   XREF to: 004e21f5 (CONDITIONAL_JUMP)
    MOV dword ptr [ESP + 0x6f4],0x1     ; 004e21ea
    CMP EBP,0x1                         ; 004e21f5
        ;   Label: LAB_004e21f5
    JNZ 0x004e220e                      ; 004e21f8 | LAB_004e220e
        ;   XREF to: 004e220e (CONDITIONAL_JUMP)
    CMP dword ptr [ESP + 0x6c4],0x3cc   ; 004e21fa
    JNZ 0x004e220e                      ; 004e2205 | LAB_004e220e
        ;   XREF to: 004e220e (CONDITIONAL_JUMP)
    MOV dword ptr [ESP + 0x6f4],EBP     ; 004e2207
    CMP EBP,0x2                         ; 004e220e
        ;   Label: LAB_004e220e
    JNZ 0x004e222b                      ; 004e2211 | LAB_004e222b
        ;   XREF to: 004e222b (CONDITIONAL_JUMP)
    CMP dword ptr [ESP + 0x6c8],0x3ac   ; 004e2213
    JNZ 0x004e222b                      ; 004e221e | LAB_004e222b
        ;   XREF to: 004e222b (CONDITIONAL_JUMP)
    MOV dword ptr [ESP + 0x6f4],0x1     ; 004e2220
    CMP EBP,0x3                         ; 004e222b
        ;   Label: LAB_004e222b
    JNZ 0x004e2366                      ; 004e222e | LAB_004e2366
        ;   XREF to: 004e2366 (CONDITIONAL_JUMP)
    CMP dword ptr [ESP + 0x6cc],0xd6    ; 004e2234
    JNZ 0x004e2366                      ; 004e223f | LAB_004e2366
        ;   XREF to: 004e2366 (CONDITIONAL_JUMP)
    MOV dword ptr [ESP + 0x6f4],0x1     ; 004e2245
    MOV EAX,ESP                         ; 004e2250
        ;   Label: LAB_004e2250
    PUSH EAX                            ; 004e2252
    CALL shape_edittool.cpp_CPickList_clear_FUN_004a5770 ; 004e2253 | void shape_edittool.cpp_CPickList_clear_FUN_004a5770(CPickList * this_ptr)
        ;   XREF to: 004a5770 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004e2258
    TEST EBP,EBP                        ; 004e225b
    JNZ 0x004e23c7                      ; 004e225d | LAB_004e23c7
        ;   XREF to: 004e23c7 (CONDITIONAL_JUMP)
    IMUL ESI,EBP,0x34                   ; 004e2263
    PUSH 0x62ce7c                       ; 004e2266 | = "Chapter 1 - 'Your New Partner'" | s_Chapter_1_Your_New_Partn_0062ce7c = Chapter 1 - 'Your New Partner'
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004e226b | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004e2270
    PUSH EAX                            ; 004e2273
    LEA EAX,[ESP + 0x4]                 ; 004e2274
    PUSH EAX                            ; 004e2278
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004e2279 | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004e227e
    PUSH 0x62ce9b                       ; 004e2281 | = "Chapter 2 - 'Sentinels'" | s_Chapter_2_Sentinels_0062ce9b = Chapter 2 - 'Sentinels'
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004e2286 | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004e228b
    PUSH EAX                            ; 004e228e
    LEA EAX,[ESP + 0x4]                 ; 004e228f
    PUSH EAX                            ; 004e2293
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004e2294 | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004e2299
    PUSH 0x62ceb3                       ; 004e229c | = "Chapter 3 - 'Werewolf Forest'" | s_Chapter_3_Werewolf_Fores_0062ceb3 = Chapter 3 - 'Werewolf Forest'
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004e22a1 | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004e22a6
    PUSH EAX                            ; 004e22a9
    LEA EAX,[ESP + 0x4]                 ; 004e22aa
    PUSH EAX                            ; 004e22ae
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004e22af | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004e22b4
    PUSH 0x62ced1                       ; 004e22b7 | = "Chapter 4 - 'Castle Gaustadt'" | s_Chapter_4_Castle_Gaustad_0062ced1 = Chapter 4 - 'Castle Gaustadt'
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004e22bc | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004e22c1
    PUSH EAX                            ; 004e22c4
    LEA EAX,[ESP + 0x4]                 ; 004e22c5
    PUSH EAX                            ; 004e22c9
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004e22ca | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004e22cf
    PUSH 0x62ceef                       ; 004e22d2 | = "Chapter 5 - 'Dungeon'" | s_Chapter_5_Dungeon_0062ceef = Chapter 5 - 'Dungeon'
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004e22d7 | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004e22dc
    PUSH EAX                            ; 004e22df
    LEA EAX,[ESP + 0x4]                 ; 004e22e0
    PUSH EAX                            ; 004e22e4
    LEA EDI,[ESP + 0x8]                 ; 004e22e5
    XOR EBX,EBX                         ; 004e22e9
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004e22eb | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004e22f0
    MOV EAX,dword ptr [EDI]             ; 004e22f3
        ;   Label: LAB_004e22f3
    CMP EBX,EAX                         ; 004e22f5
    JGE 0x004e23a6                      ; 004e22f7 | LAB_004e23a6
        ;   XREF to: 004e23a6 (CONDITIONAL_JUMP)
    PUSH 0x62cc71                       ; 004e22fd | = "rt" | s_rt_0062cc71 = rt
    MOV EDX,dword ptr [ESI + 0x67b750]  ; 004e2302 | PTR_s_hq_act1_msn_0067b750 | PTR_s_gtown_msn_0062d684_0067b754 = 0062d684
    PUSH EDX                            ; 004e2308
    PUSH 0x62cc74                       ; 004e2309 | = "world" | s_world_0062cc74 = world
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 004e230e | FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004e2313
    TEST EAX,EAX                        ; 004e2316
    JNZ 0x004e238a                      ; 004e2318 | LAB_004e238a
        ;   XREF to: 004e238a (CONDITIONAL_JUMP)
    PUSH EAX                            ; 004e231a
    PUSH EBX                            ; 004e231b
    PUSH EDI                            ; 004e231c
    CALL shape_edittool.cpp_CPickList_enableItem_FUN_004a5410 ; 004e231d | void shape_edittool.cpp_CPickList_enableItem_FUN_004a5410(CPickList * this_ptr, int item_index, bool enable_flag)
        ;   XREF to: 004a5410 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004e2322
    INC EBX                             ; 004e2325
    ADD ESI,0x4                         ; 004e2326
    JMP 0x004e22f3                      ; 004e2329 | LAB_004e22f3
        ;   XREF to: 004e22f3 (UNCONDITIONAL_JUMP)
    PUSH 0xf29                          ; 004e232b
        ;   Label: LAB_004e232b
    PUSH 0x62ce54                       ; 004e2330 | = "..\\core\\game.cpp" | s_core_game_cpp_0062ce54 = ..\core\game.cpp
    PUSH EAX                            ; 004e2335
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004e2336 | int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
    JMP 0x004e21a4                      ; 004e233b | LAB_004e21a4
        ;   XREF to: 004e21a4 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x6d0]     ; 004e2340
        ;   Label: LAB_004e2340
    PUSH 0x0                            ; 004e2347
    MOV [0x02cf1cd0],EAX                ; 004e2349 | CBitFont * g_EditorFont
    LEA EAX,[ESP + 0x4]                 ; 004e234e
    PUSH EAX                            ; 004e2352
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 004e2353 | CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004e2358
    ADD ESP,0x6dc                       ; 004e235b
    POP EBP                             ; 004e2361
    POP EDI                             ; 004e2362
    POP ESI                             ; 004e2363
    POP EBX                             ; 004e2364
    RET                                 ; 004e2365
    CMP dword ptr [ESP + 0x6f4],0x0     ; 004e2366
        ;   Label: LAB_004e2366
    JNZ 0x004e2250                      ; 004e236e | LAB_004e2250
        ;   XREF to: 004e2250 (CONDITIONAL_JUMP)
    XOR EDI,EDI                         ; 004e2374
    PUSH 0x0                            ; 004e2376
        ;   Label: LAB_004e2376
    LEA EAX,[ESP + 0x4]                 ; 004e2378
    PUSH EAX                            ; 004e237c
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 004e237d | CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004e2382
    JMP 0x004e1ef8                      ; 004e2385 | LAB_004e1ef8
        ;   XREF to: 004e1ef8 (UNCONDITIONAL_JUMP)
    PUSH 0xec1                          ; 004e238a
        ;   Label: LAB_004e238a
    PUSH 0x62cc7a                       ; 004e238f | = "..\\core\\game.cpp" | s_core_game_cpp_0062cc7a = ..\core\game.cpp
    PUSH EAX                            ; 004e2394
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004e2395 | int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004e239a
    INC EBX                             ; 004e239d
    ADD ESI,0x4                         ; 004e239e
    JMP 0x004e22f3                      ; 004e23a1 | LAB_004e22f3
        ;   XREF to: 004e22f3 (UNCONDITIONAL_JUMP)
    PUSH 0x0                            ; 004e23a6
        ;   Label: LAB_004e23a6
    PUSH -0x1                           ; 004e23a8
    PUSH 0x62cf05                       ; 004e23aa | = "'Dark Reign of the Vampire King'" | s_Dark_Reign_of_the_Vampir_0062cf05 = 'Dark Reign of the Vampire King'
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004e23af | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004e23b4
    PUSH EAX                            ; 004e23b7
    LEA EAX,[ESP + 0xc]                 ; 004e23b8
    PUSH EAX                            ; 004e23bc
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 004e23bd | int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004e23c2
    MOV EDI,EAX                         ; 004e23c5
    CMP EBP,0x1                         ; 004e23c7
        ;   Label: LAB_004e23c7
    JNZ 0x004e2507                      ; 004e23ca | LAB_004e2507
        ;   XREF to: 004e2507 (CONDITIONAL_JUMP)
    PUSH 0x62cf26                       ; 004e23d0 | = "Chapter 1 - 'Train to Redeye'" | s_Chapter_1_Train_to_Redey_0062cf26 = Chapter 1 - 'Train to Redeye'
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004e23d5 | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004e23da
    PUSH EAX                            ; 004e23dd
    LEA EAX,[ESP + 0x4]                 ; 004e23de
    PUSH EAX                            ; 004e23e2
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004e23e3 | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004e23e8
    PUSH 0x62cf44                       ; 004e23eb | = "Chapter 2 - 'Zombie Town'" | s_Chapter_2_Zombie_Town_0062cf44 = Chapter 2 - 'Zombie Town'
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004e23f0 | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004e23f5
    PUSH EAX                            ; 004e23f8
    LEA EAX,[ESP + 0x4]                 ; 004e23f9
    PUSH EAX                            ; 004e23fd
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004e23fe | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004e2403
    PUSH 0x62cf5e                       ; 004e2406 | = "Chapter 3 - 'Underground Mine'" | s_Chapter_3_Underground_Mi_0062cf5e = Chapter 3 - 'Underground Mine'
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004e240b | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004e2410
    PUSH EAX                            ; 004e2413
    LEA EAX,[ESP + 0x4]                 ; 004e2414
    PUSH EAX                            ; 004e2418
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004e2419 | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004e241e
    PUSH 0x62cf7d                       ; 004e2421 | = "Chapter 4 - 'Hidden Entrance'" | s_Chapter_4_Hidden_Entranc_0062cf7d = Chapter 4 - 'Hidden Entrance'
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004e2426 | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004e242b
    PUSH EAX                            ; 004e242e
    LEA EAX,[ESP + 0x4]                 ; 004e242f
    PUSH EAX                            ; 004e2433
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004e2434 | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004e2439
    PUSH 0x62cf9b                       ; 004e243c | = "Chapter 5 - 'Temple of the God'" | s_Chapter_5_Temple_of_the__0062cf9b = Chapter 5 - 'Temple of the God'
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004e2441 | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004e2446
    PUSH EAX                            ; 004e2449
    LEA EAX,[ESP + 0x4]                 ; 004e244a
    PUSH EAX                            ; 004e244e
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004e244f | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004e2454
    PUSH 0x62cfbb                       ; 004e2457 | = "Chapter 6 - 'Epilogue'" | s_Chapter_6_Epilogue_0062cfbb = Chapter 6 - 'Epilogue'
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004e245c | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004e2461
    PUSH EAX                            ; 004e2464
    LEA EAX,[ESP + 0x4]                 ; 004e2465
    PUSH EAX                            ; 004e2469
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004e246a | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004e246f
    CMP dword ptr [ESP + 0x6d8],0x0     ; 004e2472
    JZ 0x004e24b7                       ; 004e247a | LAB_004e24b7
        ;   XREF to: 004e24b7 (CONDITIONAL_JUMP)
    MOV EDI,ESP                         ; 004e247c
        ;   Label: LAB_004e247c
    XOR EBX,EBX                         ; 004e247e
    IMUL ESI,EBP,0x34                   ; 004e2480
    MOV EAX,dword ptr [EDI]             ; 004e2483
        ;   Label: LAB_004e2483
    CMP EBX,EAX                         ; 004e2485
    JGE 0x004e24e6                      ; 004e2487 | LAB_004e24e6
        ;   XREF to: 004e24e6 (CONDITIONAL_JUMP)
    PUSH 0x62cc71                       ; 004e2489 | = "rt" | s_rt_0062cc71 = rt
    MOV EAX,dword ptr [ESI + 0x67b750]  ; 004e248e | PTR_s_hq_act1_msn_0067b750 | PTR_s_gtown_msn_0062d684_0067b754 = 0062d684
    PUSH EAX                            ; 004e2494
    PUSH 0x62cc74                       ; 004e2495 | = "world" | s_world_0062cc74 = world
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 004e249a | FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004e249f
    TEST EAX,EAX                        ; 004e24a2
    JNZ 0x004e24d4                      ; 004e24a4 | LAB_004e24d4
        ;   XREF to: 004e24d4 (CONDITIONAL_JUMP)
    PUSH EAX                            ; 004e24a6
    PUSH EBX                            ; 004e24a7
    PUSH EDI                            ; 004e24a8
    CALL shape_edittool.cpp_CPickList_enableItem_FUN_004a5410 ; 004e24a9 | void shape_edittool.cpp_CPickList_enableItem_FUN_004a5410(CPickList * this_ptr, int item_index, bool enable_flag)
        ;   XREF to: 004a5410 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004e24ae
        ;   Label: LAB_004e24ae
    INC EBX                             ; 004e24b1
    ADD ESI,0x4                         ; 004e24b2
    JMP 0x004e2483                      ; 004e24b5 | LAB_004e2483
        ;   XREF to: 004e2483 (UNCONDITIONAL_JUMP)
    PUSH 0x62cfd2                       ; 004e24b7 | = "Chapter X - 'Failure'" | s_Chapter_X_Failure_0062cfd2 = Chapter X - 'Failure'
        ;   Label: LAB_004e24b7
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004e24bc | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004e24c1
    PUSH EAX                            ; 004e24c4
    LEA EAX,[ESP + 0x4]                 ; 004e24c5
    PUSH EAX                            ; 004e24c9
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004e24ca | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004e24cf
    JMP 0x004e247c                      ; 004e24d2 | LAB_004e247c
        ;   XREF to: 004e247c (UNCONDITIONAL_JUMP)
    PUSH 0xec1                          ; 004e24d4
        ;   Label: LAB_004e24d4
    PUSH 0x62cc7a                       ; 004e24d9 | = "..\\core\\game.cpp" | s_core_game_cpp_0062cc7a = ..\core\game.cpp
    PUSH EAX                            ; 004e24de
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004e24df | int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
    JMP 0x004e24ae                      ; 004e24e4 | LAB_004e24ae
        ;   XREF to: 004e24ae (UNCONDITIONAL_JUMP)
    PUSH 0x0                            ; 004e24e6
        ;   Label: LAB_004e24e6
    PUSH -0x1                           ; 004e24e8
    PUSH 0x62cfe8                       ; 004e24ea | = "'Tomb of the Underground God'" | s_Tomb_of_the_Underground__0062cfe8 = 'Tomb of the Underground God'
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004e24ef | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004e24f4
    PUSH EAX                            ; 004e24f7
    LEA EAX,[ESP + 0xc]                 ; 004e24f8
    PUSH EAX                            ; 004e24fc
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 004e24fd | int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004e2502
    MOV EDI,EAX                         ; 004e2505
    CMP EBP,0x2                         ; 004e2507
        ;   Label: LAB_004e2507
    JNZ 0x004e26a9                      ; 004e250a | LAB_004e26a9
        ;   XREF to: 004e26a9 (CONDITIONAL_JUMP)
    PUSH 0x62d006                       ; 004e2510 | = "Chapter 1 - 'Headquarters'" | s_Chapter_1_Headquarters_0062d006 = Chapter 1 - 'Headquarters'
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004e2515 | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004e251a
    PUSH EAX                            ; 004e251d
    LEA EAX,[ESP + 0x4]                 ; 004e251e
    PUSH EAX                            ; 004e2522
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004e2523 | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004e2528
    PUSH 0x62d021                       ; 004e252b | = "Chapter 2 - 'Chicago River'" | s_Chapter_2_Chicago_River_0062d021 = Chapter 2 - 'Chicago River'
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004e2530 | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004e2535
    PUSH EAX                            ; 004e2538
    LEA EAX,[ESP + 0x4]                 ; 004e2539
    PUSH EAX                            ; 004e253d
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004e253e | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004e2543
    PUSH 0x62d03d                       ; 004e2546 | = "Chapter 3 - 'The Vendome'" | s_Chapter_3_The_Vendome_0062d03d = Chapter 3 - 'The Vendome'
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004e254b | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004e2550
    PUSH EAX                            ; 004e2553
    LEA EAX,[ESP + 0x4]                 ; 004e2554
    PUSH EAX                            ; 004e2558
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004e2559 | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004e255e
    PUSH 0x62d057                       ; 004e2561 | = "Chapter 4 - 'Night on the Town'" | s_Chapter_4_Night_on_the_T_0062d057 = Chapter 4 - 'Night on the Town'
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004e2566 | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004e256b
    PUSH EAX                            ; 004e256e
    LEA EAX,[ESP + 0x4]                 ; 004e256f
    PUSH EAX                            ; 004e2573
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004e2574 | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004e2579
    PUSH 0x62d077                       ; 004e257c | = "Chapter 5 - 'Water Works'" | s_Chapter_5_Water_Works_0062d077 = Chapter 5 - 'Water Works'
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004e2581 | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004e2586
    PUSH EAX                            ; 004e2589
    LEA EAX,[ESP + 0x4]                 ; 004e258a
    PUSH EAX                            ; 004e258e
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004e258f | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004e2594
    PUSH 0x62d091                       ; 004e2597 | = "Chapter 6 - 'Windy City'" | s_Chapter_6_Windy_City_0062d091 = Chapter 6 - 'Windy City'
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004e259c | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004e25a1
    PUSH EAX                            ; 004e25a4
    LEA EAX,[ESP + 0x4]                 ; 004e25a5
    PUSH EAX                            ; 004e25a9
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004e25aa | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004e25af
    PUSH 0x62d0aa                       ; 004e25b2 | = "Chapter 7 - 'Crescent Theater'" | s_Chapter_7_Crescent_Theat_0062d0aa = Chapter 7 - 'Crescent Theater'
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004e25b7 | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004e25bc
    PUSH EAX                            ; 004e25bf
    LEA EAX,[ESP + 0x4]                 ; 004e25c0
    PUSH EAX                            ; 004e25c4
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004e25c5 | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004e25ca
    PUSH 0x62d0c9                       ; 004e25cd | = "Chapter 8 - 'Rooftop to Rooftop'" | s_Chapter_8_Rooftop_to_Roo_0062d0c9 = Chapter 8 - 'Rooftop to Rooftop'
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004e25d2 | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004e25d7
    PUSH EAX                            ; 004e25da
    LEA EAX,[ESP + 0x4]                 ; 004e25db
    PUSH EAX                            ; 004e25df
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004e25e0 | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004e25e5
    IMUL ESI,EBP,0x34                   ; 004e25e8
    PUSH 0x62d0ea                       ; 004e25eb | = "Chapter 9 - 'Warehouse of Hell'" | s_Chapter_9_Warehouse_of_H_0062d0ea = Chapter 9 - 'Warehouse of Hell'
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004e25f0 | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004e25f5
    PUSH EAX                            ; 004e25f8
    LEA EAX,[ESP + 0x4]                 ; 004e25f9
    PUSH EAX                            ; 004e25fd
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004e25fe | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004e2603
    PUSH 0x62d10a                       ; 004e2606 | = "Chapter 10 - 'Mobster Factory'" | s_Chapter_10_Mobster_Facto_0062d10a = Chapter 10 - 'Mobster Factory'
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004e260b | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004e2610
    PUSH EAX                            ; 004e2613
    LEA EAX,[ESP + 0x4]                 ; 004e2614
    PUSH EAX                            ; 004e2618
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004e2619 | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004e261e
    PUSH 0x62d129                       ; 004e2621 | = "Chapter 11 - 'Not You Again'" | s_Chapter_11_Not_You_Again_0062d129 = Chapter 11 - 'Not You Again'
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004e2626 | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004e262b
    PUSH EAX                            ; 004e262e
    LEA EAX,[ESP + 0x4]                 ; 004e262f
    PUSH EAX                            ; 004e2633
    LEA EDI,[ESP + 0x8]                 ; 004e2634
    XOR EBX,EBX                         ; 004e2638
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004e263a | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004e263f
    MOV EAX,dword ptr [EDI]             ; 004e2642
        ;   Label: LAB_004e2642
    CMP EBX,EAX                         ; 004e2644
    JGE 0x004e2688                      ; 004e2646 | LAB_004e2688
        ;   XREF to: 004e2688 (CONDITIONAL_JUMP)
    PUSH 0x62cc71                       ; 004e2648 | = "rt" | s_rt_0062cc71 = rt
    MOV EDX,dword ptr [ESI + 0x67b750]  ; 004e264d | PTR_s_hq_act1_msn_0067b750 | PTR_s_gtown_msn_0062d684_0067b754 = 0062d684
    PUSH EDX                            ; 004e2653
    PUSH 0x62cc74                       ; 004e2654 | = "world" | s_world_0062cc74 = world
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 004e2659 | FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004e265e
    TEST EAX,EAX                        ; 004e2661
    JNZ 0x004e2676                      ; 004e2663 | LAB_004e2676
        ;   XREF to: 004e2676 (CONDITIONAL_JUMP)
    PUSH EAX                            ; 004e2665
    PUSH EBX                            ; 004e2666
    PUSH EDI                            ; 004e2667
    CALL shape_edittool.cpp_CPickList_enableItem_FUN_004a5410 ; 004e2668 | void shape_edittool.cpp_CPickList_enableItem_FUN_004a5410(CPickList * this_ptr, int item_index, bool enable_flag)
        ;   XREF to: 004a5410 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004e266d
        ;   Label: LAB_004e266d
    INC EBX                             ; 004e2670
    ADD ESI,0x4                         ; 004e2671
    JMP 0x004e2642                      ; 004e2674 | LAB_004e2642
        ;   XREF to: 004e2642 (UNCONDITIONAL_JUMP)
    PUSH 0xec1                          ; 004e2676
        ;   Label: LAB_004e2676
    PUSH 0x62cc7a                       ; 004e267b | = "..\\core\\game.cpp" | s_core_game_cpp_0062cc7a = ..\core\game.cpp
    PUSH EAX                            ; 004e2680
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004e2681 | int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
    JMP 0x004e266d                      ; 004e2686 | LAB_004e266d
        ;   XREF to: 004e266d (UNCONDITIONAL_JUMP)
    PUSH 0x0                            ; 004e2688
        ;   Label: LAB_004e2688
    PUSH -0x1                           ; 004e268a
    PUSH 0x62d146                       ; 004e268c | = "'Windy City Massacre'" | s_Windy_City_Massacre_0062d146 = 'Windy City Massacre'
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004e2691 | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004e2696
    PUSH EAX                            ; 004e2699
    LEA EAX,[ESP + 0xc]                 ; 004e269a
    PUSH EAX                            ; 004e269e
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 004e269f | int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004e26a4
    MOV EDI,EAX                         ; 004e26a7
    CMP EBP,0x3                         ; 004e26a9
        ;   Label: LAB_004e26a9
    JNZ 0x004e278e                      ; 004e26ac | LAB_004e278e
        ;   XREF to: 004e278e (CONDITIONAL_JUMP)
    IMUL ESI,EBP,0x34                   ; 004e26b2
    PUSH 0x62d15c                       ; 004e26b5 | = "Chapter 1 - 'Headquarters'" | s_Chapter_1_Headquarters_0062d15c = Chapter 1 - 'Headquarters'
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004e26ba | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004e26bf
    PUSH EAX                            ; 004e26c2
    LEA EAX,[ESP + 0x4]                 ; 004e26c3
    PUSH EAX                            ; 004e26c7
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004e26c8 | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004e26cd
    PUSH 0x62d177                       ; 004e26d0 | = "Chapter 2 - 'Graveyard'" | s_Chapter_2_Graveyard_0062d177 = Chapter 2 - 'Graveyard'
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004e26d5 | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004e26da
    PUSH EAX                            ; 004e26dd
    LEA EAX,[ESP + 0x4]                 ; 004e26de
    PUSH EAX                            ; 004e26e2
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004e26e3 | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004e26e8
    PUSH 0x62d18f                       ; 004e26eb | = "Chapter 3 - 'House of Hell'" | s_Chapter_3_House_of_Hell_0062d18f = Chapter 3 - 'House of Hell'
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004e26f0 | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004e26f5
    PUSH EAX                            ; 004e26f8
    LEA EAX,[ESP + 0x4]                 ; 004e26f9
    PUSH EAX                            ; 004e26fd
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004e26fe | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004e2703
    PUSH 0x62d1ab                       ; 004e2706 | = "Chapter 4 - 'Back from Hell'" | s_Chapter_4_Back_from_Hell_0062d1ab = Chapter 4 - 'Back from Hell'
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004e270b | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004e2710
    PUSH EAX                            ; 004e2713
    LEA EAX,[ESP + 0x4]                 ; 004e2714
    PUSH EAX                            ; 004e2718
    LEA EDI,[ESP + 0x8]                 ; 004e2719
    XOR EBX,EBX                         ; 004e271d
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004e271f | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004e2724
    MOV EAX,dword ptr [EDI]             ; 004e2727
        ;   Label: LAB_004e2727
    CMP EBX,EAX                         ; 004e2729
    JGE 0x004e276d                      ; 004e272b | LAB_004e276d
        ;   XREF to: 004e276d (CONDITIONAL_JUMP)
    PUSH 0x62cc71                       ; 004e272d | = "rt" | s_rt_0062cc71 = rt
    MOV ECX,dword ptr [ESI + 0x67b750]  ; 004e2732 | PTR_s_hq_act1_msn_0067b750 | PTR_s_gtown_msn_0062d684_0067b754 = 0062d684
    PUSH ECX                            ; 004e2738
    PUSH 0x62cc74                       ; 004e2739 | = "world" | s_world_0062cc74 = world
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 004e273e | FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004e2743
    TEST EAX,EAX                        ; 004e2746
    JNZ 0x004e275b                      ; 004e2748 | LAB_004e275b
        ;   XREF to: 004e275b (CONDITIONAL_JUMP)
    PUSH EAX                            ; 004e274a
    PUSH EBX                            ; 004e274b
    PUSH EDI                            ; 004e274c
    CALL shape_edittool.cpp_CPickList_enableItem_FUN_004a5410 ; 004e274d | void shape_edittool.cpp_CPickList_enableItem_FUN_004a5410(CPickList * this_ptr, int item_index, bool enable_flag)
        ;   XREF to: 004a5410 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004e2752
        ;   Label: LAB_004e2752
    INC EBX                             ; 004e2755
    ADD ESI,0x4                         ; 004e2756
    JMP 0x004e2727                      ; 004e2759 | LAB_004e2727
        ;   XREF to: 004e2727 (UNCONDITIONAL_JUMP)
    PUSH 0xec1                          ; 004e275b
        ;   Label: LAB_004e275b
    PUSH 0x62cc7a                       ; 004e2760 | = "..\\core\\game.cpp" | s_core_game_cpp_0062cc7a = ..\core\game.cpp
    PUSH EAX                            ; 004e2765
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004e2766 | int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
    JMP 0x004e2752                      ; 004e276b | LAB_004e2752
        ;   XREF to: 004e2752 (UNCONDITIONAL_JUMP)
    PUSH 0x0                            ; 004e276d
        ;   Label: LAB_004e276d
    PUSH -0x1                           ; 004e276f
    PUSH 0x62d1c8                       ; 004e2771 | = "'The House on the Edge of Hell'" | s_The_House_on_the_Edge_of_0062d1c8 = 'The House on the Edge of Hell'
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004e2776 | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004e277b
    PUSH EAX                            ; 004e277e
    LEA EAX,[ESP + 0xc]                 ; 004e277f
    PUSH EAX                            ; 004e2783
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 004e2784 | int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004e2789
    MOV EDI,EAX                         ; 004e278c
    CMP EBP,0x4                         ; 004e278e
        ;   Label: LAB_004e278e
    JNZ 0x004e2376                      ; 004e2791 | LAB_004e2376
        ;   XREF to: 004e2376 (CONDITIONAL_JUMP)
    IMUL ESI,EBP,0x34                   ; 004e2797
    PUSH 0x62d1e8                       ; 004e279a | = "Chapter 1 - 'Headquarters'" | s_Chapter_1_Headquarters_0062d1e8 = Chapter 1 - 'Headquarters'
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004e279f | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004e27a4
    PUSH EAX                            ; 004e27a7
    LEA EAX,[ESP + 0x4]                 ; 004e27a8
    PUSH EAX                            ; 004e27ac
    LEA EDI,[ESP + 0x8]                 ; 004e27ad
    XOR EBX,EBX                         ; 004e27b1
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 004e27b3 | void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004e27b8
    MOV EAX,dword ptr [EDI]             ; 004e27bb
        ;   Label: LAB_004e27bb
    CMP EBX,EAX                         ; 004e27bd
    JGE 0x004e2801                      ; 004e27bf | LAB_004e2801
        ;   XREF to: 004e2801 (CONDITIONAL_JUMP)
    PUSH 0x62cc71                       ; 004e27c1 | = "rt" | s_rt_0062cc71 = rt
    MOV EAX,dword ptr [ESI + 0x67b750]  ; 004e27c6 | PTR_s_hq_act1_msn_0067b750 | PTR_s_gtown_msn_0062d684_0067b754 = 0062d684
    PUSH EAX                            ; 004e27cc
    PUSH 0x62cc74                       ; 004e27cd | = "world" | s_world_0062cc74 = world
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 004e27d2 | FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004e27d7
    TEST EAX,EAX                        ; 004e27da
    JNZ 0x004e27ef                      ; 004e27dc | LAB_004e27ef
        ;   XREF to: 004e27ef (CONDITIONAL_JUMP)
    PUSH EAX                            ; 004e27de
    PUSH EBX                            ; 004e27df
    PUSH EDI                            ; 004e27e0
    CALL shape_edittool.cpp_CPickList_enableItem_FUN_004a5410 ; 004e27e1 | void shape_edittool.cpp_CPickList_enableItem_FUN_004a5410(CPickList * this_ptr, int item_index, bool enable_flag)
        ;   XREF to: 004a5410 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004e27e6
        ;   Label: LAB_004e27e6
    INC EBX                             ; 004e27e9
    ADD ESI,0x4                         ; 004e27ea
    JMP 0x004e27bb                      ; 004e27ed | LAB_004e27bb
        ;   XREF to: 004e27bb (UNCONDITIONAL_JUMP)
    PUSH 0xec1                          ; 004e27ef
        ;   Label: LAB_004e27ef
    PUSH 0x62cc7a                       ; 004e27f4 | = "..\\core\\game.cpp" | s_core_game_cpp_0062cc7a = ..\core\game.cpp
    PUSH EAX                            ; 004e27f9
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004e27fa | int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
    JMP 0x004e27e6                      ; 004e27ff | LAB_004e27e6
        ;   XREF to: 004e27e6 (UNCONDITIONAL_JUMP)
    PUSH 0x0                            ; 004e2801
        ;   Label: LAB_004e2801
    PUSH -0x1                           ; 004e2803
    PUSH 0x62d203                       ; 004e2805 | = "'Epilogue'" | s_Epilogue_0062d203 = 'Epilogue'
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004e280a | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004e280f
    PUSH EAX                            ; 004e2812
    LEA EAX,[ESP + 0xc]                 ; 004e2813
    PUSH EAX                            ; 004e2817
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 004e2818 | int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004e281d
    MOV EDI,EAX                         ; 004e2820
    PUSH 0x0                            ; 004e2822
    LEA EAX,[ESP + 0x4]                 ; 004e2824
    PUSH EAX                            ; 004e2828
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 004e2829 | CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004e282e
    JMP 0x004e1ef8                      ; 004e2831 | LAB_004e1ef8
        ;   XREF to: 004e1ef8 (UNCONDITIONAL_JUMP)
    PUSH 0x0                            ; 004e2836
        ;   Label: LAB_004e2836
    LEA EAX,[ESP + 0x5ac]               ; 004e2838
    PUSH EAX                            ; 004e283f
    PUSH 0x62d228                       ; 004e2840 | = "*.msn" | s_msn_0062d228 = *.msn
    PUSH 0x62d22e                       ; 004e2845 | = "world" | s_world_0062d22e = world
    PUSH 0x62d234                       ; 004e284a | = "Select mission to play" | s_Select_mission_to_play_0062d234 = Select mission to play
    MOV EDI,dword ptr [0x00678a60]      ; 004e284f | CEditorTools * g_CEditorToolsPtr
    PUSH EDI                            ; 004e2855 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270 ; 004e2856 | int shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270(CEditorTools * this_ptr, char * search_pattern, char * directory, char * target_filename, ...)
        ;   XREF to: 0049f270 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 004e285b
    TEST EAX,EAX                        ; 004e285e
    JZ 0x004e208f                       ; 004e2860 | LAB_004e208f
        ;   XREF to: 004e208f (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 004e2866
    XOR EDX,EDX                         ; 004e2868
    MOV [0x02d831a8],EAX                ; 004e286a | char * g_CurrentDisplayText
    XOR AH,AH                           ; 004e286f
    MOV dword ptr [0x02d831ac],EDX      ; 004e2871 | float g_OverlayDisplayTimer
    MOV byte ptr [0x02d830a8],AH        ; 004e2877 | undefined1 DAT_02d830a8
    JMP 0x004e1fac                      ; 004e287d | LAB_004e1fac
        ;   XREF to: 004e1fac (UNCONDITIONAL_JUMP)

