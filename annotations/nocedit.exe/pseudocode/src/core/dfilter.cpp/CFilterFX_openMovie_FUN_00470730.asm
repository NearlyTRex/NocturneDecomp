; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dfilter.cpp_CFilterFX_openMovie_FUN_00470730(CFilterFx * this_ptr, char * filename)
;
; Parameters:
; CFilterFx *      Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
; Local Variables:
; undefined1       Stack[-0x10c]:1  local_10c
;
; XREF[1]:
;   core_filmreel.cpp_CFilmProjector_load_FUN_004beb40 at 004bec99
;
; Referenced Globals:
;   TerminatedCString s_movscrn_raw_0061e78a
;   TerminatedCString s_movscrn_raw_0061e796
;   TerminatedCString s_s_txt_0061e7a2
;   TerminatedCString s_rt_0061e7a9
;   TerminatedCString s_core_dfilter_cpp_0061e7ac
;   TerminatedCString s_Can_t_open_movie_s_txt_0061e7c0
;   TerminatedCString s_d_0061e7d8
;   TerminatedCString s_core_dfilter_cpp_0061e7dc
;   TerminatedCString s_core_dfilter_cpp_0061e7f0
;   TerminatedCString s_s_mov_0061e804
;   TerminatedCString s_rb_0061e80b
;   TerminatedCString s_core_dfilter_cpp_0061e80e
;   TerminatedCString s_Can_t_open_movie_s_mov_0061e822
;   TerminatedCString s_core_dfilter_cpp_0061e83a
;   CFilterCache* g_CFilterCachePtr = 020a4c08
;   ... and 3 more
;
; Called Functions:
;   core_dfilter.cpp_CDemonFilter_load_FUN_004702f0
;   core_dfilter.cpp_CFilterCache_findFilter_FUN_004701a0
;   core_dfilter.cpp_CFilterFX_free_FUN_00470700
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_fread_FUN_005fd990
;   crt_stdio.c_fscanf_FUN_005fe7c0
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   engine_dosio.c_getFile_FUN_00481a50
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   shape_memdbg.cpp_debugMalloc_FUN_0050f250
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00470730
        ;   Label: core_dfilter.cpp_CFilterFX_openMovie_FUN_00470730
    PUSH ESI                            ; 00470731
    PUSH EBP                            ; 00470732
    SUB ESP,0x100                       ; 00470733
    MOV ESI,dword ptr [ESP + 0x110]     ; 00470739
    MOV EBX,dword ptr [ESP + 0x114]     ; 00470740
    PUSH ESI                            ; 00470747
    CALL core_dfilter.cpp_CFilterFX_free_FUN_00470700 ; 00470748 | void core_dfilter.cpp_CFilterFX_free_FUN_00470700(CFilterFx * this_ptr)
        ;   XREF to: 00470700 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0047074d
    TEST EBX,EBX                        ; 00470750
    JZ 0x0047086f                       ; 00470752 | LAB_0047086f
        ;   XREF to: 0047086f (CONDITIONAL_JUMP)
    PUSH EDI                            ; 00470758
    PUSH EBX                            ; 00470759
    PUSH 0x61e7a2                       ; 0047075a | = "%s.txt" | s_s_txt_0061e7a2 = %s.txt
    LEA EAX,[ESP + 0xc]                 ; 0047075f
    PUSH EAX                            ; 00470763
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00470764 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00470769
    PUSH 0x61e7a9                       ; 0047076c | = "rt" | s_rt_0061e7a9 = rt
    LEA EAX,[ESP + 0x8]                 ; 00470771
    PUSH EAX                            ; 00470775
    PUSH EBX                            ; 00470776
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 00470777 | FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0047077c
    MOV EDI,EAX                         ; 0047077f
    TEST EAX,EAX                        ; 00470781
    JNZ 0x004707a9                      ; 00470783 | LAB_004707a9
        ;   XREF to: 004707a9 (CONDITIONAL_JUMP)
    PUSH EBX                            ; 00470785
    MOV EDX,0x61e7ac                    ; 00470786 | = "..\\core\\dfilter.cpp" | s_core_dfilter_cpp_0061e7ac = ..\core\dfilter.cpp
    MOV ECX,0x15a                       ; 0047078b
    PUSH 0x61e7c0                       ; 00470790 | = "Can't open movie %s.txt" | s_Can_t_open_movie_s_txt_0061e7c0 = Can't open movie %s.txt
    MOV dword ptr [0x02f0ca48],EDX      ; 00470795 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 0047079b | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004707a1 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004707a6
    PUSH ESI                            ; 004707a9
        ;   Label: LAB_004707a9
    PUSH 0x61e7d8                       ; 004707aa | = "%d\n" | s_d_0061e7d8 = %d

    PUSH EDI                            ; 004707af
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 004707b0 | int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004707b5
    PUSH 0x15c                          ; 004707b8
    PUSH 0x61e7dc                       ; 004707bd | = "..\\core\\dfilter.cpp" | s_core_dfilter_cpp_0061e7dc = ..\core\dfilter.cpp
    PUSH EDI                            ; 004707c2
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004707c3 | int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004707c8
    PUSH 0x160                          ; 004707cb
    MOV EAX,dword ptr [ESI]             ; 004707d0
    PUSH 0x61e7f0                       ; 004707d2 | = "..\\core\\dfilter.cpp" | s_core_dfilter_cpp_0061e7f0 = ..\core\dfilter.cpp
    SHL EAX,0xd                         ; 004707d7
    PUSH EAX                            ; 004707da
    CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250 ; 004707db | void * shape_memdbg.cpp_debugMalloc_FUN_0050f250(int size, char * filename, int line_number)
        ;   XREF to: 0050f250 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004707e0
    PUSH EBX                            ; 004707e3
    PUSH 0x61e804                       ; 004707e4 | = "%s.mov" | s_s_mov_0061e804 = %s.mov
    MOV dword ptr [ESI + 0x4],EAX       ; 004707e9
    LEA EAX,[ESP + 0xc]                 ; 004707ec
    PUSH EAX                            ; 004707f0
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004707f1 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004707f6
    PUSH 0x61e80b                       ; 004707f9 | = "rb" | s_rb_0061e80b = rb
    LEA EAX,[ESP + 0x8]                 ; 004707fe
    PUSH EAX                            ; 00470802
    PUSH EBX                            ; 00470803
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 00470804 | FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00470809
    MOV EDI,EAX                         ; 0047080c
    TEST EAX,EAX                        ; 0047080e
    JZ 0x0047089b                       ; 00470810 | LAB_0047089b
        ;   XREF to: 0047089b (CONDITIONAL_JUMP)
    PUSH EDI                            ; 00470816
        ;   Label: LAB_00470816
    MOV EDX,dword ptr [ESI]             ; 00470817
    PUSH EDX                            ; 00470819
    PUSH 0x2000                         ; 0047081a
    MOV ECX,dword ptr [ESI + 0x4]       ; 0047081f
    PUSH ECX                            ; 00470822
    CALL crt_stdio.c_fread_FUN_005fd990 ; 00470823 | SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, FILE * file)
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00470828
    PUSH 0x168                          ; 0047082b
    PUSH 0x61e83a                       ; 00470830 | = "..\\core\\dfilter.cpp" | s_core_dfilter_cpp_0061e83a = ..\core\dfilter.cpp
    PUSH EDI                            ; 00470835
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 00470836 | int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0047083b
    XOR ECX,ECX                         ; 0047083e
    POP EDI                             ; 00470840
    MOV EAX,dword ptr [ESI]             ; 00470841
        ;   Label: LAB_00470841
    SHL EAX,0xd                         ; 00470843
    CMP ECX,EAX                         ; 00470846
    JGE 0x004708c3                      ; 00470848 | LAB_004708c3
        ;   XREF to: 004708c3 (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [ESI + 0x4]       ; 0047084a
    XOR EDX,EDX                         ; 0047084d
    MOV DL,byte ptr [ECX + EBX*0x1]     ; 0047084f
    MOV EAX,EDX                         ; 00470852
    SAR EDX,0x1f                        ; 00470854
    SHL EDX,0x2                         ; 00470857
    SBB EAX,EDX                         ; 0047085a
    SAR EAX,0x2                         ; 0047085c
    MOV EDX,EAX                         ; 0047085f
    SAR EDX,0x1f                        ; 00470861
    SUB EAX,EDX                         ; 00470864
    SAR EAX,0x1                         ; 00470866
    INC ECX                             ; 00470868
    MOV byte ptr [ECX + EBX*0x1 + -0x1],AL ; 00470869
    JMP 0x00470841                      ; 0047086d | LAB_00470841
        ;   XREF to: 00470841 (UNCONDITIONAL_JUMP)
    PUSH 0x61e78a                       ; 0047086f | = "movscrn.raw" | s_movscrn_raw_0061e78a = movscrn.raw
        ;   Label: LAB_0047086f
    MOV EBX,dword ptr [0x0066efcc]      ; 00470874 | CFilterCache g_CFilterCacheInstance | CFilterCache * g_CFilterCachePtr
    PUSH EBX                            ; 0047087a | CFilterCache g_CFilterCacheInstance
    CALL core_dfilter.cpp_CFilterCache_findFilter_FUN_004701a0 ; 0047087b | CDemonFilter * core_dfilter.cpp_CFilterCache_findFilter_FUN_004701a0(CFilterCache * this_ptr, char * filter_name)
        ;   XREF to: 004701a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00470880
    PUSH 0x61e796                       ; 00470883 | = "movscrn.raw" | s_movscrn_raw_0061e796 = movscrn.raw
    PUSH EAX                            ; 00470888
    CALL core_dfilter.cpp_CDemonFilter_load_FUN_004702f0 ; 00470889 | void core_dfilter.cpp_CDemonFilter_load_FUN_004702f0(CDemonFilter * this_ptr, char * filename)
        ;   XREF to: 004702f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0047088e
    ADD ESP,0x100                       ; 00470891
    POP EBP                             ; 00470897
    POP ESI                             ; 00470898
    POP EBX                             ; 00470899
    RET                                 ; 0047089a
    PUSH EBX                            ; 0047089b
        ;   Label: LAB_0047089b
    MOV EBP,0x61e80e                    ; 0047089c | = "..\\core\\dfilter.cpp" | s_core_dfilter_cpp_0061e80e = ..\core\dfilter.cpp
    MOV EAX,0x166                       ; 004708a1
    PUSH 0x61e822                       ; 004708a6 | = "Can't open movie %s.mov" | s_Can_t_open_movie_s_mov_0061e822 = Can't open movie %s.mov
    MOV dword ptr [0x02f0ca48],EBP      ; 004708ab | char * g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 004708b1 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004708b6 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004708bb
    JMP 0x00470816                      ; 004708be | LAB_00470816
        ;   XREF to: 00470816 (UNCONDITIONAL_JUMP)
    MOV dword ptr [ESI + 0x8],0x0       ; 004708c3
        ;   Label: LAB_004708c3
    ADD ESP,0x100                       ; 004708ca
    POP EBP                             ; 004708d0
    POP ESI                             ; 004708d1
    POP EBX                             ; 004708d2
    RET                                 ; 004708d3

