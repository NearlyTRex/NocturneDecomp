; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_menu_cpp_configureGraphicsOptions_FUN_004d0080(void)
;
; Local Variables:
; undefined4       Stack[-0x124]:4  local_124
; undefined        Stack[-0x120]:1  local_120
; undefined1       Stack[-0x11f]:1  local_11f
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_menu.cpp_showOptionsScreen_FUN_004d21c0 at 004d22ed
;
; Referenced Globals:
;   void* switchdataD_004d0050 = 004d05b5
;   TerminatedCString s_tridx6_dll_00588693
;   char CHAR_00h_0058869e = \x00
;   TerminatedCString s_tri3dfx_dll_0058869f
;   char CHAR_00h_005886ab = \x00
;   TerminatedCString s_tri3dfx_dll_005886ac
;   TerminatedCString s_tri3dfx_dll_005886b8
;   undefined4 s_tri3dfx_dll_005886b8+1
;   undefined4 s_tri3dfx_dll_005886b8+2
;   undefined4 s_tri3dfx_dll_005886b8+3
;   TerminatedCString s_tri3dfx_dll_005886c4
;   TerminatedCString s_tridx6_dll_005886d0
;   undefined4 s_tridx6_dll_005886d0+1
;   undefined4 s_tridx6_dll_005886d0+2
;   undefined4 s_tridx6_dll_005886d0+3
;   ... and 89 more
;
; Called Functions:
;   core_game.cpp_CGame_saveClockTime_FUN_0049a890
;   core_game.cpp_CGame_updateDT_FUN_0049a8a0
;   core_menu.cpp_renderMenuAndGetChoice_FUN_004cf440
;   core_menu.cpp_showCalibrationTest_FUN_004cffa0
;   core_moon.cpp_CMoon_render_FUN_004dec50
;   core_moon.cpp_CMoon_update_FUN_004deae0
;   crt_stdio.c_sprintf_FUN_00563c90
;   crt_string.c__stricmp_FUN_00564520
;   engine_dosio.cpp_getFileSize_FUN_004568c0
;   engine_special.cpp_buildCardList_FUN_00532d20
;   engine_special.cpp_getVideoMemory_FUN_00532cd0
;   engine_special.cpp_kill_FUN_005322b0
;   engine_special.cpp_loadExternalRenderer_FUN_00531780
;   engine_special.cpp_selectCard_FUN_00532d00
;   support_newmsg.cpp_getLocalizedString_FUN_004ee370
;   ... and 1 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d0080
        ;   Label: core_menu.cpp_configureGraphicsOptions_FUN_004d0080
    PUSH ESI                            ; 004d0081
    PUSH EDI                            ; 004d0082
    PUSH EBP                            ; 004d0083
    SUB ESP,0x110                       ; 004d0084
    MOV ECX,dword ptr [0x005b9354]      ; 004d008a | g_CGame_PTR_005b9354
    XOR EDX,EDX                         ; 004d0090
    PUSH ECX                            ; 004d0092
    MOV dword ptr [ESP + 0x104],EDX     ; 004d0093
    CALL core_game.cpp_CGame_saveClockTime_FUN_0049a890 ; 004d009a
        ;   XREF to: 0049a890 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_saveClockTime_FUN_0049a890(CGame * this_ptr)
    MOV EDX,0x1cc5b80                   ; 004d009f
    ADD ESP,0x4                         ; 004d00a4
    XOR EAX,EAX                         ; 004d00a7
    MOV dword ptr [EAX + 0x1cc6480],EDX ; 004d00a9
        ;   Label: LAB_004d00a9
    ADD EAX,0x4                         ; 004d00af
    ADD EDX,0x100                       ; 004d00b2
    CMP EAX,0x24                        ; 004d00b8
    JNZ 0x004d00a9                      ; 004d00bb
        ;   XREF to: 004d00a9 (CONDITIONAL_JUMP)  ; LAB_004d00a9
    PUSH 0x1cc656c                      ; 004d00bd
    PUSH 0x1cc652c                      ; 004d00c2
    PUSH 0x1cc64ec                      ; 004d00c7
    PUSH 0x1cc64ac                      ; 004d00cc
    PUSH 0x1cc64a8                      ; 004d00d1 | DAT_01cc64a8
    XOR EBP,EBP                         ; 004d00d6
    CALL engine_special.cpp_buildCardList_FUN_00532d20 ; 004d00d8
        ;   XREF to: 00532d20 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_buildCardList_FUN_00532d20(int * out_card_count, char * * out_driver_names, char * * out_card_names, int * out_vendor_ids, ...)
    MOV EAX,[0x01cc64a4]                ; 004d00dd | DAT_01cc64a4
    MOV EBX,dword ptr [0x01cc64a8]      ; 004d00e2 | DAT_01cc64a8
    ADD ESP,0x14                        ; 004d00e8
    CMP EAX,EBX                         ; 004d00eb
    JL 0x004d00f5                       ; 004d00ed
        ;   XREF to: 004d00f5 (CONDITIONAL_JUMP)  ; LAB_004d00f5
    MOV dword ptr [0x01cc64a4],EBP      ; 004d00ef | DAT_01cc64a4
    LEA EAX,[ESP + 0x10c]               ; 004d00f5
        ;   Label: LAB_004d00f5
    PUSH EAX                            ; 004d00fc
    LEA EAX,[ESP + 0x10c]               ; 004d00fd
    XOR EDI,EDI                         ; 004d0104
    PUSH EAX                            ; 004d0106
    LEA EAX,[ESP + 0x10c]               ; 004d0107
    MOV dword ptr [ESP + 0x10c],EDI     ; 004d010e
    PUSH EAX                            ; 004d0115
    MOV dword ptr [ESP + 0x114],EDI     ; 004d0116
    MOV dword ptr [ESP + 0x118],EDI     ; 004d011d
    CALL engine_special.cpp_getVideoMemory_FUN_00532cd0 ; 004d0124
        ;   XREF to: 00532cd0 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_getVideoMemory_FUN_00532cd0(int * total_memory, int * available_memory, int * memory_type)
    ADD ESP,0xc                         ; 004d0129
    PUSH 0x588693                       ; 004d012c | = "tridx6.dll"
    PUSH 0x58869e                       ; 004d0131 | CHAR_00h_0058869e
    CALL engine_dosio.cpp_getFileSize_FUN_004568c0 ; 004d0136
        ;   XREF to: 004568c0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFileSize_FUN_004568c0(char * directory, char * filename)
    ADD ESP,0x8                         ; 004d013b
    PUSH 0x58869f                       ; 004d013e | = "tri3dfx.dll"
    PUSH 0x5886ab                       ; 004d0143 | CHAR_00h_005886ab
    XOR EBX,EBX                         ; 004d0148
    MOV ESI,EAX                         ; 004d014a
    CALL engine_dosio.cpp_getFileSize_FUN_004568c0 ; 004d014c
        ;   XREF to: 004568c0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFileSize_FUN_004568c0(char * directory, char * filename)
    ADD ESP,0x8                         ; 004d0151
    CMP ESI,EAX                         ; 004d0154
    JZ 0x004d064e                       ; 004d0156
        ;   XREF to: 004d064e (CONDITIONAL_JUMP)  ; LAB_004d064e
    MOV ECX,dword ptr [0x005b9354]      ; 004d015c | g_CGame_PTR_005b9354
        ;   Label: LAB_004d015c
    PUSH ECX                            ; 004d0162 | g_CGame_01c775ec
    CALL core_game.cpp_CGame_updateDT_FUN_0049a8a0 ; 004d0163
        ;   XREF to: 0049a8a0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_updateDT_FUN_0049a8a0(CGame * this_ptr)
    ADD ESP,0x4                         ; 004d0168
    MOV EAX,[0x005b9354]                ; 004d016b | g_CGame_PTR_005b9354
    SUB ESP,0x4                         ; 004d0170
    MOV EDX,dword ptr [EAX + 0x264]     ; 004d0173 | g_CGame_01c775ec.delta_time_float
    MOV dword ptr [ESP],EDX             ; 004d0179
    PUSH 0x1cc5780                      ; 004d017c
    CALL core_moon.cpp_CMoon_update_FUN_004deae0 ; 004d0181
        ;   XREF to: 004deae0 (UNCONDITIONAL_CALL)  ; void core_moon.cpp_CMoon_update_FUN_004deae0(CMoon * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004d0186
    PUSH 0x1cc5780                      ; 004d0189
    CALL core_moon.cpp_CMoon_render_FUN_004dec50 ; 004d018e
        ;   XREF to: 004dec50 (UNCONDITIONAL_CALL)  ; void core_moon.cpp_CMoon_render_FUN_004dec50(CMoon * this_ptr)
    MOV ESI,dword ptr [0x01cc64a8]      ; 004d0193 | DAT_01cc64a8
    ADD ESP,0x4                         ; 004d0199
    TEST ESI,ESI                        ; 004d019c
    JLE 0x004d032f                      ; 004d019e
        ;   XREF to: 004d032f (CONDITIONAL_JUMP)  ; LAB_004d032f
    CMP dword ptr [0x02dc9d60],0x0      ; 004d01a4 | g_UseDirect3D
    JZ 0x004d032f                       ; 004d01ab
        ;   XREF to: 004d032f (CONDITIONAL_JUMP)  ; LAB_004d032f
    MOV EAX,[0x01cc64a4]                ; 004d01b1 | DAT_01cc64a4
    SHL EAX,0x2                         ; 004d01b6
    CMP dword ptr [EAX + 0x1cc652c],0x121a ; 004d01b9
    JNZ 0x004d0662                      ; 004d01c3
        ;   XREF to: 004d0662 (CONDITIONAL_JUMP)  ; LAB_004d0662
    CMP dword ptr [EAX + 0x1cc656c],0x5 ; 004d01c9
    JG 0x004d0662                       ; 004d01d0
        ;   XREF to: 004d0662 (CONDITIONAL_JUMP)  ; LAB_004d0662
    MOV EAX,[0x005b9354]                ; 004d01d6 | g_CGame_PTR_005b9354
    MOV dword ptr [EAX + 0x8],0x10      ; 004d01db | g_CGame_01c775ec.game_bpp
    PUSH 0x5886ac                       ; 004d01e2 | = "tri3dfx.dll"
    MOV dword ptr [EAX],0x280           ; 004d01e7 | g_CGame_01c775ec
    PUSH 0x5c0e80                       ; 004d01ed | g_RendererDllPath
    MOV dword ptr [EAX + 0x4],0x1e0     ; 004d01f2 | g_CGame_01c775ec.game_pixy
    CALL crt_string.c__stricmp_FUN_00564520 ; 004d01f9
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_00564520(char * str1, char * str2)
    ADD ESP,0x8                         ; 004d01fe
    TEST EAX,EAX                        ; 004d0201
    JZ 0x004d028a                       ; 004d0203
        ;   XREF to: 004d028a (CONDITIONAL_JUMP)  ; LAB_004d028a
    MOV ESI,0x5886b8                    ; 004d0209 | = "tri3dfx.dll"
    MOV EDI,0x5c0e80                    ; 004d020e | g_RendererDllPath
    PUSH EDI                            ; 004d0213 | g_RendererDllPath
    MOV AL,byte ptr [ESI]               ; 004d0214 | = "tri3dfx.dll" | s_tri3dfx_dll_005886b8+2
        ;   Label: LAB_004d0214
    MOV byte ptr [EDI],AL               ; 004d0216 | g_RendererDllPath | g_RendererDllPath+2
    CMP AL,0x0                          ; 004d0218
    JZ 0x004d022c                       ; 004d021a
        ;   XREF to: 004d022c (CONDITIONAL_JUMP)  ; LAB_004d022c
    MOV AL,byte ptr [ESI + 0x1]         ; 004d021c | s_tri3dfx_dll_005886b8+1 | s_tri3dfx_dll_005886b8+3
    ADD ESI,0x2                         ; 004d021f
    MOV byte ptr [EDI + 0x1],AL         ; 004d0222 | g_RendererDllPath+1 | s_d3d_dll_005c0e83
    ADD EDI,0x2                         ; 004d0225
    CMP AL,0x0                          ; 004d0228
    JNZ 0x004d0214                      ; 004d022a
        ;   XREF to: 004d0214 (CONDITIONAL_JUMP)  ; LAB_004d0214
    POP EDI                             ; 004d022c
        ;   Label: LAB_004d022c
    CALL engine_special.cpp_kill_FUN_005322b0 ; 004d022d
        ;   XREF to: 005322b0 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_kill_FUN_005322b0()
    PUSH 0x0                            ; 004d0232
    CALL engine_special.cpp_loadExternalRenderer_FUN_00531780 ; 004d0234
        ;   XREF to: 00531780 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_loadExternalRenderer_FUN_00531780(HWND window_handle)
    MOV EAX,[0x02dc9d60]                ; 004d0239 | g_UseDirect3D
    ADD ESP,0x4                         ; 004d023e
    TEST EAX,EAX                        ; 004d0241
    JZ 0x004d0658                       ; 004d0243
        ;   XREF to: 004d0658 (CONDITIONAL_JUMP)  ; LAB_004d0658
    PUSH 0x1cc656c                      ; 004d0249
        ;   Label: LAB_004d0249
    PUSH 0x1cc652c                      ; 004d024e | DAT_01cc652c
    PUSH 0x1cc64ec                      ; 004d0253 | DAT_01cc64ec
    PUSH 0x1cc64ac                      ; 004d0258
    PUSH 0x1cc64a8                      ; 004d025d | DAT_01cc64a8
    CALL engine_special.cpp_buildCardList_FUN_00532d20 ; 004d0262
        ;   XREF to: 00532d20 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_buildCardList_FUN_00532d20(int * out_card_count, char * * out_driver_names, char * * out_card_names, int * out_vendor_ids, ...)
    ADD ESP,0x14                        ; 004d0267
    LEA EAX,[ESP + 0x10c]               ; 004d026a
    PUSH EAX                            ; 004d0271
    LEA EAX,[ESP + 0x10c]               ; 004d0272
    PUSH EAX                            ; 004d0279
    LEA EAX,[ESP + 0x10c]               ; 004d027a
    PUSH EAX                            ; 004d0281
    CALL engine_special.cpp_getVideoMemory_FUN_00532cd0 ; 004d0282
        ;   XREF to: 00532cd0 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_getVideoMemory_FUN_00532cd0(int * total_memory, int * available_memory, int * memory_type)
    ADD ESP,0xc                         ; 004d0287
    MOV EAX,[0x01cc64a4]                ; 004d028a | DAT_01cc64a4
        ;   Label: LAB_004d028a
    SHL EAX,0x2                         ; 004d028f
    CMP dword ptr [EAX + 0x1cc652c],0x8086 ; 004d0292 | DAT_01cc652c
    JNZ 0x004d02c3                      ; 004d029c
        ;   XREF to: 004d02c3 (CONDITIONAL_JUMP)  ; LAB_004d02c3
    CMP dword ptr [EAX + 0x1cc656c],0x7800 ; 004d029e
    JNZ 0x004d02c3                      ; 004d02a8
        ;   XREF to: 004d02c3 (CONDITIONAL_JUMP)  ; LAB_004d02c3
    MOV EAX,[0x005b9354]                ; 004d02aa | g_CGame_PTR_005b9354
    MOV dword ptr [EAX + 0x8],0x10      ; 004d02af | g_CGame_01c775ec.game_bpp
    MOV dword ptr [EAX],0x280           ; 004d02b6 | g_CGame_01c775ec
    MOV dword ptr [EAX + 0x4],0x1e0     ; 004d02bc | g_CGame_01c775ec.game_pixy
    MOV EAX,[0x01cc64a4]                ; 004d02c3 | DAT_01cc64a4
        ;   Label: LAB_004d02c3
    SHL EAX,0x2                         ; 004d02c8
    CMP dword ptr [EAX + 0x1cc652c],0x12d2 ; 004d02cb | DAT_01cc652c
    JNZ 0x004d02f9                      ; 004d02d5
        ;   XREF to: 004d02f9 (CONDITIONAL_JUMP)  ; LAB_004d02f9
    CMP dword ptr [EAX + 0x1cc656c],0x18 ; 004d02d7
    JNZ 0x004d02f9                      ; 004d02de
        ;   XREF to: 004d02f9 (CONDITIONAL_JUMP)  ; LAB_004d02f9
    MOV EAX,[0x005b9354]                ; 004d02e0 | g_CGame_PTR_005b9354
    MOV dword ptr [EAX + 0x8],0x10      ; 004d02e5 | g_CGame_01c775ec.game_bpp
    MOV dword ptr [EAX],0x280           ; 004d02ec | g_CGame_01c775ec
    MOV dword ptr [EAX + 0x4],0x1e0     ; 004d02f2 | g_CGame_01c775ec.game_pixy
    MOV EAX,[0x01cc64a4]                ; 004d02f9 | DAT_01cc64a4
        ;   Label: LAB_004d02f9
    SHL EAX,0x2                         ; 004d02fe
    CMP dword ptr [EAX + 0x1cc652c],0x12d2 ; 004d0301 | DAT_01cc652c
    JNZ 0x004d032f                      ; 004d030b
        ;   XREF to: 004d032f (CONDITIONAL_JUMP)  ; LAB_004d032f
    CMP dword ptr [EAX + 0x1cc656c],0x19 ; 004d030d
    JNZ 0x004d032f                      ; 004d0314
        ;   XREF to: 004d032f (CONDITIONAL_JUMP)  ; LAB_004d032f
    MOV EAX,[0x005b9354]                ; 004d0316 | g_CGame_PTR_005b9354
    MOV dword ptr [EAX + 0x8],0x10      ; 004d031b | g_CGame_01c775ec.game_bpp
    MOV dword ptr [EAX],0x280           ; 004d0322 | g_CGame_01c775ec
    MOV dword ptr [EAX + 0x4],0x1e0     ; 004d0328 | g_CGame_01c775ec.game_pixy
    CMP dword ptr [0x02dc9d60],0x0      ; 004d032f | g_UseDirect3D
        ;   Label: LAB_004d032f
    JNZ 0x004d0353                      ; 004d0336
        ;   XREF to: 004d0353 (CONDITIONAL_JUMP)  ; LAB_004d0353
    MOV EAX,[0x005b9354]                ; 004d0338 | g_CGame_PTR_005b9354
    CMP dword ptr [EAX + 0x4],0x1e0     ; 004d033d | g_CGame_01c775ec.game_pixy
    JLE 0x004d0353                      ; 004d0344
        ;   XREF to: 004d0353 (CONDITIONAL_JUMP)  ; LAB_004d0353
    MOV dword ptr [EAX + 0x4],0x1e0     ; 004d0346 | g_CGame_01c775ec.game_pixy
    MOV dword ptr [EAX],0x280           ; 004d034d | g_CGame_01c775ec
    MOV EAX,[0x005b9354]                ; 004d0353 | g_CGame_PTR_005b9354
        ;   Label: LAB_004d0353
    MOV ECX,dword ptr [EAX + 0x4]       ; 004d0358 | g_CGame_01c775ec.game_pixy
    CMP ECX,0xf0                        ; 004d035b
    JNZ 0x004d06c8                      ; 004d0361
        ;   XREF to: 004d06c8 (CONDITIONAL_JUMP)  ; LAB_004d06c8
    PUSH 0x5886db                       ; 004d0367 | = "Resolution : 320x240"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d036c
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
        ;   Label: LAB_004d036c
    ADD ESP,0x4                         ; 004d0371
    PUSH EAX                            ; 004d0374
    PUSH 0x1cc5b80                      ; 004d0375
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004d037a
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x8                         ; 004d037f
    MOV EAX,[0x005b9354]                ; 004d0382 | g_CGame_PTR_005b9354
    MOV EAX,dword ptr [EAX + 0xc]       ; 004d0387 | g_CGame_01c775ec.halo_mode
    CMP EAX,0x1                         ; 004d038a
    JNC 0x004d0752                      ; 004d038d
        ;   XREF to: 004d0752 (CONDITIONAL_JUMP)  ; LAB_004d0752
    TEST EAX,EAX                        ; 004d0393
    JNZ 0x004d03b2                      ; 004d0395
        ;   XREF to: 004d03b2 (CONDITIONAL_JUMP)  ; LAB_004d03b2
    PUSH 0x588786                       ; 004d0397 | = "Flashlight halo : Off"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d039c
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
        ;   Label: LAB_004d039c
    ADD ESP,0x4                         ; 004d03a1
    PUSH EAX                            ; 004d03a4
    PUSH 0x1cc5c80                      ; 004d03a5
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004d03aa
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x8                         ; 004d03af
    TEST EBP,EBP                        ; 004d03b2
        ;   Label: LAB_004d03b2
    JZ 0x004d0768                       ; 004d03b4
        ;   XREF to: 004d0768 (CONDITIONAL_JUMP)  ; LAB_004d0768
    XOR EDX,EDX                         ; 004d03ba
    MOV ECX,dword ptr [0x01cc64a8]      ; 004d03bc | DAT_01cc64a8
    MOV dword ptr [0x02dc9d60],EDX      ; 004d03c2 | g_UseDirect3D
    TEST ECX,ECX                        ; 004d03c8
    JNZ 0x004d075e                      ; 004d03ca
        ;   XREF to: 004d075e (CONDITIONAL_JUMP)  ; LAB_004d075e
    PUSH 0x5887cf                       ; 004d03d0 | = "No 3D Hardware"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d03d5
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
        ;   Label: LAB_004d03d5
    ADD ESP,0x4                         ; 004d03da
    PUSH EAX                            ; 004d03dd
    PUSH 0x1cc5d80                      ; 004d03de
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004d03e3
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x8                         ; 004d03e8
    PUSH 0x588825                       ; 004d03eb | = "trid3d.dll"
    PUSH 0x5c0e80                       ; 004d03f0 | g_RendererDllPath
    CALL crt_string.c__stricmp_FUN_00564520 ; 004d03f5
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_00564520(char * str1, char * str2)
    ADD ESP,0x8                         ; 004d03fa
    TEST EAX,EAX                        ; 004d03fd
    JNZ 0x004d0785                      ; 004d03ff
        ;   XREF to: 004d0785 (CONDITIONAL_JUMP)  ; LAB_004d0785
    PUSH 0x588830                       ; 004d0405 | = "3D API : DirectX 5"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d040a
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
        ;   Label: LAB_004d040a
    ADD ESP,0x4                         ; 004d040f
    PUSH EAX                            ; 004d0412
    PUSH 0x1cc5e80                      ; 004d0413
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004d0418
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x8                         ; 004d041d
    CMP dword ptr [0x01cc64a8],0x0      ; 004d0420 | DAT_01cc64a8
    JNZ 0x004d07fd                      ; 004d0427
        ;   XREF to: 004d07fd (CONDITIONAL_JUMP)  ; LAB_004d07fd
    PUSH 0x5888cd                       ; 004d042d | = "No 3D Hardware detected"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d0432
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004d0437
    PUSH EAX                            ; 004d043a
    PUSH 0x1cc5f80                      ; 004d043b
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004d0440
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x8                         ; 004d0445
    PUSH 0x5888f0                       ; 004d0448 | = "Bits per pixel : "
        ;   Label: LAB_004d0448
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d044d
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004d0452
    MOV EDI,0x1cc6080                   ; 004d0455
    MOV ESI,EAX                         ; 004d045a
    PUSH EDI                            ; 004d045c
    MOV AL,byte ptr [ESI]               ; 004d045d
        ;   Label: LAB_004d045d
    MOV byte ptr [EDI],AL               ; 004d045f | DAT_01cc6080 | DAT_01cc6082
    CMP AL,0x0                          ; 004d0461
    JZ 0x004d0475                       ; 004d0463
        ;   XREF to: 004d0475 (CONDITIONAL_JUMP)  ; LAB_004d0475
    MOV AL,byte ptr [ESI + 0x1]         ; 004d0465
    ADD ESI,0x2                         ; 004d0468
    MOV byte ptr [EDI + 0x1],AL         ; 004d046b | DAT_01cc6081 | DAT_01cc6083
    ADD EDI,0x2                         ; 004d046e
    CMP AL,0x0                          ; 004d0471
    JNZ 0x004d045d                      ; 004d0473
        ;   XREF to: 004d045d (CONDITIONAL_JUMP)  ; LAB_004d045d
    POP EDI                             ; 004d0475
        ;   Label: LAB_004d0475
    MOV EAX,[0x005b9354]                ; 004d0476 | g_CGame_PTR_005b9354
    MOV EDI,dword ptr [EAX + 0x8]       ; 004d047b | g_CGame_01c775ec.game_bpp
    PUSH EDI                            ; 004d047e
    PUSH 0x588902                       ; 004d047f | = "%d"
    LEA EAX,[ESP + 0x8]                 ; 004d0484
    PUSH EAX                            ; 004d0488
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004d0489
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0xc                         ; 004d048e
    MOV ESI,ESP                         ; 004d0491
    MOV EDI,0x1cc6080                   ; 004d0493
    PUSH EDI                            ; 004d0498 | DAT_01cc6080
    SUB ECX,ECX                         ; 004d0499
    DEC ECX                             ; 004d049b
    MOV AL,0x0                          ; 004d049c
    SCASB.REPNE ES:EDI                  ; 004d049e | DAT_01cc6080 | DAT_01cc6081
    DEC EDI                             ; 004d04a0
    MOV AL,byte ptr [ESI]               ; 004d04a1
        ;   Label: LAB_004d04a1
    MOV byte ptr [EDI],AL               ; 004d04a3 | DAT_01cc6080 | DAT_01cc6082 | DAT_01cc6081
    CMP AL,0x0                          ; 004d04a5
    JZ 0x004d04b9                       ; 004d04a7
        ;   XREF to: 004d04b9 (CONDITIONAL_JUMP)  ; LAB_004d04b9
    MOV AL,byte ptr [ESI + 0x1]         ; 004d04a9
    ADD ESI,0x2                         ; 004d04ac
    MOV byte ptr [EDI + 0x1],AL         ; 004d04af | DAT_01cc6081 | DAT_01cc6083 | DAT_01cc6082
    ADD EDI,0x2                         ; 004d04b2
    CMP AL,0x0                          ; 004d04b5
    JNZ 0x004d04a1                      ; 004d04b7
        ;   XREF to: 004d04a1 (CONDITIONAL_JUMP)  ; LAB_004d04a1
    POP EDI                             ; 004d04b9
        ;   Label: LAB_004d04b9
    PUSH 0x588905                       ; 004d04ba | = "Monitor calibration"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d04bf
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004d04c4
    PUSH EAX                            ; 004d04c7
    PUSH 0x1cc6180                      ; 004d04c8
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004d04cd
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    MOV EAX,[0x005b9354]                ; 004d04d2 | g_CGame_PTR_005b9354
    MOV EDX,dword ptr [EAX + 0x10]      ; 004d04d7 | g_CGame_01c775ec.subtitle_mode
    ADD ESP,0x8                         ; 004d04da
    TEST EDX,EDX                        ; 004d04dd
    JZ 0x004d085f                       ; 004d04df
        ;   XREF to: 004d085f (CONDITIONAL_JUMP)  ; LAB_004d085f
    PUSH 0x588919                       ; 004d04e5 | = "Subtitles : On"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d04ea
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
        ;   Label: LAB_004d04ea
    ADD ESP,0x4                         ; 004d04ef
    MOV EDI,0x1cc6280                   ; 004d04f2
    MOV ESI,EAX                         ; 004d04f7
    PUSH EDI                            ; 004d04f9 | DAT_01cc6280
    MOV AL,byte ptr [ESI]               ; 004d04fa
        ;   Label: LAB_004d04fa
    MOV byte ptr [EDI],AL               ; 004d04fc | DAT_01cc6280 | DAT_01cc6282
    CMP AL,0x0                          ; 004d04fe
    JZ 0x004d0512                       ; 004d0500
        ;   XREF to: 004d0512 (CONDITIONAL_JUMP)  ; LAB_004d0512
    MOV AL,byte ptr [ESI + 0x1]         ; 004d0502
    ADD ESI,0x2                         ; 004d0505
    MOV byte ptr [EDI + 0x1],AL         ; 004d0508 | DAT_01cc6281 | DAT_01cc6283
    ADD EDI,0x2                         ; 004d050b
    CMP AL,0x0                          ; 004d050e
    JNZ 0x004d04fa                      ; 004d0510
        ;   XREF to: 004d04fa (CONDITIONAL_JUMP)  ; LAB_004d04fa
    POP EDI                             ; 004d0512
        ;   Label: LAB_004d0512
    MOV EAX,[0x005b9354]                ; 004d0513 | g_CGame_PTR_005b9354
    CMP dword ptr [EAX + 0x20],0x0      ; 004d0518 | g_CGame_01c775ec.quimby_flag
    JZ 0x004d0869                       ; 004d051c
        ;   XREF to: 004d0869 (CONDITIONAL_JUMP)  ; LAB_004d0869
    MOV EAX,[0x005b9354]                ; 004d0522 | g_CGame_PTR_005b9354
        ;   Label: LAB_004d0522
    MOV EDI,dword ptr [EAX + 0x20]      ; 004d0527 | g_CGame_01c775ec.quimby_flag
    MOV ESI,0x9                         ; 004d052a
    TEST EDI,EDI                        ; 004d052f
    JZ 0x004d0538                       ; 004d0531
        ;   XREF to: 004d0538 (CONDITIONAL_JUMP)  ; LAB_004d0538
    MOV ESI,0x8                         ; 004d0533
    PUSH 0x588954                       ; 004d0538 | = "Graphic Options"
        ;   Label: LAB_004d0538
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d053d
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004d0542
    PUSH EAX                            ; 004d0545
    PUSH 0xfa                           ; 004d0546
    LEA EAX,[ESP + 0x108]               ; 004d054b
    PUSH EAX                            ; 004d0552
    PUSH ESI                            ; 004d0553
    PUSH 0x1cc6480                      ; 004d0554
    CALL core_menu.cpp_renderMenuAndGetChoice_FUN_004cf440 ; 004d0559
        ;   XREF to: 004cf440 (UNCONDITIONAL_CALL)  ; int core_menu.cpp_renderMenuAndGetChoice_FUN_004cf440(char * * menu_text_array, int menu_count, int * selected_index_ptr, int y_position, ...)
    ADD ESP,0x14                        ; 004d055e
    MOV ESI,EAX                         ; 004d0561
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_00553910 ; 004d0563
        ;   XREF to: 00553910 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_00553910()
    PUSH 0x588964                       ; 004d0568 | = "trid3d.dll"
    PUSH 0x5c0e80                       ; 004d056d | g_RendererDllPath
    CALL crt_string.c__stricmp_FUN_00564520 ; 004d0572
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_00564520(char * str1, char * str2)
    ADD ESP,0x8                         ; 004d0577
    XOR EDX,EDX                         ; 004d057a
    TEST EAX,EAX                        ; 004d057c
    SETZ AL                             ; 004d057e
    MOV DL,AL                           ; 004d0581
    MOV EAX,EDX                         ; 004d0583
    TEST EDX,EDX                        ; 004d0585
    JZ 0x004d05a5                       ; 004d0587
        ;   XREF to: 004d05a5 (CONDITIONAL_JUMP)  ; LAB_004d05a5
    MOV EDX,dword ptr [0x005b9354]      ; 004d0589 | g_CGame_PTR_005b9354
    CMP dword ptr [EDX + 0x4],0x1e0     ; 004d058f | g_CGame_01c775ec.game_pixy
    JLE 0x004d05a5                      ; 004d0596
        ;   XREF to: 004d05a5 (CONDITIONAL_JUMP)  ; LAB_004d05a5
    MOV dword ptr [EDX + 0x4],0x1e0     ; 004d0598 | g_CGame_01c775ec.game_pixy
    MOV dword ptr [EDX],0x280           ; 004d059f | g_CGame_01c775ec
    CMP ESI,0x8                         ; 004d05a5
        ;   Label: LAB_004d05a5
    JA 0x004d062b                       ; 004d05a8
        ;   XREF to: 004d062b (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [ESI*0x4 + 0x4d0050]  ; 004d05ae | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    CMP dword ptr [0x01cc5b5c],0x1      ; 004d05b5 | DAT_01cc5b5c
        ;   Label: caseD_0
    JNZ 0x004d096d                      ; 004d05bc
        ;   XREF to: 004d096d (CONDITIONAL_JUMP)  ; LAB_004d096d
    MOV EDX,dword ptr [0x005b9354]      ; 004d05c2 | g_CGame_PTR_005b9354
    CMP dword ptr [EDX + 0x4],0xf0      ; 004d05c8 | g_CGame_01c775ec.game_pixy
    JNZ 0x004d05e6                      ; 004d05cf
        ;   XREF to: 004d05e6 (CONDITIONAL_JUMP)  ; LAB_004d05e6
    CMP dword ptr [ESP + 0x104],0x16e3600 ; 004d05d1
    JLE 0x004d05e6                      ; 004d05dc
        ;   XREF to: 004d05e6 (CONDITIONAL_JUMP)  ; LAB_004d05e6
    TEST EAX,EAX                        ; 004d05de
    JZ 0x004d08d5                       ; 004d05e0
        ;   XREF to: 004d08d5 (CONDITIONAL_JUMP)  ; LAB_004d08d5
    MOV EDX,dword ptr [0x005b9354]      ; 004d05e6 | g_CGame_PTR_005b9354
        ;   Label: LAB_004d05e6
    CMP dword ptr [EDX + 0x4],0xf0      ; 004d05ec | g_CGame_01c775ec.game_pixy
    JNZ 0x004d060a                      ; 004d05f3
        ;   XREF to: 004d060a (CONDITIONAL_JUMP)  ; LAB_004d060a
    CMP dword ptr [ESP + 0x104],0xb71b00 ; 004d05f5
    JLE 0x004d060a                      ; 004d0600
        ;   XREF to: 004d060a (CONDITIONAL_JUMP)  ; LAB_004d060a
    TEST EAX,EAX                        ; 004d0602
    JZ 0x004d08e7                       ; 004d0604
        ;   XREF to: 004d08e7 (CONDITIONAL_JUMP)  ; LAB_004d08e7
    MOV EAX,[0x005b9354]                ; 004d060a | g_CGame_PTR_005b9354
        ;   Label: LAB_004d060a
    MOV ESI,dword ptr [EAX + 0x4]       ; 004d060f | g_CGame_01c775ec.game_pixy
    CMP ESI,0xf0                        ; 004d0612
    JNZ 0x004d08f9                      ; 004d0618
        ;   XREF to: 004d08f9 (CONDITIONAL_JUMP)  ; LAB_004d08f9
    MOV dword ptr [EAX + 0x4],0x1e0     ; 004d061e | g_CGame_01c775ec.game_pixy
        ;   Label: LAB_004d061e
    MOV dword ptr [EAX],0x280           ; 004d0625 | g_CGame_01c775ec
    PUSH 0x1                            ; 004d062b
        ;   Label: default
    MOV EAX,[0x005bac64]                ; 004d062d | g_CKeys_PTR_005bac64
    PUSH EAX                            ; 004d0632 | g_CKeys_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 004d0633 | g_CKeys_01cc30e4
    CALL dword ptr [EDX + 0x4]          ; 004d0635
    ADD ESP,0x8                         ; 004d0638
    TEST EAX,EAX                        ; 004d063b
    JZ 0x004d015c                       ; 004d063d
        ;   XREF to: 004d015c (CONDITIONAL_JUMP)  ; LAB_004d015c
    ADD ESP,0x110                       ; 004d0643
    POP EBP                             ; 004d0649
    POP EDI                             ; 004d064a
    POP ESI                             ; 004d064b
    POP EBX                             ; 004d064c
    RET                                 ; 004d064d
    MOV EBX,0x1                         ; 004d064e
        ;   Label: LAB_004d064e
    JMP 0x004d015c                      ; 004d0653
        ;   XREF to: 004d015c (UNCONDITIONAL_JUMP)  ; LAB_004d015c
    MOV [0x01cc64a8],EAX                ; 004d0658 | DAT_01cc64a8
        ;   Label: LAB_004d0658
    JMP 0x004d028a                      ; 004d065d
        ;   XREF to: 004d028a (UNCONDITIONAL_JUMP)  ; LAB_004d028a
    PUSH 0x5886c4                       ; 004d0662 | = "tri3dfx.dll"
        ;   Label: LAB_004d0662
    PUSH 0x5c0e80                       ; 004d0667 | g_RendererDllPath
    CALL crt_string.c__stricmp_FUN_00564520 ; 004d066c
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_00564520(char * str1, char * str2)
    ADD ESP,0x8                         ; 004d0671
    TEST EAX,EAX                        ; 004d0674
    JNZ 0x004d028a                      ; 004d0676
        ;   XREF to: 004d028a (CONDITIONAL_JUMP)  ; LAB_004d028a
    MOV ESI,0x5886d0                    ; 004d067c | = "tridx6.dll"
    MOV EDI,0x5c0e80                    ; 004d0681 | g_RendererDllPath
    PUSH EDI                            ; 004d0686 | g_RendererDllPath
    MOV AL,byte ptr [ESI]               ; 004d0687 | = "tridx6.dll" | s_tridx6_dll_005886d0+2
        ;   Label: LAB_004d0687
    MOV byte ptr [EDI],AL               ; 004d0689 | g_RendererDllPath | g_RendererDllPath+2
    CMP AL,0x0                          ; 004d068b
    JZ 0x004d069f                       ; 004d068d
        ;   XREF to: 004d069f (CONDITIONAL_JUMP)  ; LAB_004d069f
    MOV AL,byte ptr [ESI + 0x1]         ; 004d068f | s_tridx6_dll_005886d0+1 | s_tridx6_dll_005886d0+3
    ADD ESI,0x2                         ; 004d0692
    MOV byte ptr [EDI + 0x1],AL         ; 004d0695 | g_RendererDllPath+1 | s_d3d_dll_005c0e83
    ADD EDI,0x2                         ; 004d0698
    CMP AL,0x0                          ; 004d069b
    JNZ 0x004d0687                      ; 004d069d
        ;   XREF to: 004d0687 (CONDITIONAL_JUMP)  ; LAB_004d0687
    POP EDI                             ; 004d069f
        ;   Label: LAB_004d069f
    CALL engine_special.cpp_kill_FUN_005322b0 ; 004d06a0
        ;   XREF to: 005322b0 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_kill_FUN_005322b0()
    PUSH 0x0                            ; 004d06a5
    CALL engine_special.cpp_loadExternalRenderer_FUN_00531780 ; 004d06a7
        ;   XREF to: 00531780 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_loadExternalRenderer_FUN_00531780(HWND window_handle)
    MOV ESI,dword ptr [0x02dc9d60]      ; 004d06ac | g_UseDirect3D
    ADD ESP,0x4                         ; 004d06b2
    TEST ESI,ESI                        ; 004d06b5
    JNZ 0x004d0249                      ; 004d06b7
        ;   XREF to: 004d0249 (CONDITIONAL_JUMP)  ; LAB_004d0249
    MOV dword ptr [0x01cc64a8],ESI      ; 004d06bd | DAT_01cc64a8
    JMP 0x004d028a                      ; 004d06c3
        ;   XREF to: 004d028a (UNCONDITIONAL_JUMP)  ; LAB_004d028a
    CMP ECX,0x12c                       ; 004d06c8
        ;   Label: LAB_004d06c8
    JZ 0x004d0702                       ; 004d06ce
        ;   XREF to: 004d0702 (CONDITIONAL_JUMP)  ; LAB_004d0702
    CMP ECX,0x180                       ; 004d06d0
    JZ 0x004d070c                       ; 004d06d6
        ;   XREF to: 004d070c (CONDITIONAL_JUMP)  ; LAB_004d070c
    CMP ECX,0x1e0                       ; 004d06d8
    JZ 0x004d0716                       ; 004d06de
        ;   XREF to: 004d0716 (CONDITIONAL_JUMP)  ; LAB_004d0716
    CMP ECX,0x258                       ; 004d06e0
    JZ 0x004d0720                       ; 004d06e6
        ;   XREF to: 004d0720 (CONDITIONAL_JUMP)  ; LAB_004d0720
    CMP ECX,0x300                       ; 004d06e8
    JZ 0x004d072a                       ; 004d06ee
        ;   XREF to: 004d072a (CONDITIONAL_JUMP)  ; LAB_004d072a
    CMP ECX,0x400                       ; 004d06f0
    JNZ 0x004d0734                      ; 004d06f6
        ;   XREF to: 004d0734 (CONDITIONAL_JUMP)  ; LAB_004d0734
    PUSH 0x58875a                       ; 004d06f8 | = "Resolution : 1280x1024"
    JMP 0x004d036c                      ; 004d06fd
        ;   XREF to: 004d036c (UNCONDITIONAL_JUMP)  ; LAB_004d036c
    PUSH 0x5886f0                       ; 004d0702 | = "Resolution : 400x300"
        ;   Label: LAB_004d0702
    JMP 0x004d036c                      ; 004d0707
        ;   XREF to: 004d036c (UNCONDITIONAL_JUMP)  ; LAB_004d036c
    PUSH 0x588705                       ; 004d070c | = "Resolution : 512x384"
        ;   Label: LAB_004d070c
    JMP 0x004d036c                      ; 004d0711
        ;   XREF to: 004d036c (UNCONDITIONAL_JUMP)  ; LAB_004d036c
    PUSH 0x58871a                       ; 004d0716 | = "Resolution : 640x480"
        ;   Label: LAB_004d0716
    JMP 0x004d036c                      ; 004d071b
        ;   XREF to: 004d036c (UNCONDITIONAL_JUMP)  ; LAB_004d036c
    PUSH 0x58872f                       ; 004d0720 | = "Resolution : 800x600"
        ;   Label: LAB_004d0720
    JMP 0x004d036c                      ; 004d0725
        ;   XREF to: 004d036c (UNCONDITIONAL_JUMP)  ; LAB_004d036c
    PUSH 0x588744                       ; 004d072a | = "Resolution : 1024x768"
        ;   Label: LAB_004d072a
    JMP 0x004d036c                      ; 004d072f
        ;   XREF to: 004d036c (UNCONDITIONAL_JUMP)  ; LAB_004d036c
    PUSH 0x588771                       ; 004d0734 | = "Resolution : 320x240"
        ;   Label: LAB_004d0734
    JMP 0x004d036c                      ; 004d0739
        ;   XREF to: 004d036c (UNCONDITIONAL_JUMP)  ; LAB_004d036c
    PUSH 0x58879c                       ; 004d073e | = "Flashlight halo : Simple"
        ;   Label: LAB_004d073e
    JMP 0x004d039c                      ; 004d0743
        ;   XREF to: 004d039c (UNCONDITIONAL_JUMP)  ; LAB_004d039c
    PUSH 0x5887b5                       ; 004d0748 | = "Flashlight halo : Complex"
        ;   Label: LAB_004d0748
    JMP 0x004d039c                      ; 004d074d
        ;   XREF to: 004d039c (UNCONDITIONAL_JUMP)  ; LAB_004d039c
    JBE 0x004d073e                      ; 004d0752
        ;   XREF to: 004d073e (CONDITIONAL_JUMP)  ; LAB_004d073e
        ;   Label: LAB_004d0752
    CMP EAX,0x2                         ; 004d0754
    JZ 0x004d0748                       ; 004d0757
        ;   XREF to: 004d0748 (CONDITIONAL_JUMP)  ; LAB_004d0748
    JMP 0x004d03b2                      ; 004d0759
        ;   XREF to: 004d03b2 (UNCONDITIONAL_JUMP)  ; LAB_004d03b2
    PUSH 0x5887de                       ; 004d075e | = "Not enough video memory for 3D card"
        ;   Label: LAB_004d075e
    JMP 0x004d03d5                      ; 004d0763
        ;   XREF to: 004d03d5 (UNCONDITIONAL_JUMP)  ; LAB_004d03d5
    CMP dword ptr [0x02dc9d60],0x0      ; 004d0768 | g_UseDirect3D
        ;   Label: LAB_004d0768
    JZ 0x004d077b                       ; 004d076f
        ;   XREF to: 004d077b (CONDITIONAL_JUMP)  ; LAB_004d077b
    PUSH 0x588802                       ; 004d0771 | = "3D Hardware : On"
    JMP 0x004d03d5                      ; 004d0776
        ;   XREF to: 004d03d5 (UNCONDITIONAL_JUMP)  ; LAB_004d03d5
    PUSH 0x588813                       ; 004d077b | = "3D Hardware : Off"
        ;   Label: LAB_004d077b
    JMP 0x004d03d5                      ; 004d0780
        ;   XREF to: 004d03d5 (UNCONDITIONAL_JUMP)  ; LAB_004d03d5
    PUSH 0x588843                       ; 004d0785 | = "tridx6.dll"
        ;   Label: LAB_004d0785
    PUSH 0x5c0e80                       ; 004d078a | g_RendererDllPath
    CALL crt_string.c__stricmp_FUN_00564520 ; 004d078f
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_00564520(char * str1, char * str2)
    ADD ESP,0x8                         ; 004d0794
    TEST EAX,EAX                        ; 004d0797
    JNZ 0x004d07a5                      ; 004d0799
        ;   XREF to: 004d07a5 (CONDITIONAL_JUMP)  ; LAB_004d07a5
    PUSH 0x58884e                       ; 004d079b | = "3D API : DirectX 6"
    JMP 0x004d040a                      ; 004d07a0
        ;   XREF to: 004d040a (UNCONDITIONAL_JUMP)  ; LAB_004d040a
    PUSH 0x588861                       ; 004d07a5 | = "tridx7.dll"
        ;   Label: LAB_004d07a5
    PUSH 0x5c0e80                       ; 004d07aa | g_RendererDllPath
    CALL crt_string.c__stricmp_FUN_00564520 ; 004d07af
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_00564520(char * str1, char * str2)
    ADD ESP,0x8                         ; 004d07b4
    TEST EAX,EAX                        ; 004d07b7
    JNZ 0x004d07c5                      ; 004d07b9
        ;   XREF to: 004d07c5 (CONDITIONAL_JUMP)  ; LAB_004d07c5
    PUSH 0x58886c                       ; 004d07bb | = "3D API : DirectX 7"
    JMP 0x004d040a                      ; 004d07c0
        ;   XREF to: 004d040a (UNCONDITIONAL_JUMP)  ; LAB_004d040a
    PUSH 0x58887f                       ; 004d07c5 | = "tri3dfx.dll"
        ;   Label: LAB_004d07c5
    PUSH 0x5c0e80                       ; 004d07ca | g_RendererDllPath
    CALL crt_string.c__stricmp_FUN_00564520 ; 004d07cf
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_00564520(char * str1, char * str2)
    ADD ESP,0x8                         ; 004d07d4
    TEST EAX,EAX                        ; 004d07d7
    JNZ 0x004d07f3                      ; 004d07d9
        ;   XREF to: 004d07f3 (CONDITIONAL_JUMP)  ; LAB_004d07f3
    TEST EBX,EBX                        ; 004d07db
    JNZ 0x004d07e9                      ; 004d07dd
        ;   XREF to: 004d07e9 (CONDITIONAL_JUMP)  ; LAB_004d07e9
    PUSH 0x58888b                       ; 004d07df | = "3D API : Voodoo Blit Emulation"
    JMP 0x004d040a                      ; 004d07e4
        ;   XREF to: 004d040a (UNCONDITIONAL_JUMP)  ; LAB_004d040a
    PUSH 0x5888aa                       ; 004d07e9 | = "3D API : DirectX 6"
        ;   Label: LAB_004d07e9
    JMP 0x004d040a                      ; 004d07ee
        ;   XREF to: 004d040a (UNCONDITIONAL_JUMP)  ; LAB_004d040a
    PUSH 0x5888bd                       ; 004d07f3 | = "3D API : Custom"
        ;   Label: LAB_004d07f3
    JMP 0x004d040a                      ; 004d07f8
        ;   XREF to: 004d040a (UNCONDITIONAL_JUMP)  ; LAB_004d040a
    PUSH 0x5888e5                       ; 004d07fd | = "3D Card : "
        ;   Label: LAB_004d07fd
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d0802
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004d0807
    MOV EDI,0x1cc5f80                   ; 004d080a
    MOV ESI,EAX                         ; 004d080f
    PUSH EDI                            ; 004d0811
    MOV AL,byte ptr [ESI]               ; 004d0812
        ;   Label: LAB_004d0812
    MOV byte ptr [EDI],AL               ; 004d0814 | DAT_01cc5f80 | DAT_01cc5f82
    CMP AL,0x0                          ; 004d0816
    JZ 0x004d082a                       ; 004d0818
        ;   XREF to: 004d082a (CONDITIONAL_JUMP)  ; LAB_004d082a
    MOV AL,byte ptr [ESI + 0x1]         ; 004d081a
    ADD ESI,0x2                         ; 004d081d
    MOV byte ptr [EDI + 0x1],AL         ; 004d0820 | DAT_01cc5f81 | DAT_01cc5f83
    ADD EDI,0x2                         ; 004d0823
    CMP AL,0x0                          ; 004d0826
    JNZ 0x004d0812                      ; 004d0828
        ;   XREF to: 004d0812 (CONDITIONAL_JUMP)  ; LAB_004d0812
    POP EDI                             ; 004d082a
        ;   Label: LAB_004d082a
    MOV ESI,dword ptr [0x01cc64a4]      ; 004d082b | DAT_01cc64a4
    MOV ESI,dword ptr [ESI*0x4 + 0x1cc64ec] ; 004d0831 | DAT_01cc64ec
    PUSH EDI                            ; 004d0838 | DAT_01cc5f80
    SUB ECX,ECX                         ; 004d0839
    DEC ECX                             ; 004d083b
    MOV AL,0x0                          ; 004d083c
    SCASB.REPNE ES:EDI                  ; 004d083e | DAT_01cc5f80 | DAT_01cc5f81
    DEC EDI                             ; 004d0840
    MOV AL,byte ptr [ESI]               ; 004d0841
        ;   Label: LAB_004d0841
    MOV byte ptr [EDI],AL               ; 004d0843 | DAT_01cc5f80 | DAT_01cc5f82 | DAT_01cc5f81
    CMP AL,0x0                          ; 004d0845
    JZ 0x004d0859                       ; 004d0847
        ;   XREF to: 004d0859 (CONDITIONAL_JUMP)  ; LAB_004d0859
    MOV AL,byte ptr [ESI + 0x1]         ; 004d0849
    ADD ESI,0x2                         ; 004d084c
    MOV byte ptr [EDI + 0x1],AL         ; 004d084f | DAT_01cc5f81 | DAT_01cc5f83 | DAT_01cc5f82
    ADD EDI,0x2                         ; 004d0852
    CMP AL,0x0                          ; 004d0855
    JNZ 0x004d0841                      ; 004d0857
        ;   XREF to: 004d0841 (CONDITIONAL_JUMP)  ; LAB_004d0841
    POP EDI                             ; 004d0859
        ;   Label: LAB_004d0859
    JMP 0x004d0448                      ; 004d085a
        ;   XREF to: 004d0448 (UNCONDITIONAL_JUMP)  ; LAB_004d0448
    PUSH 0x588928                       ; 004d085f | = "Subtitles : Off"
        ;   Label: LAB_004d085f
    JMP 0x004d04ea                      ; 004d0864
        ;   XREF to: 004d04ea (UNCONDITIONAL_JUMP)  ; LAB_004d04ea
    CMP dword ptr [EAX + 0x18],0x0      ; 004d0869 | g_CGame_01c775ec.nudity_flag
        ;   Label: LAB_004d0869
    JZ 0x004d08a2                       ; 004d086d
        ;   XREF to: 004d08a2 (CONDITIONAL_JUMP)  ; LAB_004d08a2
    PUSH 0x588938                       ; 004d086f | = "Rating: Mature"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d0874
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004d0879
    MOV EDI,0x1cc6380                   ; 004d087c
    MOV ESI,EAX                         ; 004d0881
    PUSH EDI                            ; 004d0883
    MOV AL,byte ptr [ESI]               ; 004d0884
        ;   Label: LAB_004d0884
    MOV byte ptr [EDI],AL               ; 004d0886 | DAT_01cc6380 | DAT_01cc6382
    CMP AL,0x0                          ; 004d0888
    JZ 0x004d089c                       ; 004d088a
        ;   XREF to: 004d089c (CONDITIONAL_JUMP)  ; LAB_004d089c
    MOV AL,byte ptr [ESI + 0x1]         ; 004d088c
    ADD ESI,0x2                         ; 004d088f
    MOV byte ptr [EDI + 0x1],AL         ; 004d0892 | DAT_01cc6381 | DAT_01cc6383
    ADD EDI,0x2                         ; 004d0895
    CMP AL,0x0                          ; 004d0898
    JNZ 0x004d0884                      ; 004d089a
        ;   XREF to: 004d0884 (CONDITIONAL_JUMP)  ; LAB_004d0884
    POP EDI                             ; 004d089c
        ;   Label: LAB_004d089c
    JMP 0x004d0522                      ; 004d089d
        ;   XREF to: 004d0522 (UNCONDITIONAL_JUMP)  ; LAB_004d0522
    PUSH 0x588947                       ; 004d08a2 | = "Rating: Teen"
        ;   Label: LAB_004d08a2
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004d08a7
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 004d08ac
    MOV EDI,0x1cc6380                   ; 004d08af
    MOV ESI,EAX                         ; 004d08b4
    PUSH EDI                            ; 004d08b6 | DAT_01cc6380
    MOV AL,byte ptr [ESI]               ; 004d08b7
        ;   Label: LAB_004d08b7
    MOV byte ptr [EDI],AL               ; 004d08b9 | DAT_01cc6380 | DAT_01cc6382
    CMP AL,0x0                          ; 004d08bb
    JZ 0x004d08cf                       ; 004d08bd
        ;   XREF to: 004d08cf (CONDITIONAL_JUMP)  ; LAB_004d08cf
    MOV AL,byte ptr [ESI + 0x1]         ; 004d08bf
    ADD ESI,0x2                         ; 004d08c2
    MOV byte ptr [EDI + 0x1],AL         ; 004d08c5 | DAT_01cc6381 | DAT_01cc6383
    ADD EDI,0x2                         ; 004d08c8
    CMP AL,0x0                          ; 004d08cb
    JNZ 0x004d08b7                      ; 004d08cd
        ;   XREF to: 004d08b7 (CONDITIONAL_JUMP)  ; LAB_004d08b7
    POP EDI                             ; 004d08cf
        ;   Label: LAB_004d08cf
    JMP 0x004d0522                      ; 004d08d0
        ;   XREF to: 004d0522 (UNCONDITIONAL_JUMP)  ; LAB_004d0522
    MOV dword ptr [EDX],0x500           ; 004d08d5 | g_CGame_01c775ec
        ;   Label: LAB_004d08d5
    MOV dword ptr [EDX + 0x4],0x400     ; 004d08db | g_CGame_01c775ec.game_pixy
    JMP 0x004d062b                      ; 004d08e2
        ;   XREF to: 004d062b (UNCONDITIONAL_JUMP)  ; default
    MOV dword ptr [EDX + 0x4],0x300     ; 004d08e7 | g_CGame_01c775ec.game_pixy
        ;   Label: LAB_004d08e7
    MOV dword ptr [EDX],0x400           ; 004d08ee | g_CGame_01c775ec
    JMP 0x004d062b                      ; 004d08f4
        ;   XREF to: 004d062b (UNCONDITIONAL_JUMP)  ; default
    CMP ESI,0x12c                       ; 004d08f9
        ;   Label: LAB_004d08f9
    JNZ 0x004d0913                      ; 004d08ff
        ;   XREF to: 004d0913 (CONDITIONAL_JUMP)  ; LAB_004d0913
    MOV dword ptr [EAX + 0x4],0xf0      ; 004d0901 | g_CGame_01c775ec.game_pixy
    MOV dword ptr [EAX],0x140           ; 004d0908 | g_CGame_01c775ec
    JMP 0x004d062b                      ; 004d090e
        ;   XREF to: 004d062b (UNCONDITIONAL_JUMP)  ; default
    CMP ESI,0x180                       ; 004d0913
        ;   Label: LAB_004d0913
    JNZ 0x004d092d                      ; 004d0919
        ;   XREF to: 004d092d (CONDITIONAL_JUMP)  ; LAB_004d092d
    MOV dword ptr [EAX + 0x4],0xf0      ; 004d091b | g_CGame_01c775ec.game_pixy
        ;   Label: LAB_004d091b
    MOV dword ptr [EAX],0x140           ; 004d0922 | g_CGame_01c775ec
    JMP 0x004d062b                      ; 004d0928
        ;   XREF to: 004d062b (UNCONDITIONAL_JUMP)  ; default
    CMP ESI,0x1e0                       ; 004d092d
        ;   Label: LAB_004d092d
    JNZ 0x004d0947                      ; 004d0933
        ;   XREF to: 004d0947 (CONDITIONAL_JUMP)  ; LAB_004d0947
    MOV dword ptr [EAX + 0x4],0x180     ; 004d0935 | g_CGame_01c775ec.game_pixy
    MOV dword ptr [EAX],0x200           ; 004d093c | g_CGame_01c775ec
    JMP 0x004d062b                      ; 004d0942
        ;   XREF to: 004d062b (UNCONDITIONAL_JUMP)  ; default
    CMP ESI,0x258                       ; 004d0947
        ;   Label: LAB_004d0947
    JZ 0x004d061e                       ; 004d094d
        ;   XREF to: 004d061e (CONDITIONAL_JUMP)  ; LAB_004d061e
    CMP ESI,0x300                       ; 004d0953
    JNZ 0x004d091b                      ; 004d0959
        ;   XREF to: 004d091b (CONDITIONAL_JUMP)  ; LAB_004d091b
    MOV dword ptr [EAX + 0x4],0x258     ; 004d095b | g_CGame_01c775ec.game_pixy
    MOV dword ptr [EAX],0x320           ; 004d0962 | g_CGame_01c775ec
    JMP 0x004d062b                      ; 004d0968
        ;   XREF to: 004d062b (UNCONDITIONAL_JUMP)  ; default
    MOV EDX,dword ptr [0x005b9354]      ; 004d096d | g_CGame_PTR_005b9354
        ;   Label: LAB_004d096d
    MOV ESI,dword ptr [EDX + 0x4]       ; 004d0973 | g_CGame_01c775ec.game_pixy
    CMP ESI,0xf0                        ; 004d0976
    JNZ 0x004d0990                      ; 004d097c
        ;   XREF to: 004d0990 (CONDITIONAL_JUMP)  ; LAB_004d0990
    MOV dword ptr [EDX],0x200           ; 004d097e | g_CGame_01c775ec
    MOV dword ptr [EDX + 0x4],0x180     ; 004d0984 | g_CGame_01c775ec.game_pixy
    JMP 0x004d062b                      ; 004d098b
        ;   XREF to: 004d062b (UNCONDITIONAL_JUMP)  ; default
    CMP ESI,0x12c                       ; 004d0990
        ;   Label: LAB_004d0990
    JNZ 0x004d09aa                      ; 004d0996
        ;   XREF to: 004d09aa (CONDITIONAL_JUMP)  ; LAB_004d09aa
    MOV dword ptr [EDX],0x200           ; 004d0998 | g_CGame_01c775ec
    MOV dword ptr [EDX + 0x4],0x180     ; 004d099e | g_CGame_01c775ec.game_pixy
    JMP 0x004d062b                      ; 004d09a5
        ;   XREF to: 004d062b (UNCONDITIONAL_JUMP)  ; default
    CMP ESI,0x180                       ; 004d09aa
        ;   Label: LAB_004d09aa
    JNZ 0x004d09c4                      ; 004d09b0
        ;   XREF to: 004d09c4 (CONDITIONAL_JUMP)  ; LAB_004d09c4
    MOV dword ptr [EDX],0x280           ; 004d09b2 | g_CGame_01c775ec
    MOV dword ptr [EDX + 0x4],0x1e0     ; 004d09b8 | g_CGame_01c775ec.game_pixy
    JMP 0x004d062b                      ; 004d09bf
        ;   XREF to: 004d062b (UNCONDITIONAL_JUMP)  ; default
    CMP dword ptr [ESP + 0x104],0xb71b00 ; 004d09c4
        ;   Label: LAB_004d09c4
    JLE 0x004d09de                      ; 004d09cf
        ;   XREF to: 004d09de (CONDITIONAL_JUMP)  ; LAB_004d09de
    CMP dword ptr [EDX + 0x4],0x1e0     ; 004d09d1 | g_CGame_01c775ec.game_pixy
    JNZ 0x004d09de                      ; 004d09d8
        ;   XREF to: 004d09de (CONDITIONAL_JUMP)  ; LAB_004d09de
    TEST EAX,EAX                        ; 004d09da
    JZ 0x004d0a39                       ; 004d09dc
        ;   XREF to: 004d0a39 (CONDITIONAL_JUMP)  ; LAB_004d0a39
    CMP dword ptr [ESP + 0x104],0xb71b00 ; 004d09de
        ;   Label: LAB_004d09de
    JLE 0x004d0a02                      ; 004d09e9
        ;   XREF to: 004d0a02 (CONDITIONAL_JUMP)  ; LAB_004d0a02
    MOV EDX,dword ptr [0x005b9354]      ; 004d09eb | g_CGame_PTR_005b9354
    CMP dword ptr [EDX + 0x4],0x258     ; 004d09f1 | g_CGame_01c775ec.game_pixy
    JNZ 0x004d0a02                      ; 004d09f8
        ;   XREF to: 004d0a02 (CONDITIONAL_JUMP)  ; LAB_004d0a02
    TEST EAX,EAX                        ; 004d09fa
    JZ 0x004d08e7                       ; 004d09fc
        ;   XREF to: 004d08e7 (CONDITIONAL_JUMP)  ; LAB_004d08e7
    CMP dword ptr [ESP + 0x104],0x16e3600 ; 004d0a02
        ;   Label: LAB_004d0a02
    JLE 0x004d0a22                      ; 004d0a0d
        ;   XREF to: 004d0a22 (CONDITIONAL_JUMP)  ; LAB_004d0a22
    MOV EDX,dword ptr [0x005b9354]      ; 004d0a0f | g_CGame_PTR_005b9354
    CMP dword ptr [EDX + 0x4],0x300     ; 004d0a15 | g_CGame_01c775ec.game_pixy
    JNZ 0x004d0a22                      ; 004d0a1c
        ;   XREF to: 004d0a22 (CONDITIONAL_JUMP)  ; LAB_004d0a22
    TEST EAX,EAX                        ; 004d0a1e
    JZ 0x004d0a4b                       ; 004d0a20
        ;   XREF to: 004d0a4b (CONDITIONAL_JUMP)  ; LAB_004d0a4b
    MOV EAX,[0x005b9354]                ; 004d0a22 | g_CGame_PTR_005b9354
        ;   Label: LAB_004d0a22
    MOV dword ptr [EAX],0x140           ; 004d0a27 | g_CGame_01c775ec
    MOV dword ptr [EAX + 0x4],0xf0      ; 004d0a2d | g_CGame_01c775ec.game_pixy
    JMP 0x004d062b                      ; 004d0a34
        ;   XREF to: 004d062b (UNCONDITIONAL_JUMP)  ; default
    MOV dword ptr [EDX],0x320           ; 004d0a39 | g_CGame_01c775ec
        ;   Label: LAB_004d0a39
    MOV dword ptr [EDX + 0x4],0x258     ; 004d0a3f | g_CGame_01c775ec.game_pixy
    JMP 0x004d062b                      ; 004d0a46
        ;   XREF to: 004d062b (UNCONDITIONAL_JUMP)  ; default
    MOV dword ptr [EDX + 0x4],0x400     ; 004d0a4b | g_CGame_01c775ec.game_pixy
        ;   Label: LAB_004d0a4b
    MOV dword ptr [EDX],0x500           ; 004d0a52 | g_CGame_01c775ec
    JMP 0x004d062b                      ; 004d0a58
        ;   XREF to: 004d062b (UNCONDITIONAL_JUMP)  ; default
    MOV EDX,dword ptr [0x01cc5b5c]      ; 004d0a5d | DAT_01cc5b5c
        ;   Label: caseD_1
    CMP EDX,0x1                         ; 004d0a63
    JNZ 0x004d0a98                      ; 004d0a66
        ;   XREF to: 004d0a98 (CONDITIONAL_JUMP)  ; LAB_004d0a98
    MOV EAX,[0x005b9354]                ; 004d0a68 | g_CGame_PTR_005b9354
    MOV EDI,dword ptr [EAX + 0xc]       ; 004d0a6d | g_CGame_01c775ec.halo_mode
    TEST EDI,EDI                        ; 004d0a70
    JNZ 0x004d0a80                      ; 004d0a72
        ;   XREF to: 004d0a80 (CONDITIONAL_JUMP)  ; LAB_004d0a80
    MOV dword ptr [EAX + 0xc],0x2       ; 004d0a74 | g_CGame_01c775ec.halo_mode
    JMP 0x004d062b                      ; 004d0a7b
        ;   XREF to: 004d062b (UNCONDITIONAL_JUMP)  ; default
    CMP EDI,EDX                         ; 004d0a80
        ;   Label: LAB_004d0a80
    JNZ 0x004d0a90                      ; 004d0a82
        ;   XREF to: 004d0a90 (CONDITIONAL_JUMP)  ; LAB_004d0a90
    MOV dword ptr [EAX + 0xc],0x0       ; 004d0a84 | g_CGame_01c775ec.halo_mode
        ;   Label: LAB_004d0a84
    JMP 0x004d062b                      ; 004d0a8b
        ;   XREF to: 004d062b (UNCONDITIONAL_JUMP)  ; default
    MOV dword ptr [EAX + 0xc],EDX       ; 004d0a90 | g_CGame_01c775ec.halo_mode
        ;   Label: LAB_004d0a90
    JMP 0x004d062b                      ; 004d0a93
        ;   XREF to: 004d062b (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,[0x005b9354]                ; 004d0a98 | g_CGame_PTR_005b9354
        ;   Label: LAB_004d0a98
    MOV ECX,dword ptr [EAX + 0xc]       ; 004d0a9d | g_CGame_01c775ec.halo_mode
    TEST ECX,ECX                        ; 004d0aa0
    JNZ 0x004d0ab0                      ; 004d0aa2
        ;   XREF to: 004d0ab0 (CONDITIONAL_JUMP)  ; LAB_004d0ab0
    MOV dword ptr [EAX + 0xc],0x1       ; 004d0aa4 | g_CGame_01c775ec.halo_mode
    JMP 0x004d062b                      ; 004d0aab
        ;   XREF to: 004d062b (UNCONDITIONAL_JUMP)  ; default
    CMP ECX,0x1                         ; 004d0ab0
        ;   Label: LAB_004d0ab0
    JNZ 0x004d0a84                      ; 004d0ab3
        ;   XREF to: 004d0a84 (CONDITIONAL_JUMP)  ; LAB_004d0a84
    MOV dword ptr [EAX + 0xc],0x2       ; 004d0ab5 | g_CGame_01c775ec.halo_mode
    JMP 0x004d062b                      ; 004d0abc
        ;   XREF to: 004d062b (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,0x1                         ; 004d0ac1
        ;   Label: caseD_2
    MOV EDX,dword ptr [0x02dc9d60]      ; 004d0ac6 | g_UseDirect3D
    SUB EAX,EDX                         ; 004d0acc
    MOV [0x02dc9d60],EAX                ; 004d0ace | g_UseDirect3D
    JZ 0x004d0b3f                       ; 004d0ad3
        ;   XREF to: 004d0b3f (CONDITIONAL_JUMP)  ; LAB_004d0b3f
    CALL engine_special.cpp_kill_FUN_005322b0 ; 004d0ad5
        ;   XREF to: 005322b0 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_kill_FUN_005322b0()
    PUSH 0x0                            ; 004d0ada
    CALL engine_special.cpp_loadExternalRenderer_FUN_00531780 ; 004d0adc
        ;   XREF to: 00531780 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_loadExternalRenderer_FUN_00531780(HWND window_handle)
    MOV EDI,dword ptr [0x02dc9d60]      ; 004d0ae1 | g_UseDirect3D
    ADD ESP,0x4                         ; 004d0ae7
    TEST EDI,EDI                        ; 004d0aea
    JNZ 0x004d0af9                      ; 004d0aec
        ;   XREF to: 004d0af9 (CONDITIONAL_JUMP)  ; LAB_004d0af9
    MOV dword ptr [0x01cc64a8],EDI      ; 004d0aee | DAT_01cc64a8
    JMP 0x004d062b                      ; 004d0af4
        ;   XREF to: 004d062b (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x1cc656c                      ; 004d0af9
        ;   Label: LAB_004d0af9
    PUSH 0x1cc652c                      ; 004d0afe | DAT_01cc652c
    PUSH 0x1cc64ec                      ; 004d0b03
    PUSH 0x1cc64ac                      ; 004d0b08
    PUSH 0x1cc64a8                      ; 004d0b0d | DAT_01cc64a8
    CALL engine_special.cpp_buildCardList_FUN_00532d20 ; 004d0b12
        ;   XREF to: 00532d20 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_buildCardList_FUN_00532d20(int * out_card_count, char * * out_driver_names, char * * out_card_names, int * out_vendor_ids, ...)
    ADD ESP,0x14                        ; 004d0b17
    LEA EAX,[ESP + 0x10c]               ; 004d0b1a
    PUSH EAX                            ; 004d0b21
    LEA EAX,[ESP + 0x10c]               ; 004d0b22
    PUSH EAX                            ; 004d0b29
    LEA EAX,[ESP + 0x10c]               ; 004d0b2a
    PUSH EAX                            ; 004d0b31
    CALL engine_special.cpp_getVideoMemory_FUN_00532cd0 ; 004d0b32
        ;   XREF to: 00532cd0 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_getVideoMemory_FUN_00532cd0(int * total_memory, int * available_memory, int * memory_type)
    ADD ESP,0xc                         ; 004d0b37
    JMP 0x004d062b                      ; 004d0b3a
        ;   XREF to: 004d062b (UNCONDITIONAL_JUMP)  ; default
    MOV [0x01cc64a8],EAX                ; 004d0b3f | DAT_01cc64a8
        ;   Label: LAB_004d0b3f
    JMP 0x004d062b                      ; 004d0b44
        ;   XREF to: 004d062b (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,[0x01cc64a4]                ; 004d0b49 | DAT_01cc64a4
        ;   Label: caseD_3
    CMP dword ptr [EAX*0x4 + 0x1cc652c],0x121a ; 004d0b4e | DAT_01cc652c
    JZ 0x004d062b                       ; 004d0b59
        ;   XREF to: 004d062b (CONDITIONAL_JUMP)  ; default
    PUSH 0x58896f                       ; 004d0b5f | = "trid3d.dll"
    PUSH 0x5c0e80                       ; 004d0b64 | g_RendererDllPath
    CALL crt_string.c__stricmp_FUN_00564520 ; 004d0b69
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_00564520(char * str1, char * str2)
    ADD ESP,0x8                         ; 004d0b6e
    TEST EAX,EAX                        ; 004d0b71
    JNZ 0x004d0bc1                      ; 004d0b73
        ;   XREF to: 004d0bc1 (CONDITIONAL_JUMP)  ; LAB_004d0bc1
    MOV ESI,0x58897a                    ; 004d0b75 | = "tridx6.dll"
    MOV EDI,0x5c0e80                    ; 004d0b7a | g_RendererDllPath
        ;   Label: LAB_004d0b7a
    PUSH EDI                            ; 004d0b7f | g_RendererDllPath
    MOV AL,byte ptr [ESI]               ; 004d0b80 | = "tridx6.dll" | s_tridx6_dll_0058897a+2 | s_trid3d_dll_005889a6
        ;   Label: LAB_004d0b80
    MOV byte ptr [EDI],AL               ; 004d0b82 | g_RendererDllPath | g_RendererDllPath+2
    CMP AL,0x0                          ; 004d0b84
    JZ 0x004d0b98                       ; 004d0b86
        ;   XREF to: 004d0b98 (CONDITIONAL_JUMP)  ; LAB_004d0b98
    MOV AL,byte ptr [ESI + 0x1]         ; 004d0b88 | s_tridx6_dll_0058897a+1 | s_tridx6_dll_0058897a+3 | s_trid3d_dll_005889a6+1
    ADD ESI,0x2                         ; 004d0b8b
    MOV byte ptr [EDI + 0x1],AL         ; 004d0b8e | g_RendererDllPath+1 | s_d3d_dll_005c0e83
    ADD EDI,0x2                         ; 004d0b91
    CMP AL,0x0                          ; 004d0b94
    JNZ 0x004d0b80                      ; 004d0b96
        ;   XREF to: 004d0b80 (CONDITIONAL_JUMP)  ; LAB_004d0b80
    POP EDI                             ; 004d0b98
        ;   Label: LAB_004d0b98
    CALL engine_special.cpp_kill_FUN_005322b0 ; 004d0b99
        ;   XREF to: 005322b0 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_kill_FUN_005322b0()
        ;   Label: LAB_004d0b99
    PUSH 0x0                            ; 004d0b9e
    CALL engine_special.cpp_loadExternalRenderer_FUN_00531780 ; 004d0ba0
        ;   XREF to: 00531780 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_loadExternalRenderer_FUN_00531780(HWND window_handle)
    MOV EDI,dword ptr [0x02dc9d60]      ; 004d0ba5 | g_UseDirect3D
    ADD ESP,0x4                         ; 004d0bab
    TEST EDI,EDI                        ; 004d0bae
    JNZ 0x004d0af9                      ; 004d0bb0
        ;   XREF to: 004d0af9 (CONDITIONAL_JUMP)  ; LAB_004d0af9
    MOV dword ptr [0x01cc64a8],EDI      ; 004d0bb6 | DAT_01cc64a8
    JMP 0x004d062b                      ; 004d0bbc
        ;   XREF to: 004d062b (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x588985                       ; 004d0bc1 | = "tridx6.dll"
        ;   Label: LAB_004d0bc1
    PUSH 0x5c0e80                       ; 004d0bc6 | g_RendererDllPath
    CALL crt_string.c__stricmp_FUN_00564520 ; 004d0bcb
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_00564520(char * str1, char * str2)
    ADD ESP,0x8                         ; 004d0bd0
    TEST EAX,EAX                        ; 004d0bd3
    JZ 0x004d0bf4                       ; 004d0bd5
        ;   XREF to: 004d0bf4 (CONDITIONAL_JUMP)  ; LAB_004d0bf4
    PUSH 0x58899b                       ; 004d0bd7 | = "tridx7.dll"
    PUSH 0x5c0e80                       ; 004d0bdc | g_RendererDllPath
    CALL crt_string.c__stricmp_FUN_00564520 ; 004d0be1
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_00564520(char * str1, char * str2)
    ADD ESP,0x8                         ; 004d0be6
    TEST EAX,EAX                        ; 004d0be9
    JNZ 0x004d0bfe                      ; 004d0beb
        ;   XREF to: 004d0bfe (CONDITIONAL_JUMP)  ; LAB_004d0bfe
    MOV ESI,0x5889a6                    ; 004d0bed | = "trid3d.dll"
    JMP 0x004d0b7a                      ; 004d0bf2
        ;   XREF to: 004d0b7a (UNCONDITIONAL_JUMP)  ; LAB_004d0b7a
    MOV ESI,0x588990                    ; 004d0bf4 | = "tridx7.dll"
        ;   Label: LAB_004d0bf4
    JMP 0x004d0b7a                      ; 004d0bf9
        ;   XREF to: 004d0b7a (UNCONDITIONAL_JUMP)  ; LAB_004d0b7a
    PUSH 0x5889b1                       ; 004d0bfe | = "tri3dfx.dll"
        ;   Label: LAB_004d0bfe
    PUSH 0x5c0e80                       ; 004d0c03 | g_RendererDllPath
    CALL crt_string.c__stricmp_FUN_00564520 ; 004d0c08
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_00564520(char * str1, char * str2)
    ADD ESP,0x8                         ; 004d0c0d
    TEST EAX,EAX                        ; 004d0c10
    JNZ 0x004d0b99                      ; 004d0c12
        ;   XREF to: 004d0b99 (CONDITIONAL_JUMP)  ; LAB_004d0b99
    MOV ESI,0x5889bd                    ; 004d0c14 | = "trid3d.dll"
    JMP 0x004d0b7a                      ; 004d0c19
        ;   XREF to: 004d0b7a (UNCONDITIONAL_JUMP)  ; LAB_004d0b7a
    MOV ECX,dword ptr [0x01cc64a8]      ; 004d0c1e | DAT_01cc64a8
        ;   Label: caseD_4
    TEST ECX,ECX                        ; 004d0c24
    JNZ 0x004d0c33                      ; 004d0c26
        ;   XREF to: 004d0c33 (CONDITIONAL_JUMP)  ; LAB_004d0c33
    MOV dword ptr [0x01cc64a4],ECX      ; 004d0c28 | DAT_01cc64a4
    JMP 0x004d062b                      ; 004d0c2e
        ;   XREF to: 004d062b (UNCONDITIONAL_JUMP)  ; default
    MOV ESI,dword ptr [0x01cc64a4]      ; 004d0c33 | DAT_01cc64a4
        ;   Label: LAB_004d0c33
    INC ESI                             ; 004d0c39
    MOV dword ptr [0x01cc64a4],ESI      ; 004d0c3a | DAT_01cc64a4
    CMP ESI,ECX                         ; 004d0c40
    JL 0x004d0c4b                       ; 004d0c42
        ;   XREF to: 004d0c4b (CONDITIONAL_JUMP)  ; LAB_004d0c4b
    XOR EAX,EAX                         ; 004d0c44
    MOV [0x01cc64a4],EAX                ; 004d0c46 | DAT_01cc64a4
    MOV EDX,dword ptr [0x01cc64a4]      ; 004d0c4b | DAT_01cc64a4
        ;   Label: LAB_004d0c4b
    PUSH EDX                            ; 004d0c51
    CALL engine_special.cpp_selectCard_FUN_00532d00 ; 004d0c52
        ;   XREF to: 00532d00 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_selectCard_FUN_00532d00(int card_index)
    ADD ESP,0x4                         ; 004d0c57
    JMP 0x004d062b                      ; 004d0c5a
        ;   XREF to: 004d062b (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,[0x005b9354]                ; 004d0c5f | g_CGame_PTR_005b9354
        ;   Label: caseD_5
    CMP dword ptr [EAX + 0x8],0x10      ; 004d0c64 | g_CGame_01c775ec.game_bpp
    JNZ 0x004d0c76                      ; 004d0c68
        ;   XREF to: 004d0c76 (CONDITIONAL_JUMP)  ; LAB_004d0c76
    MOV dword ptr [EAX + 0x8],0x20      ; 004d0c6a | g_CGame_01c775ec.game_bpp
    JMP 0x004d062b                      ; 004d0c71
        ;   XREF to: 004d062b (UNCONDITIONAL_JUMP)  ; default
    MOV dword ptr [EAX + 0x8],0x10      ; 004d0c76 | g_CGame_01c775ec.game_bpp
        ;   Label: LAB_004d0c76
    JMP 0x004d062b                      ; 004d0c7d
        ;   XREF to: 004d062b (UNCONDITIONAL_JUMP)  ; default
    CALL core_menu.cpp_showCalibrationTest_FUN_004cffa0 ; 004d0c82
        ;   XREF to: 004cffa0 (UNCONDITIONAL_CALL)  ; void core_menu.cpp_showCalibrationTest_FUN_004cffa0()
        ;   Label: caseD_6
    JMP 0x004d062b                      ; 004d0c87
        ;   XREF to: 004d062b (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,[0x005b9354]                ; 004d0c8c | g_CGame_PTR_005b9354
        ;   Label: caseD_7
    CMP dword ptr [EAX + 0x10],0x0      ; 004d0c91 | g_CGame_01c775ec.subtitle_mode
    SETZ DL                             ; 004d0c95
    AND EDX,0xff                        ; 004d0c98
    MOV dword ptr [EAX + 0x10],EDX      ; 004d0c9e | g_CGame_01c775ec.subtitle_mode
    JMP 0x004d062b                      ; 004d0ca1
        ;   XREF to: 004d062b (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,[0x005b9354]                ; 004d0ca6 | g_CGame_PTR_005b9354
        ;   Label: caseD_8
    CMP dword ptr [EAX + 0x18],0x0      ; 004d0cab | g_CGame_01c775ec.nudity_flag
    SETZ DL                             ; 004d0caf
    AND EDX,0xff                        ; 004d0cb2
    MOV dword ptr [EAX + 0x18],EDX      ; 004d0cb8 | g_CGame_01c775ec.nudity_flag
    MOV dword ptr [EAX + 0x14],EDX      ; 004d0cbb | g_CGame_01c775ec.blood_flag
    MOV dword ptr [EAX + 0x1c],EDX      ; 004d0cbe | g_CGame_01c775ec.foul_language_flag
    JMP 0x004d062b                      ; 004d0cc1
        ;   XREF to: 004d062b (UNCONDITIONAL_JUMP)  ; default

