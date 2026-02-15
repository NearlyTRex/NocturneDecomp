; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_menu_cpp_renderMenuAndGetChoice_FUN_00510000(char **menu_text_array,int menu_count,int *selected_index_ptr,int y_position,int spacing_flag)
;
; Parameters:
; char * *         Stack[0x4]:4   menu_text_array
; int              Stack[0x8]:4   menu_count
; int *            Stack[0xc]:4   selected_index_ptr
; int              Stack[0x10]:4   y_position
; int              Stack[0x14]:4   spacing_flag
; Local Variables:
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[5]:
;   core_menu.cpp_configureCustomKeys_FUN_00511890 at 00511b81
;   core_menu.cpp_configureGraphicsOptions_FUN_00510c80 at 00511105
;   core_menu.cpp_configureSoundOptions_FUN_00511e50 at 005126a7
;   core_menu.cpp_showMainGameMenu_FUN_00512f40 at 00513130
;   core_menu.cpp_showOptionsScreen_FUN_00512d30 at 00512e42
;
; Referenced Globals:
;   TerminatedCString s_Nocturne_c_1999_Terminal_00636547
;   TerminatedCString s_Nocturne_1999_Terminal_R_00636580
;   char[2] g_MenuVersionText
;   TerminatedCString s_NON_RELEASE_EDITOR_BUILD_006365b8
;   TerminatedCString s_Press_CTRL_D_to_access_t_006365d1
;   CKeys* g_CKeysPtr = 02dcd7d4
;   CBitFont* g_ThemeFont
;   CBitFont* g_SmallEditorFont
;   CKeys g_CKeysInstance
;   CMoon g_CMoonInstance
;   int g_MenuLeftRightPressed
;   int g_MenuInputHappened
;   int g_MessageCount
;
; Called Functions:
;   core_moon.cpp_CMoon_isAnimationFirstHalf_FUN_0052a3f0
;   crt_stdlib.c_rand_FUN_005feb5c
;   engine_3d.c_setRenderAlpha_FUN_00406d80
;   engine_font.cpp_CBitFont_drawText_FUN_004cda80
;   engine_font.cpp_CBitFont_getCharWidth_FUN_004cff40
;   engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
;   engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00510000
        ;   Label: core_menu.cpp_renderMenuAndGetChoice_FUN_00510000
    PUSH ESI                            ; 00510001
    PUSH EDI                            ; 00510002
    PUSH EBP                            ; 00510003
    SUB ESP,0x1c                        ; 00510004
    MOV EBP,dword ptr [ESP + 0x3c]      ; 00510007
    MOV EAX,[0x020a5720]                ; 0051000b | g_ThemeFont
    MOV EDX,dword ptr [ESP + 0x40]      ; 00510010
    MOV dword ptr [ESP + 0x18],EAX      ; 00510014
    TEST EDX,EDX                        ; 00510018
    JNZ 0x0051034e                      ; 0051001a
        ;   XREF to: 0051034e (CONDITIONAL_JUMP)  ; LAB_0051034e
    XOR EDI,EDI                         ; 00510020
        ;   Label: LAB_00510020
    MOV EAX,dword ptr [ESP + 0x34]      ; 00510022
    MOV dword ptr [ESP + 0xc],EDI       ; 00510026
    TEST EAX,EAX                        ; 0051002a
    JLE 0x00510162                      ; 0051002c
        ;   XREF to: 00510162 (CONDITIONAL_JUMP)  ; LAB_00510162
    MOV EAX,dword ptr [ESP + 0x30]      ; 00510032
    MOV dword ptr [ESP + 0x10],EAX      ; 00510036
    MOV EAX,dword ptr [ESP + 0x10]      ; 0051003a
        ;   Label: LAB_0051003a
    MOV EDI,dword ptr [EAX]             ; 0051003e
    PUSH EDI                            ; 00510040
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00510041
    PUSH EAX                            ; 00510045
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80 ; 00510046
        ;   XREF to: 004cfe80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80(CBitFont * this_ptr, char * text)
    ADD ESP,0x8                         ; 0051004b
    PUSH 0x58                           ; 0051004e
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00510050
    PUSH EDX                            ; 00510054
    MOV EBX,0xf8                        ; 00510055
    CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0 ; 0051005a
        ;   XREF to: 004d01d0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 0051005f
    MOV ECX,0xa0                        ; 00510062
    MOV EDX,dword ptr [ESP + 0x38]      ; 00510067
    MOV dword ptr [ESP + 0x4],EAX       ; 0051006b
    MOV dword ptr [ESP],ECX             ; 0051006f
    MOV EAX,dword ptr [ESP + 0xc]       ; 00510072
    MOV ESI,dword ptr [EDX]             ; 00510076
    MOV dword ptr [ESP + 0x8],EBX       ; 00510078
    CMP EAX,ESI                         ; 0051007c
    JNZ 0x00510104                      ; 0051007e
        ;   XREF to: 00510104 (CONDITIONAL_JUMP)  ; LAB_00510104
    PUSH 0x2f21590                      ; 00510084 | g_CMoonInstance
    MOV EDI,0x7                         ; 00510089
    CALL core_moon.cpp_CMoon_isAnimationFirstHalf_FUN_0052a3f0 ; 0051008e
        ;   XREF to: 0052a3f0 (UNCONDITIONAL_CALL)  ; int core_moon.cpp_CMoon_isAnimationFirstHalf_FUN_0052a3f0(CMoon * this_ptr)
    MOV dword ptr [ESP + 0xc],EDI       ; 00510093
    ADD ESP,0x4                         ; 00510097
    TEST EAX,EAX                        ; 0051009a
    JZ 0x0051037a                       ; 0051009c
        ;   XREF to: 0051037a (CONDITIONAL_JUMP)  ; LAB_0051037a
    MOV EAX,dword ptr [ESP + 0x10]      ; 005100a2
    XOR EBX,EBX                         ; 005100a6
    MOV dword ptr [ESP + 0x14],EAX      ; 005100a8
    CALL crt_stdlib.c_rand_FUN_005feb5c ; 005100ac
        ;   XREF to: 005feb5c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005feb5c()
        ;   Label: LAB_005100ac
    MOV EDI,EAX                         ; 005100b1
    CALL crt_stdlib.c_rand_FUN_005feb5c ; 005100b3
        ;   XREF to: 005feb5c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005feb5c()
    AND EAX,0x3                         ; 005100b8
    LEA ESI,[EAX + -0x2]                ; 005100bb
    CALL crt_stdlib.c_rand_FUN_005feb5c ; 005100be
        ;   XREF to: 005feb5c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005feb5c()
    MOV EDX,EAX                         ; 005100c3
    MOV EAX,0xbb80                      ; 005100c5
    IMUL EDX                            ; 005100ca
    SHRD EAX,EDX,0x10                   ; 005100cc
    PUSH EAX                            ; 005100d0
    CALL engine_3d.c_setRenderAlpha_FUN_00406d80 ; 005100d1
        ;   XREF to: 00406d80 (UNCONDITIONAL_CALL)  ; void engine_3d.c_setRenderAlpha_FUN_00406d80(int alpha_color_value)
    ADD ESP,0x4                         ; 005100d6
    PUSH -0x1                           ; 005100d9
    PUSH 0x7                            ; 005100db
    ADD ESI,EBP                         ; 005100dd
    AND EDI,0x3                         ; 005100df
    PUSH ESI                            ; 005100e2
    ADD EDI,0x9e                        ; 005100e3
    MOV EAX,dword ptr [ESP + 0x20]      ; 005100e9
    PUSH EDI                            ; 005100ed
    MOV EDX,dword ptr [EAX]             ; 005100ee
    PUSH EDX                            ; 005100f0
    MOV ECX,dword ptr [ESP + 0x2c]      ; 005100f1
    PUSH ECX                            ; 005100f5
    INC EBX                             ; 005100f6
    CALL engine_font.cpp_CBitFont_drawText_FUN_004cda80 ; 005100f7
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_004cda80(CBitFont * this_ptr, char * text, int x, int y, ...)
    ADD ESP,0x18                        ; 005100fc
    CMP EBX,0x5                         ; 005100ff
    JL 0x005100ac                       ; 00510102
        ;   XREF to: 005100ac (CONDITIONAL_JUMP)  ; LAB_005100ac
    PUSH 0xbb80                         ; 00510104
        ;   Label: LAB_00510104
    CALL engine_3d.c_setRenderAlpha_FUN_00406d80 ; 00510109
        ;   XREF to: 00406d80 (UNCONDITIONAL_CALL)  ; void engine_3d.c_setRenderAlpha_FUN_00406d80(int alpha_color_value)
    ADD ESP,0x4                         ; 0051010e
    PUSH -0x1                           ; 00510111
    MOV EBX,dword ptr [ESP + 0xc]       ; 00510113
    PUSH EBX                            ; 00510117
    PUSH EBP                            ; 00510118
    MOV ESI,dword ptr [ESP + 0xc]       ; 00510119
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0051011d
    PUSH ESI                            ; 00510121
    MOV EDI,dword ptr [EAX]             ; 00510122
    PUSH EDI                            ; 00510124
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00510125
    PUSH EAX                            ; 00510129
    CALL engine_font.cpp_CBitFont_drawText_FUN_004cda80 ; 0051012a
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_004cda80(CBitFont * this_ptr, char * text, int x, int y, ...)
    ADD ESP,0x18                        ; 0051012f
    MOV EDX,dword ptr [ESP + 0x4]       ; 00510132
    MOV ECX,dword ptr [ESP + 0x40]      ; 00510136
    ADD EBP,EDX                         ; 0051013a
    TEST ECX,ECX                        ; 0051013c
    JNZ 0x00510142                      ; 0051013e
        ;   XREF to: 00510142 (CONDITIONAL_JUMP)  ; LAB_00510142
    ADD EBP,EDX                         ; 00510140
    MOV EDX,dword ptr [ESP + 0x10]      ; 00510142
        ;   Label: LAB_00510142
    MOV ECX,dword ptr [ESP + 0xc]       ; 00510146
    MOV EBX,dword ptr [ESP + 0x34]      ; 0051014a
    ADD EDX,0x4                         ; 0051014e
    INC ECX                             ; 00510151
    MOV dword ptr [ESP + 0x10],EDX      ; 00510152
    MOV dword ptr [ESP + 0xc],ECX       ; 00510156
    CMP ECX,EBX                         ; 0051015a
    JL 0x0051003a                       ; 0051015c
        ;   XREF to: 0051003a (CONDITIONAL_JUMP)  ; LAB_0051003a
    PUSH 0xffff                         ; 00510162
        ;   Label: LAB_00510162
    CALL engine_3d.c_setRenderAlpha_FUN_00406d80 ; 00510167
        ;   XREF to: 00406d80 (UNCONDITIONAL_CALL)  ; void engine_3d.c_setRenderAlpha_FUN_00406d80(int alpha_color_value)
    MOV ESI,dword ptr [0x02fa8cd0]      ; 0051016c | g_MessageCount
    ADD ESP,0x4                         ; 00510172
    TEST ESI,ESI                        ; 00510175
    JZ 0x00510387                       ; 00510177
        ;   XREF to: 00510387 (CONDITIONAL_JUMP)  ; LAB_00510387
    PUSH 0x636547                       ; 0051017d | = "Nocturne (c) 1999 Terminal Reality In..."
    MOV EDX,dword ptr [0x020a5724]      ; 00510182 | g_SmallEditorFont
    PUSH EDX                            ; 00510188
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80 ; 00510189
        ;   XREF to: 004cfe80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80(CBitFont * this_ptr, char * text)
    ADD ESP,0x8                         ; 0051018e
    PUSH 0x636547                       ; 00510191 | = "Nocturne (c) 1999 Terminal Reality In..."
    MOV ECX,dword ptr [0x020a5724]      ; 00510196 | g_SmallEditorFont
    PUSH ECX                            ; 0051019c
    MOV EBX,EAX                         ; 0051019d
    CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004cff40 ; 0051019f
        ;   XREF to: 004cff40 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharWidth_FUN_004cff40(CBitFont * this_ptr, char * text_string)
    ADD ESP,0x8                         ; 005101a4
    PUSH 0x0                            ; 005101a7
    MOV EDX,0x1df                       ; 005101a9
    PUSH 0xf8                           ; 005101ae
    SUB EDX,EAX                         ; 005101b3
    MOV EAX,0x27f                       ; 005101b5
    PUSH EDX                            ; 005101ba
    SUB EAX,EBX                         ; 005101bb
    PUSH EAX                            ; 005101bd
    PUSH 0x636547                       ; 005101be | = "Nocturne (c) 1999 Terminal Reality In..."
    MOV EBX,dword ptr [0x020a5724]      ; 005101c3 | g_SmallEditorFont
    PUSH EBX                            ; 005101c9
    CALL engine_font.cpp_CBitFont_drawText_FUN_004cda80 ; 005101ca
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_004cda80(CBitFont * this_ptr, char * text, int x, int y, ...)
        ;   Label: LAB_005101ca
    ADD ESP,0x18                        ; 005101cf
    PUSH 0x8000                         ; 005101d2
    CALL engine_3d.c_setRenderAlpha_FUN_00406d80 ; 005101d7
        ;   XREF to: 00406d80 (UNCONDITIONAL_CALL)  ; void engine_3d.c_setRenderAlpha_FUN_00406d80(int alpha_color_value)
    ADD ESP,0x4                         ; 005101dc
    PUSH 0x0                            ; 005101df
    PUSH 0xf8                           ; 005101e1
    PUSH 0x63                           ; 005101e6
    PUSH 0x206                          ; 005101e8
    PUSH 0x6365b6                       ; 005101ed | g_MenuVersionText
    MOV ESI,dword ptr [0x020a5724]      ; 005101f2 | g_SmallEditorFont
    PUSH ESI                            ; 005101f8
    CALL engine_font.cpp_CBitFont_drawText_FUN_004cda80 ; 005101f9
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_004cda80(CBitFont * this_ptr, char * text, int x, int y, ...)
    ADD ESP,0x18                        ; 005101fe
    PUSH 0xffff                         ; 00510201
    CALL engine_3d.c_setRenderAlpha_FUN_00406d80 ; 00510206
        ;   XREF to: 00406d80 (UNCONDITIONAL_CALL)  ; void engine_3d.c_setRenderAlpha_FUN_00406d80(int alpha_color_value)
    ADD ESP,0x4                         ; 0051020b
    PUSH 0x0                            ; 0051020e
    PUSH 0xf8                           ; 00510210
    PUSH 0x0                            ; 00510215
    PUSH 0x0                            ; 00510217
    PUSH 0x6365b8                       ; 00510219 | = "NON-RELEASE EDITOR BUILD"
    MOV EDI,dword ptr [0x020a5724]      ; 0051021e | g_SmallEditorFont
    PUSH EDI                            ; 00510224
    CALL engine_font.cpp_CBitFont_drawText_FUN_004cda80 ; 00510225
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_004cda80(CBitFont * this_ptr, char * text, int x, int y, ...)
    ADD ESP,0x18                        ; 0051022a
    PUSH 0x0                            ; 0051022d
    PUSH 0xf8                           ; 0051022f
    PUSH 0x14                           ; 00510234
    PUSH 0x0                            ; 00510236
    PUSH 0x6365d1                       ; 00510238 | = "Press CTRL+D to access the editor menu"
    MOV EBP,dword ptr [0x020a5724]      ; 0051023d | g_SmallEditorFont
    PUSH EBP                            ; 00510243
    CALL engine_font.cpp_CBitFont_drawText_FUN_004cda80 ; 00510244
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_004cda80(CBitFont * this_ptr, char * text, int x, int y, ...)
    ADD ESP,0x18                        ; 00510249
    MOV EAX,dword ptr [ESP + 0x38]      ; 0051024c
    MOV EAX,dword ptr [EAX]             ; 00510250
    MOV EDX,dword ptr [ESP + 0x30]      ; 00510252
    SHL EAX,0x2                         ; 00510256
    ADD EAX,EDX                         ; 00510259
    MOV DL,0x3a                         ; 0051025b
    MOV ESI,dword ptr [EAX]             ; 0051025d
    XOR EBX,EBX                         ; 0051025f
    MOV AL,byte ptr [ESI]               ; 00510261
        ;   Label: LAB_00510261
    CMP AL,DL                           ; 00510263
    JZ 0x00510279                       ; 00510265
        ;   XREF to: 00510279 (CONDITIONAL_JUMP)  ; LAB_00510279
    CMP AL,0x0                          ; 00510267
    JZ 0x00510277                       ; 00510269
        ;   XREF to: 00510277 (CONDITIONAL_JUMP)  ; LAB_00510277
    INC ESI                             ; 0051026b
    MOV AL,byte ptr [ESI]               ; 0051026c
    CMP AL,DL                           ; 0051026e
    JZ 0x00510279                       ; 00510270
        ;   XREF to: 00510279 (CONDITIONAL_JUMP)  ; LAB_00510279
    INC ESI                             ; 00510272
    CMP AL,0x0                          ; 00510273
    JNZ 0x00510261                      ; 00510275
        ;   XREF to: 00510261 (CONDITIONAL_JUMP)  ; LAB_00510261
    SUB ESI,ESI                         ; 00510277
        ;   Label: LAB_00510277
    TEST ESI,ESI                        ; 00510279
        ;   Label: LAB_00510279
    JZ 0x00510282                       ; 0051027b
        ;   XREF to: 00510282 (CONDITIONAL_JUMP)  ; LAB_00510282
    MOV EBX,0x1                         ; 0051027d
    PUSH 0x48                           ; 00510282
        ;   Label: LAB_00510282
    MOV EAX,[0x0067cf44]                ; 00510284 | g_CKeysPtr
    XOR ECX,ECX                         ; 00510289
    PUSH EAX                            ; 0051028b | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0051028c | g_CKeysInstance
    MOV dword ptr [0x02f26cb8],ECX      ; 0051028e | g_MenuInputHappened
    CALL dword ptr [EDX + 0x4]          ; 00510294
    ADD ESP,0x8                         ; 00510297
    TEST EAX,EAX                        ; 0051029a
    JZ 0x005102bb                       ; 0051029c
        ;   XREF to: 005102bb (CONDITIONAL_JUMP)  ; LAB_005102bb
    MOV EAX,dword ptr [ESP + 0x38]      ; 0051029e
    MOV ESI,0x1                         ; 005102a2
    MOV EDI,dword ptr [EAX]             ; 005102a7
    SUB EDI,ESI                         ; 005102a9
    MOV dword ptr [0x02f26cb8],ESI      ; 005102ab | g_MenuInputHappened
    MOV dword ptr [EAX],EDI             ; 005102b1
    TEST EDI,EDI                        ; 005102b3
    JL 0x005103d7                       ; 005102b5
        ;   XREF to: 005103d7 (CONDITIONAL_JUMP)  ; LAB_005103d7
    PUSH 0x50                           ; 005102bb
        ;   Label: LAB_005102bb
    MOV EAX,[0x0067cf44]                ; 005102bd | g_CKeysPtr
    PUSH EAX                            ; 005102c2 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 005102c3 | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 005102c5
    ADD ESP,0x8                         ; 005102c8
    TEST EAX,EAX                        ; 005102cb
    JZ 0x005102f0                       ; 005102cd
        ;   XREF to: 005102f0 (CONDITIONAL_JUMP)  ; LAB_005102f0
    MOV dword ptr [0x02f26cb8],0x1      ; 005102cf | g_MenuInputHappened
    MOV EAX,dword ptr [ESP + 0x38]      ; 005102d9
    MOV EDX,dword ptr [EAX]             ; 005102dd
    INC EDX                             ; 005102df
    MOV ECX,dword ptr [ESP + 0x34]      ; 005102e0
    MOV dword ptr [EAX],EDX             ; 005102e4
    CMP EDX,ECX                         ; 005102e6
    JL 0x005102f0                       ; 005102e8
        ;   XREF to: 005102f0 (CONDITIONAL_JUMP)  ; LAB_005102f0
    MOV dword ptr [EAX],0x0             ; 005102ea
    TEST EBX,EBX                        ; 005102f0
        ;   Label: LAB_005102f0
    JZ 0x00510328                       ; 005102f2
        ;   XREF to: 00510328 (CONDITIONAL_JUMP)  ; LAB_00510328
    PUSH 0x4b                           ; 005102f4
    MOV EAX,[0x0067cf44]                ; 005102f6 | g_CKeysPtr
    XOR EBX,EBX                         ; 005102fb
    PUSH EAX                            ; 005102fd | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 005102fe | g_CKeysInstance
    MOV dword ptr [0x02f26cac],EBX      ; 00510300 | g_MenuLeftRightPressed
    CALL dword ptr [EDX + 0x4]          ; 00510306
    ADD ESP,0x8                         ; 00510309
    TEST EAX,EAX                        ; 0051030c
    JNZ 0x005103e8                      ; 0051030e
        ;   XREF to: 005103e8 (CONDITIONAL_JUMP)  ; LAB_005103e8
    PUSH 0x4d                           ; 00510314
    MOV EAX,[0x0067cf44]                ; 00510316 | g_CKeysPtr
    PUSH EAX                            ; 0051031b | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0051031c | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 0051031e
    ADD ESP,0x8                         ; 00510321
    TEST EAX,EAX                        ; 00510324
    JNZ 0x00510340                      ; 00510326
        ;   XREF to: 00510340 (CONDITIONAL_JUMP)  ; LAB_00510340
    PUSH 0x1c                           ; 00510328
        ;   Label: LAB_00510328
    MOV EAX,[0x0067cf44]                ; 0051032a | g_CKeysPtr
    PUSH EAX                            ; 0051032f | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 00510330 | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 00510332
    ADD ESP,0x8                         ; 00510335
    TEST EAX,EAX                        ; 00510338
    JZ 0x00510401                       ; 0051033a
        ;   XREF to: 00510401 (CONDITIONAL_JUMP)  ; LAB_00510401
    MOV EAX,dword ptr [ESP + 0x38]      ; 00510340
        ;   Label: LAB_00510340
    MOV EAX,dword ptr [EAX]             ; 00510344
    ADD ESP,0x1c                        ; 00510346
    POP EBP                             ; 00510349
    POP EDI                             ; 0051034a
    POP ESI                             ; 0051034b
    POP EBX                             ; 0051034c
    RET                                 ; 0051034d
    PUSH 0x0                            ; 0051034e
        ;   Label: LAB_0051034e
    PUSH 0x7                            ; 00510350
    PUSH EBP                            ; 00510352
    PUSH 0xa0                           ; 00510353
    PUSH EDX                            ; 00510358
    PUSH EAX                            ; 00510359
    MOV EBX,EAX                         ; 0051035a
    CALL engine_font.cpp_CBitFont_drawText_FUN_004cda80 ; 0051035c
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_004cda80(CBitFont * this_ptr, char * text, int x, int y, ...)
    ADD ESP,0x18                        ; 00510361
    PUSH 0x58                           ; 00510364
    MOV ESI,EBX                         ; 00510366
    PUSH ESI                            ; 00510368
    CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0 ; 00510369
        ;   XREF to: 004d01d0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0(CBitFont * this_ptr, int char_code)
    ADD EAX,EAX                         ; 0051036e
    ADD ESP,0x8                         ; 00510370
    ADD EBP,EAX                         ; 00510373
    JMP 0x00510020                      ; 00510375
        ;   XREF to: 00510020 (UNCONDITIONAL_JUMP)  ; LAB_00510020
    MOV dword ptr [ESP + 0x8],0xff      ; 0051037a
        ;   Label: LAB_0051037a
    JMP 0x00510104                      ; 00510382
        ;   XREF to: 00510104 (UNCONDITIONAL_JUMP)  ; LAB_00510104
    PUSH 0x636580                       ; 00510387 | = "Nocturne 1999 Terminal Reality Inc.  ..."
        ;   Label: LAB_00510387
    MOV EDI,dword ptr [0x020a5724]      ; 0051038c | g_SmallEditorFont
    PUSH EDI                            ; 00510392
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80 ; 00510393
        ;   XREF to: 004cfe80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80(CBitFont * this_ptr, char * text)
    ADD ESP,0x8                         ; 00510398
    PUSH 0x636580                       ; 0051039b | = "Nocturne 1999 Terminal Reality Inc.  ..."
    MOV EBP,dword ptr [0x020a5724]      ; 005103a0 | g_SmallEditorFont
    PUSH EBP                            ; 005103a6
    MOV EBX,EAX                         ; 005103a7
    CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004cff40 ; 005103a9
        ;   XREF to: 004cff40 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharWidth_FUN_004cff40(CBitFont * this_ptr, char * text_string)
    ADD ESP,0x8                         ; 005103ae
    PUSH ESI                            ; 005103b1
    MOV EDX,0x1df                       ; 005103b2
    PUSH 0xf8                           ; 005103b7
    SUB EDX,EAX                         ; 005103bc
    MOV EAX,0x27f                       ; 005103be
    PUSH EDX                            ; 005103c3
    SUB EAX,EBX                         ; 005103c4
    PUSH EAX                            ; 005103c6
    PUSH 0x636580                       ; 005103c7 | = "Nocturne 1999 Terminal Reality Inc.  ..."
    MOV EAX,[0x020a5724]                ; 005103cc | g_SmallEditorFont
    PUSH EAX                            ; 005103d1
    JMP 0x005101ca                      ; 005103d2
        ;   XREF to: 005101ca (UNCONDITIONAL_JUMP)  ; LAB_005101ca
    MOV EAX,dword ptr [ESP + 0x34]      ; 005103d7
        ;   Label: LAB_005103d7
    MOV EDX,dword ptr [ESP + 0x38]      ; 005103db
    SUB EAX,ESI                         ; 005103df
    MOV dword ptr [EDX],EAX             ; 005103e1
    JMP 0x005102bb                      ; 005103e3
        ;   XREF to: 005102bb (UNCONDITIONAL_JUMP)  ; LAB_005102bb
    MOV ESI,0x1                         ; 005103e8
        ;   Label: LAB_005103e8
    MOV EAX,dword ptr [ESP + 0x38]      ; 005103ed
    MOV dword ptr [0x02f26cac],ESI      ; 005103f1 | g_MenuLeftRightPressed
    MOV EAX,dword ptr [EAX]             ; 005103f7
    ADD ESP,0x1c                        ; 005103f9
    POP EBP                             ; 005103fc
    POP EDI                             ; 005103fd
    POP ESI                             ; 005103fe
    POP EBX                             ; 005103ff
    RET                                 ; 00510400
    MOV EAX,0xffffffff                  ; 00510401
        ;   Label: LAB_00510401
    ADD ESP,0x1c                        ; 00510406
    POP EBP                             ; 00510409
    POP EDI                             ; 0051040a
    POP ESI                             ; 0051040b
    POP EBX                             ; 0051040c
    RET                                 ; 0051040d

