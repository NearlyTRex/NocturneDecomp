; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_game.cpp_CGame_rollCredits_FUN_004e4010(CGame * this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x1134]:4  local_1134
; undefined1       Stack[-0x134]:1  local_134
; undefined1       Stack[-0x133]:1  local_133
; undefined1       Stack[-0x34]:1  local_34
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[2]:
;   core_game.cpp_CGame_finishAct_FUN_004e3b90 at 004e3c5d
;   core_menu.cpp_showOptionsScreen_FUN_00512d30 at 00512ee4
;
; Referenced Globals:
;   TerminatedCString s_stats_0062d5d5
;   TerminatedCString s_rt_0062d5db
;   TerminatedCString s_credits_txt_0062d5de
;   TerminatedCString s_data_0062d5ea
;   TerminatedCString s_end_0062d5ef
;   TerminatedCString s_core_game_cpp_0062d5f4
;   TerminatedCString s_core_game_cpp_0062d605
;   TerminatedCString s_CGame_rollCredits_Out_of_0062d616
;   TerminatedCString s_core_game_cpp_0062d639
;   TerminatedCString s_faded_remix_mp3_0062d64a
;   TerminatedCString s_core_game_cpp_0062d65a
;   float FLOAT_0062d66d = 32
;   CKeys* g_CKeysPtr = 02dcd7d4
;   CBitFont* g_ThemeFont
;   void* g_CKeysPtr
;   ... and 3 more
;
; Called Functions:
;   core_game.cpp_CGame_saveClockTime_FUN_004d7d80
;   core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_math.c_round_FUN_005fe6b0
;   crt_stdio.c_fgets_FUN_005fefd0
;   crt_string.c_strcmp_FUN_005fef20
;   engine_2d.c_clearInputAndWait_FUN_00403260
;   engine_2d.c_fillRectColor_FUN_00403170
;   engine_3d.c_setRenderAlpha_FUN_00406d80
;   engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520
;   engine_alphabit.cpp_CAlphaBitmap_display_FUN_00410950
;   engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_00410540
;   engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0
;   engine_dosio.c_getFile_FUN_00481a50
;   engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_004cdee0
;   ... and 15 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e4010
        ;   Label: core_game.cpp_CGame_rollCredits_FUN_004e4010
    PUSH EBP                            ; 004e4011
    SUB ESP,0x112c                      ; 004e4012
    XOR EDX,EDX                         ; 004e4018
    MOV ECX,0x43f00000                  ; 004e401a
    MOV dword ptr [ESP + 0x1120],EDX    ; 004e401f
    MOV dword ptr [ESP + 0x111c],ECX    ; 004e4026
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 004e402d | void engine_2d.c_clearInputAndWait_FUN_00403260()
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)
    XOR EAX,EAX                         ; 004e4032
    ADD EAX,0x4                         ; 004e4034
        ;   Label: LAB_004e4034
    XOR EBX,EBX                         ; 004e4037
    MOV dword ptr [ESP + EAX*0x1 + -0x4],EBX ; 004e4039
    CMP EAX,0x1000                      ; 004e403d
    JNZ 0x004e4034                      ; 004e4042 | LAB_004e4034
        ;   XREF to: 004e4034 (CONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x1100]              ; 004e4044
    PUSH EAX                            ; 004e404b
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520 ; 004e404c | void engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520(CAlphaBitmap * this_ptr)
        ;   XREF to: 00410520 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004e4051
    PUSH 0x1e0                          ; 004e4054
    PUSH 0x280                          ; 004e4059
    PUSH 0x62d5d5                       ; 004e405e | = "stats" | s_stats_0062d5d5 = stats
    LEA EAX,[ESP + 0x110c]              ; 004e4063
    PUSH EAX                            ; 004e406a
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0 ; 004e406b | void engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
        ;   XREF to: 004105d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004e4070
    PUSH 0x62d5db                       ; 004e4073 | = "rt" | s_rt_0062d5db = rt
    PUSH 0x62d5de                       ; 004e4078 | = "credits.txt" | s_credits_txt_0062d5de = credits.txt
    PUSH 0x62d5ea                       ; 004e407d | = "data" | s_data_0062d5ea = data
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 004e4082 | FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004e4087
    MOV EBP,EAX                         ; 004e408a
    TEST EAX,EAX                        ; 004e408c
    JZ 0x004e42e1                       ; 004e408e | LAB_004e42e1
        ;   XREF to: 004e42e1 (CONDITIONAL_JUMP)
    PUSH EDI                            ; 004e4094
    PUSH ESI                            ; 004e4095
    MOV EBX,dword ptr [ESP + 0x1128]    ; 004e4096
    SHL EBX,0x2                         ; 004e409d
    TEST byte ptr [EBP + 0xc],0x10      ; 004e40a0
        ;   Label: LAB_004e40a0
    JNZ 0x004e40e1                      ; 004e40a4 | LAB_004e40e1
        ;   XREF to: 004e40e1 (CONDITIONAL_JUMP)
    CMP EBX,0x1000                      ; 004e40a6
    JGE 0x004e40e1                      ; 004e40ac | LAB_004e40e1
        ;   XREF to: 004e40e1 (CONDITIONAL_JUMP)
    PUSH EBP                            ; 004e40ae
    PUSH 0xff                           ; 004e40af
    LEA EAX,[ESP + 0x1010]              ; 004e40b4
    PUSH EAX                            ; 004e40bb
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 004e40bc | char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, FILE * stream)
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004e40c1
    PUSH 0x62d5ef                       ; 004e40c4 | = "end\n" | s_end_0062d5ef = end

    LEA EAX,[ESP + 0x100c]              ; 004e40c9
    PUSH EAX                            ; 004e40d0
    CALL crt_string.c_strcmp_FUN_005fef20 ; 004e40d1 | int crt_string.c_strcmp_FUN_005fef20(char * str1, char * str2)
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004e40d6
    TEST EAX,EAX                        ; 004e40d9
    JNZ 0x004e42fb                      ; 004e40db | LAB_004e42fb
        ;   XREF to: 004e42fb (CONDITIONAL_JUMP)
    PUSH 0x123e                         ; 004e40e1
        ;   Label: LAB_004e40e1
    PUSH 0x62d639                       ; 004e40e6 | = "..\\core\\game.cpp" | s_core_game_cpp_0062d639 = ..\core\game.cpp
    PUSH EBP                            ; 004e40eb
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004e40ec | int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004e40f1
    CALL sound_sndmain.cpp_resetSoundDevice_FUN_005ab130 ; 004e40f4 | int sound_sndmain.cpp_resetSoundDevice_FUN_005ab130()
        ;   XREF to: 005ab130 (UNCONDITIONAL_CALL)
    CALL sound_sndmain.cpp_enableSoundSystem_FUN_005aaef0 ; 004e40f9 | int sound_sndmain.cpp_enableSoundSystem_FUN_005aaef0()
        ;   XREF to: 005aaef0 (UNCONDITIONAL_CALL)
    XOR ECX,ECX                         ; 004e40fe
    PUSH 0x1                            ; 004e4100
    MOV dword ptr [ESP + 0x1120],ECX    ; 004e4102
    CALL sound_sndmain.cpp_isSfxChannelEnabled_FUN_005a9ea0 ; 004e4109 | int sound_sndmain.cpp_isSfxChannelEnabled_FUN_005a9ea0(int channel_index)
        ;   XREF to: 005a9ea0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004e410e
    TEST EAX,EAX                        ; 004e4111
    JNZ 0x004e438a                      ; 004e4113 | LAB_004e438a
        ;   XREF to: 004e438a (CONDITIONAL_JUMP)
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 004e4119 | void engine_2d.c_clearInputAndWait_FUN_00403260()
        ;   Label: LAB_004e4119
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)
    PUSH 0x58                           ; 004e411e
    MOV EDI,dword ptr [0x020a5720]      ; 004e4120 | CBitFont * g_ThemeFont
    PUSH EDI                            ; 004e4126
    MOV dword ptr [EDI + 0x3190],0x0    ; 004e4127
    CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0 ; 004e4131 | int engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0(CBitFont * this_ptr, int char_code)
        ;   XREF to: 004d01d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004e4136
    MOV EBX,0xffffffff                  ; 004e4139
    MOV ESI,dword ptr [ESP + 0x1140]    ; 004e413e
    MOV EBP,EAX                         ; 004e4145
    PUSH ESI                            ; 004e4147
    MOV dword ptr [ESP + 0x1134],EAX    ; 004e4148
    MOV dword ptr [ESP + 0x1124],EBX    ; 004e414f
    CALL core_game.cpp_CGame_saveClockTime_FUN_004d7d80 ; 004e4156 | void core_game.cpp_CGame_saveClockTime_FUN_004d7d80(CGame * n1, CGame * n2)
        ;   XREF to: 004d7d80 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004e415b
    PUSH 0xffff                         ; 004e415e
    CALL engine_3d.c_setRenderAlpha_FUN_00406d80 ; 004e4163 | void engine_3d.c_setRenderAlpha_FUN_00406d80(int alpha_color_value)
        ;   XREF to: 00406d80 (UNCONDITIONAL_CALL)
    MOV EAX,0x1df                       ; 004e4168
    SUB EAX,EBP                         ; 004e416d
    ADD ESP,0x4                         ; 004e416f
    MOV EBP,EAX                         ; 004e4172
    FLD float ptr [ESP + 0x1124]        ; 004e4174
        ;   Label: LAB_004e4174
    MOV EDX,dword ptr [ESP + 0x1120]    ; 004e417b
    CALL crt_math.c_round_FUN_005fe6b0  ; 004e4182 | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [ESP + 0x112c]      ; 004e4187
    MOV EAX,dword ptr [ESP + 0x112c]    ; 004e418e
    CMP EAX,EDX                         ; 004e4195
    JZ 0x004e428f                       ; 004e4197 | LAB_004e428f
        ;   XREF to: 004e428f (CONDITIONAL_JUMP)
    MOV dword ptr [ESP + 0x1120],EAX    ; 004e419d
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 004e41a4 | void wincore_windll.cpp_clearScreen_FUN_005b3e70()
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
    PUSH 0xffff                         ; 004e41a9
    PUSH 0x0                            ; 004e41ae
    PUSH 0x0                            ; 004e41b0
    LEA EAX,[ESP + 0x1114]              ; 004e41b2
    PUSH EAX                            ; 004e41b9
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_00410950 ; 004e41ba | void engine_alphabit.cpp_CAlphaBitmap_display_FUN_00410950(CAlphaBitmap * this_ptr, int x, int y, int alpha)
        ;   XREF to: 00410950 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004e41bf
    MOV ECX,dword ptr [ESP + 0x1128]    ; 004e41c2
    TEST ECX,ECX                        ; 004e41c9
    JLE 0x004e423d                      ; 004e41cb | LAB_004e423d
        ;   XREF to: 004e423d (CONDITIONAL_JUMP)
    LEA ESI,[ECX*0x4 + 0x0]             ; 004e41d1
    XOR EBX,EBX                         ; 004e41d8
    MOV EAX,dword ptr [ESP + EBX*0x1 + 0x8] ; 004e41da
        ;   Label: LAB_004e41da
    MOV CL,byte ptr [EAX]               ; 004e41de
    MOV EDX,0xf8                        ; 004e41e0
    CMP CL,0x5c                         ; 004e41e5
    JNZ 0x004e41f8                      ; 004e41e8 | LAB_004e41f8
        ;   XREF to: 004e41f8 (CONDITIONAL_JUMP)
    CMP byte ptr [EAX + 0x1],0x62       ; 004e41ea
    JNZ 0x004e41f5                      ; 004e41ee | LAB_004e41f5
        ;   XREF to: 004e41f5 (CONDITIONAL_JUMP)
    MOV EDX,0x2                         ; 004e41f0
    ADD EAX,0x2                         ; 004e41f5
        ;   Label: LAB_004e41f5
    MOV ECX,dword ptr [ESP + 0x112c]    ; 004e41f8
        ;   Label: LAB_004e41f8
    TEST ECX,ECX                        ; 004e41ff
    JL 0x004e421f                       ; 004e4201 | LAB_004e421f
        ;   XREF to: 004e421f (CONDITIONAL_JUMP)
    CMP EBP,ECX                         ; 004e4203
    JLE 0x004e421f                      ; 004e4205 | LAB_004e421f
        ;   XREF to: 004e421f (CONDITIONAL_JUMP)
    PUSH EAX                            ; 004e4207
    PUSH 0x0                            ; 004e4208
    PUSH EDX                            ; 004e420a
    PUSH ECX                            ; 004e420b
    PUSH 0x27f                          ; 004e420c
    PUSH 0x19e                          ; 004e4211
    PUSH EDI                            ; 004e4216
    CALL engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_004cdee0 ; 004e4217 | int engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_004cdee0(CBitFont * this_ptr, int left_x, int right_x, int y_pos, ...)
        ;   XREF to: 004cdee0 (UNCONDITIONAL_CALL)
    ADD ESP,0x1c                        ; 004e421c
    MOV EAX,dword ptr [ESP + 0x1130]    ; 004e421f
        ;   Label: LAB_004e421f
    MOV EDX,dword ptr [ESP + 0x112c]    ; 004e4226
    ADD EDX,EAX                         ; 004e422d
    ADD EBX,0x4                         ; 004e422f
    MOV dword ptr [ESP + 0x112c],EDX    ; 004e4232
    CMP EBX,ESI                         ; 004e4239
    JL 0x004e41da                       ; 004e423b | LAB_004e41da
        ;   XREF to: 004e41da (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [ESP + 0x111c]    ; 004e423d
        ;   Label: LAB_004e423d
    TEST ECX,ECX                        ; 004e4244
    JZ 0x004e4259                       ; 004e4246 | LAB_004e4259
        ;   XREF to: 004e4259 (CONDITIONAL_JUMP)
    PUSH ECX                            ; 004e4248
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 004e4249 | int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004e424e
    TEST EAX,EAX                        ; 004e4251
    JZ 0x004e43c1                       ; 004e4253 | LAB_004e43c1
        ;   XREF to: 004e43c1 (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 004e4259
        ;   Label: LAB_004e4259
    PUSH 0x1e                           ; 004e425b
    PUSH 0x27f                          ; 004e425d
    PUSH 0x0                            ; 004e4262
    PUSH 0x19e                          ; 004e4264
    CALL engine_2d.c_fillRectColor_FUN_00403170 ; 004e4269 | void engine_2d.c_fillRectColor_FUN_00403170(int x1, int y1, int x2, int y2, ...)
        ;   XREF to: 00403170 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 004e426e
    PUSH 0x0                            ; 004e4271
    PUSH 0x1df                          ; 004e4273
    PUSH 0x27f                          ; 004e4278
    PUSH 0x1b7                          ; 004e427d
    PUSH 0x19e                          ; 004e4282
    CALL engine_2d.c_fillRectColor_FUN_00403170 ; 004e4287 | void engine_2d.c_fillRectColor_FUN_00403170(int x1, int y1, int x2, int y2, ...)
        ;   XREF to: 00403170 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 004e428c
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 004e428f | void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
        ;   Label: LAB_004e428f
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)
    PUSH 0x1                            ; 004e4294
    MOV EAX,[0x0067cf44]                ; 004e4296 | CKeys * g_CKeysPtr
    PUSH EAX                            ; 004e429b | void * g_CKeysPtr
    MOV EDX,dword ptr [EAX]             ; 004e429c | void * g_CKeysPtr
    CALL dword ptr [EDX]                ; 004e429e
    ADD ESP,0x8                         ; 004e42a0
    TEST EAX,EAX                        ; 004e42a3
    JNZ 0x004e43c1                      ; 004e42a5 | LAB_004e43c1
        ;   XREF to: 004e43c1 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [ESP + 0x1140]    ; 004e42ab
    PUSH EDX                            ; 004e42b2
    CALL core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90 ; 004e42b3 | void core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90(CGame * this_ptr)
        ;   XREF to: 004d7d90 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004e42b8
    MOV EAX,dword ptr [ESP + 0x1140]    ; 004e42bb
    FLD float ptr [EAX + 0x264]         ; 004e42c2
    FMUL float ptr [0x0062d66d]         ; 004e42c8 | float FLOAT_0062d66d
    FSUBR float ptr [ESP + 0x1124]      ; 004e42ce
    FSTP float ptr [ESP + 0x1124]       ; 004e42d5
    JMP 0x004e4174                      ; 004e42dc | LAB_004e4174
        ;   XREF to: 004e4174 (UNCONDITIONAL_JUMP)
    PUSH EBX                            ; 004e42e1
        ;   Label: LAB_004e42e1
    LEA EAX,[ESP + 0x1104]              ; 004e42e2
    PUSH EAX                            ; 004e42e9
    CALL engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_00410540 ; 004e42ea | CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_00410540(CAlphaBitmap * this_ptr)
        ;   XREF to: 00410540 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004e42ef
    ADD ESP,0x112c                      ; 004e42f2
    POP EBP                             ; 004e42f8
    POP EBX                             ; 004e42f9
    RET                                 ; 004e42fa
    PUSH 0x1237                         ; 004e42fb
        ;   Label: LAB_004e42fb
    PUSH 0x62d5f4                       ; 004e4300 | = "..\\core\\game.cpp" | s_core_game_cpp_0062d5f4 = ..\core\game.cpp
    LEA EDI,[ESP + 0x1010]              ; 004e4305
    SUB ECX,ECX                         ; 004e430c
    DEC ECX                             ; 004e430e
    XOR EAX,EAX                         ; 004e430f
    SCASB.REPNE ES:EDI                  ; 004e4311
    NOT ECX                             ; 004e4313
    DEC ECX                             ; 004e4315
    ADD ECX,0xa                         ; 004e4316
    PUSH ECX                            ; 004e4319
    CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250 ; 004e431a | void * shape_memdbg.cpp_debugMalloc_FUN_0050f250(int size, char * filename, int line_number)
        ;   XREF to: 0050f250 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004e431f
    MOV dword ptr [ESP + EBX*0x1 + 0x8],EAX ; 004e4322
    TEST EAX,EAX                        ; 004e4326
    JZ 0x004e4366                       ; 004e4328 | LAB_004e4366
        ;   XREF to: 004e4366 (CONDITIONAL_JUMP)
    LEA ESI,[ESP + 0x1008]              ; 004e432a
        ;   Label: LAB_004e432a
    MOV EDI,dword ptr [ESP + EBX*0x1 + 0x8] ; 004e4331
    MOV EDX,dword ptr [ESP + 0x1128]    ; 004e4335
    PUSH EDI                            ; 004e433c
    MOV AL,byte ptr [ESI]               ; 004e433d
        ;   Label: LAB_004e433d
    MOV byte ptr [EDI],AL               ; 004e433f
    CMP AL,0x0                          ; 004e4341
    JZ 0x004e4355                       ; 004e4343 | LAB_004e4355
        ;   XREF to: 004e4355 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 004e4345
    ADD ESI,0x2                         ; 004e4348
    MOV byte ptr [EDI + 0x1],AL         ; 004e434b
    ADD EDI,0x2                         ; 004e434e
    CMP AL,0x0                          ; 004e4351
    JNZ 0x004e433d                      ; 004e4353 | LAB_004e433d
        ;   XREF to: 004e433d (CONDITIONAL_JUMP)
    POP EDI                             ; 004e4355
        ;   Label: LAB_004e4355
    INC EDX                             ; 004e4356
    ADD EBX,0x4                         ; 004e4357
    MOV dword ptr [ESP + 0x1128],EDX    ; 004e435a
    JMP 0x004e40a0                      ; 004e4361 | LAB_004e40a0
        ;   XREF to: 004e40a0 (UNCONDITIONAL_JUMP)
    MOV EDI,0x62d605                    ; 004e4366 | = "..\\core\\game.cpp" | s_core_game_cpp_0062d605 = ..\core\game.cpp
        ;   Label: LAB_004e4366
    MOV EAX,0x1239                      ; 004e436b
    PUSH 0x62d616                       ; 004e4370 | = "CGame::rollCredits - Out of memory" | s_CGame_rollCredits_Out_of_0062d616 = CGame::rollCredits - Out of memory
    MOV dword ptr [0x02f0ca48],EDI      ; 004e4375 | char * g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 004e437b | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004e4380 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004e4385
    JMP 0x004e432a                      ; 004e4388 | LAB_004e432a
        ;   XREF to: 004e432a (UNCONDITIONAL_JUMP)
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30 ; 004e438a | void sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30()
        ;   Label: LAB_004e438a
        ;   XREF to: 005a8c30 (UNCONDITIONAL_CALL)
    PUSH 0x1                            ; 004e438f
    CALL sound_sndmain.cpp_setNextSfxChannel_FUN_005a8af0 ; 004e4391 | void sound_sndmain.cpp_setNextSfxChannel_FUN_005a8af0(int channel_index)
        ;   XREF to: 005a8af0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004e4396
    PUSH 0x1                            ; 004e4399
    CALL sound_sndmain.cpp_setNextSfxFlags_FUN_005a8b70 ; 004e439b | void sound_sndmain.cpp_setNextSfxFlags_FUN_005a8b70(uint flags)
        ;   XREF to: 005a8b70 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004e43a0
    PUSH 0x62d64a                       ; 004e43a3 | = "faded-remix.mp3" | s_faded_remix_mp3_0062d64a = faded-remix.mp3
    CALL sound_sndmain.cpp_startSfx_FUN_005a8e90 ; 004e43a8 | uint sound_sndmain.cpp_startSfx_FUN_005a8e90(char * filename)
        ;   XREF to: 005a8e90 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004e43ad
    MOV dword ptr [ESP + 0x111c],EAX    ; 004e43b0
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0 ; 004e43b7 | void sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0()
        ;   XREF to: 005a8cb0 (UNCONDITIONAL_CALL)
    JMP 0x004e4119                      ; 004e43bc | LAB_004e4119
        ;   XREF to: 004e4119 (UNCONDITIONAL_JUMP)
    CMP dword ptr [0x02fa8cd0],0x0      ; 004e43c1 | int g_MessageCount
        ;   Label: LAB_004e43c1
    JZ 0x004e43d4                       ; 004e43c8 | LAB_004e43d4
        ;   XREF to: 004e43d4 (CONDITIONAL_JUMP)
    MOV dword ptr [EDI + 0x3190],0x1    ; 004e43ca
    CALL sound_sndmain.cpp_resetSoundDevice_FUN_005ab130 ; 004e43d4 | int sound_sndmain.cpp_resetSoundDevice_FUN_005ab130()
        ;   Label: LAB_004e43d4
        ;   XREF to: 005ab130 (UNCONDITIONAL_CALL)
    MOV EBX,dword ptr [ESP + 0x1128]    ; 004e43d9
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 004e43e0 | void engine_2d.c_clearInputAndWait_FUN_00403260()
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)
    TEST EBX,EBX                        ; 004e43e5
    JLE 0x004e4420                      ; 004e43e7 | LAB_004e4420
        ;   XREF to: 004e4420 (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [ESP + 0x1128]    ; 004e43e9
    XOR EBX,EBX                         ; 004e43f0
    SHL ESI,0x2                         ; 004e43f2
    PUSH 0x1294                         ; 004e43f5
        ;   Label: LAB_004e43f5
    PUSH 0x62d65a                       ; 004e43fa | = "..\\core\\game.cpp" | s_core_game_cpp_0062d65a = ..\core\game.cpp
    MOV EDI,dword ptr [ESP + EBX*0x1 + 0x10] ; 004e43ff
    PUSH EDI                            ; 004e4403
    ADD EBX,0x4                         ; 004e4404
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 004e4407 | void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004e440c
    CMP EBX,ESI                         ; 004e440f
    JL 0x004e43f5                       ; 004e4411 | LAB_004e43f5
        ;   XREF to: 004e43f5 (CONDITIONAL_JUMP)
    LEA EAX,[EAX]                       ; 004e4413
    LEA EDX,[EDX]                       ; 004e4419
    NOP                                 ; 004e441f
    PUSH 0x0                            ; 004e4420
        ;   Label: LAB_004e4420
    LEA EAX,[ESP + 0x110c]              ; 004e4422
    PUSH EAX                            ; 004e4429
    CALL engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_00410540 ; 004e442a | CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_00410540(CAlphaBitmap * this_ptr)
        ;   XREF to: 00410540 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004e442f
    POP ESI                             ; 004e4432
    POP EDI                             ; 004e4433
    ADD ESP,0x112c                      ; 004e4434
    POP EBP                             ; 004e443a
    POP EBX                             ; 004e443b
    RET                                 ; 004e443c

