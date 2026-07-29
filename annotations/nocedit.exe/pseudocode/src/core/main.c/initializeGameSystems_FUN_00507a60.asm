; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_main_c_initializeGameSystems_FUN_00507a60(int argc,char **argv)
;
; Parameters:
; int              Stack[0x4]:4   argc
; char * *         Stack[0x8]:4   argv
; Local Variables:
; char[512]        Stack[-0x528]:512  low_memory_message
; char[256]        Stack[-0x328]:256  temp_buffer
; char[256]        Stack[-0x228]:256  loading_text
; char[256]        Stack[-0x128]:256  memory_amount_str
; CAlphaBitmap     Stack[-0x28]:20  loading_bitmap
;
; XREF[1]:
;   wincore_winrun.cpp_winMain_FUN_005f3680 at 005f38f8
;
; Referenced Globals:
;   TerminatedCString s_PROCESSOR_LEVEL_00635290
;   TerminatedCString s_core_main_c_006352a0
;   TerminatedCString s_rb_006352af
;   TerminatedCString s_stderr_txt_006352b2
;   TerminatedCString s_core_main_c_006352bd
;   TerminatedCString s_stderr_txt_006352cc
;   TerminatedCString s_core_main_c_006352d7
;   TerminatedCString s_Please_copy_Nocturne_to__006352e6
;   TerminatedCString s_wt_0063530e
;   TerminatedCString s_stderr_txt_00635311
;   TerminatedCString s_msglist_txt_0063531c
;   TerminatedCString s_core_main_c_00635328
;   TerminatedCString s_This_CPU_does_not_have_a_00635337
;   TerminatedCString s_core_main_c_0063535b
;   TerminatedCString s_Unable_to_set_640x480x32_0063536a
;   ... and 81 more
;
; Called Functions:
;   core_dfilter.cpp_CDemonFilter_init_FUN_004705a0
;   core_dfont.cpp_initFonts_FUN_004709a0
;   core_flattn.cpp_doNothing_FUN_004cbce0
;   core_inivar.cpp_readIniData_FUN_004fbd90
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_menu.cpp_showCalibrationTest_FUN_00510ba0
;   core_mission.cpp_CDemonMission_reset_FUN_00522c80
;   core_mmx.c_detectCPUFeatures_FUN_00524f10
;   core_netgame.cpp_CNetGame_init_FUN_0053f780
;   core_sound.cpp_CSound_findAllSoundFiles_FUN_005b2d00
;   crt_env.c_getenv_FUN_006013f0
;   crt_stdio.c_freopen_FUN_00601b14
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   engine_2d.c_initGraphicsSystem_FUN_00401010
;   engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520
;   ... and 24 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00507a60
        ;   Label: core_main.c_initializeGameSystems_FUN_00507a60
    PUSH ESI                            ; 00507a61
    PUSH EDI                            ; 00507a62
    PUSH EBP                            ; 00507a63
    MOV EBP,ESP                         ; 00507a64
    SUB ESP,0x718                       ; 00507a66
    AND ESP,0xfffffff8                  ; 00507a6c
    MOV ECX,0x10000                     ; 00507a6f
    MOV EBX,0x1                         ; 00507a74
    XOR EDX,EDX                         ; 00507a79
    PUSH 0x635290                       ; 00507a7b | = "PROCESSOR_LEVEL"
    MOV dword ptr [0x02d0529c],EDX      ; 00507a80 | g_ProcessorType
    MOV dword ptr [0x0068411c],ECX      ; 00507a86 | g_SystemMemorySize
    MOV dword ptr [0x00684110],EBX      ; 00507a8c | g_SystemInitialized
    CALL crt_env.c_getenv_FUN_006013f0  ; 00507a92
        ;   XREF to: 006013f0 (UNCONDITIONAL_CALL)  ; char * crt_env.c_getenv_FUN_006013f0(char * name)
    ADD ESP,0x4                         ; 00507a97
    TEST EAX,EAX                        ; 00507a9a
    JNZ 0x00508203                      ; 00507a9c
        ;   XREF to: 00508203 (CONDITIONAL_JUMP)  ; LAB_00508203
    MOV dword ptr [0x00772628],0x4      ; 00507aa2 | g_RenderingMode
    PUSH 0x3bc                          ; 00507aac
        ;   Label: LAB_00507aac
    PUSH 0x6352a0                       ; 00507ab1 | = "..\\core\\main.c"
    PUSH 0x6352af                       ; 00507ab6 | = "rb"
    PUSH 0x0                            ; 00507abb
    PUSH 0x6352b2                       ; 00507abd | = "stderr.txt"
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 00507ac2
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; _FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    ADD ESP,0x14                        ; 00507ac7
    TEST EAX,EAX                        ; 00507aca
    JZ 0x00507b1a                       ; 00507acc
        ;   XREF to: 00507b1a (CONDITIONAL_JUMP)  ; LAB_00507b1a
    PUSH 0x3be                          ; 00507ace
    PUSH 0x6352bd                       ; 00507ad3 | = "..\\core\\main.c"
    PUSH EAX                            ; 00507ad8
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 00507ad9
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 00507ade
    PUSH 0x1c0                          ; 00507ae1
    PUSH 0x6352cc                       ; 00507ae6 | = "stderr.txt"
    CALL engine_dosio.cpp_setReadonlyAttribute_FUN_00600c30 ; 00507aeb
        ;   XREF to: 00600c30 (UNCONDITIONAL_CALL)  ; DWORD engine_dosio.cpp_setReadonlyAttribute_FUN_00600c30(char * filename, DWORD file_attributes)
    ADD ESP,0x8                         ; 00507af0
    TEST EAX,EAX                        ; 00507af3
    JZ 0x00507b1a                       ; 00507af5
        ;   XREF to: 00507b1a (CONDITIONAL_JUMP)  ; LAB_00507b1a
    MOV EDX,0x6352d7                    ; 00507af7 | = "..\\core\\main.c"
    MOV ECX,0x3c0                       ; 00507afc
    PUSH 0x6352e6                       ; 00507b01 | = "Please copy Nocturne to your hard drive"
    MOV dword ptr [0x02f0ca48],EDX      ; 00507b06 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 00507b0c | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00507b12
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00507b17
    PUSH 0x684cf8                       ; 00507b1a | g_StderrLogFile
        ;   Label: LAB_00507b1a
    PUSH 0x63530e                       ; 00507b1f | = "wt"
    PUSH 0x635311                       ; 00507b24 | = "stderr.txt"
    MOV EBX,0x4                         ; 00507b29
    CALL crt_stdio.c_freopen_FUN_00601b14 ; 00507b2e
        ;   XREF to: 00601b14 (UNCONDITIONAL_CALL)  ; _FILE * crt_stdio.c_freopen_FUN_00601b14(char * filename, char * mode, _FILE * stream)
    ADD ESP,0xc                         ; 00507b33
    MOV dword ptr [0x00772628],EBX      ; 00507b36 | g_RenderingMode
    CALL core_flattn.cpp_doNothing_FUN_004cbce0 ; 00507b3c
        ;   XREF to: 004cbce0 (UNCONDITIONAL_CALL)  ; void core_flattn.cpp_doNothing_FUN_004cbce0()
    CALL core_inivar.cpp_readIniData_FUN_004fbd90 ; 00507b41
        ;   XREF to: 004fbd90 (UNCONDITIONAL_CALL)  ; void core_inivar.cpp_readIniData_FUN_004fbd90()
    MOV EDI,dword ptr [0x00680cdc]      ; 00507b46 | g_CDemonPodPtr
    MOV ESI,0x2                         ; 00507b4c
    PUSH EDI                            ; 00507b51 | g_CDemonPodInstance
    MOV dword ptr [0x03f6b884],ESI      ; 00507b52 | g_AGPTextureMode
    CALL engine_pod.cpp_CPod_init_FUN_00550c30 ; 00507b58
        ;   XREF to: 00550c30 (UNCONDITIONAL_CALL)  ; void engine_pod.cpp_CPod_init_FUN_00550c30(CPod * this_ptr)
    ADD ESP,0x4                         ; 00507b5d
    PUSH 0x551960                       ; 00507b60
    CALL engine_dosio.cpp_addGetFileInfoHook_FUN_00481710 ; 00507b65
        ;   XREF to: 00481710 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_addGetFileInfoHook_FUN_00481710(FileSearchHandlerFunc * handler)
    ADD ESP,0x4                         ; 00507b6a
    PUSH 0x4817c0                       ; 00507b6d
    CALL engine_dosio.cpp_addGetFileInfoHook_FUN_00481710 ; 00507b72
        ;   XREF to: 00481710 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_addGetFileInfoHook_FUN_00481710(FileSearchHandlerFunc * handler)
    ADD ESP,0x4                         ; 00507b77
    PUSH 0x63531c                       ; 00507b7a | = "msglist.txt"
    CALL support_newmsg.cpp_readMessageFile_FUN_00543e40 ; 00507b7f
        ;   XREF to: 00543e40 (UNCONDITIONAL_CALL)  ; void support_newmsg.cpp_readMessageFile_FUN_00543e40(char * message_file)
    ADD ESP,0x4                         ; 00507b84
    CALL core_mmx.c_detectCPUFeatures_FUN_00524f10 ; 00507b87
        ;   XREF to: 00524f10 (UNCONDITIONAL_CALL)  ; void core_mmx.c_detectCPUFeatures_FUN_00524f10()
    CMP dword ptr [0x02d05248],0x0      ; 00507b8c | g_MMXSupported
    JNZ 0x00507bc1                      ; 00507b93
        ;   XREF to: 00507bc1 (CONDITIONAL_JUMP)  ; LAB_00507bc1
    MOV EDX,0x635328                    ; 00507b95 | = "..\\core\\main.c"
    MOV ECX,0x3eb                       ; 00507b9a
    PUSH 0x635337                       ; 00507b9f | = "This CPU does not have an MMX unit."
    MOV dword ptr [0x02f0ca48],EDX      ; 00507ba4 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 00507baa | g_CurrentLineNumber
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00507bb0
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 00507bb5
    PUSH EAX                            ; 00507bb8
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00507bb9
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00507bbe
    CALL engine_matrix.c_initializeTrigTables_FUN_0050c530 ; 00507bc1
        ;   XREF to: 0050c530 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_initializeTrigTables_FUN_0050c530()
        ;   Label: LAB_00507bc1
    CALL wincore_wddvmem.cpp_initTextureCache_FUN_00403790 ; 00507bc6
        ;   XREF to: 00403790 (UNCONDITIONAL_CALL)  ; CTextureCache * wincore_wddvmem.cpp_initTextureCache_FUN_00403790()
    CALL engine_2d.c_initGraphicsSystem_FUN_00401010 ; 00507bcb
        ;   XREF to: 00401010 (UNCONDITIONAL_CALL)  ; void engine_2d.c_initGraphicsSystem_FUN_00401010()
    CALL wincore_winrun.cpp_calibrateCPUSpeed_FUN_005f2b80 ; 00507bd0
        ;   XREF to: 005f2b80 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_calibrateCPUSpeed_FUN_005f2b80()
    CALL wincore_winrun.cpp_initJoystick_FUN_005f4310 ; 00507bd5
        ;   XREF to: 005f4310 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_initJoystick_FUN_005f4310()
    PUSH 0x20                           ; 00507bda
    PUSH 0x1e0                          ; 00507bdc
    XOR EBX,EBX                         ; 00507be1
    PUSH 0x280                          ; 00507be3
    MOV dword ptr [0x03f6b878],EBX      ; 00507be8 | g_UseDirect3D
    CALL wincore_wddvmem.cpp_setScreenResolution_FUN_005ecef0 ; 00507bee
        ;   XREF to: 005ecef0 (UNCONDITIONAL_CALL)  ; int wincore_wddvmem.cpp_setScreenResolution_FUN_005ecef0(int width, int height, int bits_per_pixel)
    ADD ESP,0xc                         ; 00507bf3
    TEST EAX,EAX                        ; 00507bf6
    JNZ 0x00507c1d                      ; 00507bf8
        ;   XREF to: 00507c1d (CONDITIONAL_JUMP)  ; LAB_00507c1d
    MOV ESI,0x63535b                    ; 00507bfa | = "..\\core\\main.c"
    MOV EDI,0x403                       ; 00507bff
    PUSH 0x63536a                       ; 00507c04 | = "Unable to set 640x480x32bpp.  Please ..."
    MOV dword ptr [0x02f0ca48],ESI      ; 00507c09 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 00507c0f | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00507c15
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00507c1a
    CALL core_dfont.cpp_initFonts_FUN_004709a0 ; 00507c1d
        ;   XREF to: 004709a0 (UNCONDITIONAL_CALL)  ; void core_dfont.cpp_initFonts_FUN_004709a0()
        ;   Label: LAB_00507c1d
    CMP dword ptr [0x03f98474],0x3c00000 ; 00507c22 | g_TotalPhysicalMemory | g_SkeletonPool[19].motion_list.motions[91].transitions[2].tween_time
    JGE 0x00507ea0                      ; 00507c2c
        ;   XREF to: 00507ea0 (CONDITIONAL_JUMP)  ; LAB_00507ea0
    PUSH 0x6353fb                       ; 00507c32 | = "Windows is reporting "
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00507c37
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 00507c3c
    LEA EDI,[ESP + 0x200]               ; 00507c3f
    MOV ESI,EAX                         ; 00507c46
    PUSH EDI                            ; 00507c48
    MOV AL,byte ptr [ESI]               ; 00507c49
        ;   Label: LAB_00507c49
    MOV byte ptr [EDI],AL               ; 00507c4b
    CMP AL,0x0                          ; 00507c4d
    JZ 0x00507c61                       ; 00507c4f
        ;   XREF to: 00507c61 (CONDITIONAL_JUMP)  ; LAB_00507c61
    MOV AL,byte ptr [ESI + 0x1]         ; 00507c51
    ADD ESI,0x2                         ; 00507c54
    MOV byte ptr [EDI + 0x1],AL         ; 00507c57
    ADD EDI,0x2                         ; 00507c5a
    CMP AL,0x0                          ; 00507c5d
    JNZ 0x00507c49                      ; 00507c5f
        ;   XREF to: 00507c49 (CONDITIONAL_JUMP)  ; LAB_00507c49
    POP EDI                             ; 00507c61
        ;   Label: LAB_00507c61
    FILD dword ptr [0x03f98474]         ; 00507c62 | g_TotalPhysicalMemory
    FMUL float ptr [0x006355ce]         ; 00507c68 | g_AvailableMemMultiplier
    SUB ESP,0x8                         ; 00507c6e
    FSTP double ptr [ESP]               ; 00507c71
    PUSH 0x635411                       ; 00507c74 | = "%.1f"
    LEA EAX,[ESP + 0x60c]               ; 00507c79
    PUSH EAX                            ; 00507c80
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00507c81
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 00507c86
    LEA ESI,[ESP + 0x600]               ; 00507c89
    LEA EDI,[ESP + 0x200]               ; 00507c90
    PUSH EDI                            ; 00507c97
    SUB ECX,ECX                         ; 00507c98
    DEC ECX                             ; 00507c9a
    MOV AL,0x0                          ; 00507c9b
    SCASB.REPNE ES:EDI                  ; 00507c9d
    DEC EDI                             ; 00507c9f
    MOV AL,byte ptr [ESI]               ; 00507ca0
        ;   Label: LAB_00507ca0
    MOV byte ptr [EDI],AL               ; 00507ca2
    CMP AL,0x0                          ; 00507ca4
    JZ 0x00507cb8                       ; 00507ca6
        ;   XREF to: 00507cb8 (CONDITIONAL_JUMP)  ; LAB_00507cb8
    MOV AL,byte ptr [ESI + 0x1]         ; 00507ca8
    ADD ESI,0x2                         ; 00507cab
    MOV byte ptr [EDI + 0x1],AL         ; 00507cae
    ADD EDI,0x2                         ; 00507cb1
    CMP AL,0x0                          ; 00507cb4
    JNZ 0x00507ca0                      ; 00507cb6
        ;   XREF to: 00507ca0 (CONDITIONAL_JUMP)  ; LAB_00507ca0
    POP EDI                             ; 00507cb8
        ;   Label: LAB_00507cb8
    PUSH 0x635416                       ; 00507cb9 | = "MB of system RAM."
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00507cbe
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 00507cc3
    LEA EDI,[ESP + 0x200]               ; 00507cc6
    MOV ESI,EAX                         ; 00507ccd
    PUSH EDI                            ; 00507ccf
    SUB ECX,ECX                         ; 00507cd0
    DEC ECX                             ; 00507cd2
    MOV AL,0x0                          ; 00507cd3
    SCASB.REPNE ES:EDI                  ; 00507cd5
    DEC EDI                             ; 00507cd7
    MOV AL,byte ptr [ESI]               ; 00507cd8
        ;   Label: LAB_00507cd8
    MOV byte ptr [EDI],AL               ; 00507cda
    CMP AL,0x0                          ; 00507cdc
    JZ 0x00507cf0                       ; 00507cde
        ;   XREF to: 00507cf0 (CONDITIONAL_JUMP)  ; LAB_00507cf0
    MOV AL,byte ptr [ESI + 0x1]         ; 00507ce0
    ADD ESI,0x2                         ; 00507ce3
    MOV byte ptr [EDI + 0x1],AL         ; 00507ce6
    ADD EDI,0x2                         ; 00507ce9
    CMP AL,0x0                          ; 00507cec
    JNZ 0x00507cd8                      ; 00507cee
        ;   XREF to: 00507cd8 (CONDITIONAL_JUMP)  ; LAB_00507cd8
    POP EDI                             ; 00507cf0
        ;   Label: LAB_00507cf0
    MOV ESI,0x635428                    ; 00507cf1 | = "\n"
    LEA EDI,[ESP + 0x200]               ; 00507cf6
    PUSH EDI                            ; 00507cfd
    SUB ECX,ECX                         ; 00507cfe
    DEC ECX                             ; 00507d00
    MOV AL,0x0                          ; 00507d01
    SCASB.REPNE ES:EDI                  ; 00507d03
    DEC EDI                             ; 00507d05
    MOV AL,byte ptr [ESI]               ; 00507d06 | = "\n" | s_Nocturne_requires_at_lea_0063542a
        ;   Label: LAB_00507d06
    MOV byte ptr [EDI],AL               ; 00507d08
    CMP AL,0x0                          ; 00507d0a
    JZ 0x00507d1e                       ; 00507d0c
        ;   XREF to: 00507d1e (CONDITIONAL_JUMP)  ; LAB_00507d1e
    MOV AL,byte ptr [ESI + 0x1]         ; 00507d0e | s_anon_00635428+1 | s_octurne_requires_at_least_64MB_o_0063542b
    ADD ESI,0x2                         ; 00507d11
    MOV byte ptr [EDI + 0x1],AL         ; 00507d14
    ADD EDI,0x2                         ; 00507d17
    CMP AL,0x0                          ; 00507d1a
    JNZ 0x00507d06                      ; 00507d1c
        ;   XREF to: 00507d06 (CONDITIONAL_JUMP)  ; LAB_00507d06
    POP EDI                             ; 00507d1e
        ;   Label: LAB_00507d1e
    PUSH 0x63542a                       ; 00507d1f | = "Nocturne requires at least 64MB of sy..."
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00507d24
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 00507d29
    LEA EDI,[ESP + 0x200]               ; 00507d2c
    MOV ESI,EAX                         ; 00507d33
    PUSH EDI                            ; 00507d35
    SUB ECX,ECX                         ; 00507d36
    DEC ECX                             ; 00507d38
    MOV AL,0x0                          ; 00507d39
    SCASB.REPNE ES:EDI                  ; 00507d3b
    DEC EDI                             ; 00507d3d
    MOV AL,byte ptr [ESI]               ; 00507d3e
        ;   Label: LAB_00507d3e
    MOV byte ptr [EDI],AL               ; 00507d40
    CMP AL,0x0                          ; 00507d42
    JZ 0x00507d56                       ; 00507d44
        ;   XREF to: 00507d56 (CONDITIONAL_JUMP)  ; LAB_00507d56
    MOV AL,byte ptr [ESI + 0x1]         ; 00507d46
    ADD ESI,0x2                         ; 00507d49
    MOV byte ptr [EDI + 0x1],AL         ; 00507d4c
    ADD EDI,0x2                         ; 00507d4f
    CMP AL,0x0                          ; 00507d52
    JNZ 0x00507d3e                      ; 00507d54
        ;   XREF to: 00507d3e (CONDITIONAL_JUMP)  ; LAB_00507d3e
    POP EDI                             ; 00507d56
        ;   Label: LAB_00507d56
    MOV ESI,0x635459                    ; 00507d57 | = "\n"
    LEA EDI,[ESP + 0x200]               ; 00507d5c
    PUSH EDI                            ; 00507d63
    SUB ECX,ECX                         ; 00507d64
    DEC ECX                             ; 00507d66
    MOV AL,0x0                          ; 00507d67
    SCASB.REPNE ES:EDI                  ; 00507d69
    DEC EDI                             ; 00507d6b
    MOV AL,byte ptr [ESI]               ; 00507d6c | = "\n" | s_If_you_think_you_have_at_0063545b
        ;   Label: LAB_00507d6c
    MOV byte ptr [EDI],AL               ; 00507d6e
    CMP AL,0x0                          ; 00507d70
    JZ 0x00507d84                       ; 00507d72
        ;   XREF to: 00507d84 (CONDITIONAL_JUMP)  ; LAB_00507d84
    MOV AL,byte ptr [ESI + 0x1]         ; 00507d74 | s_anon_00635459+1 | s_f_you_think_you_have_at_least_64_0063545c
    ADD ESI,0x2                         ; 00507d77
    MOV byte ptr [EDI + 0x1],AL         ; 00507d7a
    ADD EDI,0x2                         ; 00507d7d
    CMP AL,0x0                          ; 00507d80
    JNZ 0x00507d6c                      ; 00507d82
        ;   XREF to: 00507d6c (CONDITIONAL_JUMP)  ; LAB_00507d6c
    POP EDI                             ; 00507d84
        ;   Label: LAB_00507d84
    PUSH 0x63545b                       ; 00507d85 | = "If you think you have at least 64MB o..."
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00507d8a
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 00507d8f
    LEA EDI,[ESP + 0x200]               ; 00507d92
    MOV ESI,EAX                         ; 00507d99
    PUSH EDI                            ; 00507d9b
    SUB ECX,ECX                         ; 00507d9c
    DEC ECX                             ; 00507d9e
    MOV AL,0x0                          ; 00507d9f
    SCASB.REPNE ES:EDI                  ; 00507da1
    DEC EDI                             ; 00507da3
    MOV AL,byte ptr [ESI]               ; 00507da4
        ;   Label: LAB_00507da4
    MOV byte ptr [EDI],AL               ; 00507da6
    CMP AL,0x0                          ; 00507da8
    JZ 0x00507dbc                       ; 00507daa
        ;   XREF to: 00507dbc (CONDITIONAL_JUMP)  ; LAB_00507dbc
    MOV AL,byte ptr [ESI + 0x1]         ; 00507dac
    ADD ESI,0x2                         ; 00507daf
    MOV byte ptr [EDI + 0x1],AL         ; 00507db2
    ADD EDI,0x2                         ; 00507db5
    CMP AL,0x0                          ; 00507db8
    JNZ 0x00507da4                      ; 00507dba
        ;   XREF to: 00507da4 (CONDITIONAL_JUMP)  ; LAB_00507da4
    POP EDI                             ; 00507dbc
        ;   Label: LAB_00507dbc
    MOV ESI,0x63548d                    ; 00507dbd | = "\n"
    LEA EDI,[ESP + 0x200]               ; 00507dc2
    PUSH EDI                            ; 00507dc9
    SUB ECX,ECX                         ; 00507dca
    DEC ECX                             ; 00507dcc
    MOV AL,0x0                          ; 00507dcd
    SCASB.REPNE ES:EDI                  ; 00507dcf
    DEC EDI                             ; 00507dd1
    MOV AL,byte ptr [ESI]               ; 00507dd2 | = "\n" | s_then_ignore_this_message_0063548f
        ;   Label: LAB_00507dd2
    MOV byte ptr [EDI],AL               ; 00507dd4
    CMP AL,0x0                          ; 00507dd6
    JZ 0x00507dea                       ; 00507dd8
        ;   XREF to: 00507dea (CONDITIONAL_JUMP)  ; LAB_00507dea
    MOV AL,byte ptr [ESI + 0x1]         ; 00507dda | s_anon_0063548d+1 | s_hen_ignore_this_message._00635490
    ADD ESI,0x2                         ; 00507ddd
    MOV byte ptr [EDI + 0x1],AL         ; 00507de0
    ADD EDI,0x2                         ; 00507de3
    CMP AL,0x0                          ; 00507de6
    JNZ 0x00507dd2                      ; 00507de8
        ;   XREF to: 00507dd2 (CONDITIONAL_JUMP)  ; LAB_00507dd2
    POP EDI                             ; 00507dea
        ;   Label: LAB_00507dea
    PUSH 0x63548f                       ; 00507deb | = "then ignore this message."
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00507df0
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 00507df5
    LEA EDI,[ESP + 0x200]               ; 00507df8
    MOV ESI,EAX                         ; 00507dff
    PUSH EDI                            ; 00507e01
    SUB ECX,ECX                         ; 00507e02
    DEC ECX                             ; 00507e04
    MOV AL,0x0                          ; 00507e05
    SCASB.REPNE ES:EDI                  ; 00507e07
    DEC EDI                             ; 00507e09
    MOV AL,byte ptr [ESI]               ; 00507e0a
        ;   Label: LAB_00507e0a
    MOV byte ptr [EDI],AL               ; 00507e0c
    CMP AL,0x0                          ; 00507e0e
    JZ 0x00507e22                       ; 00507e10
        ;   XREF to: 00507e22 (CONDITIONAL_JUMP)  ; LAB_00507e22
    MOV AL,byte ptr [ESI + 0x1]         ; 00507e12
    ADD ESI,0x2                         ; 00507e15
    MOV byte ptr [EDI + 0x1],AL         ; 00507e18
    ADD EDI,0x2                         ; 00507e1b
    CMP AL,0x0                          ; 00507e1e
    JNZ 0x00507e0a                      ; 00507e20
        ;   XREF to: 00507e0a (CONDITIONAL_JUMP)  ; LAB_00507e0a
    POP EDI                             ; 00507e22
        ;   Label: LAB_00507e22
    MOV ESI,0x6354a9                    ; 00507e23 | = "\n"
    LEA EDI,[ESP + 0x200]               ; 00507e28
    PUSH EDI                            ; 00507e2f
    SUB ECX,ECX                         ; 00507e30
    DEC ECX                             ; 00507e32
    MOV AL,0x0                          ; 00507e33
    SCASB.REPNE ES:EDI                  ; 00507e35
    DEC EDI                             ; 00507e37
    MOV AL,byte ptr [ESI]               ; 00507e38 | = "\n" | s_See_README_TXT_for_more__006354ab
        ;   Label: LAB_00507e38
    MOV byte ptr [EDI],AL               ; 00507e3a
    CMP AL,0x0                          ; 00507e3c
    JZ 0x00507e50                       ; 00507e3e
        ;   XREF to: 00507e50 (CONDITIONAL_JUMP)  ; LAB_00507e50
    MOV AL,byte ptr [ESI + 0x1]         ; 00507e40 | s_anon_006354a9+1 | s_ee_README.TXT_for_more_informati_006354ac
    ADD ESI,0x2                         ; 00507e43
    MOV byte ptr [EDI + 0x1],AL         ; 00507e46
    ADD EDI,0x2                         ; 00507e49
    CMP AL,0x0                          ; 00507e4c
    JNZ 0x00507e38                      ; 00507e4e
        ;   XREF to: 00507e38 (CONDITIONAL_JUMP)  ; LAB_00507e38
    POP EDI                             ; 00507e50
        ;   Label: LAB_00507e50
    PUSH 0x6354ab                       ; 00507e51 | = "See README.TXT for more information."
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00507e56
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 00507e5b
    LEA EDI,[ESP + 0x200]               ; 00507e5e
    MOV ESI,EAX                         ; 00507e65
    PUSH EDI                            ; 00507e67
    SUB ECX,ECX                         ; 00507e68
    DEC ECX                             ; 00507e6a
    MOV AL,0x0                          ; 00507e6b
    SCASB.REPNE ES:EDI                  ; 00507e6d
    DEC EDI                             ; 00507e6f
    MOV AL,byte ptr [ESI]               ; 00507e70
        ;   Label: LAB_00507e70
    MOV byte ptr [EDI],AL               ; 00507e72
    CMP AL,0x0                          ; 00507e74
    JZ 0x00507e88                       ; 00507e76
        ;   XREF to: 00507e88 (CONDITIONAL_JUMP)  ; LAB_00507e88
    MOV AL,byte ptr [ESI + 0x1]         ; 00507e78
    ADD ESI,0x2                         ; 00507e7b
    MOV byte ptr [EDI + 0x1],AL         ; 00507e7e
    ADD EDI,0x2                         ; 00507e81
    CMP AL,0x0                          ; 00507e84
    JNZ 0x00507e70                      ; 00507e86
        ;   XREF to: 00507e70 (CONDITIONAL_JUMP)  ; LAB_00507e70
    POP EDI                             ; 00507e88
        ;   Label: LAB_00507e88
    LEA EAX,[ESP + 0x200]               ; 00507e89
    PUSH EAX                            ; 00507e90
    MOV EDX,dword ptr [0x00678a60]      ; 00507e91 | g_CEditorToolsPtr
    PUSH EDX                            ; 00507e97 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showWarning_FUN_0049e6f0 ; 00507e98
        ;   XREF to: 0049e6f0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showWarning_FUN_0049e6f0(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 00507e9d
    CMP dword ptr [0x03f98478],0xc800000 ; 00507ea0 | g_AvailableSwapSpace
        ;   Label: LAB_00507ea0
    JGE 0x0050802a                      ; 00507eaa
        ;   XREF to: 0050802a (CONDITIONAL_JUMP)  ; LAB_0050802a
    PUSH 0x6354d0                       ; 00507eb0 | = "Windows is reporting "
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00507eb5
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 00507eba
    MOV EDI,ESP                         ; 00507ebd
    MOV ESI,EAX                         ; 00507ebf
    PUSH EDI                            ; 00507ec1
    MOV AL,byte ptr [ESI]               ; 00507ec2
        ;   Label: LAB_00507ec2
    MOV byte ptr [EDI],AL               ; 00507ec4
    CMP AL,0x0                          ; 00507ec6
    JZ 0x00507eda                       ; 00507ec8
        ;   XREF to: 00507eda (CONDITIONAL_JUMP)  ; LAB_00507eda
    MOV AL,byte ptr [ESI + 0x1]         ; 00507eca
    ADD ESI,0x2                         ; 00507ecd
    MOV byte ptr [EDI + 0x1],AL         ; 00507ed0
    ADD EDI,0x2                         ; 00507ed3
    CMP AL,0x0                          ; 00507ed6
    JNZ 0x00507ec2                      ; 00507ed8
        ;   XREF to: 00507ec2 (CONDITIONAL_JUMP)  ; LAB_00507ec2
    POP EDI                             ; 00507eda
        ;   Label: LAB_00507eda
    FILD dword ptr [0x03f98478]         ; 00507edb | g_AvailableSwapSpace
    FMUL float ptr [0x006355ce]         ; 00507ee1 | g_AvailableMemMultiplier
    SUB ESP,0x8                         ; 00507ee7
    FSTP double ptr [ESP]               ; 00507eea
    PUSH 0x6354e6                       ; 00507eed | = "%.1f"
    LEA EAX,[ESP + 0x40c]               ; 00507ef2
    PUSH EAX                            ; 00507ef9
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00507efa
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 00507eff
    LEA ESI,[ESP + 0x400]               ; 00507f02
    MOV EDI,ESP                         ; 00507f09
    PUSH EDI                            ; 00507f0b
    SUB ECX,ECX                         ; 00507f0c
    DEC ECX                             ; 00507f0e
    MOV AL,0x0                          ; 00507f0f
    SCASB.REPNE ES:EDI                  ; 00507f11
    DEC EDI                             ; 00507f13
    MOV AL,byte ptr [ESI]               ; 00507f14
        ;   Label: LAB_00507f14
    MOV byte ptr [EDI],AL               ; 00507f16
    CMP AL,0x0                          ; 00507f18
    JZ 0x00507f2c                       ; 00507f1a
        ;   XREF to: 00507f2c (CONDITIONAL_JUMP)  ; LAB_00507f2c
    MOV AL,byte ptr [ESI + 0x1]         ; 00507f1c
    ADD ESI,0x2                         ; 00507f1f
    MOV byte ptr [EDI + 0x1],AL         ; 00507f22
    ADD EDI,0x2                         ; 00507f25
    CMP AL,0x0                          ; 00507f28
    JNZ 0x00507f14                      ; 00507f2a
        ;   XREF to: 00507f14 (CONDITIONAL_JUMP)  ; LAB_00507f14
    POP EDI                             ; 00507f2c
        ;   Label: LAB_00507f2c
    PUSH 0x6354eb                       ; 00507f2d | = "MB of free swap disk space."
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00507f32
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 00507f37
    MOV EDI,ESP                         ; 00507f3a
    MOV ESI,EAX                         ; 00507f3c
    PUSH EDI                            ; 00507f3e
    SUB ECX,ECX                         ; 00507f3f
    DEC ECX                             ; 00507f41
    MOV AL,0x0                          ; 00507f42
    SCASB.REPNE ES:EDI                  ; 00507f44
    DEC EDI                             ; 00507f46
    MOV AL,byte ptr [ESI]               ; 00507f47
        ;   Label: LAB_00507f47
    MOV byte ptr [EDI],AL               ; 00507f49
    CMP AL,0x0                          ; 00507f4b
    JZ 0x00507f5f                       ; 00507f4d
        ;   XREF to: 00507f5f (CONDITIONAL_JUMP)  ; LAB_00507f5f
    MOV AL,byte ptr [ESI + 0x1]         ; 00507f4f
    ADD ESI,0x2                         ; 00507f52
    MOV byte ptr [EDI + 0x1],AL         ; 00507f55
    ADD EDI,0x2                         ; 00507f58
    CMP AL,0x0                          ; 00507f5b
    JNZ 0x00507f47                      ; 00507f5d
        ;   XREF to: 00507f47 (CONDITIONAL_JUMP)  ; LAB_00507f47
    POP EDI                             ; 00507f5f
        ;   Label: LAB_00507f5f
    MOV ESI,0x635507                    ; 00507f60 | = "\n"
    MOV EDI,ESP                         ; 00507f65
    PUSH EDI                            ; 00507f67
    SUB ECX,ECX                         ; 00507f68
    DEC ECX                             ; 00507f6a
    MOV AL,0x0                          ; 00507f6b
    SCASB.REPNE ES:EDI                  ; 00507f6d
    DEC EDI                             ; 00507f6f
    MOV AL,byte ptr [ESI]               ; 00507f70 | = "\n" | s_Nocturne_runs_best_with__00635509
        ;   Label: LAB_00507f70
    MOV byte ptr [EDI],AL               ; 00507f72
    CMP AL,0x0                          ; 00507f74
    JZ 0x00507f88                       ; 00507f76
        ;   XREF to: 00507f88 (CONDITIONAL_JUMP)  ; LAB_00507f88
    MOV AL,byte ptr [ESI + 0x1]         ; 00507f78 | s_anon_00635507+1 | s_octurne_runs_best_with_at_least_2_0063550a
    ADD ESI,0x2                         ; 00507f7b
    MOV byte ptr [EDI + 0x1],AL         ; 00507f7e
    ADD EDI,0x2                         ; 00507f81
    CMP AL,0x0                          ; 00507f84
    JNZ 0x00507f70                      ; 00507f86
        ;   XREF to: 00507f70 (CONDITIONAL_JUMP)  ; LAB_00507f70
    POP EDI                             ; 00507f88
        ;   Label: LAB_00507f88
    PUSH 0x635509                       ; 00507f89 | = "Nocturne runs best with at least 200M..."
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00507f8e
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 00507f93
    MOV EDI,ESP                         ; 00507f96
    MOV ESI,EAX                         ; 00507f98
    PUSH EDI                            ; 00507f9a
    SUB ECX,ECX                         ; 00507f9b
    DEC ECX                             ; 00507f9d
    MOV AL,0x0                          ; 00507f9e
    SCASB.REPNE ES:EDI                  ; 00507fa0
    DEC EDI                             ; 00507fa2
    MOV AL,byte ptr [ESI]               ; 00507fa3
        ;   Label: LAB_00507fa3
    MOV byte ptr [EDI],AL               ; 00507fa5
    CMP AL,0x0                          ; 00507fa7
    JZ 0x00507fbb                       ; 00507fa9
        ;   XREF to: 00507fbb (CONDITIONAL_JUMP)  ; LAB_00507fbb
    MOV AL,byte ptr [ESI + 0x1]         ; 00507fab
    ADD ESI,0x2                         ; 00507fae
    MOV byte ptr [EDI + 0x1],AL         ; 00507fb1
    ADD EDI,0x2                         ; 00507fb4
    CMP AL,0x0                          ; 00507fb7
    JNZ 0x00507fa3                      ; 00507fb9
        ;   XREF to: 00507fa3 (CONDITIONAL_JUMP)  ; LAB_00507fa3
    POP EDI                             ; 00507fbb
        ;   Label: LAB_00507fbb
    MOV ESI,0x635536                    ; 00507fbc | = "\n"
    MOV EDI,ESP                         ; 00507fc1
    PUSH EDI                            ; 00507fc3
    SUB ECX,ECX                         ; 00507fc4
    DEC ECX                             ; 00507fc6
    MOV AL,0x0                          ; 00507fc7
    SCASB.REPNE ES:EDI                  ; 00507fc9
    DEC EDI                             ; 00507fcb
    MOV AL,byte ptr [ESI]               ; 00507fcc | = "\n" | s_See_README_TXT_for_more__00635538
        ;   Label: LAB_00507fcc
    MOV byte ptr [EDI],AL               ; 00507fce
    CMP AL,0x0                          ; 00507fd0
    JZ 0x00507fe4                       ; 00507fd2
        ;   XREF to: 00507fe4 (CONDITIONAL_JUMP)  ; LAB_00507fe4
    MOV AL,byte ptr [ESI + 0x1]         ; 00507fd4 | s_anon_00635536+1 | s_ee_README.TXT_for_more_informati_00635539
    ADD ESI,0x2                         ; 00507fd7
    MOV byte ptr [EDI + 0x1],AL         ; 00507fda
    ADD EDI,0x2                         ; 00507fdd
    CMP AL,0x0                          ; 00507fe0
    JNZ 0x00507fcc                      ; 00507fe2
        ;   XREF to: 00507fcc (CONDITIONAL_JUMP)  ; LAB_00507fcc
    POP EDI                             ; 00507fe4
        ;   Label: LAB_00507fe4
    PUSH 0x635538                       ; 00507fe5 | = "See README.TXT for more information."
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00507fea
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 00507fef
    MOV EDI,ESP                         ; 00507ff2
    MOV ESI,EAX                         ; 00507ff4
    PUSH EDI                            ; 00507ff6
    SUB ECX,ECX                         ; 00507ff7
    DEC ECX                             ; 00507ff9
    MOV AL,0x0                          ; 00507ffa
    SCASB.REPNE ES:EDI                  ; 00507ffc
    DEC EDI                             ; 00507ffe
    MOV AL,byte ptr [ESI]               ; 00507fff
        ;   Label: LAB_00507fff
    MOV byte ptr [EDI],AL               ; 00508001
    CMP AL,0x0                          ; 00508003
    JZ 0x00508017                       ; 00508005
        ;   XREF to: 00508017 (CONDITIONAL_JUMP)  ; LAB_00508017
    MOV AL,byte ptr [ESI + 0x1]         ; 00508007
    ADD ESI,0x2                         ; 0050800a
    MOV byte ptr [EDI + 0x1],AL         ; 0050800d
    ADD EDI,0x2                         ; 00508010
    CMP AL,0x0                          ; 00508013
    JNZ 0x00507fff                      ; 00508015
        ;   XREF to: 00507fff (CONDITIONAL_JUMP)  ; LAB_00507fff
    POP EDI                             ; 00508017
        ;   Label: LAB_00508017
    MOV EAX,ESP                         ; 00508018
    PUSH EAX                            ; 0050801a
    MOV EBX,dword ptr [0x00678a60]      ; 0050801b | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EBX                            ; 00508021 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showWarning_FUN_0049e6f0 ; 00508022
        ;   XREF to: 0049e6f0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showWarning_FUN_0049e6f0(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 00508027
    CMP dword ptr [0x02db8a64],0x0      ; 0050802a | g_FirstTimeFlag
        ;   Label: LAB_0050802a
    JNZ 0x00508214                      ; 00508031
        ;   XREF to: 00508214 (CONDITIONAL_JUMP)  ; LAB_00508214
    PUSH 0x63555d                       ; 00508037 | = "opening.avi"
        ;   Label: LAB_00508037
    PUSH 0x635569                       ; 0050803c | = "video"
    CALL wincore_winvideo.cpp_playMovie_FUN_005f4a00 ; 00508041
        ;   XREF to: 005f4a00 (UNCONDITIONAL_CALL)  ; int wincore_winvideo.cpp_playMovie_FUN_005f4a00(char * directory_path, char * movie_filename)
    ADD ESP,0x8                         ; 00508046
    CALL engine_special.cpp_clearScreen_FUN_005b3e70 ; 00508049
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_005b3e70()
    PUSH 0x63556f                       ; 0050804e | = "Loading..."
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 00508053
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 00508058
    LEA EDI,[ESP + 0x500]               ; 0050805b
    MOV ESI,EAX                         ; 00508062
    PUSH EDI                            ; 00508064
    MOV AL,byte ptr [ESI]               ; 00508065
        ;   Label: LAB_00508065
    MOV byte ptr [EDI],AL               ; 00508067
    CMP AL,0x0                          ; 00508069
    JZ 0x0050807d                       ; 0050806b
        ;   XREF to: 0050807d (CONDITIONAL_JUMP)  ; LAB_0050807d
    MOV AL,byte ptr [ESI + 0x1]         ; 0050806d
    ADD ESI,0x2                         ; 00508070
    MOV byte ptr [EDI + 0x1],AL         ; 00508073
    ADD EDI,0x2                         ; 00508076
    CMP AL,0x0                          ; 00508079
    JNZ 0x00508065                      ; 0050807b
        ;   XREF to: 00508065 (CONDITIONAL_JUMP)  ; LAB_00508065
    POP EDI                             ; 0050807d
        ;   Label: LAB_0050807d
    LEA EAX,[ESP + 0x500]               ; 0050807e
    PUSH EAX                            ; 00508085
    MOV EDX,dword ptr [0x020a5720]      ; 00508086 | g_ThemeFont
    PUSH EDX                            ; 0050808c
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80 ; 0050808d
        ;   XREF to: 004cfe80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80(CBitFont * this_ptr, char * text)
    ADD ESP,0x8                         ; 00508092
    PUSH 0x58                           ; 00508095
    MOV ECX,dword ptr [0x020a5720]      ; 00508097 | g_ThemeFont
    PUSH ECX                            ; 0050809d
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004d01d0 ; 0050809e
        ;   XREF to: 004d01d0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004d01d0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 005080a3
    LEA EAX,[ESP + 0x700]               ; 005080a6
    PUSH EAX                            ; 005080ad
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520 ; 005080ae
        ;   XREF to: 00410520 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 005080b3
    PUSH 0x1e0                          ; 005080b6
    PUSH 0x280                          ; 005080bb
    PUSH 0x63557a                       ; 005080c0 | = "fangs"
    LEA EAX,[ESP + 0x70c]               ; 005080c5
    PUSH EAX                            ; 005080cc
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0 ; 005080cd
        ;   XREF to: 004105d0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 005080d2
    PUSH 0x8000                         ; 005080d5
    PUSH 0x0                            ; 005080da
    PUSH 0x0                            ; 005080dc
    LEA EAX,[ESP + 0x70c]               ; 005080de
    PUSH EAX                            ; 005080e5
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_00410950 ; 005080e6
        ;   XREF to: 00410950 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_00410950(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    ADD ESP,0x10                        ; 005080eb
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 005080ee
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    PUSH 0x0                            ; 005080f3
    LEA EAX,[ESP + 0x704]               ; 005080f5
    PUSH EAX                            ; 005080fc
    CALL engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_00410540 ; 005080fd
        ;   XREF to: 00410540 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_00410540(CAlphaBitmap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00508102
    MOV EBX,dword ptr [0x00681ef8]      ; 00508105 | g_CSoundInstance | g_CSoundPtr
    PUSH EBX                            ; 0050810b | g_CSoundInstance
    CALL core_sound.cpp_CSound_findAllSoundFiles_FUN_005b2d00 ; 0050810c
        ;   XREF to: 005b2d00 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_findAllSoundFiles_FUN_005b2d00(CSound * this_ptr)
    ADD ESP,0x4                         ; 00508111
    MOV ESI,dword ptr [0x0067d550]      ; 00508114 | g_CDemonMissionPtr
    PUSH ESI                            ; 0050811a | g_CDemonMissionInstance
    XOR EBX,EBX                         ; 0050811b
    CALL core_mission.cpp_CDemonMission_reset_FUN_00522c80 ; 0050811d
        ;   XREF to: 00522c80 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_reset_FUN_00522c80(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 00508122
    XOR ESI,ESI                         ; 00508125
    MOV dword ptr [ESP + 0x714],EBX     ; 00508127
        ;   Label: LAB_00508127
    FILD dword ptr [ESP + 0x714]        ; 0050812e
    FMUL double ptr [0x006355d6]        ; 00508135 | DOUBLE_006355d6
    PUSH 0x0                            ; 0050813b
    FADD double ptr [0x006355d6]        ; 0050813d | DOUBLE_006355d6
    SUB ESP,0x4                         ; 00508143
    FSTP float ptr [ESP]                ; 00508146
    MOV EDI,dword ptr [ESI + 0x66ef9c]  ; 00508149 | g_GlobalFilters | g_GlobalFilters[1]
    PUSH EDI                            ; 0050814f | CDemonFilter_ARRAY_020a4878 | CDemonFilter_ARRAY_020a4878[1].size
    ADD ESI,0x4                         ; 00508150
    INC EBX                             ; 00508153
    CALL core_dfilter.cpp_CDemonFilter_init_FUN_004705a0 ; 00508154
        ;   XREF to: 004705a0 (UNCONDITIONAL_CALL)  ; void core_dfilter.cpp_CDemonFilter_init_FUN_004705a0(CDemonFilter * this_ptr, float init_value, int flags)
    ADD ESP,0xc                         ; 00508159
    CMP EBX,0x8                         ; 0050815c
    JL 0x00508127                       ; 0050815f
        ;   XREF to: 00508127 (CONDITIONAL_JUMP)  ; LAB_00508127
    MOV EDI,0x100                       ; 00508161
    XOR ESI,ESI                         ; 00508166
    XOR EBX,EBX                         ; 00508168
    MOV dword ptr [ESP + 0x714],ESI     ; 0050816a
        ;   Label: LAB_0050816a
    MOV EAX,dword ptr [EBX + 0x66efbc]  ; 00508171 | g_PlayerFilters | g_PlayerFilters[1]
    FILD dword ptr [ESP + 0x714]        ; 00508177
    MOV dword ptr [EAX],EDI             ; 0050817e | CDemonFilter_ARRAY_020a4878 | CDemonFilter_ARRAY_020a4878[1].size
    FMUL double ptr [0x006355de]        ; 00508180 | DOUBLE_006355de
    MOV EAX,dword ptr [EBX + 0x66efbc]  ; 00508186 | g_PlayerFilters | g_PlayerFilters[1]
    PUSH 0x0                            ; 0050818c
    MOV dword ptr [EAX + 0x4],EDI       ; 0050818e | CDemonFilter_ARRAY_020a4878[0].count | CDemonFilter_ARRAY_020a4878[1].count
    FADD double ptr [0x006355de]        ; 00508191 | DOUBLE_006355de
    SUB ESP,0x4                         ; 00508197
    FSTP float ptr [ESP]                ; 0050819a
    MOV EAX,dword ptr [EBX + 0x66efbc]  ; 0050819d | CDemonFilter_ARRAY_020a4878 | CDemonFilter_ARRAY_020a4878[1].size | g_PlayerFilters
    PUSH EAX                            ; 005081a3 | CDemonFilter_ARRAY_020a4878 | CDemonFilter_ARRAY_020a4878[1].size
    ADD EBX,0x4                         ; 005081a4
    INC ESI                             ; 005081a7
    CALL core_dfilter.cpp_CDemonFilter_init_FUN_004705a0 ; 005081a8
        ;   XREF to: 004705a0 (UNCONDITIONAL_CALL)  ; void core_dfilter.cpp_CDemonFilter_init_FUN_004705a0(CDemonFilter * this_ptr, float init_value, int flags)
    ADD ESP,0xc                         ; 005081ad
    CMP ESI,0x4                         ; 005081b0
    JL 0x0050816a                       ; 005081b3
        ;   XREF to: 0050816a (CONDITIONAL_JUMP)  ; LAB_0050816a
    MOV EDX,dword ptr [0x00680b80]      ; 005081b5 | g_CMousePtr
    PUSH EDX                            ; 005081bb | g_CMouseInstance
    CALL engine_ncursfx.cpp_CMouse_load_FUN_00544420 ; 005081bc
        ;   XREF to: 00544420 (UNCONDITIONAL_CALL)  ; void engine_ncursfx.cpp_CMouse_load_FUN_00544420(CMouse * this_ptr)
    ADD ESP,0x4                         ; 005081c1
    MOV ECX,dword ptr [0x00680a00]      ; 005081c4 | g_CNetGameInstance | g_CNetGamePtr
    PUSH ECX                            ; 005081ca | g_CNetGameInstance
    CALL core_netgame.cpp_CNetGame_init_FUN_0053f780 ; 005081cb
        ;   XREF to: 0053f780 (UNCONDITIONAL_CALL)  ; void core_netgame.cpp_CNetGame_init_FUN_0053f780(CNetGame * this_ptr)
    ADD ESP,0x4                         ; 005081d0
    PUSH 0x635580                       ; 005081d3 | = "0"
    PUSH 0x635582                       ; 005081d8 | = "Flip on VBlank"
    PUSH 0x635591                       ; 005081dd | = "SOFTWARE\\Matrox\\PowerDesk\\Current ..."
    CALL wincore_winrun.cpp_setRegistryStringValue_FUN_005f4290 ; 005081e2
        ;   XREF to: 005f4290 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_setRegistryStringValue_FUN_005f4290(char * key_path, char * value_name, char * value_data)
    ADD ESP,0xc                         ; 005081e7
    PUSH 0x49b                          ; 005081ea
    PUSH 0x6355bc                       ; 005081ef | = "..\\core\\main.c"
    CALL shape_memdbg.cpp_SMemHead_checkAllMemory_FUN_0050efe0 ; 005081f4
        ;   XREF to: 0050efe0 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_SMemHead_checkAllMemory_FUN_0050efe0(char * source_filename, int source_line)
    ADD ESP,0x8                         ; 005081f9
    MOV ESP,EBP                         ; 005081fc
    POP EBP                             ; 005081fe
    POP EDI                             ; 005081ff
    POP ESI                             ; 00508200
    POP EBX                             ; 00508201
    RET                                 ; 00508202
    MOV dword ptr [0x00772628],EBX      ; 00508203 | g_RenderingMode
        ;   Label: LAB_00508203
    MOV dword ptr [0x02d051f0],EBX      ; 00508209 | g_SoftwareRenderingForced
    JMP 0x00507aac                      ; 0050820f
        ;   XREF to: 00507aac (UNCONDITIONAL_JUMP)  ; LAB_00507aac
    MOV EAX,[0x0067b654]                ; 00508214 | g_CGameInstance | g_CGamePtr
        ;   Label: LAB_00508214
    XOR EDI,EDI                         ; 00508219
    MOV dword ptr [EAX],0x280           ; 0050821b | g_CGameInstance
    MOV dword ptr [0x02db8a64],EDI      ; 00508221 | g_FirstTimeFlag
    MOV dword ptr [EAX + 0x4],0x1e0     ; 00508227 | g_CGameInstance.game_pixy
    MOV dword ptr [0x03f6b878],EDI      ; 0050822e | g_UseDirect3D
    MOV dword ptr [EAX + 0x8],0x20      ; 00508234 | g_CGameInstance.game_bpp
    CALL core_menu.cpp_showCalibrationTest_FUN_00510ba0 ; 0050823b
        ;   XREF to: 00510ba0 (UNCONDITIONAL_CALL)  ; void core_menu.cpp_showCalibrationTest_FUN_00510ba0()
    JMP 0x00508037                      ; 00508240
        ;   XREF to: 00508037 (UNCONDITIONAL_JUMP)  ; LAB_00508037

