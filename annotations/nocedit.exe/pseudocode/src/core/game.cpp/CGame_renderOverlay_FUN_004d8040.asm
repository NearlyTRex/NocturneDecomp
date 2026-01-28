; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_game_cpp_CGame_renderOverlay_FUN_004d8040(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined8       Stack[-0x170]:8  local_170
; undefined4       Stack[-0x168]:4  local_168
; undefined1       Stack[-0x164]:1  local_164
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_game.cpp_CGame_processFrame_FUN_004da100 at 004da56d
;
; Referenced Globals:
;   TerminatedCString s_d_s_0062b265
;   double g_AlphaConversionFactor = 65535
;   double g_StatusThresholdHigh = 0.600000000000000
;   double g_StatusThresholdLow = 0.350000000000000
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   CScript* g_CScriptPtr = 0310f858
;   CBitFont* g_MediumFont
;   CBitFont* g_TinyFont
;   CBitFont* g_ThemeFont
;   CBitFont* g_SmallEditorFont
;   char* g_WrappedTextBuffer
;   undefined4 DAT_02d7b9e0
;   undefined1 DAT_02d830a8
;   char* g_CurrentDisplayText
;   ... and 3 more
;
; Called Functions:
;   core_script.cpp_FUN_00559ac0
;   crt_math.c_round_FUN_005fe6b0
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   engine_2d.c_fillRectColor_FUN_00403170
;   engine_2d.c_fillRectWithBorder_FUN_00403200
;   engine_3d.c_setRenderAlpha_FUN_00406d80
;   engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
;   engine_font.cpp_CBitFont_getCharWidth_FUN_004d01a0
;   engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
;   engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80
;   engine_font.cpp_CBitFont_wrapText_FUN_004d0010
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d8040
        ;   Label: core_game.cpp_CGame_renderOverlay_FUN_004d8040
    PUSH ESI                            ; 004d8041
    PUSH EDI                            ; 004d8042
    PUSH EBP                            ; 004d8043
    MOV EBP,ESP                         ; 004d8044
    SUB ESP,0x160                       ; 004d8046
    AND ESP,0xfffffff8                  ; 004d804c
    MOV EAX,[0x00679394]                ; 004d804f | g_WindowWidth
    MOV dword ptr [ESP + 0x110],EAX     ; 004d8054
    MOV EAX,[0x00679398]                ; 004d805b | g_WindowHeight
    MOV dword ptr [ESP + 0x114],EAX     ; 004d8060
    MOV dword ptr [ESP + 0x10c],EAX     ; 004d8067
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d806e
    TEST dword ptr [EAX + 0x384],0x7fffffff ; 004d8071
    JNZ 0x004d83fd                      ; 004d807b
        ;   XREF to: 004d83fd (CONDITIONAL_JUMP)  ; LAB_004d83fd
    LEA EAX,[EAX]                       ; 004d8081
    LEA EDX,[EDX]                       ; 004d8087
    LEA EAX,[EAX]                       ; 004d808d
    FLD float ptr [0x02d831ac]          ; 004d8090 | g_OverlayDisplayTimer
        ;   Label: LAB_004d8090
    FLDZ                                ; 004d8096
    FCOMPP                              ; 004d8098
    FNSTSW AX                           ; 004d809a
    SAHF                                ; 004d809c
    JNC 0x004d8156                      ; 004d809d
        ;   XREF to: 004d8156 (CONDITIONAL_JUMP)  ; LAB_004d8156
    MOV EDX,dword ptr [0x00679398]      ; 004d80a3 | g_WindowHeight
    MOV EBX,dword ptr [0x020a5718]      ; 004d80a9 | g_MediumFont
    CMP EDX,0x1e0                       ; 004d80af
    JGE 0x004d80cb                      ; 004d80b5
        ;   XREF to: 004d80cb (CONDITIONAL_JUMP)  ; LAB_004d80cb
    MOV EBX,dword ptr [0x020a571c]      ; 004d80b7 | g_TinyFont
    CMP EDX,0x180                       ; 004d80bd
    JGE 0x004d80cb                      ; 004d80c3
        ;   XREF to: 004d80cb (CONDITIONAL_JUMP)  ; LAB_004d80cb
    MOV EBX,dword ptr [0x020a5724]      ; 004d80c5 | g_SmallEditorFont
    PUSH 0x58                           ; 004d80cb
        ;   Label: LAB_004d80cb
    PUSH EBX                            ; 004d80cd
    CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0 ; 004d80ce
        ;   XREF to: 004d01d0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004d80d3
    PUSH 0x58                           ; 004d80d6
    PUSH EBX                            ; 004d80d8
    MOV EDI,EAX                         ; 004d80d9
    CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01a0 ; 004d80db
        ;   XREF to: 004d01a0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharWidth_FUN_004d01a0(CBitFont * font, int char_code)
    ADD ESP,0x8                         ; 004d80e0
    MOV ESI,EAX                         ; 004d80e3
    MOV EAX,[0x00680d50]                ; 004d80e5 | g_CScriptInstance | g_CScriptPtr
    PUSH EAX                            ; 004d80ea | g_CScriptInstance
    CALL core_script.cpp_FUN_00559ac0   ; 004d80eb
        ;   XREF to: 00559ac0 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_FUN_00559ac0()
    ADD ESP,0x4                         ; 004d80f0
    MOV EDX,dword ptr [0x00680d50]      ; 004d80f3 | g_CScriptInstance | g_CScriptPtr
    PUSH EDX                            ; 004d80f9 | g_CScriptInstance
    CALL core_script.cpp_FUN_00559ac0   ; 004d80fa
        ;   XREF to: 00559ac0 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_FUN_00559ac0()
    MOV EDX,dword ptr [0x00679398]      ; 004d80ff | g_WindowHeight
    SUB EDX,EAX                         ; 004d8105
    MOV EAX,EDX                         ; 004d8107
    ADD ESP,0x4                         ; 004d8109
    SUB EAX,EDI                         ; 004d810c
    PUSH 0xffff                         ; 004d810e
    MOV EDI,EAX                         ; 004d8113
    CALL engine_3d.c_setRenderAlpha_FUN_00406d80 ; 004d8115
        ;   XREF to: 00406d80 (UNCONDITIONAL_CALL)  ; void engine_3d.c_setRenderAlpha_FUN_00406d80(int alpha_color_value)
    ADD ESP,0x4                         ; 004d811a
    PUSH 0x2d830a8                      ; 004d811d | DAT_02d830a8
    MOV ECX,dword ptr [0x02d831a8]      ; 004d8122 | g_CurrentDisplayText
    PUSH ECX                            ; 004d8128
    PUSH 0x62b265                       ; 004d8129 | = "%d - %s"
    LEA EAX,[ESP + 0x18]                ; 004d812e
    PUSH EAX                            ; 004d8132
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004d8133
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004d8138
    PUSH 0x0                            ; 004d813b
    PUSH 0xf8                           ; 004d813d
    SUB EDI,ESI                         ; 004d8142
    PUSH EDI                            ; 004d8144
    ADD ESI,ESI                         ; 004d8145
    PUSH ESI                            ; 004d8147
    LEA EAX,[ESP + 0x1c]                ; 004d8148
    PUSH EAX                            ; 004d814c
    PUSH EBX                            ; 004d814d
    CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80 ; 004d814e
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80(CBitFont * this_ptr, char * text_string, int x_pos, int y_pos, ...)
    ADD ESP,0x18                        ; 004d8153
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d8156
        ;   Label: LAB_004d8156
    CMP dword ptr [EAX + 0x228],0x0     ; 004d8159
    JNZ 0x004d83f6                      ; 004d8160
        ;   XREF to: 004d83f6 (CONDITIONAL_JUMP)  ; LAB_004d83f6
    CMP dword ptr [EAX + 0x388],0x0     ; 004d8166
    JLE 0x004d83f6                      ; 004d816d
        ;   XREF to: 004d83f6 (CONDITIONAL_JUMP)  ; LAB_004d83f6
    MOV EAX,dword ptr [ESP + 0x110]     ; 004d8173
    MOV EDX,EAX                         ; 004d817a
    SAR EDX,0x1f                        ; 004d817c
    SHL EDX,0x2                         ; 004d817f
    SBB EAX,EDX                         ; 004d8182
    SAR EAX,0x2                         ; 004d8184
    MOV EBX,EAX                         ; 004d8187
    MOV EAX,dword ptr [ESP + 0x114]     ; 004d8189
    MOV EDX,EAX                         ; 004d8190
    MOV ESI,0x28                        ; 004d8192
    SAR EDX,0x1f                        ; 004d8197
    IDIV ESI                            ; 004d819a
    MOV dword ptr [ESP + 0x12c],EAX     ; 004d819c
    MOV EAX,[0x020a5724]                ; 004d81a3 | g_SmallEditorFont
    MOV EDI,dword ptr [0x00679394]      ; 004d81a8 | g_WindowWidth
    MOV dword ptr [ESP + 0x130],EAX     ; 004d81ae
    CMP EDI,0x280                       ; 004d81b5
    JG 0x004d8580                       ; 004d81bb
        ;   XREF to: 004d8580 (CONDITIONAL_JUMP)  ; LAB_004d8580
    CMP dword ptr [0x00679394],0x320    ; 004d81c1 | g_WindowWidth
        ;   Label: LAB_004d81c1
    JLE 0x004d81d9                      ; 004d81cb
        ;   XREF to: 004d81d9 (CONDITIONAL_JUMP)  ; LAB_004d81d9
    MOV EAX,[0x020a5718]                ; 004d81cd | g_MediumFont
    MOV dword ptr [ESP + 0x130],EAX     ; 004d81d2
    PUSH 0x58                           ; 004d81d9
        ;   Label: LAB_004d81d9
    MOV EDX,dword ptr [ESP + 0x134]     ; 004d81db
    PUSH EDX                            ; 004d81e2
    CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0 ; 004d81e3
        ;   XREF to: 004d01d0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004d81e8
    CMP EAX,dword ptr [ESP + 0x12c]     ; 004d81eb
    JLE 0x004d820d                      ; 004d81f2
        ;   XREF to: 004d820d (CONDITIONAL_JUMP)  ; LAB_004d820d
    PUSH 0x58                           ; 004d81f4
    MOV ESI,dword ptr [ESP + 0x134]     ; 004d81f6
    PUSH ESI                            ; 004d81fd
    CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0 ; 004d81fe
        ;   XREF to: 004d01d0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004d8203
    MOV dword ptr [ESP + 0x12c],EAX     ; 004d8206
    MOV EAX,dword ptr [ESP + 0x110]     ; 004d820d
        ;   Label: LAB_004d820d
    MOV EDX,EAX                         ; 004d8214
    MOV ESI,0x50                        ; 004d8216
    SAR EDX,0x1f                        ; 004d821b
    IDIV ESI                            ; 004d821e
    MOV dword ptr [ESP + 0x134],EAX     ; 004d8220
    ADD EAX,EBX                         ; 004d8227
    MOV dword ptr [ESP + 0x118],EAX     ; 004d8229
    MOV EAX,dword ptr [ESP + 0x114]     ; 004d8230
    MOV EDX,EAX                         ; 004d8237
    SAR EDX,0x1f                        ; 004d8239
    IDIV ESI                            ; 004d823c
    MOV ESI,dword ptr [ESP + 0x10c]     ; 004d823e
    SUB ESI,EAX                         ; 004d8245
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d8247
    XOR EDI,EDI                         ; 004d824a
    MOV EDX,dword ptr [EAX + 0x388]     ; 004d824c
    MOV dword ptr [ESP + 0x150],EDI     ; 004d8252
    TEST EDX,EDX                        ; 004d8259
    JLE 0x004d83f6                      ; 004d825b
        ;   XREF to: 004d83f6 (CONDITIONAL_JUMP)  ; LAB_004d83f6
    MOV EDX,dword ptr [ESP + 0x12c]     ; 004d8261
    LEA EBX,[EAX + 0x38c]               ; 004d8268
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d826e
    SUB EAX,EDX                         ; 004d8275
    MOV EDX,EAX                         ; 004d8277
    SAR EDX,0x1f                        ; 004d8279
    SUB EAX,EDX                         ; 004d827c
    SAR EAX,0x1                         ; 004d827e
    MOV dword ptr [ESP + 0x120],EAX     ; 004d8280
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d8287
    MOV dword ptr [ESP + 0x154],EBX     ; 004d828a
    MOV dword ptr [ESP + 0x158],EAX     ; 004d8291
    MOV EBX,dword ptr [ESP + 0x12c]     ; 004d8298
        ;   Label: LAB_004d8298
    MOV EAX,ESI                         ; 004d829f
    SUB EAX,EBX                         ; 004d82a1
    MOV dword ptr [ESP + 0x140],EAX     ; 004d82a3
    MOV dword ptr [ESP + 0x13c],EAX     ; 004d82aa
    MOV EAX,dword ptr [ESP + 0x118]     ; 004d82b1
    MOV dword ptr [ESP + 0x148],EAX     ; 004d82b8
    MOV EAX,dword ptr [ESP + 0x158]     ; 004d82bf
    MOV EDI,0x2                         ; 004d82c6
    MOV EAX,dword ptr [EAX + 0x88c]     ; 004d82cb
    MOV dword ptr [ESP + 0x14c],ESI     ; 004d82d1
    MOV dword ptr [ESP + 0x8],EAX       ; 004d82d8
    MOV EBX,dword ptr [ESP + 0x134]     ; 004d82dc
    FLD float ptr [ESP + 0x8]           ; 004d82e3
    FCOMP double ptr [0x0062b275]       ; 004d82e7 | g_StatusThresholdHigh
    FNSTSW AX                           ; 004d82ed
    SAHF                                ; 004d82ef
    JNC 0x004d82f7                      ; 004d82f0
        ;   XREF to: 004d82f7 (CONDITIONAL_JUMP)  ; LAB_004d82f7
    MOV EDI,0xfb                        ; 004d82f2
    FLD float ptr [ESP + 0x8]           ; 004d82f7
        ;   Label: LAB_004d82f7
    FCOMP double ptr [0x0062b27d]       ; 004d82fb | g_StatusThresholdLow
    FNSTSW AX                           ; 004d8301
    SAHF                                ; 004d8303
    JNC 0x004d830b                      ; 004d8304
        ;   XREF to: 004d830b (CONDITIONAL_JUMP)  ; LAB_004d830b
    MOV EDI,0x1                         ; 004d8306
    PUSH 0x0                            ; 004d830b
        ;   Label: LAB_004d830b
    PUSH 0x0                            ; 004d830d
    MOV EAX,dword ptr [ESP + 0x154]     ; 004d830f
    PUSH EAX                            ; 004d8316
    MOV EDX,dword ptr [ESP + 0x154]     ; 004d8317
    PUSH EDX                            ; 004d831e
    MOV ECX,dword ptr [ESP + 0x14c]     ; 004d831f
    PUSH ECX                            ; 004d8326
    PUSH EBX                            ; 004d8327
    CALL engine_2d.c_fillRectWithBorder_FUN_00403200 ; 004d8328
        ;   XREF to: 00403200 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectWithBorder_FUN_00403200(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x18                        ; 004d832d
    MOV EAX,dword ptr [ESP + 0x148]     ; 004d8330
    SUB EAX,EBX                         ; 004d8337
    INC EAX                             ; 004d8339
    MOV dword ptr [ESP + 0x15c],EAX     ; 004d833a
    FILD dword ptr [ESP + 0x15c]        ; 004d8341
    FMUL float ptr [ESP + 0x8]          ; 004d8348
    CALL crt_math.c_round_FUN_005fe6b0  ; 004d834c
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x144]       ; 004d8351
    MOV EAX,dword ptr [ESP + 0x144]     ; 004d8358
    TEST EAX,EAX                        ; 004d835f
    JLE 0x004d8380                      ; 004d8361
        ;   XREF to: 004d8380 (CONDITIONAL_JUMP)  ; LAB_004d8380
    PUSH EDI                            ; 004d8363
    MOV EDX,dword ptr [ESP + 0x150]     ; 004d8364
    PUSH EDX                            ; 004d836b
    ADD EAX,EBX                         ; 004d836c
    PUSH EAX                            ; 004d836e
    MOV ECX,dword ptr [ESP + 0x148]     ; 004d836f
    PUSH ECX                            ; 004d8376
    PUSH EBX                            ; 004d8377
    CALL engine_2d.c_fillRectColor_FUN_00403170 ; 004d8378
        ;   XREF to: 00403170 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectColor_FUN_00403170(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x14                        ; 004d837d
    PUSH 0x0                            ; 004d8380
        ;   Label: LAB_004d8380
    PUSH 0xf8                           ; 004d8382
    MOV ECX,dword ptr [ESP + 0x148]     ; 004d8387
    PUSH ECX                            ; 004d838e
    MOV EBX,dword ptr [ESP + 0x140]     ; 004d838f
    PUSH EBX                            ; 004d8396
    MOV EDI,dword ptr [ESP + 0x164]     ; 004d8397
    PUSH EDI                            ; 004d839e
    MOV EAX,dword ptr [ESP + 0x144]     ; 004d839f
    PUSH EAX                            ; 004d83a6
    CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80 ; 004d83a7
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80(CBitFont * this_ptr, char * text_string, int x_pos, int y_pos, ...)
    ADD ESP,0x18                        ; 004d83ac
    LEA EBX,[EDI + 0x100]               ; 004d83af
    MOV EDX,dword ptr [ESP + 0x120]     ; 004d83b5
    MOV ECX,dword ptr [ESP + 0x158]     ; 004d83bc
    MOV EDI,dword ptr [ESP + 0x150]     ; 004d83c3
    MOV dword ptr [ESP + 0x154],EBX     ; 004d83ca
    ADD ECX,0x4                         ; 004d83d1
    SUB ESI,EDX                         ; 004d83d4
    MOV EDX,dword ptr [EBP + 0x14]      ; 004d83d6
    INC EDI                             ; 004d83d9
    MOV dword ptr [ESP + 0x158],ECX     ; 004d83da
    MOV ECX,dword ptr [EDX + 0x388]     ; 004d83e1
    MOV dword ptr [ESP + 0x150],EDI     ; 004d83e7
    CMP EDI,ECX                         ; 004d83ee
    JL 0x004d8298                       ; 004d83f0
        ;   XREF to: 004d8298 (CONDITIONAL_JUMP)  ; LAB_004d8298
    MOV ESP,EBP                         ; 004d83f6
        ;   Label: LAB_004d83f6
    POP EBP                             ; 004d83f8
    POP EDI                             ; 004d83f9
    POP ESI                             ; 004d83fa
    POP EBX                             ; 004d83fb
    RET                                 ; 004d83fc
    FLD1                                ; 004d83fd
        ;   Label: LAB_004d83fd
    FLD float ptr [EAX + 0x384]         ; 004d83ff
    FSTP double ptr [ESP]               ; 004d8405
    FCOMP double ptr [ESP]              ; 004d8408
    FNSTSW AX                           ; 004d840b
    SAHF                                ; 004d840d
    JBE 0x004d8576                      ; 004d840e
        ;   XREF to: 004d8576 (CONDITIONAL_JUMP)  ; LAB_004d8576
    FLD double ptr [ESP]                ; 004d8414
    FMUL double ptr [0x0062b26d]        ; 004d8417 | g_AlphaConversionFactor
    CALL crt_math.c_round_FUN_005fe6b0  ; 004d841d
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x15c]       ; 004d8422
    MOV ECX,dword ptr [ESP + 0x15c]     ; 004d8429
    PUSH ECX                            ; 004d8430
    CALL engine_3d.c_setRenderAlpha_FUN_00406d80 ; 004d8431
        ;   XREF to: 00406d80 (UNCONDITIONAL_CALL)  ; void engine_3d.c_setRenderAlpha_FUN_00406d80(int alpha_color_value)
        ;   Label: LAB_004d8431
    ADD ESP,0x4                         ; 004d8436
    MOV EAX,[0x020a5720]                ; 004d8439 | g_ThemeFont
    MOV dword ptr [ESP + 0x138],EAX     ; 004d843e
    MOV EAX,[0x03275a28]                ; 004d8445 | g_ScreenHeightForFonts
    CMP EAX,0x1e0                       ; 004d844a
    JGE 0x004d845d                      ; 004d844f
        ;   XREF to: 004d845d (CONDITIONAL_JUMP)  ; LAB_004d845d
    MOV EAX,[0x020a5724]                ; 004d8451 | g_SmallEditorFont
    MOV dword ptr [ESP + 0x138],EAX     ; 004d8456
    MOV EDX,dword ptr [0x03275a28]      ; 004d845d | g_ScreenHeightForFonts
        ;   Label: LAB_004d845d
    LEA EAX,[EDX*0x8 + 0x0]             ; 004d8463
    ADD EDX,EAX                         ; 004d846a
    MOV EBX,0xa                         ; 004d846c
    MOV EAX,EDX                         ; 004d8471
    SAR EDX,0x1f                        ; 004d8473
    IDIV EBX                            ; 004d8476
    PUSH EAX                            ; 004d8478
    PUSH 0x100                          ; 004d8479
    PUSH EBX                            ; 004d847e
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d847f
    PUSH 0x2d7b8e0                      ; 004d8482 | g_WrappedTextBuffer
    ADD EAX,0x284                       ; 004d8487
    PUSH EAX                            ; 004d848c
    MOV EBX,dword ptr [ESP + 0x14c]     ; 004d848d
    PUSH EBX                            ; 004d8494
    CALL engine_font.cpp_CBitFont_wrapText_FUN_004d0010 ; 004d8495
        ;   XREF to: 004d0010 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_wrapText_FUN_004d0010(CBitFont * this_ptr, char * source_text, char * dest_buffer, int max_lines, ...)
    ADD ESP,0x18                        ; 004d849a
    PUSH 0x58                           ; 004d849d
    MOV ESI,dword ptr [ESP + 0x13c]     ; 004d849f
    PUSH ESI                            ; 004d84a6
    MOV EBX,EAX                         ; 004d84a7
    MOV dword ptr [ESP + 0x130],EAX     ; 004d84a9
    CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0 ; 004d84b0
        ;   XREF to: 004d01d0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0(CBitFont * this_ptr, int char_code)
    IMUL EBX,EAX                        ; 004d84b5
    ADD ESP,0x8                         ; 004d84b8
    MOV ESI,EAX                         ; 004d84bb
    MOV dword ptr [ESP + 0x11c],EAX     ; 004d84bd
    MOV EAX,[0x00679398]                ; 004d84c4 | g_WindowHeight
    MOV EDI,dword ptr [0x00680d50]      ; 004d84c9 | g_CScriptPtr
    SUB EAX,EBX                         ; 004d84cf
    PUSH EDI                            ; 004d84d1 | g_CScriptInstance
    MOV EBX,EAX                         ; 004d84d2
    CALL core_script.cpp_FUN_00559ac0   ; 004d84d4
        ;   XREF to: 00559ac0 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_FUN_00559ac0()
    SUB EBX,EAX                         ; 004d84d9
    MOV EAX,EBX                         ; 004d84db
    MOV EDX,dword ptr [0x020a5724]      ; 004d84dd | g_SmallEditorFont
    SUB EAX,ESI                         ; 004d84e3
    ADD ESP,0x4                         ; 004d84e5
    MOV ESI,EAX                         ; 004d84e8
    CMP EDX,dword ptr [ESP + 0x138]     ; 004d84ea
    JNZ 0x004d84f6                      ; 004d84f1
        ;   XREF to: 004d84f6 (CONDITIONAL_JUMP)  ; LAB_004d84f6
    SUB ESI,0x7                         ; 004d84f3
    MOV ECX,dword ptr [ESP + 0x128]     ; 004d84f6
        ;   Label: LAB_004d84f6
    MOV EAX,[0x00679394]                ; 004d84fd | g_WindowWidth
    XOR EDI,EDI                         ; 004d8502
    DEC EAX                             ; 004d8504
    TEST ECX,ECX                        ; 004d8505
    JLE 0x004d8090                      ; 004d8507
        ;   XREF to: 004d8090 (CONDITIONAL_JUMP)  ; LAB_004d8090
    MOV EBX,0x2d7b8e0                   ; 004d850d | g_WrappedTextBuffer
    MOV dword ptr [ESP + 0x124],EAX     ; 004d8512
    PUSH EBX                            ; 004d8519 | g_WrappedTextBuffer | DAT_02d7b9e0
        ;   Label: LAB_004d8519
    MOV EAX,dword ptr [ESP + 0x13c]     ; 004d851a
    PUSH EAX                            ; 004d8521
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80 ; 004d8522
        ;   XREF to: 004cfe80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80(CBitFont * this_ptr, char * text)
    ADD ESP,0x8                         ; 004d8527
    MOV EDX,dword ptr [ESP + 0x124]     ; 004d852a
    SUB EDX,EAX                         ; 004d8531
    MOV EAX,EDX                         ; 004d8533
    SAR EDX,0x1f                        ; 004d8535
    SUB EAX,EDX                         ; 004d8538
    SAR EAX,0x1                         ; 004d853a
    PUSH 0x0                            ; 004d853c
    PUSH 0xf8                           ; 004d853e
    PUSH ESI                            ; 004d8543
    PUSH EAX                            ; 004d8544
    PUSH EBX                            ; 004d8545 | g_WrappedTextBuffer
    MOV EDX,dword ptr [ESP + 0x14c]     ; 004d8546
    PUSH EDX                            ; 004d854d
    INC EDI                             ; 004d854e
    CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80 ; 004d854f
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80(CBitFont * this_ptr, char * text_string, int x_pos, int y_pos, ...)
    ADD ESP,0x18                        ; 004d8554
    ADD EBX,0x100                       ; 004d8557
    MOV ECX,dword ptr [ESP + 0x11c]     ; 004d855d
    MOV EAX,dword ptr [ESP + 0x128]     ; 004d8564
    ADD ESI,ECX                         ; 004d856b
    CMP EDI,EAX                         ; 004d856d
    JL 0x004d8519                       ; 004d856f
        ;   XREF to: 004d8519 (CONDITIONAL_JUMP)  ; LAB_004d8519
    JMP 0x004d8090                      ; 004d8571
        ;   XREF to: 004d8090 (UNCONDITIONAL_JUMP)  ; LAB_004d8090
    PUSH 0xffff                         ; 004d8576
        ;   Label: LAB_004d8576
    JMP 0x004d8431                      ; 004d857b
        ;   XREF to: 004d8431 (UNCONDITIONAL_JUMP)  ; LAB_004d8431
    MOV EAX,[0x020a571c]                ; 004d8580 | g_TinyFont
        ;   Label: LAB_004d8580
    MOV dword ptr [ESP + 0x130],EAX     ; 004d8585
    JMP 0x004d81c1                      ; 004d858c
        ;   XREF to: 004d81c1 (UNCONDITIONAL_JUMP)  ; LAB_004d81c1

