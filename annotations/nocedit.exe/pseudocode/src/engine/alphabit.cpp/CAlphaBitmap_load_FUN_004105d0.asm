; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
;
; Parameters:
; CAlphaBitmap *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
; int              Stack[0xc]:4   width
; int              Stack[0x10]:4   height
; Local Variables:
; undefined1       Stack[-0x114]:1  local_114
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[13]:
;   core_game.cpp_CGame_displayActStats_FUN_004e3800 at 004e3831
;   core_game.cpp_CGame_finishAct_FUN_004e3b90 at 004e3cbc
;   core_game.cpp_CGame_rollCredits_FUN_004e4010 at 004e406b
;   core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004daed0 at 004daf32
;   core_inv.cpp_loadInventory_FUN_004fd220 at 004fd280
;   core_level.cpp_CLevelLoader_show_FUN_00503dc0 at 00503eb0
;   core_main.c_finalizeGameSystems_FUN_00508570 at 005085fa
;   core_main.c_initializeGameSystems_FUN_00507a60 at 005080cd
;   core_main.c_showPromoScreen_FUN_00508340 at 00508399
;   core_menu.cpp_showCalibrationTest_FUN_00510ba0 at 00510bb4
;   ... and 3 more
;
; Referenced Globals:
;   TerminatedCString s_engine_alphabit_cpp_00614747
;   TerminatedCString s_engine_alphabit_cpp_0061475e
;   TerminatedCString s_CAlphaBitmap_load_Out_of_00614775
;   TerminatedCString s_engine_alphabit_cpp_00614798
;   TerminatedCString s_engine_alphabit_cpp_006147af
;   TerminatedCString s_CAlphaBitmap_load_Out_of_006147c6
;   TerminatedCString s_engine_alphabit_cpp_006147e9
;   TerminatedCString s_engine_alphabit_cpp_00614800
;   TerminatedCString s_CAlphaBitmap_load_Out_of_00614817
;   TerminatedCString s_s_raw_0061483a
;   TerminatedCString s_rb_00614841
;   TerminatedCString s_art_00614844
;   TerminatedCString s_engine_alphabit_cpp_00614848
;   TerminatedCString s_CAlphaBitmap_load_Can_t__0061485f
;   TerminatedCString s_engine_alphabit_cpp_00614882
;   ... and 16 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_fgetc_FUN_005fe840
;   crt_stdio.c_fread_FUN_005fd990
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560
;   engine_dosio.c_getFile_FUN_00481a50
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   shape_memdbg.cpp_debugMalloc_FUN_0050f250
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004105d0
        ;   Label: engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0
    PUSH ESI                            ; 004105d1
    PUSH EDI                            ; 004105d2
    PUSH EBP                            ; 004105d3
    SUB ESP,0x104                       ; 004105d4
    MOV EBX,dword ptr [ESP + 0x118]     ; 004105da
    PUSH EBX                            ; 004105e1
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560 ; 004105e2 | void engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560(CAlphaBitmap * this_ptr)
        ;   XREF to: 00410560 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004105e7
    MOV EAX,dword ptr [ESP + 0x120]     ; 004105ea
    MOV dword ptr [EBX + 0xc],EAX       ; 004105f1
    MOV EAX,dword ptr [ESP + 0x124]     ; 004105f4
    MOV EDX,dword ptr [ESP + 0x124]     ; 004105fb
    MOV dword ptr [EBX + 0x10],EAX      ; 00410602
    MOV EAX,dword ptr [ESP + 0x120]     ; 00410605
    IMUL EAX,EDX                        ; 0041060c
    PUSH 0x52                           ; 0041060f
    PUSH 0x614747                       ; 00410611 | = "..\\engine\\alphabit.cpp" | s_engine_alphabit_cpp_00614747 = ..\engine\alphabit.cpp
    PUSH EAX                            ; 00410616
    CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250 ; 00410617 | void * shape_memdbg.cpp_debugMalloc_FUN_0050f250(int size, char * filename, int line_number)
        ;   XREF to: 0050f250 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0041061c
    MOV dword ptr [EBX],EAX             ; 0041061f
    TEST EAX,EAX                        ; 00410621
    JZ 0x0041088e                       ; 00410623 | LAB_0041088e
        ;   XREF to: 0041088e (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x120]     ; 00410629
        ;   Label: LAB_00410629
    IMUL EAX,dword ptr [ESP + 0x124]    ; 00410630
    PUSH 0x55                           ; 00410638
    PUSH 0x614798                       ; 0041063a | = "..\\engine\\alphabit.cpp" | s_engine_alphabit_cpp_00614798 = ..\engine\alphabit.cpp
    PUSH EAX                            ; 0041063f
    CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250 ; 00410640 | void * shape_memdbg.cpp_debugMalloc_FUN_0050f250(int size, char * filename, int line_number)
        ;   XREF to: 0050f250 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00410645
    MOV dword ptr [EBX + 0x4],EAX       ; 00410648
    TEST EAX,EAX                        ; 0041064b
    JNZ 0x00410672                      ; 0041064d | LAB_00410672
        ;   XREF to: 00410672 (CONDITIONAL_JUMP)
    MOV EDX,0x6147af                    ; 0041064f | = "..\\engine\\alphabit.cpp" | s_engine_alphabit_cpp_006147af = ..\engine\alphabit.cpp
    MOV ECX,0x56                        ; 00410654
    PUSH 0x6147c6                       ; 00410659 | = "CAlphaBitmap::load - Out of memory" | s_CAlphaBitmap_load_Out_of_006147c6 = CAlphaBitmap::load - Out of memory
    MOV dword ptr [0x02f0ca48],EDX      ; 0041065e | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 00410664 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0041066a | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0041066f
    PUSH 0x58                           ; 00410672
        ;   Label: LAB_00410672
    PUSH 0x6147e9                       ; 00410674 | = "..\\engine\\alphabit.cpp" | s_engine_alphabit_cpp_006147e9 = ..\engine\alphabit.cpp
    PUSH 0x400                          ; 00410679
    CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250 ; 0041067e | void * shape_memdbg.cpp_debugMalloc_FUN_0050f250(int size, char * filename, int line_number)
        ;   XREF to: 0050f250 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00410683
    MOV dword ptr [EBX + 0x8],EAX       ; 00410686
    TEST EAX,EAX                        ; 00410689
    JNZ 0x004106b0                      ; 0041068b | LAB_004106b0
        ;   XREF to: 004106b0 (CONDITIONAL_JUMP)
    MOV EDI,0x614800                    ; 0041068d | = "..\\engine\\alphabit.cpp" | s_engine_alphabit_cpp_00614800 = ..\engine\alphabit.cpp
    MOV EBP,0x59                        ; 00410692
    PUSH 0x614817                       ; 00410697 | = "CAlphaBitmap::load - Out of memory" | s_CAlphaBitmap_load_Out_of_00614817 = CAlphaBitmap::load - Out of memory
    MOV dword ptr [0x02f0ca48],EDI      ; 0041069c | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBP      ; 004106a2 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004106a8 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004106ad
    MOV EAX,dword ptr [ESP + 0x11c]     ; 004106b0
        ;   Label: LAB_004106b0
    PUSH EAX                            ; 004106b7
    PUSH 0x61483a                       ; 004106b8 | = "%s.raw" | s_s_raw_0061483a = %s.raw
    LEA EAX,[ESP + 0x8]                 ; 004106bd
    PUSH EAX                            ; 004106c1
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004106c2 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004106c7
    PUSH 0x614841                       ; 004106ca | = "rb" | s_rb_00614841 = rb
    LEA EAX,[ESP + 0x4]                 ; 004106cf
    PUSH EAX                            ; 004106d3
    PUSH 0x614844                       ; 004106d4 | = "art" | s_art_00614844 = art
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 004106d9 | FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004106de
    MOV dword ptr [ESP + 0x100],EAX     ; 004106e1
    TEST EAX,EAX                        ; 004106e8
    JNZ 0x00410712                      ; 004106ea | LAB_00410712
        ;   XREF to: 00410712 (CONDITIONAL_JUMP)
    MOV EAX,ESP                         ; 004106ec
    PUSH EAX                            ; 004106ee
    MOV EDX,0x614848                    ; 004106ef | = "..\\engine\\alphabit.cpp" | s_engine_alphabit_cpp_00614848 = ..\engine\alphabit.cpp
    MOV ECX,0x5f                        ; 004106f4
    PUSH 0x61485f                       ; 004106f9 | = "CAlphaBitmap::load - Can't open %s" | s_CAlphaBitmap_load_Can_t__0061485f = CAlphaBitmap::load - Can't open %s
    MOV dword ptr [0x02f0ca48],EDX      ; 004106fe | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 00410704 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0041070a | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0041070f
    MOV ESI,dword ptr [ESP + 0x100]     ; 00410712
        ;   Label: LAB_00410712
    PUSH ESI                            ; 00410719
    MOV EDI,dword ptr [ESP + 0x128]     ; 0041071a
    PUSH EDI                            ; 00410721
    MOV EBP,dword ptr [ESP + 0x128]     ; 00410722
    PUSH EBP                            ; 00410729
    MOV EAX,dword ptr [EBX]             ; 0041072a
    PUSH EAX                            ; 0041072c
    CALL crt_stdio.c_fread_FUN_005fd990 ; 0041072d | SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, FILE * file)
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00410732
    PUSH 0x61                           ; 00410735
    PUSH 0x614882                       ; 00410737 | = "..\\engine\\alphabit.cpp" | s_engine_alphabit_cpp_00614882 = ..\engine\alphabit.cpp
    PUSH ESI                            ; 0041073c
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0041073d | int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00410742
    MOV ECX,dword ptr [ESP + 0x11c]     ; 00410745
    PUSH ECX                            ; 0041074c
    PUSH 0x614899                       ; 0041074d | = "%s.act" | s_s_act_00614899 = %s.act
    LEA EAX,[ESP + 0x8]                 ; 00410752
    PUSH EAX                            ; 00410756
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00410757 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0041075c
    PUSH 0x6148a0                       ; 0041075f | = "rb" | s_rb_006148a0 = rb
    LEA EAX,[ESP + 0x4]                 ; 00410764
    PUSH EAX                            ; 00410768
    PUSH 0x6148a3                       ; 00410769 | = "art" | s_art_006148a3 = art
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 0041076e | FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00410773
    MOV dword ptr [ESP + 0x100],EAX     ; 00410776
    TEST EAX,EAX                        ; 0041077d
    JZ 0x004108b6                       ; 0041077f | LAB_004108b6
        ;   XREF to: 004108b6 (CONDITIONAL_JUMP)
    XOR ESI,ESI                         ; 00410785
        ;   Label: LAB_00410785
    MOV EBP,dword ptr [ESP + 0x100]     ; 00410787
        ;   Label: LAB_00410787
    PUSH EBP                            ; 0041078e
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0041078f | int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00410794
    MOV EBP,EAX                         ; 00410797
    MOV EAX,dword ptr [ESP + 0x100]     ; 00410799
    PUSH EAX                            ; 004107a0
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 004107a1 | int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004107a6
    MOV EDX,dword ptr [ESP + 0x100]     ; 004107a9
    PUSH EDX                            ; 004107b0
    MOV EDI,EAX                         ; 004107b1
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 004107b3 | int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)
    MOV ECX,dword ptr [0x0067939c]      ; 004107b8 | int g_BitsPerPixel
    ADD ESP,0x4                         ; 004107be
    CMP ECX,0x20                        ; 004107c1
    JNZ 0x004108e1                      ; 004107c4 | LAB_004108e1
        ;   XREF to: 004108e1 (CONDITIONAL_JUMP)
    MOV CL,byte ptr [0x02d01f24]        ; 004107ca | int g_RedBitPosition
    SHL EBP,CL                          ; 004107d0
    MOV CL,byte ptr [0x02d01f30]        ; 004107d2 | int g_GreenBitPosition
    SHL EDI,CL                          ; 004107d8
    MOV CL,byte ptr [0x02d01f3c]        ; 004107da | int g_BlueBitPosition
    OR EDI,EBP                          ; 004107e0
    SHL EAX,CL                          ; 004107e2
    MOV ECX,EDI                         ; 004107e4
    OR ECX,EAX                          ; 004107e6
        ;   Label: LAB_004107e6
    ADD ESI,0x4                         ; 004107e8
    MOV EAX,dword ptr [EBX + 0x8]       ; 004107eb
    MOV dword ptr [ESI + EAX*0x1 + -0x4],ECX ; 004107ee
    CMP ESI,0x400                       ; 004107f2
    JNZ 0x00410787                      ; 004107f8 | LAB_00410787
        ;   XREF to: 00410787 (CONDITIONAL_JUMP)
    PUSH 0x6d                           ; 004107fa
    PUSH 0x6148e1                       ; 004107fc | = "..\\engine\\alphabit.cpp" | s_engine_alphabit_cpp_006148e1 = ..\engine\alphabit.cpp
    MOV ESI,dword ptr [ESP + 0x108]     ; 00410801
    PUSH ESI                            ; 00410808
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 00410809 | int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0041080e
    MOV EDI,dword ptr [ESP + 0x11c]     ; 00410811
    PUSH EDI                            ; 00410818
    PUSH 0x6148f8                       ; 00410819 | = "%s.opa" | s_s_opa_006148f8 = %s.opa
    LEA EAX,[ESP + 0x8]                 ; 0041081e
    PUSH EAX                            ; 00410822
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00410823 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00410828
    PUSH 0x6148ff                       ; 0041082b | = "rb" | s_rb_006148ff = rb
    LEA EAX,[ESP + 0x4]                 ; 00410830
    PUSH EAX                            ; 00410834
    PUSH 0x614902                       ; 00410835 | = "art" | s_art_00614902 = art
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 0041083a | FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)
    MOV EDI,EAX                         ; 0041083f
    ADD ESP,0xc                         ; 00410841
    TEST EAX,EAX                        ; 00410844
    JNZ 0x004108f0                      ; 00410846 | LAB_004108f0
        ;   XREF to: 004108f0 (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [ESP + 0x120]     ; 0041084c
    IMUL EDI,dword ptr [ESP + 0x124]    ; 00410853
    TEST EDI,EDI                        ; 0041085b
    JLE 0x00410883                      ; 0041085d | LAB_00410883
        ;   XREF to: 00410883 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [EBX]             ; 0041085f
        ;   Label: LAB_0041085f
    MOV CL,byte ptr [ECX + EAX*0x1]     ; 00410861
    AND ECX,0xff                        ; 00410864
    MOV ESI,dword ptr [EBX + 0x8]       ; 0041086a
    CMP dword ptr [ESI + ECX*0x4],0x0   ; 0041086d
    JNZ 0x00410928                      ; 00410871 | LAB_00410928
        ;   XREF to: 00410928 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [EBX + 0x4]       ; 00410877
    MOV byte ptr [ECX + EAX*0x1],0x0    ; 0041087a
    INC EAX                             ; 0041087e
    CMP EAX,EDI                         ; 0041087f
    JL 0x0041085f                       ; 00410881 | LAB_0041085f
        ;   XREF to: 0041085f (CONDITIONAL_JUMP)
    ADD ESP,0x104                       ; 00410883
        ;   Label: LAB_00410883
    POP EBP                             ; 00410889
    POP EDI                             ; 0041088a
    POP ESI                             ; 0041088b
    POP EBX                             ; 0041088c
    RET                                 ; 0041088d
    MOV ESI,0x61475e                    ; 0041088e | = "..\\engine\\alphabit.cpp" | s_engine_alphabit_cpp_0061475e = ..\engine\alphabit.cpp
        ;   Label: LAB_0041088e
    MOV EDI,0x53                        ; 00410893
    PUSH 0x614775                       ; 00410898 | = "CAlphaBitmap::load - Out of memory" | s_CAlphaBitmap_load_Out_of_00614775 = CAlphaBitmap::load - Out of memory
    MOV dword ptr [0x02f0ca48],ESI      ; 0041089d | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 004108a3 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004108a9 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004108ae
    JMP 0x00410629                      ; 004108b1 | LAB_00410629
        ;   XREF to: 00410629 (UNCONDITIONAL_JUMP)
    MOV EAX,ESP                         ; 004108b6
        ;   Label: LAB_004108b6
    PUSH EAX                            ; 004108b8
    MOV ESI,0x6148a7                    ; 004108b9 | = "..\\engine\\alphabit.cpp" | s_engine_alphabit_cpp_006148a7 = ..\engine\alphabit.cpp
    MOV EDI,0x65                        ; 004108be
    PUSH 0x6148be                       ; 004108c3 | = "CAlphaBitmap::load - Can't open %s" | s_CAlphaBitmap_load_Can_t__006148be = CAlphaBitmap::load - Can't open %s
    MOV dword ptr [0x02f0ca48],ESI      ; 004108c8 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 004108ce | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004108d4 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004108d9
    JMP 0x00410785                      ; 004108dc | LAB_00410785
        ;   XREF to: 00410785 (UNCONDITIONAL_JUMP)
    MOV ECX,EBP                         ; 004108e1
        ;   Label: LAB_004108e1
    SHL EDI,0x8                         ; 004108e3
    SHL ECX,0x10                        ; 004108e6
    OR ECX,EDI                          ; 004108e9
    JMP 0x004107e6                      ; 004108eb | LAB_004107e6
        ;   XREF to: 004107e6 (UNCONDITIONAL_JUMP)
    PUSH EAX                            ; 004108f0
        ;   Label: LAB_004108f0
    MOV EAX,dword ptr [ESP + 0x128]     ; 004108f1
    PUSH EAX                            ; 004108f8
    MOV EDX,dword ptr [ESP + 0x128]     ; 004108f9
    PUSH EDX                            ; 00410900
    MOV ECX,dword ptr [EBX + 0x4]       ; 00410901
    PUSH ECX                            ; 00410904
    CALL crt_stdio.c_fread_FUN_005fd990 ; 00410905 | SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, FILE * file)
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0041090a
    PUSH 0x73                           ; 0041090d
    PUSH 0x614906                       ; 0041090f | = "..\\engine\\alphabit.cpp" | s_engine_alphabit_cpp_00614906 = ..\engine\alphabit.cpp
    PUSH EDI                            ; 00410914
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 00410915 | int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0041091a
    ADD ESP,0x104                       ; 0041091d
    POP EBP                             ; 00410923
    POP EDI                             ; 00410924
    POP ESI                             ; 00410925
    POP EBX                             ; 00410926
    RET                                 ; 00410927
    MOV ECX,dword ptr [EBX + 0x4]       ; 00410928
        ;   Label: LAB_00410928
    MOV byte ptr [ECX + EAX*0x1],0xff   ; 0041092b
    INC EAX                             ; 0041092f
    CMP EAX,EDI                         ; 00410930
    JL 0x0041085f                       ; 00410932 | LAB_0041085f
        ;   XREF to: 0041085f (CONDITIONAL_JUMP)
    ADD ESP,0x104                       ; 00410938
    POP EBP                             ; 0041093e
    POP EDI                             ; 0041093f
    POP ESI                             ; 00410940
    POP EBX                             ; 00410941
    RET                                 ; 00410942

