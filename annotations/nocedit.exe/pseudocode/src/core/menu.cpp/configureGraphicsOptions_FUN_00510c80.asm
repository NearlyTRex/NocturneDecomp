; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_menu.cpp_configureGraphicsOptions_FUN_00510c80(void)
;
; Local Variables:
; undefined4       Stack[-0x144]:4  local_144
; undefined1       Stack[-0x140]:1  local_140
; undefined1       Stack[-0x13f]:1  local_13f
; undefined1       Stack[-0x40]:1  local_40
; undefined1       Stack[-0x3f]:1  local_3f
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_menu.cpp_showOptionsScreen_FUN_00512d30 at 00512e5d
;
; Referenced Globals:
;   void* switchdataD_00510c50 = 0051115d
;   TerminatedCString s_tri3dfx_dll_0063679f
;   TerminatedCString s_tri3dfx_dll_006367ab
;   undefined4 DAT_006367ac
;   undefined4 s_3dfx.dll_006367ae
;   TerminatedCString s_tri3dfx_dll_006367b7
;   TerminatedCString s_tridx6_dll_006367c3
;   undefined4 s_ridx6.dll_006367c4
;   undefined4 s_dx6.dll_006367c6
;   TerminatedCString s_Resolution_320x240_006367ce
;   TerminatedCString s_Resolution_400x300_006367e3
;   TerminatedCString s_Resolution_512x384_006367f8
;   TerminatedCString s_Resolution_640x480_0063680d
;   TerminatedCString s_Resolution_800x600_00636822
;   TerminatedCString s_Resolution_1024x768_00636837
;   ... and 92 more
;
; Called Functions:
;   core_game.cpp_CGame_saveClockTime_FUN_004d7d80
;   core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90
;   core_menu.cpp_renderMenuAndGetChoice_FUN_00510000
;   core_menu.cpp_showCalibrationTest_FUN_00510ba0
;   core_moon.cpp_CMoon_render_FUN_00529ed0
;   core_moon.cpp_CMoon_update_FUN_00529d60
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   crt_string.c_stricmp_FUN_005fe7f0
;   support_newmsg.cpp_getLocalizedString_FUN_005441f0
;   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
;   wincore_windll.cpp_buildCardList_FUN_005b7db0
;   wincore_windll.cpp_getVideoMemory_FUN_005b7d60
;   wincore_windll.cpp_kill_FUN_005b71e0
;   wincore_windll.cpp_loadExternalRenderer_FUN_005b6750
;   wincore_windll.cpp_selectCard_FUN_005b7d90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00510c80
        ;   Label: core_menu.cpp_configureGraphicsOptions_FUN_00510c80
    PUSH ESI                            ; 00510c81
    PUSH EDI                            ; 00510c82
    PUSH EBP                            ; 00510c83
    SUB ESP,0x130                       ; 00510c84
    MOV ECX,dword ptr [0x0067b654]      ; 00510c8a | CGame g_CGameInstance | CGame * g_CGamePtr
    XOR EDX,EDX                         ; 00510c90
    PUSH ECX                            ; 00510c92 | CGame g_CGameInstance
    MOV dword ptr [ESP + 0x124],EDX     ; 00510c93
    CALL core_game.cpp_CGame_saveClockTime_FUN_004d7d80 ; 00510c9a | void core_game.cpp_CGame_saveClockTime_FUN_004d7d80(CGame * n1, CGame * n2)
        ;   XREF to: 004d7d80 (UNCONDITIONAL_CALL)
    MOV EDX,0x2f26cd0                   ; 00510c9f | char[9][256] g_GraphicsMenuTextBuffers
    ADD ESP,0x4                         ; 00510ca4
    XOR EAX,EAX                         ; 00510ca7
    MOV dword ptr [EAX + 0x2f275d0],EDX ; 00510ca9 | char *[9] g_GraphicsMenuTextPointers | char[9][256] g_GraphicsMenuTextBuffers
        ;   Label: LAB_00510ca9
    ADD EAX,0x4                         ; 00510caf
    ADD EDX,0x100                       ; 00510cb2 | g_GraphicsMenuTextBuffers[2][0]
    CMP EAX,0x24                        ; 00510cb8
    JNZ 0x00510ca9                      ; 00510cbb | LAB_00510ca9
        ;   XREF to: 00510ca9 (CONDITIONAL_JUMP)
    PUSH 0x2f276bc                      ; 00510cbd | int[17] g_GraphicsCardDeviceIDs
    PUSH 0x2f2767c                      ; 00510cc2 | int[16] g_GraphicsCardVendorIDs
    PUSH 0x2f2763c                      ; 00510cc7 | char *[16] g_GraphicsCardNames
    PUSH 0x2f275fc                      ; 00510ccc | char[64] g_GraphicsCardDriverData
    PUSH 0x2f275f8                      ; 00510cd1 | int g_GraphicsCardCount
    CALL wincore_windll.cpp_buildCardList_FUN_005b7db0 ; 00510cd6 | int wincore_windll.cpp_buildCardList_FUN_005b7db0(int * out_card_count, void * enum_data_buffer, char * * out_card_names, int * out_vendor_ids, ...)
        ;   XREF to: 005b7db0 (UNCONDITIONAL_CALL)
    MOV EAX,[0x02f275f4]                ; 00510cdb | int g_GraphicsCardHandle
    MOV EBX,dword ptr [0x02f275f8]      ; 00510ce0 | int g_GraphicsCardCount
    ADD ESP,0x14                        ; 00510ce6
    CMP EAX,EBX                         ; 00510ce9
    JL 0x00510cf5                       ; 00510ceb | LAB_00510cf5
        ;   XREF to: 00510cf5 (CONDITIONAL_JUMP)
    XOR ESI,ESI                         ; 00510ced
    MOV dword ptr [0x02f275f4],ESI      ; 00510cef | int g_GraphicsCardHandle
    LEA EAX,[ESP + 0x12c]               ; 00510cf5
        ;   Label: LAB_00510cf5
    PUSH EAX                            ; 00510cfc
    LEA EAX,[ESP + 0x12c]               ; 00510cfd
    XOR EDI,EDI                         ; 00510d04
    PUSH EAX                            ; 00510d06
    LEA EAX,[ESP + 0x12c]               ; 00510d07
    MOV dword ptr [ESP + 0x12c],EDI     ; 00510d0e
    PUSH EAX                            ; 00510d15
    MOV dword ptr [ESP + 0x134],EDI     ; 00510d16
    MOV dword ptr [ESP + 0x138],EDI     ; 00510d1d
    CALL wincore_windll.cpp_getVideoMemory_FUN_005b7d60 ; 00510d24 | int wincore_windll.cpp_getVideoMemory_FUN_005b7d60(int * total_memory, int * available_memory, int * memory_type)
        ;   XREF to: 005b7d60 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00510d29
    MOV EBP,0x684010                    ; 00510d2c | = "trid3d.dll" | g_RendererDllName = trid3d.dll
    XOR EBX,EBX                         ; 00510d31
    MOV EDX,dword ptr [0x0067b654]      ; 00510d33 | CGame g_CGameInstance | CGame * g_CGamePtr
        ;   Label: LAB_00510d33
    PUSH EDX                            ; 00510d39 | CGame g_CGameInstance
    CALL core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90 ; 00510d3a | void core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90(CGame * this_ptr)
        ;   XREF to: 004d7d90 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00510d3f
    MOV EAX,[0x0067b654]                ; 00510d42 | CGame g_CGameInstance | CGame * g_CGamePtr
    SUB ESP,0x4                         ; 00510d47
    MOV EDX,dword ptr [EAX + 0x264]     ; 00510d4a | g_CGameInstance.delta_time_float
    MOV dword ptr [ESP],EDX             ; 00510d50
    PUSH 0x2f21590                      ; 00510d53 | CMoon g_CMoonInstance
    CALL core_moon.cpp_CMoon_update_FUN_00529d60 ; 00510d58 | void core_moon.cpp_CMoon_update_FUN_00529d60(CMoon * this_ptr, float delta_time)
        ;   XREF to: 00529d60 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00510d5d
    PUSH 0x2f21590                      ; 00510d60 | CMoon g_CMoonInstance
    CALL core_moon.cpp_CMoon_render_FUN_00529ed0 ; 00510d65 | void core_moon.cpp_CMoon_render_FUN_00529ed0(CMoon * this_ptr)
        ;   XREF to: 00529ed0 (UNCONDITIONAL_CALL)
    MOV ECX,dword ptr [0x02f275f8]      ; 00510d6a | int g_GraphicsCardCount
    ADD ESP,0x4                         ; 00510d70
    CMP EBX,ECX                         ; 00510d73
    JGE 0x00510f05                      ; 00510d75 | LAB_00510f05
        ;   XREF to: 00510f05 (CONDITIONAL_JUMP)
    CMP EBX,dword ptr [0x03f6b878]      ; 00510d7b | int g_FullscreenMode
    JZ 0x00510f05                       ; 00510d81 | LAB_00510f05
        ;   XREF to: 00510f05 (CONDITIONAL_JUMP)
    MOV EAX,[0x02f275f4]                ; 00510d87 | int g_GraphicsCardHandle
    SHL EAX,0x2                         ; 00510d8c
    CMP dword ptr [EAX + 0x2f2767c],0x121a ; 00510d8f | int[16] g_GraphicsCardVendorIDs
    JNZ 0x00511201                      ; 00510d99 | LAB_00511201
        ;   XREF to: 00511201 (CONDITIONAL_JUMP)
    CMP dword ptr [EAX + 0x2f276bc],0x5 ; 00510d9f | int[17] g_GraphicsCardDeviceIDs
    JG 0x00511201                       ; 00510da6 | LAB_00511201
        ;   XREF to: 00511201 (CONDITIONAL_JUMP)
    MOV EAX,[0x0067b654]                ; 00510dac | CGame g_CGameInstance | CGame * g_CGamePtr
    MOV dword ptr [EAX + 0x8],0x10      ; 00510db1 | DAT_02d81aa4
    PUSH 0x63679f                       ; 00510db8 | = "tri3dfx.dll" | s_tri3dfx_dll_0063679f = tri3dfx.dll
    MOV dword ptr [EAX],0x280           ; 00510dbd | CGame g_CGameInstance
    PUSH 0x684010                       ; 00510dc3 | = "trid3d.dll" | g_RendererDllName = trid3d.dll
    MOV dword ptr [EAX + 0x4],0x1e0     ; 00510dc8 | g_CGameInstance.game_pixy
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 00510dcf | int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00510dd4
    TEST EAX,EAX                        ; 00510dd7
    JZ 0x00510e60                       ; 00510dd9 | LAB_00510e60
        ;   XREF to: 00510e60 (CONDITIONAL_JUMP)
    MOV ESI,0x6367ab                    ; 00510ddf | = "tri3dfx.dll" | s_tri3dfx_dll_006367ab = tri3dfx.dll
    MOV EDI,0x684010                    ; 00510de4 | = "trid3d.dll" | g_RendererDllName = trid3d.dll
    PUSH EDI                            ; 00510de9 | = "trid3d.dll" | g_RendererDllName = trid3d.dll
    MOV AL,byte ptr [ESI]               ; 00510dea | = "tri3dfx.dll" | s_tri3dfx_dll_006367ab = tri3dfx.dll
        ;   Label: LAB_00510dea
    MOV byte ptr [EDI],AL               ; 00510dec | = "trid3d.dll" | g_RendererDllName = trid3d.dll
    CMP AL,0x0                          ; 00510dee
    JZ 0x00510e02                       ; 00510df0 | LAB_00510e02
        ;   XREF to: 00510e02 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 00510df2 | DAT_006367ac
    ADD ESI,0x2                         ; 00510df5
    MOV byte ptr [EDI + 0x1],AL         ; 00510df8 | DAT_00684011
    ADD EDI,0x2                         ; 00510dfb
    CMP AL,0x0                          ; 00510dfe
    JNZ 0x00510dea                      ; 00510e00 | LAB_00510dea
        ;   XREF to: 00510dea (CONDITIONAL_JUMP)
    POP EDI                             ; 00510e02
        ;   Label: LAB_00510e02
    CALL wincore_windll.cpp_kill_FUN_005b71e0 ; 00510e03 | int wincore_windll.cpp_kill_FUN_005b71e0()
        ;   XREF to: 005b71e0 (UNCONDITIONAL_CALL)
    PUSH EBX                            ; 00510e08
    CALL wincore_windll.cpp_loadExternalRenderer_FUN_005b6750 ; 00510e09 | int wincore_windll.cpp_loadExternalRenderer_FUN_005b6750(HWND window_handle)
        ;   XREF to: 005b6750 (UNCONDITIONAL_CALL)
    MOV ESI,dword ptr [0x03f6b878]      ; 00510e0e | int g_FullscreenMode
    ADD ESP,0x4                         ; 00510e14
    CMP EBX,ESI                         ; 00510e17
    JZ 0x005111f6                       ; 00510e19 | LAB_005111f6
        ;   XREF to: 005111f6 (CONDITIONAL_JUMP)
    PUSH 0x2f276bc                      ; 00510e1f | int[17] g_GraphicsCardDeviceIDs
        ;   Label: LAB_00510e1f
    PUSH 0x2f2767c                      ; 00510e24 | int[16] g_GraphicsCardVendorIDs
    PUSH 0x2f2763c                      ; 00510e29 | char *[16] g_GraphicsCardNames
    PUSH 0x2f275fc                      ; 00510e2e | char[64] g_GraphicsCardDriverData
    PUSH 0x2f275f8                      ; 00510e33 | int g_GraphicsCardCount
    CALL wincore_windll.cpp_buildCardList_FUN_005b7db0 ; 00510e38 | int wincore_windll.cpp_buildCardList_FUN_005b7db0(int * out_card_count, void * enum_data_buffer, char * * out_card_names, int * out_vendor_ids, ...)
        ;   XREF to: 005b7db0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 00510e3d
    LEA EAX,[ESP + 0x12c]               ; 00510e40
    PUSH EAX                            ; 00510e47
    LEA EAX,[ESP + 0x12c]               ; 00510e48
    PUSH EAX                            ; 00510e4f
    LEA EAX,[ESP + 0x12c]               ; 00510e50
    PUSH EAX                            ; 00510e57
    CALL wincore_windll.cpp_getVideoMemory_FUN_005b7d60 ; 00510e58 | int wincore_windll.cpp_getVideoMemory_FUN_005b7d60(int * total_memory, int * available_memory, int * memory_type)
        ;   XREF to: 005b7d60 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00510e5d
    MOV EAX,[0x02f275f4]                ; 00510e60 | int g_GraphicsCardHandle
        ;   Label: LAB_00510e60
    SHL EAX,0x2                         ; 00510e65
    CMP dword ptr [EAX + 0x2f2767c],0x8086 ; 00510e68 | int[16] g_GraphicsCardVendorIDs
    JNZ 0x00510e99                      ; 00510e72 | LAB_00510e99
        ;   XREF to: 00510e99 (CONDITIONAL_JUMP)
    CMP dword ptr [EAX + 0x2f276bc],0x7800 ; 00510e74 | int[17] g_GraphicsCardDeviceIDs
    JNZ 0x00510e99                      ; 00510e7e | LAB_00510e99
        ;   XREF to: 00510e99 (CONDITIONAL_JUMP)
    MOV EAX,[0x0067b654]                ; 00510e80 | CGame * g_CGamePtr
    MOV dword ptr [EAX + 0x8],0x10      ; 00510e85 | DAT_02d81aa4
    MOV dword ptr [EAX],0x280           ; 00510e8c | CGame g_CGameInstance
    MOV dword ptr [EAX + 0x4],0x1e0     ; 00510e92 | g_CGameInstance.game_pixy
    MOV EAX,[0x02f275f4]                ; 00510e99 | int g_GraphicsCardHandle
        ;   Label: LAB_00510e99
    SHL EAX,0x2                         ; 00510e9e
    CMP dword ptr [EAX + 0x2f2767c],0x12d2 ; 00510ea1 | int[16] g_GraphicsCardVendorIDs
    JNZ 0x00510ecf                      ; 00510eab | LAB_00510ecf
        ;   XREF to: 00510ecf (CONDITIONAL_JUMP)
    CMP dword ptr [EAX + 0x2f276bc],0x18 ; 00510ead | int[17] g_GraphicsCardDeviceIDs
    JNZ 0x00510ecf                      ; 00510eb4 | LAB_00510ecf
        ;   XREF to: 00510ecf (CONDITIONAL_JUMP)
    MOV EAX,[0x0067b654]                ; 00510eb6 | CGame * g_CGamePtr
    MOV dword ptr [EAX + 0x8],0x10      ; 00510ebb | DAT_02d81aa4
    MOV dword ptr [EAX],0x280           ; 00510ec2 | CGame g_CGameInstance
    MOV dword ptr [EAX + 0x4],0x1e0     ; 00510ec8 | g_CGameInstance.game_pixy
    MOV EAX,[0x02f275f4]                ; 00510ecf | int g_GraphicsCardHandle
        ;   Label: LAB_00510ecf
    SHL EAX,0x2                         ; 00510ed4
    CMP dword ptr [EAX + 0x2f2767c],0x12d2 ; 00510ed7 | int[16] g_GraphicsCardVendorIDs
    JNZ 0x00510f05                      ; 00510ee1 | LAB_00510f05
        ;   XREF to: 00510f05 (CONDITIONAL_JUMP)
    CMP dword ptr [EAX + 0x2f276bc],0x19 ; 00510ee3 | int[17] g_GraphicsCardDeviceIDs
    JNZ 0x00510f05                      ; 00510eea | LAB_00510f05
        ;   XREF to: 00510f05 (CONDITIONAL_JUMP)
    MOV EAX,[0x0067b654]                ; 00510eec | CGame * g_CGamePtr
    MOV dword ptr [EAX + 0x8],0x10      ; 00510ef1 | DAT_02d81aa4
    MOV dword ptr [EAX],0x280           ; 00510ef8 | CGame g_CGameInstance
    MOV dword ptr [EAX + 0x4],0x1e0     ; 00510efe | g_CGameInstance.game_pixy
    CMP EBX,dword ptr [0x03f6b878]      ; 00510f05 | int g_FullscreenMode
        ;   Label: LAB_00510f05
    JNZ 0x00510f28                      ; 00510f0b | LAB_00510f28
        ;   XREF to: 00510f28 (CONDITIONAL_JUMP)
    MOV EAX,[0x0067b654]                ; 00510f0d | CGame * g_CGamePtr
    CMP dword ptr [EAX + 0x4],0x1e0     ; 00510f12 | g_CGameInstance.game_pixy
    JLE 0x00510f28                      ; 00510f19 | LAB_00510f28
        ;   XREF to: 00510f28 (CONDITIONAL_JUMP)
    MOV dword ptr [EAX + 0x4],0x1e0     ; 00510f1b | g_CGameInstance.game_pixy
    MOV dword ptr [EAX],0x280           ; 00510f22 | CGame g_CGameInstance
    MOV EAX,[0x0067b654]                ; 00510f28 | CGame g_CGameInstance | CGame * g_CGamePtr
        ;   Label: LAB_00510f28
    MOV EDI,dword ptr [EAX + 0x4]       ; 00510f2d | g_CGameInstance.game_pixy
    CMP EDI,0xf0                        ; 00510f30
    JNZ 0x00511266                      ; 00510f36 | LAB_00511266
        ;   XREF to: 00511266 (CONDITIONAL_JUMP)
    PUSH 0x6367ce                       ; 00510f3c | = "Resolution : 320x240" | s_Resolution_320x240_006367ce = Resolution : 320x240
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00510f41 | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   Label: LAB_00510f41
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00510f46
    PUSH EAX                            ; 00510f49
    PUSH 0x2f26cd0                      ; 00510f4a | char[9][256] g_GraphicsMenuTextBuffers
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00510f4f | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00510f54
    MOV EAX,[0x0067b654]                ; 00510f57 | CGame * g_CGamePtr
    MOV EAX,dword ptr [EAX + 0xc]       ; 00510f5c | DAT_02d81aa8
    CMP EAX,0x1                         ; 00510f5f
    JNC 0x005112f0                      ; 00510f62 | LAB_005112f0
        ;   XREF to: 005112f0 (CONDITIONAL_JUMP)
    TEST EAX,EAX                        ; 00510f68
    JNZ 0x00510f87                      ; 00510f6a | LAB_00510f87
        ;   XREF to: 00510f87 (CONDITIONAL_JUMP)
    PUSH 0x636879                       ; 00510f6c | = "Flashlight halo : Off" | s_Flashlight_halo_Off_00636879 = Flashlight halo : Off
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00510f71 | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   Label: LAB_00510f71
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00510f76
    PUSH EAX                            ; 00510f79
    PUSH 0x2f26dd0                      ; 00510f7a | g_GraphicsMenuTextBuffers[1][0]
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00510f7f | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00510f84
    PUSH 0x6368c2                       ; 00510f87 | = "Acceleration disabled in editor" | s_Acceleration_disabled_in_006368c2 = Acceleration disabled in editor
        ;   Label: LAB_00510f87
    MOV dword ptr [0x03f6b878],EBX      ; 00510f8c | int g_FullscreenMode
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00510f92 | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00510f97
    PUSH EAX                            ; 00510f9a
    PUSH 0x2f26ed0                      ; 00510f9b | g_GraphicsMenuTextBuffers[2][0]
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00510fa0 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    MOV AH,byte ptr [0x00684010]        ; 00510fa5 | = "trid3d.dll" | g_RendererDllName = trid3d.dll
    ADD ESP,0x8                         ; 00510fab
    CMP BL,AH                           ; 00510fae
    JNZ 0x005112fc                      ; 00510fb0 | LAB_005112fc
        ;   XREF to: 005112fc (CONDITIONAL_JUMP)
    PUSH 0x6368e2                       ; 00510fb6 | = "3D API : None" | s_s_3D_API_None_006368e2 = 3D API : None
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00510fbb | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   Label: LAB_00510fbb
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00510fc0
    PUSH EAX                            ; 00510fc3
    PUSH 0x2f26fd0                      ; 00510fc4 | g_GraphicsMenuTextBuffers[3][0]
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00510fc9 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00510fce
    CMP EBX,dword ptr [0x02f275f8]      ; 00510fd1 | int g_GraphicsCardCount
    JNZ 0x00511376                      ; 00510fd7 | LAB_00511376
        ;   XREF to: 00511376 (CONDITIONAL_JUMP)
    PUSH 0x636985                       ; 00510fdd | = "No 3D Hardware detected" | s_No_3D_Hardware_detected_00636985 = No 3D Hardware detected
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00510fe2 | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00510fe7
    PUSH EAX                            ; 00510fea
    PUSH 0x2f270d0                      ; 00510feb | g_GraphicsMenuTextBuffers[4][0]
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00510ff0 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00510ff5
    PUSH 0x6369ae                       ; 00510ff8 | = "Bits per pixel : " | s_Bits_per_pixel_006369ae = Bits per pixel :
        ;   Label: LAB_00510ff8
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00510ffd | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00511002
    MOV EDI,0x2f271d0                   ; 00511005 | g_GraphicsMenuTextBuffers[5][0]
    MOV ESI,EAX                         ; 0051100a
    PUSH EDI                            ; 0051100c | g_GraphicsMenuTextBuffers[5][0]
    MOV AL,byte ptr [ESI]               ; 0051100d
        ;   Label: LAB_0051100d
    MOV byte ptr [EDI],AL               ; 0051100f | g_GraphicsMenuTextBuffers[5][0]
    CMP AL,0x0                          ; 00511011
    JZ 0x00511025                       ; 00511013 | LAB_00511025
        ;   XREF to: 00511025 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 00511015
    ADD ESI,0x2                         ; 00511018
    MOV byte ptr [EDI + 0x1],AL         ; 0051101b | DAT_02f271d1
    ADD EDI,0x2                         ; 0051101e
    CMP AL,0x0                          ; 00511021
    JNZ 0x0051100d                      ; 00511023 | LAB_0051100d
        ;   XREF to: 0051100d (CONDITIONAL_JUMP)
    POP EDI                             ; 00511025
        ;   Label: LAB_00511025
    MOV EAX,[0x0067b654]                ; 00511026 | CGame * g_CGamePtr
    MOV EDX,dword ptr [EAX + 0x8]       ; 0051102b | DAT_02d81aa4
    PUSH EDX                            ; 0051102e
    PUSH 0x6369c0                       ; 0051102f | = "%d" | s_d_006369c0 = %d
    LEA EAX,[ESP + 0x8]                 ; 00511034
    PUSH EAX                            ; 00511038
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00511039 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0051103e
    MOV ESI,ESP                         ; 00511041
    PUSH EDI                            ; 00511043 | g_GraphicsMenuTextBuffers[5][0]
    SUB ECX,ECX                         ; 00511044
    DEC ECX                             ; 00511046
    MOV AL,0x0                          ; 00511047
    SCASB.REPNE ES:EDI                  ; 00511049 | g_GraphicsMenuTextBuffers[5][0]
    DEC EDI                             ; 0051104b
    MOV AL,byte ptr [ESI]               ; 0051104c
        ;   Label: LAB_0051104c
    MOV byte ptr [EDI],AL               ; 0051104e | g_GraphicsMenuTextBuffers[5][0]
    CMP AL,0x0                          ; 00511050
    JZ 0x00511064                       ; 00511052 | LAB_00511064
        ;   XREF to: 00511064 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 00511054
    ADD ESI,0x2                         ; 00511057
    MOV byte ptr [EDI + 0x1],AL         ; 0051105a | DAT_02f271d1
    ADD EDI,0x2                         ; 0051105d
    CMP AL,0x0                          ; 00511060
    JNZ 0x0051104c                      ; 00511062 | LAB_0051104c
        ;   XREF to: 0051104c (CONDITIONAL_JUMP)
    POP EDI                             ; 00511064
        ;   Label: LAB_00511064
    PUSH 0x6369c3                       ; 00511065 | = "Monitor calibration" | s_Monitor_calibration_006369c3 = Monitor calibration
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 0051106a | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0051106f
    PUSH EAX                            ; 00511072
    PUSH 0x2f272d0                      ; 00511073 | g_GraphicsMenuTextBuffers[6][0]
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00511078 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    MOV EAX,[0x0067b654]                ; 0051107d | CGame g_CGameInstance | CGame * g_CGamePtr
    MOV ECX,dword ptr [EAX + 0x10]      ; 00511082 | DAT_02d81aac
    ADD ESP,0x8                         ; 00511085
    CMP EBX,ECX                         ; 00511088
    JZ 0x00511422                       ; 0051108a | LAB_00511422
        ;   XREF to: 00511422 (CONDITIONAL_JUMP)
    PUSH 0x6369d7                       ; 00511090 | = "Subtitles : On" | s_Subtitles_On_006369d7 = Subtitles : On
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00511095 | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   Label: LAB_00511095
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0051109a
    MOV EDI,0x2f273d0                   ; 0051109d | g_GraphicsMenuTextBuffers[7][0]
    MOV ESI,EAX                         ; 005110a2
    PUSH EDI                            ; 005110a4 | g_GraphicsMenuTextBuffers[7][0]
    MOV AL,byte ptr [ESI]               ; 005110a5
        ;   Label: LAB_005110a5
    MOV byte ptr [EDI],AL               ; 005110a7 | g_GraphicsMenuTextBuffers[7][0]
    CMP AL,0x0                          ; 005110a9
    JZ 0x005110bd                       ; 005110ab | LAB_005110bd
        ;   XREF to: 005110bd (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 005110ad
    ADD ESI,0x2                         ; 005110b0
    MOV byte ptr [EDI + 0x1],AL         ; 005110b3 | DAT_02f273d1
    ADD EDI,0x2                         ; 005110b6
    CMP AL,0x0                          ; 005110b9
    JNZ 0x005110a5                      ; 005110bb | LAB_005110a5
        ;   XREF to: 005110a5 (CONDITIONAL_JUMP)
    POP EDI                             ; 005110bd
        ;   Label: LAB_005110bd
    MOV EAX,[0x0067b654]                ; 005110be | CGame * g_CGamePtr
    MOV ESI,dword ptr [EAX + 0x20]      ; 005110c3 | DAT_02d81abc
    CMP EBX,ESI                         ; 005110c6
    JZ 0x0051142c                       ; 005110c8 | LAB_0051142c
        ;   XREF to: 0051142c (CONDITIONAL_JUMP)
    MOV EAX,[0x0067b654]                ; 005110ce | CGame g_CGameInstance | CGame * g_CGamePtr
        ;   Label: LAB_005110ce
    MOV EDX,dword ptr [EAX + 0x20]      ; 005110d3 | DAT_02d81abc
    MOV ESI,0x9                         ; 005110d6
    CMP EBX,EDX                         ; 005110db
    JZ 0x005110e4                       ; 005110dd | LAB_005110e4
        ;   XREF to: 005110e4 (CONDITIONAL_JUMP)
    MOV ESI,0x8                         ; 005110df
    PUSH 0x636a12                       ; 005110e4 | = "Graphic Options" | s_Graphic_Options_00636a12 = Graphic Options
        ;   Label: LAB_005110e4
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 005110e9 | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005110ee
    PUSH EAX                            ; 005110f1
    PUSH 0xfa                           ; 005110f2
    LEA EAX,[ESP + 0x128]               ; 005110f7
    PUSH EAX                            ; 005110fe
    PUSH ESI                            ; 005110ff
    PUSH 0x2f275d0                      ; 00511100 | char *[9] g_GraphicsMenuTextPointers
    CALL core_menu.cpp_renderMenuAndGetChoice_FUN_00510000 ; 00511105 | int core_menu.cpp_renderMenuAndGetChoice_FUN_00510000(char * * menu_text_array, int menu_count, int * selected_index_ptr, int y_position, ...)
        ;   XREF to: 00510000 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 0051110a
    MOV ESI,EAX                         ; 0051110d
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0051110f | void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)
    PUSH 0x636a22                       ; 00511114 | = "trid3d.dll" | s_trid3d_dll_00636a22 = trid3d.dll
    PUSH EBP                            ; 00511119 | = "trid3d.dll" | g_RendererDllName = trid3d.dll
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 0051111a | int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0051111f
    XOR EDX,EDX                         ; 00511122
    TEST EAX,EAX                        ; 00511124
    SETZ AL                             ; 00511126
    MOV DL,AL                           ; 00511129
    MOV EAX,EDX                         ; 0051112b
    TEST EDX,EDX                        ; 0051112d
    JZ 0x0051114d                       ; 0051112f | LAB_0051114d
        ;   XREF to: 0051114d (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [0x0067b654]      ; 00511131 | CGame g_CGameInstance | CGame * g_CGamePtr
    CMP dword ptr [EDX + 0x4],0x1e0     ; 00511137 | g_CGameInstance.game_pixy
    JLE 0x0051114d                      ; 0051113e | LAB_0051114d
        ;   XREF to: 0051114d (CONDITIONAL_JUMP)
    MOV dword ptr [EDX + 0x4],0x1e0     ; 00511140 | g_CGameInstance.game_pixy
    MOV dword ptr [EDX],0x280           ; 00511147 | CGame g_CGameInstance
    CMP ESI,0x8                         ; 0051114d
        ;   Label: LAB_0051114d
    JA 0x005111d3                       ; 00511150 | default
        ;   XREF to: 005111d3 (CONDITIONAL_JUMP)
    JMP dword ptr [ESI*0x4 + 0x510c50]  ; 00511156 | void * switchdataD_00510c50
        ;   Label: switchD
    CMP dword ptr [0x02f26cac],0x1      ; 0051115d | int g_MenuLeftRightPressed
        ;   Label: caseD_0
    JNZ 0x0051152f                      ; 00511164 | LAB_0051152f
        ;   XREF to: 0051152f (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [0x0067b654]      ; 0051116a | CGame * g_CGamePtr
    CMP dword ptr [EDX + 0x4],0xf0      ; 00511170 | g_CGameInstance.game_pixy
    JNZ 0x0051118e                      ; 00511177 | LAB_0051118e
        ;   XREF to: 0051118e (CONDITIONAL_JUMP)
    CMP dword ptr [ESP + 0x124],0x16e3600 ; 00511179 | DAT_016e3600
    JLE 0x0051118e                      ; 00511184 | LAB_0051118e
        ;   XREF to: 0051118e (CONDITIONAL_JUMP)
    TEST EAX,EAX                        ; 00511186
    JZ 0x00511497                       ; 00511188 | LAB_00511497
        ;   XREF to: 00511497 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [0x0067b654]      ; 0051118e | CGame * g_CGamePtr
        ;   Label: LAB_0051118e
    CMP dword ptr [EDX + 0x4],0xf0      ; 00511194 | g_CGameInstance.game_pixy
    JNZ 0x005111b2                      ; 0051119b | LAB_005111b2
        ;   XREF to: 005111b2 (CONDITIONAL_JUMP)
    CMP dword ptr [ESP + 0x124],0xb71b00 ; 0051119d | DAT_00b71b00
    JLE 0x005111b2                      ; 005111a8 | LAB_005111b2
        ;   XREF to: 005111b2 (CONDITIONAL_JUMP)
    TEST EAX,EAX                        ; 005111aa
    JZ 0x005114a9                       ; 005111ac | LAB_005114a9
        ;   XREF to: 005114a9 (CONDITIONAL_JUMP)
    MOV EAX,[0x0067b654]                ; 005111b2 | CGame * g_CGamePtr
        ;   Label: LAB_005111b2
    MOV EDI,dword ptr [EAX + 0x4]       ; 005111b7 | g_CGameInstance.game_pixy
    CMP EDI,0xf0                        ; 005111ba
    JNZ 0x005114bb                      ; 005111c0 | LAB_005114bb
        ;   XREF to: 005114bb (CONDITIONAL_JUMP)
    MOV dword ptr [EAX + 0x4],0x1e0     ; 005111c6 | g_CGameInstance.game_pixy
        ;   Label: LAB_005111c6
    MOV dword ptr [EAX],0x280           ; 005111cd | CGame g_CGameInstance
    PUSH 0x1                            ; 005111d3
        ;   Label: default
    MOV EAX,[0x0067cf44]                ; 005111d5 | CKeys * g_CKeysPtr
    PUSH EAX                            ; 005111da | void * g_CKeysPtr
    MOV EDX,dword ptr [EAX]             ; 005111db | void * g_CKeysPtr
    CALL dword ptr [EDX + 0x4]          ; 005111dd
    ADD ESP,0x8                         ; 005111e0
    TEST EAX,EAX                        ; 005111e3
    JZ 0x00510d33                       ; 005111e5 | LAB_00510d33
        ;   XREF to: 00510d33 (CONDITIONAL_JUMP)
    ADD ESP,0x130                       ; 005111eb
    POP EBP                             ; 005111f1
    POP EDI                             ; 005111f2
    POP ESI                             ; 005111f3
    POP EBX                             ; 005111f4
    RET                                 ; 005111f5
    MOV dword ptr [0x02f275f8],ESI      ; 005111f6 | int g_GraphicsCardCount
        ;   Label: LAB_005111f6
    JMP 0x00510e60                      ; 005111fc | LAB_00510e60
        ;   XREF to: 00510e60 (UNCONDITIONAL_JUMP)
    PUSH 0x6367b7                       ; 00511201 | = "tri3dfx.dll" | s_tri3dfx_dll_006367b7 = tri3dfx.dll
        ;   Label: LAB_00511201
    PUSH 0x684010                       ; 00511206 | = "trid3d.dll" | g_RendererDllName = trid3d.dll
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 0051120b | int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00511210
    TEST EAX,EAX                        ; 00511213
    JNZ 0x00510e60                      ; 00511215 | LAB_00510e60
        ;   XREF to: 00510e60 (CONDITIONAL_JUMP)
    MOV ESI,0x6367c3                    ; 0051121b | = "tridx6.dll" | s_tridx6_dll_006367c3 = tridx6.dll
    MOV EDI,0x684010                    ; 00511220 | = "trid3d.dll" | g_RendererDllName = trid3d.dll
    PUSH EDI                            ; 00511225 | = "trid3d.dll" | g_RendererDllName = trid3d.dll
    MOV AL,byte ptr [ESI]               ; 00511226 | = "tridx6.dll" | s_tridx6_dll_006367c3 = tridx6.dll
        ;   Label: LAB_00511226
    MOV byte ptr [EDI],AL               ; 00511228 | = "trid3d.dll" | g_RendererDllName = trid3d.dll
    CMP AL,0x0                          ; 0051122a
    JZ 0x0051123e                       ; 0051122c | LAB_0051123e
        ;   XREF to: 0051123e (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 0051122e | s_ridx6.dll_006367c4
    ADD ESI,0x2                         ; 00511231
    MOV byte ptr [EDI + 0x1],AL         ; 00511234 | DAT_00684011
    ADD EDI,0x2                         ; 00511237
    CMP AL,0x0                          ; 0051123a
    JNZ 0x00511226                      ; 0051123c | LAB_00511226
        ;   XREF to: 00511226 (CONDITIONAL_JUMP)
    POP EDI                             ; 0051123e
        ;   Label: LAB_0051123e
    CALL wincore_windll.cpp_kill_FUN_005b71e0 ; 0051123f | int wincore_windll.cpp_kill_FUN_005b71e0()
        ;   XREF to: 005b71e0 (UNCONDITIONAL_CALL)
    PUSH EBX                            ; 00511244
    CALL wincore_windll.cpp_loadExternalRenderer_FUN_005b6750 ; 00511245 | int wincore_windll.cpp_loadExternalRenderer_FUN_005b6750(HWND window_handle)
        ;   XREF to: 005b6750 (UNCONDITIONAL_CALL)
    MOV ECX,dword ptr [0x03f6b878]      ; 0051124a | int g_FullscreenMode
    ADD ESP,0x4                         ; 00511250
    CMP EBX,ECX                         ; 00511253
    JNZ 0x00510e1f                      ; 00511255 | LAB_00510e1f
        ;   XREF to: 00510e1f (CONDITIONAL_JUMP)
    MOV dword ptr [0x02f275f8],ECX      ; 0051125b | int g_GraphicsCardCount
    JMP 0x00510e60                      ; 00511261 | LAB_00510e60
        ;   XREF to: 00510e60 (UNCONDITIONAL_JUMP)
    CMP EDI,0x12c                       ; 00511266
        ;   Label: LAB_00511266
    JZ 0x005112a0                       ; 0051126c | LAB_005112a0
        ;   XREF to: 005112a0 (CONDITIONAL_JUMP)
    CMP EDI,0x180                       ; 0051126e
    JZ 0x005112aa                       ; 00511274 | LAB_005112aa
        ;   XREF to: 005112aa (CONDITIONAL_JUMP)
    CMP EDI,0x1e0                       ; 00511276
    JZ 0x005112b4                       ; 0051127c | LAB_005112b4
        ;   XREF to: 005112b4 (CONDITIONAL_JUMP)
    CMP EDI,0x258                       ; 0051127e
    JZ 0x005112be                       ; 00511284 | LAB_005112be
        ;   XREF to: 005112be (CONDITIONAL_JUMP)
    CMP EDI,0x300                       ; 00511286
    JZ 0x005112c8                       ; 0051128c | LAB_005112c8
        ;   XREF to: 005112c8 (CONDITIONAL_JUMP)
    CMP EDI,0x400                       ; 0051128e
    JNZ 0x005112d2                      ; 00511294 | LAB_005112d2
        ;   XREF to: 005112d2 (CONDITIONAL_JUMP)
    PUSH 0x63684d                       ; 00511296 | = "Resolution : 1280x1024" | s_Resolution_1280x1024_0063684d = Resolution : 1280x1024
    JMP 0x00510f41                      ; 0051129b | LAB_00510f41
        ;   XREF to: 00510f41 (UNCONDITIONAL_JUMP)
    PUSH 0x6367e3                       ; 005112a0 | = "Resolution : 400x300" | s_Resolution_400x300_006367e3 = Resolution : 400x300
        ;   Label: LAB_005112a0
    JMP 0x00510f41                      ; 005112a5 | LAB_00510f41
        ;   XREF to: 00510f41 (UNCONDITIONAL_JUMP)
    PUSH 0x6367f8                       ; 005112aa | = "Resolution : 512x384" | s_Resolution_512x384_006367f8 = Resolution : 512x384
        ;   Label: LAB_005112aa
    JMP 0x00510f41                      ; 005112af | LAB_00510f41
        ;   XREF to: 00510f41 (UNCONDITIONAL_JUMP)
    PUSH 0x63680d                       ; 005112b4 | = "Resolution : 640x480" | s_Resolution_640x480_0063680d = Resolution : 640x480
        ;   Label: LAB_005112b4
    JMP 0x00510f41                      ; 005112b9 | LAB_00510f41
        ;   XREF to: 00510f41 (UNCONDITIONAL_JUMP)
    PUSH 0x636822                       ; 005112be | = "Resolution : 800x600" | s_Resolution_800x600_00636822 = Resolution : 800x600
        ;   Label: LAB_005112be
    JMP 0x00510f41                      ; 005112c3 | LAB_00510f41
        ;   XREF to: 00510f41 (UNCONDITIONAL_JUMP)
    PUSH 0x636837                       ; 005112c8 | = "Resolution : 1024x768" | s_Resolution_1024x768_00636837 = Resolution : 1024x768
        ;   Label: LAB_005112c8
    JMP 0x00510f41                      ; 005112cd | LAB_00510f41
        ;   XREF to: 00510f41 (UNCONDITIONAL_JUMP)
    PUSH 0x636864                       ; 005112d2 | = "Resolution : 320x240" | s_Resolution_320x240_00636864 = Resolution : 320x240
        ;   Label: LAB_005112d2
    JMP 0x00510f41                      ; 005112d7 | LAB_00510f41
        ;   XREF to: 00510f41 (UNCONDITIONAL_JUMP)
    PUSH 0x63688f                       ; 005112dc | = "Flashlight halo : Simple" | s_Flashlight_halo_Simple_0063688f = Flashlight halo : Simple
        ;   Label: LAB_005112dc
    JMP 0x00510f71                      ; 005112e1 | LAB_00510f71
        ;   XREF to: 00510f71 (UNCONDITIONAL_JUMP)
    PUSH 0x6368a8                       ; 005112e6 | = "Flashlight halo : Complex" | s_Flashlight_halo_Complex_006368a8 = Flashlight halo : Complex
        ;   Label: LAB_005112e6
    JMP 0x00510f71                      ; 005112eb | LAB_00510f71
        ;   XREF to: 00510f71 (UNCONDITIONAL_JUMP)
    JBE 0x005112dc                      ; 005112f0 | LAB_005112dc
        ;   Label: LAB_005112f0
        ;   XREF to: 005112dc (CONDITIONAL_JUMP)
    CMP EAX,0x2                         ; 005112f2
    JZ 0x005112e6                       ; 005112f5 | LAB_005112e6
        ;   XREF to: 005112e6 (CONDITIONAL_JUMP)
    JMP 0x00510f87                      ; 005112f7 | LAB_00510f87
        ;   XREF to: 00510f87 (UNCONDITIONAL_JUMP)
    PUSH 0x6368f0                       ; 005112fc | = "trid3d.dll" | s_trid3d_dll_006368f0 = trid3d.dll
        ;   Label: LAB_005112fc
    PUSH EBP                            ; 00511301 | = "trid3d.dll" | g_RendererDllName = trid3d.dll
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 00511302 | int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00511307
    TEST EAX,EAX                        ; 0051130a
    JNZ 0x00511318                      ; 0051130c | LAB_00511318
        ;   XREF to: 00511318 (CONDITIONAL_JUMP)
    PUSH 0x6368fb                       ; 0051130e | = "3D API : DirectX 5" | s_s_3D_API_DirectX_5_006368fb = 3D API : DirectX 5
    JMP 0x00510fbb                      ; 00511313 | LAB_00510fbb
        ;   XREF to: 00510fbb (UNCONDITIONAL_JUMP)
    PUSH 0x63690e                       ; 00511318 | = "tridx6.dll" | s_tridx6_dll_0063690e = tridx6.dll
        ;   Label: LAB_00511318
    PUSH EBP                            ; 0051131d | = "trid3d.dll" | g_RendererDllName = trid3d.dll
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 0051131e | int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00511323
    TEST EAX,EAX                        ; 00511326
    JNZ 0x00511334                      ; 00511328 | LAB_00511334
        ;   XREF to: 00511334 (CONDITIONAL_JUMP)
    PUSH 0x636919                       ; 0051132a | = "3D API : DirectX 6" | s_s_3D_API_DirectX_6_00636919 = 3D API : DirectX 6
    JMP 0x00510fbb                      ; 0051132f | LAB_00510fbb
        ;   XREF to: 00510fbb (UNCONDITIONAL_JUMP)
    PUSH 0x63692c                       ; 00511334 | = "tridx7.dll" | s_tridx7_dll_0063692c = tridx7.dll
        ;   Label: LAB_00511334
    PUSH EBP                            ; 00511339 | = "trid3d.dll" | g_RendererDllName = trid3d.dll
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 0051133a | int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0051133f
    TEST EAX,EAX                        ; 00511342
    JNZ 0x00511350                      ; 00511344 | LAB_00511350
        ;   XREF to: 00511350 (CONDITIONAL_JUMP)
    PUSH 0x636937                       ; 00511346 | = "3D API : DirectX 7" | s_s_3D_API_DirectX_7_00636937 = 3D API : DirectX 7
    JMP 0x00510fbb                      ; 0051134b | LAB_00510fbb
        ;   XREF to: 00510fbb (UNCONDITIONAL_JUMP)
    PUSH 0x63694a                       ; 00511350 | = "tri3dfx.dll" | s_tri3dfx_dll_0063694a = tri3dfx.dll
        ;   Label: LAB_00511350
    PUSH EBP                            ; 00511355 | = "trid3d.dll" | g_RendererDllName = trid3d.dll
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 00511356 | int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0051135b
    TEST EAX,EAX                        ; 0051135e
    JNZ 0x0051136c                      ; 00511360 | LAB_0051136c
        ;   XREF to: 0051136c (CONDITIONAL_JUMP)
    PUSH 0x636956                       ; 00511362 | = "3D API : Voodoo Blit Emulation" | s_s_3D_API_Voodoo_Blit_Emu_00636956 = 3D API : Voodoo Blit Emulation
    JMP 0x00510fbb                      ; 00511367 | LAB_00510fbb
        ;   XREF to: 00510fbb (UNCONDITIONAL_JUMP)
    PUSH 0x636975                       ; 0051136c | = "3D API : Custom" | s_s_3D_API_Custom_00636975 = 3D API : Custom
        ;   Label: LAB_0051136c
    JMP 0x00510fbb                      ; 00511371 | LAB_00510fbb
        ;   XREF to: 00510fbb (UNCONDITIONAL_JUMP)
    PUSH 0x63699d                       ; 00511376 | = "3D Card : " | s_s_3D_Card_0063699d = 3D Card :
        ;   Label: LAB_00511376
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 0051137b | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00511380
    MOV EDI,0x2f270d0                   ; 00511383 | g_GraphicsMenuTextBuffers[4][0]
    MOV ESI,EAX                         ; 00511388
    PUSH EDI                            ; 0051138a | g_GraphicsMenuTextBuffers[4][0]
    MOV AL,byte ptr [ESI]               ; 0051138b
        ;   Label: LAB_0051138b
    MOV byte ptr [EDI],AL               ; 0051138d | g_GraphicsMenuTextBuffers[4][0]
    CMP AL,0x0                          ; 0051138f
    JZ 0x005113a3                       ; 00511391 | LAB_005113a3
        ;   XREF to: 005113a3 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 00511393
    ADD ESI,0x2                         ; 00511396
    MOV byte ptr [EDI + 0x1],AL         ; 00511399 | DAT_02f270d1
    ADD EDI,0x2                         ; 0051139c
    CMP AL,0x0                          ; 0051139f
    JNZ 0x0051138b                      ; 005113a1 | LAB_0051138b
        ;   XREF to: 0051138b (CONDITIONAL_JUMP)
    POP EDI                             ; 005113a3
        ;   Label: LAB_005113a3
    MOV ESI,dword ptr [0x02f275f4]      ; 005113a4 | int g_GraphicsCardHandle
    MOV ESI,dword ptr [ESI*0x4 + 0x2f2763c] ; 005113aa | char *[16] g_GraphicsCardNames
    PUSH EDI                            ; 005113b1 | g_GraphicsMenuTextBuffers[4][0]
    SUB ECX,ECX                         ; 005113b2
    DEC ECX                             ; 005113b4
    MOV AL,0x0                          ; 005113b5
    SCASB.REPNE ES:EDI                  ; 005113b7 | g_GraphicsMenuTextBuffers[4][0]
    DEC EDI                             ; 005113b9
    MOV AL,byte ptr [ESI]               ; 005113ba
        ;   Label: LAB_005113ba
    MOV byte ptr [EDI],AL               ; 005113bc | g_GraphicsMenuTextBuffers[4][0]
    CMP AL,0x0                          ; 005113be
    JZ 0x005113d2                       ; 005113c0 | LAB_005113d2
        ;   XREF to: 005113d2 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 005113c2
    ADD ESI,0x2                         ; 005113c5
    MOV byte ptr [EDI + 0x1],AL         ; 005113c8 | DAT_02f270d1
    ADD EDI,0x2                         ; 005113cb
    CMP AL,0x0                          ; 005113ce
    JNZ 0x005113ba                      ; 005113d0 | LAB_005113ba
        ;   XREF to: 005113ba (CONDITIONAL_JUMP)
    POP EDI                             ; 005113d2
        ;   Label: LAB_005113d2
    MOV EDI,dword ptr [0x02f275f4]      ; 005113d3 | int g_GraphicsCardHandle
    PUSH EDI                            ; 005113d9
    PUSH 0x6369a8                       ; 005113da | = " (%d)" | s_d_006369a8 =  (%d)
    LEA EAX,[ESP + 0x108]               ; 005113df
    PUSH EAX                            ; 005113e6
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 005113e7 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005113ec
    LEA ESI,[ESP + 0x100]               ; 005113ef
    MOV EDI,0x2f270d0                   ; 005113f6 | g_GraphicsMenuTextBuffers[4][0]
    PUSH EDI                            ; 005113fb | g_GraphicsMenuTextBuffers[4][0]
    SUB ECX,ECX                         ; 005113fc
    DEC ECX                             ; 005113fe
    MOV AL,0x0                          ; 005113ff
    SCASB.REPNE ES:EDI                  ; 00511401 | g_GraphicsMenuTextBuffers[4][0]
    DEC EDI                             ; 00511403
    MOV AL,byte ptr [ESI]               ; 00511404
        ;   Label: LAB_00511404
    MOV byte ptr [EDI],AL               ; 00511406 | g_GraphicsMenuTextBuffers[4][0]
    CMP AL,0x0                          ; 00511408
    JZ 0x0051141c                       ; 0051140a | LAB_0051141c
        ;   XREF to: 0051141c (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 0051140c
    ADD ESI,0x2                         ; 0051140f
    MOV byte ptr [EDI + 0x1],AL         ; 00511412 | DAT_02f270d1
    ADD EDI,0x2                         ; 00511415
    CMP AL,0x0                          ; 00511418
    JNZ 0x00511404                      ; 0051141a | LAB_00511404
        ;   XREF to: 00511404 (CONDITIONAL_JUMP)
    POP EDI                             ; 0051141c
        ;   Label: LAB_0051141c
    JMP 0x00510ff8                      ; 0051141d | LAB_00510ff8
        ;   XREF to: 00510ff8 (UNCONDITIONAL_JUMP)
    PUSH 0x6369e6                       ; 00511422 | = "Subtitles : Off" | s_Subtitles_Off_006369e6 = Subtitles : Off
        ;   Label: LAB_00511422
    JMP 0x00511095                      ; 00511427 | LAB_00511095
        ;   XREF to: 00511095 (UNCONDITIONAL_JUMP)
    CMP ESI,dword ptr [EAX + 0x18]      ; 0051142c | g_CGameInstance.nudity_flag
        ;   Label: LAB_0051142c
    JZ 0x00511464                       ; 0051142f | LAB_00511464
        ;   XREF to: 00511464 (CONDITIONAL_JUMP)
    PUSH 0x6369f6                       ; 00511431 | = "Rating: Mature" | s_Rating_Mature_006369f6 = Rating: Mature
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00511436 | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0051143b
    MOV EDI,0x2f274d0                   ; 0051143e | g_GraphicsMenuTextBuffers[8][0]
    MOV ESI,EAX                         ; 00511443
    PUSH EDI                            ; 00511445 | g_GraphicsMenuTextBuffers[8][0]
    MOV AL,byte ptr [ESI]               ; 00511446
        ;   Label: LAB_00511446
    MOV byte ptr [EDI],AL               ; 00511448 | g_GraphicsMenuTextBuffers[8][0]
    CMP AL,0x0                          ; 0051144a
    JZ 0x0051145e                       ; 0051144c | LAB_0051145e
        ;   XREF to: 0051145e (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 0051144e
    ADD ESI,0x2                         ; 00511451
    MOV byte ptr [EDI + 0x1],AL         ; 00511454 | DAT_02f274d1
    ADD EDI,0x2                         ; 00511457
    CMP AL,0x0                          ; 0051145a
    JNZ 0x00511446                      ; 0051145c | LAB_00511446
        ;   XREF to: 00511446 (CONDITIONAL_JUMP)
    POP EDI                             ; 0051145e
        ;   Label: LAB_0051145e
    JMP 0x005110ce                      ; 0051145f | LAB_005110ce
        ;   XREF to: 005110ce (UNCONDITIONAL_JUMP)
    PUSH 0x636a05                       ; 00511464 | = "Rating: Teen" | s_Rating_Teen_00636a05 = Rating: Teen
        ;   Label: LAB_00511464
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00511469 | char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0051146e
    MOV EDI,0x2f274d0                   ; 00511471 | g_GraphicsMenuTextBuffers[8][0]
    MOV ESI,EAX                         ; 00511476
    PUSH EDI                            ; 00511478 | g_GraphicsMenuTextBuffers[8][0]
    MOV AL,byte ptr [ESI]               ; 00511479
        ;   Label: LAB_00511479
    MOV byte ptr [EDI],AL               ; 0051147b | g_GraphicsMenuTextBuffers[8][0]
    CMP AL,0x0                          ; 0051147d
    JZ 0x00511491                       ; 0051147f | LAB_00511491
        ;   XREF to: 00511491 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 00511481
    ADD ESI,0x2                         ; 00511484
    MOV byte ptr [EDI + 0x1],AL         ; 00511487 | DAT_02f274d1
    ADD EDI,0x2                         ; 0051148a
    CMP AL,0x0                          ; 0051148d
    JNZ 0x00511479                      ; 0051148f | LAB_00511479
        ;   XREF to: 00511479 (CONDITIONAL_JUMP)
    POP EDI                             ; 00511491
        ;   Label: LAB_00511491
    JMP 0x005110ce                      ; 00511492 | LAB_005110ce
        ;   XREF to: 005110ce (UNCONDITIONAL_JUMP)
    MOV dword ptr [EDX],0x500           ; 00511497 | CGame g_CGameInstance
        ;   Label: LAB_00511497
    MOV dword ptr [EDX + 0x4],0x400     ; 0051149d | g_CGameInstance.game_pixy
    JMP 0x005111d3                      ; 005114a4 | default
        ;   XREF to: 005111d3 (UNCONDITIONAL_JUMP)
    MOV dword ptr [EDX + 0x4],0x300     ; 005114a9 | g_CGameInstance.game_pixy
        ;   Label: LAB_005114a9
    MOV dword ptr [EDX],0x400           ; 005114b0 | CGame g_CGameInstance
    JMP 0x005111d3                      ; 005114b6 | default
        ;   XREF to: 005111d3 (UNCONDITIONAL_JUMP)
    CMP EDI,0x12c                       ; 005114bb
        ;   Label: LAB_005114bb
    JNZ 0x005114d5                      ; 005114c1 | LAB_005114d5
        ;   XREF to: 005114d5 (CONDITIONAL_JUMP)
    MOV dword ptr [EAX + 0x4],0xf0      ; 005114c3 | g_CGameInstance.game_pixy
    MOV dword ptr [EAX],0x140           ; 005114ca | CGame g_CGameInstance
    JMP 0x005111d3                      ; 005114d0 | default
        ;   XREF to: 005111d3 (UNCONDITIONAL_JUMP)
    CMP EDI,0x180                       ; 005114d5
        ;   Label: LAB_005114d5
    JNZ 0x005114ef                      ; 005114db | LAB_005114ef
        ;   XREF to: 005114ef (CONDITIONAL_JUMP)
    MOV dword ptr [EAX + 0x4],0xf0      ; 005114dd | g_CGameInstance.game_pixy
        ;   Label: LAB_005114dd
    MOV dword ptr [EAX],0x140           ; 005114e4 | CGame g_CGameInstance
    JMP 0x005111d3                      ; 005114ea | default
        ;   XREF to: 005111d3 (UNCONDITIONAL_JUMP)
    CMP EDI,0x1e0                       ; 005114ef
        ;   Label: LAB_005114ef
    JNZ 0x00511509                      ; 005114f5 | LAB_00511509
        ;   XREF to: 00511509 (CONDITIONAL_JUMP)
    MOV dword ptr [EAX + 0x4],0x180     ; 005114f7 | g_CGameInstance.game_pixy
    MOV dword ptr [EAX],0x200           ; 005114fe | CGame g_CGameInstance
    JMP 0x005111d3                      ; 00511504 | default
        ;   XREF to: 005111d3 (UNCONDITIONAL_JUMP)
    CMP EDI,0x258                       ; 00511509
        ;   Label: LAB_00511509
    JZ 0x005111c6                       ; 0051150f | LAB_005111c6
        ;   XREF to: 005111c6 (CONDITIONAL_JUMP)
    CMP EDI,0x300                       ; 00511515
    JNZ 0x005114dd                      ; 0051151b | LAB_005114dd
        ;   XREF to: 005114dd (CONDITIONAL_JUMP)
    MOV dword ptr [EAX + 0x4],0x258     ; 0051151d | g_CGameInstance.game_pixy
    MOV dword ptr [EAX],0x320           ; 00511524 | CGame g_CGameInstance
    JMP 0x005111d3                      ; 0051152a | default
        ;   XREF to: 005111d3 (UNCONDITIONAL_JUMP)
    MOV EDX,dword ptr [0x0067b654]      ; 0051152f | CGame * g_CGamePtr
        ;   Label: LAB_0051152f
    MOV ECX,dword ptr [EDX + 0x4]       ; 00511535 | g_CGameInstance.game_pixy
    CMP ECX,0xf0                        ; 00511538
    JNZ 0x00511552                      ; 0051153e | LAB_00511552
        ;   XREF to: 00511552 (CONDITIONAL_JUMP)
    MOV dword ptr [EDX],0x200           ; 00511540 | CGame g_CGameInstance
    MOV dword ptr [EDX + 0x4],0x180     ; 00511546 | g_CGameInstance.game_pixy
    JMP 0x005111d3                      ; 0051154d | default
        ;   XREF to: 005111d3 (UNCONDITIONAL_JUMP)
    CMP ECX,0x12c                       ; 00511552
        ;   Label: LAB_00511552
    JNZ 0x0051156c                      ; 00511558 | LAB_0051156c
        ;   XREF to: 0051156c (CONDITIONAL_JUMP)
    MOV dword ptr [EDX],0x200           ; 0051155a | CGame g_CGameInstance
    MOV dword ptr [EDX + 0x4],0x180     ; 00511560 | g_CGameInstance.game_pixy
    JMP 0x005111d3                      ; 00511567 | default
        ;   XREF to: 005111d3 (UNCONDITIONAL_JUMP)
    CMP ECX,0x180                       ; 0051156c
        ;   Label: LAB_0051156c
    JNZ 0x00511586                      ; 00511572 | LAB_00511586
        ;   XREF to: 00511586 (CONDITIONAL_JUMP)
    MOV dword ptr [EDX],0x280           ; 00511574 | CGame g_CGameInstance
    MOV dword ptr [EDX + 0x4],0x1e0     ; 0051157a | g_CGameInstance.game_pixy
    JMP 0x005111d3                      ; 00511581 | default
        ;   XREF to: 005111d3 (UNCONDITIONAL_JUMP)
    CMP dword ptr [ESP + 0x124],0xb71b00 ; 00511586 | DAT_00b71b00
        ;   Label: LAB_00511586
    JLE 0x005115a6                      ; 00511591 | LAB_005115a6
        ;   XREF to: 005115a6 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [0x0067b654]      ; 00511593 | CGame * g_CGamePtr
    CMP dword ptr [EDX + 0x4],0x1e0     ; 00511599 | g_CGameInstance.game_pixy
    JNZ 0x005115a6                      ; 005115a0 | LAB_005115a6
        ;   XREF to: 005115a6 (CONDITIONAL_JUMP)
    TEST EAX,EAX                        ; 005115a2
    JZ 0x00511601                       ; 005115a4 | LAB_00511601
        ;   XREF to: 00511601 (CONDITIONAL_JUMP)
    CMP dword ptr [ESP + 0x124],0xb71b00 ; 005115a6 | DAT_00b71b00
        ;   Label: LAB_005115a6
    JLE 0x005115ca                      ; 005115b1 | LAB_005115ca
        ;   XREF to: 005115ca (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [0x0067b654]      ; 005115b3 | CGame * g_CGamePtr
    CMP dword ptr [EDX + 0x4],0x258     ; 005115b9 | g_CGameInstance.game_pixy
    JNZ 0x005115ca                      ; 005115c0 | LAB_005115ca
        ;   XREF to: 005115ca (CONDITIONAL_JUMP)
    TEST EAX,EAX                        ; 005115c2
    JZ 0x005114a9                       ; 005115c4 | LAB_005114a9
        ;   XREF to: 005114a9 (CONDITIONAL_JUMP)
    CMP dword ptr [ESP + 0x124],0x16e3600 ; 005115ca | DAT_016e3600
        ;   Label: LAB_005115ca
    JLE 0x005115ea                      ; 005115d5 | LAB_005115ea
        ;   XREF to: 005115ea (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [0x0067b654]      ; 005115d7 | CGame * g_CGamePtr
    CMP dword ptr [EDX + 0x4],0x300     ; 005115dd | g_CGameInstance.game_pixy
    JNZ 0x005115ea                      ; 005115e4 | LAB_005115ea
        ;   XREF to: 005115ea (CONDITIONAL_JUMP)
    TEST EAX,EAX                        ; 005115e6
    JZ 0x00511613                       ; 005115e8 | LAB_00511613
        ;   XREF to: 00511613 (CONDITIONAL_JUMP)
    MOV EAX,[0x0067b654]                ; 005115ea | CGame * g_CGamePtr
        ;   Label: LAB_005115ea
    MOV dword ptr [EAX],0x140           ; 005115ef | CGame g_CGameInstance
    MOV dword ptr [EAX + 0x4],0xf0      ; 005115f5 | g_CGameInstance.game_pixy
    JMP 0x005111d3                      ; 005115fc | default
        ;   XREF to: 005111d3 (UNCONDITIONAL_JUMP)
    MOV dword ptr [EDX],0x320           ; 00511601 | CGame g_CGameInstance
        ;   Label: LAB_00511601
    MOV dword ptr [EDX + 0x4],0x258     ; 00511607 | g_CGameInstance.game_pixy
    JMP 0x005111d3                      ; 0051160e | default
        ;   XREF to: 005111d3 (UNCONDITIONAL_JUMP)
    MOV dword ptr [EDX + 0x4],0x400     ; 00511613 | g_CGameInstance.game_pixy
        ;   Label: LAB_00511613
    MOV dword ptr [EDX],0x500           ; 0051161a | CGame g_CGameInstance
    JMP 0x005111d3                      ; 00511620 | default
        ;   XREF to: 005111d3 (UNCONDITIONAL_JUMP)
    MOV ESI,dword ptr [0x02f26cac]      ; 00511625 | int g_MenuLeftRightPressed
        ;   Label: caseD_1
    CMP ESI,0x1                         ; 0051162b
    JNZ 0x0051165c                      ; 0051162e | LAB_0051165c
        ;   XREF to: 0051165c (CONDITIONAL_JUMP)
    MOV EAX,[0x0067b654]                ; 00511630 | CGame * g_CGamePtr
    MOV ECX,dword ptr [EAX + 0xc]       ; 00511635 | DAT_02d81aa8
    CMP EBX,ECX                         ; 00511638
    JNZ 0x00511648                      ; 0051163a | LAB_00511648
        ;   XREF to: 00511648 (CONDITIONAL_JUMP)
    MOV dword ptr [EAX + 0xc],0x2       ; 0051163c | DAT_02d81aa8
    JMP 0x005111d3                      ; 00511643 | default
        ;   XREF to: 005111d3 (UNCONDITIONAL_JUMP)
    CMP ECX,ESI                         ; 00511648
        ;   Label: LAB_00511648
    JNZ 0x00511654                      ; 0051164a | LAB_00511654
        ;   XREF to: 00511654 (CONDITIONAL_JUMP)
    MOV dword ptr [EAX + 0xc],EBX       ; 0051164c | DAT_02d81aa8
        ;   Label: LAB_0051164c
    JMP 0x005111d3                      ; 0051164f | default
        ;   XREF to: 005111d3 (UNCONDITIONAL_JUMP)
    MOV dword ptr [EAX + 0xc],ESI       ; 00511654 | DAT_02d81aa8
        ;   Label: LAB_00511654
    JMP 0x005111d3                      ; 00511657 | default
        ;   XREF to: 005111d3 (UNCONDITIONAL_JUMP)
    MOV EAX,[0x0067b654]                ; 0051165c | CGame * g_CGamePtr
        ;   Label: LAB_0051165c
    MOV EDI,dword ptr [EAX + 0xc]       ; 00511661 | DAT_02d81aa8
    CMP EBX,EDI                         ; 00511664
    JNZ 0x00511674                      ; 00511666 | LAB_00511674
        ;   XREF to: 00511674 (CONDITIONAL_JUMP)
    MOV dword ptr [EAX + 0xc],0x1       ; 00511668 | DAT_02d81aa8
    JMP 0x005111d3                      ; 0051166f | default
        ;   XREF to: 005111d3 (UNCONDITIONAL_JUMP)
    CMP EDI,0x1                         ; 00511674
        ;   Label: LAB_00511674
    JNZ 0x0051164c                      ; 00511677 | LAB_0051164c
        ;   XREF to: 0051164c (CONDITIONAL_JUMP)
    MOV dword ptr [EAX + 0xc],0x2       ; 00511679 | DAT_02d81aa8
    JMP 0x005111d3                      ; 00511680 | default
        ;   XREF to: 005111d3 (UNCONDITIONAL_JUMP)
    MOV dword ptr [0x02f275f8],EBX      ; 00511685 | int g_GraphicsCardCount
        ;   Label: caseD_2
    MOV dword ptr [0x03f6b878],EBX      ; 0051168b | int g_FullscreenMode
    JMP 0x005111d3                      ; 00511691 | default
        ;   XREF to: 005111d3 (UNCONDITIONAL_JUMP)
    MOV EAX,[0x02f275f4]                ; 00511696 | int g_GraphicsCardHandle
        ;   Label: caseD_3
    CMP dword ptr [EAX*0x4 + 0x2f2767c],0x121a ; 0051169b | int[16] g_GraphicsCardVendorIDs
    JZ 0x005111d3                       ; 005116a6 | default
        ;   XREF to: 005111d3 (CONDITIONAL_JUMP)
    PUSH 0x636a2d                       ; 005116ac | = "trid3d.dll" | s_trid3d_dll_00636a2d = trid3d.dll
    PUSH EBP                            ; 005116b1 | = "trid3d.dll" | g_RendererDllName = trid3d.dll
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 005116b2 | int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005116b7
    TEST EAX,EAX                        ; 005116ba
    JNZ 0x00511702                      ; 005116bc | LAB_00511702
        ;   XREF to: 00511702 (CONDITIONAL_JUMP)
    MOV ESI,0x636a38                    ; 005116be | = "tridx6.dll" | s_tridx6_dll_00636a38 = tridx6.dll
    MOV EDI,EBP                         ; 005116c3
        ;   Label: LAB_005116c3
    PUSH EDI                            ; 005116c5 | = "trid3d.dll" | g_RendererDllName = trid3d.dll
    MOV AL,byte ptr [ESI]               ; 005116c6 | = "tridx6.dll" | s_tridx6_dll_00636a38 = tridx6.dll | s_tridx7_dll_00636a4e = tridx7.dll
        ;   Label: LAB_005116c6
    MOV byte ptr [EDI],AL               ; 005116c8 | = "trid3d.dll" | g_RendererDllName = trid3d.dll
    CMP AL,0x0                          ; 005116ca
    JZ 0x005116de                       ; 005116cc | LAB_005116de
        ;   XREF to: 005116de (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 005116ce | s_ridx6.dll_00636a39
    ADD ESI,0x2                         ; 005116d1
    MOV byte ptr [EDI + 0x1],AL         ; 005116d4 | DAT_00684011
    ADD EDI,0x2                         ; 005116d7
    CMP AL,0x0                          ; 005116da
    JNZ 0x005116c6                      ; 005116dc | LAB_005116c6
        ;   XREF to: 005116c6 (CONDITIONAL_JUMP)
    POP EDI                             ; 005116de
        ;   Label: LAB_005116de
    CALL wincore_windll.cpp_kill_FUN_005b71e0 ; 005116df | int wincore_windll.cpp_kill_FUN_005b71e0()
        ;   Label: LAB_005116df
        ;   XREF to: 005b71e0 (UNCONDITIONAL_CALL)
    PUSH EBX                            ; 005116e4
    CALL wincore_windll.cpp_loadExternalRenderer_FUN_005b6750 ; 005116e5 | int wincore_windll.cpp_loadExternalRenderer_FUN_005b6750(HWND window_handle)
        ;   XREF to: 005b6750 (UNCONDITIONAL_CALL)
    MOV ECX,dword ptr [0x03f6b878]      ; 005116ea | int g_FullscreenMode
    ADD ESP,0x4                         ; 005116f0
    CMP EBX,ECX                         ; 005116f3
    JNZ 0x00511750                      ; 005116f5 | LAB_00511750
        ;   XREF to: 00511750 (CONDITIONAL_JUMP)
    MOV dword ptr [0x02f275f8],ECX      ; 005116f7 | int g_GraphicsCardCount
    JMP 0x005111d3                      ; 005116fd | default
        ;   XREF to: 005111d3 (UNCONDITIONAL_JUMP)
    PUSH 0x636a43                       ; 00511702 | = "tridx6.dll" | s_tridx6_dll_00636a43 = tridx6.dll
        ;   Label: LAB_00511702
    PUSH EBP                            ; 00511707 | = "trid3d.dll" | g_RendererDllName = trid3d.dll
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 00511708 | int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0051170d
    TEST EAX,EAX                        ; 00511710
    JZ 0x0051172d                       ; 00511712 | LAB_0051172d
        ;   XREF to: 0051172d (CONDITIONAL_JUMP)
    PUSH 0x636a59                       ; 00511714 | = "tridx7.dll" | s_tridx7_dll_00636a59 = tridx7.dll
    PUSH EBP                            ; 00511719 | = "trid3d.dll" | g_RendererDllName = trid3d.dll
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 0051171a | int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0051171f
    TEST EAX,EAX                        ; 00511722
    JNZ 0x00511734                      ; 00511724 | LAB_00511734
        ;   XREF to: 00511734 (CONDITIONAL_JUMP)
    MOV ESI,0x636a64                    ; 00511726 | = "trid3d.dll" | s_trid3d_dll_00636a64 = trid3d.dll
    JMP 0x005116c3                      ; 0051172b | LAB_005116c3
        ;   XREF to: 005116c3 (UNCONDITIONAL_JUMP)
    MOV ESI,0x636a4e                    ; 0051172d | = "tridx7.dll" | s_tridx7_dll_00636a4e = tridx7.dll
        ;   Label: LAB_0051172d
    JMP 0x005116c3                      ; 00511732 | LAB_005116c3
        ;   XREF to: 005116c3 (UNCONDITIONAL_JUMP)
    PUSH 0x636a6f                       ; 00511734 | = "tri3dfx.dll" | s_tri3dfx_dll_00636a6f = tri3dfx.dll
        ;   Label: LAB_00511734
    PUSH EBP                            ; 00511739 | = "trid3d.dll" | g_RendererDllName = trid3d.dll
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 0051173a | int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0051173f
    TEST EAX,EAX                        ; 00511742
    JNZ 0x005116df                      ; 00511744 | LAB_005116df
        ;   XREF to: 005116df (CONDITIONAL_JUMP)
    MOV ESI,0x636a7b                    ; 00511746 | = "trid3d.dll" | s_trid3d_dll_00636a7b = trid3d.dll
    JMP 0x005116c3                      ; 0051174b | LAB_005116c3
        ;   XREF to: 005116c3 (UNCONDITIONAL_JUMP)
    PUSH 0x2f276bc                      ; 00511750 | int[17] g_GraphicsCardDeviceIDs
        ;   Label: LAB_00511750
    PUSH 0x2f2767c                      ; 00511755 | int[16] g_GraphicsCardVendorIDs
    PUSH 0x2f2763c                      ; 0051175a | char *[16] g_GraphicsCardNames
    PUSH 0x2f275fc                      ; 0051175f | char[64] g_GraphicsCardDriverData
    PUSH 0x2f275f8                      ; 00511764 | int g_GraphicsCardCount
    CALL wincore_windll.cpp_buildCardList_FUN_005b7db0 ; 00511769 | int wincore_windll.cpp_buildCardList_FUN_005b7db0(int * out_card_count, void * enum_data_buffer, char * * out_card_names, int * out_vendor_ids, ...)
        ;   XREF to: 005b7db0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 0051176e
    LEA EAX,[ESP + 0x12c]               ; 00511771
    PUSH EAX                            ; 00511778
    LEA EAX,[ESP + 0x12c]               ; 00511779
    PUSH EAX                            ; 00511780
    LEA EAX,[ESP + 0x12c]               ; 00511781
    PUSH EAX                            ; 00511788
    CALL wincore_windll.cpp_getVideoMemory_FUN_005b7d60 ; 00511789 | int wincore_windll.cpp_getVideoMemory_FUN_005b7d60(int * total_memory, int * available_memory, int * memory_type)
        ;   XREF to: 005b7d60 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0051178e
    JMP 0x005111d3                      ; 00511791 | default
        ;   XREF to: 005111d3 (UNCONDITIONAL_JUMP)
    MOV ECX,dword ptr [0x02f275f8]      ; 00511796 | int g_GraphicsCardCount
        ;   Label: caseD_4
    CMP EBX,ECX                         ; 0051179c
    JNZ 0x005117ab                      ; 0051179e | LAB_005117ab
        ;   XREF to: 005117ab (CONDITIONAL_JUMP)
    MOV dword ptr [0x02f275f4],ECX      ; 005117a0 | int g_GraphicsCardHandle
    JMP 0x005111d3                      ; 005117a6 | default
        ;   XREF to: 005111d3 (UNCONDITIONAL_JUMP)
    MOV ESI,dword ptr [0x02f275f4]      ; 005117ab | int g_GraphicsCardHandle
        ;   Label: LAB_005117ab
    INC ESI                             ; 005117b1
    MOV dword ptr [0x02f275f4],ESI      ; 005117b2 | int g_GraphicsCardHandle
    CMP ESI,ECX                         ; 005117b8
    JL 0x005117c2                       ; 005117ba | LAB_005117c2
        ;   XREF to: 005117c2 (CONDITIONAL_JUMP)
    MOV dword ptr [0x02f275f4],EBX      ; 005117bc | int g_GraphicsCardHandle
    MOV EAX,[0x02f275f4]                ; 005117c2 | int g_GraphicsCardHandle
        ;   Label: LAB_005117c2
    PUSH EAX                            ; 005117c7
    CALL wincore_windll.cpp_selectCard_FUN_005b7d90 ; 005117c8 | int wincore_windll.cpp_selectCard_FUN_005b7d90(int card_index)
        ;   XREF to: 005b7d90 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005117cd
    JMP 0x005111d3                      ; 005117d0 | default
        ;   XREF to: 005111d3 (UNCONDITIONAL_JUMP)
    MOV EAX,[0x0067b654]                ; 005117d5 | CGame * g_CGamePtr
        ;   Label: caseD_5
    CMP dword ptr [EAX + 0x8],0x10      ; 005117da | DAT_02d81aa4
    JNZ 0x005117ec                      ; 005117de | LAB_005117ec
        ;   XREF to: 005117ec (CONDITIONAL_JUMP)
    MOV dword ptr [EAX + 0x8],0x20      ; 005117e0 | DAT_02d81aa4
    JMP 0x005111d3                      ; 005117e7 | default
        ;   XREF to: 005111d3 (UNCONDITIONAL_JUMP)
    MOV dword ptr [EAX + 0x8],0x10      ; 005117ec | DAT_02d81aa4
        ;   Label: LAB_005117ec
    JMP 0x005111d3                      ; 005117f3 | default
        ;   XREF to: 005111d3 (UNCONDITIONAL_JUMP)
    CALL core_menu.cpp_showCalibrationTest_FUN_00510ba0 ; 005117f8 | void core_menu.cpp_showCalibrationTest_FUN_00510ba0()
        ;   Label: caseD_6
        ;   XREF to: 00510ba0 (UNCONDITIONAL_CALL)
    JMP 0x005111d3                      ; 005117fd | default
        ;   XREF to: 005111d3 (UNCONDITIONAL_JUMP)
    MOV EAX,[0x0067b654]                ; 00511802 | CGame * g_CGamePtr
        ;   Label: caseD_7
    CMP EBX,dword ptr [EAX + 0x10]      ; 00511807 | DAT_02d81aac
    SETZ DL                             ; 0051180a
    AND EDX,0xff                        ; 0051180d
    MOV dword ptr [EAX + 0x10],EDX      ; 00511813 | DAT_02d81aac
    JMP 0x005111d3                      ; 00511816 | default
        ;   XREF to: 005111d3 (UNCONDITIONAL_JUMP)
    MOV EAX,[0x0067b654]                ; 0051181b | CGame * g_CGamePtr
        ;   Label: caseD_8
    CMP EBX,dword ptr [EAX + 0x18]      ; 00511820 | g_CGameInstance.nudity_flag
    SETZ DL                             ; 00511823
    AND EDX,0xff                        ; 00511826
    MOV dword ptr [EAX + 0x18],EDX      ; 0051182c | g_CGameInstance.nudity_flag
    MOV dword ptr [EAX + 0x14],EDX      ; 0051182f | g_CGameInstance.blood_flag
    MOV dword ptr [EAX + 0x1c],EDX      ; 00511832 | DAT_02d81ab8
    JMP 0x005111d3                      ; 00511835 | default
        ;   XREF to: 005111d3 (UNCONDITIONAL_JUMP)

