; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dfont_cpp_FUN_00459f50(void)
;
;
; XREF[1]:
;   core_main.c_initializeGameSystems_FUN_004e44e0 at 004e4615
;
; Referenced Globals:
;   TerminatedCString s_core_dfont_cpp_005bacaa
;   TerminatedCString s_Medium_font_object_not_a_005bacbc
;   TerminatedCString s_nocfont_raw_005bacde
;   TerminatedCString s_core_dfont_cpp_005bacea
;   TerminatedCString s_Tiny_font_object_not_all_005bacfc
;   TerminatedCString s_nocsmall_raw_005bad1c
;   TerminatedCString s_core_dfont_cpp_005bad29
;   TerminatedCString s_Theme_font_object_not_al_005bad3b
;   TerminatedCString s_menufont_raw_005bad5c
;   TerminatedCString s_core_dfont_cpp_005bad69
;   TerminatedCString s_Menu_font_object_not_all_005bad7b
;   TerminatedCString s_BW3_font_raw_005bad9b
;   TerminatedCString s_core_dfont_cpp_005bada8
;   TerminatedCString s_Small_menu_font_object_n_005badba
;   TerminatedCString s_BW3_font2_raw_005bade0
;   ... and 38 more
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_memory.c_operator_new_FUN_005a3cb2
;   engine_font.cpp_CBitFont_ctor_FUN_004af790
;   engine_font.cpp_CBitFont_openFontFile_FUN_004af8f0
;   engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_004b3150
;   engine_font.cpp_CBitFont_setFontReady_FUN_004b31b0
;   engine_font.cpp_CBitFont_setInitializedFlag_FUN_004b0500
;   engine_winfont.cpp_CWinFont_ctor_FUN_0057fd50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00459f50
        ;   Label: core_dfont.cpp_FUN_00459f50
    PUSH ESI                            ; 00459f51
    PUSH EDI                            ; 00459f52
    PUSH EBP                            ; 00459f53
    PUSH 0x4220                         ; 00459f54
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 00459f59
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 00459f5e
    TEST EAX,EAX                        ; 00459f61
    JNZ 0x0045a5d1                      ; 00459f63
        ;   XREF to: 0045a5d1 (CONDITIONAL_JUMP)  ; LAB_0045a5d1
    MOV [0x01549aa0],EAX                ; 00459f69 | DAT_01549aa0
        ;   Label: LAB_00459f69
    TEST EAX,EAX                        ; 00459f6e
    JZ 0x0045a5df                       ; 00459f70
        ;   XREF to: 0045a5df (CONDITIONAL_JUMP)  ; LAB_0045a5df
    PUSH 0x0                            ; 00459f76
        ;   Label: LAB_00459f76
    PUSH 0x1ae                          ; 00459f78
    PUSH 0x136                          ; 00459f7d
    PUSH 0x5bacde                       ; 00459f82 | = "nocfont.raw"
    MOV EBX,dword ptr [0x01549aa0]      ; 00459f87 | DAT_01549aa0
    PUSH EBX                            ; 00459f8d
    CALL engine_font.cpp_CBitFont_openFontFile_FUN_004af8f0 ; 00459f8e
        ;   XREF to: 004af8f0 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_openFontFile_FUN_004af8f0(CBitFont * this_ptr, char * filename, int width, int height, ...)
    ADD ESP,0x14                        ; 00459f93
    MOV ESI,dword ptr [0x01549aa0]      ; 00459f96 | DAT_01549aa0
    PUSH ESI                            ; 00459f9c
    CALL engine_font.cpp_CBitFont_setInitializedFlag_FUN_004b0500 ; 00459f9d
        ;   XREF to: 004b0500 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setInitializedFlag_FUN_004b0500(CBitFont * this_ptr)
    ADD ESP,0x4                         ; 00459fa2
    PUSH 0x7e                           ; 00459fa5
    PUSH 0x20                           ; 00459fa7
    PUSH 0x3                            ; 00459fa9
    MOV EAX,[0x01549aa0]                ; 00459fab | DAT_01549aa0
    PUSH EAX                            ; 00459fb0
    MOV dword ptr [EAX + 0x3668],0x8    ; 00459fb1
    CALL engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_004b3150 ; 00459fbb
        ;   XREF to: 004b3150 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_004b3150(CBitFont * this_ptr, int offset_value, int start_char, int end_char)
    ADD ESP,0x10                        ; 00459fc0
    PUSH 0xdf                           ; 00459fc3
    PUSH 0xc0                           ; 00459fc8
    PUSH 0x1                            ; 00459fcd
    MOV EDI,dword ptr [0x01549aa0]      ; 00459fcf | DAT_01549aa0
    PUSH EDI                            ; 00459fd5
    CALL engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_004b3150 ; 00459fd6
        ;   XREF to: 004b3150 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_004b3150(CBitFont * this_ptr, int offset_value, int start_char, int end_char)
    ADD ESP,0x10                        ; 00459fdb
    MOV EAX,[0x01549aa0]                ; 00459fde | DAT_01549aa0
    PUSH 0x1                            ; 00459fe3
    MOV dword ptr [EAX + 0x41fc],0x2    ; 00459fe5
    PUSH EAX                            ; 00459fef
    MOV dword ptr [EAX + 0x4200],0x1    ; 00459ff0
    CALL engine_font.cpp_CBitFont_setFontReady_FUN_004b31b0 ; 00459ffa
        ;   XREF to: 004b31b0 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setFontReady_FUN_004b31b0(CBitFont * this_ptr, int value)
    ADD ESP,0x8                         ; 00459fff
    PUSH 0x4220                         ; 0045a002
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 0045a007
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 0045a00c
    TEST EAX,EAX                        ; 0045a00f
    JZ 0x0045a01c                       ; 0045a011
        ;   XREF to: 0045a01c (CONDITIONAL_JUMP)  ; LAB_0045a01c
    PUSH EAX                            ; 0045a013
    CALL engine_font.cpp_CBitFont_ctor_FUN_004af790 ; 0045a014
        ;   XREF to: 004af790 (UNCONDITIONAL_CALL)  ; CBitFont * engine_font.cpp_CBitFont_ctor_FUN_004af790(CBitFont * this_ptr)
    ADD ESP,0x4                         ; 0045a019
    MOV [0x01549aa4],EAX                ; 0045a01c | DAT_01549aa4
        ;   Label: LAB_0045a01c
    TEST EAX,EAX                        ; 0045a021
    JZ 0x0045a607                       ; 0045a023
        ;   XREF to: 0045a607 (CONDITIONAL_JUMP)  ; LAB_0045a607
    PUSH 0x0                            ; 0045a029
        ;   Label: LAB_0045a029
    PUSH 0x158                          ; 0045a02b
    PUSH 0xf8                           ; 0045a030
    PUSH 0x5bad1c                       ; 0045a035 | = "nocsmall.raw"
    MOV EDX,dword ptr [0x01549aa4]      ; 0045a03a | DAT_01549aa4
    PUSH EDX                            ; 0045a040
    CALL engine_font.cpp_CBitFont_openFontFile_FUN_004af8f0 ; 0045a041
        ;   XREF to: 004af8f0 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_openFontFile_FUN_004af8f0(CBitFont * this_ptr, char * filename, int width, int height, ...)
    ADD ESP,0x14                        ; 0045a046
    MOV ECX,dword ptr [0x01549aa4]      ; 0045a049 | DAT_01549aa4
    PUSH ECX                            ; 0045a04f
    CALL engine_font.cpp_CBitFont_setInitializedFlag_FUN_004b0500 ; 0045a050
        ;   XREF to: 004b0500 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setInitializedFlag_FUN_004b0500(CBitFont * this_ptr)
    ADD ESP,0x4                         ; 0045a055
    PUSH 0x7e                           ; 0045a058
    PUSH 0x20                           ; 0045a05a
    PUSH 0x2                            ; 0045a05c
    MOV EAX,[0x01549aa4]                ; 0045a05e | DAT_01549aa4
    PUSH EAX                            ; 0045a063
    MOV dword ptr [EAX + 0x3668],0x5    ; 0045a064
    CALL engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_004b3150 ; 0045a06e
        ;   XREF to: 004b3150 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_004b3150(CBitFont * this_ptr, int offset_value, int start_char, int end_char)
    ADD ESP,0x10                        ; 0045a073
    MOV EAX,[0x01549aa4]                ; 0045a076 | DAT_01549aa4
    PUSH 0x1                            ; 0045a07b
    MOV dword ptr [EAX + 0x41fc],0x2    ; 0045a07d
    PUSH EAX                            ; 0045a087
    MOV dword ptr [EAX + 0x4200],0x1    ; 0045a088
    CALL engine_font.cpp_CBitFont_setFontReady_FUN_004b31b0 ; 0045a092
        ;   XREF to: 004b31b0 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setFontReady_FUN_004b31b0(CBitFont * this_ptr, int value)
    ADD ESP,0x8                         ; 0045a097
    PUSH 0x4220                         ; 0045a09a
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 0045a09f
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 0045a0a4
    TEST EAX,EAX                        ; 0045a0a7
    JZ 0x0045a0b4                       ; 0045a0a9
        ;   XREF to: 0045a0b4 (CONDITIONAL_JUMP)  ; LAB_0045a0b4
    PUSH EAX                            ; 0045a0ab
    CALL engine_font.cpp_CBitFont_ctor_FUN_004af790 ; 0045a0ac
        ;   XREF to: 004af790 (UNCONDITIONAL_CALL)  ; CBitFont * engine_font.cpp_CBitFont_ctor_FUN_004af790(CBitFont * this_ptr)
    ADD ESP,0x4                         ; 0045a0b1
    MOV [0x01549aa8],EAX                ; 0045a0b4 | DAT_01549aa8
        ;   Label: LAB_0045a0b4
    TEST EAX,EAX                        ; 0045a0b9
    JZ 0x0045a62e                       ; 0045a0bb
        ;   XREF to: 0045a62e (CONDITIONAL_JUMP)  ; LAB_0045a62e
    PUSH 0x0                            ; 0045a0c1
        ;   Label: LAB_0045a0c1
    PUSH 0x23f                          ; 0045a0c3
    PUSH 0xfa                           ; 0045a0c8
    PUSH 0x5bad5c                       ; 0045a0cd | = "menufont.raw"
    MOV EDI,dword ptr [0x01549aa8]      ; 0045a0d2 | DAT_01549aa8
    PUSH EDI                            ; 0045a0d8
    CALL engine_font.cpp_CBitFont_openFontFile_FUN_004af8f0 ; 0045a0d9
        ;   XREF to: 004af8f0 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_openFontFile_FUN_004af8f0(CBitFont * this_ptr, char * filename, int width, int height, ...)
    ADD ESP,0x14                        ; 0045a0de
    MOV EBP,dword ptr [0x01549aa8]      ; 0045a0e1 | DAT_01549aa8
    PUSH EBP                            ; 0045a0e7
    CALL engine_font.cpp_CBitFont_setInitializedFlag_FUN_004b0500 ; 0045a0e8
        ;   XREF to: 004b0500 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setInitializedFlag_FUN_004b0500(CBitFont * this_ptr)
    ADD ESP,0x4                         ; 0045a0ed
    PUSH 0x7e                           ; 0045a0f0
    PUSH 0x20                           ; 0045a0f2
    PUSH 0x3                            ; 0045a0f4
    MOV EAX,[0x01549aa8]                ; 0045a0f6 | DAT_01549aa8
    PUSH EAX                            ; 0045a0fb
    MOV dword ptr [EAX + 0x3668],0x8    ; 0045a0fc
    CALL engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_004b3150 ; 0045a106
        ;   XREF to: 004b3150 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_004b3150(CBitFont * this_ptr, int offset_value, int start_char, int end_char)
    ADD ESP,0x10                        ; 0045a10b
    PUSH 0xdf                           ; 0045a10e
    PUSH 0xc0                           ; 0045a113
    PUSH 0x0                            ; 0045a118
    MOV EAX,[0x01549aa8]                ; 0045a11a | DAT_01549aa8
    PUSH EAX                            ; 0045a11f
    CALL engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_004b3150 ; 0045a120
        ;   XREF to: 004b3150 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_004b3150(CBitFont * this_ptr, int offset_value, int start_char, int end_char)
    ADD ESP,0x10                        ; 0045a125
    PUSH 0xff                           ; 0045a128
    PUSH 0xe0                           ; 0045a12d
    PUSH 0x1                            ; 0045a132
    MOV EDX,dword ptr [0x01549aa8]      ; 0045a134 | DAT_01549aa8
    PUSH EDX                            ; 0045a13a
    CALL engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_004b3150 ; 0045a13b
        ;   XREF to: 004b3150 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_004b3150(CBitFont * this_ptr, int offset_value, int start_char, int end_char)
    ADD ESP,0x10                        ; 0045a140
    MOV EAX,[0x01549aa8]                ; 0045a143 | DAT_01549aa8
    PUSH 0x1                            ; 0045a148
    MOV dword ptr [EAX + 0x41fc],0x2    ; 0045a14a
    PUSH EAX                            ; 0045a154
    MOV dword ptr [EAX + 0x4200],0x1    ; 0045a155
    CALL engine_font.cpp_CBitFont_setFontReady_FUN_004b31b0 ; 0045a15f
        ;   XREF to: 004b31b0 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setFontReady_FUN_004b31b0(CBitFont * this_ptr, int value)
    ADD ESP,0x8                         ; 0045a164
    PUSH 0x4220                         ; 0045a167
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 0045a16c
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 0045a171
    TEST EAX,EAX                        ; 0045a174
    JZ 0x0045a181                       ; 0045a176
        ;   XREF to: 0045a181 (CONDITIONAL_JUMP)  ; LAB_0045a181
    PUSH EAX                            ; 0045a178
    CALL engine_font.cpp_CBitFont_ctor_FUN_004af790 ; 0045a179
        ;   XREF to: 004af790 (UNCONDITIONAL_CALL)  ; CBitFont * engine_font.cpp_CBitFont_ctor_FUN_004af790(CBitFont * this_ptr)
    ADD ESP,0x4                         ; 0045a17e
    MOV [0x01549aac],EAX                ; 0045a181 | DAT_01549aac
        ;   Label: LAB_0045a181
    TEST EAX,EAX                        ; 0045a186
    JZ 0x0045a656                       ; 0045a188
        ;   XREF to: 0045a656 (CONDITIONAL_JUMP)  ; LAB_0045a656
    PUSH 0x2                            ; 0045a18e
        ;   Label: LAB_0045a18e
    PUSH 0x23f                          ; 0045a190
    PUSH 0xfa                           ; 0045a195
    PUSH 0x5bad9b                       ; 0045a19a | = "BW3_font.raw"
    MOV ESI,dword ptr [0x01549aac]      ; 0045a19f | DAT_01549aac
    PUSH ESI                            ; 0045a1a5
    CALL engine_font.cpp_CBitFont_openFontFile_FUN_004af8f0 ; 0045a1a6
        ;   XREF to: 004af8f0 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_openFontFile_FUN_004af8f0(CBitFont * this_ptr, char * filename, int width, int height, ...)
    ADD ESP,0x14                        ; 0045a1ab
    MOV EDI,dword ptr [0x01549aac]      ; 0045a1ae | DAT_01549aac
    PUSH EDI                            ; 0045a1b4
    CALL engine_font.cpp_CBitFont_setInitializedFlag_FUN_004b0500 ; 0045a1b5
        ;   XREF to: 004b0500 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setInitializedFlag_FUN_004b0500(CBitFont * this_ptr)
    ADD ESP,0x4                         ; 0045a1ba
    PUSH 0x7e                           ; 0045a1bd
    PUSH 0x20                           ; 0045a1bf
    PUSH 0x3                            ; 0045a1c1
    MOV EAX,[0x01549aac]                ; 0045a1c3 | DAT_01549aac
    PUSH EAX                            ; 0045a1c8
    MOV dword ptr [EAX + 0x3668],0x8    ; 0045a1c9
    CALL engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_004b3150 ; 0045a1d3
        ;   XREF to: 004b3150 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_004b3150(CBitFont * this_ptr, int offset_value, int start_char, int end_char)
    ADD ESP,0x10                        ; 0045a1d8
    PUSH 0xdf                           ; 0045a1db
    PUSH 0xc0                           ; 0045a1e0
    PUSH 0x0                            ; 0045a1e5
    MOV EBP,dword ptr [0x01549aac]      ; 0045a1e7 | DAT_01549aac
    PUSH EBP                            ; 0045a1ed
    CALL engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_004b3150 ; 0045a1ee
        ;   XREF to: 004b3150 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_004b3150(CBitFont * this_ptr, int offset_value, int start_char, int end_char)
    ADD ESP,0x10                        ; 0045a1f3
    PUSH 0xff                           ; 0045a1f6
    PUSH 0xe0                           ; 0045a1fb
    PUSH 0x1                            ; 0045a200
    MOV EAX,[0x01549aac]                ; 0045a202 | DAT_01549aac
    PUSH EAX                            ; 0045a207
    CALL engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_004b3150 ; 0045a208
        ;   XREF to: 004b3150 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_004b3150(CBitFont * this_ptr, int offset_value, int start_char, int end_char)
    ADD ESP,0x10                        ; 0045a20d
    MOV EAX,[0x01549aac]                ; 0045a210 | DAT_01549aac
    PUSH 0x1                            ; 0045a215
    MOV dword ptr [EAX + 0x41fc],0x2    ; 0045a217
    PUSH EAX                            ; 0045a221
    MOV dword ptr [EAX + 0x4200],0x1    ; 0045a222
    CALL engine_font.cpp_CBitFont_setFontReady_FUN_004b31b0 ; 0045a22c
        ;   XREF to: 004b31b0 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setFontReady_FUN_004b31b0(CBitFont * this_ptr, int value)
    ADD ESP,0x8                         ; 0045a231
    PUSH 0x4220                         ; 0045a234
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 0045a239
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 0045a23e
    TEST EAX,EAX                        ; 0045a241
    JZ 0x0045a24e                       ; 0045a243
        ;   XREF to: 0045a24e (CONDITIONAL_JUMP)  ; LAB_0045a24e
    PUSH EAX                            ; 0045a245
    CALL engine_font.cpp_CBitFont_ctor_FUN_004af790 ; 0045a246
        ;   XREF to: 004af790 (UNCONDITIONAL_CALL)  ; CBitFont * engine_font.cpp_CBitFont_ctor_FUN_004af790(CBitFont * this_ptr)
    ADD ESP,0x4                         ; 0045a24b
    MOV [0x01549ab0],EAX                ; 0045a24e | DAT_01549ab0
        ;   Label: LAB_0045a24e
    TEST EAX,EAX                        ; 0045a253
    JZ 0x0045a67e                       ; 0045a255
        ;   XREF to: 0045a67e (CONDITIONAL_JUMP)  ; LAB_0045a67e
    PUSH 0x2                            ; 0045a25b
        ;   Label: LAB_0045a25b
    PUSH 0x23f                          ; 0045a25d
    PUSH 0xfa                           ; 0045a262
    PUSH 0x5bade0                       ; 0045a267 | = "BW3_font2.raw"
    MOV EBX,dword ptr [0x01549ab0]      ; 0045a26c | DAT_01549ab0
    PUSH EBX                            ; 0045a272
    CALL engine_font.cpp_CBitFont_openFontFile_FUN_004af8f0 ; 0045a273
        ;   XREF to: 004af8f0 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_openFontFile_FUN_004af8f0(CBitFont * this_ptr, char * filename, int width, int height, ...)
    ADD ESP,0x14                        ; 0045a278
    MOV ESI,dword ptr [0x01549ab0]      ; 0045a27b | DAT_01549ab0
    PUSH ESI                            ; 0045a281
    CALL engine_font.cpp_CBitFont_setInitializedFlag_FUN_004b0500 ; 0045a282
        ;   XREF to: 004b0500 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setInitializedFlag_FUN_004b0500(CBitFont * this_ptr)
    ADD ESP,0x4                         ; 0045a287
    PUSH 0x7e                           ; 0045a28a
    PUSH 0x20                           ; 0045a28c
    PUSH 0x3                            ; 0045a28e
    MOV EAX,[0x01549ab0]                ; 0045a290 | DAT_01549ab0
    PUSH EAX                            ; 0045a295
    MOV dword ptr [EAX + 0x3668],0x8    ; 0045a296
    CALL engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_004b3150 ; 0045a2a0
        ;   XREF to: 004b3150 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_004b3150(CBitFont * this_ptr, int offset_value, int start_char, int end_char)
    ADD ESP,0x10                        ; 0045a2a5
    PUSH 0xdf                           ; 0045a2a8
    PUSH 0xc0                           ; 0045a2ad
    PUSH 0x0                            ; 0045a2b2
    MOV EDI,dword ptr [0x01549ab0]      ; 0045a2b4 | DAT_01549ab0
    PUSH EDI                            ; 0045a2ba
    CALL engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_004b3150 ; 0045a2bb
        ;   XREF to: 004b3150 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_004b3150(CBitFont * this_ptr, int offset_value, int start_char, int end_char)
    ADD ESP,0x10                        ; 0045a2c0
    PUSH 0xff                           ; 0045a2c3
    PUSH 0xe0                           ; 0045a2c8
    PUSH 0x1                            ; 0045a2cd
    MOV EBP,dword ptr [0x01549ab0]      ; 0045a2cf | DAT_01549ab0
    PUSH EBP                            ; 0045a2d5
    CALL engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_004b3150 ; 0045a2d6
        ;   XREF to: 004b3150 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_004b3150(CBitFont * this_ptr, int offset_value, int start_char, int end_char)
    ADD ESP,0x10                        ; 0045a2db
    MOV EAX,[0x01549ab0]                ; 0045a2de | DAT_01549ab0
    PUSH 0x1                            ; 0045a2e3
    MOV dword ptr [EAX + 0x41fc],0x2    ; 0045a2e5
    PUSH EAX                            ; 0045a2ef
    MOV dword ptr [EAX + 0x4200],0x1    ; 0045a2f0
    CALL engine_font.cpp_CBitFont_setFontReady_FUN_004b31b0 ; 0045a2fa
        ;   XREF to: 004b31b0 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setFontReady_FUN_004b31b0(CBitFont * this_ptr, int value)
    ADD ESP,0x8                         ; 0045a2ff
    PUSH 0x4220                         ; 0045a302
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 0045a307
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 0045a30c
    TEST EAX,EAX                        ; 0045a30f
    JZ 0x0045a31c                       ; 0045a311
        ;   XREF to: 0045a31c (CONDITIONAL_JUMP)  ; LAB_0045a31c
    PUSH EAX                            ; 0045a313
    CALL engine_font.cpp_CBitFont_ctor_FUN_004af790 ; 0045a314
        ;   XREF to: 004af790 (UNCONDITIONAL_CALL)  ; CBitFont * engine_font.cpp_CBitFont_ctor_FUN_004af790(CBitFont * this_ptr)
    ADD ESP,0x4                         ; 0045a319
    MOV [0x01549ab4],EAX                ; 0045a31c | DAT_01549ab4
        ;   Label: LAB_0045a31c
    TEST EAX,EAX                        ; 0045a321
    JZ 0x0045a6a6                       ; 0045a323
        ;   XREF to: 0045a6a6 (CONDITIONAL_JUMP)  ; LAB_0045a6a6
    PUSH 0x0                            ; 0045a329
        ;   Label: LAB_0045a329
    PUSH 0xec                           ; 0045a32b
    PUSH 0x94                           ; 0045a330
    PUSH 0x5bae21                       ; 0045a335 | = "fnte_pfd.RAW"
    MOV ECX,dword ptr [0x01549ab4]      ; 0045a33a | DAT_01549ab4
    PUSH ECX                            ; 0045a340
    CALL engine_font.cpp_CBitFont_openFontFile_FUN_004af8f0 ; 0045a341
        ;   XREF to: 004af8f0 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_openFontFile_FUN_004af8f0(CBitFont * this_ptr, char * filename, int width, int height, ...)
    ADD ESP,0x14                        ; 0045a346
    MOV EBX,dword ptr [0x01549ab4]      ; 0045a349 | DAT_01549ab4
    PUSH EBX                            ; 0045a34f
    CALL engine_font.cpp_CBitFont_setInitializedFlag_FUN_004b0500 ; 0045a350
        ;   XREF to: 004b0500 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setInitializedFlag_FUN_004b0500(CBitFont * this_ptr)
    ADD ESP,0x4                         ; 0045a355
    PUSH 0x7e                           ; 0045a358
    PUSH 0x20                           ; 0045a35a
    PUSH 0x3                            ; 0045a35c
    MOV EAX,[0x01549ab4]                ; 0045a35e | DAT_01549ab4
    PUSH EAX                            ; 0045a363
    MOV dword ptr [EAX + 0x3668],0x4    ; 0045a364
    CALL engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_004b3150 ; 0045a36e
        ;   XREF to: 004b3150 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_004b3150(CBitFont * this_ptr, int offset_value, int start_char, int end_char)
    ADD ESP,0x10                        ; 0045a373
    MOV EAX,[0x01549ab4]                ; 0045a376 | DAT_01549ab4
    PUSH 0x1                            ; 0045a37b
    MOV dword ptr [EAX + 0x41fc],0x1    ; 0045a37d
    PUSH EAX                            ; 0045a387
    MOV dword ptr [EAX + 0x4200],0x1    ; 0045a388
    CALL engine_font.cpp_CBitFont_setFontReady_FUN_004b31b0 ; 0045a392
        ;   XREF to: 004b31b0 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setFontReady_FUN_004b31b0(CBitFont * this_ptr, int value)
    ADD ESP,0x8                         ; 0045a397
    MOV EAX,[0x01549ab4]                ; 0045a39a | DAT_01549ab4
    PUSH 0x4220                         ; 0045a39f
    MOV [0x01c5b0e0],EAX                ; 0045a3a4 | DAT_01c5b0e0
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 0045a3a9
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 0045a3ae
    TEST EAX,EAX                        ; 0045a3b1
    JZ 0x0045a3be                       ; 0045a3b3
        ;   XREF to: 0045a3be (CONDITIONAL_JUMP)  ; LAB_0045a3be
    PUSH EAX                            ; 0045a3b5
    CALL engine_font.cpp_CBitFont_ctor_FUN_004af790 ; 0045a3b6
        ;   XREF to: 004af790 (UNCONDITIONAL_CALL)  ; CBitFont * engine_font.cpp_CBitFont_ctor_FUN_004af790(CBitFont * this_ptr)
    ADD ESP,0x4                         ; 0045a3bb
    MOV [0x01549ab8],EAX                ; 0045a3be | DAT_01549ab8
        ;   Label: LAB_0045a3be
    TEST EAX,EAX                        ; 0045a3c3
    JZ 0x0045a6cd                       ; 0045a3c5
        ;   XREF to: 0045a6cd (CONDITIONAL_JUMP)  ; LAB_0045a6cd
    PUSH 0xff                           ; 0045a3cb
        ;   Label: LAB_0045a3cb
    PUSH 0xec                           ; 0045a3d0
    PUSH 0x94                           ; 0045a3d5
    PUSH 0x5bae63                       ; 0045a3da | = "fnte_f.RAW"
    MOV EBP,dword ptr [0x01549ab8]      ; 0045a3df | DAT_01549ab8
    PUSH EBP                            ; 0045a3e5
    CALL engine_font.cpp_CBitFont_openFontFile_FUN_004af8f0 ; 0045a3e6
        ;   XREF to: 004af8f0 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_openFontFile_FUN_004af8f0(CBitFont * this_ptr, char * filename, int width, int height, ...)
    ADD ESP,0x14                        ; 0045a3eb
    PUSH 0x7e                           ; 0045a3ee
    PUSH 0x20                           ; 0045a3f0
    PUSH 0x3                            ; 0045a3f2
    MOV EAX,[0x01549ab8]                ; 0045a3f4 | DAT_01549ab8
    PUSH EAX                            ; 0045a3f9
    MOV dword ptr [EAX + 0x3668],0x4    ; 0045a3fa
    CALL engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_004b3150 ; 0045a404
        ;   XREF to: 004b3150 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_004b3150(CBitFont * this_ptr, int offset_value, int start_char, int end_char)
    ADD ESP,0x10                        ; 0045a409
    MOV EAX,[0x01549ab8]                ; 0045a40c | DAT_01549ab8
    PUSH 0x1                            ; 0045a411
    MOV dword ptr [EAX + 0x41fc],0x1    ; 0045a413
    PUSH EAX                            ; 0045a41d
    MOV dword ptr [EAX + 0x4200],0x1    ; 0045a41e
    CALL engine_font.cpp_CBitFont_setFontReady_FUN_004b31b0 ; 0045a428
        ;   XREF to: 004b31b0 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setFontReady_FUN_004b31b0(CBitFont * this_ptr, int value)
    ADD ESP,0x8                         ; 0045a42d
    MOV EAX,[0x01549ab4]                ; 0045a430 | DAT_01549ab4
    PUSH 0x4220                         ; 0045a435
    MOV [0x01c5b0e0],EAX                ; 0045a43a | DAT_01c5b0e0
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 0045a43f
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 0045a444
    TEST EAX,EAX                        ; 0045a447
    JZ 0x0045a454                       ; 0045a449
        ;   XREF to: 0045a454 (CONDITIONAL_JUMP)  ; LAB_0045a454
    PUSH EAX                            ; 0045a44b
    CALL engine_font.cpp_CBitFont_ctor_FUN_004af790 ; 0045a44c
        ;   XREF to: 004af790 (UNCONDITIONAL_CALL)  ; CBitFont * engine_font.cpp_CBitFont_ctor_FUN_004af790(CBitFont * this_ptr)
    ADD ESP,0x4                         ; 0045a451
    MOV [0x01549abc],EAX                ; 0045a454 | DAT_01549abc
        ;   Label: LAB_0045a454
    TEST EAX,EAX                        ; 0045a459
    JZ 0x0045a6f5                       ; 0045a45b
        ;   XREF to: 0045a6f5 (CONDITIONAL_JUMP)  ; LAB_0045a6f5
    PUSH 0x0                            ; 0045a461
        ;   Label: LAB_0045a461
    PUSH 0xec                           ; 0045a463
    PUSH 0x94                           ; 0045a468
    PUSH 0x5baea1                       ; 0045a46d | = "micro.raw"
    MOV ECX,dword ptr [0x01549abc]      ; 0045a472 | DAT_01549abc
    PUSH ECX                            ; 0045a478
    CALL engine_font.cpp_CBitFont_openFontFile_FUN_004af8f0 ; 0045a479
        ;   XREF to: 004af8f0 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_openFontFile_FUN_004af8f0(CBitFont * this_ptr, char * filename, int width, int height, ...)
    ADD ESP,0x14                        ; 0045a47e
    MOV EBX,dword ptr [0x01549abc]      ; 0045a481 | DAT_01549abc
    PUSH EBX                            ; 0045a487
    CALL engine_font.cpp_CBitFont_setInitializedFlag_FUN_004b0500 ; 0045a488
        ;   XREF to: 004b0500 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setInitializedFlag_FUN_004b0500(CBitFont * this_ptr)
    ADD ESP,0x4                         ; 0045a48d
    PUSH 0x7e                           ; 0045a490
    PUSH 0x20                           ; 0045a492
    PUSH 0x1                            ; 0045a494
    MOV EAX,[0x01549abc]                ; 0045a496 | DAT_01549abc
    PUSH EAX                            ; 0045a49b
    MOV dword ptr [EAX + 0x3668],0x4    ; 0045a49c
    CALL engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_004b3150 ; 0045a4a6
        ;   XREF to: 004b3150 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_004b3150(CBitFont * this_ptr, int offset_value, int start_char, int end_char)
    ADD ESP,0x10                        ; 0045a4ab
    MOV EAX,[0x01549abc]                ; 0045a4ae | DAT_01549abc
    PUSH 0x1                            ; 0045a4b3
    MOV dword ptr [EAX + 0x41fc],0x1    ; 0045a4b5
    PUSH EAX                            ; 0045a4bf
    MOV dword ptr [EAX + 0x4200],0x1    ; 0045a4c0
    CALL engine_font.cpp_CBitFont_setFontReady_FUN_004b31b0 ; 0045a4ca
        ;   XREF to: 004b31b0 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setFontReady_FUN_004b31b0(CBitFont * this_ptr, int value)
    ADD ESP,0x8                         ; 0045a4cf
    PUSH 0x4220                         ; 0045a4d2
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 0045a4d7
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 0045a4dc
    TEST EAX,EAX                        ; 0045a4df
    JZ 0x0045a4ec                       ; 0045a4e1
        ;   XREF to: 0045a4ec (CONDITIONAL_JUMP)  ; LAB_0045a4ec
    PUSH EAX                            ; 0045a4e3
    CALL engine_font.cpp_CBitFont_ctor_FUN_004af790 ; 0045a4e4
        ;   XREF to: 004af790 (UNCONDITIONAL_CALL)  ; CBitFont * engine_font.cpp_CBitFont_ctor_FUN_004af790(CBitFont * this_ptr)
    ADD ESP,0x4                         ; 0045a4e9
    MOV [0x01549ac0],EAX                ; 0045a4ec | DAT_01549ac0
        ;   Label: LAB_0045a4ec
    TEST EAX,EAX                        ; 0045a4f1
    JNZ 0x0045a518                      ; 0045a4f3
        ;   XREF to: 0045a518 (CONDITIONAL_JUMP)  ; LAB_0045a518
    MOV ESI,0x5baeab                    ; 0045a4f5 | = "..\\core\\dfont.cpp"
    MOV EDI,0xc9                        ; 0045a4fa
    PUSH 0x5baebd                       ; 0045a4ff | = "Hand font object not allocated!"
    MOV dword ptr [0x01d71de0],ESI      ; 0045a504 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 0045a50a | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0045a510
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0045a515
    PUSH 0x0                            ; 0045a518
        ;   Label: LAB_0045a518
    PUSH 0x100                          ; 0045a51a
    PUSH 0x100                          ; 0045a51f
    PUSH 0x5baedd                       ; 0045a524 | = "dochand.raw"
    MOV EBP,dword ptr [0x01549ac0]      ; 0045a529 | DAT_01549ac0
    PUSH EBP                            ; 0045a52f
    CALL engine_font.cpp_CBitFont_openFontFile_FUN_004af8f0 ; 0045a530
        ;   XREF to: 004af8f0 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_openFontFile_FUN_004af8f0(CBitFont * this_ptr, char * filename, int width, int height, ...)
    ADD ESP,0x14                        ; 0045a535
    MOV EAX,[0x01549ac0]                ; 0045a538 | DAT_01549ac0
    PUSH EAX                            ; 0045a53d
    CALL engine_font.cpp_CBitFont_setInitializedFlag_FUN_004b0500 ; 0045a53e
        ;   XREF to: 004b0500 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setInitializedFlag_FUN_004b0500(CBitFont * this_ptr)
    ADD ESP,0x4                         ; 0045a543
    PUSH 0x7e                           ; 0045a546
    PUSH 0x20                           ; 0045a548
    PUSH 0x3                            ; 0045a54a
    MOV EAX,[0x01549ac0]                ; 0045a54c | DAT_01549ac0
    PUSH EAX                            ; 0045a551
    MOV dword ptr [EAX + 0x3668],0x8    ; 0045a552
    CALL engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_004b3150 ; 0045a55c
        ;   XREF to: 004b3150 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_004b3150(CBitFont * this_ptr, int offset_value, int start_char, int end_char)
    ADD ESP,0x10                        ; 0045a561
    PUSH 0xdf                           ; 0045a564
    PUSH 0xc0                           ; 0045a569
    PUSH 0x0                            ; 0045a56e
    MOV EDX,dword ptr [0x01549ac0]      ; 0045a570 | DAT_01549ac0
    PUSH EDX                            ; 0045a576
    CALL engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_004b3150 ; 0045a577
        ;   XREF to: 004b3150 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_004b3150(CBitFont * this_ptr, int offset_value, int start_char, int end_char)
    ADD ESP,0x10                        ; 0045a57c
    PUSH 0xff                           ; 0045a57f
    PUSH 0xe0                           ; 0045a584
    PUSH 0x1                            ; 0045a589
    MOV ECX,dword ptr [0x01549ac0]      ; 0045a58b | DAT_01549ac0
    PUSH ECX                            ; 0045a591
    CALL engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_004b3150 ; 0045a592
        ;   XREF to: 004b3150 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_004b3150(CBitFont * this_ptr, int offset_value, int start_char, int end_char)
    ADD ESP,0x10                        ; 0045a597
    MOV EAX,[0x01549ac0]                ; 0045a59a | DAT_01549ac0
    PUSH 0x1                            ; 0045a59f
    MOV dword ptr [EAX + 0x41fc],0x2    ; 0045a5a1
    PUSH EAX                            ; 0045a5ab
    MOV dword ptr [EAX + 0x4200],0x1    ; 0045a5ac
    CALL engine_font.cpp_CBitFont_setFontReady_FUN_004b31b0 ; 0045a5b6
        ;   XREF to: 004b31b0 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_setFontReady_FUN_004b31b0(CBitFont * this_ptr, int value)
    MOV EBX,dword ptr [0x01dd4890]      ; 0045a5bb | DAT_01dd4890
    ADD ESP,0x8                         ; 0045a5c1
    TEST EBX,EBX                        ; 0045a5c4
    JNZ 0x0045a71c                      ; 0045a5c6
        ;   XREF to: 0045a71c (CONDITIONAL_JUMP)  ; LAB_0045a71c
    POP EBP                             ; 0045a5cc
    POP EDI                             ; 0045a5cd
    POP ESI                             ; 0045a5ce
    POP EBX                             ; 0045a5cf
    RET                                 ; 0045a5d0
    PUSH EAX                            ; 0045a5d1
        ;   Label: LAB_0045a5d1
    CALL engine_font.cpp_CBitFont_ctor_FUN_004af790 ; 0045a5d2
        ;   XREF to: 004af790 (UNCONDITIONAL_CALL)  ; CBitFont * engine_font.cpp_CBitFont_ctor_FUN_004af790(CBitFont * this_ptr)
    ADD ESP,0x4                         ; 0045a5d7
    JMP 0x00459f69                      ; 0045a5da
        ;   XREF to: 00459f69 (UNCONDITIONAL_JUMP)  ; LAB_00459f69
    MOV EDX,0x5bacaa                    ; 0045a5df | = "..\\core\\dfont.cpp"
        ;   Label: LAB_0045a5df
    MOV ECX,0x43                        ; 0045a5e4
    PUSH 0x5bacbc                       ; 0045a5e9 | = "Medium font object not allocated!"
    MOV dword ptr [0x01d71de0],EDX      ; 0045a5ee | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 0045a5f4 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0045a5fa
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0045a5ff
    JMP 0x00459f76                      ; 0045a602
        ;   XREF to: 00459f76 (UNCONDITIONAL_JUMP)  ; LAB_00459f76
    MOV EBP,0x5bacea                    ; 0045a607 | = "..\\core\\dfont.cpp"
        ;   Label: LAB_0045a607
    MOV EAX,0x53                        ; 0045a60c
    PUSH 0x5bacfc                       ; 0045a611 | = "Tiny font object not allocated!"
    MOV dword ptr [0x01d71de0],EBP      ; 0045a616 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 0045a61c | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0045a621
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0045a626
    JMP 0x0045a029                      ; 0045a629
        ;   XREF to: 0045a029 (UNCONDITIONAL_JUMP)  ; LAB_0045a029
    MOV EBX,0x5bad29                    ; 0045a62e | = "..\\core\\dfont.cpp"
        ;   Label: LAB_0045a62e
    MOV ESI,0x62                        ; 0045a633
    PUSH 0x5bad3b                       ; 0045a638 | = "Theme font object not allocated!"
    MOV dword ptr [0x01d71de0],EBX      ; 0045a63d | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 0045a643 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0045a649
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0045a64e
    JMP 0x0045a0c1                      ; 0045a651
        ;   XREF to: 0045a0c1 (UNCONDITIONAL_JUMP)  ; LAB_0045a0c1
    MOV ECX,0x5bad69                    ; 0045a656 | = "..\\core\\dfont.cpp"
        ;   Label: LAB_0045a656
    MOV EBX,0x73                        ; 0045a65b
    PUSH 0x5bad7b                       ; 0045a660 | = "Menu font object not allocated!"
    MOV dword ptr [0x01d71de0],ECX      ; 0045a665 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBX      ; 0045a66b | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0045a671
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0045a676
    JMP 0x0045a18e                      ; 0045a679
        ;   XREF to: 0045a18e (UNCONDITIONAL_JUMP)  ; LAB_0045a18e
    MOV EDX,0x5bada8                    ; 0045a67e | = "..\\core\\dfont.cpp"
        ;   Label: LAB_0045a67e
    MOV ECX,0x84                        ; 0045a683
    PUSH 0x5badba                       ; 0045a688 | = "Small menu font object not allocated!"
    MOV dword ptr [0x01d71de0],EDX      ; 0045a68d | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 0045a693 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0045a699
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0045a69e
    JMP 0x0045a25b                      ; 0045a6a1
        ;   XREF to: 0045a25b (UNCONDITIONAL_JUMP)  ; LAB_0045a25b
    MOV EAX,0x5badee                    ; 0045a6a6 | = "..\\core\\dfont.cpp"
        ;   Label: LAB_0045a6a6
    MOV EDX,0x95                        ; 0045a6ab
    PUSH 0x5bae00                       ; 0045a6b0 | = "Debug font object not allocated!"
    MOV [0x01d71de0],EAX                ; 0045a6b5 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 0045a6ba | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0045a6c0
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0045a6c5
    JMP 0x0045a329                      ; 0045a6c8
        ;   XREF to: 0045a329 (UNCONDITIONAL_JUMP)  ; LAB_0045a329
    MOV ESI,0x5bae2e                    ; 0045a6cd | = "..\\core\\dfont.cpp"
        ;   Label: LAB_0045a6cd
    MOV EDI,0xa8                        ; 0045a6d2
    PUSH 0x5bae40                       ; 0045a6d7 | = "Console font object not allocated!"
    MOV dword ptr [0x01d71de0],ESI      ; 0045a6dc | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 0045a6e2 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0045a6e8
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0045a6ed
    JMP 0x0045a3cb                      ; 0045a6f0
        ;   XREF to: 0045a3cb (UNCONDITIONAL_JUMP)  ; LAB_0045a3cb
    MOV EAX,0x5bae6e                    ; 0045a6f5 | = "..\\core\\dfont.cpp"
        ;   Label: LAB_0045a6f5
    MOV EDX,0xba                        ; 0045a6fa
    PUSH 0x5bae80                       ; 0045a6ff | = "Micro font object not allocated!"
    MOV [0x01d71de0],EAX                ; 0045a704 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 0045a709 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0045a70f
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0045a714
    JMP 0x0045a461                      ; 0045a717
        ;   XREF to: 0045a461 (UNCONDITIONAL_JUMP)  ; LAB_0045a461
    PUSH 0x6b80                         ; 0045a71c
        ;   Label: LAB_0045a71c
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 0045a721
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 0045a726
    TEST EAX,EAX                        ; 0045a729
    JZ 0x0045a741                       ; 0045a72b
        ;   XREF to: 0045a741 (CONDITIONAL_JUMP)  ; LAB_0045a741
    PUSH 0x2                            ; 0045a72d
    PUSH 0x2                            ; 0045a72f
    PUSH 0xe                            ; 0045a731
    PUSH 0x6034c0                       ; 0045a733 | DAT_006034c0
    PUSH EAX                            ; 0045a738
    CALL engine_winfont.cpp_CWinFont_ctor_FUN_0057fd50 ; 0045a739
        ;   XREF to: 0057fd50 (UNCONDITIONAL_CALL)  ; CWinFont * engine_winfont.cpp_CWinFont_ctor_FUN_0057fd50(CWinFont * this_ptr, char * font_name, int font_height, int y_offset1, ...)
    ADD ESP,0x14                        ; 0045a73e
    MOV [0x01549ac4],EAX                ; 0045a741 | DAT_01549ac4
        ;   Label: LAB_0045a741
    TEST EAX,EAX                        ; 0045a746
    JNZ 0x0045a76d                      ; 0045a748
        ;   XREF to: 0045a76d (CONDITIONAL_JUMP)  ; LAB_0045a76d
    MOV ESI,0x5baee9                    ; 0045a74a | = "..\\core\\dfont.cpp"
    MOV EDI,0xdb                        ; 0045a74f
    PUSH 0x5baefb                       ; 0045a754 | = "initFonts - Can't allocate gMediumOSFont"
    MOV dword ptr [0x01d71de0],ESI      ; 0045a759 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 0045a75f | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0045a765
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0045a76a
    MOV EAX,[0x01549aa0]                ; 0045a76d | DAT_01549aa0
        ;   Label: LAB_0045a76d
    MOV EDX,dword ptr [0x01549ac4]      ; 0045a772 | DAT_01549ac4
    MOV dword ptr [EAX + 0x4210],0x1    ; 0045a778
    PUSH 0x6b80                         ; 0045a782
    MOV dword ptr [EAX + 0x4214],EDX    ; 0045a787
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 0045a78d
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 0045a792
    TEST EAX,EAX                        ; 0045a795
    JZ 0x0045a7ad                       ; 0045a797
        ;   XREF to: 0045a7ad (CONDITIONAL_JUMP)  ; LAB_0045a7ad
    PUSH 0x0                            ; 0045a799
    PUSH 0x0                            ; 0045a79b
    PUSH 0x12                           ; 0045a79d
    PUSH 0x6034c0                       ; 0045a79f | DAT_006034c0
    PUSH EAX                            ; 0045a7a4
    CALL engine_winfont.cpp_CWinFont_ctor_FUN_0057fd50 ; 0045a7a5
        ;   XREF to: 0057fd50 (UNCONDITIONAL_CALL)  ; CWinFont * engine_winfont.cpp_CWinFont_ctor_FUN_0057fd50(CWinFont * this_ptr, char * font_name, int font_height, int y_offset1, ...)
    ADD ESP,0x14                        ; 0045a7aa
    MOV [0x01549acc],EAX                ; 0045a7ad | DAT_01549acc
        ;   Label: LAB_0045a7ad
    TEST EAX,EAX                        ; 0045a7b2
    JNZ 0x0045a7d8                      ; 0045a7b4
        ;   XREF to: 0045a7d8 (CONDITIONAL_JUMP)  ; LAB_0045a7d8
    MOV EBP,0x5baf24                    ; 0045a7b6 | = "..\\core\\dfont.cpp"
    MOV EAX,0xe1                        ; 0045a7bb
    PUSH 0x5baf36                       ; 0045a7c0 | = "initFonts - Can't allocate gThemeOSFont"
    MOV dword ptr [0x01d71de0],EBP      ; 0045a7c5 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 0045a7cb | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0045a7d0
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0045a7d5
    MOV EAX,[0x01549aa8]                ; 0045a7d8 | DAT_01549aa8
        ;   Label: LAB_0045a7d8
    MOV EDX,dword ptr [0x01549acc]      ; 0045a7dd | DAT_01549acc
    MOV dword ptr [EAX + 0x4210],0x1    ; 0045a7e3
    PUSH 0x6b80                         ; 0045a7ed
    MOV dword ptr [EAX + 0x4214],EDX    ; 0045a7f2
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 0045a7f8
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 0045a7fd
    TEST EAX,EAX                        ; 0045a800
    JZ 0x0045a818                       ; 0045a802
        ;   XREF to: 0045a818 (CONDITIONAL_JUMP)  ; LAB_0045a818
    PUSH 0x0                            ; 0045a804
    PUSH 0x0                            ; 0045a806
    PUSH 0xc                            ; 0045a808
    PUSH 0x6034c0                       ; 0045a80a | DAT_006034c0
    PUSH EAX                            ; 0045a80f
    CALL engine_winfont.cpp_CWinFont_ctor_FUN_0057fd50 ; 0045a810
        ;   XREF to: 0057fd50 (UNCONDITIONAL_CALL)  ; CWinFont * engine_winfont.cpp_CWinFont_ctor_FUN_0057fd50(CWinFont * this_ptr, char * font_name, int font_height, int y_offset1, ...)
    ADD ESP,0x14                        ; 0045a815
    MOV [0x01549ac8],EAX                ; 0045a818 | DAT_01549ac8
        ;   Label: LAB_0045a818
    TEST EAX,EAX                        ; 0045a81d
    JNZ 0x0045a844                      ; 0045a81f
        ;   XREF to: 0045a844 (CONDITIONAL_JUMP)  ; LAB_0045a844
    MOV EDX,0x5baf5e                    ; 0045a821 | = "..\\core\\dfont.cpp"
    MOV ECX,0xe7                        ; 0045a826
    PUSH 0x5baf70                       ; 0045a82b | = "initFonts - Can't allocate gTinyOSFont"
    MOV dword ptr [0x01d71de0],EDX      ; 0045a830 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 0045a836 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0045a83c
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0045a841
    MOV EAX,[0x01549aa4]                ; 0045a844 | DAT_01549aa4
        ;   Label: LAB_0045a844
    MOV EDX,dword ptr [0x01549ac8]      ; 0045a849 | DAT_01549ac8
    MOV dword ptr [EAX + 0x4210],0x1    ; 0045a84f
    PUSH 0x6b80                         ; 0045a859
    MOV dword ptr [EAX + 0x4214],EDX    ; 0045a85e
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 0045a864
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 0045a869
    TEST EAX,EAX                        ; 0045a86c
    JZ 0x0045a884                       ; 0045a86e
        ;   XREF to: 0045a884 (CONDITIONAL_JUMP)  ; LAB_0045a884
    PUSH 0x0                            ; 0045a870
    PUSH 0x0                            ; 0045a872
    PUSH 0xa                            ; 0045a874
    PUSH 0x6034c0                       ; 0045a876 | DAT_006034c0
    PUSH EAX                            ; 0045a87b
    CALL engine_winfont.cpp_CWinFont_ctor_FUN_0057fd50 ; 0045a87c
        ;   XREF to: 0057fd50 (UNCONDITIONAL_CALL)  ; CWinFont * engine_winfont.cpp_CWinFont_ctor_FUN_0057fd50(CWinFont * this_ptr, char * font_name, int font_height, int y_offset1, ...)
    ADD ESP,0x14                        ; 0045a881
    MOV [0x01549ad0],EAX                ; 0045a884 | DAT_01549ad0
        ;   Label: LAB_0045a884
    TEST EAX,EAX                        ; 0045a889
    JNZ 0x0045a8b0                      ; 0045a88b
        ;   XREF to: 0045a8b0 (CONDITIONAL_JUMP)  ; LAB_0045a8b0
    MOV EBX,0x5baf97                    ; 0045a88d | = "..\\core\\dfont.cpp"
    MOV ESI,0xed                        ; 0045a892
    PUSH 0x5bafa9                       ; 0045a897 | = "initFonts - Can't allocate gDebugOSFont"
    MOV dword ptr [0x01d71de0],EBX      ; 0045a89c | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 0045a8a2 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0045a8a8
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0045a8ad
    MOV EAX,[0x01549ab4]                ; 0045a8b0 | DAT_01549ab4
        ;   Label: LAB_0045a8b0
    MOV EDX,dword ptr [0x01549ad0]      ; 0045a8b5 | DAT_01549ad0
    MOV dword ptr [EAX + 0x4210],0x1    ; 0045a8bb
    MOV dword ptr [EAX + 0x4214],EDX    ; 0045a8c5
    POP EBP                             ; 0045a8cb
    POP EDI                             ; 0045a8cc
    POP ESI                             ; 0045a8cd
    POP EBX                             ; 0045a8ce
    RET                                 ; 0045a8cf

