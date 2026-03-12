; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_menu_cpp_showMainGameMenu_FUN_00512f40(void)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; int              Stack[-0xc]:4  iStack_c
; int              Stack[-0x8]:4  iStack_8
;
; XREF[1]:
;   core_main.c_enterMainGameMenu_FUN_00512f40 at 00507a50
;
; Referenced Globals:
;   void* switchdataD_00512f28 = 0051315c
;   TerminatedCString s_fblurl_00636dc1
;   TerminatedCString s_fblurm_00636dc8
;   TerminatedCString s_fblurr_00636dcf
;   TerminatedCString s_S_T_A_R_T_00636dd6
;   TerminatedCString s_O_P_T_I_O_N_S_00636de0
;   TerminatedCString s_L_O_A_D_00636dee
;   TerminatedCString s_Q_U_I_T_00636df6
;   TerminatedCString s_s_3D_acceleration_has_be_00636dfe
;   TerminatedCString s_Press_any_key_to_continu_00636e23
;   TerminatedCString s_f0100_00637305
;   TerminatedCString s_f0300_0063730b
;   int g_WindowHeight = 0xc8
;   CGame* g_CGamePtr = 02d81a9c
;   CKeys* g_CKeysPtr = 02dcd7d4
;   ... and 34 more
;
; Called Functions:
;   core_fileman.cpp_CDemonFileManager_showEditorMenu_FUN_004be270
;   core_game.cpp_CGame_loadGame_FUN_004e12b0
;   core_game.cpp_CGame_saveClockTime_FUN_004d7d80
;   core_game.cpp_CGame_showChapterSelect_FUN_004e1cb0
;   core_game.cpp_CGame_updateDT_FUN_004d7d90
;   core_main.c_showDeveloperToolsMenu_FUN_005073a0
;   core_menu.cpp_renderMenuAndGetChoice_FUN_00510000
;   core_menu.cpp_showOptionsScreen_FUN_00512d30
;   core_moon.cpp_CMoon_free_FUN_00529ce0
;   core_moon.cpp_CMoon_init_FUN_00529ae0
;   core_moon.cpp_CMoon_render_FUN_00529ed0
;   core_moon.cpp_CMoon_update_FUN_00529d60
;   core_sound.cpp_CSound_configure_FUN_005b3830
;   core_sound.cpp_CSound_reset_FUN_005b39a0
;   engine_2d.c_clearInputAndWait_FUN_00403260
;   ... and 10 more
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00512f40
        ;   Label: core_menu.cpp_showMainGameMenu_FUN_00512f40
    SUB ESP,0x8                         ; 00512f41
    CMP dword ptr [0x00679398],0x1e0    ; 00512f44 | g_WindowHeight
    JL 0x0051337c                       ; 00512f4e
        ;   XREF to: 0051337c (CONDITIONAL_JUMP)  ; LAB_0051337c
    CMP dword ptr [0x03f6b878],0x0      ; 00512f54 | g_FullscreenMode
    JZ 0x00513386                       ; 00512f5b
        ;   XREF to: 00513386 (CONDITIONAL_JUMP)  ; LAB_00513386
    PUSH EDI                            ; 00512f61
        ;   Label: LAB_00512f61
    PUSH ESI                            ; 00512f62
    PUSH EBX                            ; 00512f63
    MOV ESI,0x2f214f0                   ; 00512f64 | g_MenuBitmaps
    XOR EBX,EBX                         ; 00512f69
    MOV EBP,0x40                        ; 00512f6b
    PUSH EBP                            ; 00512f70
        ;   Label: LAB_00512f70
    PUSH EBP                            ; 00512f71
    MOV EDI,dword ptr [EBX + 0x67d344]  ; 00512f72 | g_MenuBitmapFilenames | g_MenuBitmapFilenames[1]
    PUSH EDI                            ; 00512f78 | = "f0100" | s_f0300_0063730b
    PUSH ESI                            ; 00512f79 | g_MenuBitmaps | DAT_02f21504
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0 ; 00512f7a
        ;   XREF to: 004105d0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0(CAlphaBitmap * this_ptr, char * filename, int width, int height) | g_CGameInstance
    ADD ESP,0x10                        ; 00512f7f
    PUSH 0x1                            ; 00512f82
    PUSH 0x2                            ; 00512f84
    PUSH ESI                            ; 00512f86 | g_MenuBitmaps
    ADD EBX,0x4                         ; 00512f87
    CALL engine_alphabit.cpp_CAlphaBitmap_scale_FUN_00410c20 ; 00512f8a
        ;   XREF to: 00410c20 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_scale_FUN_00410c20(CAlphaBitmap * this_ptr, int scaleFactorX, int scaleFactorY)
    ADD ESP,0xc                         ; 00512f8f
    ADD ESI,0x14                        ; 00512f92
    CMP EBX,0x20                        ; 00512f95
    JNZ 0x00512f70                      ; 00512f98
        ;   XREF to: 00512f70 (CONDITIONAL_JUMP)  ; LAB_00512f70
    PUSH 0x46                           ; 00512f9a
    PUSH 0x68                           ; 00512f9c
    PUSH 0x636dc1                       ; 00512f9e | = "fblurl"
    PUSH 0x2f26c70                      ; 00512fa3 | g_MenuBlurLeft
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0 ; 00512fa8
        ;   XREF to: 004105d0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 00512fad
    PUSH 0x46                           ; 00512fb0
    PUSH EBX                            ; 00512fb2
    PUSH 0x636dc8                       ; 00512fb3 | = "fblurm"
    PUSH 0x2f26c84                      ; 00512fb8 | g_MenuBlurMiddle
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0 ; 00512fbd
        ;   XREF to: 004105d0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 00512fc2
    PUSH 0x46                           ; 00512fc5
    PUSH 0x68                           ; 00512fc7
    PUSH 0x636dcf                       ; 00512fc9 | = "fblurr"
    PUSH 0x2f26c98                      ; 00512fce | g_MenuBlurRight
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0 ; 00512fd3
        ;   XREF to: 004105d0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 00512fd8
    XOR EBP,EBP                         ; 00512fdb
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 00512fdd
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    CALL engine_texture.cpp_clearTextureCache_FUN_005dd8e0 ; 00512fe2
        ;   XREF to: 005dd8e0 (UNCONDITIONAL_CALL)  ; void engine_texture.cpp_clearTextureCache_FUN_005dd8e0()
    PUSH 0x2f21590                      ; 00512fe7 | g_CMoonInstance
    MOV dword ptr [ESP + 0x10],EBP      ; 00512fec
    CALL core_moon.cpp_CMoon_init_FUN_00529ae0 ; 00512ff0
        ;   XREF to: 00529ae0 (UNCONDITIONAL_CALL)  ; void core_moon.cpp_CMoon_init_FUN_00529ae0(CMoon * this_ptr)
    ADD ESP,0x4                         ; 00512ff5
    MOV EDX,dword ptr [0x0067b654]      ; 00512ff8 | g_CGameInstance | g_CGamePtr
    MOV EAX,0x1                         ; 00512ffe
    PUSH EDX                            ; 00513003 | g_CGameInstance
    MOV dword ptr [ESP + 0x14],EAX      ; 00513004
    CALL core_game.cpp_CGame_saveClockTime_FUN_004d7d80 ; 00513008
        ;   XREF to: 004d7d80 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_saveClockTime_FUN_004d7d80(CGame * this_ptr)
    ADD ESP,0x4                         ; 0051300d
    MOV ECX,dword ptr [0x0067b654]      ; 00513010 | g_CGameInstance | g_CGamePtr
        ;   Label: LAB_00513010
    PUSH ECX                            ; 00513016 | g_CGameInstance
    CALL core_game.cpp_CGame_updateDT_FUN_004d7d90 ; 00513017
        ;   XREF to: 004d7d90 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_updateDT_FUN_004d7d90(CGame * this_ptr)
    ADD ESP,0x4                         ; 0051301c
    MOV EAX,[0x0067b654]                ; 0051301f | g_CGameInstance | g_CGamePtr
    SUB ESP,0x4                         ; 00513024
    MOV EDX,dword ptr [EAX + 0x264]     ; 00513027 | g_CGameInstance.delta_time_float
    MOV dword ptr [ESP],EDX             ; 0051302d
    PUSH 0x2f21590                      ; 00513030 | g_CMoonInstance
    CALL core_moon.cpp_CMoon_update_FUN_00529d60 ; 00513035
        ;   XREF to: 00529d60 (UNCONDITIONAL_CALL)  ; void core_moon.cpp_CMoon_update_FUN_00529d60(CMoon * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0051303a
    PUSH 0x2f21590                      ; 0051303d | g_CMoonInstance
    CALL core_moon.cpp_CMoon_render_FUN_00529ed0 ; 00513042
        ;   XREF to: 00529ed0 (UNCONDITIONAL_CALL)  ; void core_moon.cpp_CMoon_render_FUN_00529ed0(CMoon * this_ptr)
    ADD ESP,0x4                         ; 00513047
    PUSH 0x636dd6                       ; 0051304a | = "S T A R T"
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 0051304f
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 00513054
    MOV EDI,0x2f28e60                   ; 00513057 | g_MainMenuTextBuffers
    MOV ESI,EAX                         ; 0051305c
    PUSH EDI                            ; 0051305e | g_MainMenuTextBuffers
    MOV AL,byte ptr [ESI]               ; 0051305f
        ;   Label: LAB_0051305f
    MOV byte ptr [EDI],AL               ; 00513061 | g_MainMenuTextBuffers | g_MainMenuTextBuffers[0][2]
    CMP AL,0x0                          ; 00513063
    JZ 0x00513077                       ; 00513065
        ;   XREF to: 00513077 (CONDITIONAL_JUMP)  ; LAB_00513077
    MOV AL,byte ptr [ESI + 0x1]         ; 00513067
    ADD ESI,0x2                         ; 0051306a
    MOV byte ptr [EDI + 0x1],AL         ; 0051306d | g_MainMenuTextBuffers[0][1] | DAT_02f28e63
    ADD EDI,0x2                         ; 00513070
    CMP AL,0x0                          ; 00513073
    JNZ 0x0051305f                      ; 00513075
        ;   XREF to: 0051305f (CONDITIONAL_JUMP)  ; LAB_0051305f
    POP EDI                             ; 00513077
        ;   Label: LAB_00513077
    PUSH 0x636de0                       ; 00513078 | = "O P T I O N S"
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 0051307d
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 00513082
    MOV EDI,0x2f28f60                   ; 00513085 | g_MainMenuTextBuffers[1][0]
    MOV ESI,EAX                         ; 0051308a
    PUSH EDI                            ; 0051308c | g_MainMenuTextBuffers[1][0]
    MOV AL,byte ptr [ESI]               ; 0051308d
        ;   Label: LAB_0051308d
    MOV byte ptr [EDI],AL               ; 0051308f | g_MainMenuTextBuffers[1][0] | g_MainMenuTextBuffers[1][2]
    CMP AL,0x0                          ; 00513091
    JZ 0x005130a5                       ; 00513093
        ;   XREF to: 005130a5 (CONDITIONAL_JUMP)  ; LAB_005130a5
    MOV AL,byte ptr [ESI + 0x1]         ; 00513095
    ADD ESI,0x2                         ; 00513098
    MOV byte ptr [EDI + 0x1],AL         ; 0051309b | g_MainMenuTextBuffers[1][1] | DAT_02f28f63
    ADD EDI,0x2                         ; 0051309e
    CMP AL,0x0                          ; 005130a1
    JNZ 0x0051308d                      ; 005130a3
        ;   XREF to: 0051308d (CONDITIONAL_JUMP)  ; LAB_0051308d
    POP EDI                             ; 005130a5
        ;   Label: LAB_005130a5
    PUSH 0x636dee                       ; 005130a6 | = "L O A D"
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 005130ab
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 005130b0
    MOV EDI,0x2f29060                   ; 005130b3 | g_MainMenuTextBuffers[2][0]
    MOV ESI,EAX                         ; 005130b8
    PUSH EDI                            ; 005130ba | g_MainMenuTextBuffers[2][0]
    MOV AL,byte ptr [ESI]               ; 005130bb
        ;   Label: LAB_005130bb
    MOV byte ptr [EDI],AL               ; 005130bd | g_MainMenuTextBuffers[2][0] | g_MainMenuTextBuffers[2][2]
    CMP AL,0x0                          ; 005130bf
    JZ 0x005130d3                       ; 005130c1
        ;   XREF to: 005130d3 (CONDITIONAL_JUMP)  ; LAB_005130d3
    MOV AL,byte ptr [ESI + 0x1]         ; 005130c3
    ADD ESI,0x2                         ; 005130c6
    MOV byte ptr [EDI + 0x1],AL         ; 005130c9 | g_MainMenuTextBuffers[2][1] | DAT_02f29063
    ADD EDI,0x2                         ; 005130cc
    CMP AL,0x0                          ; 005130cf
    JNZ 0x005130bb                      ; 005130d1
        ;   XREF to: 005130bb (CONDITIONAL_JUMP)  ; LAB_005130bb
    POP EDI                             ; 005130d3
        ;   Label: LAB_005130d3
    PUSH 0x636df6                       ; 005130d4 | = "Q U I T"
    MOV EDI,0x2f29160                   ; 005130d9 | g_MainMenuTextBuffers[3][0]
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 005130de
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 005130e3
    MOV ESI,EAX                         ; 005130e6
    MOV EDX,0x2f28e60                   ; 005130e8 | g_MainMenuTextBuffers
    PUSH EDI                            ; 005130ed | g_MainMenuTextBuffers[3][0]
    MOV AL,byte ptr [ESI]               ; 005130ee
        ;   Label: LAB_005130ee
    MOV byte ptr [EDI],AL               ; 005130f0 | g_MainMenuTextBuffers[3][0] | g_MainMenuTextBuffers[3][2]
    CMP AL,0x0                          ; 005130f2
    JZ 0x00513106                       ; 005130f4
        ;   XREF to: 00513106 (CONDITIONAL_JUMP)  ; LAB_00513106
    MOV AL,byte ptr [ESI + 0x1]         ; 005130f6
    ADD ESI,0x2                         ; 005130f9
    MOV byte ptr [EDI + 0x1],AL         ; 005130fc | g_MainMenuTextBuffers[3][1] | DAT_02f29163
    ADD EDI,0x2                         ; 005130ff
    CMP AL,0x0                          ; 00513102
    JNZ 0x005130ee                      ; 00513104
        ;   XREF to: 005130ee (CONDITIONAL_JUMP)  ; LAB_005130ee
    POP EDI                             ; 00513106
        ;   Label: LAB_00513106
    XOR EAX,EAX                         ; 00513107
    MOV dword ptr [EAX + 0x2f29260],EDX ; 00513109 | g_MenuTextPointers | DAT_02f29264 | g_MainMenuTextBuffers
        ;   Label: LAB_00513109
    ADD EAX,0x4                         ; 0051310f
    ADD EDX,0x100                       ; 00513112 | g_MainMenuTextBuffers[1][0] | g_MainMenuTextBuffers[2][0]
    CMP EAX,0x10                        ; 00513118
    JNZ 0x00513109                      ; 0051311b
        ;   XREF to: 00513109 (CONDITIONAL_JUMP)  ; LAB_00513109
    PUSH 0x0                            ; 0051311d
    PUSH 0xfa                           ; 0051311f
    LEA EAX,[ESP + 0x14]                ; 00513124
    PUSH EAX                            ; 00513128
    PUSH 0x4                            ; 00513129
    PUSH 0x2f29260                      ; 0051312b | g_MenuTextPointers
    CALL core_menu.cpp_renderMenuAndGetChoice_FUN_00510000 ; 00513130
        ;   XREF to: 00510000 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_renderMenuAndGetChoice_FUN_00510000(char * * menu_text_array, int menu_count, int * selected_index_ptr, int y_position, ...)
    ADD ESP,0x14                        ; 00513135
    MOV EBX,dword ptr [ESP + 0x10]      ; 00513138
    MOV ESI,EAX                         ; 0051313c
    TEST EBX,EBX                        ; 0051313e
    JZ 0x00513147                       ; 00513140
        ;   XREF to: 00513147 (CONDITIONAL_JUMP)  ; LAB_00513147
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 00513142
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 00513147
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
        ;   Label: LAB_00513147
    CMP ESI,0x3                         ; 0051314c
    JA 0x005131dd                       ; 0051314f
        ;   XREF to: 005131dd (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [ESI*0x4 + 0x512f28]  ; 00513155 | caseD_0 | caseD_2 | caseD_1
        ;   Label: switchD
    PUSH 0x2f21590                      ; 0051315c | g_CMoonInstance
        ;   Label: caseD_0
    CALL core_moon.cpp_CMoon_free_FUN_00529ce0 ; 00513161
        ;   XREF to: 00529ce0 (UNCONDITIONAL_CALL)  ; void core_moon.cpp_CMoon_free_FUN_00529ce0(CMoon * this_ptr)
    ADD ESP,0x4                         ; 00513166
    MOV EDX,dword ptr [0x00681ef8]      ; 00513169 | g_CSoundInstance | g_CSoundPtr
    PUSH EDX                            ; 0051316f | g_CSoundInstance
    CALL core_sound.cpp_CSound_reset_FUN_005b39a0 ; 00513170
        ;   XREF to: 005b39a0 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_reset_FUN_005b39a0(CSound * this_ptr)
    ADD ESP,0x4                         ; 00513175
    MOV EAX,[0x0067cf44]                ; 00513178 | g_CKeysPtr
    PUSH 0x2a                           ; 0051317d
    MOV EDX,dword ptr [EAX]             ; 0051317f | g_CKeysInstance
    PUSH EAX                            ; 00513181 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 00513182
    ADD ESP,0x8                         ; 00513184
    TEST EAX,EAX                        ; 00513187
    JZ 0x005133aa                       ; 00513189
        ;   XREF to: 005133aa (CONDITIONAL_JUMP)  ; LAB_005133aa
    PUSH 0x1d                           ; 0051318f
    MOV EAX,[0x0067cf44]                ; 00513191 | g_CKeysPtr
    PUSH EAX                            ; 00513196 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 00513197 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 00513199
    ADD ESP,0x8                         ; 0051319b
    TEST EAX,EAX                        ; 0051319e
    JZ 0x005133aa                       ; 005131a0
        ;   XREF to: 005133aa (CONDITIONAL_JUMP)  ; LAB_005133aa
    PUSH 0x2                            ; 005131a6
    MOV ESI,dword ptr [0x0067b654]      ; 005131a8 | g_CGamePtr
    PUSH ESI                            ; 005131ae | g_CGameInstance
    CALL core_game.cpp_CGame_showChapterSelect_FUN_004e1cb0 ; 005131af
        ;   XREF to: 004e1cb0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_showChapterSelect_FUN_004e1cb0(CGame * this_ptr, int unknown)
        ;   Label: LAB_005131af
    ADD ESP,0x8                         ; 005131b4
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 005131b7
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    CALL engine_texture.cpp_clearTextureCache_FUN_005dd8e0 ; 005131bc
        ;   XREF to: 005dd8e0 (UNCONDITIONAL_CALL)  ; void engine_texture.cpp_clearTextureCache_FUN_005dd8e0()
    PUSH 0x2f21590                      ; 005131c1 | g_CMoonInstance
    CALL core_moon.cpp_CMoon_init_FUN_00529ae0 ; 005131c6
        ;   XREF to: 00529ae0 (UNCONDITIONAL_CALL)  ; void core_moon.cpp_CMoon_init_FUN_00529ae0(CMoon * this_ptr)
    ADD ESP,0x4                         ; 005131cb
    MOV EDI,dword ptr [0x00681ef8]      ; 005131ce | g_CSoundPtr
    PUSH EDI                            ; 005131d4 | g_CSoundInstance
    CALL core_sound.cpp_CSound_configure_FUN_005b3830 ; 005131d5
        ;   XREF to: 005b3830 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_configure_FUN_005b3830(CSound * this_ptr)
        ;   Label: LAB_005131d5
    ADD ESP,0x4                         ; 005131da
        ;   Label: LAB_005131da
    PUSH 0x1                            ; 005131dd
        ;   Label: default
    MOV EAX,[0x0067cf44]                ; 005131df | g_CKeysPtr
    PUSH EAX                            ; 005131e4 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 005131e5 | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 005131e7
    ADD ESP,0x8                         ; 005131ea
    TEST EAX,EAX                        ; 005131ed
    JZ 0x005131f6                       ; 005131ef
        ;   XREF to: 005131f6 (CONDITIONAL_JUMP)  ; LAB_005131f6
    MOV EBP,0x63                        ; 005131f1
    PUSH 0x1d                           ; 005131f6
        ;   Label: LAB_005131f6
    MOV EAX,[0x0067cf44]                ; 005131f8 | g_CKeysPtr
    PUSH EAX                            ; 005131fd | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 005131fe | g_CKeysInstance
    CALL dword ptr [EDX]                ; 00513200
    ADD ESP,0x8                         ; 00513202
    TEST EAX,EAX                        ; 00513205
    JZ 0x00513243                       ; 00513207
        ;   XREF to: 00513243 (CONDITIONAL_JUMP)  ; LAB_00513243
    PUSH 0x32                           ; 00513209
    MOV EAX,[0x0067cf44]                ; 0051320b | g_CKeysPtr
    PUSH EAX                            ; 00513210 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 00513211 | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 00513213
    ADD ESP,0x8                         ; 00513216
    TEST EAX,EAX                        ; 00513219
    JZ 0x00513243                       ; 0051321b
        ;   XREF to: 00513243 (CONDITIONAL_JUMP)  ; LAB_00513243
    CALL sound_sndmain.cpp_isSoundEnabled_FUN_005a96b0 ; 0051321d
        ;   XREF to: 005a96b0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSoundEnabled_FUN_005a96b0()
    TEST EAX,EAX                        ; 00513222
    SETZ AL                             ; 00513224
    AND EAX,0xff                        ; 00513227
    PUSH EAX                            ; 0051322c
    CALL sound_sndmain.cpp_setSoundEnabled_FUN_005a96c0 ; 0051322d
        ;   XREF to: 005a96c0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_setSoundEnabled_FUN_005a96c0(int enable)
    ADD ESP,0x4                         ; 00513232
    MOV EAX,[0x00681ef8]                ; 00513235 | g_CSoundInstance | g_CSoundPtr
    PUSH EAX                            ; 0051323a | g_CSoundInstance
    CALL core_sound.cpp_CSound_configure_FUN_005b3830 ; 0051323b
        ;   XREF to: 005b3830 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_configure_FUN_005b3830(CSound * this_ptr)
    ADD ESP,0x4                         ; 00513240
    PUSH 0x1d                           ; 00513243
        ;   Label: LAB_00513243
    MOV EAX,[0x0067cf44]                ; 00513245 | g_CKeysPtr
    PUSH EAX                            ; 0051324a | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0051324b | g_CKeysInstance
    CALL dword ptr [EDX]                ; 0051324d
    ADD ESP,0x8                         ; 0051324f
    TEST EAX,EAX                        ; 00513252
    JZ 0x005132dc                       ; 00513254
        ;   XREF to: 005132dc (CONDITIONAL_JUMP)  ; LAB_005132dc
    PUSH 0x20                           ; 0051325a
    MOV EAX,[0x0067cf44]                ; 0051325c | g_CKeysPtr
    PUSH EAX                            ; 00513261 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 00513262 | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 00513264
    ADD ESP,0x8                         ; 00513267
    TEST EAX,EAX                        ; 0051326a
    JZ 0x0051343f                       ; 0051326c
        ;   XREF to: 0051343f (CONDITIONAL_JUMP)  ; LAB_0051343f
    CMP dword ptr [0x03f6b878],0x0      ; 00513272 | g_FullscreenMode
        ;   Label: LAB_00513272
    JZ 0x005132b1                       ; 00513279
        ;   XREF to: 005132b1 (CONDITIONAL_JUMP)  ; LAB_005132b1
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 0051327b
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    PUSH 0x0                            ; 00513280
    PUSH 0x0                            ; 00513282
    PUSH 0x636dfe                       ; 00513284 | = "3D acceleration has been turned off!"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00513289
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0051328e
    PUSH 0xb                            ; 00513291
    PUSH 0x0                            ; 00513293
    PUSH 0x636e23                       ; 00513295 | = "Press any key to continue..."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0051329a
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0051329f
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 005132a2
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 005132a7
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 005132ac
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    MOV EBX,dword ptr [0x00681ef8]      ; 005132b1 | g_CSoundInstance | g_CSoundPtr
        ;   Label: LAB_005132b1
    XOR ECX,ECX                         ; 005132b7
    PUSH EBX                            ; 005132b9 | g_CSoundInstance
    MOV dword ptr [0x03f6b878],ECX      ; 005132ba | g_FullscreenMode
    CALL core_sound.cpp_CSound_reset_FUN_005b39a0 ; 005132c0
        ;   XREF to: 005b39a0 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_reset_FUN_005b39a0(CSound * this_ptr)
    ADD ESP,0x4                         ; 005132c5
    CALL core_main.c_showDeveloperToolsMenu_FUN_005073a0 ; 005132c8
        ;   XREF to: 005073a0 (UNCONDITIONAL_CALL)  ; void core_main.c_showDeveloperToolsMenu_FUN_005073a0()
    MOV ESI,dword ptr [0x00681ef8]      ; 005132cd | g_CSoundPtr
    PUSH ESI                            ; 005132d3 | g_CSoundInstance
    CALL core_sound.cpp_CSound_configure_FUN_005b3830 ; 005132d4
        ;   XREF to: 005b3830 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_configure_FUN_005b3830(CSound * this_ptr)
    ADD ESP,0x4                         ; 005132d9
    PUSH 0x1d                           ; 005132dc
        ;   Label: LAB_005132dc
    MOV EAX,[0x0067cf44]                ; 005132de | g_CKeysPtr
    PUSH EAX                            ; 005132e3 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 005132e4 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 005132e6
    ADD ESP,0x8                         ; 005132e8
    TEST EAX,EAX                        ; 005132eb
    JZ 0x0051332d                       ; 005132ed
        ;   XREF to: 0051332d (CONDITIONAL_JUMP)  ; LAB_0051332d
    PUSH 0x21                           ; 005132ef
    MOV EAX,[0x0067cf44]                ; 005132f1 | g_CKeysPtr
    PUSH EAX                            ; 005132f6 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 005132f7 | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 005132f9
    ADD ESP,0x8                         ; 005132fc
    TEST EAX,EAX                        ; 005132ff
    JZ 0x0051332d                       ; 00513301
        ;   XREF to: 0051332d (CONDITIONAL_JUMP)  ; LAB_0051332d
    MOV EDI,dword ptr [0x00681ef8]      ; 00513303 | g_CSoundPtr
    PUSH EDI                            ; 00513309 | g_CSoundInstance
    CALL core_sound.cpp_CSound_reset_FUN_005b39a0 ; 0051330a
        ;   XREF to: 005b39a0 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_reset_FUN_005b39a0(CSound * this_ptr)
    ADD ESP,0x4                         ; 0051330f
    PUSH 0x2dd4130                      ; 00513312 | g_CDemonFileManagerInstance
    CALL core_fileman.cpp_CDemonFileManager_showEditorMenu_FUN_004be270 ; 00513317
        ;   XREF to: 004be270 (UNCONDITIONAL_CALL)  ; void core_fileman.cpp_CDemonFileManager_showEditorMenu_FUN_004be270(CDemonFileManager * this_ptr)
    ADD ESP,0x4                         ; 0051331c
    MOV EAX,[0x00681ef8]                ; 0051331f | g_CSoundInstance | g_CSoundPtr
    PUSH EAX                            ; 00513324 | g_CSoundInstance
    CALL core_sound.cpp_CSound_configure_FUN_005b3830 ; 00513325
        ;   XREF to: 005b3830 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_configure_FUN_005b3830(CSound * this_ptr)
    ADD ESP,0x4                         ; 0051332a
    CMP dword ptr [ESP + 0x10],0x0      ; 0051332d
        ;   Label: LAB_0051332d
    JZ 0x0051334e                       ; 00513332
        ;   XREF to: 0051334e (CONDITIONAL_JUMP)  ; LAB_0051334e
    MOV EBX,dword ptr [0x00681ef8]      ; 00513334 | g_CSoundInstance | g_CSoundPtr
    XOR ECX,ECX                         ; 0051333a
    PUSH EBX                            ; 0051333c | g_CSoundInstance
    MOV dword ptr [ESP + 0x14],ECX      ; 0051333d
    CALL core_sound.cpp_CSound_configure_FUN_005b3830 ; 00513341
        ;   XREF to: 005b3830 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_configure_FUN_005b3830(CSound * this_ptr)
    ADD ESP,0x4                         ; 00513346
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 00513349
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    TEST EBP,EBP                        ; 0051334e
        ;   Label: LAB_0051334e
    JZ 0x00513010                       ; 00513350
        ;   XREF to: 00513010 (CONDITIONAL_JUMP)  ; LAB_00513010
    MOV ESI,dword ptr [0x00681ef8]      ; 00513356 | g_CSoundPtr
    PUSH ESI                            ; 0051335c | g_CSoundInstance
    CALL core_sound.cpp_CSound_reset_FUN_005b39a0 ; 0051335d
        ;   XREF to: 005b39a0 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_reset_FUN_005b39a0(CSound * this_ptr)
    ADD ESP,0x4                         ; 00513362
    PUSH 0x2f21590                      ; 00513365 | g_CMoonInstance
    CALL core_moon.cpp_CMoon_free_FUN_00529ce0 ; 0051336a
        ;   XREF to: 00529ce0 (UNCONDITIONAL_CALL)  ; void core_moon.cpp_CMoon_free_FUN_00529ce0(CMoon * this_ptr)
    ADD ESP,0x4                         ; 0051336f
    MOV EAX,EBP                         ; 00513372
    POP EBX                             ; 00513374
    POP ESI                             ; 00513375
    POP EDI                             ; 00513376
    ADD ESP,0x8                         ; 00513377
    POP EBP                             ; 0051337a
    RET                                 ; 0051337b
    MOV EAX,0x1                         ; 0051337c
        ;   Label: LAB_0051337c
    ADD ESP,0x8                         ; 00513381
    POP EBP                             ; 00513384
    RET                                 ; 00513385
    MOV EAX,[0x0067b654]                ; 00513386 | g_CGameInstance | g_CGamePtr
        ;   Label: LAB_00513386
    CMP dword ptr [EAX + 0x4],0x1e0     ; 0051338b | g_CGameInstance.game_pixy
    JLE 0x00512f61                      ; 00513392
        ;   XREF to: 00512f61 (CONDITIONAL_JUMP)  ; LAB_00512f61
    MOV dword ptr [EAX + 0x4],0x1e0     ; 00513398 | g_CGameInstance.game_pixy
    MOV dword ptr [EAX],0x280           ; 0051339f | g_CGameInstance
    JMP 0x00512f61                      ; 005133a5
        ;   XREF to: 00512f61 (UNCONDITIONAL_JUMP)  ; LAB_00512f61
    PUSH 0x1d                           ; 005133aa
        ;   Label: LAB_005133aa
    MOV EAX,[0x0067cf44]                ; 005133ac | g_CKeysPtr
    PUSH EAX                            ; 005133b1 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 005133b2 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 005133b4
    ADD ESP,0x8                         ; 005133b6
    TEST EAX,EAX                        ; 005133b9
    JZ 0x005133cb                       ; 005133bb
        ;   XREF to: 005133cb (CONDITIONAL_JUMP)  ; LAB_005133cb
    PUSH 0x1                            ; 005133bd
    MOV EBX,dword ptr [0x0067b654]      ; 005133bf | g_CGameInstance | g_CGamePtr
    PUSH EBX                            ; 005133c5 | g_CGameInstance
    JMP 0x005131af                      ; 005133c6
        ;   XREF to: 005131af (UNCONDITIONAL_JUMP)  ; LAB_005131af
    PUSH EAX                            ; 005133cb
        ;   Label: LAB_005133cb
    MOV ECX,dword ptr [0x0067b654]      ; 005133cc | g_CGameInstance | g_CGamePtr
    PUSH ECX                            ; 005133d2 | g_CGameInstance
    JMP 0x005131af                      ; 005133d3
        ;   XREF to: 005131af (UNCONDITIONAL_JUMP)  ; LAB_005131af
    PUSH 0x2f21590                      ; 005133d8 | g_CMoonInstance
        ;   Label: caseD_2
    CALL core_moon.cpp_CMoon_free_FUN_00529ce0 ; 005133dd
        ;   XREF to: 00529ce0 (UNCONDITIONAL_CALL)  ; void core_moon.cpp_CMoon_free_FUN_00529ce0(CMoon * this_ptr)
    ADD ESP,0x4                         ; 005133e2
    MOV ESI,dword ptr [0x00681ef8]      ; 005133e5 | g_CSoundPtr
    PUSH ESI                            ; 005133eb | g_CSoundInstance
    CALL core_sound.cpp_CSound_reset_FUN_005b39a0 ; 005133ec
        ;   XREF to: 005b39a0 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_reset_FUN_005b39a0(CSound * this_ptr)
    ADD ESP,0x4                         ; 005133f1
    PUSH 0x1                            ; 005133f4
    PUSH 0x0                            ; 005133f6
    MOV EDI,dword ptr [0x0067b654]      ; 005133f8 | g_CGamePtr
    PUSH EDI                            ; 005133fe | g_CGameInstance
    CALL core_game.cpp_CGame_loadGame_FUN_004e12b0 ; 005133ff
        ;   XREF to: 004e12b0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_loadGame_FUN_004e12b0(CGame * this_ptr, char * save_filename, int load_mode)
    ADD ESP,0xc                         ; 00513404
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 00513407
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    CALL engine_texture.cpp_clearTextureCache_FUN_005dd8e0 ; 0051340c
        ;   XREF to: 005dd8e0 (UNCONDITIONAL_CALL)  ; void engine_texture.cpp_clearTextureCache_FUN_005dd8e0()
    PUSH 0x2f21590                      ; 00513411 | g_CMoonInstance
    CALL core_moon.cpp_CMoon_init_FUN_00529ae0 ; 00513416
        ;   XREF to: 00529ae0 (UNCONDITIONAL_CALL)  ; void core_moon.cpp_CMoon_init_FUN_00529ae0(CMoon * this_ptr)
    ADD ESP,0x4                         ; 0051341b
    MOV EAX,[0x00681ef8]                ; 0051341e | g_CSoundInstance | g_CSoundPtr
    PUSH EAX                            ; 00513423 | g_CSoundInstance
    JMP 0x005131d5                      ; 00513424
        ;   XREF to: 005131d5 (UNCONDITIONAL_JUMP)  ; LAB_005131d5
    PUSH 0x0                            ; 00513429
        ;   Label: caseD_1
    CALL core_menu.cpp_showOptionsScreen_FUN_00512d30 ; 0051342b
        ;   XREF to: 00512d30 (UNCONDITIONAL_CALL)  ; void core_menu.cpp_showOptionsScreen_FUN_00512d30(int initialize_systems)
    JMP 0x005131da                      ; 00513430
        ;   XREF to: 005131da (UNCONDITIONAL_JUMP)  ; LAB_005131da
    MOV EBP,0x63                        ; 00513435
        ;   Label: caseD_3
    JMP 0x005131dd                      ; 0051343a
        ;   XREF to: 005131dd (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x26                           ; 0051343f
        ;   Label: LAB_0051343f
    MOV EAX,[0x0067cf44]                ; 00513441 | g_CKeysPtr
    PUSH EAX                            ; 00513446 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 00513447 | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 00513449
    ADD ESP,0x8                         ; 0051344c
    TEST EAX,EAX                        ; 0051344f
    JNZ 0x00513272                      ; 00513451
        ;   XREF to: 00513272 (CONDITIONAL_JUMP)  ; LAB_00513272
    JMP 0x005132dc                      ; 00513457
        ;   XREF to: 005132dc (UNCONDITIONAL_JUMP)  ; LAB_005132dc

