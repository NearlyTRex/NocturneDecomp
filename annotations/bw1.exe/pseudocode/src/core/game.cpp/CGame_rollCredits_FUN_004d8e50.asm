; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_rollCredits_FUN_004d8e50(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x1134]:4  local_1134
; undefined        Stack[-0x134]:1  local_134
; undefined1       Stack[-0x133]:1  local_133
; undefined        Stack[-0x34]:1  local_34
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[2]:
;   core_game.cpp_CGame_finishAct_FUN_004d8a90 at 004d8c87
;   core_menu.cpp_FUN_0050c990 at 0050cc30
;
; Referenced Globals:
;   TerminatedCString s_stats_005e3584
;   undefined4 DAT_005e358a
;   TerminatedCString s_credits_txt_005e358d
;   undefined4 DAT_005e3599
;   undefined4 DAT_005e359e
;   TerminatedCString s_core_game_cpp_005e35a3
;   TerminatedCString s_CGame_rollCredits_Out_of_005e35b4
;   TerminatedCString s_splash_music_44_wav_005e35d7
;   undefined4 DAT_005e35ec
;   undefined4 DAT_0061f2a4
;   undefined4 DAT_0152d244
;   undefined4 DAT_01d1bca0
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_01d7f1b8
;
; Called Functions:
;   core_game.cpp_CGame_saveClockTime_FUN_004cbf10
;   core_game.cpp_FUN_004cbf20
;   core_main.c_FUN_005030e0
;   crt_math.c_round_FUN_005c03a0
;   crt_stdio.c_fclose_FUN_005c0d10
;   crt_stdio.c_fgets_FUN_005c1180
;   crt_string.c__strcmp_FUN_005c0f80
;   crt_unknown.c_FUN_005c08d0
;   crt_unknown.c_FUN_005c09f0
;   engine_2d.c_clearInputAndWait_FUN_004032b0
;   engine_2d.c_fillRectColor_FUN_004031c0
;   engine_3d.c_setRenderAlpha_FUN_00406bd0
;   engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d0a0
;   engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d4b0
;   engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d0c0
;   ... and 15 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d8e50
        ;   Label: core_game.cpp_CGame_rollCredits_FUN_004d8e50
    PUSH EBP                            ; 004d8e51
    SUB ESP,0x112c                      ; 004d8e52
    XOR EDX,EDX                         ; 004d8e58
    MOV ECX,0x43f00000                  ; 004d8e5a
    MOV dword ptr [ESP + 0x1118],EDX    ; 004d8e5f
    MOV dword ptr [ESP + 0x1120],ECX    ; 004d8e66
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 004d8e6d
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
    XOR EAX,EAX                         ; 004d8e72
    ADD EAX,0x4                         ; 004d8e74
        ;   Label: LAB_004d8e74
    XOR EBX,EBX                         ; 004d8e77
    MOV dword ptr [ESP + EAX*0x1 + -0x4],EBX ; 004d8e79
    CMP EAX,0x1000                      ; 004d8e7d
    JNZ 0x004d8e74                      ; 004d8e82
        ;   XREF to: 004d8e74 (CONDITIONAL_JUMP)  ; LAB_004d8e74
    LEA EAX,[ESP + 0x1100]              ; 004d8e84
    PUSH EAX                            ; 004d8e8b
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d0a0 ; 004d8e8c
        ;   XREF to: 0040d0a0 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d0a0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004d8e91
    PUSH 0x1e0                          ; 004d8e94
    PUSH 0x280                          ; 004d8e99
    PUSH 0x5e3584                       ; 004d8e9e | = "stats"
    LEA EAX,[ESP + 0x110c]              ; 004d8ea3
    PUSH EAX                            ; 004d8eaa
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 004d8eab
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004d8eb0
    PUSH 0x5e358a                       ; 004d8eb3 | DAT_005e358a
    PUSH 0x5e358d                       ; 004d8eb8 | = "credits.txt"
    PUSH 0x5e3599                       ; 004d8ebd | DAT_005e3599
    CALL engine_dosio.cpp_FUN_00479180  ; 004d8ec2
        ;   XREF to: 00479180 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_00479180(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 004d8ec7
    MOV EBP,EAX                         ; 004d8eca
    TEST EAX,EAX                        ; 004d8ecc
    JZ 0x004d9115                       ; 004d8ece
        ;   XREF to: 004d9115 (CONDITIONAL_JUMP)  ; LAB_004d9115
    PUSH EDI                            ; 004d8ed4
    PUSH ESI                            ; 004d8ed5
    MOV EBX,dword ptr [ESP + 0x1120]    ; 004d8ed6
    SHL EBX,0x2                         ; 004d8edd
    TEST byte ptr [EBP + 0xc],0x10      ; 004d8ee0
        ;   Label: LAB_004d8ee0
    JNZ 0x004d8f21                      ; 004d8ee4
        ;   XREF to: 004d8f21 (CONDITIONAL_JUMP)  ; LAB_004d8f21
    CMP EBX,0x1000                      ; 004d8ee6
    JGE 0x004d8f21                      ; 004d8eec
        ;   XREF to: 004d8f21 (CONDITIONAL_JUMP)  ; LAB_004d8f21
    PUSH EBP                            ; 004d8eee
    PUSH 0xff                           ; 004d8eef
    LEA EAX,[ESP + 0x1010]              ; 004d8ef4
    PUSH EAX                            ; 004d8efb
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 004d8efc
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005c1180()
    ADD ESP,0xc                         ; 004d8f01
    PUSH 0x5e359e                       ; 004d8f04 | DAT_005e359e
    LEA EAX,[ESP + 0x100c]              ; 004d8f09
    PUSH EAX                            ; 004d8f10
    CALL crt_string.c__strcmp_FUN_005c0f80 ; 004d8f11
        ;   XREF to: 005c0f80 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005c0f80(char * str1, char * str2)
    ADD ESP,0x8                         ; 004d8f16
    TEST EAX,EAX                        ; 004d8f19
    JNZ 0x004d912f                      ; 004d8f1b
        ;   XREF to: 004d912f (CONDITIONAL_JUMP)  ; LAB_004d912f
    PUSH EBP                            ; 004d8f21
        ;   Label: LAB_004d8f21
    CALL crt_stdio.c_fclose_FUN_005c0d10 ; 004d8f22
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005c0d10()
    ADD ESP,0x4                         ; 004d8f27
    CALL sound_sndmain.cpp_resetSoundDevice_FUN_005750e0 ; 004d8f2a
        ;   XREF to: 005750e0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_resetSoundDevice_FUN_005750e0()
    CALL sound_sndmain.cpp_enableSoundSystem_FUN_00574ee0 ; 004d8f2f
        ;   XREF to: 00574ee0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_enableSoundSystem_FUN_00574ee0()
    XOR ECX,ECX                         ; 004d8f34
    PUSH 0x1                            ; 004d8f36
    MOV dword ptr [ESP + 0x1128],ECX    ; 004d8f38
    CALL sound_sndmain.cpp_isSfxChannelEnabled_FUN_00573cd0 ; 004d8f3f
        ;   XREF to: 00573cd0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxChannelEnabled_FUN_00573cd0(int channel_index)
    ADD ESP,0x4                         ; 004d8f44
    TEST EAX,EAX                        ; 004d8f47
    JNZ 0x004d91b4                      ; 004d8f49
        ;   XREF to: 004d91b4 (CONDITIONAL_JUMP)  ; LAB_004d91b4
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 004d8f4f
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
        ;   Label: LAB_004d8f4f
    PUSH 0x58                           ; 004d8f54
    MOV EDI,dword ptr [0x0152d244]      ; 004d8f56 | DAT_0152d244
    PUSH EDI                            ; 004d8f5c
    MOV dword ptr [EDI + 0x4210],0x0    ; 004d8f5d
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004c4510 ; 004d8f67
        ;   XREF to: 004c4510 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004c4510(CBitFont * this_ptr, int char_code)
    MOV EBX,EAX                         ; 004d8f6c
    ADD ESP,0x8                         ; 004d8f6e
    MOV EBP,EAX                         ; 004d8f71
    MOV EAX,dword ptr [ESP + 0x1140]    ; 004d8f73
    MOV ESI,0xffffffff                  ; 004d8f7a
    PUSH EAX                            ; 004d8f7f
    MOV dword ptr [ESP + 0x1120],ESI    ; 004d8f80
    CALL core_game.cpp_CGame_saveClockTime_FUN_004cbf10 ; 004d8f87
        ;   XREF to: 004cbf10 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_saveClockTime_FUN_004cbf10(CGame * this_ptr)
    ADD ESP,0x4                         ; 004d8f8c
    PUSH 0xffff                         ; 004d8f8f
    CALL engine_3d.c_setRenderAlpha_FUN_00406bd0 ; 004d8f94
        ;   XREF to: 00406bd0 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00406bd0(int alpha_color_value)
    MOV EAX,0x1df                       ; 004d8f99
    ADD ESP,0x4                         ; 004d8f9e
    SUB EAX,EBX                         ; 004d8fa1
    MOV dword ptr [ESP + 0x112c],EAX    ; 004d8fa3
    FLD float ptr [ESP + 0x1128]        ; 004d8faa
        ;   Label: LAB_004d8faa
    MOV EDX,dword ptr [ESP + 0x111c]    ; 004d8fb1
    CALL crt_math.c_round_FUN_005c03a0  ; 004d8fb8
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x1130]      ; 004d8fbd
    MOV EAX,dword ptr [ESP + 0x1130]    ; 004d8fc4
    CMP EAX,EDX                         ; 004d8fcb
    JZ 0x004d90c3                       ; 004d8fcd
        ;   XREF to: 004d90c3 (CONDITIONAL_JUMP)  ; LAB_004d90c3
    MOV dword ptr [ESP + 0x111c],EAX    ; 004d8fd3
    CALL engine_special.cpp_clearScreen_FUN_0057dc40 ; 004d8fda
        ;   XREF to: 0057dc40 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_0057dc40()
    PUSH 0xffff                         ; 004d8fdf
    PUSH 0x0                            ; 004d8fe4
    PUSH 0x0                            ; 004d8fe6
    LEA EAX,[ESP + 0x1114]              ; 004d8fe8
    PUSH EAX                            ; 004d8fef
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d4b0 ; 004d8ff0
        ;   XREF to: 0040d4b0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d4b0(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    ADD ESP,0x10                        ; 004d8ff5
    MOV ECX,dword ptr [ESP + 0x1120]    ; 004d8ff8
    TEST ECX,ECX                        ; 004d8fff
    JLE 0x004d9071                      ; 004d9001
        ;   XREF to: 004d9071 (CONDITIONAL_JUMP)  ; LAB_004d9071
    LEA ESI,[ECX*0x4 + 0x0]             ; 004d9007
    XOR EBX,EBX                         ; 004d900e
    MOV EAX,dword ptr [ESP + EBX*0x1 + 0x8] ; 004d9010
        ;   Label: LAB_004d9010
    MOV CL,byte ptr [EAX]               ; 004d9014
    MOV EDX,0xf8                        ; 004d9016
    CMP CL,0x5c                         ; 004d901b
    JNZ 0x004d902e                      ; 004d901e
        ;   XREF to: 004d902e (CONDITIONAL_JUMP)  ; LAB_004d902e
    CMP byte ptr [EAX + 0x1],0x62       ; 004d9020
    JNZ 0x004d902b                      ; 004d9024
        ;   XREF to: 004d902b (CONDITIONAL_JUMP)  ; LAB_004d902b
    MOV EDX,0x2                         ; 004d9026
    ADD EAX,0x2                         ; 004d902b
        ;   Label: LAB_004d902b
    MOV ECX,dword ptr [ESP + 0x1130]    ; 004d902e
        ;   Label: LAB_004d902e
    TEST ECX,ECX                        ; 004d9035
    JL 0x004d905a                       ; 004d9037
        ;   XREF to: 004d905a (CONDITIONAL_JUMP)  ; LAB_004d905a
    CMP ECX,dword ptr [ESP + 0x112c]    ; 004d9039
    JGE 0x004d905a                      ; 004d9040
        ;   XREF to: 004d905a (CONDITIONAL_JUMP)  ; LAB_004d905a
    PUSH EAX                            ; 004d9042
    PUSH 0x0                            ; 004d9043
    PUSH EDX                            ; 004d9045
    PUSH ECX                            ; 004d9046
    PUSH 0x27f                          ; 004d9047
    PUSH 0x19e                          ; 004d904c
    PUSH EDI                            ; 004d9051
    CALL engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_004c2350 ; 004d9052
        ;   XREF to: 004c2350 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_004c2350(CBitFont * this_ptr, int left_x, int right_x, int y, ...)
    ADD ESP,0x1c                        ; 004d9057
    MOV EAX,dword ptr [ESP + 0x1130]    ; 004d905a
        ;   Label: LAB_004d905a
    ADD EAX,EBP                         ; 004d9061
    ADD EBX,0x4                         ; 004d9063
    MOV dword ptr [ESP + 0x1130],EAX    ; 004d9066
    CMP EBX,ESI                         ; 004d906d
    JL 0x004d9010                       ; 004d906f
        ;   XREF to: 004d9010 (CONDITIONAL_JUMP)  ; LAB_004d9010
    MOV EDX,dword ptr [ESP + 0x1124]    ; 004d9071
        ;   Label: LAB_004d9071
    TEST EDX,EDX                        ; 004d9078
    JZ 0x004d908d                       ; 004d907a
        ;   XREF to: 004d908d (CONDITIONAL_JUMP)  ; LAB_004d908d
    PUSH EDX                            ; 004d907c
    CALL sound_sndmain.cpp_FUN_005735a0 ; 004d907d
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 004d9082
    TEST EAX,EAX                        ; 004d9085
    JZ 0x004d91eb                       ; 004d9087
        ;   XREF to: 004d91eb (CONDITIONAL_JUMP)  ; LAB_004d91eb
    PUSH 0x0                            ; 004d908d
        ;   Label: LAB_004d908d
    PUSH 0x1e                           ; 004d908f
    PUSH 0x27f                          ; 004d9091
    PUSH 0x0                            ; 004d9096
    PUSH 0x19e                          ; 004d9098
    CALL engine_2d.c_fillRectColor_FUN_004031c0 ; 004d909d
        ;   XREF to: 004031c0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectColor_FUN_004031c0(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x14                        ; 004d90a2
    PUSH 0x0                            ; 004d90a5
    PUSH 0x1df                          ; 004d90a7
    PUSH 0x27f                          ; 004d90ac
    PUSH 0x1b7                          ; 004d90b1
    PUSH 0x19e                          ; 004d90b6
    CALL engine_2d.c_fillRectColor_FUN_004031c0 ; 004d90bb
        ;   XREF to: 004031c0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectColor_FUN_004031c0(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x14                        ; 004d90c0
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005acff0 ; 004d90c3
        ;   XREF to: 005acff0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005acff0()
        ;   Label: LAB_004d90c3
    PUSH 0x1                            ; 004d90c8
    MOV EAX,[0x0061f2a4]                ; 004d90ca | DAT_0061f2a4
    PUSH EAX                            ; 004d90cf | DAT_01d1bca0
    MOV EDX,dword ptr [EAX]             ; 004d90d0 | DAT_01d1bca0
    CALL dword ptr [EDX]                ; 004d90d2
    ADD ESP,0x8                         ; 004d90d4
    TEST EAX,EAX                        ; 004d90d7
    JNZ 0x004d91eb                      ; 004d90d9
        ;   XREF to: 004d91eb (CONDITIONAL_JUMP)  ; LAB_004d91eb
    MOV EDX,dword ptr [ESP + 0x1140]    ; 004d90df
    PUSH EDX                            ; 004d90e6
    CALL core_game.cpp_FUN_004cbf20     ; 004d90e7
        ;   XREF to: 004cbf20 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_FUN_004cbf20()
    ADD ESP,0x4                         ; 004d90ec
    MOV EAX,dword ptr [ESP + 0x1140]    ; 004d90ef
    FLD float ptr [EAX + 0x294]         ; 004d90f6
    FMUL float ptr [0x005e35ec]         ; 004d90fc | DAT_005e35ec
    FSUBR float ptr [ESP + 0x1128]      ; 004d9102
    FSTP float ptr [ESP + 0x1128]       ; 004d9109
    JMP 0x004d8faa                      ; 004d9110
        ;   XREF to: 004d8faa (UNCONDITIONAL_JUMP)  ; LAB_004d8faa
    PUSH EBX                            ; 004d9115
        ;   Label: LAB_004d9115
    LEA EAX,[ESP + 0x1104]              ; 004d9116
    PUSH EAX                            ; 004d911d
    CALL engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d0c0 ; 004d911e
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d0c0(CAlphaBitmap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004d9123
    ADD ESP,0x112c                      ; 004d9126
    POP EBP                             ; 004d912c
    POP EBX                             ; 004d912d
    RET                                 ; 004d912e
    LEA EDI,[ESP + 0x1008]              ; 004d912f
        ;   Label: LAB_004d912f
    SUB ECX,ECX                         ; 004d9136
    DEC ECX                             ; 004d9138
    XOR EAX,EAX                         ; 004d9139
    SCASB.REPNE ES:EDI                  ; 004d913b
    NOT ECX                             ; 004d913d
    DEC ECX                             ; 004d913f
    ADD ECX,0xa                         ; 004d9140
    PUSH ECX                            ; 004d9143
    CALL crt_unknown.c_FUN_005c08d0     ; 004d9144
        ;   XREF to: 005c08d0 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005c08d0(ulong size)
    ADD ESP,0x4                         ; 004d9149
    MOV dword ptr [ESP + EBX*0x1 + 0x8],EAX ; 004d914c
    TEST EAX,EAX                        ; 004d9150
    JZ 0x004d9190                       ; 004d9152
        ;   XREF to: 004d9190 (CONDITIONAL_JUMP)  ; LAB_004d9190
    LEA ESI,[ESP + 0x1008]              ; 004d9154
        ;   Label: LAB_004d9154
    MOV EDI,dword ptr [ESP + EBX*0x1 + 0x8] ; 004d915b
    MOV EDX,dword ptr [ESP + 0x1120]    ; 004d915f
    PUSH EDI                            ; 004d9166
    MOV AL,byte ptr [ESI]               ; 004d9167
        ;   Label: LAB_004d9167
    MOV byte ptr [EDI],AL               ; 004d9169
    CMP AL,0x0                          ; 004d916b
    JZ 0x004d917f                       ; 004d916d
        ;   XREF to: 004d917f (CONDITIONAL_JUMP)  ; LAB_004d917f
    MOV AL,byte ptr [ESI + 0x1]         ; 004d916f
    ADD ESI,0x2                         ; 004d9172
    MOV byte ptr [EDI + 0x1],AL         ; 004d9175
    ADD EDI,0x2                         ; 004d9178
    CMP AL,0x0                          ; 004d917b
    JNZ 0x004d9167                      ; 004d917d
        ;   XREF to: 004d9167 (CONDITIONAL_JUMP)  ; LAB_004d9167
    POP EDI                             ; 004d917f
        ;   Label: LAB_004d917f
    INC EDX                             ; 004d9180
    ADD EBX,0x4                         ; 004d9181
    MOV dword ptr [ESP + 0x1120],EDX    ; 004d9184
    JMP 0x004d8ee0                      ; 004d918b
        ;   XREF to: 004d8ee0 (UNCONDITIONAL_JUMP)  ; LAB_004d8ee0
    MOV EDI,0x5e35a3                    ; 004d9190 | = "..\\core\\game.cpp"
        ;   Label: LAB_004d9190
    MOV EAX,0x147e                      ; 004d9195
    PUSH 0x5e35b4                       ; 004d919a | = "CGame::rollCredits - Out of memory"
    MOV dword ptr [0x01d1d400],EDI      ; 004d919f | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 004d91a5 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004d91aa
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004d91af
    JMP 0x004d9154                      ; 004d91b2
        ;   XREF to: 004d9154 (UNCONDITIONAL_JUMP)  ; LAB_004d9154
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_00572ac0 ; 004d91b4
        ;   XREF to: 00572ac0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_00572ac0()
        ;   Label: LAB_004d91b4
    PUSH 0x1                            ; 004d91b9
    CALL sound_sndmain.cpp_FUN_00572980 ; 004d91bb
        ;   XREF to: 00572980 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00572980(int channel_index)
    ADD ESP,0x4                         ; 004d91c0
    PUSH 0x1                            ; 004d91c3
    CALL sound_sndmain.cpp_FUN_005729f0 ; 004d91c5
        ;   XREF to: 005729f0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_005729f0(uint flags)
    ADD ESP,0x4                         ; 004d91ca
    PUSH 0x5e35d7                       ; 004d91cd | = "splash-music-44.wav"
    CALL sound_sndmain.cpp_startSfx_FUN_00572d20 ; 004d91d2
        ;   XREF to: 00572d20 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_startSfx_FUN_00572d20(char * filename)
    ADD ESP,0x4                         ; 004d91d7
    MOV dword ptr [ESP + 0x1124],EAX    ; 004d91da
    CALL sound_sndmain.cpp_popSfxOptions_FUN_00572b40 ; 004d91e1
        ;   XREF to: 00572b40 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_00572b40()
    JMP 0x004d8f4f                      ; 004d91e6
        ;   XREF to: 004d8f4f (UNCONDITIONAL_JUMP)  ; LAB_004d8f4f
    CMP dword ptr [0x01d7f1b8],0x0      ; 004d91eb | DAT_01d7f1b8
        ;   Label: LAB_004d91eb
    JZ 0x004d91fe                       ; 004d91f2
        ;   XREF to: 004d91fe (CONDITIONAL_JUMP)  ; LAB_004d91fe
    MOV dword ptr [EDI + 0x4210],0x1    ; 004d91f4
    CALL sound_sndmain.cpp_resetSoundDevice_FUN_005750e0 ; 004d91fe
        ;   XREF to: 005750e0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_resetSoundDevice_FUN_005750e0()
        ;   Label: LAB_004d91fe
    MOV EBX,dword ptr [ESP + 0x1120]    ; 004d9203
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 004d920a
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
    TEST EBX,EBX                        ; 004d920f
    JLE 0x004d9240                      ; 004d9211
        ;   XREF to: 004d9240 (CONDITIONAL_JUMP)  ; LAB_004d9240
    MOV ESI,dword ptr [ESP + 0x1120]    ; 004d9213
    XOR EBX,EBX                         ; 004d921a
    SHL ESI,0x2                         ; 004d921c
    MOV EDI,dword ptr [ESP + EBX*0x1 + 0x8] ; 004d921f
        ;   Label: LAB_004d921f
    PUSH EDI                            ; 004d9223
    ADD EBX,0x4                         ; 004d9224
    CALL crt_unknown.c_FUN_005c09f0     ; 004d9227
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c09f0()
    ADD ESP,0x4                         ; 004d922c
    CMP EBX,ESI                         ; 004d922f
    JL 0x004d921f                       ; 004d9231
        ;   XREF to: 004d921f (CONDITIONAL_JUMP)  ; LAB_004d921f
    LEA EAX,[EAX]                       ; 004d9233
    LEA EDX,[EDX]                       ; 004d9239
    NOP                                 ; 004d923f
    PUSH 0x0                            ; 004d9240
        ;   Label: LAB_004d9240
    LEA EAX,[ESP + 0x110c]              ; 004d9242
    PUSH EAX                            ; 004d9249
    CALL engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d0c0 ; 004d924a
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d0c0(CAlphaBitmap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004d924f
    POP ESI                             ; 004d9252
    POP EDI                             ; 004d9253
    ADD ESP,0x112c                      ; 004d9254
    POP EBP                             ; 004d925a
    POP EBX                             ; 004d925b
    RET                                 ; 004d925c

