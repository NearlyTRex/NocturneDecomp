; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int wincore_winvideo.cpp_playMovie_FUN_005f4a00(char * directory_path, char * movie_filename)
;
; Parameters:
; char *           Stack[0x4]:4   directory_path
; char *           Stack[0x8]:4   movie_filename
; Local Variables:
; undefined1       Stack[-0x1f8]:1  local_1f8
; undefined1       Stack[-0x74]:1  local_74
;
; XREF[1]:
;   core_main.c_initializeGameSystems_FUN_00507a60 at 00508041
;
; Referenced Globals:
;   mciGetErrorStringA* mciGetErrorStringA = 0021183a
;   mciSendStringA* mciSendStringA = 00211850
;   GetClientRect* GetClientRect = 00211ac0
;   MessageBoxA* MessageBoxA = 00211b44
;   MoveWindow* MoveWindow = 00211b52
;   SetRectEmpty* SetRectEmpty = 00211bf6
;   GetCurrentProcess* GetCurrentProcess = 00211e5a
;   SetThreadPriority* SetThreadPriority = 002121f6
;   Sleep* Sleep = 00212228
;   TerminatedCString s_where_mov_source_006581dd
;   TerminatedCString s_open_s_alias_mov_style_c_006581f8
;   TerminatedCString s_status_mov_window_handle_00658222
;   TerminatedCString s_Unable_to_open_AVI_0065823b
;   TerminatedCString s_play_mov_fullscreen_noti_00658250
;   TerminatedCString s_play_mov_window_notify_0065826b
;   ... and 10 more
;
; Called Functions:
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   crt_stdlib.c_atoi_FUN_005ffef0
;   engine_2d.c_clearInputAndWait_FUN_00403260
;   GetClientRect
;   GetCurrentProcess
;   mciGetErrorStringA
;   mciSendStringA
;   MessageBoxA
;   MoveWindow
;   SetRectEmpty
;   SetThreadPriority
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   shape_memdbg.cpp_openFile_FUN_0050f7a0
;   Sleep
;   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
;   ... and 4 more
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005f4a00
        ;   Label: wincore_winvideo.cpp_playMovie_FUN_005f4a00
    SUB ESP,0x1f4                       ; 005f4a01
    MOV EDX,dword ptr [ESP + 0x200]     ; 005f4a07
    PUSH EDX                            ; 005f4a0e
    MOV ECX,dword ptr [ESP + 0x200]     ; 005f4a0f
    PUSH ECX                            ; 005f4a16
    PUSH 0x65828c                       ; 005f4a17 | = "%s\\%s"
    LEA EAX,[ESP + 0x190]               ; 005f4a1c
    PUSH EAX                            ; 005f4a23
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 005f4a24
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 005f4a29
    PUSH 0x12e                          ; 005f4a2c
    PUSH 0x658292                       ; 005f4a31 | = "..\\wincore\\winvideo.cpp"
    PUSH 0x6582aa                       ; 005f4a36 | = "rb"
    PUSH 0x0                            ; 005f4a3b
    LEA EAX,[ESP + 0x194]               ; 005f4a3d
    PUSH EAX                            ; 005f4a44
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 005f4a45
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    ADD ESP,0x14                        ; 005f4a4a
    TEST EAX,EAX                        ; 005f4a4d
    JNZ 0x005f4a59                      ; 005f4a4f
        ;   XREF to: 005f4a59 (CONDITIONAL_JUMP)  ; LAB_005f4a59
    ADD ESP,0x1f4                       ; 005f4a51
    POP EBP                             ; 005f4a57
    RET                                 ; 005f4a58
    PUSH EDI                            ; 005f4a59
        ;   Label: LAB_005f4a59
    PUSH ESI                            ; 005f4a5a
    PUSH EBX                            ; 005f4a5b
    PUSH 0x132                          ; 005f4a5c
    PUSH 0x6582ad                       ; 005f4a61 | = "..\\wincore\\winvideo.cpp"
    PUSH EAX                            ; 005f4a66
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 005f4a67
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 005f4a6c
    LEA ESI,[ESP + 0x190]               ; 005f4a6f
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 005f4a76
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 005f4a7b
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    MOV EDI,dword ptr [0x03f99504]      ; 005f4a80 | g_MoviePlaying
    MOV EBX,dword ptr [0x03f98468]      ; 005f4a86 | g_MainWindowHandle
    TEST EDI,EDI                        ; 005f4a8c
    JZ 0x005f4a99                       ; 005f4a8e
        ;   XREF to: 005f4a99 (CONDITIONAL_JUMP)  ; LAB_005f4a99
    PUSH EBX                            ; 005f4a90
    CALL wincore_winvideo.cpp_closeMovie_FUN_005f46b0 ; 005f4a91
        ;   XREF to: 005f46b0 (UNCONDITIONAL_CALL)  ; void wincore_winvideo.cpp_closeMovie_FUN_005f46b0(HWND window_handle)
    ADD ESP,0x4                         ; 005f4a96
    PUSH EBX                            ; 005f4a99
        ;   Label: LAB_005f4a99
    PUSH ESI                            ; 005f4a9a
    PUSH 0x6581f8                       ; 005f4a9b | = "open \"%s\" alias mov style child par..."
    LEA EAX,[ESP + 0x18]                ; 005f4aa0
    PUSH EAX                            ; 005f4aa4
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 005f4aa5
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 005f4aaa
    PUSH 0x0                            ; 005f4aad
    PUSH 0x0                            ; 005f4aaf
    PUSH 0x0                            ; 005f4ab1
    LEA EAX,[ESP + 0x18]                ; 005f4ab3
    PUSH EAX                            ; 005f4ab7
    CALL dword ptr CS:[0x611410]        ; 005f4ab8 | mciSendStringA
    TEST EAX,EAX                        ; 005f4abf
    JNZ 0x005f4d4e                      ; 005f4ac1
        ;   XREF to: 005f4d4e (CONDITIONAL_JUMP)  ; LAB_005f4d4e
    PUSH 0x0                            ; 005f4ac7
    MOV EAX,0x1                         ; 005f4ac9
    PUSH 0x104                          ; 005f4ace
    MOV [0x03f99504],EAX                ; 005f4ad3 | g_MoviePlaying
    LEA EAX,[ESP + 0x14]                ; 005f4ad8
    PUSH EAX                            ; 005f4adc
    PUSH 0x658222                       ; 005f4add | = "status mov window handle"
    CALL dword ptr CS:[0x611410]        ; 005f4ae2 | mciSendStringA
    TEST EAX,EAX                        ; 005f4ae9
    JNZ 0x005f4b88                      ; 005f4aeb
        ;   XREF to: 005f4b88 (CONDITIONAL_JUMP)  ; LAB_005f4b88
    LEA EAX,[ESP + 0xc]                 ; 005f4af1
    PUSH EAX                            ; 005f4af5
    CALL crt_stdlib.c_atoi_FUN_005ffef0 ; 005f4af6
        ;   XREF to: 005ffef0 (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_atoi_FUN_005ffef0(char * string_ptr)
    ADD ESP,0x4                         ; 005f4afb
    MOV [0x03f994fc],EAX                ; 005f4afe | g_MovieWindowHandle
    CMP dword ptr [0x03f9950c],0x0      ; 005f4b03 | g_FullscreenMovie
        ;   Label: LAB_005f4b03
    JNZ 0x005f4cb7                      ; 005f4b0a
        ;   XREF to: 005f4cb7 (CONDITIONAL_JUMP)  ; LAB_005f4cb7
    CMP dword ptr [0x03f99504],0x0      ; 005f4b10 | g_MoviePlaying
    JZ 0x005f4cb7                       ; 005f4b17
        ;   XREF to: 005f4cb7 (CONDITIONAL_JUMP)  ; LAB_005f4cb7
    LEA EAX,[ESP + 0x1f0]               ; 005f4b1d
    PUSH EAX                            ; 005f4b24
    PUSH EBX                            ; 005f4b25
    CALL dword ptr CS:[0x6114a4]        ; 005f4b26 | GetClientRect
    PUSH 0x0                            ; 005f4b2d
    PUSH 0x80                           ; 005f4b2f
    LEA EAX,[ESP + 0x118]               ; 005f4b34
    PUSH EAX                            ; 005f4b3b
    PUSH 0x6581dd                       ; 005f4b3c | = "where mov source"
    CALL dword ptr CS:[0x611410]        ; 005f4b41 | mciSendStringA
    LEA EAX,[ESP + 0x1e0]               ; 005f4b48
    PUSH EAX                            ; 005f4b4f
    CALL dword ptr CS:[0x6114f0]        ; 005f4b50 | SetRectEmpty
    MOV DL,byte ptr [ESP + 0x110]       ; 005f4b57
    LEA EAX,[ESP + 0x110]               ; 005f4b5e
    CMP DL,0x20                         ; 005f4b65
    JNZ 0x005f4b80                      ; 005f4b68
        ;   XREF to: 005f4b80 (CONDITIONAL_JUMP)  ; LAB_005f4b80
    MOV DH,byte ptr [EAX + 0x1]         ; 005f4b6a
        ;   Label: LAB_005f4b6a
    INC EAX                             ; 005f4b6d
    CMP DH,0x20                         ; 005f4b6e
    JZ 0x005f4b6a                       ; 005f4b71
        ;   XREF to: 005f4b6a (CONDITIONAL_JUMP)  ; LAB_005f4b6a
    LEA EAX,[EAX]                       ; 005f4b73
    LEA EDX,[EDX]                       ; 005f4b79
    NOP                                 ; 005f4b7f
    CMP byte ptr [EAX],0x20             ; 005f4b80
        ;   Label: LAB_005f4b80
    JZ 0x005f4bb0                       ; 005f4b83
        ;   XREF to: 005f4bb0 (CONDITIONAL_JUMP)  ; LAB_005f4bb0
    INC EAX                             ; 005f4b85
    JMP 0x005f4b80                      ; 005f4b86
        ;   XREF to: 005f4b80 (UNCONDITIONAL_JUMP)  ; LAB_005f4b80
    PUSH 0x104                          ; 005f4b88
        ;   Label: LAB_005f4b88
    LEA EDX,[ESP + 0x10]                ; 005f4b8d
    PUSH EDX                            ; 005f4b91
    PUSH EAX                            ; 005f4b92
    CALL dword ptr CS:[0x61140c]        ; 005f4b93 | mciGetErrorStringA
    PUSH 0x30                           ; 005f4b9a
    PUSH 0x0                            ; 005f4b9c
    LEA EAX,[ESP + 0x14]                ; 005f4b9e
    PUSH EAX                            ; 005f4ba2
    PUSH EBX                            ; 005f4ba3
    CALL dword ptr CS:[0x6114c4]        ; 005f4ba4 | MessageBoxA
    JMP 0x005f4b03                      ; 005f4bab
        ;   XREF to: 005f4b03 (UNCONDITIONAL_JUMP)  ; LAB_005f4b03
    CMP byte ptr [EAX],0x20             ; 005f4bb0
        ;   Label: LAB_005f4bb0
    JNZ 0x005f4bb8                      ; 005f4bb3
        ;   XREF to: 005f4bb8 (CONDITIONAL_JUMP)  ; LAB_005f4bb8
    INC EAX                             ; 005f4bb5
    JMP 0x005f4bb0                      ; 005f4bb6
        ;   XREF to: 005f4bb0 (UNCONDITIONAL_JUMP)  ; LAB_005f4bb0
    CMP byte ptr [EAX],0x20             ; 005f4bb8
        ;   Label: LAB_005f4bb8
    JZ 0x005f4bc0                       ; 005f4bbb
        ;   XREF to: 005f4bc0 (CONDITIONAL_JUMP)  ; LAB_005f4bc0
    INC EAX                             ; 005f4bbd
    JMP 0x005f4bb8                      ; 005f4bbe
        ;   XREF to: 005f4bb8 (UNCONDITIONAL_JUMP)  ; LAB_005f4bb8
    CMP byte ptr [EAX],0x20             ; 005f4bc0
        ;   Label: LAB_005f4bc0
    JNZ 0x005f4be1                      ; 005f4bc3
        ;   XREF to: 005f4be1 (CONDITIONAL_JUMP)  ; LAB_005f4be1
    INC EAX                             ; 005f4bc5
    JMP 0x005f4bc0                      ; 005f4bc6
        ;   XREF to: 005f4bc0 (UNCONDITIONAL_JUMP)  ; LAB_005f4bc0
    IMUL ECX,dword ptr [ESP + 0x1e8],0xa ; 005f4bc8
        ;   Label: LAB_005f4bc8
    XOR EDX,EDX                         ; 005f4bd0
    MOV DL,byte ptr [EAX]               ; 005f4bd2
    SUB EDX,0x30                        ; 005f4bd4
    ADD ECX,EDX                         ; 005f4bd7
    INC EAX                             ; 005f4bd9
    MOV dword ptr [ESP + 0x1e8],ECX     ; 005f4bda
    MOV DL,byte ptr [EAX]               ; 005f4be1
        ;   Label: LAB_005f4be1
    CMP DL,0x30                         ; 005f4be3
    JNC 0x005f4bf0                      ; 005f4be6
        ;   XREF to: 005f4bf0 (CONDITIONAL_JUMP)  ; LAB_005f4bf0
    CMP byte ptr [EAX],0x20             ; 005f4be8
        ;   Label: LAB_005f4be8
    JNZ 0x005f4c10                      ; 005f4beb
        ;   XREF to: 005f4c10 (CONDITIONAL_JUMP)  ; LAB_005f4c10
    INC EAX                             ; 005f4bed
    JMP 0x005f4be8                      ; 005f4bee
        ;   XREF to: 005f4be8 (UNCONDITIONAL_JUMP)  ; LAB_005f4be8
    CMP DL,0x39                         ; 005f4bf0
        ;   Label: LAB_005f4bf0
    JBE 0x005f4bc8                      ; 005f4bf3
        ;   XREF to: 005f4bc8 (CONDITIONAL_JUMP)  ; LAB_005f4bc8
    JMP 0x005f4be8                      ; 005f4bf5
        ;   XREF to: 005f4be8 (UNCONDITIONAL_JUMP)  ; LAB_005f4be8
    IMUL ECX,dword ptr [ESP + 0x1ec],0xa ; 005f4bf7
        ;   Label: LAB_005f4bf7
    XOR EDX,EDX                         ; 005f4bff
    MOV DL,BH                           ; 005f4c01
    SUB EDX,0x30                        ; 005f4c03
    ADD ECX,EDX                         ; 005f4c06
    INC EAX                             ; 005f4c08
    MOV dword ptr [ESP + 0x1ec],ECX     ; 005f4c09
    MOV BH,byte ptr [EAX]               ; 005f4c10
        ;   Label: LAB_005f4c10
    CMP BH,0x30                         ; 005f4c12
    JC 0x005f4c1c                       ; 005f4c15
        ;   XREF to: 005f4c1c (CONDITIONAL_JUMP)  ; LAB_005f4c1c
    CMP BH,0x39                         ; 005f4c17
    JBE 0x005f4bf7                      ; 005f4c1a
        ;   XREF to: 005f4bf7 (CONDITIONAL_JUMP)  ; LAB_005f4bf7
    CMP dword ptr [ESP + 0x1f8],0x190   ; 005f4c1c
        ;   Label: LAB_005f4c1c
    JLE 0x005f4d38                      ; 005f4c27
        ;   XREF to: 005f4d38 (CONDITIONAL_JUMP)  ; LAB_005f4d38
    MOV EAX,dword ptr [ESP + 0x1e8]     ; 005f4c2d
        ;   Label: LAB_005f4c2d
    MOV EBP,dword ptr [ESP + 0x1ec]     ; 005f4c34
    ADD EAX,EAX                         ; 005f4c3b
    ADD EBP,EBP                         ; 005f4c3d
    MOV dword ptr [ESP + 0x1e8],EAX     ; 005f4c3f
    MOV dword ptr [ESP + 0x1ec],EBP     ; 005f4c46
    MOV EAX,dword ptr [ESP + 0x1f8]     ; 005f4c4d
        ;   Label: LAB_005f4c4d
    MOV EDX,EAX                         ; 005f4c54
    SAR EDX,0x1f                        ; 005f4c56
    SUB EAX,EDX                         ; 005f4c59
    SAR EAX,0x1                         ; 005f4c5b
    MOV EBX,EAX                         ; 005f4c5d
    MOV EAX,dword ptr [ESP + 0x1e8]     ; 005f4c5f
    MOV EDX,EAX                         ; 005f4c66
    SAR EDX,0x1f                        ; 005f4c68
    SUB EAX,EDX                         ; 005f4c6b
    SAR EAX,0x1                         ; 005f4c6d
    SUB EBX,EAX                         ; 005f4c6f
    MOV EAX,dword ptr [ESP + 0x1fc]     ; 005f4c71
    MOV EDX,EAX                         ; 005f4c78
    SAR EDX,0x1f                        ; 005f4c7a
    SUB EAX,EDX                         ; 005f4c7d
    SAR EAX,0x1                         ; 005f4c7f
    MOV ECX,EAX                         ; 005f4c81
    MOV EAX,dword ptr [ESP + 0x1ec]     ; 005f4c83
    MOV EDX,EAX                         ; 005f4c8a
    SAR EDX,0x1f                        ; 005f4c8c
    SUB EAX,EDX                         ; 005f4c8f
    SAR EAX,0x1                         ; 005f4c91
    PUSH 0x1                            ; 005f4c93
    MOV EDX,dword ptr [ESP + 0x1f0]     ; 005f4c95
    PUSH EDX                            ; 005f4c9c
    MOV ESI,dword ptr [ESP + 0x1f0]     ; 005f4c9d
    PUSH ESI                            ; 005f4ca4
    SUB ECX,EAX                         ; 005f4ca5
    PUSH ECX                            ; 005f4ca7
    PUSH EBX                            ; 005f4ca8
    MOV EDI,dword ptr [0x03f994fc]      ; 005f4ca9 | g_MovieWindowHandle
    PUSH EDI                            ; 005f4caf
    CALL dword ptr CS:[0x6114c8]        ; 005f4cb0 | MoveWindow
    MOV ECX,dword ptr [0x03f99500]      ; 005f4cb7 | g_MovieHandle
        ;   Label: LAB_005f4cb7
    MOV EAX,[0x03f98468]                ; 005f4cbd | g_MainWindowHandle
    TEST ECX,ECX                        ; 005f4cc2
    SETZ DL                             ; 005f4cc4
    AND EDX,0xff                        ; 005f4cc7
    MOV dword ptr [0x03f99500],EDX      ; 005f4ccd | g_MovieHandle
    TEST EDX,EDX                        ; 005f4cd3
    JZ 0x005f4d6c                       ; 005f4cd5
        ;   XREF to: 005f4d6c (CONDITIONAL_JUMP)  ; LAB_005f4d6c
    MOV ESI,dword ptr [0x03f9950c]      ; 005f4cdb | g_FullscreenMovie
    TEST ESI,ESI                        ; 005f4ce1
    JZ 0x005f4d7c                       ; 005f4ce3
        ;   XREF to: 005f4d7c (CONDITIONAL_JUMP)  ; LAB_005f4d7c
    PUSH EAX                            ; 005f4ce9
    PUSH 0x0                            ; 005f4cea
    PUSH 0x0                            ; 005f4cec
    PUSH 0x658250                       ; 005f4cee | = "play mov fullscreen notify"
    CALL dword ptr CS:[0x611410]        ; 005f4cf3 | mciSendStringA
        ;   Label: LAB_005f4cf3
    CALL dword ptr CS:[0x61157c]        ; 005f4cfa | GetCurrentProcess
    PUSH -0xf                           ; 005f4d01
    PUSH EAX                            ; 005f4d03
    MOV EBX,EAX                         ; 005f4d04
    CALL dword ptr CS:[0x61163c]        ; 005f4d06 | SetThreadPriority
    XOR ESI,ESI                         ; 005f4d0d
    CALL wincore_winrun.cpp_processWindowMessages_FUN_005f35e0 ; 005f4d0f
        ;   XREF to: 005f35e0 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_processWindowMessages_FUN_005f35e0()
        ;   Label: LAB_005f4d0f
    CMP ESI,dword ptr [0x03f99500]      ; 005f4d14 | g_MovieHandle
    JZ 0x005f4d89                       ; 005f4d1a
        ;   XREF to: 005f4d89 (CONDITIONAL_JUMP)  ; LAB_005f4d89
    CALL wincore_winrun.cpp_wasKeyPressed_FUN_005f2f00 ; 005f4d1c
        ;   XREF to: 005f2f00 (UNCONDITIONAL_CALL)  ; bool wincore_winrun.cpp_wasKeyPressed_FUN_005f2f00()
    TEST EAX,EAX                        ; 005f4d21
    JNZ 0x005f4d89                      ; 005f4d23
        ;   XREF to: 005f4d89 (CONDITIONAL_JUMP)  ; LAB_005f4d89
    CMP ESI,dword ptr [0x03f99504]      ; 005f4d25 | g_MoviePlaying
    JZ 0x005f4d89                       ; 005f4d2b
        ;   XREF to: 005f4d89 (CONDITIONAL_JUMP)  ; LAB_005f4d89
    PUSH 0x14                           ; 005f4d2d
    CALL dword ptr CS:[0x611644]        ; 005f4d2f | Sleep
    JMP 0x005f4d0f                      ; 005f4d36
        ;   XREF to: 005f4d0f (UNCONDITIONAL_JUMP)  ; LAB_005f4d0f
    CMP dword ptr [ESP + 0x1fc],0x12c   ; 005f4d38
        ;   Label: LAB_005f4d38
    JG 0x005f4c2d                       ; 005f4d43
        ;   XREF to: 005f4c2d (CONDITIONAL_JUMP)  ; LAB_005f4c2d
    JMP 0x005f4c4d                      ; 005f4d49
        ;   XREF to: 005f4c4d (UNCONDITIONAL_JUMP)  ; LAB_005f4c4d
    PUSH 0x30                           ; 005f4d4e
        ;   Label: LAB_005f4d4e
    PUSH 0x0                            ; 005f4d50
    PUSH 0x65823b                       ; 005f4d52 | = "Unable to open .AVI!"
    PUSH EBX                            ; 005f4d57
    XOR EBP,EBP                         ; 005f4d58
    CALL dword ptr CS:[0x6114c4]        ; 005f4d5a | MessageBoxA
    MOV dword ptr [0x03f99504],EBP      ; 005f4d61 | g_MoviePlaying
    JMP 0x005f4cb7                      ; 005f4d67
        ;   XREF to: 005f4cb7 (UNCONDITIONAL_JUMP)  ; LAB_005f4cb7
    PUSH 0x0                            ; 005f4d6c
        ;   Label: LAB_005f4d6c
    PUSH 0x0                            ; 005f4d6e
    PUSH 0x0                            ; 005f4d70
    PUSH 0x658282                       ; 005f4d72 | = "pause mov"
    JMP 0x005f4cf3                      ; 005f4d77
        ;   XREF to: 005f4cf3 (UNCONDITIONAL_JUMP)  ; LAB_005f4cf3
    PUSH EAX                            ; 005f4d7c
        ;   Label: LAB_005f4d7c
    PUSH ESI                            ; 005f4d7d
    PUSH ESI                            ; 005f4d7e
    PUSH 0x65826b                       ; 005f4d7f | = "play mov window notify"
    JMP 0x005f4cf3                      ; 005f4d84
        ;   XREF to: 005f4cf3 (UNCONDITIONAL_JUMP)  ; LAB_005f4cf3
    PUSH 0x1                            ; 005f4d89
        ;   Label: LAB_005f4d89
    PUSH EBX                            ; 005f4d8b
    CALL dword ptr CS:[0x61163c]        ; 005f4d8c | SetThreadPriority
    MOV EAX,[0x03f98468]                ; 005f4d93 | g_MainWindowHandle
    PUSH EAX                            ; 005f4d98
    CALL wincore_winvideo.cpp_closeMovie_FUN_005f46b0 ; 005f4d99
        ;   XREF to: 005f46b0 (UNCONDITIONAL_CALL)  ; void wincore_winvideo.cpp_closeMovie_FUN_005f46b0(HWND window_handle)
    ADD ESP,0x4                         ; 005f4d9e
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 005f4da1
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 005f4da6
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 005f4dab
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    MOV EAX,0x1                         ; 005f4db0
    POP EBX                             ; 005f4db5
    POP ESI                             ; 005f4db6
    POP EDI                             ; 005f4db7
    ADD ESP,0x1f4                       ; 005f4db8
    POP EBP                             ; 005f4dbe
    RET                                 ; 005f4dbf

