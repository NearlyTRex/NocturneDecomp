; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl wincore_winvideo_cpp_playMovie_FUN_005b4cd0(char *directory_path,char *movie_filename)
;
; Parameters:
; char *           Stack[0x4]:4   directory_path
; char *           Stack[0x8]:4   movie_filename
; Local Variables:
; undefined        Stack[-0x1f8]:1  local_1f8
; undefined        Stack[-0xf4]:1  local_f4
; undefined1       Stack[-0xf3]:1  local_f3
; undefined1       Stack[-0xf2]:1  local_f2
; undefined1       Stack[-0xf1]:1  local_f1
; undefined1       Stack[-0xf0]:1  local_f0
; undefined1       Stack[-0xef]:1  local_ef
; undefined1       Stack[-0xee]:1  local_ee
; undefined        Stack[-0x74]:1  local_74
; undefined        Stack[-0x24]:1  local_24
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined        Stack[-0x14]:1  local_14
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   core_main.c_FUN_005032a0 at 005037f9
;
; Referenced Globals:
;   void* PTR_mciGetErrorStringA_005d0444 = 001d08d8
;   void* PTR_mciSendStringA_005d044c = 001d0900
;   void* PTR_GetClientRect_005d04bc = 001d0ae2
;   void* PTR_MessageBoxA_005d04dc = 001d0b66
;   void* PTR_MoveWindow_005d04e0 = 001d0b74
;   void* PTR_SetRectEmpty_005d0508 = 001d0c18
;   void* PTR_GetCurrentProcess_005d0588 = 001d0e40
;   void* PTR_GetThreadPriority_005d05d0 = 001d0f8e
;   void* PTR_SetThreadPriority_005d0650 = 001d11fe
;   void* PTR_Sleep_005d0658 = 001d1230
;   TerminatedCString s_where_mov_source_005f9fd0
;   TerminatedCString s_open_s_alias_mov_style_c_005f9feb
;   TerminatedCString s_status_mov_window_handle_005fa015
;   TerminatedCString s_Unable_to_open_AVI_005fa02e
;   TerminatedCString s_play_mov_fullscreen_noti_005fa043
;   ... and 9 more
;
; Called Functions:
;   crt_stdio.c_fclose_FUN_005c0d10
;   crt_stdio.c_fopen_FUN_005c157c
;   crt_stdlib.c_atoi_FUN_005c30e0
;   crt_unknown.c_sprintf_FUN_005bfb40
;   engine_2d.c_clearInputAndWait_FUN_004032b0
;   engine_special.cpp_clearScreen_FUN_0057dc40
;   GetClientRect
;   GetCurrentProcess
;   GetThreadPriority
;   mciGetErrorStringA
;   mciSendStringA
;   MessageBoxA
;   MoveWindow
;   SetRectEmpty
;   SetThreadPriority
;   ... and 5 more
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005b4cd0
        ;   Label: wincore_winvideo.cpp_playMovie_FUN_005b4cd0
    SUB ESP,0x1f4                       ; 005b4cd1
    MOV EDX,dword ptr [ESP + 0x200]     ; 005b4cd7
    PUSH EDX                            ; 005b4cde
    MOV ECX,dword ptr [ESP + 0x200]     ; 005b4cdf
    PUSH ECX                            ; 005b4ce6
    PUSH 0x5fa07f                       ; 005b4ce7 | = "%s\\%s"
    LEA EAX,[ESP + 0x190]               ; 005b4cec
    PUSH EAX                            ; 005b4cf3
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 005b4cf4
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x10                        ; 005b4cf9
    PUSH 0x5fa085                       ; 005b4cfc | DAT_005fa085
    LEA EAX,[ESP + 0x188]               ; 005b4d01
    PUSH EAX                            ; 005b4d08
    CALL crt_stdio.c_fopen_FUN_005c157c ; 005b4d09
        ;   XREF to: 005c157c (UNCONDITIONAL_CALL)  ; _FILE * crt_stdio.c_fopen_FUN_005c157c(char * filename, char * mode)
    ADD ESP,0x8                         ; 005b4d0e
    TEST EAX,EAX                        ; 005b4d11
    JNZ 0x005b4d1d                      ; 005b4d13
        ;   XREF to: 005b4d1d (CONDITIONAL_JUMP)  ; LAB_005b4d1d
    ADD ESP,0x1f4                       ; 005b4d15
    POP EBP                             ; 005b4d1b
    RET                                 ; 005b4d1c
    PUSH EDI                            ; 005b4d1d
        ;   Label: LAB_005b4d1d
    PUSH ESI                            ; 005b4d1e
    PUSH EBX                            ; 005b4d1f
    PUSH EAX                            ; 005b4d20
    CALL crt_stdio.c_fclose_FUN_005c0d10 ; 005b4d21
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005c0d10()
    ADD ESP,0x4                         ; 005b4d26
    LEA ESI,[ESP + 0x190]               ; 005b4d29
    CALL engine_special.cpp_clearScreen_FUN_0057dc40 ; 005b4d30
        ;   XREF to: 0057dc40 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_0057dc40()
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005acff0 ; 005b4d35
        ;   XREF to: 005acff0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005acff0()
    MOV EDI,dword ptr [0x02c9d2a0]      ; 005b4d3a | DAT_02c9d2a0
    MOV EBX,dword ptr [0x02c9be68]      ; 005b4d40 | DAT_02c9be68
    TEST EDI,EDI                        ; 005b4d46
    JZ 0x005b4d53                       ; 005b4d48
        ;   XREF to: 005b4d53 (CONDITIONAL_JUMP)  ; LAB_005b4d53
    PUSH EBX                            ; 005b4d4a
    CALL wincore_winvideo.cpp_closeMovie_FUN_005b4980 ; 005b4d4b
        ;   XREF to: 005b4980 (UNCONDITIONAL_CALL)  ; void wincore_winvideo.cpp_closeMovie_FUN_005b4980(HWND window_handle)
    ADD ESP,0x4                         ; 005b4d50
    PUSH EBX                            ; 005b4d53
        ;   Label: LAB_005b4d53
    PUSH ESI                            ; 005b4d54
    PUSH 0x5f9feb                       ; 005b4d55 | = "open \"%s\" alias mov style child par..."
    LEA EAX,[ESP + 0x18]                ; 005b4d5a
    PUSH EAX                            ; 005b4d5e
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 005b4d5f
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x10                        ; 005b4d64
    PUSH 0x0                            ; 005b4d67
    PUSH 0x0                            ; 005b4d69
    PUSH 0x0                            ; 005b4d6b
    LEA EAX,[ESP + 0x18]                ; 005b4d6d
    PUSH EAX                            ; 005b4d71
    CALL dword ptr CS:[0x5d044c]        ; 005b4d72 | PTR_mciSendStringA_005d044c
    TEST EAX,EAX                        ; 005b4d79
    JNZ 0x005b5009                      ; 005b4d7b
        ;   XREF to: 005b5009 (CONDITIONAL_JUMP)  ; LAB_005b5009
    PUSH 0x0                            ; 005b4d81
    MOV EAX,0x1                         ; 005b4d83
    PUSH 0x104                          ; 005b4d88
    MOV [0x02c9d2a0],EAX                ; 005b4d8d | DAT_02c9d2a0
    LEA EAX,[ESP + 0x14]                ; 005b4d92
    PUSH EAX                            ; 005b4d96
    PUSH 0x5fa015                       ; 005b4d97 | = "status mov window handle"
    CALL dword ptr CS:[0x5d044c]        ; 005b4d9c | PTR_mciSendStringA_005d044c
    TEST EAX,EAX                        ; 005b4da3
    JNZ 0x005b4e38                      ; 005b4da5
        ;   XREF to: 005b4e38 (CONDITIONAL_JUMP)  ; LAB_005b4e38
    LEA EAX,[ESP + 0xc]                 ; 005b4dab
    PUSH EAX                            ; 005b4daf
    CALL crt_stdlib.c_atoi_FUN_005c30e0 ; 005b4db0
        ;   XREF to: 005c30e0 (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_atoi_FUN_005c30e0(char * string_ptr)
    ADD ESP,0x4                         ; 005b4db5
    MOV [0x02c9d298],EAX                ; 005b4db8 | DAT_02c9d298
    CMP dword ptr [0x02c9d2a8],0x0      ; 005b4dbd | DAT_02c9d2a8
        ;   Label: LAB_005b4dbd
    JNZ 0x005b4f67                      ; 005b4dc4
        ;   XREF to: 005b4f67 (CONDITIONAL_JUMP)  ; LAB_005b4f67
    CMP dword ptr [0x02c9d2a0],0x0      ; 005b4dca | DAT_02c9d2a0
    JZ 0x005b4f67                       ; 005b4dd1
        ;   XREF to: 005b4f67 (CONDITIONAL_JUMP)  ; LAB_005b4f67
    LEA EAX,[ESP + 0x1f0]               ; 005b4dd7
    PUSH EAX                            ; 005b4dde
    PUSH EBX                            ; 005b4ddf
    CALL dword ptr CS:[0x5d04bc]        ; 005b4de0 | PTR_GetClientRect_005d04bc
    PUSH 0x0                            ; 005b4de7
    PUSH 0x80                           ; 005b4de9
    LEA EAX,[ESP + 0x118]               ; 005b4dee
    PUSH EAX                            ; 005b4df5
    PUSH 0x5f9fd0                       ; 005b4df6 | = "where mov source"
    CALL dword ptr CS:[0x5d044c]        ; 005b4dfb | PTR_mciSendStringA_005d044c
    LEA EAX,[ESP + 0x1e0]               ; 005b4e02
    PUSH EAX                            ; 005b4e09
    CALL dword ptr CS:[0x5d0508]        ; 005b4e0a | PTR_SetRectEmpty_005d0508
    MOV DL,byte ptr [ESP + 0x110]       ; 005b4e11
    LEA EAX,[ESP + 0x110]               ; 005b4e18
    CMP DL,0x20                         ; 005b4e1f
    JNZ 0x005b4e30                      ; 005b4e22
        ;   XREF to: 005b4e30 (CONDITIONAL_JUMP)  ; LAB_005b4e30
    MOV DH,byte ptr [EAX + 0x1]         ; 005b4e24
        ;   Label: LAB_005b4e24
    INC EAX                             ; 005b4e27
    CMP DH,0x20                         ; 005b4e28
    JZ 0x005b4e24                       ; 005b4e2b
        ;   XREF to: 005b4e24 (CONDITIONAL_JUMP)  ; LAB_005b4e24
    LEA EAX,[EAX]                       ; 005b4e2d
    CMP byte ptr [EAX],0x20             ; 005b4e30
        ;   Label: LAB_005b4e30
    JZ 0x005b4e60                       ; 005b4e33
        ;   XREF to: 005b4e60 (CONDITIONAL_JUMP)  ; LAB_005b4e60
    INC EAX                             ; 005b4e35
    JMP 0x005b4e30                      ; 005b4e36
        ;   XREF to: 005b4e30 (UNCONDITIONAL_JUMP)  ; LAB_005b4e30
    PUSH 0x104                          ; 005b4e38
        ;   Label: LAB_005b4e38
    LEA EDX,[ESP + 0x10]                ; 005b4e3d
    PUSH EDX                            ; 005b4e41
    PUSH EAX                            ; 005b4e42
    CALL dword ptr CS:[0x5d0444]        ; 005b4e43 | PTR_mciGetErrorStringA_005d0444
    PUSH 0x30                           ; 005b4e4a
    PUSH 0x0                            ; 005b4e4c
    LEA EAX,[ESP + 0x14]                ; 005b4e4e
    PUSH EAX                            ; 005b4e52
    PUSH EBX                            ; 005b4e53
    CALL dword ptr CS:[0x5d04dc]        ; 005b4e54 | PTR_MessageBoxA_005d04dc
    JMP 0x005b4dbd                      ; 005b4e5b
        ;   XREF to: 005b4dbd (UNCONDITIONAL_JUMP)  ; LAB_005b4dbd
    CMP byte ptr [EAX],0x20             ; 005b4e60
        ;   Label: LAB_005b4e60
    JNZ 0x005b4e68                      ; 005b4e63
        ;   XREF to: 005b4e68 (CONDITIONAL_JUMP)  ; LAB_005b4e68
    INC EAX                             ; 005b4e65
    JMP 0x005b4e60                      ; 005b4e66
        ;   XREF to: 005b4e60 (UNCONDITIONAL_JUMP)  ; LAB_005b4e60
    CMP byte ptr [EAX],0x20             ; 005b4e68
        ;   Label: LAB_005b4e68
    JZ 0x005b4e70                       ; 005b4e6b
        ;   XREF to: 005b4e70 (CONDITIONAL_JUMP)  ; LAB_005b4e70
    INC EAX                             ; 005b4e6d
    JMP 0x005b4e68                      ; 005b4e6e
        ;   XREF to: 005b4e68 (UNCONDITIONAL_JUMP)  ; LAB_005b4e68
    CMP byte ptr [EAX],0x20             ; 005b4e70
        ;   Label: LAB_005b4e70
    JNZ 0x005b4e91                      ; 005b4e73
        ;   XREF to: 005b4e91 (CONDITIONAL_JUMP)  ; LAB_005b4e91
    INC EAX                             ; 005b4e75
    JMP 0x005b4e70                      ; 005b4e76
        ;   XREF to: 005b4e70 (UNCONDITIONAL_JUMP)  ; LAB_005b4e70
    IMUL ECX,dword ptr [ESP + 0x1e8],0xa ; 005b4e78
        ;   Label: LAB_005b4e78
    XOR EDX,EDX                         ; 005b4e80
    MOV DL,byte ptr [EAX]               ; 005b4e82
    SUB EDX,0x30                        ; 005b4e84
    ADD ECX,EDX                         ; 005b4e87
    INC EAX                             ; 005b4e89
    MOV dword ptr [ESP + 0x1e8],ECX     ; 005b4e8a
    MOV DL,byte ptr [EAX]               ; 005b4e91
        ;   Label: LAB_005b4e91
    CMP DL,0x30                         ; 005b4e93
    JNC 0x005b4ea0                      ; 005b4e96
        ;   XREF to: 005b4ea0 (CONDITIONAL_JUMP)  ; LAB_005b4ea0
    CMP byte ptr [EAX],0x20             ; 005b4e98
        ;   Label: LAB_005b4e98
    JNZ 0x005b4ec0                      ; 005b4e9b
        ;   XREF to: 005b4ec0 (CONDITIONAL_JUMP)  ; LAB_005b4ec0
    INC EAX                             ; 005b4e9d
    JMP 0x005b4e98                      ; 005b4e9e
        ;   XREF to: 005b4e98 (UNCONDITIONAL_JUMP)  ; LAB_005b4e98
    CMP DL,0x39                         ; 005b4ea0
        ;   Label: LAB_005b4ea0
    JBE 0x005b4e78                      ; 005b4ea3
        ;   XREF to: 005b4e78 (CONDITIONAL_JUMP)  ; LAB_005b4e78
    JMP 0x005b4e98                      ; 005b4ea5
        ;   XREF to: 005b4e98 (UNCONDITIONAL_JUMP)  ; LAB_005b4e98
    IMUL EDX,dword ptr [ESP + 0x1ec],0xa ; 005b4ea7
        ;   Label: LAB_005b4ea7
    XOR ECX,ECX                         ; 005b4eaf
    MOV CL,BH                           ; 005b4eb1
    SUB ECX,0x30                        ; 005b4eb3
    ADD EDX,ECX                         ; 005b4eb6
    INC EAX                             ; 005b4eb8
    MOV dword ptr [ESP + 0x1ec],EDX     ; 005b4eb9
    MOV BH,byte ptr [EAX]               ; 005b4ec0
        ;   Label: LAB_005b4ec0
    CMP BH,0x30                         ; 005b4ec2
    JC 0x005b4ecc                       ; 005b4ec5
        ;   XREF to: 005b4ecc (CONDITIONAL_JUMP)  ; LAB_005b4ecc
    CMP BH,0x39                         ; 005b4ec7
    JBE 0x005b4ea7                      ; 005b4eca
        ;   XREF to: 005b4ea7 (CONDITIONAL_JUMP)  ; LAB_005b4ea7
    CMP dword ptr [ESP + 0x1f8],0x190   ; 005b4ecc
        ;   Label: LAB_005b4ecc
    JLE 0x005b4ff3                      ; 005b4ed7
        ;   XREF to: 005b4ff3 (CONDITIONAL_JUMP)  ; LAB_005b4ff3
    MOV EAX,dword ptr [ESP + 0x1e8]     ; 005b4edd
        ;   Label: LAB_005b4edd
    MOV EBP,dword ptr [ESP + 0x1ec]     ; 005b4ee4
    ADD EAX,EAX                         ; 005b4eeb
    ADD EBP,EBP                         ; 005b4eed
    MOV dword ptr [ESP + 0x1e8],EAX     ; 005b4eef
    MOV dword ptr [ESP + 0x1ec],EBP     ; 005b4ef6
    MOV EAX,dword ptr [ESP + 0x1f8]     ; 005b4efd
        ;   Label: LAB_005b4efd
    MOV EDX,EAX                         ; 005b4f04
    SAR EDX,0x1f                        ; 005b4f06
    SUB EAX,EDX                         ; 005b4f09
    SAR EAX,0x1                         ; 005b4f0b
    MOV EBX,EAX                         ; 005b4f0d
    MOV EAX,dword ptr [ESP + 0x1e8]     ; 005b4f0f
    MOV EDX,EAX                         ; 005b4f16
    SAR EDX,0x1f                        ; 005b4f18
    SUB EAX,EDX                         ; 005b4f1b
    SAR EAX,0x1                         ; 005b4f1d
    SUB EBX,EAX                         ; 005b4f1f
    MOV EAX,dword ptr [ESP + 0x1fc]     ; 005b4f21
    MOV EDX,EAX                         ; 005b4f28
    SAR EDX,0x1f                        ; 005b4f2a
    SUB EAX,EDX                         ; 005b4f2d
    SAR EAX,0x1                         ; 005b4f2f
    MOV ECX,EAX                         ; 005b4f31
    MOV EAX,dword ptr [ESP + 0x1ec]     ; 005b4f33
    MOV EDX,EAX                         ; 005b4f3a
    SAR EDX,0x1f                        ; 005b4f3c
    SUB EAX,EDX                         ; 005b4f3f
    SAR EAX,0x1                         ; 005b4f41
    PUSH 0x1                            ; 005b4f43
    MOV EDX,dword ptr [ESP + 0x1f0]     ; 005b4f45
    PUSH EDX                            ; 005b4f4c
    MOV ESI,dword ptr [ESP + 0x1f0]     ; 005b4f4d
    PUSH ESI                            ; 005b4f54
    SUB ECX,EAX                         ; 005b4f55
    PUSH ECX                            ; 005b4f57
    PUSH EBX                            ; 005b4f58
    MOV EDI,dword ptr [0x02c9d298]      ; 005b4f59 | DAT_02c9d298
    PUSH EDI                            ; 005b4f5f
    CALL dword ptr CS:[0x5d04e0]        ; 005b4f60 | PTR_MoveWindow_005d04e0
    MOV ECX,dword ptr [0x02c9d29c]      ; 005b4f67 | DAT_02c9d29c
        ;   Label: LAB_005b4f67
    MOV EDX,dword ptr [0x02c9be68]      ; 005b4f6d | DAT_02c9be68
    TEST ECX,ECX                        ; 005b4f73
    SETZ AL                             ; 005b4f75
    AND EAX,0xff                        ; 005b4f78
    MOV [0x02c9d29c],EAX                ; 005b4f7d | DAT_02c9d29c
    TEST EAX,EAX                        ; 005b4f82
    JZ 0x005b5027                       ; 005b4f84
        ;   XREF to: 005b5027 (CONDITIONAL_JUMP)  ; LAB_005b5027
    MOV ESI,dword ptr [0x02c9d2a8]      ; 005b4f8a | DAT_02c9d2a8
    TEST ESI,ESI                        ; 005b4f90
    JZ 0x005b5037                       ; 005b4f92
        ;   XREF to: 005b5037 (CONDITIONAL_JUMP)  ; LAB_005b5037
    PUSH EDX                            ; 005b4f98
    PUSH 0x0                            ; 005b4f99
    PUSH 0x0                            ; 005b4f9b
    PUSH 0x5fa043                       ; 005b4f9d | = "play mov fullscreen notify"
    CALL dword ptr CS:[0x5d044c]        ; 005b4fa2 | PTR_mciSendStringA_005d044c
        ;   Label: LAB_005b4fa2
    CALL dword ptr CS:[0x5d0588]        ; 005b4fa9 | PTR_GetCurrentProcess_005d0588
    PUSH EAX                            ; 005b4fb0
    MOV EBX,EAX                         ; 005b4fb1
    MOV ESI,EAX                         ; 005b4fb3
    CALL dword ptr CS:[0x5d05d0]        ; 005b4fb5 | PTR_GetThreadPriority_005d05d0
    PUSH -0xf                           ; 005b4fbc
    PUSH EBX                            ; 005b4fbe
    MOV EDI,EAX                         ; 005b4fbf
    CALL dword ptr CS:[0x5d0650]        ; 005b4fc1 | PTR_SetThreadPriority_005d0650
    XOR EBX,EBX                         ; 005b4fc8
    CALL wincore_winrun.cpp_FUN_005b2cf0 ; 005b4fca
        ;   XREF to: 005b2cf0 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_FUN_005b2cf0()
        ;   Label: LAB_005b4fca
    CMP EBX,dword ptr [0x02c9d29c]      ; 005b4fcf | DAT_02c9d29c
    JZ 0x005b5044                       ; 005b4fd5
        ;   XREF to: 005b5044 (CONDITIONAL_JUMP)  ; LAB_005b5044
    CALL wincore_winrun.cpp_wasKeyPressed_FUN_005b2580 ; 005b4fd7
        ;   XREF to: 005b2580 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_wasKeyPressed_FUN_005b2580()
    TEST EAX,EAX                        ; 005b4fdc
    JNZ 0x005b5044                      ; 005b4fde
        ;   XREF to: 005b5044 (CONDITIONAL_JUMP)  ; LAB_005b5044
    CMP EBX,dword ptr [0x02c9d2a0]      ; 005b4fe0 | DAT_02c9d2a0
    JZ 0x005b5044                       ; 005b4fe6
        ;   XREF to: 005b5044 (CONDITIONAL_JUMP)  ; LAB_005b5044
    PUSH 0x14                           ; 005b4fe8
    CALL dword ptr CS:[0x5d0658]        ; 005b4fea | PTR_Sleep_005d0658
    JMP 0x005b4fca                      ; 005b4ff1
        ;   XREF to: 005b4fca (UNCONDITIONAL_JUMP)  ; LAB_005b4fca
    CMP dword ptr [ESP + 0x1fc],0x12c   ; 005b4ff3
        ;   Label: LAB_005b4ff3
    JG 0x005b4edd                       ; 005b4ffe
        ;   XREF to: 005b4edd (CONDITIONAL_JUMP)  ; LAB_005b4edd
    JMP 0x005b4efd                      ; 005b5004
        ;   XREF to: 005b4efd (UNCONDITIONAL_JUMP)  ; LAB_005b4efd
    PUSH 0x30                           ; 005b5009
        ;   Label: LAB_005b5009
    PUSH 0x0                            ; 005b500b
    PUSH 0x5fa02e                       ; 005b500d | = "Unable to open .AVI!"
    PUSH EBX                            ; 005b5012
    XOR EBP,EBP                         ; 005b5013
    CALL dword ptr CS:[0x5d04dc]        ; 005b5015 | PTR_MessageBoxA_005d04dc
    MOV dword ptr [0x02c9d2a0],EBP      ; 005b501c | DAT_02c9d2a0
    JMP 0x005b4f67                      ; 005b5022
        ;   XREF to: 005b4f67 (UNCONDITIONAL_JUMP)  ; LAB_005b4f67
    PUSH 0x0                            ; 005b5027
        ;   Label: LAB_005b5027
    PUSH 0x0                            ; 005b5029
    PUSH 0x0                            ; 005b502b
    PUSH 0x5fa075                       ; 005b502d | = "pause mov"
    JMP 0x005b4fa2                      ; 005b5032
        ;   XREF to: 005b4fa2 (UNCONDITIONAL_JUMP)  ; LAB_005b4fa2
    PUSH EDX                            ; 005b5037
        ;   Label: LAB_005b5037
    PUSH ESI                            ; 005b5038
    PUSH ESI                            ; 005b5039
    PUSH 0x5fa05e                       ; 005b503a | = "play mov window notify"
    JMP 0x005b4fa2                      ; 005b503f
        ;   XREF to: 005b4fa2 (UNCONDITIONAL_JUMP)  ; LAB_005b4fa2
    PUSH EDI                            ; 005b5044
        ;   Label: LAB_005b5044
    PUSH ESI                            ; 005b5045
    CALL dword ptr CS:[0x5d0650]        ; 005b5046 | PTR_SetThreadPriority_005d0650
    MOV EDX,dword ptr [0x02c9be68]      ; 005b504d | DAT_02c9be68
    PUSH EDX                            ; 005b5053
    CALL wincore_winvideo.cpp_closeMovie_FUN_005b4980 ; 005b5054
        ;   XREF to: 005b4980 (UNCONDITIONAL_CALL)  ; void wincore_winvideo.cpp_closeMovie_FUN_005b4980(HWND window_handle)
    ADD ESP,0x4                         ; 005b5059
    CALL engine_special.cpp_clearScreen_FUN_0057dc40 ; 005b505c
        ;   XREF to: 0057dc40 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_0057dc40()
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005acff0 ; 005b5061
        ;   XREF to: 005acff0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005acff0()
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 005b5066
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
    MOV EAX,0x1                         ; 005b506b
    POP EBX                             ; 005b5070
    POP ESI                             ; 005b5071
    POP EDI                             ; 005b5072
    ADD ESP,0x1f4                       ; 005b5073
    POP EBP                             ; 005b5079
    RET                                 ; 005b507a

