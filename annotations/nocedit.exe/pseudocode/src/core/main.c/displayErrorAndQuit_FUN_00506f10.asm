; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_main_c_displayErrorAndQuit_FUN_00506f10(char *format,...)
;
; Parameters:
; char *           Stack[0x4]:4   format
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
; undefined1       Stack[-0x10]:1  local_10
;
; XREF[741]:
;   cockpit_ckptutil.c_generateScrollHeightMap_FUN_00432df0 at 00432fcf
;   cockpit_ckptutil.c_generateTransparencySpans_FUN_00435730 at 00435873
;   cockpit_ckptutil.c_loadACTPaletteFile_FUN_00431ac0 at 00431bb5
;   cockpit_ckptutil.c_loadEdgeListFile_FUN_004331f0 at 0043324a
;   cockpit_ckptutil.c_loadRotatedBitmapFile_FUN_00434690 at 0043474e
;   cockpit_ckptutil.c_rasterizeEdgeEndpoints_FUN_004336e0 at 00433778
;   cockpit_ckptutil.c_readBitmapFile_FUN_00431870 at 004318cf
;   cockpit_ckptutil.c_rotateBitmap_FUN_00434870 at 0043499c
;   cockpit_ckptutil.c_saveEdgeListFile_FUN_00433480 at 004334de
;   cockpit_ckptutil.c_traceConnectedEdges_FUN_00434af0 at 00434c1b
;   ... and 731 more
;
; Referenced Globals:
;   TerminatedCString s_core_main_c_006315be
;   TerminatedCString s_at_006315cd
;   TerminatedCString s_gtfo_txt_006315d0
;   TerminatedCString s_Recursive_GTFO_006315d9
;   TerminatedCString s_core_main_c_006315ea
;   TerminatedCString s_core_main_c_006315f9
;   TerminatedCString s_at_00631608
;   TerminatedCString s_gtfo_txt_0063160b
;   TerminatedCString s_anon_00631614
;   TerminatedCString s_Msg_s_00631656
;   TerminatedCString s_File_s_line_d_0063165f
;   TerminatedCString s_Time_s_00631671
;   TerminatedCString s_errno_d_s_0063167a
;   TerminatedCString s_core_main_c_0063168b
;   CSound* g_CSoundPtr = 03f6af64
;   ... and 5 more
;
; Called Functions:
;   core_sound.cpp_CSound_dtor_FUN_005aaeb0
;   crt_errno.c__errno_FUN_00601450
;   crt_startup.c_notifyAbnormalTermination_FUN_00601620
;   crt_stdio.c__vsprintf_FUN_005fdba8
;   crt_stdio.c_fprintf_FUN_005fe6d0
;   crt_string.c_strerror_FUN_00601470
;   crt_time.c__asctime_FUN_00601768
;   crt_time.c__localtime_FUN_00600288
;   crt_time.c__time_FUN_006001f0
;   engine_2d.c_cleanupGraphicsSystem_FUN_005ecd90
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   shape_memdbg.cpp_openFile_FUN_0050f7a0
;   wincore_winrun.cpp_displayMessageBoxAndQuit_FUN_005f3920
;   wincore_winrun.cpp_endPeriod_FUN_005f2db0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00506f10
        ;   Label: core_main.c_displayErrorAndQuit_FUN_00506f10
    PUSH ESI                            ; 00506f11
    PUSH EBP                            ; 00506f12
    SUB ESP,0x8                         ; 00506f13
    CMP dword ptr [0x02f0ca50],0x0      ; 00506f16 | g_RecursiveCallFlag
    JNZ 0x00506f9c                      ; 00506f1d
        ;   XREF to: 00506f9c (CONDITIONAL_JUMP)  ; LAB_00506f9c
    LEA EAX,[ESP + 0x1c]                ; 00506f23
        ;   Label: LAB_00506f23
    MOV dword ptr [ESP],EAX             ; 00506f27
    MOV EAX,ESP                         ; 00506f2a
    PUSH EAX                            ; 00506f2c
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00506f2d
    PUSH EBX                            ; 00506f31
    MOV ECX,0x1                         ; 00506f32
    PUSH 0x2dd3130                      ; 00506f37 | g_ErrorMessageBuffer_02dd3130
    XOR ESI,ESI                         ; 00506f3c
    MOV dword ptr [0x02f0ca50],ECX      ; 00506f3e | g_RecursiveCallFlag
    CALL crt_stdio.c__vsprintf_FUN_005fdba8 ; 00506f44
        ;   XREF to: 005fdba8 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__vsprintf_FUN_005fdba8(char * buffer, char * format, va_list_t args)
    ADD ESP,0xc                         ; 00506f49
    MOV DH,0x5c                         ; 00506f4c
    MOV dword ptr [ESP],ESI             ; 00506f4e
    MOV DL,DH                           ; 00506f51
    MOV ESI,dword ptr [0x02f0ca48]      ; 00506f53 | g_CurrentFilename
        ;   Label: LAB_00506f53
    MOV AL,byte ptr [ESI]               ; 00506f59
        ;   Label: LAB_00506f59
    CMP AL,DL                           ; 00506f5b
    JZ 0x00506f71                       ; 00506f5d
        ;   XREF to: 00506f71 (CONDITIONAL_JUMP)  ; LAB_00506f71
    CMP AL,0x0                          ; 00506f5f
    JZ 0x00506f6f                       ; 00506f61
        ;   XREF to: 00506f6f (CONDITIONAL_JUMP)  ; LAB_00506f6f
    INC ESI                             ; 00506f63
    MOV AL,byte ptr [ESI]               ; 00506f64
    CMP AL,DL                           ; 00506f66
    JZ 0x00506f71                       ; 00506f68
        ;   XREF to: 00506f71 (CONDITIONAL_JUMP)  ; LAB_00506f71
    INC ESI                             ; 00506f6a
    CMP AL,0x0                          ; 00506f6b
    JNZ 0x00506f59                      ; 00506f6d
        ;   XREF to: 00506f59 (CONDITIONAL_JUMP)  ; LAB_00506f59
    SUB ESI,ESI                         ; 00506f6f
        ;   Label: LAB_00506f6f
    TEST ESI,ESI                        ; 00506f71
        ;   Label: LAB_00506f71
    JZ 0x00506feb                       ; 00506f73
        ;   XREF to: 00506feb (CONDITIONAL_JUMP)  ; LAB_00506feb
    MOV ESI,dword ptr [0x02f0ca48]      ; 00506f75 | g_CurrentFilename
    MOV AL,byte ptr [ESI]               ; 00506f7b
        ;   Label: LAB_00506f7b
    CMP AL,DL                           ; 00506f7d
    JZ 0x00506f93                       ; 00506f7f
        ;   XREF to: 00506f93 (CONDITIONAL_JUMP)  ; LAB_00506f93
    CMP AL,0x0                          ; 00506f81
    JZ 0x00506f91                       ; 00506f83
        ;   XREF to: 00506f91 (CONDITIONAL_JUMP)  ; LAB_00506f91
    INC ESI                             ; 00506f85
    MOV AL,byte ptr [ESI]               ; 00506f86
    CMP AL,DL                           ; 00506f88
    JZ 0x00506f93                       ; 00506f8a
        ;   XREF to: 00506f93 (CONDITIONAL_JUMP)  ; LAB_00506f93
    INC ESI                             ; 00506f8c
    CMP AL,0x0                          ; 00506f8d
    JNZ 0x00506f7b                      ; 00506f8f
        ;   XREF to: 00506f7b (CONDITIONAL_JUMP)  ; LAB_00506f7b
    SUB ESI,ESI                         ; 00506f91
        ;   Label: LAB_00506f91
    INC ESI                             ; 00506f93
        ;   Label: LAB_00506f93
    MOV dword ptr [0x02f0ca48],ESI      ; 00506f94 | g_CurrentFilename
    JMP 0x00506f53                      ; 00506f9a
        ;   XREF to: 00506f53 (UNCONDITIONAL_JUMP)  ; LAB_00506f53
    PUSH 0x80                           ; 00506f9c
        ;   Label: LAB_00506f9c
    PUSH 0x6315be                       ; 00506fa1 | = "..\\core\\main.c"
    PUSH 0x6315cd                       ; 00506fa6 | = "at"
    PUSH 0x0                            ; 00506fab
    PUSH 0x6315d0                       ; 00506fad | = "gtfo.txt"
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 00506fb2
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; _FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    MOV ESI,EAX                         ; 00506fb7
    ADD ESP,0x14                        ; 00506fb9
    TEST EAX,EAX                        ; 00506fbc
    JZ 0x00506fe1                       ; 00506fbe
        ;   XREF to: 00506fe1 (CONDITIONAL_JUMP)  ; LAB_00506fe1
    PUSH 0x6315d9                       ; 00506fc0 | = "Recursive GTFO!\n"
    PUSH EAX                            ; 00506fc5
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00506fc6
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 00506fcb
    PUSH 0x83                           ; 00506fce
    PUSH 0x6315ea                       ; 00506fd3 | = "..\\core\\main.c"
    PUSH ESI                            ; 00506fd8
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 00506fd9
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 00506fde
    CALL crt_startup.c_notifyAbnormalTermination_FUN_00601620 ; 00506fe1
        ;   XREF to: 00601620 (UNCONDITIONAL_CALL)  ; void crt_startup.c_notifyAbnormalTermination_FUN_00601620()
        ;   Label: LAB_00506fe1
    JMP 0x00506f23                      ; 00506fe6
        ;   XREF to: 00506f23 (UNCONDITIONAL_JUMP)  ; LAB_00506f23
    PUSH 0xa4                           ; 00506feb
        ;   Label: LAB_00506feb
    PUSH 0x6315f9                       ; 00506ff0 | = "..\\core\\main.c"
    PUSH 0x631608                       ; 00506ff5 | = "at"
    PUSH ESI                            ; 00506ffa
    PUSH 0x63160b                       ; 00506ffb | = "gtfo.txt"
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 00507000
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; _FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    MOV ESI,EAX                         ; 00507005
    ADD ESP,0x14                        ; 00507007
    TEST EAX,EAX                        ; 0050700a
    JNZ 0x0050703b                      ; 0050700c
        ;   XREF to: 0050703b (CONDITIONAL_JUMP)  ; LAB_0050703b
    MOV EBX,dword ptr [0x00681ef8]      ; 0050700e | g_CSoundInstance | g_CSoundPtr
        ;   Label: LAB_0050700e
    PUSH EBX                            ; 00507014 | g_CSoundInstance
    CALL core_sound.cpp_CSound_dtor_FUN_005aaeb0 ; 00507015
        ;   XREF to: 005b2d60 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_dtor_FUN_005aaeb0()
    ADD ESP,0x4                         ; 0050701a
    CALL engine_2d.c_cleanupGraphicsSystem_FUN_005ecd90 ; 0050701d
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_cleanupGraphicsSystem_FUN_005ecd90()
    CALL wincore_winrun.cpp_endPeriod_FUN_005f2db0 ; 00507022
        ;   XREF to: 005f2db0 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_endPeriod_FUN_005f2db0()
    PUSH 0x2dd3130                      ; 00507027 | g_ErrorMessageBuffer_02dd3130
    CALL wincore_winrun.cpp_displayMessageBoxAndQuit_FUN_005f3920 ; 0050702c
        ;   XREF to: 005f3920 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_displayMessageBoxAndQuit_FUN_005f3920(char * message)
    PUSH EDI                            ; 0050703b
        ;   Label: LAB_0050703b
    PUSH 0x631614                       ; 0050703c | = "-------------------------------------..."
    PUSH EAX                            ; 00507041
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00507042
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 00507047
    LEA EAX,[ESP + 0x8]                 ; 0050704a
    PUSH EAX                            ; 0050704e
    CALL crt_time.c__time_FUN_006001f0  ; 0050704f
        ;   XREF to: 006001f0 (UNCONDITIONAL_CALL)  ; time_t crt_time.c__time_FUN_006001f0(time_t * optional_output)
    ADD ESP,0x4                         ; 00507054
    PUSH 0x2dd3130                      ; 00507057 | g_ErrorMessageBuffer_02dd3130
    PUSH 0x631656                       ; 0050705c | = "Msg: %s\n"
    PUSH ESI                            ; 00507061
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00507062
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00507067
    MOV EDI,dword ptr [0x02f0ca4c]      ; 0050706a | g_CurrentLineNumber
    PUSH EDI                            ; 00507070
    MOV EBP,dword ptr [0x02f0ca48]      ; 00507071 | g_CurrentFilename
    PUSH EBP                            ; 00507077
    PUSH 0x63165f                       ; 00507078 | = "File: %s line %d\n"
    PUSH ESI                            ; 0050707d
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0050707e
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x10                        ; 00507083
    LEA EAX,[ESP + 0x8]                 ; 00507086
    PUSH EAX                            ; 0050708a
    CALL crt_time.c__localtime_FUN_00600288 ; 0050708b
        ;   XREF to: 00600288 (UNCONDITIONAL_CALL)  ; _tm * crt_time.c__localtime_FUN_00600288(time_t * timer)
    ADD ESP,0x4                         ; 00507090
    PUSH EAX                            ; 00507093
    CALL crt_time.c__asctime_FUN_00601768 ; 00507094
        ;   XREF to: 00601768 (UNCONDITIONAL_CALL)  ; char * crt_time.c__asctime_FUN_00601768(_tm * timeptr)
    ADD ESP,0x4                         ; 00507099
    PUSH EAX                            ; 0050709c
    PUSH 0x631671                       ; 0050709d | = "Time: %s"
    PUSH ESI                            ; 005070a2
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 005070a3
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 005070a8
    CALL crt_errno.c__errno_FUN_00601450 ; 005070ab
        ;   XREF to: 00601450 (UNCONDITIONAL_CALL)  ; undefined crt_errno.c__errno_FUN_00601450()
    MOV EDX,dword ptr [EAX]             ; 005070b0
    PUSH EDX                            ; 005070b2
    CALL crt_string.c_strerror_FUN_00601470 ; 005070b3
        ;   XREF to: 00601470 (UNCONDITIONAL_CALL)  ; char * crt_string.c_strerror_FUN_00601470(int errnum)
    ADD ESP,0x4                         ; 005070b8
    PUSH EAX                            ; 005070bb
    CALL crt_errno.c__errno_FUN_00601450 ; 005070bc
        ;   XREF to: 00601450 (UNCONDITIONAL_CALL)  ; undefined crt_errno.c__errno_FUN_00601450()
    MOV ECX,dword ptr [EAX]             ; 005070c1
    PUSH ECX                            ; 005070c3
    PUSH 0x63167a                       ; 005070c4 | = "errno = %d (%s)\n"
    PUSH ESI                            ; 005070c9
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 005070ca
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x10                        ; 005070cf
    PUSH 0xad                           ; 005070d2
    PUSH 0x63168b                       ; 005070d7 | = "..\\core\\main.c"
    PUSH ESI                            ; 005070dc
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 005070dd
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 005070e2
    POP EDI                             ; 005070e5
    JMP 0x0050700e                      ; 005070e6
        ;   XREF to: 0050700e (UNCONDITIONAL_JUMP)  ; LAB_0050700e

