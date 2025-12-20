; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_game.cpp_FUN_004d7810()
;
;
; Referenced Globals:
;   TerminatedCString s_noc_05d_raw_0062b201
;   TerminatedCString s_Movie_recording_active_m_0062b20d
;   TerminatedCString s_wb_0062b22e
;   TerminatedCString s_movie_0062b231
;   TerminatedCString s_core_game_cpp_0062b237
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   undefined4 DAT_0067b664
;   undefined4 DAT_0067b668
;   CKeys* g_CKeysPtr = 02dcd7d4
;   void*[1024] g_ScreenBufferArray
;   undefined4 g_ScreenBufferArray[1]
;   int g_CheatFlags
;   int g_DebugRecording
;   undefined4 g_DebugRecordingParams
;   ... and 2 more
;
; Called Functions:
;   crt_stdio.c_fputc_FUN_006007a0
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   engine_2d.c_drawText_FUN_00401fd0
;   engine_dosio.c_getFile_FUN_00481a50
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d7810
        ;   Label: core_game.cpp_FUN_004d7810
    PUSH ESI                            ; 004d7811
    PUSH EDI                            ; 004d7812
    PUSH EBP                            ; 004d7813
    SUB ESP,0x150                       ; 004d7814
    CMP dword ptr [0x02d831b0],0x0      ; 004d781a | g_CheatFlags
    JNZ 0x004d782e                      ; 004d7821
        ;   XREF to: 004d782e (CONDITIONAL_JUMP)  ; LAB_004d782e
    ADD ESP,0x150                       ; 004d7823
        ;   Label: LAB_004d7823
    POP EBP                             ; 004d7829
    POP EDI                             ; 004d782a
    POP ESI                             ; 004d782b
    POP EBX                             ; 004d782c
    RET                                 ; 004d782d
    PUSH 0x1d                           ; 004d782e
        ;   Label: LAB_004d782e
    MOV EAX,[0x0067cf44]                ; 004d7830 | g_CKeysPtr
    PUSH EAX                            ; 004d7835 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 004d7836 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 004d7838
    ADD ESP,0x8                         ; 004d783a
    TEST EAX,EAX                        ; 004d783d
    JZ 0x004d786b                       ; 004d783f
        ;   XREF to: 004d786b (CONDITIONAL_JUMP)  ; LAB_004d786b
    PUSH 0x2f                           ; 004d7841
    MOV EAX,[0x0067cf44]                ; 004d7843 | g_CKeysPtr
    PUSH EAX                            ; 004d7848 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 004d7849 | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 004d784b
    ADD ESP,0x8                         ; 004d784e
    TEST EAX,EAX                        ; 004d7851
    JZ 0x004d786b                       ; 004d7853
        ;   XREF to: 004d786b (CONDITIONAL_JUMP)  ; LAB_004d786b
    MOV ECX,dword ptr [0x02d831b4]      ; 004d7855 | g_DebugRecording
    TEST ECX,ECX                        ; 004d785b
    JZ 0x004d7b17                       ; 004d785d
        ;   XREF to: 004d7b17 (CONDITIONAL_JUMP)  ; LAB_004d7b17
    XOR EDI,EDI                         ; 004d7863
    MOV dword ptr [0x02d831b4],EDI      ; 004d7865 | g_DebugRecording
    MOV EBP,dword ptr [0x02d831b8]      ; 004d786b | g_DebugRecordingParams
        ;   Label: LAB_004d786b
    TEST EBP,EBP                        ; 004d7871
    JLE 0x004d7881                      ; 004d7873
        ;   XREF to: 004d7881 (CONDITIONAL_JUMP)  ; LAB_004d7881
    CMP EBP,dword ptr [0x02d831bc]      ; 004d7875 | DAT_02d831bc
    JLE 0x004d7b2d                      ; 004d787b
        ;   XREF to: 004d7b2d (CONDITIONAL_JUMP)  ; LAB_004d7b2d
    CMP dword ptr [0x02d831b4],0x0      ; 004d7881 | g_DebugRecording
        ;   Label: LAB_004d7881
    JZ 0x004d7823                       ; 004d7888
        ;   XREF to: 004d7823 (CONDITIONAL_JUMP)  ; LAB_004d7823
    MOV EBX,dword ptr [0x02d831bc]      ; 004d788a | DAT_02d831bc
    PUSH EBX                            ; 004d7890
    PUSH 0x62b201                       ; 004d7891 | = "noc%05d.raw"
    LEA EAX,[ESP + 0xd0]                ; 004d7896
    PUSH EAX                            ; 004d789d
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004d789e
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004d78a3
    LEA EAX,[ESP + 0xc8]                ; 004d78a6
    PUSH EAX                            ; 004d78ad
    PUSH 0x62b20d                       ; 004d78ae | = "Movie recording active: movie\\%s"
    LEA EAX,[ESP + 0x8]                 ; 004d78b3
    PUSH EAX                            ; 004d78b7
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004d78b8
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004d78bd
    PUSH 0x62b22e                       ; 004d78c0 | = "wb"
    LEA EAX,[ESP + 0xcc]                ; 004d78c5
    PUSH EAX                            ; 004d78cc
    PUSH 0x62b231                       ; 004d78cd | = "movie"
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 004d78d2
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 004d78d7
    MOV dword ptr [ESP + 0x134],EAX     ; 004d78da
    TEST EAX,EAX                        ; 004d78e1
    JZ 0x004d7823                       ; 004d78e3
        ;   XREF to: 004d7823 (CONDITIONAL_JUMP)  ; LAB_004d7823
    XOR ESI,ESI                         ; 004d78e9
    MOV EDI,dword ptr [0x0067b668]      ; 004d78eb | DAT_0067b668
    MOV dword ptr [ESP + 0x130],ESI     ; 004d78f1
    TEST EDI,EDI                        ; 004d78f8
    JLE 0x004d7ad4                      ; 004d78fa
        ;   XREF to: 004d7ad4 (CONDITIONAL_JUMP)  ; LAB_004d7ad4
    XOR ESI,ESI                         ; 004d7900
        ;   Label: LAB_004d7900
    MOV EDI,dword ptr [0x0067b664]      ; 004d7902 | DAT_0067b664
    MOV dword ptr [ESP + 0x138],ESI     ; 004d7908
    TEST EDI,EDI                        ; 004d790f
    JLE 0x004d7ab7                      ; 004d7911
        ;   XREF to: 004d7ab7 (CONDITIONAL_JUMP)  ; LAB_004d7ab7
    MOV EAX,dword ptr [ESP + 0x130]     ; 004d7917
    INC EAX                             ; 004d791e
    MOV dword ptr [ESP + 0x12c],EAX     ; 004d791f
    MOV EDX,dword ptr [ESP + 0x138]     ; 004d7926
        ;   Label: LAB_004d7926
    MOV ESI,dword ptr [0x00679394]      ; 004d792d | g_WindowWidth
    IMUL EDX,ESI                        ; 004d7933
    MOV EDI,dword ptr [0x0067b664]      ; 004d7936 | DAT_0067b664
    MOV EAX,EDX                         ; 004d793c
    SAR EDX,0x1f                        ; 004d793e
    IDIV EDI                            ; 004d7941
    MOV EDX,dword ptr [ESP + 0x138]     ; 004d7943
    INC EDX                             ; 004d794a
    IMUL EDX,ESI                        ; 004d794b
    MOV dword ptr [ESP + 0x140],EAX     ; 004d794e
    MOV EAX,EDX                         ; 004d7955
    SAR EDX,0x1f                        ; 004d7957
    IDIV EDI                            ; 004d795a
    MOV EBX,dword ptr [0x00679398]      ; 004d795c | g_WindowHeight
    MOV EDX,dword ptr [ESP + 0x130]     ; 004d7962
    IMUL EDX,EBX                        ; 004d7969
    MOV ESI,dword ptr [0x0067b668]      ; 004d796c | DAT_0067b668
    MOV dword ptr [ESP + 0x148],EAX     ; 004d7972
    MOV EAX,EDX                         ; 004d7979
    SAR EDX,0x1f                        ; 004d797b
    IDIV ESI                            ; 004d797e
    MOV EDX,dword ptr [ESP + 0x12c]     ; 004d7980
    IMUL EDX,EBX                        ; 004d7987
    MOV ECX,EAX                         ; 004d798a
    MOV EAX,EDX                         ; 004d798c
    SAR EDX,0x1f                        ; 004d798e
    IDIV ESI                            ; 004d7991
    XOR EDI,EDI                         ; 004d7993
    XOR EBX,EBX                         ; 004d7995
    MOV EDX,EAX                         ; 004d7997
    XOR EAX,EAX                         ; 004d7999
    XOR ESI,ESI                         ; 004d799b
    MOV dword ptr [ESP + 0x14c],EAX     ; 004d799d
    CMP ECX,EDX                         ; 004d79a4
    JGE 0x004d7a4d                      ; 004d79a6
        ;   XREF to: 004d7a4d (CONDITIONAL_JUMP)  ; LAB_004d7a4d
    LEA EAX,[ECX*0x4 + 0x0]             ; 004d79ac
    SHL EDX,0x2                         ; 004d79b3
    MOV dword ptr [ESP + 0x144],EAX     ; 004d79b6
    MOV dword ptr [ESP + 0x13c],EDX     ; 004d79bd
    MOV EBP,dword ptr [ESP + 0x148]     ; 004d79c4
        ;   Label: LAB_004d79c4
    MOV ECX,dword ptr [ESP + 0x140]     ; 004d79cb
    CMP ECX,EBP                         ; 004d79d2
    JGE 0x004d7a2d                      ; 004d79d4
        ;   XREF to: 004d7a2d (CONDITIONAL_JUMP)  ; LAB_004d7a2d
    MOV EAX,dword ptr [ESP + 0x144]     ; 004d79d6
    LEA EDX,[ECX*0x4 + 0x0]             ; 004d79dd
    MOV EAX,dword ptr [EAX + 0x2cf6a9c] ; 004d79e4 | g_ScreenBufferArray | g_ScreenBufferArray[1]
    ADD EDX,EAX                         ; 004d79ea
    MOV EAX,dword ptr [EDX]             ; 004d79ec
        ;   Label: LAB_004d79ec
    MOV EBP,EAX                         ; 004d79ee
    SHR EBP,0x10                        ; 004d79f0
    AND EBP,0xff                        ; 004d79f3
    ADD EDX,0x4                         ; 004d79f9
    ADD EBX,EBP                         ; 004d79fc
    MOV EBP,EAX                         ; 004d79fe
    INC ECX                             ; 004d7a00
    SHR EBP,0x8                         ; 004d7a01
    AND EAX,0xff                        ; 004d7a04
    ADD EDI,EAX                         ; 004d7a09
    AND EBP,0xff                        ; 004d7a0b
    MOV EAX,dword ptr [ESP + 0x14c]     ; 004d7a11
    INC EAX                             ; 004d7a18
    ADD ESI,EBP                         ; 004d7a19
    MOV EBP,dword ptr [ESP + 0x148]     ; 004d7a1b
    MOV dword ptr [ESP + 0x14c],EAX     ; 004d7a22
    CMP ECX,EBP                         ; 004d7a29
    JL 0x004d79ec                       ; 004d7a2b
        ;   XREF to: 004d79ec (CONDITIONAL_JUMP)  ; LAB_004d79ec
    MOV EDX,dword ptr [ESP + 0x144]     ; 004d7a2d
        ;   Label: LAB_004d7a2d
    ADD EDX,0x4                         ; 004d7a34
    MOV ECX,dword ptr [ESP + 0x13c]     ; 004d7a37
    MOV dword ptr [ESP + 0x144],EDX     ; 004d7a3e
    CMP EDX,ECX                         ; 004d7a45
    JL 0x004d79c4                       ; 004d7a47
        ;   XREF to: 004d79c4 (CONDITIONAL_JUMP)  ; LAB_004d79c4
    MOV EBP,dword ptr [ESP + 0x14c]     ; 004d7a4d
        ;   Label: LAB_004d7a4d
    MOV EDX,EBX                         ; 004d7a54
    MOV EAX,EBX                         ; 004d7a56
    SAR EDX,0x1f                        ; 004d7a58
    IDIV EBP                            ; 004d7a5b
    MOV EBX,EAX                         ; 004d7a5d
    MOV EDX,ESI                         ; 004d7a5f
    MOV EAX,ESI                         ; 004d7a61
    SAR EDX,0x1f                        ; 004d7a63
    IDIV EBP                            ; 004d7a66
    MOV ESI,EAX                         ; 004d7a68
    MOV EDX,EDI                         ; 004d7a6a
    MOV EAX,EDI                         ; 004d7a6c
    SAR EDX,0x1f                        ; 004d7a6e
    IDIV EBP                            ; 004d7a71
    MOV EBP,dword ptr [ESP + 0x134]     ; 004d7a73
    PUSH EBP                            ; 004d7a7a
    PUSH EBX                            ; 004d7a7b
    MOV EDI,EAX                         ; 004d7a7c
    CALL crt_stdio.c_fputc_FUN_006007a0 ; 004d7a7e
        ;   XREF to: 006007a0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fputc_FUN_006007a0(int character, FILE * file)
    ADD ESP,0x8                         ; 004d7a83
    PUSH EBP                            ; 004d7a86
    PUSH ESI                            ; 004d7a87
    CALL crt_stdio.c_fputc_FUN_006007a0 ; 004d7a88
        ;   XREF to: 006007a0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fputc_FUN_006007a0(int character, FILE * file)
    ADD ESP,0x8                         ; 004d7a8d
    PUSH EBP                            ; 004d7a90
    PUSH EDI                            ; 004d7a91
    CALL crt_stdio.c_fputc_FUN_006007a0 ; 004d7a92
        ;   XREF to: 006007a0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fputc_FUN_006007a0(int character, FILE * file)
    ADD ESP,0x8                         ; 004d7a97
    MOV ECX,dword ptr [ESP + 0x138]     ; 004d7a9a
    INC ECX                             ; 004d7aa1
    MOV EBX,dword ptr [0x0067b664]      ; 004d7aa2 | DAT_0067b664
    MOV dword ptr [ESP + 0x138],ECX     ; 004d7aa8
    CMP ECX,EBX                         ; 004d7aaf
    JL 0x004d7926                       ; 004d7ab1
        ;   XREF to: 004d7926 (CONDITIONAL_JUMP)  ; LAB_004d7926
    MOV EAX,dword ptr [ESP + 0x130]     ; 004d7ab7
        ;   Label: LAB_004d7ab7
    INC EAX                             ; 004d7abe
    MOV EDX,dword ptr [0x0067b668]      ; 004d7abf | DAT_0067b668
    MOV dword ptr [ESP + 0x130],EAX     ; 004d7ac5
    CMP EAX,EDX                         ; 004d7acc
    JL 0x004d7900                       ; 004d7ace
        ;   XREF to: 004d7900 (CONDITIONAL_JUMP)  ; LAB_004d7900
    PUSH 0x110                          ; 004d7ad4
        ;   Label: LAB_004d7ad4
    PUSH 0x62b237                       ; 004d7ad9 | = "..\\core\\game.cpp"
    MOV ECX,dword ptr [ESP + 0x13c]     ; 004d7ade
    PUSH ECX                            ; 004d7ae5
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004d7ae6
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004d7aeb
    PUSH 0x0                            ; 004d7aee
    PUSH 0x0                            ; 004d7af0
    LEA EAX,[ESP + 0x8]                 ; 004d7af2
    PUSH EAX                            ; 004d7af6
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004d7af7
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    MOV EBX,dword ptr [0x02d831bc]      ; 004d7afc | DAT_02d831bc
    INC EBX                             ; 004d7b02
    ADD ESP,0xc                         ; 004d7b03
    MOV dword ptr [0x02d831bc],EBX      ; 004d7b06 | DAT_02d831bc
    ADD ESP,0x150                       ; 004d7b0c
    POP EBP                             ; 004d7b12
    POP EDI                             ; 004d7b13
    POP ESI                             ; 004d7b14
    POP EBX                             ; 004d7b15
    RET                                 ; 004d7b16
    MOV ESI,0x1                         ; 004d7b17
        ;   Label: LAB_004d7b17
    MOV dword ptr [0x02d831bc],ECX      ; 004d7b1c | DAT_02d831bc
    MOV dword ptr [0x02d831b4],ESI      ; 004d7b22 | g_DebugRecording
    JMP 0x004d786b                      ; 004d7b28
        ;   XREF to: 004d786b (UNCONDITIONAL_JUMP)  ; LAB_004d786b
    XOR EBP,EBP                         ; 004d7b2d
        ;   Label: LAB_004d7b2d
    MOV dword ptr [0x02d831b4],EBP      ; 004d7b2f | g_DebugRecording
    ADD ESP,0x150                       ; 004d7b35
    POP EBP                             ; 004d7b3b
    POP EDI                             ; 004d7b3c
    POP ESI                             ; 004d7b3d
    POP EBX                             ; 004d7b3e
    RET                                 ; 004d7b3f

