; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_showFullscreenBitmap_FUN_004e2910(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; Local Variables:
; uint[256]        Stack[-0xa30]:1024  auStack_a30
; byte[768]        Stack[-0x630]:768  local_630
; ushort[256]      Stack[-0x330]:512  auStack_330
; char[256]        Stack[-0x130]:256  local_130
; uint             Stack[-0x30]:4  local_30
; uint             Stack[-0x2c]:4  local_2c
; ushort *         Stack[-0x28]:4  local_28
; int              Stack[-0x24]:4  local_24
; int              Stack[-0x20]:4  local_20
; int              Stack[-0x1c]:4  local_1c
; void *           Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_game.cpp_CGame_runGameSession_FUN_004daf80 at 004dbb5c
;
; Referenced Globals:
;   TerminatedCString s_art_0062d29d
;   TerminatedCString s_Can_t_open_s_0062d2a1
;   TerminatedCString s_s_is_d_bytes_but_expecte_0062d2af
;   TerminatedCString s_act_0062d2df
;   undefined4 s_act_0062d2df+1
;   undefined4 s_act_0062d2df+2
;   undefined4 s_act_0062d2df+3
;   TerminatedCString s_rb_0062d2e4
;   TerminatedCString s_art_0062d2e7
;   TerminatedCString s_Can_t_open_s_0062d2eb
;   TerminatedCString s_core_game_cpp_0062d2f9
;   TerminatedCString s_core_game_cpp_0062d30a
;   TerminatedCString s_rb_0062d31b
;   TerminatedCString s_art_0062d31e
;   TerminatedCString s_core_game_cpp_0062d322
;   ... and 20 more
;
; Called Functions:
;   core_game.cpp_CGame_resetInputAndCenterCursor_FUN_004dce70
;   core_game.cpp_CGame_resetKeyState_FUN_004dbe60
;   core_game.cpp_CGame_saveClockTime_FUN_004d7d80
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_fread_FUN_005fd990
;   crt_string.c_splitpath_FUN_005ff178
;   engine_2d.c_clearInputAndWait_FUN_00403260
;   engine_dosio.cpp_getFile_FUN_00481a50
;   engine_dosio.cpp_getFileSize_FUN_00481880
;   engine_special.cpp_clearScreen_FUN_005b3e70
;   engine_special.cpp_lockFrame_FUN_005b7210
;   engine_special.cpp_unlockFrame_FUN_005b7250
;   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   shape_memdbg.cpp_debugFree_FUN_0050f460
;   ... and 5 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e2910
        ;   Label: core_game.cpp_CGame_showFullscreenBitmap_FUN_004e2910
    PUSH ESI                            ; 004e2911
    PUSH EDI                            ; 004e2912
    PUSH EBP                            ; 004e2913
    SUB ESP,0xa20                       ; 004e2914
    MOV EAX,dword ptr [ESP + 0xa34]     ; 004e291a
    CMP byte ptr [EAX + 0x8b4],0x0      ; 004e2921
    JNZ 0x004e2935                      ; 004e2928
        ;   XREF to: 004e2935 (CONDITIONAL_JUMP)  ; LAB_004e2935
    ADD ESP,0xa20                       ; 004e292a
    POP EBP                             ; 004e2930
    POP EDI                             ; 004e2931
    POP ESI                             ; 004e2932
    POP EBX                             ; 004e2933
    RET                                 ; 004e2934
    LEA ESI,[EAX + 0x8b4]               ; 004e2935
        ;   Label: LAB_004e2935
    PUSH ESI                            ; 004e293b
    PUSH 0x62d29d                       ; 004e293c | = "art"
    MOV dword ptr [EAX + 0xcc],0x0      ; 004e2941
    CALL engine_dosio.cpp_getFileSize_FUN_00481880 ; 004e294b
        ;   XREF to: 00481880 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFileSize_FUN_00481880(char * directory, char * filename)
    MOV EDX,EAX                         ; 004e2950
    ADD ESP,0x8                         ; 004e2952
    TEST EAX,EAX                        ; 004e2955
    JL 0x004e2d37                       ; 004e2957
        ;   XREF to: 004e2d37 (CONDITIONAL_JUMP)  ; LAB_004e2d37
    MOV ECX,dword ptr [ESP + 0xa34]     ; 004e295d
    MOV EAX,dword ptr [ESP + 0xa34]     ; 004e2964
    MOV EBX,dword ptr [ECX + 0x9b8]     ; 004e296b
    MOV EAX,dword ptr [EAX + 0x9b4]     ; 004e2971
    IMUL EAX,EBX                        ; 004e2977
    CMP EDX,EAX                         ; 004e297a
    JNZ 0x004e2d65                      ; 004e297c
        ;   XREF to: 004e2d65 (CONDITIONAL_JUMP)  ; LAB_004e2d65
    PUSH 0x0                            ; 004e2982
    LEA EAX,[ESP + 0x904]               ; 004e2984
    PUSH EAX                            ; 004e298b
    PUSH 0x0                            ; 004e298c
    PUSH 0x0                            ; 004e298e
    PUSH ESI                            ; 004e2990
    CALL crt_string.c_splitpath_FUN_005ff178 ; 004e2991
        ;   XREF to: 005ff178 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_005ff178(char * path, char * drive, char * dir, char * fname, ...)
    ADD ESP,0x14                        ; 004e2996
    LEA EDI,[ESP + 0x900]               ; 004e2999
    MOV ESI,0x62d2df                    ; 004e29a0 | = ".act"
    PUSH EDI                            ; 004e29a5
    SUB ECX,ECX                         ; 004e29a6
    DEC ECX                             ; 004e29a8
    MOV AL,0x0                          ; 004e29a9
    SCASB.REPNE ES:EDI                  ; 004e29ab
    DEC EDI                             ; 004e29ad
    MOV AL,byte ptr [ESI]               ; 004e29ae | = ".act" | s_act_0062d2df+2
        ;   Label: LAB_004e29ae
    MOV byte ptr [EDI],AL               ; 004e29b0
    CMP AL,0x0                          ; 004e29b2
    JZ 0x004e29c6                       ; 004e29b4
        ;   XREF to: 004e29c6 (CONDITIONAL_JUMP)  ; LAB_004e29c6
    MOV AL,byte ptr [ESI + 0x1]         ; 004e29b6 | s_act_0062d2df+1 | s_act_0062d2df+3
    ADD ESI,0x2                         ; 004e29b9
    MOV byte ptr [EDI + 0x1],AL         ; 004e29bc
    ADD EDI,0x2                         ; 004e29bf
    CMP AL,0x0                          ; 004e29c2
    JNZ 0x004e29ae                      ; 004e29c4
        ;   XREF to: 004e29ae (CONDITIONAL_JUMP)  ; LAB_004e29ae
    POP EDI                             ; 004e29c6
        ;   Label: LAB_004e29c6
    PUSH 0x62d2e4                       ; 004e29c7 | = "rb"
    LEA EAX,[ESP + 0x904]               ; 004e29cc
    PUSH EAX                            ; 004e29d3
    PUSH 0x62d2e7                       ; 004e29d4 | = "art"
    CALL engine_dosio.cpp_getFile_FUN_00481a50 ; 004e29d9
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    MOV EBX,EAX                         ; 004e29de
    ADD ESP,0xc                         ; 004e29e0
    TEST EAX,EAX                        ; 004e29e3
    JZ 0x004e2d9c                       ; 004e29e5
        ;   XREF to: 004e2d9c (CONDITIONAL_JUMP)  ; LAB_004e2d9c
    PUSH EAX                            ; 004e29eb
    PUSH 0x300                          ; 004e29ec
    PUSH 0x1                            ; 004e29f1
    LEA EAX,[ESP + 0x40c]               ; 004e29f3
    PUSH EAX                            ; 004e29fa
    CALL crt_stdio.c_fread_FUN_005fd990 ; 004e29fb
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 004e2a00
    PUSH 0xfff                          ; 004e2a03
    PUSH 0x62d2f9                       ; 004e2a08 | = "..\\core\\game.cpp"
    PUSH EBX                            ; 004e2a0d
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004e2a0e
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004e2a13
    XOR EBX,EBX                         ; 004e2a16
    XOR ESI,ESI                         ; 004e2a18
    MOV dword ptr [ESP + 0xa10],EBX     ; 004e2a1a
    CMP dword ptr [0x0067939c],0x10     ; 004e2a21 | g_BitsPerPixel
        ;   Label: LAB_004e2a21
    JNZ 0x004e2dd1                      ; 004e2a28
        ;   XREF to: 004e2dd1 (CONDITIONAL_JUMP)  ; LAB_004e2dd1
    MOV EDI,dword ptr [0x02d01f28]      ; 004e2a2e | g_RedScaleFactor
    XOR EAX,EAX                         ; 004e2a34
    XOR EDX,EDX                         ; 004e2a36
    MOV AL,byte ptr [ESP + EBX*0x1 + 0x400] ; 004e2a38
    DIV EDI                             ; 004e2a3f
    MOVZX EBP,byte ptr [ESP + EBX*0x1 + 0x401] ; 004e2a41
    MOV dword ptr [ESP + 0xa00],EBP     ; 004e2a49
    MOV EDI,EAX                         ; 004e2a50
    XOR EDX,EDX                         ; 004e2a52
    MOV EAX,EBP                         ; 004e2a54
    DIV dword ptr [0x02d01f34]          ; 004e2a56 | g_GreenScaleFactor
    XOR ECX,ECX                         ; 004e2a5c
    MOV CL,byte ptr [ESP + EBX*0x1 + 0x402] ; 004e2a5e
    MOV dword ptr [ESP + 0xa04],ECX     ; 004e2a65
    MOV dword ptr [ESP + 0xa00],EAX     ; 004e2a6c
    XOR EDX,EDX                         ; 004e2a73
    MOV EAX,ECX                         ; 004e2a75
    DIV dword ptr [0x02d01f40]          ; 004e2a77 | g_BlueScaleFactor
    MOV CL,byte ptr [0x02d01f24]        ; 004e2a7d | g_RedBitPosition
    MOV dword ptr [ESP + 0xa04],EAX     ; 004e2a83
    MOV EAX,dword ptr [ESP + 0xa00]     ; 004e2a8a
    SHL EDI,CL                          ; 004e2a91
    MOV CL,byte ptr [0x02d01f30]        ; 004e2a93 | g_GreenBitPosition
    SHL EAX,CL                          ; 004e2a99
    MOV CL,byte ptr [0x02d01f3c]        ; 004e2a9b | g_BlueBitPosition
    OR EDI,EAX                          ; 004e2aa1
    MOV EAX,dword ptr [ESP + 0xa04]     ; 004e2aa3
    SHL EAX,CL                          ; 004e2aaa
    OR EAX,EDI                          ; 004e2aac
    MOV word ptr [ESP + ESI*0x1 + 0x700],AX ; 004e2aae
    MOV EDI,dword ptr [ESP + 0xa10]     ; 004e2ab6
        ;   Label: LAB_004e2ab6
    ADD ESI,0x2                         ; 004e2abd
    ADD EDI,0x4                         ; 004e2ac0
    ADD EBX,0x3                         ; 004e2ac3
    MOV dword ptr [ESP + 0xa10],EDI     ; 004e2ac6
    CMP ESI,0x200                       ; 004e2acd
    JNZ 0x004e2a21                      ; 004e2ad3
        ;   XREF to: 004e2a21 (CONDITIONAL_JUMP)  ; LAB_004e2a21
    CALL wincore_wddvmem.cpp_openScreenDevice_FUN_005ed580 ; 004e2ad9
        ;   XREF to: 005ed580 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_openScreenDevice_FUN_005ed580()
    CALL engine_special.cpp_lockFrame_FUN_005b7210 ; 004e2ade
        ;   XREF to: 005b7210 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_lockFrame_FUN_005b7210()
    CALL engine_special.cpp_clearScreen_FUN_005b3e70 ; 004e2ae3
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_005b3e70()
    PUSH 0x0                            ; 004e2ae8
    CALL engine_special.cpp_unlockFrame_FUN_005b7250 ; 004e2aea
        ;   XREF to: 005b7250 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_unlockFrame_FUN_005b7250(int clear_lock_flag)
    ADD ESP,0x4                         ; 004e2aef
    CALL wincore_wddvmem.cpp_closeScreenDevice_FUN_005ed630 ; 004e2af2
        ;   XREF to: 005ed630 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_closeScreenDevice_FUN_005ed630()
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 004e2af7
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    MOV EAX,dword ptr [ESP + 0xa34]     ; 004e2afc
    MOV EDX,dword ptr [ESP + 0xa34]     ; 004e2b03
    MOV EAX,dword ptr [EAX + 0x9b4]     ; 004e2b0a
    IMUL EAX,dword ptr [EDX + 0x9b8]    ; 004e2b10
    PUSH 0x1016                         ; 004e2b17
    PUSH 0x62d30a                       ; 004e2b1c | = "..\\core\\game.cpp"
    PUSH EAX                            ; 004e2b21
    CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250 ; 004e2b22
        ;   XREF to: 0050f250 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugMalloc_FUN_0050f250(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 004e2b27
    MOV dword ptr [ESP + 0xa18],EAX     ; 004e2b2a
    TEST EAX,EAX                        ; 004e2b31
    JZ 0x004e2db8                       ; 004e2b33
        ;   XREF to: 004e2db8 (CONDITIONAL_JUMP)  ; LAB_004e2db8
    MOV ESI,dword ptr [ESP + 0xa34]     ; 004e2b39
    PUSH 0x62d31b                       ; 004e2b40 | = "rb"
    ADD ESI,0x8b4                       ; 004e2b45
    PUSH ESI                            ; 004e2b4b
    PUSH 0x62d31e                       ; 004e2b4c | = "art"
    CALL engine_dosio.cpp_getFile_FUN_00481a50 ; 004e2b51
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 004e2b56
    MOV EBX,EAX                         ; 004e2b59
    TEST EAX,EAX                        ; 004e2b5b
    JNZ 0x004e2b82                      ; 004e2b5d
        ;   XREF to: 004e2b82 (CONDITIONAL_JUMP)  ; LAB_004e2b82
    PUSH ESI                            ; 004e2b5f
    MOV EAX,0x62d322                    ; 004e2b60 | = "..\\core\\game.cpp"
    MOV EDX,0x101f                      ; 004e2b65
    PUSH 0x62d333                       ; 004e2b6a | = "Can't open %s"
    MOV [0x02f0ca48],EAX                ; 004e2b6f | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 004e2b74 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004e2b7a
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 004e2b7f
    MOV EAX,dword ptr [ESP + 0xa34]     ; 004e2b82
        ;   Label: LAB_004e2b82
    PUSH EBX                            ; 004e2b89
    MOV ECX,dword ptr [EAX + 0x9b8]     ; 004e2b8a
    PUSH ECX                            ; 004e2b90
    MOV ESI,dword ptr [EAX + 0x9b4]     ; 004e2b91
    PUSH ESI                            ; 004e2b97
    MOV EDI,dword ptr [ESP + 0xa24]     ; 004e2b98
    PUSH EDI                            ; 004e2b9f
    CALL crt_stdio.c_fread_FUN_005fd990 ; 004e2ba0
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 004e2ba5
    PUSH 0x1021                         ; 004e2ba8
    PUSH 0x62d341                       ; 004e2bad | = "..\\core\\game.cpp"
    PUSH EBX                            ; 004e2bb2
    XOR EBP,EBP                         ; 004e2bb3
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004e2bb5
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004e2bba
    MOV EAX,[0x00679398]                ; 004e2bbd | g_WindowHeight
    MOV dword ptr [ESP + 0xa14],EBP     ; 004e2bc2
    TEST EAX,EAX                        ; 004e2bc9
    JLE 0x004e2ccc                      ; 004e2bcb
        ;   XREF to: 004e2ccc (CONDITIONAL_JUMP)  ; LAB_004e2ccc
    MOV dword ptr [ESP + 0xa0c],EBP     ; 004e2bd1
    MOV EAX,dword ptr [ESP + 0xa34]     ; 004e2bd8
        ;   Label: LAB_004e2bd8
    MOV EDX,dword ptr [ESP + 0xa14]     ; 004e2bdf
    IMUL EDX,dword ptr [EAX + 0x9b8]    ; 004e2be6
    MOV ECX,dword ptr [0x00679398]      ; 004e2bed | g_WindowHeight
    MOV EAX,EDX                         ; 004e2bf3
    SAR EDX,0x1f                        ; 004e2bf5
    IDIV ECX                            ; 004e2bf8
    MOV EDX,dword ptr [ESP + 0xa34]     ; 004e2bfa
    MOV EDX,dword ptr [EDX + 0x9b4]     ; 004e2c01
    IMUL EDX,EAX                        ; 004e2c07
    MOV EBX,dword ptr [0x00679394]      ; 004e2c0a | g_WindowWidth
    XOR ECX,ECX                         ; 004e2c10
    MOV dword ptr [ESP + 0xa1c],EDX     ; 004e2c12
    TEST EBX,EBX                        ; 004e2c19
    JLE 0x004e2c9e                      ; 004e2c1b
        ;   XREF to: 004e2c9e (CONDITIONAL_JUMP)  ; LAB_004e2c9e
    MOV EDI,dword ptr [ESP + 0xa0c]     ; 004e2c21
    XOR EBX,EBX                         ; 004e2c28
    XOR ESI,ESI                         ; 004e2c2a
    MOV EDX,dword ptr [ESP + 0xa34]     ; 004e2c2c
        ;   Label: LAB_004e2c2c
    MOV EDX,dword ptr [EDX + 0x9b4]     ; 004e2c33
    IMUL EDX,ECX                        ; 004e2c39
    MOV EBP,dword ptr [0x00679394]      ; 004e2c3c | g_WindowWidth
    MOV EAX,EDX                         ; 004e2c42
    SAR EDX,0x1f                        ; 004e2c44
    IDIV EBP                            ; 004e2c47
    ADD EAX,dword ptr [ESP + 0xa1c]     ; 004e2c49
    MOV EDX,dword ptr [ESP + 0xa18]     ; 004e2c50
    MOV EBP,dword ptr [0x0067939c]      ; 004e2c57 | g_BitsPerPixel
    ADD EDX,EAX                         ; 004e2c5d
    CMP EBP,0x10                        ; 004e2c5f
    JNZ 0x004e2e3e                      ; 004e2c62
        ;   XREF to: 004e2e3e (CONDITIONAL_JUMP)  ; LAB_004e2e3e
    MOV EAX,dword ptr [EDI + 0x2cf6a9c] ; 004e2c68 | g_ScreenBufferArray
    ADD EAX,ESI                         ; 004e2c6e
    MOV dword ptr [ESP + 0xa08],EAX     ; 004e2c70
    XOR EAX,EAX                         ; 004e2c77
    MOV AL,byte ptr [EDX]               ; 004e2c79
    MOV EDX,dword ptr [ESP + 0xa08]     ; 004e2c7b
    MOV AX,word ptr [ESP + EAX*0x2 + 0x700] ; 004e2c82
    MOV word ptr [EDX],AX               ; 004e2c8a
    MOV EBP,dword ptr [0x00679394]      ; 004e2c8d | g_WindowWidth
        ;   Label: LAB_004e2c8d
    ADD EBX,0x4                         ; 004e2c93
    INC ECX                             ; 004e2c96
    ADD ESI,0x2                         ; 004e2c97
    CMP ECX,EBP                         ; 004e2c9a
    JL 0x004e2c2c                       ; 004e2c9c
        ;   XREF to: 004e2c2c (CONDITIONAL_JUMP)  ; LAB_004e2c2c
    MOV EDX,dword ptr [ESP + 0xa0c]     ; 004e2c9e
        ;   Label: LAB_004e2c9e
    MOV ECX,dword ptr [ESP + 0xa14]     ; 004e2ca5
    MOV EBX,dword ptr [0x00679398]      ; 004e2cac | g_WindowHeight
    ADD EDX,0x4                         ; 004e2cb2
    INC ECX                             ; 004e2cb5
    MOV dword ptr [ESP + 0xa0c],EDX     ; 004e2cb6
    MOV dword ptr [ESP + 0xa14],ECX     ; 004e2cbd
    CMP ECX,EBX                         ; 004e2cc4
    JL 0x004e2bd8                       ; 004e2cc6
        ;   XREF to: 004e2bd8 (CONDITIONAL_JUMP)  ; LAB_004e2bd8
    MOV ESI,dword ptr [ESP + 0xa34]     ; 004e2ccc
        ;   Label: LAB_004e2ccc
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 004e2cd3
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    PUSH ESI                            ; 004e2cd8
    CALL core_game.cpp_CGame_resetInputAndCenterCursor_FUN_004dce70 ; 004e2cd9
        ;   XREF to: 004dce70 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_resetInputAndCenterCursor_FUN_004dce70(CGame * this_ptr)
    ADD ESP,0x4                         ; 004e2cde
    XOR EBX,EBX                         ; 004e2ce1
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 004e2ce3
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
        ;   Label: LAB_004e2ce3
    MOV EAX,dword ptr [ESP + 0xa34]     ; 004e2ce8
    CMP dword ptr [EAX + 0xbc],0x2      ; 004e2cef
    JNZ 0x004e2d01                      ; 004e2cf6
        ;   XREF to: 004e2d01 (CONDITIONAL_JUMP)  ; LAB_004e2d01
    PUSH EAX                            ; 004e2cf8
    CALL core_game.cpp_CGame_resetKeyState_FUN_004dbe60 ; 004e2cf9
        ;   XREF to: 004dbe60 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_resetKeyState_FUN_004dbe60(CGame * this_ptr)
    ADD ESP,0x4                         ; 004e2cfe
    CALL wincore_winrun.cpp_wasKeyPressed_FUN_005f2f00 ; 004e2d01
        ;   XREF to: 005f2f00 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_wasKeyPressed_FUN_005f2f00()
        ;   Label: LAB_004e2d01
    TEST EAX,EAX                        ; 004e2d06
    JZ 0x004e2e57                       ; 004e2d08
        ;   XREF to: 004e2e57 (CONDITIONAL_JUMP)  ; LAB_004e2e57
    XOR EBX,EBX                         ; 004e2d0e
        ;   Label: LAB_004e2d0e
    CMP EBX,dword ptr [0x02cf6a94]      ; 004e2d10 | g_MouseButtonFlags
        ;   Label: LAB_004e2d10
    JZ 0x004e2e88                       ; 004e2d16
        ;   XREF to: 004e2e88 (CONDITIONAL_JUMP)  ; LAB_004e2e88
    MOV EAX,dword ptr [ESP + 0xa34]     ; 004e2d1c
        ;   Label: LAB_004e2d1c
    CMP dword ptr [EAX + 0xbc],0x2      ; 004e2d23
    JZ 0x004e2ef2                       ; 004e2d2a
        ;   XREF to: 004e2ef2 (CONDITIONAL_JUMP)  ; LAB_004e2ef2
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 004e2d30
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    JMP 0x004e2d10                      ; 004e2d35
        ;   XREF to: 004e2d10 (UNCONDITIONAL_JUMP)  ; LAB_004e2d10
    PUSH ESI                            ; 004e2d37
        ;   Label: LAB_004e2d37
    PUSH 0x62d2a1                       ; 004e2d38 | = "Can't open %s"
    MOV EBX,dword ptr [0x00678a60]      ; 004e2d3d | g_CEditorToolsPtr
    PUSH EBX                            ; 004e2d43 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004e2d44
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 004e2d49
    MOV EAX,dword ptr [ESP + 0xa34]     ; 004e2d4c
    MOV byte ptr [EAX + 0x8b4],0x0      ; 004e2d53
    ADD ESP,0xa20                       ; 004e2d5a
    POP EBP                             ; 004e2d60
    POP EDI                             ; 004e2d61
    POP ESI                             ; 004e2d62
    POP EBX                             ; 004e2d63
    RET                                 ; 004e2d64
    PUSH EAX                            ; 004e2d65
        ;   Label: LAB_004e2d65
    PUSH EBX                            ; 004e2d66
    MOV EDX,dword ptr [ECX + 0x9b4]     ; 004e2d67
    PUSH EDX                            ; 004e2d6d
    PUSH ESI                            ; 004e2d6e
    PUSH 0x62d2af                       ; 004e2d6f | = "%s is %d bytes, but expected %dx%d=%d..."
    MOV ECX,dword ptr [0x00678a60]      ; 004e2d74 | g_CEditorToolsPtr
    PUSH ECX                            ; 004e2d7a | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004e2d7b
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x18                        ; 004e2d80
    MOV EAX,dword ptr [ESP + 0xa34]     ; 004e2d83
    MOV byte ptr [EAX + 0x8b4],0x0      ; 004e2d8a
    ADD ESP,0xa20                       ; 004e2d91
    POP EBP                             ; 004e2d97
    POP EDI                             ; 004e2d98
    POP ESI                             ; 004e2d99
    POP EBX                             ; 004e2d9a
    RET                                 ; 004e2d9b
    LEA EAX,[ESP + 0x900]               ; 004e2d9c
        ;   Label: LAB_004e2d9c
    PUSH EAX                            ; 004e2da3
    PUSH 0x62d2eb                       ; 004e2da4 | = "Can't open %s"
    MOV EDI,dword ptr [0x00678a60]      ; 004e2da9 | g_CEditorToolsPtr
    PUSH EDI                            ; 004e2daf | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004e2db0
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 004e2db5
    MOV EAX,dword ptr [ESP + 0xa34]     ; 004e2db8
        ;   Label: LAB_004e2db8
    MOV byte ptr [EAX + 0x8b4],0x0      ; 004e2dbf
    ADD ESP,0xa20                       ; 004e2dc6
    POP EBP                             ; 004e2dcc
    POP EDI                             ; 004e2dcd
    POP ESI                             ; 004e2dce
    POP EBX                             ; 004e2dcf
    RET                                 ; 004e2dd0
    MOV EBP,dword ptr [0x0067939c]      ; 004e2dd1 | g_BitsPerPixel
        ;   Label: LAB_004e2dd1
    MOVZX EDI,byte ptr [ESP + EBX*0x1 + 0x400] ; 004e2dd7
    XOR EDX,EDX                         ; 004e2ddf
    XOR EAX,EAX                         ; 004e2de1
    MOV DL,byte ptr [ESP + EBX*0x1 + 0x401] ; 004e2de3
    MOV AL,byte ptr [ESP + EBX*0x1 + 0x402] ; 004e2dea
    CMP EBP,0x20                        ; 004e2df1
    JNZ 0x004e2e23                      ; 004e2df4
        ;   XREF to: 004e2e23 (CONDITIONAL_JUMP)  ; LAB_004e2e23
    MOV CL,byte ptr [0x02d01f24]        ; 004e2df6 | g_RedBitPosition
    SHL EDI,CL                          ; 004e2dfc
    MOV CL,byte ptr [0x02d01f30]        ; 004e2dfe | g_GreenBitPosition
    SHL EDX,CL                          ; 004e2e04
    MOV CL,byte ptr [0x02d01f3c]        ; 004e2e06 | g_BlueBitPosition
    OR EDI,EDX                          ; 004e2e0c
    SHL EAX,CL                          ; 004e2e0e
    MOV ECX,EDI                         ; 004e2e10
    OR ECX,EAX                          ; 004e2e12
    MOV EAX,dword ptr [ESP + 0xa10]     ; 004e2e14
    MOV dword ptr [ESP + EAX*0x1],ECX   ; 004e2e1b
    JMP 0x004e2ab6                      ; 004e2e1e
        ;   XREF to: 004e2ab6 (UNCONDITIONAL_JUMP)  ; LAB_004e2ab6
    MOV ECX,EDX                         ; 004e2e23
        ;   Label: LAB_004e2e23
    SHL EDI,0x10                        ; 004e2e25
    SHL ECX,0x8                         ; 004e2e28
    OR ECX,EDI                          ; 004e2e2b
    OR ECX,EAX                          ; 004e2e2d
    MOV EAX,dword ptr [ESP + 0xa10]     ; 004e2e2f
    MOV dword ptr [ESP + EAX*0x1],ECX   ; 004e2e36
    JMP 0x004e2ab6                      ; 004e2e39
        ;   XREF to: 004e2ab6 (UNCONDITIONAL_JUMP)  ; LAB_004e2ab6
    MOV DL,byte ptr [EDX]               ; 004e2e3e
        ;   Label: LAB_004e2e3e
    MOV EBP,dword ptr [EDI + 0x2cf6a9c] ; 004e2e40 | g_ScreenBufferArray
    AND EDX,0xff                        ; 004e2e46
    MOV EAX,dword ptr [ESP + EDX*0x4]   ; 004e2e4c
    MOV dword ptr [EBX + EBP*0x1],EAX   ; 004e2e4f
    JMP 0x004e2c8d                      ; 004e2e52
        ;   XREF to: 004e2c8d (UNCONDITIONAL_JUMP)  ; LAB_004e2c8d
    MOV ECX,dword ptr [ESP + 0xa34]     ; 004e2e57
        ;   Label: LAB_004e2e57
    MOV EBP,dword ptr [ECX + 0x48]      ; 004e2e5e
    MOV EAX,[0x0067cf44]                ; 004e2e61 | g_CKeysPtr
    PUSH EBP                            ; 004e2e66
    MOV EDX,dword ptr [EAX]             ; 004e2e67 | g_CKeysInstance
    PUSH EAX                            ; 004e2e69 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 004e2e6a
    ADD ESP,0x8                         ; 004e2e6c
    TEST EAX,EAX                        ; 004e2e6f
    JNZ 0x004e2d0e                      ; 004e2e71
        ;   XREF to: 004e2d0e (CONDITIONAL_JUMP)  ; LAB_004e2d0e
    CMP EBX,dword ptr [0x02cf6a94]      ; 004e2e77 | g_MouseButtonFlags
    JNZ 0x004e2d0e                      ; 004e2e7d
        ;   XREF to: 004e2d0e (CONDITIONAL_JUMP)  ; LAB_004e2d0e
    JMP 0x004e2ce3                      ; 004e2e83
        ;   XREF to: 004e2ce3 (UNCONDITIONAL_JUMP)  ; LAB_004e2ce3
    MOV ECX,dword ptr [ESP + 0xa34]     ; 004e2e88
        ;   Label: LAB_004e2e88
    MOV ESI,dword ptr [ECX + 0x48]      ; 004e2e8f
    MOV EAX,[0x0067cf44]                ; 004e2e92 | g_CKeysPtr
    PUSH ESI                            ; 004e2e97
    MOV EDX,dword ptr [EAX]             ; 004e2e98 | g_CKeysInstance
    PUSH EAX                            ; 004e2e9a | g_CKeysInstance
    CALL dword ptr [EDX]                ; 004e2e9b
    ADD ESP,0x8                         ; 004e2e9d
    TEST EAX,EAX                        ; 004e2ea0
    JNZ 0x004e2d1c                      ; 004e2ea2
        ;   XREF to: 004e2d1c (CONDITIONAL_JUMP)  ; LAB_004e2d1c
    MOV EDI,dword ptr [ESP + 0xa34]     ; 004e2ea8
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 004e2eaf
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    PUSH EDI                            ; 004e2eb4
    CALL core_game.cpp_CGame_resetInputAndCenterCursor_FUN_004dce70 ; 004e2eb5
        ;   XREF to: 004dce70 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_resetInputAndCenterCursor_FUN_004dce70(CGame * this_ptr)
    ADD ESP,0x4                         ; 004e2eba
    PUSH EDI                            ; 004e2ebd
    CALL core_game.cpp_CGame_saveClockTime_FUN_004d7d80 ; 004e2ebe
        ;   XREF to: 004d7d80 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_saveClockTime_FUN_004d7d80(CGame * this_ptr)
    ADD ESP,0x4                         ; 004e2ec3
    PUSH 0x1057                         ; 004e2ec6
    PUSH 0x62d352                       ; 004e2ecb | = "..\\core\\game.cpp"
    MOV EAX,dword ptr [ESP + 0xa20]     ; 004e2ed0
    PUSH EAX                            ; 004e2ed7
    MOV byte ptr [EDI + 0x8b4],0x0      ; 004e2ed8
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 004e2edf
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 004e2ee4
    ADD ESP,0xa20                       ; 004e2ee7
    POP EBP                             ; 004e2eed
    POP EDI                             ; 004e2eee
    POP ESI                             ; 004e2eef
    POP EBX                             ; 004e2ef0
    RET                                 ; 004e2ef1
    PUSH EAX                            ; 004e2ef2
        ;   Label: LAB_004e2ef2
    CALL core_game.cpp_CGame_resetKeyState_FUN_004dbe60 ; 004e2ef3
        ;   XREF to: 004dbe60 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_resetKeyState_FUN_004dbe60(CGame * this_ptr)
    ADD ESP,0x4                         ; 004e2ef8
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 004e2efb
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    JMP 0x004e2d10                      ; 004e2f00
        ;   XREF to: 004e2d10 (UNCONDITIONAL_JUMP)  ; LAB_004e2d10

