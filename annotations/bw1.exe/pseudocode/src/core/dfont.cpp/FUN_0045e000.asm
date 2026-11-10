; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dfont_cpp_FUN_0045e000(void)
;
;
; XREF[1]:
;   core_main.c_FUN_005032a0 at 005033d5
;
; Referenced Globals:
;   TerminatedCString s_core_dfont_cpp_005d8651
;   TerminatedCString s_Medium_font_object_not_a_005d8663
;   TerminatedCString s_nocfont_raw_005d8685
;   TerminatedCString s_core_dfont_cpp_005d8691
;   TerminatedCString s_Tiny_font_object_not_all_005d86a3
;   TerminatedCString s_nocsmall_raw_005d86c3
;   TerminatedCString s_core_dfont_cpp_005d86d0
;   TerminatedCString s_Theme_font_object_not_al_005d86e2
;   TerminatedCString s_menufont_raw_005d8703
;   TerminatedCString s_core_dfont_cpp_005d8710
;   TerminatedCString s_Debug_font_object_not_al_005d8722
;   TerminatedCString s_fnte_pfd_RAW_005d8743
;   TerminatedCString s_core_dfont_cpp_005d8750
;   TerminatedCString s_Console_font_object_not_005d8762
;   TerminatedCString s_fnte_f_RAW_005d8785
;   ... and 30 more
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_unknown.c_debugAllocTracked1_FUN_005c0f32
;   engine_font.cpp_CBitFont_ctor_FUN_004c0b40
;   engine_font.cpp_CBitFont_openFontFile_FUN_004c0ca0
;   engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_004c4570
;   engine_font.cpp_CBitFont_setFontReady_FUN_004c45d0
;   engine_font.cpp_CBitFont_setInitializedFlag_FUN_004c18b0
;   engine_winfont.cpp_CWinFont_ctor_FUN_005b1ad0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045e000
        ;   Label: core_dfont.cpp_FUN_0045e000
    PUSH ESI                            ; 0045e001
    PUSH EDI                            ; 0045e002
    PUSH EBP                            ; 0045e003
    PUSH 0x4220                         ; 0045e004
    CALL crt_unknown.c_debugAllocTracked1_FUN_005c0f32 ; 0045e009
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005c0f32()
    ADD ESP,0x4                         ; 0045e00e
    TEST EAX,EAX                        ; 0045e011
    JNZ 0x0045e4e6                      ; 0045e013
        ;   XREF to: 0045e4e6 (CONDITIONAL_JUMP)  ; LAB_0045e4e6
    MOV [0x0152d23c],EAX                ; 0045e019 | DAT_0152d23c
        ;   Label: LAB_0045e019
    TEST EAX,EAX                        ; 0045e01e
    JZ 0x0045e4f4                       ; 0045e020
        ;   XREF to: 0045e4f4 (CONDITIONAL_JUMP)  ; LAB_0045e4f4
    PUSH 0x0                            ; 0045e026
        ;   Label: LAB_0045e026
    PUSH 0x1ae                          ; 0045e028
    PUSH 0x136                          ; 0045e02d
    PUSH 0x5d8685                       ; 0045e032 | = "nocfont.raw"
    MOV EBX,dword ptr [0x0152d23c]      ; 0045e037 | DAT_0152d23c
    PUSH EBX                            ; 0045e03d
    CALL engine_font.cpp_CBitFont_openFontFile_FUN_004c0ca0 ; 0045e03e
        ;   XREF to: 004c0ca0 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_openFontFile_FUN_004c0ca0(CBitFont * this_ptr, char * filename, int width, int height, ...)
    ADD ESP,0x14                        ; 0045e043
    MOV ESI,dword ptr [0x0152d23c]      ; 0045e046 | DAT_0152d23c
    PUSH ESI                            ; 0045e04c
    CALL engine_font.cpp_CBitFont_setInitializedFlag_FUN_004c18b0 ; 0045e04d
        ;   XREF to: 004c18b0 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setInitializedFlag_FUN_004c18b0(CBitFont * this_ptr)
    ADD ESP,0x4                         ; 0045e052
    PUSH 0x7e                           ; 0045e055
    PUSH 0x20                           ; 0045e057
    PUSH 0x3                            ; 0045e059
    MOV EAX,[0x0152d23c]                ; 0045e05b | DAT_0152d23c
    PUSH EAX                            ; 0045e060
    MOV dword ptr [EAX + 0x3668],0x8    ; 0045e061
    CALL engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_004c4570 ; 0045e06b
        ;   XREF to: 004c4570 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_004c4570(CBitFont * this_ptr, int offset_value, int start_char, int end_char)
    ADD ESP,0x10                        ; 0045e070
    PUSH 0xdf                           ; 0045e073
    PUSH 0xc0                           ; 0045e078
    PUSH 0x1                            ; 0045e07d
    MOV EDI,dword ptr [0x0152d23c]      ; 0045e07f | DAT_0152d23c
    PUSH EDI                            ; 0045e085
    CALL engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_004c4570 ; 0045e086
        ;   XREF to: 004c4570 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_004c4570(CBitFont * this_ptr, int offset_value, int start_char, int end_char)
    ADD ESP,0x10                        ; 0045e08b
    MOV EAX,[0x0152d23c]                ; 0045e08e | DAT_0152d23c
    PUSH 0x1                            ; 0045e093
    MOV dword ptr [EAX + 0x41fc],0x2    ; 0045e095
    PUSH EAX                            ; 0045e09f
    MOV dword ptr [EAX + 0x4200],0x1    ; 0045e0a0
    CALL engine_font.cpp_CBitFont_setFontReady_FUN_004c45d0 ; 0045e0aa
        ;   XREF to: 004c45d0 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setFontReady_FUN_004c45d0(CBitFont * this_ptr, int value)
    ADD ESP,0x8                         ; 0045e0af
    PUSH 0x4220                         ; 0045e0b2
    CALL crt_unknown.c_debugAllocTracked1_FUN_005c0f32 ; 0045e0b7
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005c0f32()
    ADD ESP,0x4                         ; 0045e0bc
    TEST EAX,EAX                        ; 0045e0bf
    JZ 0x0045e0cc                       ; 0045e0c1
        ;   XREF to: 0045e0cc (CONDITIONAL_JUMP)  ; LAB_0045e0cc
    PUSH EAX                            ; 0045e0c3
    CALL engine_font.cpp_CBitFont_ctor_FUN_004c0b40 ; 0045e0c4
        ;   XREF to: 004c0b40 (UNCONDITIONAL_CALL)  ; CBitFont * engine_font.cpp_CBitFont_ctor_FUN_004c0b40(CBitFont * this_ptr)
    ADD ESP,0x4                         ; 0045e0c9
    MOV [0x0152d240],EAX                ; 0045e0cc | DAT_0152d240
        ;   Label: LAB_0045e0cc
    TEST EAX,EAX                        ; 0045e0d1
    JZ 0x0045e51c                       ; 0045e0d3
        ;   XREF to: 0045e51c (CONDITIONAL_JUMP)  ; LAB_0045e51c
    PUSH 0x0                            ; 0045e0d9
        ;   Label: LAB_0045e0d9
    PUSH 0x158                          ; 0045e0db
    PUSH 0xf8                           ; 0045e0e0
    PUSH 0x5d86c3                       ; 0045e0e5 | = "nocsmall.raw"
    MOV EDX,dword ptr [0x0152d240]      ; 0045e0ea | DAT_0152d240
    PUSH EDX                            ; 0045e0f0
    CALL engine_font.cpp_CBitFont_openFontFile_FUN_004c0ca0 ; 0045e0f1
        ;   XREF to: 004c0ca0 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_openFontFile_FUN_004c0ca0(CBitFont * this_ptr, char * filename, int width, int height, ...)
    ADD ESP,0x14                        ; 0045e0f6
    MOV ECX,dword ptr [0x0152d240]      ; 0045e0f9 | DAT_0152d240
    PUSH ECX                            ; 0045e0ff
    CALL engine_font.cpp_CBitFont_setInitializedFlag_FUN_004c18b0 ; 0045e100
        ;   XREF to: 004c18b0 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setInitializedFlag_FUN_004c18b0(CBitFont * this_ptr)
    ADD ESP,0x4                         ; 0045e105
    PUSH 0x7e                           ; 0045e108
    PUSH 0x20                           ; 0045e10a
    PUSH 0x2                            ; 0045e10c
    MOV EAX,[0x0152d240]                ; 0045e10e | DAT_0152d240
    PUSH EAX                            ; 0045e113
    MOV dword ptr [EAX + 0x3668],0x5    ; 0045e114
    CALL engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_004c4570 ; 0045e11e
        ;   XREF to: 004c4570 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_004c4570(CBitFont * this_ptr, int offset_value, int start_char, int end_char)
    ADD ESP,0x10                        ; 0045e123
    MOV EAX,[0x0152d240]                ; 0045e126 | DAT_0152d240
    PUSH 0x1                            ; 0045e12b
    MOV dword ptr [EAX + 0x41fc],0x2    ; 0045e12d
    PUSH EAX                            ; 0045e137
    MOV dword ptr [EAX + 0x4200],0x1    ; 0045e138
    CALL engine_font.cpp_CBitFont_setFontReady_FUN_004c45d0 ; 0045e142
        ;   XREF to: 004c45d0 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setFontReady_FUN_004c45d0(CBitFont * this_ptr, int value)
    ADD ESP,0x8                         ; 0045e147
    PUSH 0x4220                         ; 0045e14a
    CALL crt_unknown.c_debugAllocTracked1_FUN_005c0f32 ; 0045e14f
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005c0f32()
    ADD ESP,0x4                         ; 0045e154
    TEST EAX,EAX                        ; 0045e157
    JZ 0x0045e164                       ; 0045e159
        ;   XREF to: 0045e164 (CONDITIONAL_JUMP)  ; LAB_0045e164
    PUSH EAX                            ; 0045e15b
    CALL engine_font.cpp_CBitFont_ctor_FUN_004c0b40 ; 0045e15c
        ;   XREF to: 004c0b40 (UNCONDITIONAL_CALL)  ; CBitFont * engine_font.cpp_CBitFont_ctor_FUN_004c0b40(CBitFont * this_ptr)
    ADD ESP,0x4                         ; 0045e161
    MOV [0x0152d244],EAX                ; 0045e164 | DAT_0152d244
        ;   Label: LAB_0045e164
    TEST EAX,EAX                        ; 0045e169
    JZ 0x0045e543                       ; 0045e16b
        ;   XREF to: 0045e543 (CONDITIONAL_JUMP)  ; LAB_0045e543
    PUSH 0x0                            ; 0045e171
        ;   Label: LAB_0045e171
    PUSH 0x23f                          ; 0045e173
    PUSH 0xfa                           ; 0045e178
    PUSH 0x5d8703                       ; 0045e17d | = "menufont.raw"
    MOV EDI,dword ptr [0x0152d244]      ; 0045e182 | DAT_0152d244
    PUSH EDI                            ; 0045e188
    CALL engine_font.cpp_CBitFont_openFontFile_FUN_004c0ca0 ; 0045e189
        ;   XREF to: 004c0ca0 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_openFontFile_FUN_004c0ca0(CBitFont * this_ptr, char * filename, int width, int height, ...)
    ADD ESP,0x14                        ; 0045e18e
    MOV EBP,dword ptr [0x0152d244]      ; 0045e191 | DAT_0152d244
    PUSH EBP                            ; 0045e197
    CALL engine_font.cpp_CBitFont_setInitializedFlag_FUN_004c18b0 ; 0045e198
        ;   XREF to: 004c18b0 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setInitializedFlag_FUN_004c18b0(CBitFont * this_ptr)
    ADD ESP,0x4                         ; 0045e19d
    PUSH 0x7e                           ; 0045e1a0
    PUSH 0x20                           ; 0045e1a2
    PUSH 0x3                            ; 0045e1a4
    MOV EAX,[0x0152d244]                ; 0045e1a6 | DAT_0152d244
    PUSH EAX                            ; 0045e1ab
    MOV dword ptr [EAX + 0x3668],0x8    ; 0045e1ac
    CALL engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_004c4570 ; 0045e1b6
        ;   XREF to: 004c4570 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_004c4570(CBitFont * this_ptr, int offset_value, int start_char, int end_char)
    ADD ESP,0x10                        ; 0045e1bb
    PUSH 0xdf                           ; 0045e1be
    PUSH 0xc0                           ; 0045e1c3
    PUSH 0x0                            ; 0045e1c8
    MOV EAX,[0x0152d244]                ; 0045e1ca | DAT_0152d244
    PUSH EAX                            ; 0045e1cf
    CALL engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_004c4570 ; 0045e1d0
        ;   XREF to: 004c4570 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_004c4570(CBitFont * this_ptr, int offset_value, int start_char, int end_char)
    ADD ESP,0x10                        ; 0045e1d5
    PUSH 0xff                           ; 0045e1d8
    PUSH 0xe0                           ; 0045e1dd
    PUSH 0x1                            ; 0045e1e2
    MOV EDX,dword ptr [0x0152d244]      ; 0045e1e4 | DAT_0152d244
    PUSH EDX                            ; 0045e1ea
    CALL engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_004c4570 ; 0045e1eb
        ;   XREF to: 004c4570 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_004c4570(CBitFont * this_ptr, int offset_value, int start_char, int end_char)
    ADD ESP,0x10                        ; 0045e1f0
    MOV EAX,[0x0152d244]                ; 0045e1f3 | DAT_0152d244
    PUSH 0x1                            ; 0045e1f8
    MOV dword ptr [EAX + 0x41fc],0x2    ; 0045e1fa
    PUSH EAX                            ; 0045e204
    MOV dword ptr [EAX + 0x4200],0x1    ; 0045e205
    CALL engine_font.cpp_CBitFont_setFontReady_FUN_004c45d0 ; 0045e20f
        ;   XREF to: 004c45d0 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setFontReady_FUN_004c45d0(CBitFont * this_ptr, int value)
    ADD ESP,0x8                         ; 0045e214
    PUSH 0x4220                         ; 0045e217
    CALL crt_unknown.c_debugAllocTracked1_FUN_005c0f32 ; 0045e21c
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005c0f32()
    ADD ESP,0x4                         ; 0045e221
    TEST EAX,EAX                        ; 0045e224
    JZ 0x0045e231                       ; 0045e226
        ;   XREF to: 0045e231 (CONDITIONAL_JUMP)  ; LAB_0045e231
    PUSH EAX                            ; 0045e228
    CALL engine_font.cpp_CBitFont_ctor_FUN_004c0b40 ; 0045e229
        ;   XREF to: 004c0b40 (UNCONDITIONAL_CALL)  ; CBitFont * engine_font.cpp_CBitFont_ctor_FUN_004c0b40(CBitFont * this_ptr)
    ADD ESP,0x4                         ; 0045e22e
    MOV [0x0152d248],EAX                ; 0045e231 | DAT_0152d248
        ;   Label: LAB_0045e231
    TEST EAX,EAX                        ; 0045e236
    JZ 0x0045e56b                       ; 0045e238
        ;   XREF to: 0045e56b (CONDITIONAL_JUMP)  ; LAB_0045e56b
    PUSH 0x0                            ; 0045e23e
        ;   Label: LAB_0045e23e
    PUSH 0xec                           ; 0045e240
    PUSH 0x94                           ; 0045e245
    PUSH 0x5d8743                       ; 0045e24a | = "fnte_pfd.RAW"
    MOV ESI,dword ptr [0x0152d248]      ; 0045e24f | DAT_0152d248
    PUSH ESI                            ; 0045e255
    CALL engine_font.cpp_CBitFont_openFontFile_FUN_004c0ca0 ; 0045e256
        ;   XREF to: 004c0ca0 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_openFontFile_FUN_004c0ca0(CBitFont * this_ptr, char * filename, int width, int height, ...)
    ADD ESP,0x14                        ; 0045e25b
    MOV EDI,dword ptr [0x0152d248]      ; 0045e25e | DAT_0152d248
    PUSH EDI                            ; 0045e264
    CALL engine_font.cpp_CBitFont_setInitializedFlag_FUN_004c18b0 ; 0045e265
        ;   XREF to: 004c18b0 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setInitializedFlag_FUN_004c18b0(CBitFont * this_ptr)
    ADD ESP,0x4                         ; 0045e26a
    PUSH 0x7e                           ; 0045e26d
    PUSH 0x20                           ; 0045e26f
    PUSH 0x3                            ; 0045e271
    MOV EAX,[0x0152d248]                ; 0045e273 | DAT_0152d248
    PUSH EAX                            ; 0045e278
    MOV dword ptr [EAX + 0x3668],0x4    ; 0045e279
    CALL engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_004c4570 ; 0045e283
        ;   XREF to: 004c4570 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_004c4570(CBitFont * this_ptr, int offset_value, int start_char, int end_char)
    ADD ESP,0x10                        ; 0045e288
    MOV EAX,[0x0152d248]                ; 0045e28b | DAT_0152d248
    PUSH 0x1                            ; 0045e290
    MOV dword ptr [EAX + 0x41fc],0x1    ; 0045e292
    PUSH EAX                            ; 0045e29c
    MOV dword ptr [EAX + 0x4200],0x1    ; 0045e29d
    CALL engine_font.cpp_CBitFont_setFontReady_FUN_004c45d0 ; 0045e2a7
        ;   XREF to: 004c45d0 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setFontReady_FUN_004c45d0(CBitFont * this_ptr, int value)
    ADD ESP,0x8                         ; 0045e2ac
    MOV EAX,[0x0152d248]                ; 0045e2af | DAT_0152d248
    PUSH 0x4220                         ; 0045e2b4
    MOV [0x01c3eb50],EAX                ; 0045e2b9 | DAT_01c3eb50
    CALL crt_unknown.c_debugAllocTracked1_FUN_005c0f32 ; 0045e2be
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005c0f32()
    ADD ESP,0x4                         ; 0045e2c3
    TEST EAX,EAX                        ; 0045e2c6
    JZ 0x0045e2d3                       ; 0045e2c8
        ;   XREF to: 0045e2d3 (CONDITIONAL_JUMP)  ; LAB_0045e2d3
    PUSH EAX                            ; 0045e2ca
    CALL engine_font.cpp_CBitFont_ctor_FUN_004c0b40 ; 0045e2cb
        ;   XREF to: 004c0b40 (UNCONDITIONAL_CALL)  ; CBitFont * engine_font.cpp_CBitFont_ctor_FUN_004c0b40(CBitFont * this_ptr)
    ADD ESP,0x4                         ; 0045e2d0
    MOV [0x0152d24c],EAX                ; 0045e2d3 | DAT_0152d24c
        ;   Label: LAB_0045e2d3
    TEST EAX,EAX                        ; 0045e2d8
    JZ 0x0045e593                       ; 0045e2da
        ;   XREF to: 0045e593 (CONDITIONAL_JUMP)  ; LAB_0045e593
    PUSH 0xff                           ; 0045e2e0
        ;   Label: LAB_0045e2e0
    PUSH 0xec                           ; 0045e2e5
    PUSH 0x94                           ; 0045e2ea
    PUSH 0x5d8785                       ; 0045e2ef | = "fnte_f.RAW"
    MOV EDX,dword ptr [0x0152d24c]      ; 0045e2f4 | DAT_0152d24c
    PUSH EDX                            ; 0045e2fa
    CALL engine_font.cpp_CBitFont_openFontFile_FUN_004c0ca0 ; 0045e2fb
        ;   XREF to: 004c0ca0 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_openFontFile_FUN_004c0ca0(CBitFont * this_ptr, char * filename, int width, int height, ...)
    ADD ESP,0x14                        ; 0045e300
    PUSH 0x7e                           ; 0045e303
    PUSH 0x20                           ; 0045e305
    PUSH 0x3                            ; 0045e307
    MOV EAX,[0x0152d24c]                ; 0045e309 | DAT_0152d24c
    PUSH EAX                            ; 0045e30e
    MOV dword ptr [EAX + 0x3668],0x4    ; 0045e30f
    CALL engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_004c4570 ; 0045e319
        ;   XREF to: 004c4570 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_004c4570(CBitFont * this_ptr, int offset_value, int start_char, int end_char)
    ADD ESP,0x10                        ; 0045e31e
    MOV EAX,[0x0152d24c]                ; 0045e321 | DAT_0152d24c
    PUSH 0x1                            ; 0045e326
    MOV dword ptr [EAX + 0x41fc],0x1    ; 0045e328
    PUSH EAX                            ; 0045e332
    MOV dword ptr [EAX + 0x4200],0x1    ; 0045e333
    CALL engine_font.cpp_CBitFont_setFontReady_FUN_004c45d0 ; 0045e33d
        ;   XREF to: 004c45d0 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setFontReady_FUN_004c45d0(CBitFont * this_ptr, int value)
    ADD ESP,0x8                         ; 0045e342
    MOV EAX,[0x0152d248]                ; 0045e345 | DAT_0152d248
    PUSH 0x4220                         ; 0045e34a
    MOV [0x01c3eb50],EAX                ; 0045e34f | DAT_01c3eb50
    CALL crt_unknown.c_debugAllocTracked1_FUN_005c0f32 ; 0045e354
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005c0f32()
    ADD ESP,0x4                         ; 0045e359
    TEST EAX,EAX                        ; 0045e35c
    JZ 0x0045e369                       ; 0045e35e
        ;   XREF to: 0045e369 (CONDITIONAL_JUMP)  ; LAB_0045e369
    PUSH EAX                            ; 0045e360
    CALL engine_font.cpp_CBitFont_ctor_FUN_004c0b40 ; 0045e361
        ;   XREF to: 004c0b40 (UNCONDITIONAL_CALL)  ; CBitFont * engine_font.cpp_CBitFont_ctor_FUN_004c0b40(CBitFont * this_ptr)
    ADD ESP,0x4                         ; 0045e366
    MOV [0x0152d250],EAX                ; 0045e369 | DAT_0152d250
        ;   Label: LAB_0045e369
    TEST EAX,EAX                        ; 0045e36e
    JZ 0x0045e5ba                       ; 0045e370
        ;   XREF to: 0045e5ba (CONDITIONAL_JUMP)  ; LAB_0045e5ba
    PUSH 0x0                            ; 0045e376
        ;   Label: LAB_0045e376
    PUSH 0xec                           ; 0045e378
    PUSH 0x94                           ; 0045e37d
    PUSH 0x5d87c3                       ; 0045e382 | = "micro.raw"
    MOV ESI,dword ptr [0x0152d250]      ; 0045e387 | DAT_0152d250
    PUSH ESI                            ; 0045e38d
    CALL engine_font.cpp_CBitFont_openFontFile_FUN_004c0ca0 ; 0045e38e
        ;   XREF to: 004c0ca0 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_openFontFile_FUN_004c0ca0(CBitFont * this_ptr, char * filename, int width, int height, ...)
    ADD ESP,0x14                        ; 0045e393
    MOV EDI,dword ptr [0x0152d250]      ; 0045e396 | DAT_0152d250
    PUSH EDI                            ; 0045e39c
    CALL engine_font.cpp_CBitFont_setInitializedFlag_FUN_004c18b0 ; 0045e39d
        ;   XREF to: 004c18b0 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setInitializedFlag_FUN_004c18b0(CBitFont * this_ptr)
    ADD ESP,0x4                         ; 0045e3a2
    PUSH 0x7e                           ; 0045e3a5
    PUSH 0x20                           ; 0045e3a7
    PUSH 0x1                            ; 0045e3a9
    MOV EAX,[0x0152d250]                ; 0045e3ab | DAT_0152d250
    PUSH EAX                            ; 0045e3b0
    MOV dword ptr [EAX + 0x3668],0x4    ; 0045e3b1
    CALL engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_004c4570 ; 0045e3bb
        ;   XREF to: 004c4570 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_004c4570(CBitFont * this_ptr, int offset_value, int start_char, int end_char)
    ADD ESP,0x10                        ; 0045e3c0
    MOV EAX,[0x0152d250]                ; 0045e3c3 | DAT_0152d250
    PUSH 0x1                            ; 0045e3c8
    MOV dword ptr [EAX + 0x41fc],0x1    ; 0045e3ca
    PUSH EAX                            ; 0045e3d4
    MOV dword ptr [EAX + 0x4200],0x1    ; 0045e3d5
    CALL engine_font.cpp_CBitFont_setFontReady_FUN_004c45d0 ; 0045e3df
        ;   XREF to: 004c45d0 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setFontReady_FUN_004c45d0(CBitFont * this_ptr, int value)
    ADD ESP,0x8                         ; 0045e3e4
    PUSH 0x4220                         ; 0045e3e7
    CALL crt_unknown.c_debugAllocTracked1_FUN_005c0f32 ; 0045e3ec
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005c0f32()
    ADD ESP,0x4                         ; 0045e3f1
    TEST EAX,EAX                        ; 0045e3f4
    JZ 0x0045e401                       ; 0045e3f6
        ;   XREF to: 0045e401 (CONDITIONAL_JUMP)  ; LAB_0045e401
    PUSH EAX                            ; 0045e3f8
    CALL engine_font.cpp_CBitFont_ctor_FUN_004c0b40 ; 0045e3f9
        ;   XREF to: 004c0b40 (UNCONDITIONAL_CALL)  ; CBitFont * engine_font.cpp_CBitFont_ctor_FUN_004c0b40(CBitFont * this_ptr)
    ADD ESP,0x4                         ; 0045e3fe
    MOV [0x0152d254],EAX                ; 0045e401 | DAT_0152d254
        ;   Label: LAB_0045e401
    TEST EAX,EAX                        ; 0045e406
    JNZ 0x0045e42c                      ; 0045e408
        ;   XREF to: 0045e42c (CONDITIONAL_JUMP)  ; LAB_0045e42c
    MOV EBP,0x5d87cd                    ; 0045e40a | = "..\\core\\dfont.cpp"
    MOV EAX,0xa5                        ; 0045e40f
    PUSH 0x5d87df                       ; 0045e414 | = "Hand font object not allocated!"
    MOV dword ptr [0x01d1d400],EBP      ; 0045e419 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 0045e41f | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0045e424
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0045e429
    PUSH 0x0                            ; 0045e42c
        ;   Label: LAB_0045e42c
    PUSH 0x100                          ; 0045e42e
    PUSH 0x100                          ; 0045e433
    PUSH 0x5d87ff                       ; 0045e438 | = "dochand.raw"
    MOV EDX,dword ptr [0x0152d254]      ; 0045e43d | DAT_0152d254
    PUSH EDX                            ; 0045e443
    CALL engine_font.cpp_CBitFont_openFontFile_FUN_004c0ca0 ; 0045e444
        ;   XREF to: 004c0ca0 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_openFontFile_FUN_004c0ca0(CBitFont * this_ptr, char * filename, int width, int height, ...)
    ADD ESP,0x14                        ; 0045e449
    MOV ECX,dword ptr [0x0152d254]      ; 0045e44c | DAT_0152d254
    PUSH ECX                            ; 0045e452
    CALL engine_font.cpp_CBitFont_setInitializedFlag_FUN_004c18b0 ; 0045e453
        ;   XREF to: 004c18b0 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setInitializedFlag_FUN_004c18b0(CBitFont * this_ptr)
    ADD ESP,0x4                         ; 0045e458
    PUSH 0x7e                           ; 0045e45b
    PUSH 0x20                           ; 0045e45d
    PUSH 0x3                            ; 0045e45f
    MOV EAX,[0x0152d254]                ; 0045e461 | DAT_0152d254
    PUSH EAX                            ; 0045e466
    MOV dword ptr [EAX + 0x3668],0x8    ; 0045e467
    CALL engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_004c4570 ; 0045e471
        ;   XREF to: 004c4570 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_004c4570(CBitFont * this_ptr, int offset_value, int start_char, int end_char)
    ADD ESP,0x10                        ; 0045e476
    PUSH 0xdf                           ; 0045e479
    PUSH 0xc0                           ; 0045e47e
    PUSH 0x0                            ; 0045e483
    MOV EBX,dword ptr [0x0152d254]      ; 0045e485 | DAT_0152d254
    PUSH EBX                            ; 0045e48b
    CALL engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_004c4570 ; 0045e48c
        ;   XREF to: 004c4570 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_004c4570(CBitFont * this_ptr, int offset_value, int start_char, int end_char)
    ADD ESP,0x10                        ; 0045e491
    PUSH 0xff                           ; 0045e494
    PUSH 0xe0                           ; 0045e499
    PUSH 0x1                            ; 0045e49e
    MOV ESI,dword ptr [0x0152d254]      ; 0045e4a0 | DAT_0152d254
    PUSH ESI                            ; 0045e4a6
    CALL engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_004c4570 ; 0045e4a7
        ;   XREF to: 004c4570 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_004c4570(CBitFont * this_ptr, int offset_value, int start_char, int end_char)
    ADD ESP,0x10                        ; 0045e4ac
    MOV EAX,[0x0152d254]                ; 0045e4af | DAT_0152d254
    PUSH 0x1                            ; 0045e4b4
    MOV dword ptr [EAX + 0x41fc],0x2    ; 0045e4b6
    PUSH EAX                            ; 0045e4c0
    MOV dword ptr [EAX + 0x4200],0x1    ; 0045e4c1
    CALL engine_font.cpp_CBitFont_setFontReady_FUN_004c45d0 ; 0045e4cb
        ;   XREF to: 004c45d0 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setFontReady_FUN_004c45d0(CBitFont * this_ptr, int value)
    MOV EDI,dword ptr [0x01d7f1b8]      ; 0045e4d0 | DAT_01d7f1b8
    ADD ESP,0x8                         ; 0045e4d6
    TEST EDI,EDI                        ; 0045e4d9
    JNZ 0x0045e5e2                      ; 0045e4db
        ;   XREF to: 0045e5e2 (CONDITIONAL_JUMP)  ; LAB_0045e5e2
    POP EBP                             ; 0045e4e1
    POP EDI                             ; 0045e4e2
    POP ESI                             ; 0045e4e3
    POP EBX                             ; 0045e4e4
    RET                                 ; 0045e4e5
    PUSH EAX                            ; 0045e4e6
        ;   Label: LAB_0045e4e6
    CALL engine_font.cpp_CBitFont_ctor_FUN_004c0b40 ; 0045e4e7
        ;   XREF to: 004c0b40 (UNCONDITIONAL_CALL)  ; CBitFont * engine_font.cpp_CBitFont_ctor_FUN_004c0b40(CBitFont * this_ptr)
    ADD ESP,0x4                         ; 0045e4ec
    JMP 0x0045e019                      ; 0045e4ef
        ;   XREF to: 0045e019 (UNCONDITIONAL_JUMP)  ; LAB_0045e019
    MOV EDX,0x5d8651                    ; 0045e4f4 | = "..\\core\\dfont.cpp"
        ;   Label: LAB_0045e4f4
    MOV ECX,0x41                        ; 0045e4f9
    PUSH 0x5d8663                       ; 0045e4fe | = "Medium font object not allocated!"
    MOV dword ptr [0x01d1d400],EDX      ; 0045e503 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 0045e509 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0045e50f
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0045e514
    JMP 0x0045e026                      ; 0045e517
        ;   XREF to: 0045e026 (UNCONDITIONAL_JUMP)  ; LAB_0045e026
    MOV EBP,0x5d8691                    ; 0045e51c | = "..\\core\\dfont.cpp"
        ;   Label: LAB_0045e51c
    MOV EAX,0x51                        ; 0045e521
    PUSH 0x5d86a3                       ; 0045e526 | = "Tiny font object not allocated!"
    MOV dword ptr [0x01d1d400],EBP      ; 0045e52b | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 0045e531 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0045e536
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0045e53b
    JMP 0x0045e0d9                      ; 0045e53e
        ;   XREF to: 0045e0d9 (UNCONDITIONAL_JUMP)  ; LAB_0045e0d9
    MOV EBX,0x5d86d0                    ; 0045e543 | = "..\\core\\dfont.cpp"
        ;   Label: LAB_0045e543
    MOV ESI,0x60                        ; 0045e548
    PUSH 0x5d86e2                       ; 0045e54d | = "Theme font object not allocated!"
    MOV dword ptr [0x01d1d400],EBX      ; 0045e552 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 0045e558 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0045e55e
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0045e563
    JMP 0x0045e171                      ; 0045e566
        ;   XREF to: 0045e171 (UNCONDITIONAL_JUMP)  ; LAB_0045e171
    MOV ECX,0x5d8710                    ; 0045e56b | = "..\\core\\dfont.cpp"
        ;   Label: LAB_0045e56b
    MOV EBX,0x71                        ; 0045e570
    PUSH 0x5d8722                       ; 0045e575 | = "Debug font object not allocated!"
    MOV dword ptr [0x01d1d400],ECX      ; 0045e57a | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBX      ; 0045e580 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0045e586
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0045e58b
    JMP 0x0045e23e                      ; 0045e58e
        ;   XREF to: 0045e23e (UNCONDITIONAL_JUMP)  ; LAB_0045e23e
    MOV EBP,0x5d8750                    ; 0045e593 | = "..\\core\\dfont.cpp"
        ;   Label: LAB_0045e593
    MOV EAX,0x84                        ; 0045e598
    PUSH 0x5d8762                       ; 0045e59d | = "Console font object not allocated!"
    MOV dword ptr [0x01d1d400],EBP      ; 0045e5a2 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 0045e5a8 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0045e5ad
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0045e5b2
    JMP 0x0045e2e0                      ; 0045e5b5
        ;   XREF to: 0045e2e0 (UNCONDITIONAL_JUMP)  ; LAB_0045e2e0
    MOV ECX,0x5d8790                    ; 0045e5ba | = "..\\core\\dfont.cpp"
        ;   Label: LAB_0045e5ba
    MOV EBX,0x96                        ; 0045e5bf
    PUSH 0x5d87a2                       ; 0045e5c4 | = "Micro font object not allocated!"
    MOV dword ptr [0x01d1d400],ECX      ; 0045e5c9 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBX      ; 0045e5cf | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0045e5d5
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0045e5da
    JMP 0x0045e376                      ; 0045e5dd
        ;   XREF to: 0045e376 (UNCONDITIONAL_JUMP)  ; LAB_0045e376
    PUSH 0x6b80                         ; 0045e5e2
        ;   Label: LAB_0045e5e2
    CALL crt_unknown.c_debugAllocTracked1_FUN_005c0f32 ; 0045e5e7
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005c0f32()
    ADD ESP,0x4                         ; 0045e5ec
    TEST EAX,EAX                        ; 0045e5ef
    JZ 0x0045e607                       ; 0045e5f1
        ;   XREF to: 0045e607 (CONDITIONAL_JUMP)  ; LAB_0045e607
    PUSH 0x2                            ; 0045e5f3
    PUSH 0x2                            ; 0045e5f5
    PUSH 0xe                            ; 0045e5f7
    PUSH 0x6225f0                       ; 0045e5f9 | DAT_006225f0
    PUSH EAX                            ; 0045e5fe
    CALL engine_winfont.cpp_CWinFont_ctor_FUN_005b1ad0 ; 0045e5ff
        ;   XREF to: 005b1ad0 (UNCONDITIONAL_CALL)  ; CWinFont * engine_winfont.cpp_CWinFont_ctor_FUN_005b1ad0(CWinFont * this_ptr, char * font_name, int font_height, int y_offset1, ...)
    ADD ESP,0x14                        ; 0045e604
    MOV [0x0152d258],EAX                ; 0045e607 | DAT_0152d258
        ;   Label: LAB_0045e607
    TEST EAX,EAX                        ; 0045e60c
    JNZ 0x0045e632                      ; 0045e60e
        ;   XREF to: 0045e632 (CONDITIONAL_JUMP)  ; LAB_0045e632
    MOV EBP,0x5d880b                    ; 0045e610 | = "..\\core\\dfont.cpp"
    MOV EAX,0xb7                        ; 0045e615
    PUSH 0x5d881d                       ; 0045e61a | = "initFonts - Can't allocate gMediumOSFont"
    MOV dword ptr [0x01d1d400],EBP      ; 0045e61f | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 0045e625 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0045e62a
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0045e62f
    MOV EAX,[0x0152d23c]                ; 0045e632 | DAT_0152d23c
        ;   Label: LAB_0045e632
    MOV EDX,dword ptr [0x0152d258]      ; 0045e637 | DAT_0152d258
    MOV dword ptr [EAX + 0x4210],0x1    ; 0045e63d
    PUSH 0x6b80                         ; 0045e647
    MOV dword ptr [EAX + 0x4214],EDX    ; 0045e64c
    CALL crt_unknown.c_debugAllocTracked1_FUN_005c0f32 ; 0045e652
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005c0f32()
    ADD ESP,0x4                         ; 0045e657
    TEST EAX,EAX                        ; 0045e65a
    JZ 0x0045e672                       ; 0045e65c
        ;   XREF to: 0045e672 (CONDITIONAL_JUMP)  ; LAB_0045e672
    PUSH 0x0                            ; 0045e65e
    PUSH 0x0                            ; 0045e660
    PUSH 0x12                           ; 0045e662
    PUSH 0x6225f0                       ; 0045e664 | DAT_006225f0
    PUSH EAX                            ; 0045e669
    CALL engine_winfont.cpp_CWinFont_ctor_FUN_005b1ad0 ; 0045e66a
        ;   XREF to: 005b1ad0 (UNCONDITIONAL_CALL)  ; CWinFont * engine_winfont.cpp_CWinFont_ctor_FUN_005b1ad0(CWinFont * this_ptr, char * font_name, int font_height, int y_offset1, ...)
    ADD ESP,0x14                        ; 0045e66f
    MOV [0x0152d260],EAX                ; 0045e672 | DAT_0152d260
        ;   Label: LAB_0045e672
    TEST EAX,EAX                        ; 0045e677
    JNZ 0x0045e69e                      ; 0045e679
        ;   XREF to: 0045e69e (CONDITIONAL_JUMP)  ; LAB_0045e69e
    MOV EDX,0x5d8846                    ; 0045e67b | = "..\\core\\dfont.cpp"
    MOV ECX,0xbd                        ; 0045e680
    PUSH 0x5d8858                       ; 0045e685 | = "initFonts - Can't allocate gThemeOSFont"
    MOV dword ptr [0x01d1d400],EDX      ; 0045e68a | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 0045e690 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0045e696
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0045e69b
    MOV EAX,[0x0152d244]                ; 0045e69e | DAT_0152d244
        ;   Label: LAB_0045e69e
    MOV EDX,dword ptr [0x0152d260]      ; 0045e6a3 | DAT_0152d260
    MOV dword ptr [EAX + 0x4210],0x1    ; 0045e6a9
    PUSH 0x6b80                         ; 0045e6b3
    MOV dword ptr [EAX + 0x4214],EDX    ; 0045e6b8
    CALL crt_unknown.c_debugAllocTracked1_FUN_005c0f32 ; 0045e6be
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005c0f32()
    ADD ESP,0x4                         ; 0045e6c3
    TEST EAX,EAX                        ; 0045e6c6
    JZ 0x0045e6de                       ; 0045e6c8
        ;   XREF to: 0045e6de (CONDITIONAL_JUMP)  ; LAB_0045e6de
    PUSH 0x0                            ; 0045e6ca
    PUSH 0x0                            ; 0045e6cc
    PUSH 0xc                            ; 0045e6ce
    PUSH 0x6225f0                       ; 0045e6d0 | DAT_006225f0
    PUSH EAX                            ; 0045e6d5
    CALL engine_winfont.cpp_CWinFont_ctor_FUN_005b1ad0 ; 0045e6d6
        ;   XREF to: 005b1ad0 (UNCONDITIONAL_CALL)  ; CWinFont * engine_winfont.cpp_CWinFont_ctor_FUN_005b1ad0(CWinFont * this_ptr, char * font_name, int font_height, int y_offset1, ...)
    ADD ESP,0x14                        ; 0045e6db
    MOV [0x0152d25c],EAX                ; 0045e6de | DAT_0152d25c
        ;   Label: LAB_0045e6de
    TEST EAX,EAX                        ; 0045e6e3
    JNZ 0x0045e70a                      ; 0045e6e5
        ;   XREF to: 0045e70a (CONDITIONAL_JUMP)  ; LAB_0045e70a
    MOV EBX,0x5d8880                    ; 0045e6e7 | = "..\\core\\dfont.cpp"
    MOV ESI,0xc3                        ; 0045e6ec
    PUSH 0x5d8892                       ; 0045e6f1 | = "initFonts - Can't allocate gTinyOSFont"
    MOV dword ptr [0x01d1d400],EBX      ; 0045e6f6 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 0045e6fc | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0045e702
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0045e707
    MOV EAX,[0x0152d240]                ; 0045e70a | DAT_0152d240
        ;   Label: LAB_0045e70a
    MOV EDX,dword ptr [0x0152d25c]      ; 0045e70f | DAT_0152d25c
    MOV dword ptr [EAX + 0x4210],0x1    ; 0045e715
    PUSH 0x6b80                         ; 0045e71f
    MOV dword ptr [EAX + 0x4214],EDX    ; 0045e724
    CALL crt_unknown.c_debugAllocTracked1_FUN_005c0f32 ; 0045e72a
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005c0f32()
    ADD ESP,0x4                         ; 0045e72f
    TEST EAX,EAX                        ; 0045e732
    JZ 0x0045e74a                       ; 0045e734
        ;   XREF to: 0045e74a (CONDITIONAL_JUMP)  ; LAB_0045e74a
    PUSH 0x0                            ; 0045e736
    PUSH 0x0                            ; 0045e738
    PUSH 0xa                            ; 0045e73a
    PUSH 0x6225f0                       ; 0045e73c | DAT_006225f0
    PUSH EAX                            ; 0045e741
    CALL engine_winfont.cpp_CWinFont_ctor_FUN_005b1ad0 ; 0045e742
        ;   XREF to: 005b1ad0 (UNCONDITIONAL_CALL)  ; CWinFont * engine_winfont.cpp_CWinFont_ctor_FUN_005b1ad0(CWinFont * this_ptr, char * font_name, int font_height, int y_offset1, ...)
    ADD ESP,0x14                        ; 0045e747
    MOV [0x0152d264],EAX                ; 0045e74a | DAT_0152d264
        ;   Label: LAB_0045e74a
    TEST EAX,EAX                        ; 0045e74f
    JNZ 0x0045e776                      ; 0045e751
        ;   XREF to: 0045e776 (CONDITIONAL_JUMP)  ; LAB_0045e776
    MOV EDI,0x5d88b9                    ; 0045e753 | = "..\\core\\dfont.cpp"
    MOV EBP,0xc9                        ; 0045e758
    PUSH 0x5d88cb                       ; 0045e75d | = "initFonts - Can't allocate gDebugOSFont"
    MOV dword ptr [0x01d1d400],EDI      ; 0045e762 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBP      ; 0045e768 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0045e76e
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0045e773
    MOV EAX,[0x0152d248]                ; 0045e776 | DAT_0152d248
        ;   Label: LAB_0045e776
    MOV EDX,dword ptr [0x0152d264]      ; 0045e77b | DAT_0152d264
    MOV dword ptr [EAX + 0x4210],0x1    ; 0045e781
    MOV dword ptr [EAX + 0x4214],EDX    ; 0045e78b
    POP EBP                             ; 0045e791
    POP EDI                             ; 0045e792
    POP ESI                             ; 0045e793
    POP EBX                             ; 0045e794
    RET                                 ; 0045e795

