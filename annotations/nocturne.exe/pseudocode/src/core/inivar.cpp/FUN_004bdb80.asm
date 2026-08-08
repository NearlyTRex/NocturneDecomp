; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_inivar_cpp_FUN_004bdb80(void)
;
; Local Variables:
; undefined        Stack[-0x204]:1  local_204
;
; XREF[1]:
;   core_main.c_FUN_004c85f0 at 004c86bb
;
; Referenced Globals:
;   TerminatedCString s_core_inivar_cpp_00586744
;   TerminatedCString s_Please_copy_Nocturne_to_00586757
;   TerminatedCString s_gamePIXX_0058677f
;   TerminatedCString s_gamePIXY_00586788
;   TerminatedCString s_gameBPP_00586791
;   TerminatedCString s_useDirect3D_00586799
;   TerminatedCString s_useAGPFlag_005867a5
;   TerminatedCString s_rendererDLLPath_005867b0
;   TerminatedCString s_gamma_005867c0
;   TerminatedCString s_heroNumber_005867c6
;   TerminatedCString s_haloMode_005867d1
;   TerminatedCString s_firstTimeFlag_005867da
;   TerminatedCString s_subtitleMode_005867e8
;   TerminatedCString s_bloodFlag_005867f5
;   TerminatedCString s_nudityFlag_005867ff
;   ... and 77 more
;
; Called Functions:
;   core_game.cpp_CGame_restoreDefaultControls_FUN_0049e610
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;   engine_dosio.cpp_setReadonlyAttribute_FUN_00565dd0
;   engine_ini.cpp_CIniFile_ctor_FUN_004bd860
;   engine_ini.cpp_CIniFile_getInteger_FUN_004bda20
;   engine_ini.cpp_CIniFile_getString_FUN_004bd910
;   engine_ini.cpp_CIniFile_readIniHeader_FUN_004bd8d0
;   sound_sndmain.cpp_readIni_FUN_005289f0
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004bdb80
        ;   Label: core_inivar.cpp_FUN_004bdb80
    SUB ESP,0x200                       ; 004bdb81
    PUSH EDI                            ; 004bdb87
    PUSH ESI                            ; 004bdb88
    PUSH 0x180                          ; 004bdb89
    PUSH 0x5baa00                       ; 004bdb8e | = ".\\system\\nocturne.ini"
    CALL engine_dosio.cpp_setReadonlyAttribute_FUN_00565dd0 ; 004bdb93
        ;   XREF to: 00565dd0 (UNCONDITIONAL_CALL)  ; DWORD engine_dosio.cpp_setReadonlyAttribute_FUN_00565dd0(char * filename, DWORD file_attributes)
    ADD ESP,0x8                         ; 004bdb98
    TEST EAX,EAX                        ; 004bdb9b
    JNZ 0x004be29f                      ; 004bdb9d
        ;   XREF to: 004be29f (CONDITIONAL_JUMP)  ; LAB_004be29f
    PUSH EBX                            ; 004bdba3
        ;   Label: LAB_004bdba3
    PUSH 0x0                            ; 004bdba4
    PUSH 0x5baa00                       ; 004bdba6 | = ".\\system\\nocturne.ini"
    LEA EAX,[ESP + 0x14]                ; 004bdbab
    PUSH EAX                            ; 004bdbaf
    CALL engine_ini.cpp_CIniFile_ctor_FUN_004bd860 ; 004bdbb0
        ;   XREF to: 004bd860 (UNCONDITIONAL_CALL)  ; CIniFile * engine_ini.cpp_CIniFile_ctor_FUN_004bd860(CIniFile * this_ptr, char * filename, char * section)
    ADD ESP,0xc                         ; 004bdbb5
    PUSH 0x5baa28                       ; 004bdbb8 | = "Graphics"
    LEA EAX,[ESP + 0x10]                ; 004bdbbd
    PUSH EAX                            ; 004bdbc1
    CALL engine_ini.cpp_CIniFile_readIniHeader_FUN_004bd8d0 ; 004bdbc2
        ;   XREF to: 004bd8d0 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_readIniHeader_FUN_004bd8d0(CIniFile * this_ptr, char * section)
    ADD ESP,0x8                         ; 004bdbc7
    MOV EBX,dword ptr [0x005b9354]      ; 004bdbca | g_CGame_PTR_005b9354
    PUSH EBX                            ; 004bdbd0
    PUSH 0x58677f                       ; 004bdbd1 | = "gamePIXX"
    LEA EAX,[ESP + 0x14]                ; 004bdbd6
    PUSH EAX                            ; 004bdbda
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004bda20 ; 004bdbdb
        ;   XREF to: 004bda20 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004bda20(CIniFile * this_ptr, char * key_name, int * value_ptr)
    MOV EAX,[0x005b9354]                ; 004bdbe0 | g_CGame_PTR_005b9354
    ADD ESP,0xc                         ; 004bdbe5
    ADD EAX,0x4                         ; 004bdbe8
    PUSH EAX                            ; 004bdbeb
    PUSH 0x586788                       ; 004bdbec | = "gamePIXY"
    LEA EAX,[ESP + 0x14]                ; 004bdbf1
    PUSH EAX                            ; 004bdbf5
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004bda20 ; 004bdbf6
        ;   XREF to: 004bda20 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004bda20(CIniFile * this_ptr, char * key_name, int * value_ptr)
    MOV EAX,[0x005b9354]                ; 004bdbfb | g_CGame_PTR_005b9354
    ADD ESP,0xc                         ; 004bdc00
    ADD EAX,0x8                         ; 004bdc03
    PUSH EAX                            ; 004bdc06
    PUSH 0x586791                       ; 004bdc07 | = "gameBPP"
    LEA EAX,[ESP + 0x14]                ; 004bdc0c
    PUSH EAX                            ; 004bdc10
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004bda20 ; 004bdc11
        ;   XREF to: 004bda20 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004bda20(CIniFile * this_ptr, char * key_name, int * value_ptr)
    ADD ESP,0xc                         ; 004bdc16
    PUSH 0x2dc9d60                      ; 004bdc19 | g_UseDirect3D
    PUSH 0x586799                       ; 004bdc1e | = "useDirect3D"
    LEA EAX,[ESP + 0x14]                ; 004bdc23
    PUSH EAX                            ; 004bdc27
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004bda20 ; 004bdc28
        ;   XREF to: 004bda20 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004bda20(CIniFile * this_ptr, char * key_name, int * value_ptr)
    ADD ESP,0xc                         ; 004bdc2d
    PUSH 0x2dc9d6c                      ; 004bdc30 | g_AGPTextureMode
    PUSH 0x5867a5                       ; 004bdc35 | = "useAGPFlag"
    LEA EAX,[ESP + 0x14]                ; 004bdc3a
    PUSH EAX                            ; 004bdc3e
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004bda20 ; 004bdc3f
        ;   XREF to: 004bda20 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004bda20(CIniFile * this_ptr, char * key_name, int * value_ptr)
    ADD ESP,0xc                         ; 004bdc44
    PUSH 0xfa                           ; 004bdc47
    PUSH 0x5c0e80                       ; 004bdc4c | = "trid3d.dll"
    PUSH 0x5867b0                       ; 004bdc51 | = "rendererDLLPath"
    LEA EAX,[ESP + 0x18]                ; 004bdc56
    PUSH EAX                            ; 004bdc5a
    CALL engine_ini.cpp_CIniFile_getString_FUN_004bd910 ; 004bdc5b
        ;   XREF to: 004bd910 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getString_FUN_004bd910(CIniFile * this_ptr, char * key, char * output_buffer, int buffer_size)
    MOV EAX,[0x005b9354]                ; 004bdc60 | g_CGame_PTR_005b9354
    ADD ESP,0x10                        ; 004bdc65
    ADD EAX,0x224                       ; 004bdc68
    PUSH EAX                            ; 004bdc6d
    PUSH 0x5867c0                       ; 004bdc6e | = "gamma"
    LEA EAX,[ESP + 0x14]                ; 004bdc73
    PUSH EAX                            ; 004bdc77
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004bda20 ; 004bdc78
        ;   XREF to: 004bda20 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004bda20(CIniFile * this_ptr, char * key_name, int * value_ptr)
    MOV EAX,[0x005b9354]                ; 004bdc7d | g_CGame_PTR_005b9354
    ADD ESP,0xc                         ; 004bdc82
    ADD EAX,0xc0                        ; 004bdc85
    PUSH EAX                            ; 004bdc8a | g_CGame_01c775ec.hero_number
    PUSH 0x5867c6                       ; 004bdc8b | = "heroNumber"
    LEA EAX,[ESP + 0x14]                ; 004bdc90
    PUSH EAX                            ; 004bdc94
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004bda20 ; 004bdc95
        ;   XREF to: 004bda20 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004bda20(CIniFile * this_ptr, char * key_name, int * value_ptr)
    ADD ESP,0xc                         ; 004bdc9a
    POP EBX                             ; 004bdc9d
    MOV EAX,[0x005b9354]                ; 004bdc9e | g_CGame_PTR_005b9354
    ADD EAX,0xc                         ; 004bdca3
    PUSH EAX                            ; 004bdca6 | g_CGame_01c775ec.halo_mode
    PUSH 0x5867d1                       ; 004bdca7 | = "haloMode"
    LEA EAX,[ESP + 0x10]                ; 004bdcac
    PUSH EAX                            ; 004bdcb0
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004bda20 ; 004bdcb1
        ;   XREF to: 004bda20 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004bda20(CIniFile * this_ptr, char * key_name, int * value_ptr)
    ADD ESP,0xc                         ; 004bdcb6
    PUSH 0x1cae37c                      ; 004bdcb9 | DAT_01cae37c
    PUSH 0x5867da                       ; 004bdcbe | = "firstTimeFlag"
    LEA EAX,[ESP + 0x10]                ; 004bdcc3
    PUSH EAX                            ; 004bdcc7
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004bda20 ; 004bdcc8
        ;   XREF to: 004bda20 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004bda20(CIniFile * this_ptr, char * key_name, int * value_ptr)
    MOV EAX,[0x005b9354]                ; 004bdccd | g_CGame_PTR_005b9354
    ADD ESP,0xc                         ; 004bdcd2
    ADD EAX,0x10                        ; 004bdcd5
    PUSH EAX                            ; 004bdcd8
    PUSH 0x5867e8                       ; 004bdcd9 | = "subtitleMode"
    LEA EAX,[ESP + 0x10]                ; 004bdcde
    PUSH EAX                            ; 004bdce2
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004bda20 ; 004bdce3
        ;   XREF to: 004bda20 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004bda20(CIniFile * this_ptr, char * key_name, int * value_ptr)
    MOV EAX,[0x005b9354]                ; 004bdce8 | g_CGame_PTR_005b9354
    ADD ESP,0xc                         ; 004bdced
    ADD EAX,0x14                        ; 004bdcf0
    PUSH EAX                            ; 004bdcf3
    PUSH 0x5867f5                       ; 004bdcf4 | = "bloodFlag"
    LEA EAX,[ESP + 0x10]                ; 004bdcf9
    PUSH EAX                            ; 004bdcfd
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004bda20 ; 004bdcfe
        ;   XREF to: 004bda20 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004bda20(CIniFile * this_ptr, char * key_name, int * value_ptr)
    MOV EAX,[0x005b9354]                ; 004bdd03 | g_CGame_PTR_005b9354
    ADD ESP,0xc                         ; 004bdd08
    ADD EAX,0x18                        ; 004bdd0b
    PUSH EAX                            ; 004bdd0e
    PUSH 0x5867ff                       ; 004bdd0f | = "nudityFlag"
    LEA EAX,[ESP + 0x10]                ; 004bdd14
    PUSH EAX                            ; 004bdd18
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004bda20 ; 004bdd19
        ;   XREF to: 004bda20 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004bda20(CIniFile * this_ptr, char * key_name, int * value_ptr)
    MOV EAX,[0x005b9354]                ; 004bdd1e | g_CGame_PTR_005b9354
    ADD ESP,0xc                         ; 004bdd23
    ADD EAX,0x1c                        ; 004bdd26
    PUSH EAX                            ; 004bdd29
    PUSH 0x58680a                       ; 004bdd2a | = "foulLanguageFlag"
    LEA EAX,[ESP + 0x10]                ; 004bdd2f
    PUSH EAX                            ; 004bdd33
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004bda20 ; 004bdd34
        ;   XREF to: 004bda20 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004bda20(CIniFile * this_ptr, char * key_name, int * value_ptr)
    MOV EAX,[0x005b9354]                ; 004bdd39 | g_CGame_PTR_005b9354
    ADD ESP,0xc                         ; 004bdd3e
    ADD EAX,0x24                        ; 004bdd41
    PUSH EAX                            ; 004bdd44 | g_CGame_01c775ec.shadow_flag
    PUSH 0x58681b                       ; 004bdd45 | = "shadowFlag"
    LEA EAX,[ESP + 0x10]                ; 004bdd4a
    PUSH EAX                            ; 004bdd4e
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004bda20 ; 004bdd4f
        ;   XREF to: 004bda20 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004bda20(CIniFile * this_ptr, char * key_name, int * value_ptr)
    MOV EAX,[0x005b9354]                ; 004bdd54 | g_CGame_PTR_005b9354
    ADD ESP,0xc                         ; 004bdd59
    ADD EAX,0x20                        ; 004bdd5c
    PUSH EAX                            ; 004bdd5f
    PUSH 0x586826                       ; 004bdd60 | = "quimbyFlag"
    LEA EAX,[ESP + 0x10]                ; 004bdd65
    PUSH EAX                            ; 004bdd69
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004bda20 ; 004bdd6a
        ;   XREF to: 004bda20 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004bda20(CIniFile * this_ptr, char * key_name, int * value_ptr)
    MOV EAX,[0x005b9354]                ; 004bdd6f | g_CGame_PTR_005b9354
    MOV ESI,dword ptr [EAX + 0x20]      ; 004bdd74 | g_CGame_01c775ec.quimby_flag
    ADD ESP,0xc                         ; 004bdd77
    TEST ESI,ESI                        ; 004bdd7a
    JZ 0x004bdd93                       ; 004bdd7c
        ;   XREF to: 004bdd93 (CONDITIONAL_JUMP)  ; LAB_004bdd93
    MOV dword ptr [EAX + 0x18],0x0      ; 004bdd7e | g_CGame_01c775ec.nudity_flag
    MOV dword ptr [EAX + 0x1c],0x0      ; 004bdd85 | g_CGame_01c775ec.foul_language_flag
    MOV dword ptr [EAX + 0x14],0x0      ; 004bdd8c | g_CGame_01c775ec.blood_flag
    PUSH 0x1cc64a4                      ; 004bdd93 | DAT_01cc64a4
        ;   Label: LAB_004bdd93
    PUSH 0x586831                       ; 004bdd98 | = "currentBoard"
    LEA EAX,[ESP + 0x10]                ; 004bdd9d
    XOR EDI,EDI                         ; 004bdda1
    PUSH EAX                            ; 004bdda3
    MOV dword ptr [0x01cc64a4],EDI      ; 004bdda4 | DAT_01cc64a4
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004bda20 ; 004bddaa
        ;   XREF to: 004bda20 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004bda20(CIniFile * this_ptr, char * key_name, int * value_ptr)
    ADD ESP,0xc                         ; 004bddaf
    PUSH 0x5baa20                       ; 004bddb2 | = "Sound"
    LEA EAX,[ESP + 0xc]                 ; 004bddb7
    PUSH EAX                            ; 004bddbb
    CALL engine_ini.cpp_CIniFile_readIniHeader_FUN_004bd8d0 ; 004bddbc
        ;   XREF to: 004bd8d0 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_readIniHeader_FUN_004bd8d0(CIniFile * this_ptr, char * section)
    ADD ESP,0x8                         ; 004bddc1
    LEA EAX,[ESP + 0x8]                 ; 004bddc4
    PUSH EAX                            ; 004bddc8
    CALL sound_sndmain.cpp_readIni_FUN_005289f0 ; 004bddc9
        ;   XREF to: 005289f0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_readIni_FUN_005289f0(CIniFile * ini_file)
    ADD ESP,0x4                         ; 004bddce
    PUSH 0x5baa38                       ; 004bddd1 | = "Control"
    LEA EAX,[ESP + 0xc]                 ; 004bddd6
    PUSH EAX                            ; 004bddda
    CALL engine_ini.cpp_CIniFile_readIniHeader_FUN_004bd8d0 ; 004bdddb
        ;   XREF to: 004bd8d0 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_readIniHeader_FUN_004bd8d0(CIniFile * this_ptr, char * section)
    MOV EAX,[0x005b9354]                ; 004bdde0 | g_CGame_PTR_005b9354
    ADD ESP,0x8                         ; 004bdde5
    ADD EAX,0xbc                        ; 004bdde8
    PUSH EAX                            ; 004bdded | g_CGame_01c775ec.game_control
    PUSH 0x58683e                       ; 004bddee | = "gameControl"
    LEA EAX,[ESP + 0x10]                ; 004bddf3
    PUSH EAX                            ; 004bddf7
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004bda20 ; 004bddf8
        ;   XREF to: 004bda20 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004bda20(CIniFile * this_ptr, char * key_name, int * value_ptr)
    ADD ESP,0xc                         ; 004bddfd
    MOV EBP,dword ptr [0x005b9354]      ; 004bde00 | g_CGame_PTR_005b9354
    PUSH EBP                            ; 004bde06
    CALL core_game.cpp_CGame_restoreDefaultControls_FUN_0049e610 ; 004bde07
        ;   XREF to: 0049e610 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_restoreDefaultControls_FUN_0049e610(CGame * this_ptr)
    MOV EAX,[0x005b9354]                ; 004bde0c | g_CGame_PTR_005b9354
    ADD ESP,0x4                         ; 004bde11
    ADD EAX,0x28                        ; 004bde14
    PUSH EAX                            ; 004bde17
    PUSH 0x58684a                       ; 004bde18 | = "keyWalk"
    LEA EAX,[ESP + 0x10]                ; 004bde1d
    PUSH EAX                            ; 004bde21
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004bda20 ; 004bde22
        ;   XREF to: 004bda20 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004bda20(CIniFile * this_ptr, char * key_name, int * value_ptr)
    MOV EAX,[0x005b9354]                ; 004bde27 | g_CGame_PTR_005b9354
    ADD ESP,0xc                         ; 004bde2c
    ADD EAX,0x2c                        ; 004bde2f
    PUSH EAX                            ; 004bde32
    PUSH 0x586852                       ; 004bde33 | = "keyBackup"
    LEA EAX,[ESP + 0x10]                ; 004bde38
    PUSH EAX                            ; 004bde3c
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004bda20 ; 004bde3d
        ;   XREF to: 004bda20 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004bda20(CIniFile * this_ptr, char * key_name, int * value_ptr)
    MOV EAX,[0x005b9354]                ; 004bde42 | g_CGame_PTR_005b9354
    ADD ESP,0xc                         ; 004bde47
    ADD EAX,0x30                        ; 004bde4a
    PUSH EAX                            ; 004bde4d
    PUSH 0x58685c                       ; 004bde4e | = "keyRun"
    LEA EAX,[ESP + 0x10]                ; 004bde53
    PUSH EAX                            ; 004bde57
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004bda20 ; 004bde58
        ;   XREF to: 004bda20 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004bda20(CIniFile * this_ptr, char * key_name, int * value_ptr)
    MOV EAX,[0x005b9354]                ; 004bde5d | g_CGame_PTR_005b9354
    ADD ESP,0xc                         ; 004bde62
    ADD EAX,0x34                        ; 004bde65
    PUSH EAX                            ; 004bde68
    PUSH 0x586863                       ; 004bde69 | = "keyStrafe"
    LEA EAX,[ESP + 0x10]                ; 004bde6e
    PUSH EAX                            ; 004bde72
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004bda20 ; 004bde73
        ;   XREF to: 004bda20 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004bda20(CIniFile * this_ptr, char * key_name, int * value_ptr)
    MOV EAX,[0x005b9354]                ; 004bde78 | g_CGame_PTR_005b9354
    ADD ESP,0xc                         ; 004bde7d
    ADD EAX,0x38                        ; 004bde80
    PUSH EAX                            ; 004bde83
    PUSH 0x58686d                       ; 004bde84 | = "keyStrafeLeft"
    LEA EAX,[ESP + 0x10]                ; 004bde89
    PUSH EAX                            ; 004bde8d
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004bda20 ; 004bde8e
        ;   XREF to: 004bda20 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004bda20(CIniFile * this_ptr, char * key_name, int * value_ptr)
    ADD ESP,0xc                         ; 004bde93
    POP ESI                             ; 004bde96
    POP EDI                             ; 004bde97
    MOV EAX,[0x005b9354]                ; 004bde98 | g_CGame_PTR_005b9354
    ADD EAX,0x3c                        ; 004bde9d
    PUSH EAX                            ; 004bdea0
    PUSH 0x58687b                       ; 004bdea1 | = "keyStrafeRight"
    LEA EAX,[ESP + 0x8]                 ; 004bdea6
    PUSH EAX                            ; 004bdeaa
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004bda20 ; 004bdeab
        ;   XREF to: 004bda20 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004bda20(CIniFile * this_ptr, char * key_name, int * value_ptr)
    MOV EAX,[0x005b9354]                ; 004bdeb0 | g_CGame_PTR_005b9354
    ADD ESP,0xc                         ; 004bdeb5
    ADD EAX,0x40                        ; 004bdeb8
    PUSH EAX                            ; 004bdebb
    PUSH 0x58688a                       ; 004bdebc | = "keyRight"
    LEA EAX,[ESP + 0x8]                 ; 004bdec1
    PUSH EAX                            ; 004bdec5
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004bda20 ; 004bdec6
        ;   XREF to: 004bda20 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004bda20(CIniFile * this_ptr, char * key_name, int * value_ptr)
    MOV EAX,[0x005b9354]                ; 004bdecb | g_CGame_PTR_005b9354
    ADD ESP,0xc                         ; 004bded0
    ADD EAX,0x44                        ; 004bded3
    PUSH EAX                            ; 004bded6
    PUSH 0x586893                       ; 004bded7 | = "keyLeft"
    LEA EAX,[ESP + 0x8]                 ; 004bdedc
    PUSH EAX                            ; 004bdee0
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004bda20 ; 004bdee1
        ;   XREF to: 004bda20 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004bda20(CIniFile * this_ptr, char * key_name, int * value_ptr)
    MOV EAX,[0x005b9354]                ; 004bdee6 | g_CGame_PTR_005b9354
    ADD ESP,0xc                         ; 004bdeeb
    ADD EAX,0x48                        ; 004bdeee
    PUSH EAX                            ; 004bdef1
    PUSH 0x58689b                       ; 004bdef2 | = "keyFire"
    LEA EAX,[ESP + 0x8]                 ; 004bdef7
    PUSH EAX                            ; 004bdefb
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004bda20 ; 004bdefc
        ;   XREF to: 004bda20 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004bda20(CIniFile * this_ptr, char * key_name, int * value_ptr)
    MOV EAX,[0x005b9354]                ; 004bdf01 | g_CGame_PTR_005b9354
    ADD ESP,0xc                         ; 004bdf06
    ADD EAX,0x4c                        ; 004bdf09
    PUSH EAX                            ; 004bdf0c
    PUSH 0x5868a3                       ; 004bdf0d | = "keyUseItem"
    LEA EAX,[ESP + 0x8]                 ; 004bdf12
    PUSH EAX                            ; 004bdf16
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004bda20 ; 004bdf17
        ;   XREF to: 004bda20 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004bda20(CIniFile * this_ptr, char * key_name, int * value_ptr)
    MOV EAX,[0x005b9354]                ; 004bdf1c | g_CGame_PTR_005b9354
    ADD ESP,0xc                         ; 004bdf21
    ADD EAX,0x50                        ; 004bdf24
    PUSH EAX                            ; 004bdf27
    PUSH 0x5868ae                       ; 004bdf28 | = "keyLight"
    LEA EAX,[ESP + 0x8]                 ; 004bdf2d
    PUSH EAX                            ; 004bdf31
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004bda20 ; 004bdf32
        ;   XREF to: 004bda20 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004bda20(CIniFile * this_ptr, char * key_name, int * value_ptr)
    MOV EAX,[0x005b9354]                ; 004bdf37 | g_CGame_PTR_005b9354
    ADD ESP,0xc                         ; 004bdf3c
    ADD EAX,0x54                        ; 004bdf3f
    PUSH EAX                            ; 004bdf42
    PUSH 0x5868b7                       ; 004bdf43 | = "keyInfrared"
    LEA EAX,[ESP + 0x8]                 ; 004bdf48
    PUSH EAX                            ; 004bdf4c
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004bda20 ; 004bdf4d
        ;   XREF to: 004bda20 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004bda20(CIniFile * this_ptr, char * key_name, int * value_ptr)
    MOV EAX,[0x005b9354]                ; 004bdf52 | g_CGame_PTR_005b9354
    ADD ESP,0xc                         ; 004bdf57
    ADD EAX,0x58                        ; 004bdf5a
    PUSH EAX                            ; 004bdf5d
    PUSH 0x5868c3                       ; 004bdf5e | = "keyDraw"
    LEA EAX,[ESP + 0x8]                 ; 004bdf63
    PUSH EAX                            ; 004bdf67
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004bda20 ; 004bdf68
        ;   XREF to: 004bda20 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004bda20(CIniFile * this_ptr, char * key_name, int * value_ptr)
    MOV EAX,[0x005b9354]                ; 004bdf6d | g_CGame_PTR_005b9354
    ADD ESP,0xc                         ; 004bdf72
    ADD EAX,0x5c                        ; 004bdf75
    PUSH EAX                            ; 004bdf78
    PUSH 0x5868cb                       ; 004bdf79 | = "keyJump"
    LEA EAX,[ESP + 0x8]                 ; 004bdf7e
    PUSH EAX                            ; 004bdf82
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004bda20 ; 004bdf83
        ;   XREF to: 004bda20 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004bda20(CIniFile * this_ptr, char * key_name, int * value_ptr)
    ADD ESP,0xc                         ; 004bdf88
    MOV EAX,[0x005b9354]                ; 004bdf8b | g_CGame_PTR_005b9354
    ADD EAX,0x60                        ; 004bdf90
    PUSH EAX                            ; 004bdf93
    PUSH 0x5868d3                       ; 004bdf94 | = "keyPointUp"
    LEA EAX,[ESP + 0x8]                 ; 004bdf99
    PUSH EAX                            ; 004bdf9d
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004bda20 ; 004bdf9e
        ;   XREF to: 004bda20 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004bda20(CIniFile * this_ptr, char * key_name, int * value_ptr)
    MOV EAX,[0x005b9354]                ; 004bdfa3 | g_CGame_PTR_005b9354
    ADD ESP,0xc                         ; 004bdfa8
    ADD EAX,0x64                        ; 004bdfab
    PUSH EAX                            ; 004bdfae
    PUSH 0x5868de                       ; 004bdfaf | = "keyPointDown"
    LEA EAX,[ESP + 0x8]                 ; 004bdfb4
    PUSH EAX                            ; 004bdfb8
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004bda20 ; 004bdfb9
        ;   XREF to: 004bda20 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004bda20(CIniFile * this_ptr, char * key_name, int * value_ptr)
    MOV EAX,[0x005b9354]                ; 004bdfbe | g_CGame_PTR_005b9354
    ADD ESP,0xc                         ; 004bdfc3
    ADD EAX,0x68                        ; 004bdfc6
    PUSH EAX                            ; 004bdfc9
    PUSH 0x5868eb                       ; 004bdfca | = "keyWeapon1"
    LEA EAX,[ESP + 0x8]                 ; 004bdfcf
    PUSH EAX                            ; 004bdfd3
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004bda20 ; 004bdfd4
        ;   XREF to: 004bda20 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004bda20(CIniFile * this_ptr, char * key_name, int * value_ptr)
    MOV EAX,[0x005b9354]                ; 004bdfd9 | g_CGame_PTR_005b9354
    ADD ESP,0xc                         ; 004bdfde
    ADD EAX,0x6c                        ; 004bdfe1
    PUSH EAX                            ; 004bdfe4
    PUSH 0x5868f6                       ; 004bdfe5 | = "keyWeapon2"
    LEA EAX,[ESP + 0x8]                 ; 004bdfea
    PUSH EAX                            ; 004bdfee
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004bda20 ; 004bdfef
        ;   XREF to: 004bda20 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004bda20(CIniFile * this_ptr, char * key_name, int * value_ptr)
    MOV EAX,[0x005b9354]                ; 004bdff4 | g_CGame_PTR_005b9354
    ADD ESP,0xc                         ; 004bdff9
    ADD EAX,0x70                        ; 004bdffc
    PUSH EAX                            ; 004bdfff
    PUSH 0x586901                       ; 004be000 | = "keyWeapon3"
    LEA EAX,[ESP + 0x8]                 ; 004be005
    PUSH EAX                            ; 004be009
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004bda20 ; 004be00a
        ;   XREF to: 004bda20 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004bda20(CIniFile * this_ptr, char * key_name, int * value_ptr)
    MOV EAX,[0x005b9354]                ; 004be00f | g_CGame_PTR_005b9354
    ADD ESP,0xc                         ; 004be014
    ADD EAX,0x74                        ; 004be017
    PUSH EAX                            ; 004be01a
    PUSH 0x58690c                       ; 004be01b | = "keyWeapon4"
    LEA EAX,[ESP + 0x8]                 ; 004be020
    PUSH EAX                            ; 004be024
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004bda20 ; 004be025
        ;   XREF to: 004bda20 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004bda20(CIniFile * this_ptr, char * key_name, int * value_ptr)
    MOV EAX,[0x005b9354]                ; 004be02a | g_CGame_PTR_005b9354
    ADD ESP,0xc                         ; 004be02f
    ADD EAX,0x78                        ; 004be032
    PUSH EAX                            ; 004be035
    PUSH 0x586917                       ; 004be036 | = "keyWeapon5"
    LEA EAX,[ESP + 0x8]                 ; 004be03b
    PUSH EAX                            ; 004be03f
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004bda20 ; 004be040
        ;   XREF to: 004bda20 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004bda20(CIniFile * this_ptr, char * key_name, int * value_ptr)
    MOV EAX,[0x005b9354]                ; 004be045 | g_CGame_PTR_005b9354
    ADD ESP,0xc                         ; 004be04a
    ADD EAX,0x7c                        ; 004be04d
    PUSH EAX                            ; 004be050
    PUSH 0x586922                       ; 004be051 | = "keyNextWeapon"
    LEA EAX,[ESP + 0x8]                 ; 004be056
    PUSH EAX                            ; 004be05a
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004bda20 ; 004be05b
        ;   XREF to: 004bda20 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004bda20(CIniFile * this_ptr, char * key_name, int * value_ptr)
    MOV EAX,[0x005b9354]                ; 004be060 | g_CGame_PTR_005b9354
    ADD ESP,0xc                         ; 004be065
    ADD EAX,0x80                        ; 004be068
    PUSH EAX                            ; 004be06d
    PUSH 0x586930                       ; 004be06e | = "keyPrevWeapon"
    LEA EAX,[ESP + 0x8]                 ; 004be073
    PUSH EAX                            ; 004be077
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004bda20 ; 004be078
        ;   XREF to: 004bda20 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004bda20(CIniFile * this_ptr, char * key_name, int * value_ptr)
    ADD ESP,0xc                         ; 004be07d
    MOV EAX,[0x005b9354]                ; 004be080 | g_CGame_PTR_005b9354
    ADD EAX,0x84                        ; 004be085
    PUSH EAX                            ; 004be08a
    PUSH 0x58693e                       ; 004be08b | = "keyNextItem"
    LEA EAX,[ESP + 0x8]                 ; 004be090
    PUSH EAX                            ; 004be094
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004bda20 ; 004be095
        ;   XREF to: 004bda20 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004bda20(CIniFile * this_ptr, char * key_name, int * value_ptr)
    MOV EAX,[0x005b9354]                ; 004be09a | g_CGame_PTR_005b9354
    ADD ESP,0xc                         ; 004be09f
    ADD EAX,0x88                        ; 004be0a2
    PUSH EAX                            ; 004be0a7
    PUSH 0x58694a                       ; 004be0a8 | = "keyPrevItem"
    LEA EAX,[ESP + 0x8]                 ; 004be0ad
    PUSH EAX                            ; 004be0b1
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004bda20 ; 004be0b2
        ;   XREF to: 004bda20 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004bda20(CIniFile * this_ptr, char * key_name, int * value_ptr)
    MOV EAX,[0x005b9354]                ; 004be0b7 | g_CGame_PTR_005b9354
    ADD ESP,0xc                         ; 004be0bc
    ADD EAX,0x8c                        ; 004be0bf
    PUSH EAX                            ; 004be0c4
    PUSH 0x586956                       ; 004be0c5 | = "keyItemDesc"
    LEA EAX,[ESP + 0x8]                 ; 004be0ca
    PUSH EAX                            ; 004be0ce
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004bda20 ; 004be0cf
        ;   XREF to: 004bda20 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004bda20(CIniFile * this_ptr, char * key_name, int * value_ptr)
    MOV EAX,[0x005b9354]                ; 004be0d4 | g_CGame_PTR_005b9354
    ADD ESP,0xc                         ; 004be0d9
    ADD EAX,0x90                        ; 004be0dc
    PUSH EAX                            ; 004be0e1
    PUSH 0x586962                       ; 004be0e2 | = "keyNextAmmo"
    LEA EAX,[ESP + 0x8]                 ; 004be0e7
    PUSH EAX                            ; 004be0eb
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004bda20 ; 004be0ec
        ;   XREF to: 004bda20 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004bda20(CIniFile * this_ptr, char * key_name, int * value_ptr)
    MOV EAX,[0x005b9354]                ; 004be0f1 | g_CGame_PTR_005b9354
    ADD ESP,0xc                         ; 004be0f6
    ADD EAX,0x94                        ; 004be0f9
    PUSH EAX                            ; 004be0fe
    PUSH 0x58696e                       ; 004be0ff | = "invertMouseYAxis"
    LEA EAX,[ESP + 0x8]                 ; 004be104
    PUSH EAX                            ; 004be108
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004bda20 ; 004be109
        ;   XREF to: 004bda20 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004bda20(CIniFile * this_ptr, char * key_name, int * value_ptr)
    MOV EAX,[0x005b9354]                ; 004be10e | g_CGame_PTR_005b9354
    ADD ESP,0xc                         ; 004be113
    ADD EAX,0x98                        ; 004be116
    PUSH EAX                            ; 004be11b
    PUSH 0x58697f                       ; 004be11c | = "alwaysRun"
    LEA EAX,[ESP + 0x8]                 ; 004be121
    PUSH EAX                            ; 004be125
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004bda20 ; 004be126
        ;   XREF to: 004bda20 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004bda20(CIniFile * this_ptr, char * key_name, int * value_ptr)
    MOV EAX,[0x005b9354]                ; 004be12b | g_CGame_PTR_005b9354
    ADD ESP,0xc                         ; 004be130
    ADD EAX,0x9c                        ; 004be133
    PUSH EAX                            ; 004be138
    PUSH 0x586989                       ; 004be139 | = "xMouseSensitivity"
    LEA EAX,[ESP + 0x8]                 ; 004be13e
    PUSH EAX                            ; 004be142
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004bda20 ; 004be143
        ;   XREF to: 004bda20 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004bda20(CIniFile * this_ptr, char * key_name, int * value_ptr)
    MOV EAX,[0x005b9354]                ; 004be148 | g_CGame_PTR_005b9354
    ADD ESP,0xc                         ; 004be14d
    ADD EAX,0xa0                        ; 004be150
    PUSH EAX                            ; 004be155
    PUSH 0x58699b                       ; 004be156 | = "yMouseSensitivity"
    LEA EAX,[ESP + 0x8]                 ; 004be15b
    PUSH EAX                            ; 004be15f
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004bda20 ; 004be160
        ;   XREF to: 004bda20 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004bda20(CIniFile * this_ptr, char * key_name, int * value_ptr)
    MOV EAX,[0x005b9354]                ; 004be165 | g_CGame_PTR_005b9354
    ADD ESP,0xc                         ; 004be16a
    ADD EAX,0xa4                        ; 004be16d
    PUSH EAX                            ; 004be172 | g_CGame_01c775ec.x_center
    PUSH 0x5869ad                       ; 004be173 | = "xCenter"
    LEA EAX,[ESP + 0x8]                 ; 004be178
    PUSH EAX                            ; 004be17c
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004bda20 ; 004be17d
        ;   XREF to: 004bda20 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004bda20(CIniFile * this_ptr, char * key_name, int * value_ptr)
    ADD ESP,0xc                         ; 004be182
    MOV EAX,[0x005b9354]                ; 004be185 | g_CGame_PTR_005b9354
    ADD EAX,0xa8                        ; 004be18a
    PUSH EAX                            ; 004be18f | g_CGame_01c775ec.y_center
    PUSH 0x5869b5                       ; 004be190 | = "yCenter"
    LEA EAX,[ESP + 0x8]                 ; 004be195
    PUSH EAX                            ; 004be199
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004bda20 ; 004be19a
        ;   XREF to: 004bda20 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004bda20(CIniFile * this_ptr, char * key_name, int * value_ptr)
    MOV EAX,[0x005b9354]                ; 004be19f | g_CGame_PTR_005b9354
    ADD ESP,0xc                         ; 004be1a4
    ADD EAX,0xac                        ; 004be1a7
    PUSH EAX                            ; 004be1ac | g_CGame_01c775ec.x_stick_min
    PUSH 0x5869bd                       ; 004be1ad | = "xStickMin"
    LEA EAX,[ESP + 0x8]                 ; 004be1b2
    PUSH EAX                            ; 004be1b6
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004bda20 ; 004be1b7
        ;   XREF to: 004bda20 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004bda20(CIniFile * this_ptr, char * key_name, int * value_ptr)
    MOV EAX,[0x005b9354]                ; 004be1bc | g_CGame_PTR_005b9354
    ADD ESP,0xc                         ; 004be1c1
    ADD EAX,0xb0                        ; 004be1c4
    PUSH EAX                            ; 004be1c9 | g_CGame_01c775ec.x_stick_max
    PUSH 0x5869c7                       ; 004be1ca | = "xStickMax"
    LEA EAX,[ESP + 0x8]                 ; 004be1cf
    PUSH EAX                            ; 004be1d3
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004bda20 ; 004be1d4
        ;   XREF to: 004bda20 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004bda20(CIniFile * this_ptr, char * key_name, int * value_ptr)
    MOV EAX,[0x005b9354]                ; 004be1d9 | g_CGame_PTR_005b9354
    ADD ESP,0xc                         ; 004be1de
    ADD EAX,0xb4                        ; 004be1e1
    PUSH EAX                            ; 004be1e6 | g_CGame_01c775ec.y_stick_min
    PUSH 0x5869d1                       ; 004be1e7 | = "yStickMin"
    LEA EAX,[ESP + 0x8]                 ; 004be1ec
    PUSH EAX                            ; 004be1f0
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004bda20 ; 004be1f1
        ;   XREF to: 004bda20 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004bda20(CIniFile * this_ptr, char * key_name, int * value_ptr)
    MOV EAX,[0x005b9354]                ; 004be1f6 | g_CGame_PTR_005b9354
    ADD ESP,0xc                         ; 004be1fb
    ADD EAX,0xb8                        ; 004be1fe
    PUSH EAX                            ; 004be203 | g_CGame_01c775ec.y_stick_max
    PUSH 0x5869db                       ; 004be204 | = "yStickMax"
    LEA EAX,[ESP + 0x8]                 ; 004be209
    PUSH EAX                            ; 004be20d
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004bda20 ; 004be20e
        ;   XREF to: 004bda20 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004bda20(CIniFile * this_ptr, char * key_name, int * value_ptr)
    MOV EAX,[0x005b9354]                ; 004be213 | g_CGame_PTR_005b9354
    ADD ESP,0xc                         ; 004be218
    ADD EAX,0xc4                        ; 004be21b
    PUSH EAX                            ; 004be220 | g_CGame_01c775ec.aim_mode
    PUSH 0x5869e5                       ; 004be221 | = "aimMode"
    LEA EAX,[ESP + 0x8]                 ; 004be226
    PUSH EAX                            ; 004be22a
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004bda20 ; 004be22b
        ;   XREF to: 004bda20 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004bda20(CIniFile * this_ptr, char * key_name, int * value_ptr)
    MOV EAX,[0x005b9354]                ; 004be230 | g_CGame_PTR_005b9354
    ADD ESP,0xc                         ; 004be235
    ADD EAX,0xc8                        ; 004be238
    PUSH EAX                            ; 004be23d
    PUSH 0x5869ed                       ; 004be23e | = "autoUseHealth"
    LEA EAX,[ESP + 0x8]                 ; 004be243
    PUSH EAX                            ; 004be247
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004bda20 ; 004be248
        ;   XREF to: 004bda20 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004bda20(CIniFile * this_ptr, char * key_name, int * value_ptr)
    ADD ESP,0xc                         ; 004be24d
    PUSH 0x5baa70                       ; 004be250 | = "Debug"
    LEA EAX,[ESP + 0x4]                 ; 004be255
    PUSH EAX                            ; 004be259
    CALL engine_ini.cpp_CIniFile_readIniHeader_FUN_004bd8d0 ; 004be25a
        ;   XREF to: 004bd8d0 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_readIniHeader_FUN_004bd8d0(CIniFile * this_ptr, char * section)
    ADD ESP,0x8                         ; 004be25f
    MOV EAX,[0x005ad350]                ; 004be262 | g_CConsole_PTR_005ad350
    PUSH EAX                            ; 004be267 | g_CConsole_0077ad0c
    PUSH 0x5869fb                       ; 004be268 | = "logConsoleFlag"
    LEA EAX,[ESP + 0x8]                 ; 004be26d
    PUSH EAX                            ; 004be271
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004bda20 ; 004be272
        ;   XREF to: 004bda20 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004bda20(CIniFile * this_ptr, char * key_name, int * value_ptr)
    MOV EAX,[0x005b9354]                ; 004be277 | g_CGame_PTR_005b9354
    ADD ESP,0xc                         ; 004be27c
    ADD EAX,0x214                       ; 004be27f
    PUSH EAX                            ; 004be284 | g_CGame_01c775ec.head_of_horror_cheat
    PUSH 0x586a0a                       ; 004be285 | = "headOfHorrorCheat"
    LEA EAX,[ESP + 0x8]                 ; 004be28a
    PUSH EAX                            ; 004be28e
    CALL engine_ini.cpp_CIniFile_getInteger_FUN_004bda20 ; 004be28f
        ;   XREF to: 004bda20 (UNCONDITIONAL_CALL)  ; void engine_ini.cpp_CIniFile_getInteger_FUN_004bda20(CIniFile * this_ptr, char * key_name, int * value_ptr)
    ADD ESP,0xc                         ; 004be294
    ADD ESP,0x200                       ; 004be297
    POP EBP                             ; 004be29d
    RET                                 ; 004be29e
    MOV EDX,0x586744                    ; 004be29f | = "..\\core\\inivar.cpp"
        ;   Label: LAB_004be29f
    MOV ECX,0x54                        ; 004be2a4
    PUSH 0x586757                       ; 004be2a9 | = "Please copy Nocturne to your hard drive"
    MOV dword ptr [0x01cc4800],EDX      ; 004be2ae | g_CurrentFilename
    MOV dword ptr [0x01cc4804],ECX      ; 004be2b4 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 004be2ba
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 004be2bf
    JMP 0x004bdba3                      ; 004be2c2
        ;   XREF to: 004bdba3 (UNCONDITIONAL_JUMP)  ; LAB_004bdba3

