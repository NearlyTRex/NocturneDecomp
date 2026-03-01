; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dfont_cpp_initFonts_FUN_004709a0(void)
;
;
; XREF[1]:
;   core_main.c_initializeGameSystems_FUN_00507a60 at 00507c1d
;
; Referenced Globals:
;   TerminatedCString s_core_dfont_cpp_0061e866
;   TerminatedCString s_core_dfont_cpp_0061e878
;   TerminatedCString s_Medium_font_object_not_a_0061e88a
;   TerminatedCString s_nocfont_raw_0061e8ac
;   TerminatedCString s_core_dfont_cpp_0061e8b8
;   TerminatedCString s_core_dfont_cpp_0061e8ca
;   TerminatedCString s_Tiny_font_object_not_all_0061e8dc
;   TerminatedCString s_nocsmall_raw_0061e8fc
;   TerminatedCString s_core_dfont_cpp_0061e909
;   TerminatedCString s_core_dfont_cpp_0061e91b
;   TerminatedCString s_Theme_font_object_not_al_0061e92d
;   TerminatedCString s_menufont_raw_0061e94e
;   TerminatedCString s_core_dfont_cpp_0061e95b
;   TerminatedCString s_core_dfont_cpp_0061e96d
;   string s_Debug_font_object_not_allocated!_0061e97f
;   ... and 36 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   engine_font.cpp_CBitFont_ctor_FUN_004cce90
;   engine_font.cpp_CBitFont_openFontFile_FUN_004ccfc0
;   engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_004d0230
;   engine_font.cpp_CBitFont_setFontReady_FUN_004d0290
;   engine_font.cpp_CBitFont_setInitializedFlag_FUN_004cd540
;   engine_winfont.cpp_CWinFont_ctor_FUN_005f22e0
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004709a0
        ;   Label: core_dfont.cpp_initFonts_FUN_004709a0
    PUSH ESI                            ; 004709a1
    PUSH EDI                            ; 004709a2
    PUSH EBP                            ; 004709a3
    PUSH 0x3f                           ; 004709a4
    PUSH 0x61e866                       ; 004709a6 | = "..\\core\\dfont.cpp"
    PUSH 0x3198                         ; 004709ab
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 004709b0
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 004709b5
    TEST EAX,EAX                        ; 004709b8
    JNZ 0x00470de9                      ; 004709ba
        ;   XREF to: 00470de9 (CONDITIONAL_JUMP)  ; LAB_00470de9
    MOV [0x020a5718],EAX                ; 004709c0 | g_MediumFont
        ;   Label: LAB_004709c0
    TEST EAX,EAX                        ; 004709c5
    JZ 0x00470df7                       ; 004709c7
        ;   XREF to: 00470df7 (CONDITIONAL_JUMP)  ; LAB_00470df7
    PUSH 0x0                            ; 004709cd
        ;   Label: LAB_004709cd
    PUSH 0x1ae                          ; 004709cf
    PUSH 0x136                          ; 004709d4
    PUSH 0x61e8ac                       ; 004709d9 | = "nocfont.raw"
    MOV EBX,dword ptr [0x020a5718]      ; 004709de | g_MediumFont
    PUSH EBX                            ; 004709e4
    CALL engine_font.cpp_CBitFont_openFontFile_FUN_004ccfc0 ; 004709e5
        ;   XREF to: 004ccfc0 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_openFontFile_FUN_004ccfc0(CBitFont * this_ptr, char * filename, int width, int height, ...)
    ADD ESP,0x14                        ; 004709ea
    MOV ESI,dword ptr [0x020a5718]      ; 004709ed | g_MediumFont
    PUSH ESI                            ; 004709f3
    CALL engine_font.cpp_CBitFont_setInitializedFlag_FUN_004cd540 ; 004709f4
        ;   XREF to: 004cd540 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setInitializedFlag_FUN_004cd540(CBitFont * this_ptr)
    ADD ESP,0x4                         ; 004709f9
    PUSH 0x7e                           ; 004709fc
    PUSH 0x20                           ; 004709fe
    PUSH 0x3                            ; 00470a00
    MOV EAX,[0x020a5718]                ; 00470a02 | g_MediumFont
    PUSH EAX                            ; 00470a07
    MOV dword ptr [EAX + 0x25e8],0x8    ; 00470a08
    CALL engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_004d0230 ; 00470a12
        ;   XREF to: 004d0230 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_004d0230(CBitFont * this_ptr, int offset_value, int start_char, int end_char)
    ADD ESP,0x10                        ; 00470a17
    PUSH 0xdf                           ; 00470a1a
    PUSH 0xc0                           ; 00470a1f
    PUSH 0x1                            ; 00470a24
    MOV EDI,dword ptr [0x020a5718]      ; 00470a26 | g_MediumFont
    PUSH EDI                            ; 00470a2c
    CALL engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_004d0230 ; 00470a2d
        ;   XREF to: 004d0230 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_004d0230(CBitFont * this_ptr, int offset_value, int start_char, int end_char)
    ADD ESP,0x10                        ; 00470a32
    MOV EAX,[0x020a5718]                ; 00470a35 | g_MediumFont
    PUSH 0x1                            ; 00470a3a
    MOV dword ptr [EAX + 0x317c],0x2    ; 00470a3c
    PUSH EAX                            ; 00470a46
    MOV dword ptr [EAX + 0x3180],0x1    ; 00470a47
    CALL engine_font.cpp_CBitFont_setFontReady_FUN_004d0290 ; 00470a51
        ;   XREF to: 004d0290 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setFontReady_FUN_004d0290(CBitFont * this_ptr, int value)
    ADD ESP,0x8                         ; 00470a56
    PUSH 0x4f                           ; 00470a59
    PUSH 0x61e8b8                       ; 00470a5b | = "..\\core\\dfont.cpp"
    PUSH 0x3198                         ; 00470a60
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 00470a65
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 00470a6a
    TEST EAX,EAX                        ; 00470a6d
    JZ 0x00470a7a                       ; 00470a6f
        ;   XREF to: 00470a7a (CONDITIONAL_JUMP)  ; LAB_00470a7a
    PUSH EAX                            ; 00470a71
    CALL engine_font.cpp_CBitFont_ctor_FUN_004cce90 ; 00470a72
        ;   XREF to: 004cce90 (UNCONDITIONAL_CALL)  ; CBitFont * engine_font.cpp_CBitFont_ctor_FUN_004cce90(CBitFont * this_ptr)
    ADD ESP,0x4                         ; 00470a77
    MOV [0x020a571c],EAX                ; 00470a7a | g_TinyFont
        ;   Label: LAB_00470a7a
    TEST EAX,EAX                        ; 00470a7f
    JZ 0x00470e1f                       ; 00470a81
        ;   XREF to: 00470e1f (CONDITIONAL_JUMP)  ; LAB_00470e1f
    PUSH 0x0                            ; 00470a87
        ;   Label: LAB_00470a87
    PUSH 0x158                          ; 00470a89
    PUSH 0xf8                           ; 00470a8e
    PUSH 0x61e8fc                       ; 00470a93 | = "nocsmall.raw"
    MOV EDX,dword ptr [0x020a571c]      ; 00470a98 | g_TinyFont
    PUSH EDX                            ; 00470a9e
    CALL engine_font.cpp_CBitFont_openFontFile_FUN_004ccfc0 ; 00470a9f
        ;   XREF to: 004ccfc0 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_openFontFile_FUN_004ccfc0(CBitFont * this_ptr, char * filename, int width, int height, ...)
    ADD ESP,0x14                        ; 00470aa4
    MOV ECX,dword ptr [0x020a571c]      ; 00470aa7 | g_TinyFont
    PUSH ECX                            ; 00470aad
    CALL engine_font.cpp_CBitFont_setInitializedFlag_FUN_004cd540 ; 00470aae
        ;   XREF to: 004cd540 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setInitializedFlag_FUN_004cd540(CBitFont * this_ptr)
    ADD ESP,0x4                         ; 00470ab3
    PUSH 0x7e                           ; 00470ab6
    PUSH 0x20                           ; 00470ab8
    PUSH 0x2                            ; 00470aba
    MOV EAX,[0x020a571c]                ; 00470abc | g_TinyFont
    PUSH EAX                            ; 00470ac1
    MOV dword ptr [EAX + 0x25e8],0x5    ; 00470ac2
    CALL engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_004d0230 ; 00470acc
        ;   XREF to: 004d0230 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_004d0230(CBitFont * this_ptr, int offset_value, int start_char, int end_char)
    ADD ESP,0x10                        ; 00470ad1
    MOV EAX,[0x020a571c]                ; 00470ad4 | g_TinyFont
    PUSH 0x1                            ; 00470ad9
    MOV dword ptr [EAX + 0x317c],0x2    ; 00470adb
    PUSH EAX                            ; 00470ae5
    MOV dword ptr [EAX + 0x3180],0x1    ; 00470ae6
    CALL engine_font.cpp_CBitFont_setFontReady_FUN_004d0290 ; 00470af0
        ;   XREF to: 004d0290 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setFontReady_FUN_004d0290(CBitFont * this_ptr, int value)
    ADD ESP,0x8                         ; 00470af5
    PUSH 0x5e                           ; 00470af8
    PUSH 0x61e909                       ; 00470afa | = "..\\core\\dfont.cpp"
    PUSH 0x3198                         ; 00470aff
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 00470b04
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 00470b09
    TEST EAX,EAX                        ; 00470b0c
    JZ 0x00470b19                       ; 00470b0e
        ;   XREF to: 00470b19 (CONDITIONAL_JUMP)  ; LAB_00470b19
    PUSH EAX                            ; 00470b10
    CALL engine_font.cpp_CBitFont_ctor_FUN_004cce90 ; 00470b11
        ;   XREF to: 004cce90 (UNCONDITIONAL_CALL)  ; CBitFont * engine_font.cpp_CBitFont_ctor_FUN_004cce90(CBitFont * this_ptr)
    ADD ESP,0x4                         ; 00470b16
    MOV [0x020a5720],EAX                ; 00470b19 | g_ThemeFont
        ;   Label: LAB_00470b19
    TEST EAX,EAX                        ; 00470b1e
    JZ 0x00470e46                       ; 00470b20
        ;   XREF to: 00470e46 (CONDITIONAL_JUMP)  ; LAB_00470e46
    PUSH 0x0                            ; 00470b26
        ;   Label: LAB_00470b26
    PUSH 0x23f                          ; 00470b28
    PUSH 0xfa                           ; 00470b2d
    PUSH 0x61e94e                       ; 00470b32 | = "menufont.raw"
    MOV EDI,dword ptr [0x020a5720]      ; 00470b37 | g_ThemeFont
    PUSH EDI                            ; 00470b3d
    CALL engine_font.cpp_CBitFont_openFontFile_FUN_004ccfc0 ; 00470b3e
        ;   XREF to: 004ccfc0 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_openFontFile_FUN_004ccfc0(CBitFont * this_ptr, char * filename, int width, int height, ...)
    ADD ESP,0x14                        ; 00470b43
    MOV EBP,dword ptr [0x020a5720]      ; 00470b46 | g_ThemeFont
    PUSH EBP                            ; 00470b4c
    CALL engine_font.cpp_CBitFont_setInitializedFlag_FUN_004cd540 ; 00470b4d
        ;   XREF to: 004cd540 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setInitializedFlag_FUN_004cd540(CBitFont * this_ptr)
    ADD ESP,0x4                         ; 00470b52
    PUSH 0x7e                           ; 00470b55
    PUSH 0x20                           ; 00470b57
    PUSH 0x3                            ; 00470b59
    MOV EAX,[0x020a5720]                ; 00470b5b | g_ThemeFont
    PUSH EAX                            ; 00470b60
    MOV dword ptr [EAX + 0x25e8],0x8    ; 00470b61
    CALL engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_004d0230 ; 00470b6b
        ;   XREF to: 004d0230 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_004d0230(CBitFont * this_ptr, int offset_value, int start_char, int end_char)
    ADD ESP,0x10                        ; 00470b70
    PUSH 0xdf                           ; 00470b73
    PUSH 0xc0                           ; 00470b78
    PUSH 0x0                            ; 00470b7d
    MOV EAX,[0x020a5720]                ; 00470b7f | g_ThemeFont
    PUSH EAX                            ; 00470b84
    CALL engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_004d0230 ; 00470b85
        ;   XREF to: 004d0230 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_004d0230(CBitFont * this_ptr, int offset_value, int start_char, int end_char)
    ADD ESP,0x10                        ; 00470b8a
    PUSH 0xff                           ; 00470b8d
    PUSH 0xe0                           ; 00470b92
    PUSH 0x1                            ; 00470b97
    MOV EDX,dword ptr [0x020a5720]      ; 00470b99 | g_ThemeFont
    PUSH EDX                            ; 00470b9f
    CALL engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_004d0230 ; 00470ba0
        ;   XREF to: 004d0230 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_004d0230(CBitFont * this_ptr, int offset_value, int start_char, int end_char)
    ADD ESP,0x10                        ; 00470ba5
    MOV EAX,[0x020a5720]                ; 00470ba8 | g_ThemeFont
    PUSH 0x1                            ; 00470bad
    MOV dword ptr [EAX + 0x317c],0x2    ; 00470baf
    PUSH EAX                            ; 00470bb9
    MOV dword ptr [EAX + 0x3180],0x1    ; 00470bba
    CALL engine_font.cpp_CBitFont_setFontReady_FUN_004d0290 ; 00470bc4
        ;   XREF to: 004d0290 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setFontReady_FUN_004d0290(CBitFont * this_ptr, int value)
    ADD ESP,0x8                         ; 00470bc9
    PUSH 0x6f                           ; 00470bcc
    PUSH 0x61e95b                       ; 00470bce | = "..\\core\\dfont.cpp"
    PUSH 0x3198                         ; 00470bd3
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 00470bd8
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 00470bdd
    TEST EAX,EAX                        ; 00470be0
    JZ 0x00470bed                       ; 00470be2
        ;   XREF to: 00470bed (CONDITIONAL_JUMP)  ; LAB_00470bed
    PUSH EAX                            ; 00470be4
    CALL engine_font.cpp_CBitFont_ctor_FUN_004cce90 ; 00470be5
        ;   XREF to: 004cce90 (UNCONDITIONAL_CALL)  ; CBitFont * engine_font.cpp_CBitFont_ctor_FUN_004cce90(CBitFont * this_ptr)
    ADD ESP,0x4                         ; 00470bea
    MOV [0x020a5724],EAX                ; 00470bed | g_SmallEditorFont
        ;   Label: LAB_00470bed
    TEST EAX,EAX                        ; 00470bf2
    JZ 0x00470e6e                       ; 00470bf4
        ;   XREF to: 00470e6e (CONDITIONAL_JUMP)  ; LAB_00470e6e
    PUSH 0x0                            ; 00470bfa
        ;   Label: LAB_00470bfa
    PUSH 0xec                           ; 00470bfc
    PUSH 0x94                           ; 00470c01
    PUSH 0x61e9a0                       ; 00470c06 | = "fnte_pfd.RAW"
    MOV ESI,dword ptr [0x020a5724]      ; 00470c0b | g_SmallEditorFont
    PUSH ESI                            ; 00470c11
    CALL engine_font.cpp_CBitFont_openFontFile_FUN_004ccfc0 ; 00470c12
        ;   XREF to: 004ccfc0 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_openFontFile_FUN_004ccfc0(CBitFont * this_ptr, char * filename, int width, int height, ...)
    ADD ESP,0x14                        ; 00470c17
    MOV EDI,dword ptr [0x020a5724]      ; 00470c1a | g_SmallEditorFont
    PUSH EDI                            ; 00470c20
    CALL engine_font.cpp_CBitFont_setInitializedFlag_FUN_004cd540 ; 00470c21
        ;   XREF to: 004cd540 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setInitializedFlag_FUN_004cd540(CBitFont * this_ptr)
    ADD ESP,0x4                         ; 00470c26
    PUSH 0x7e                           ; 00470c29
    PUSH 0x20                           ; 00470c2b
    PUSH 0x3                            ; 00470c2d
    MOV EAX,[0x020a5724]                ; 00470c2f | g_SmallEditorFont
    PUSH EAX                            ; 00470c34
    MOV dword ptr [EAX + 0x25e8],0x4    ; 00470c35
    CALL engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_004d0230 ; 00470c3f
        ;   XREF to: 004d0230 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_004d0230(CBitFont * this_ptr, int offset_value, int start_char, int end_char)
    ADD ESP,0x10                        ; 00470c44
    MOV EAX,[0x020a5724]                ; 00470c47 | g_SmallEditorFont
    PUSH 0x1                            ; 00470c4c
    MOV dword ptr [EAX + 0x317c],0x1    ; 00470c4e
    PUSH EAX                            ; 00470c58
    MOV dword ptr [EAX + 0x3180],0x1    ; 00470c59
    CALL engine_font.cpp_CBitFont_setFontReady_FUN_004d0290 ; 00470c63
        ;   XREF to: 004d0290 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setFontReady_FUN_004d0290(CBitFont * this_ptr, int value)
    ADD ESP,0x8                         ; 00470c68
    PUSH 0x82                           ; 00470c6b
    PUSH 0x61e9ad                       ; 00470c70 | = "..\\core\\dfont.cpp"
    MOV EAX,[0x020a5724]                ; 00470c75 | g_SmallEditorFont
    PUSH 0x3198                         ; 00470c7a
    MOV [0x02cf1cd0],EAX                ; 00470c7f | g_EditorFont
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 00470c84
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 00470c89
    TEST EAX,EAX                        ; 00470c8c
    JZ 0x00470c99                       ; 00470c8e
        ;   XREF to: 00470c99 (CONDITIONAL_JUMP)  ; LAB_00470c99
    PUSH EAX                            ; 00470c90
    CALL engine_font.cpp_CBitFont_ctor_FUN_004cce90 ; 00470c91
        ;   XREF to: 004cce90 (UNCONDITIONAL_CALL)  ; CBitFont * engine_font.cpp_CBitFont_ctor_FUN_004cce90(CBitFont * this_ptr)
    ADD ESP,0x4                         ; 00470c96
    MOV [0x020a5728],EAX                ; 00470c99 | g_ConsoleFont
        ;   Label: LAB_00470c99
    TEST EAX,EAX                        ; 00470c9e
    JZ 0x00470e96                       ; 00470ca0
        ;   XREF to: 00470e96 (CONDITIONAL_JUMP)  ; LAB_00470e96
    PUSH 0xff                           ; 00470ca6
        ;   Label: LAB_00470ca6
    PUSH 0xec                           ; 00470cab
    PUSH 0x94                           ; 00470cb0
    PUSH 0x61e9f4                       ; 00470cb5 | = "fnte_f.RAW"
    MOV EDX,dword ptr [0x020a5728]      ; 00470cba | g_ConsoleFont
    PUSH EDX                            ; 00470cc0
    CALL engine_font.cpp_CBitFont_openFontFile_FUN_004ccfc0 ; 00470cc1
        ;   XREF to: 004ccfc0 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_openFontFile_FUN_004ccfc0(CBitFont * this_ptr, char * filename, int width, int height, ...)
    ADD ESP,0x14                        ; 00470cc6
    PUSH 0x7e                           ; 00470cc9
    PUSH 0x20                           ; 00470ccb
    PUSH 0x3                            ; 00470ccd
    MOV EAX,[0x020a5728]                ; 00470ccf | g_ConsoleFont
    PUSH EAX                            ; 00470cd4
    MOV dword ptr [EAX + 0x25e8],0x4    ; 00470cd5
    CALL engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_004d0230 ; 00470cdf
        ;   XREF to: 004d0230 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_004d0230(CBitFont * this_ptr, int offset_value, int start_char, int end_char)
    ADD ESP,0x10                        ; 00470ce4
    MOV EAX,[0x020a5728]                ; 00470ce7 | g_ConsoleFont
    PUSH 0x1                            ; 00470cec
    MOV dword ptr [EAX + 0x317c],0x1    ; 00470cee
    PUSH EAX                            ; 00470cf8
    MOV dword ptr [EAX + 0x3180],0x1    ; 00470cf9
    CALL engine_font.cpp_CBitFont_setFontReady_FUN_004d0290 ; 00470d03
        ;   XREF to: 004d0290 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setFontReady_FUN_004d0290(CBitFont * this_ptr, int value)
    ADD ESP,0x8                         ; 00470d08
    PUSH 0x94                           ; 00470d0b
    PUSH 0x61e9ff                       ; 00470d10 | = "..\\core\\dfont.cpp"
    MOV EAX,[0x020a5724]                ; 00470d15 | g_SmallEditorFont
    PUSH 0x3198                         ; 00470d1a
    MOV [0x02cf1cd0],EAX                ; 00470d1f | g_EditorFont
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 00470d24
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 00470d29
    TEST EAX,EAX                        ; 00470d2c
    JZ 0x00470d39                       ; 00470d2e
        ;   XREF to: 00470d39 (CONDITIONAL_JUMP)  ; LAB_00470d39
    PUSH EAX                            ; 00470d30
    CALL engine_font.cpp_CBitFont_ctor_FUN_004cce90 ; 00470d31
        ;   XREF to: 004cce90 (UNCONDITIONAL_CALL)  ; CBitFont * engine_font.cpp_CBitFont_ctor_FUN_004cce90(CBitFont * this_ptr)
    ADD ESP,0x4                         ; 00470d36
    MOV [0x020a572c],EAX                ; 00470d39 | g_MicroFont
        ;   Label: LAB_00470d39
    TEST EAX,EAX                        ; 00470d3e
    JNZ 0x00470d65                      ; 00470d40
        ;   XREF to: 00470d65 (CONDITIONAL_JUMP)  ; LAB_00470d65
    MOV ECX,0x61ea11                    ; 00470d42 | = "..\\core\\dfont.cpp"
    MOV EBX,0x96                        ; 00470d47
    PUSH 0x61ea23                       ; 00470d4c | = "Micro font object not allocated!"
    MOV dword ptr [0x02f0ca48],ECX      ; 00470d51 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 00470d57 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00470d5d
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00470d62
    PUSH 0x0                            ; 00470d65
        ;   Label: LAB_00470d65
    PUSH 0xec                           ; 00470d67
    PUSH 0x94                           ; 00470d6c
    PUSH 0x61ea44                       ; 00470d71 | = "micro.raw"
    MOV ESI,dword ptr [0x020a572c]      ; 00470d76 | g_MicroFont
    PUSH ESI                            ; 00470d7c
    CALL engine_font.cpp_CBitFont_openFontFile_FUN_004ccfc0 ; 00470d7d
        ;   XREF to: 004ccfc0 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_openFontFile_FUN_004ccfc0(CBitFont * this_ptr, char * filename, int width, int height, ...)
    ADD ESP,0x14                        ; 00470d82
    MOV EDI,dword ptr [0x020a572c]      ; 00470d85 | g_MicroFont
    PUSH EDI                            ; 00470d8b
    CALL engine_font.cpp_CBitFont_setInitializedFlag_FUN_004cd540 ; 00470d8c
        ;   XREF to: 004cd540 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setInitializedFlag_FUN_004cd540(CBitFont * this_ptr)
    ADD ESP,0x4                         ; 00470d91
    PUSH 0x7e                           ; 00470d94
    PUSH 0x20                           ; 00470d96
    PUSH 0x1                            ; 00470d98
    MOV EAX,[0x020a572c]                ; 00470d9a | g_MicroFont
    PUSH EAX                            ; 00470d9f
    MOV dword ptr [EAX + 0x25e8],0x4    ; 00470da0
    CALL engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_004d0230 ; 00470daa
        ;   XREF to: 004d0230 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_004d0230(CBitFont * this_ptr, int offset_value, int start_char, int end_char)
    ADD ESP,0x10                        ; 00470daf
    MOV EAX,[0x020a572c]                ; 00470db2 | g_MicroFont
    PUSH 0x1                            ; 00470db7
    MOV dword ptr [EAX + 0x317c],0x1    ; 00470db9
    PUSH EAX                            ; 00470dc3
    MOV dword ptr [EAX + 0x3180],0x1    ; 00470dc4
    CALL engine_font.cpp_CBitFont_setFontReady_FUN_004d0290 ; 00470dce
        ;   XREF to: 004d0290 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setFontReady_FUN_004d0290(CBitFont * this_ptr, int value)
    MOV EBP,dword ptr [0x02fa8cd0]      ; 00470dd3 | g_MessageCount
    ADD ESP,0x8                         ; 00470dd9
    TEST EBP,EBP                        ; 00470ddc
    JNZ 0x00470ebd                      ; 00470dde
        ;   XREF to: 00470ebd (CONDITIONAL_JUMP)  ; LAB_00470ebd
    POP EBP                             ; 00470de4
    POP EDI                             ; 00470de5
    POP ESI                             ; 00470de6
    POP EBX                             ; 00470de7
    RET                                 ; 00470de8
    PUSH EAX                            ; 00470de9
        ;   Label: LAB_00470de9
    CALL engine_font.cpp_CBitFont_ctor_FUN_004cce90 ; 00470dea
        ;   XREF to: 004cce90 (UNCONDITIONAL_CALL)  ; CBitFont * engine_font.cpp_CBitFont_ctor_FUN_004cce90(CBitFont * this_ptr)
    ADD ESP,0x4                         ; 00470def
    JMP 0x004709c0                      ; 00470df2
        ;   XREF to: 004709c0 (UNCONDITIONAL_JUMP)  ; LAB_004709c0
    MOV EDX,0x61e878                    ; 00470df7 | = "..\\core\\dfont.cpp"
        ;   Label: LAB_00470df7
    MOV ECX,0x41                        ; 00470dfc
    PUSH 0x61e88a                       ; 00470e01 | = "Medium font object not allocated!"
    MOV dword ptr [0x02f0ca48],EDX      ; 00470e06 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 00470e0c | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00470e12
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00470e17
    JMP 0x004709cd                      ; 00470e1a
        ;   XREF to: 004709cd (UNCONDITIONAL_JUMP)  ; LAB_004709cd
    MOV EBP,0x61e8ca                    ; 00470e1f | = "..\\core\\dfont.cpp"
        ;   Label: LAB_00470e1f
    MOV EAX,0x51                        ; 00470e24
    PUSH 0x61e8dc                       ; 00470e29 | = "Tiny font object not allocated!"
    MOV dword ptr [0x02f0ca48],EBP      ; 00470e2e | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 00470e34 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00470e39
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00470e3e
    JMP 0x00470a87                      ; 00470e41
        ;   XREF to: 00470a87 (UNCONDITIONAL_JUMP)  ; LAB_00470a87
    MOV EBX,0x61e91b                    ; 00470e46 | = "..\\core\\dfont.cpp"
        ;   Label: LAB_00470e46
    MOV ESI,0x60                        ; 00470e4b
    PUSH 0x61e92d                       ; 00470e50 | = "Theme font object not allocated!"
    MOV dword ptr [0x02f0ca48],EBX      ; 00470e55 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 00470e5b | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00470e61
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00470e66
    JMP 0x00470b26                      ; 00470e69
        ;   XREF to: 00470b26 (UNCONDITIONAL_JUMP)  ; LAB_00470b26
    MOV ECX,0x61e96d                    ; 00470e6e | = "..\\core\\dfont.cpp"
        ;   Label: LAB_00470e6e
    MOV EBX,0x71                        ; 00470e73
    PUSH 0x61e97f                       ; 00470e78 | = "Debug font object not allocated!"
    MOV dword ptr [0x02f0ca48],ECX      ; 00470e7d | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 00470e83 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00470e89
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00470e8e
    JMP 0x00470bfa                      ; 00470e91
        ;   XREF to: 00470bfa (UNCONDITIONAL_JUMP)  ; LAB_00470bfa
    MOV EBP,0x61e9bf                    ; 00470e96 | = "..\\core\\dfont.cpp"
        ;   Label: LAB_00470e96
    MOV EAX,0x84                        ; 00470e9b
    PUSH 0x61e9d1                       ; 00470ea0 | = "Console font object not allocated!"
    MOV dword ptr [0x02f0ca48],EBP      ; 00470ea5 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 00470eab | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00470eb0
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00470eb5
    JMP 0x00470ca6                      ; 00470eb8
        ;   XREF to: 00470ca6 (UNCONDITIONAL_JUMP)  ; LAB_00470ca6
    PUSH 0xa4                           ; 00470ebd
        ;   Label: LAB_00470ebd
    PUSH 0x61ea4e                       ; 00470ec2 | = "..\\core\\dfont.cpp"
    PUSH 0x13c                          ; 00470ec7
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 00470ecc
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 00470ed1
    TEST EAX,EAX                        ; 00470ed4
    JZ 0x00470eec                       ; 00470ed6
        ;   XREF to: 00470eec (CONDITIONAL_JUMP)  ; LAB_00470eec
    PUSH 0x2                            ; 00470ed8
    PUSH 0x2                            ; 00470eda
    PUSH 0xe                            ; 00470edc
    PUSH 0x680a70                       ; 00470ede | g_OSFontName
    PUSH EAX                            ; 00470ee3
    CALL engine_winfont.cpp_CWinFont_ctor_FUN_005f22e0 ; 00470ee4
        ;   XREF to: 005f22e0 (UNCONDITIONAL_CALL)  ; CWinFont * engine_winfont.cpp_CWinFont_ctor_FUN_005f22e0(CWinFont * this_ptr, char * font_name, int font_height, int font_width)
    ADD ESP,0x14                        ; 00470ee9
    MOV [0x020a5730],EAX                ; 00470eec | g_MediumWinFont
        ;   Label: LAB_00470eec
    TEST EAX,EAX                        ; 00470ef1
    JNZ 0x00470f17                      ; 00470ef3
        ;   XREF to: 00470f17 (CONDITIONAL_JUMP)  ; LAB_00470f17
    MOV EAX,0x61ea60                    ; 00470ef5 | = "..\\core\\dfont.cpp"
    MOV EDX,0xa6                        ; 00470efa
    PUSH 0x61ea72                       ; 00470eff | = "initFonts - Can't allocate gMediumOSFont"
    MOV [0x02f0ca48],EAX                ; 00470f04 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 00470f09 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00470f0f
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00470f14
    PUSH 0xaa                           ; 00470f17
        ;   Label: LAB_00470f17
    MOV EAX,[0x020a5718]                ; 00470f1c | g_MediumFont
    PUSH 0x61ea9b                       ; 00470f21 | = "..\\core\\dfont.cpp"
    MOV EDX,dword ptr [0x020a5730]      ; 00470f26 | g_MediumWinFont
    MOV dword ptr [EAX + 0x3190],0x1    ; 00470f2c
    PUSH 0x13c                          ; 00470f36
    MOV dword ptr [EAX + 0x3194],EDX    ; 00470f3b
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 00470f41
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 00470f46
    TEST EAX,EAX                        ; 00470f49
    JZ 0x00470f61                       ; 00470f4b
        ;   XREF to: 00470f61 (CONDITIONAL_JUMP)  ; LAB_00470f61
    PUSH 0x0                            ; 00470f4d
    PUSH 0x0                            ; 00470f4f
    PUSH 0x12                           ; 00470f51
    PUSH 0x680a70                       ; 00470f53 | g_OSFontName
    PUSH EAX                            ; 00470f58
    CALL engine_winfont.cpp_CWinFont_ctor_FUN_005f22e0 ; 00470f59
        ;   XREF to: 005f22e0 (UNCONDITIONAL_CALL)  ; CWinFont * engine_winfont.cpp_CWinFont_ctor_FUN_005f22e0(CWinFont * this_ptr, char * font_name, int font_height, int font_width)
    ADD ESP,0x14                        ; 00470f5e
    MOV [0x020a5738],EAX                ; 00470f61 | g_ThemeWinFont
        ;   Label: LAB_00470f61
    TEST EAX,EAX                        ; 00470f66
    JNZ 0x00470f8d                      ; 00470f68
        ;   XREF to: 00470f8d (CONDITIONAL_JUMP)  ; LAB_00470f8d
    MOV ECX,0x61eaad                    ; 00470f6a | = "..\\core\\dfont.cpp"
    MOV EBX,0xac                        ; 00470f6f
    PUSH 0x61eabf                       ; 00470f74 | = "initFonts - Can't allocate gThemeOSFont"
    MOV dword ptr [0x02f0ca48],ECX      ; 00470f79 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 00470f7f | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00470f85
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00470f8a
    PUSH 0xb0                           ; 00470f8d
        ;   Label: LAB_00470f8d
    MOV EAX,[0x020a5720]                ; 00470f92 | g_ThemeFont
    PUSH 0x61eae7                       ; 00470f97 | = "..\\core\\dfont.cpp"
    MOV EDX,dword ptr [0x020a5738]      ; 00470f9c | g_ThemeWinFont
    MOV dword ptr [EAX + 0x3190],0x1    ; 00470fa2
    PUSH 0x13c                          ; 00470fac
    MOV dword ptr [EAX + 0x3194],EDX    ; 00470fb1
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 00470fb7
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 00470fbc
    TEST EAX,EAX                        ; 00470fbf
    JZ 0x00470fd7                       ; 00470fc1
        ;   XREF to: 00470fd7 (CONDITIONAL_JUMP)  ; LAB_00470fd7
    PUSH 0x0                            ; 00470fc3
    PUSH 0x0                            ; 00470fc5
    PUSH 0xc                            ; 00470fc7
    PUSH 0x680a70                       ; 00470fc9 | g_OSFontName
    PUSH EAX                            ; 00470fce
    CALL engine_winfont.cpp_CWinFont_ctor_FUN_005f22e0 ; 00470fcf
        ;   XREF to: 005f22e0 (UNCONDITIONAL_CALL)  ; CWinFont * engine_winfont.cpp_CWinFont_ctor_FUN_005f22e0(CWinFont * this_ptr, char * font_name, int font_height, int font_width)
    ADD ESP,0x14                        ; 00470fd4
    MOV [0x020a5734],EAX                ; 00470fd7 | g_TinyWinFont
        ;   Label: LAB_00470fd7
    TEST EAX,EAX                        ; 00470fdc
    JNZ 0x00471003                      ; 00470fde
        ;   XREF to: 00471003 (CONDITIONAL_JUMP)  ; LAB_00471003
    MOV ESI,0x61eaf9                    ; 00470fe0 | = "..\\core\\dfont.cpp"
    MOV EDI,0xb2                        ; 00470fe5
    PUSH 0x61eb0b                       ; 00470fea | = "initFonts - Can't allocate gTinyOSFont"
    MOV dword ptr [0x02f0ca48],ESI      ; 00470fef | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 00470ff5 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00470ffb
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00471000
    PUSH 0xb6                           ; 00471003
        ;   Label: LAB_00471003
    MOV EAX,[0x020a571c]                ; 00471008 | g_TinyFont
    PUSH 0x61eb32                       ; 0047100d | = "..\\core\\dfont.cpp"
    MOV EDX,dword ptr [0x020a5734]      ; 00471012 | g_TinyWinFont
    MOV dword ptr [EAX + 0x3190],0x1    ; 00471018
    PUSH 0x13c                          ; 00471022
    MOV dword ptr [EAX + 0x3194],EDX    ; 00471027
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 0047102d
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 00471032
    TEST EAX,EAX                        ; 00471035
    JZ 0x0047104d                       ; 00471037
        ;   XREF to: 0047104d (CONDITIONAL_JUMP)  ; LAB_0047104d
    PUSH 0x0                            ; 00471039
    PUSH 0x0                            ; 0047103b
    PUSH 0xa                            ; 0047103d
    PUSH 0x680a70                       ; 0047103f | g_OSFontName
    PUSH EAX                            ; 00471044
    CALL engine_winfont.cpp_CWinFont_ctor_FUN_005f22e0 ; 00471045
        ;   XREF to: 005f22e0 (UNCONDITIONAL_CALL)  ; CWinFont * engine_winfont.cpp_CWinFont_ctor_FUN_005f22e0(CWinFont * this_ptr, char * font_name, int font_height, int font_width)
    ADD ESP,0x14                        ; 0047104a
    MOV [0x020a573c],EAX                ; 0047104d | g_DebugWinFont
        ;   Label: LAB_0047104d
    TEST EAX,EAX                        ; 00471052
    JNZ 0x00471078                      ; 00471054
        ;   XREF to: 00471078 (CONDITIONAL_JUMP)  ; LAB_00471078
    MOV EBP,0x61eb44                    ; 00471056 | = "..\\core\\dfont.cpp"
    MOV EAX,0xb8                        ; 0047105b
    PUSH 0x61eb56                       ; 00471060 | = "initFonts - Can't allocate gDebugOSFont"
    MOV dword ptr [0x02f0ca48],EBP      ; 00471065 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 0047106b | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00471070
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00471075
    MOV EAX,[0x020a5724]                ; 00471078 | g_SmallEditorFont
        ;   Label: LAB_00471078
    MOV EDX,dword ptr [0x020a573c]      ; 0047107d | g_DebugWinFont
    MOV dword ptr [EAX + 0x3190],0x1    ; 00471083
    MOV dword ptr [EAX + 0x3194],EDX    ; 0047108d
    POP EBP                             ; 00471093
    POP EDI                             ; 00471094
    POP ESI                             ; 00471095
    POP EBX                             ; 00471096
    RET                                 ; 00471097

