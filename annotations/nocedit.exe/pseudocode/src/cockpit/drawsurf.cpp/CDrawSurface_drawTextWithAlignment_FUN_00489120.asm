; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120(CDrawSurface * this_ptr, int x, int y, int width, int height, char * text, int alignment_mode)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
; int              Stack[0x10]:4   width
; int              Stack[0x14]:4   height
; char *           Stack[0x18]:4   text
; int              Stack[0x1c]:4   alignment_mode
; Local Variables:
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[8]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredBoth_FUN_00489730 at 0048974c
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidth_FUN_004899c0 at 004899e4
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInArea_FUN_004898e0 at 00489900
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBounds_FUN_00489800 at 00489820
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCentered_FUN_00489590 at 004895ac
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVCentered_FUN_00489660 at 0048967c
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVariant_FUN_004894c0 at 004894dc
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAligned_FUN_004893f0 at 0048940c
;
; Referenced Globals:
;   void* switchdataD_004890d4 = 004891dd
;   void* switchdataD_004890f4 = 00489336
;   int g_CurrentDrawColor
;   int g_PaletteColorIndex
;   CBitFont* g_CurrentFont
;   int g_ClipLeft
;   int g_ClipTop
;   int g_ClipRight
;   int g_ClipBottom
;
; Called Functions:
;   engine_2d.c_disableTextWrap_FUN_00402820
;   engine_2d.c_drawTextCenteredAtColor_FUN_004025f0
;   engine_2d.c_drawTextCenteredColor_FUN_004026c0
;   engine_2d.c_drawTextColor_FUN_00402430
;   engine_2d.c_drawTextRightAlignedColor_FUN_00402530
;   engine_2d.c_getTextColor_FUN_00402830
;   engine_2d.c_getTextWrapEnabled_FUN_004027f0
;   engine_2d.c_setTextColor_FUN_00402840
;   engine_2d.c_setTextWrapEnabled_FUN_00402800
;   engine_font.cpp_CBitFont_drawTextCenter_FUN_004cdde0
;   engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_004cdee0
;   engine_font.cpp_CBitFont_drawTextRight_FUN_004cdbf0
;   engine_font.cpp_CBitFont_drawTextRight_FUN_004cdce0
;   engine_font.cpp_getDefaultTextColor_FUN_004ce220
;   engine_font.cpp_setDefaultTextColor_FUN_004ce230
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00489120
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120
    PUSH ESI                            ; 00489121
    PUSH EDI                            ; 00489122
    PUSH EBP                            ; 00489123
    SUB ESP,0x20                        ; 00489124
    MOV EAX,dword ptr [ESP + 0x34]      ; 00489127
    MOV EDI,dword ptr [ESP + 0x38]      ; 0048912b
    MOV ESI,dword ptr [ESP + 0x3c]      ; 0048912f
    MOV EBX,dword ptr [ESP + 0x44]      ; 00489133
    MOV EBP,dword ptr [ESP + 0x48]      ; 00489137
    MOV ECX,dword ptr [ESP + 0x40]      ; 0048913b
    MOV EDX,dword ptr [EAX + 0x8]       ; 0048913f
    ADD ECX,EDX                         ; 00489142
    ADD ESI,EDX                         ; 00489144
    MOV EDX,dword ptr [EAX + 0xc]       ; 00489146
    ADD EBX,EDX                         ; 00489149
    ADD EBP,EDX                         ; 0048914b
    MOV EDX,dword ptr [0x02d02558]      ; 0048914d | int g_ClipLeft
    MOV dword ptr [ESP + 0x4],EDX       ; 00489153
    MOV EDX,dword ptr [0x02d02560]      ; 00489157 | int g_ClipRight
    MOV dword ptr [ESP + 0x14],EDX      ; 0048915d
    MOV EDX,dword ptr [0x02d0255c]      ; 00489161 | int g_ClipTop
    MOV dword ptr [ESP + 0x8],EDX       ; 00489167
    MOV EDX,dword ptr [0x02d02564]      ; 0048916b | int g_ClipBottom
    MOV dword ptr [ESP + 0x10],EDX      ; 00489171
    MOV EDX,dword ptr [EAX + 0x10]      ; 00489175
    MOV dword ptr [0x02d02558],EDX      ; 00489178 | int g_ClipLeft
    MOV EDX,dword ptr [EAX + 0x18]      ; 0048917e
    MOV dword ptr [0x02d02560],EDX      ; 00489181 | int g_ClipRight
    MOV EDX,dword ptr [EAX + 0x14]      ; 00489187
    MOV EAX,dword ptr [EAX + 0x1c]      ; 0048918a
    MOV [0x02d02564],EAX                ; 0048918d | int g_ClipBottom
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00489192
    SHL EAX,0x2                         ; 00489196
    MOV dword ptr [ESP + 0x40],ECX      ; 00489199
    MOV dword ptr [ESP + 0x1c],EAX      ; 0048919d
    MOV EAX,[0x02c6d558]                ; 004891a1 | CBitFont * g_CurrentFont
    MOV dword ptr [0x02d0255c],EDX      ; 004891a6 | int g_ClipTop
    TEST EAX,EAX                        ; 004891ac
    JZ 0x004893ab                       ; 004891ae | LAB_004893ab
        ;   XREF to: 004893ab (CONDITIONAL_JUMP)
    CALL engine_font.cpp_getDefaultTextColor_FUN_004ce220 ; 004891b4 | int engine_font.cpp_getDefaultTextColor_FUN_004ce220()
        ;   XREF to: 004ce220 (UNCONDITIONAL_CALL)
    MOV ECX,dword ptr [0x02c6d550]      ; 004891b9 | int g_CurrentDrawColor
    PUSH ECX                            ; 004891bf
    MOV dword ptr [ESP + 0x4],EAX       ; 004891c0
    CALL engine_font.cpp_setDefaultTextColor_FUN_004ce230 ; 004891c4 | void engine_font.cpp_setDefaultTextColor_FUN_004ce230(int text_color)
        ;   XREF to: 004ce230 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004891c9
    CMP dword ptr [ESP + 0x4c],0x7      ; 004891cc
    JA 0x004891f3                       ; 004891d1 | default
        ;   XREF to: 004891f3 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004891d3
    JMP dword ptr [EAX + 0x4890d4]      ; 004891d7 | void * switchdataD_004890d4
        ;   Label: switchD
    PUSH EDI                            ; 004891dd
        ;   Label: caseD_0
    PUSH -0x1                           ; 004891de
    PUSH -0x3                           ; 004891e0
    PUSH EBX                            ; 004891e2
    PUSH ESI                            ; 004891e3
    MOV EBP,dword ptr [0x02c6d558]      ; 004891e4 | CBitFont * g_CurrentFont
    PUSH EBP                            ; 004891ea
        ;   Label: LAB_004891ea
    CALL engine_font.cpp_CBitFont_drawTextRight_FUN_004cdbf0 ; 004891eb | int engine_font.cpp_CBitFont_drawTextRight_FUN_004cdbf0(CBitFont * this_ptr, char * text_string, int x_pos, int y_pos, ...)
        ;   XREF to: 004cdbf0 (UNCONDITIONAL_CALL)
    ADD ESP,0x18                        ; 004891f0
        ;   Label: LAB_004891f0
    MOV EAX,dword ptr [ESP]             ; 004891f3
        ;   Label: default
    PUSH EAX                            ; 004891f6
    CALL engine_font.cpp_setDefaultTextColor_FUN_004ce230 ; 004891f7 | void engine_font.cpp_setDefaultTextColor_FUN_004ce230(int text_color)
        ;   XREF to: 004ce230 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004891fc
        ;   Label: LAB_004891fc
    MOV EAX,dword ptr [ESP + 0x4]       ; 004891ff
    MOV [0x02d02558],EAX                ; 00489203 | int g_ClipLeft
    MOV EAX,dword ptr [ESP + 0x14]      ; 00489208
    MOV [0x02d02560],EAX                ; 0048920c | int g_ClipRight
    MOV EAX,dword ptr [ESP + 0x8]       ; 00489211
    MOV [0x02d0255c],EAX                ; 00489215 | int g_ClipTop
    MOV EAX,dword ptr [ESP + 0x10]      ; 0048921a
    MOV [0x02d02564],EAX                ; 0048921e | int g_ClipBottom
    ADD ESP,0x20                        ; 00489223
    POP EBP                             ; 00489226
    POP EDI                             ; 00489227
    POP ESI                             ; 00489228
    POP EBX                             ; 00489229
    RET                                 ; 0048922a
    PUSH EDI                            ; 0048922b
        ;   Label: caseD_1
    PUSH -0x1                           ; 0048922c
    PUSH -0x3                           ; 0048922e
    PUSH EBX                            ; 00489230
    PUSH ESI                            ; 00489231
    MOV EDI,dword ptr [0x02c6d558]      ; 00489232 | CBitFont * g_CurrentFont
    PUSH EDI                            ; 00489238
    CALL engine_font.cpp_CBitFont_drawTextRight_FUN_004cdce0 ; 00489239 | int engine_font.cpp_CBitFont_drawTextRight_FUN_004cdce0(CBitFont * this_ptr, int right_edge_x, int y_pos, int color_mode, ...)
        ;   XREF to: 004cdce0 (UNCONDITIONAL_CALL)
    JMP 0x004891f0                      ; 0048923e | LAB_004891f0
        ;   XREF to: 004891f0 (UNCONDITIONAL_JUMP)
    PUSH EDI                            ; 00489240
        ;   Label: caseD_2
    PUSH -0x1                           ; 00489241
    PUSH -0x3                           ; 00489243
    PUSH EBX                            ; 00489245
    PUSH ESI                            ; 00489246
    MOV ESI,dword ptr [0x02c6d558]      ; 00489247 | CBitFont * g_CurrentFont
    PUSH ESI                            ; 0048924d
    CALL engine_font.cpp_CBitFont_drawTextCenter_FUN_004cdde0 ; 0048924e | int engine_font.cpp_CBitFont_drawTextCenter_FUN_004cdde0(CBitFont * this_ptr, int center_x, int y_pos, int color_mode, ...)
        ;   XREF to: 004cdde0 (UNCONDITIONAL_CALL)
    JMP 0x004891f0                      ; 00489253 | LAB_004891f0
        ;   XREF to: 004891f0 (UNCONDITIONAL_JUMP)
    MOV EBP,dword ptr [0x02c6d558]      ; 00489255 | CBitFont * g_CurrentFont
        ;   Label: caseD_3
    MOV EDX,dword ptr [EBP + 0x3170]    ; 0048925b
    MOV EAX,EDX                         ; 00489261
    SAR EDX,0x1f                        ; 00489263
    SUB EAX,EDX                         ; 00489266
    SAR EAX,0x1                         ; 00489268
    PUSH EDI                            ; 0048926a
    PUSH -0x1                           ; 0048926b
    PUSH -0x3                           ; 0048926d
    SUB EBX,EAX                         ; 0048926f
    PUSH EBX                            ; 00489271
    PUSH ESI                            ; 00489272
    JMP 0x004891ea                      ; 00489273 | LAB_004891ea
        ;   XREF to: 004891ea (UNCONDITIONAL_JUMP)
    MOV EBP,dword ptr [0x02c6d558]      ; 00489278 | CBitFont * g_CurrentFont
        ;   Label: caseD_4
    MOV EDX,dword ptr [EBP + 0x3170]    ; 0048927e
    MOV EAX,EDX                         ; 00489284
    SAR EDX,0x1f                        ; 00489286
    SUB EAX,EDX                         ; 00489289
    SAR EAX,0x1                         ; 0048928b
    PUSH EDI                            ; 0048928d
    PUSH -0x1                           ; 0048928e
    PUSH -0x3                           ; 00489290
    SUB EBX,EAX                         ; 00489292
    PUSH EBX                            ; 00489294
    PUSH ESI                            ; 00489295
    PUSH EBP                            ; 00489296
    CALL engine_font.cpp_CBitFont_drawTextCenter_FUN_004cdde0 ; 00489297 | int engine_font.cpp_CBitFont_drawTextCenter_FUN_004cdde0(CBitFont * this_ptr, int center_x, int y_pos, int color_mode, ...)
        ;   XREF to: 004cdde0 (UNCONDITIONAL_CALL)
    JMP 0x004891f0                      ; 0048929c | LAB_004891f0
        ;   XREF to: 004891f0 (UNCONDITIONAL_JUMP)
    PUSH EDI                            ; 004892a1
        ;   Label: caseD_5
    PUSH -0x1                           ; 004892a2
    PUSH -0x3                           ; 004892a4
    PUSH EBX                            ; 004892a6
    MOV ECX,dword ptr [ESP + 0x50]      ; 004892a7
    PUSH ECX                            ; 004892ab
    PUSH ESI                            ; 004892ac
    MOV EBX,dword ptr [0x02c6d558]      ; 004892ad | CBitFont * g_CurrentFont
    PUSH EBX                            ; 004892b3
    CALL engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_004cdee0 ; 004892b4 | int engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_004cdee0(CBitFont * this_ptr, int left_x, int right_x, int y_pos, ...)
        ;   XREF to: 004cdee0 (UNCONDITIONAL_CALL)
    ADD ESP,0x1c                        ; 004892b9
    JMP 0x004891f3                      ; 004892bc | default
        ;   XREF to: 004891f3 (UNCONDITIONAL_JUMP)
    ADD EBX,EBP                         ; 004892c1
        ;   Label: caseD_6
    MOV EBP,dword ptr [0x02c6d558]      ; 004892c3 | CBitFont * g_CurrentFont
    LEA EDX,[EBX + 0x1]                 ; 004892c9
    MOV EAX,dword ptr [EBP + 0x3170]    ; 004892cc
    SUB EDX,EAX                         ; 004892d2
    MOV EAX,EDX                         ; 004892d4
    SAR EDX,0x1f                        ; 004892d6
    SUB EAX,EDX                         ; 004892d9
    SAR EAX,0x1                         ; 004892db
    PUSH EDI                            ; 004892dd
    PUSH -0x1                           ; 004892de
    PUSH -0x3                           ; 004892e0
    PUSH EAX                            ; 004892e2
    PUSH ESI                            ; 004892e3
    JMP 0x004891ea                      ; 004892e4 | LAB_004891ea
        ;   XREF to: 004891ea (UNCONDITIONAL_JUMP)
    ADD EBX,EBP                         ; 004892e9
        ;   Label: caseD_7
    MOV EBP,dword ptr [0x02c6d558]      ; 004892eb | CBitFont * g_CurrentFont
    INC EBX                             ; 004892f1
    MOV EDX,dword ptr [EBP + 0x3170]    ; 004892f2
    SUB EBX,EDX                         ; 004892f8
    MOV EDX,EBX                         ; 004892fa
    MOV EAX,EBX                         ; 004892fc
    SAR EDX,0x1f                        ; 004892fe
    SUB EAX,EDX                         ; 00489301
    SAR EAX,0x1                         ; 00489303
    PUSH EDI                            ; 00489305
    PUSH -0x1                           ; 00489306
    PUSH -0x3                           ; 00489308
    PUSH EAX                            ; 0048930a
    MOV EDX,dword ptr [ESP + 0x50]      ; 0048930b
    PUSH EDX                            ; 0048930f
    PUSH ESI                            ; 00489310
    PUSH EBP                            ; 00489311
    CALL engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_004cdee0 ; 00489312 | int engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_004cdee0(CBitFont * this_ptr, int left_x, int right_x, int y_pos, ...)
        ;   XREF to: 004cdee0 (UNCONDITIONAL_CALL)
    ADD ESP,0x1c                        ; 00489317
    JMP 0x004891f3                      ; 0048931a | default
        ;   XREF to: 004891f3 (UNCONDITIONAL_JUMP)
    PUSH EBX                            ; 0048931f
        ;   Label: caseD_1
    PUSH ESI                            ; 00489320
    PUSH EDI                            ; 00489321
    CALL engine_2d.c_drawTextRightAlignedColor_FUN_00402530 ; 00489322 | void engine_2d.c_drawTextRightAlignedColor_FUN_00402530(char * text, int y_pos, int right_x)
        ;   XREF to: 00402530 (UNCONDITIONAL_CALL)
    JMP 0x0048933e                      ; 00489327 | LAB_0048933e
        ;   XREF to: 0048933e (UNCONDITIONAL_JUMP)
    PUSH EBX                            ; 00489329
        ;   Label: caseD_2
    PUSH ESI                            ; 0048932a
    PUSH EDI                            ; 0048932b
    CALL engine_2d.c_drawTextCenteredAtColor_FUN_004025f0 ; 0048932c | void engine_2d.c_drawTextCenteredAtColor_FUN_004025f0(char * text, int center_x, int y_pos)
        ;   XREF to: 004025f0 (UNCONDITIONAL_CALL)
    JMP 0x0048933e                      ; 00489331 | LAB_0048933e
        ;   XREF to: 0048933e (UNCONDITIONAL_JUMP)
    SUB EBX,0x5                         ; 00489333
        ;   Label: caseD_3
    PUSH EBX                            ; 00489336
        ;   Label: caseD_0
    PUSH ESI                            ; 00489337
        ;   Label: LAB_00489337
    PUSH EDI                            ; 00489338
    CALL engine_2d.c_drawTextColor_FUN_00402430 ; 00489339 | void engine_2d.c_drawTextColor_FUN_00402430(char * text, int x_pos, int y_pos)
        ;   XREF to: 00402430 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0048933e
        ;   Label: LAB_0048933e
    MOV EAX,dword ptr [ESP + 0x18]      ; 00489341
        ;   Label: default
    PUSH EAX                            ; 00489345
    CALL engine_2d.c_setTextColor_FUN_00402840 ; 00489346 | void engine_2d.c_setTextColor_FUN_00402840(int color)
        ;   XREF to: 00402840 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0048934b
    MOV EDX,dword ptr [ESP + 0xc]       ; 0048934e
    PUSH EDX                            ; 00489352
    CALL engine_2d.c_setTextWrapEnabled_FUN_00402800 ; 00489353 | void engine_2d.c_setTextWrapEnabled_FUN_00402800(int enabled)
        ;   XREF to: 00402800 (UNCONDITIONAL_CALL)
    JMP 0x004891fc                      ; 00489358 | LAB_004891fc
        ;   XREF to: 004891fc (UNCONDITIONAL_JUMP)
    SUB EBX,0x5                         ; 0048935d
        ;   Label: caseD_4
    PUSH EBX                            ; 00489360
    PUSH ESI                            ; 00489361
    PUSH EDI                            ; 00489362
    CALL engine_2d.c_drawTextCenteredAtColor_FUN_004025f0 ; 00489363 | void engine_2d.c_drawTextCenteredAtColor_FUN_004025f0(char * text, int center_x, int y_pos)
        ;   XREF to: 004025f0 (UNCONDITIONAL_CALL)
    JMP 0x0048933e                      ; 00489368 | LAB_0048933e
        ;   XREF to: 0048933e (UNCONDITIONAL_JUMP)
    PUSH EBX                            ; 0048936a
        ;   Label: caseD_5
    MOV EBP,dword ptr [ESP + 0x44]      ; 0048936b
    PUSH EBP                            ; 0048936f
    PUSH ESI                            ; 00489370
    PUSH EDI                            ; 00489371
    CALL engine_2d.c_drawTextCenteredColor_FUN_004026c0 ; 00489372 | void engine_2d.c_drawTextCenteredColor_FUN_004026c0(char * text, int left_x, int right_x, int y_pos)
        ;   XREF to: 004026c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00489377
    JMP 0x00489341                      ; 0048937a | default
        ;   XREF to: 00489341 (UNCONDITIONAL_JUMP)
    LEA EDX,[EBX + EBP*0x1 + -0xa]      ; 0048937c
        ;   Label: caseD_6
    MOV EAX,EDX                         ; 00489380
    SAR EDX,0x1f                        ; 00489382
    SUB EAX,EDX                         ; 00489385
    SAR EAX,0x1                         ; 00489387
    PUSH EAX                            ; 00489389
    JMP 0x00489337                      ; 0048938a | LAB_00489337
        ;   XREF to: 00489337 (UNCONDITIONAL_JUMP)
    LEA EDX,[EBX + EBP*0x1 + -0xa]      ; 0048938c
        ;   Label: caseD_7
    MOV EAX,EDX                         ; 00489390
    SAR EDX,0x1f                        ; 00489392
    SUB EAX,EDX                         ; 00489395
    SAR EAX,0x1                         ; 00489397
    PUSH EAX                            ; 00489399
    MOV EBX,dword ptr [ESP + 0x44]      ; 0048939a
    PUSH EBX                            ; 0048939e
    PUSH ESI                            ; 0048939f
    PUSH EDI                            ; 004893a0
    CALL engine_2d.c_drawTextCenteredColor_FUN_004026c0 ; 004893a1 | void engine_2d.c_drawTextCenteredColor_FUN_004026c0(char * text, int left_x, int right_x, int y_pos)
        ;   XREF to: 004026c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004893a6
    JMP 0x00489341                      ; 004893a9 | default
        ;   XREF to: 00489341 (UNCONDITIONAL_JUMP)
    CALL engine_2d.c_getTextWrapEnabled_FUN_004027f0 ; 004893ab | int engine_2d.c_getTextWrapEnabled_FUN_004027f0()
        ;   Label: LAB_004893ab
        ;   XREF to: 004027f0 (UNCONDITIONAL_CALL)
    MOV dword ptr [ESP + 0xc],EAX       ; 004893b0
    CALL engine_2d.c_getTextColor_FUN_00402830 ; 004893b4 | int engine_2d.c_getTextColor_FUN_00402830()
        ;   XREF to: 00402830 (UNCONDITIONAL_CALL)
    MOV dword ptr [ESP + 0x18],EAX      ; 004893b9
    CALL engine_2d.c_disableTextWrap_FUN_00402820 ; 004893bd | void engine_2d.c_disableTextWrap_FUN_00402820()
        ;   XREF to: 00402820 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [0x02c6d554]      ; 004893c2 | int g_PaletteColorIndex
    PUSH EDX                            ; 004893c8
    CALL engine_2d.c_setTextColor_FUN_00402840 ; 004893c9 | void engine_2d.c_setTextColor_FUN_00402840(int color)
        ;   XREF to: 00402840 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004893ce
    CMP dword ptr [ESP + 0x4c],0x7      ; 004893d1
    JA 0x00489341                       ; 004893d6 | default
        ;   XREF to: 00489341 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004893dc
    JMP dword ptr [EAX + 0x4890f4]      ; 004893e0 | void * switchdataD_004890f4
        ;   Label: switchD

