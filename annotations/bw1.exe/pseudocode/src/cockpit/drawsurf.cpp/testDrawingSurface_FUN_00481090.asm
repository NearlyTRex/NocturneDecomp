; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_testDrawingSurface_FUN_00481090(CBitFont *test_font)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   test_font
;
; Referenced Globals:
;   undefined4 DAT_00612558
;   undefined4 DAT_0061b498
;   undefined4 DAT_0061b49c
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_0047ead0
;   cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromBottomLeft_FUN_0047ec20
;   cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromBottomRight_FUN_0047ec50
;   cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromTopLeft_FUN_0047ebc0
;   cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromTopRight_FUN_0047ebf0
;   cockpit_drawsurf.cpp_CDrawSurface_drawClippedLine_FUN_0047ed30
;   cockpit_drawsurf.cpp_CDrawSurface_drawSurfaceBorder_FUN_0047f8c0
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurfacePrintf_FUN_00480fa0
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidthPrintf_FUN_00480d90
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBoundsWrapper_FUN_00480b90
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredWrapper_FUN_00480920
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00480780
;   cockpit_drawsurf.cpp_CDrawSurface_fillFullSurface_FUN_0047ffd0
;   cockpit_drawsurf.cpp_CDrawSurface_initFromParent_FUN_0047e240
;   cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0047e870
;   ... and 11 more
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00481090
        ;   Label: cockpit_drawsurf.cpp_testDrawingSurface_FUN_00481090
    PUSH EBP                            ; 00481091
    SUB ESP,0xbc                        ; 00481092
    MOV ESI,dword ptr [ESP + 0xc8]      ; 00481098
    MOV EDX,dword ptr [0x0061b498]      ; 0048109f | DAT_0061b498
    CMP EDX,0x280                       ; 004810a5
    JL 0x004810bb                       ; 004810ab
        ;   XREF to: 004810bb (CONDITIONAL_JUMP)  ; LAB_004810bb
    MOV ECX,dword ptr [0x0061b49c]      ; 004810ad | DAT_0061b49c
    CMP ECX,0x1e0                       ; 004810b3
    JGE 0x004810c4                      ; 004810b9
        ;   XREF to: 004810c4 (CONDITIONAL_JUMP)  ; LAB_004810c4
    ADD ESP,0xbc                        ; 004810bb
        ;   Label: LAB_004810bb
    POP EBP                             ; 004810c1
    POP ESI                             ; 004810c2
    RET                                 ; 004810c3
    PUSH EDI                            ; 004810c4
        ;   Label: LAB_004810c4
    PUSH EBX                            ; 004810c5
    MOV EAX,EDX                         ; 004810c6
    SAR EDX,0x1f                        ; 004810c8
    SUB EAX,EDX                         ; 004810cb
    SAR EAX,0x1                         ; 004810cd
    MOV EBX,EAX                         ; 004810cf
    MOV EDX,ECX                         ; 004810d1
    MOV EAX,ECX                         ; 004810d3
    SAR EDX,0x1f                        ; 004810d5
    SUB EAX,EDX                         ; 004810d8
    SAR EAX,0x1                         ; 004810da
    PUSH 0x0                            ; 004810dc
    PUSH 0x65                           ; 004810de
    PUSH 0xc9                           ; 004810e0
    PUSH EAX                            ; 004810e5
    PUSH EBX                            ; 004810e6
    LEA EAX,[ESP + 0x7c]                ; 004810e7
    PUSH EAX                            ; 004810eb
    CALL cockpit_drawsurf.cpp_CDrawSurface_initFromParent_FUN_0047e240 ; 004810ec
        ;   XREF to: 0047e240 (UNCONDITIONAL_CALL)  ; CDrawSurface * cockpit_drawsurf.cpp_CDrawSurface_initFromParent_FUN_0047e240(CDrawSurface * this_ptr, int x, int y, int width, ...)
    ADD ESP,0x18                        ; 004810f1
    LEA EAX,[ESP + 0x68]                ; 004810f4
    PUSH EAX                            ; 004810f8
    PUSH 0xb                            ; 004810f9
    PUSH 0x15                           ; 004810fb
    PUSH 0x8                            ; 004810fd
    PUSH 0xc                            ; 004810ff
    LEA EAX,[ESP + 0x3c]                ; 00481101
    PUSH EAX                            ; 00481105
    CALL cockpit_drawsurf.cpp_CDrawSurface_initFromParent_FUN_0047e240 ; 00481106
        ;   XREF to: 0047e240 (UNCONDITIONAL_CALL)  ; CDrawSurface * cockpit_drawsurf.cpp_CDrawSurface_initFromParent_FUN_0047e240(CDrawSurface * this_ptr, int x, int y, int width, ...)
    ADD ESP,0x18                        ; 0048110b
    LEA EAX,[ESP + 0x68]                ; 0048110e
    PUSH EAX                            ; 00481112
    PUSH 0xa                            ; 00481113
    PUSH 0x14                           ; 00481115
    PUSH 0x5f                           ; 00481117
    PUSH 0xbe                           ; 00481119
    LEA EAX,[ESP + 0x1c]                ; 0048111e
    PUSH EAX                            ; 00481122
    CALL cockpit_drawsurf.cpp_CDrawSurface_initFromParent_FUN_0047e240 ; 00481123
        ;   XREF to: 0047e240 (UNCONDITIONAL_CALL)  ; CDrawSurface * cockpit_drawsurf.cpp_CDrawSurface_initFromParent_FUN_0047e240(CDrawSurface * this_ptr, int x, int y, int width, ...)
    ADD ESP,0x18                        ; 00481128
    PUSH 0x80                           ; 0048112b
    PUSH 0x80                           ; 00481130
    PUSH 0x80                           ; 00481135
    CALL cockpit_drawsurf.cpp_FUN_0047e5c0 ; 0048113a
        ;   XREF to: 0047e5c0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_FUN_0047e5c0(int red, int green, int blue)
    ADD ESP,0xc                         ; 0048113f
    LEA EAX,[ESP + 0x68]                ; 00481142
    PUSH EAX                            ; 00481146
    CALL cockpit_drawsurf.cpp_CDrawSurface_fillFullSurface_FUN_0047ffd0 ; 00481147
        ;   XREF to: 0047ffd0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_fillFullSurface_FUN_0047ffd0(CDrawSurface * this_ptr)
    ADD ESP,0x4                         ; 0048114c
    PUSH 0x7                            ; 0048114f
    CALL cockpit_drawsurf.cpp_setColor_FUN_0047e3b0 ; 00481151
        ;   XREF to: 0047e3b0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_setColor_FUN_0047e3b0(int color_value)
    ADD ESP,0x4                         ; 00481156
    LEA EAX,[ESP + 0x68]                ; 00481159
    PUSH EAX                            ; 0048115d
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawSurfaceBorder_FUN_0047f8c0 ; 0048115e
        ;   XREF to: 0047f8c0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawSurfaceBorder_FUN_0047f8c0(CDrawSurface * this_ptr)
    ADD ESP,0x4                         ; 00481163
    PUSH 0x64                           ; 00481166
    PUSH 0xc8                           ; 00481168
    PUSH 0x0                            ; 0048116d
    PUSH 0x0                            ; 0048116f
    LEA EAX,[ESP + 0x78]                ; 00481171
    PUSH EAX                            ; 00481175
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawClippedLine_FUN_0047ed30 ; 00481176
        ;   XREF to: 0047ed30 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawClippedLine_FUN_0047ed30(CDrawSurface * this_ptr, int x1, int y1, int x2, ...)
    ADD ESP,0x14                        ; 0048117b
    PUSH 0x64                           ; 0048117e
    PUSH 0x32                           ; 00481180
    PUSH 0x64                           ; 00481182
    LEA EAX,[ESP + 0x74]                ; 00481184
    PUSH EAX                            ; 00481188
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_0047ead0 ; 00481189
        ;   XREF to: 0047ead0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_0047ead0(CDrawSurface * this_ptr, int center_x, int center_y, int radius)
    ADD ESP,0x10                        ; 0048118e
    PUSH 0x32                           ; 00481191
    PUSH 0x32                           ; 00481193
    PUSH 0x64                           ; 00481195
    LEA EAX,[ESP + 0x74]                ; 00481197
    PUSH EAX                            ; 0048119b
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_0047ead0 ; 0048119c
        ;   XREF to: 0047ead0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_0047ead0(CDrawSurface * this_ptr, int center_x, int center_y, int radius)
    ADD ESP,0x10                        ; 004811a1
    PUSH 0x32                           ; 004811a4
    PUSH 0x0                            ; 004811a6
    PUSH 0x0                            ; 004811a8
    LEA EAX,[ESP + 0x74]                ; 004811aa
    PUSH EAX                            ; 004811ae
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromTopLeft_FUN_0047ebc0 ; 004811af
        ;   XREF to: 0047ebc0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromTopLeft_FUN_0047ebc0(CDrawSurface * this_ptr, int x, int y, int radius)
    ADD ESP,0x10                        ; 004811b4
    PUSH 0x32                           ; 004811b7
    PUSH 0x0                            ; 004811b9
    PUSH 0xc8                           ; 004811bb
    LEA EAX,[ESP + 0x74]                ; 004811c0
    PUSH EAX                            ; 004811c4
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromTopRight_FUN_0047ebf0 ; 004811c5
        ;   XREF to: 0047ebf0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromTopRight_FUN_0047ebf0(CDrawSurface * this_ptr, int top_right_x, int top_right_y, int radius)
    ADD ESP,0x10                        ; 004811ca
    PUSH 0x32                           ; 004811cd
    PUSH 0x64                           ; 004811cf
    PUSH 0x0                            ; 004811d1
    LEA EAX,[ESP + 0x74]                ; 004811d3
    PUSH EAX                            ; 004811d7
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromBottomLeft_FUN_0047ec20 ; 004811d8
        ;   XREF to: 0047ec20 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromBottomLeft_FUN_0047ec20(CDrawSurface * this_ptr, int bottom_left_x, int bottom_left_y, int radius)
    ADD ESP,0x10                        ; 004811dd
    PUSH 0x32                           ; 004811e0
    PUSH 0x64                           ; 004811e2
    PUSH 0xc8                           ; 004811e4
    LEA EAX,[ESP + 0x74]                ; 004811e9
    PUSH EAX                            ; 004811ed
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromBottomRight_FUN_0047ec50 ; 004811ee
        ;   XREF to: 0047ec50 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromBottomRight_FUN_0047ec50(CDrawSurface * this_ptr, int bottom_right_x, int bottom_right_y, int radius)
    ADD ESP,0x10                        ; 004811f3
    PUSH 0xf9                           ; 004811f6
    CALL cockpit_drawsurf.cpp_setColor_FUN_0047e3b0 ; 004811fb
        ;   XREF to: 0047e3b0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_setColor_FUN_0047e3b0(int color_value)
    ADD ESP,0x4                         ; 00481200
    PUSH 0x0                            ; 00481203
    CALL cockpit_drawsurf.cpp_setCurrentFont_FUN_0047e860 ; 00481205
        ;   XREF to: 0047e860 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_setCurrentFont_FUN_0047e860(CBitFont * font_ptr)
    ADD ESP,0x4                         ; 0048120a
    PUSH 0x5db21c                       ; 0048120d
    PUSH 0x2                            ; 00481212
    PUSH 0x5                            ; 00481214
    LEA EAX,[ESP + 0x74]                ; 00481216
    PUSH EAX                            ; 0048121a
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00480780 ; 0048121b
        ;   XREF to: 00480780 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00480780(CDrawSurface * this_ptr, int x, int y, char * text)
    ADD ESP,0x10                        ; 00481220
    PUSH 0x5db222                       ; 00481223
    PUSH 0x11                           ; 00481228
    PUSH -0x5                           ; 0048122a
    LEA EAX,[ESP + 0x74]                ; 0048122c
    PUSH EAX                            ; 00481230
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00480780 ; 00481231
        ;   XREF to: 00480780 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00480780(CDrawSurface * this_ptr, int x, int y, char * text)
    ADD ESP,0x10                        ; 00481236
    PUSH 0x5db228                       ; 00481239
    PUSH 0x11                           ; 0048123e
    PUSH 0xb9                           ; 00481240
    LEA EAX,[ESP + 0x74]                ; 00481245
    PUSH EAX                            ; 00481249
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00480780 ; 0048124a
        ;   XREF to: 00480780 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00480780(CDrawSurface * this_ptr, int x, int y, char * text)
    ADD ESP,0x10                        ; 0048124f
    PUSH 0x5db238                       ; 00481252
    PUSH 0x11                           ; 00481257
    PUSH 0x64                           ; 00481259
    LEA EAX,[ESP + 0x74]                ; 0048125b
    PUSH EAX                            ; 0048125f
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredWrapper_FUN_00480920 ; 00481260
        ;   XREF to: 00480920 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredWrapper_FUN_00480920(CDrawSurface * this_ptr, int x, int y, char * text)
    ADD ESP,0x10                        ; 00481265
    PUSH 0x5db23a                       ; 00481268
    PUSH 0x20                           ; 0048126d
    PUSH 0x6c                           ; 0048126f
    PUSH 0x5c                           ; 00481271
    LEA EAX,[ESP + 0x78]                ; 00481273
    PUSH EAX                            ; 00481277
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBoundsWrapper_FUN_00480b90 ; 00481278
        ;   XREF to: 00480b90 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBoundsWrapper_FUN_00480b90(CDrawSurface * this_ptr, int x, int y, int width, ...)
    ADD ESP,0x14                        ; 0048127d
    PUSH ESI                            ; 00481280
    CALL cockpit_drawsurf.cpp_setCurrentFont_FUN_0047e860 ; 00481281
        ;   XREF to: 0047e860 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_setCurrentFont_FUN_0047e860(CBitFont * font_ptr)
    ADD ESP,0x4                         ; 00481286
    PUSH 0x5db23c                       ; 00481289
    PUSH 0x2a                           ; 0048128e
    PUSH 0x5                            ; 00481290
    LEA EAX,[ESP + 0x74]                ; 00481292
    PUSH EAX                            ; 00481296
    MOV dword ptr [ESI + 0x4204],0x0    ; 00481297
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00480780 ; 004812a1
        ;   XREF to: 00480780 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00480780(CDrawSurface * this_ptr, int x, int y, char * text)
    ADD ESP,0x10                        ; 004812a6
    PUSH 0x5db242                       ; 004812a9
    PUSH 0x39                           ; 004812ae
    PUSH -0x5                           ; 004812b0
    LEA EAX,[ESP + 0x74]                ; 004812b2
    PUSH EAX                            ; 004812b6
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00480780 ; 004812b7
        ;   XREF to: 00480780 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00480780(CDrawSurface * this_ptr, int x, int y, char * text)
    ADD ESP,0x10                        ; 004812bc
    PUSH 0x5db248                       ; 004812bf
    PUSH 0x39                           ; 004812c4
    PUSH 0xb9                           ; 004812c6
    LEA EAX,[ESP + 0x74]                ; 004812cb
    PUSH EAX                            ; 004812cf
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00480780 ; 004812d0
        ;   XREF to: 00480780 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00480780(CDrawSurface * this_ptr, int x, int y, char * text)
    ADD ESP,0x10                        ; 004812d5
    MOV dword ptr [ESI + 0x4204],0x1    ; 004812d8
    PUSH 0x5db24e                       ; 004812e2
    PUSH 0x48                           ; 004812e7
    PUSH -0x5                           ; 004812e9
    LEA EAX,[ESP + 0x74]                ; 004812eb
    PUSH EAX                            ; 004812ef
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00480780 ; 004812f0
        ;   XREF to: 00480780 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00480780(CDrawSurface * this_ptr, int x, int y, char * text)
    ADD ESP,0x10                        ; 004812f5
    PUSH 0x5db254                       ; 004812f8
    PUSH 0x48                           ; 004812fd
    PUSH 0xb9                           ; 004812ff
    LEA EAX,[ESP + 0x74]                ; 00481304
    PUSH EAX                            ; 00481308
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00480780 ; 00481309
        ;   XREF to: 00480780 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00480780(CDrawSurface * this_ptr, int x, int y, char * text)
    ADD ESP,0x10                        ; 0048130e
    PUSH 0x5db25a                       ; 00481311
    PUSH 0x48                           ; 00481316
    PUSH 0x64                           ; 00481318
    LEA EAX,[ESP + 0x74]                ; 0048131a
    PUSH EAX                            ; 0048131e
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredWrapper_FUN_00480920 ; 0048131f
        ;   XREF to: 00480920 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredWrapper_FUN_00480920(CDrawSurface * this_ptr, int x, int y, char * text)
    ADD ESP,0x10                        ; 00481324
    PUSH 0x5db25c                       ; 00481327
    PUSH 0x57                           ; 0048132c
    PUSH 0x6c                           ; 0048132e
    PUSH 0x5c                           ; 00481330
    LEA EAX,[ESP + 0x78]                ; 00481332
    PUSH EAX                            ; 00481336
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBoundsWrapper_FUN_00480b90 ; 00481337
        ;   XREF to: 00480b90 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBoundsWrapper_FUN_00480b90(CDrawSurface * this_ptr, int x, int y, int width, ...)
    ADD ESP,0x14                        ; 0048133c
    PUSH 0xff                           ; 0048133f
    CALL cockpit_drawsurf.cpp_setColor_FUN_0047e3b0 ; 00481344
        ;   XREF to: 0047e3b0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_setColor_FUN_0047e3b0(int color_value)
    ADD ESP,0x4                         ; 00481349
    PUSH 0x14                           ; 0048134c
    PUSH 0x64                           ; 0048134e
    LEA EAX,[ESP + 0x70]                ; 00481350
    PUSH EAX                            ; 00481354
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0047e870 ; 00481355
        ;   XREF to: 0047e870 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0047e870(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 0048135a
    PUSH 0x23                           ; 0048135d
    PUSH 0x64                           ; 0048135f
    LEA EAX,[ESP + 0x70]                ; 00481361
    PUSH EAX                            ; 00481365
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0047e870 ; 00481366
        ;   XREF to: 0047e870 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0047e870(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 0048136b
    PUSH 0x4f                           ; 0048136e
    PUSH 0x64                           ; 00481370
    LEA EAX,[ESP + 0x70]                ; 00481372
    PUSH EAX                            ; 00481376
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0047e870 ; 00481377
        ;   XREF to: 0047e870 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0047e870(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 0048137c
    PUSH 0x5e                           ; 0048137f
    PUSH 0x64                           ; 00481381
    LEA EAX,[ESP + 0x70]                ; 00481383
    PUSH EAX                            ; 00481387
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0047e870 ; 00481388
        ;   XREF to: 0047e870 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0047e870(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 0048138d
    PUSH 0x0                            ; 00481390
    PUSH 0x0                            ; 00481392
    PUSH 0xff                           ; 00481394
    CALL cockpit_drawsurf.cpp_FUN_0047e5c0 ; 00481399
        ;   XREF to: 0047e5c0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_FUN_0047e5c0(int red, int green, int blue)
    ADD ESP,0xc                         ; 0048139e
    LEA EAX,[ESP + 0x28]                ; 004813a1
    PUSH EAX                            ; 004813a5
    CALL cockpit_drawsurf.cpp_CDrawSurface_fillFullSurface_FUN_0047ffd0 ; 004813a6
        ;   XREF to: 0047ffd0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_fillFullSurface_FUN_0047ffd0(CDrawSurface * this_ptr)
    ADD ESP,0x4                         ; 004813ab
    PUSH 0xfb                           ; 004813ae
    CALL cockpit_drawsurf.cpp_setColor_FUN_0047e3b0 ; 004813b3
        ;   XREF to: 0047e3b0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_setColor_FUN_0047e3b0(int color_value)
    ADD ESP,0x4                         ; 004813b8
    LEA EAX,[ESP + 0x28]                ; 004813bb
    PUSH EAX                            ; 004813bf
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawSurfaceBorder_FUN_0047f8c0 ; 004813c0
        ;   XREF to: 0047f8c0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawSurfaceBorder_FUN_0047f8c0(CDrawSurface * this_ptr)
    ADD ESP,0x4                         ; 004813c5
    PUSH 0x15                           ; 004813c8
    PUSH 0x29                           ; 004813ca
    PUSH -0xb                           ; 004813cc
    PUSH -0x15                          ; 004813ce
    LEA EAX,[ESP + 0x38]                ; 004813d0
    PUSH EAX                            ; 004813d4
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawClippedLine_FUN_0047ed30 ; 004813d5
        ;   XREF to: 0047ed30 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawClippedLine_FUN_0047ed30(CDrawSurface * this_ptr, int x1, int y1, int x2, ...)
    ADD ESP,0x14                        ; 004813da
    PUSH 0x6                            ; 004813dd
    PUSH 0x5                            ; 004813df
    PUSH 0xa                            ; 004813e1
    LEA EAX,[ESP + 0x34]                ; 004813e3
    PUSH EAX                            ; 004813e7
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_0047ead0 ; 004813e8
        ;   XREF to: 0047ead0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_0047ead0(CDrawSurface * this_ptr, int center_x, int center_y, int radius)
    ADD ESP,0x10                        ; 004813ed
    PUSH 0xff                           ; 004813f0
    PUSH 0x0                            ; 004813f5
    PUSH 0x0                            ; 004813f7
    CALL cockpit_drawsurf.cpp_FUN_0047e5c0 ; 004813f9
        ;   XREF to: 0047e5c0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_FUN_0047e5c0(int red, int green, int blue)
    ADD ESP,0xc                         ; 004813fe
    LEA EAX,[ESP + 0x8]                 ; 00481401
    PUSH EAX                            ; 00481405
    CALL cockpit_drawsurf.cpp_CDrawSurface_fillFullSurface_FUN_0047ffd0 ; 00481406
        ;   XREF to: 0047ffd0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_fillFullSurface_FUN_0047ffd0(CDrawSurface * this_ptr)
    ADD ESP,0x4                         ; 0048140b
    PUSH 0xfb                           ; 0048140e
    CALL cockpit_drawsurf.cpp_setColor_FUN_0047e3b0 ; 00481413
        ;   XREF to: 0047e3b0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_setColor_FUN_0047e3b0(int color_value)
    ADD ESP,0x4                         ; 00481418
    LEA EAX,[ESP + 0x8]                 ; 0048141b
    PUSH EAX                            ; 0048141f
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawSurfaceBorder_FUN_0047f8c0 ; 00481420
        ;   XREF to: 0047f8c0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawSurfaceBorder_FUN_0047f8c0(CDrawSurface * this_ptr)
    ADD ESP,0x4                         ; 00481425
    PUSH 0x9                            ; 00481428
    PUSH 0x13                           ; 0048142a
    PUSH 0x0                            ; 0048142c
    PUSH 0x0                            ; 0048142e
    LEA EAX,[ESP + 0x18]                ; 00481430
    PUSH EAX                            ; 00481434
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawClippedLine_FUN_0047ed30 ; 00481435
        ;   XREF to: 0047ed30 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawClippedLine_FUN_0047ed30(CDrawSurface * this_ptr, int x1, int y1, int x2, ...)
    MOV EAX,[0x00612558]                ; 0048143a | DAT_00612558
    ADD ESP,0x14                        ; 0048143f
    MOV dword ptr [ESP + 0xa8],EAX      ; 00481442
    MOV EAX,[0x0061b498]                ; 00481449 | DAT_0061b498
    MOV EDX,EAX                         ; 0048144e
    SAR EDX,0x1f                        ; 00481450
    SUB EAX,EDX                         ; 00481453
    SAR EAX,0x1                         ; 00481455
    MOV EBP,EAX                         ; 00481457
    MOV EAX,[0x0061b49c]                ; 00481459 | DAT_0061b49c
    MOV EDX,EAX                         ; 0048145e
    SAR EDX,0x1f                        ; 00481460
    SUB EAX,EDX                         ; 00481463
    SAR EAX,0x1                         ; 00481465
    MOV EDX,dword ptr [0x0061b49c]      ; 00481467 | DAT_0061b49c
    ADD EAX,0x66                        ; 0048146d
    DEC EDX                             ; 00481470
    SUB EDX,EAX                         ; 00481471
    PUSH 0x0                            ; 00481473
    LEA EDI,[EDX + 0x1]                 ; 00481475
    PUSH EDI                            ; 00481478
    PUSH 0xc9                           ; 00481479
    PUSH EAX                            ; 0048147e
    PUSH EBP                            ; 0048147f
    LEA EAX,[ESP + 0x9c]                ; 00481480
    PUSH EAX                            ; 00481487
    MOV EBX,dword ptr [ESI + 0x41f0]    ; 00481488
    CALL cockpit_drawsurf.cpp_CDrawSurface_initFromParent_FUN_0047e240 ; 0048148e
        ;   XREF to: 0047e240 (UNCONDITIONAL_CALL)  ; CDrawSurface * cockpit_drawsurf.cpp_CDrawSurface_initFromParent_FUN_0047e240(CDrawSurface * this_ptr, int x, int y, int width, ...)
    ADD ESP,0x18                        ; 00481493
    PUSH 0x80                           ; 00481496
    PUSH 0x80                           ; 0048149b
    PUSH 0x80                           ; 004814a0
    CALL cockpit_drawsurf.cpp_FUN_0047e5c0 ; 004814a5
        ;   XREF to: 0047e5c0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_FUN_0047e5c0(int red, int green, int blue)
    ADD ESP,0xc                         ; 004814aa
    LEA EAX,[ESP + 0x88]                ; 004814ad
    PUSH EAX                            ; 004814b4
    CALL cockpit_drawsurf.cpp_CDrawSurface_fillFullSurface_FUN_0047ffd0 ; 004814b5
        ;   XREF to: 0047ffd0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_fillFullSurface_FUN_0047ffd0(CDrawSurface * this_ptr)
    ADD ESP,0x4                         ; 004814ba
    PUSH 0x7                            ; 004814bd
    CALL cockpit_drawsurf.cpp_setColor_FUN_0047e3b0 ; 004814bf
        ;   XREF to: 0047e3b0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_setColor_FUN_0047e3b0(int color_value)
    ADD ESP,0x4                         ; 004814c4
    LEA EAX,[ESP + 0x88]                ; 004814c7
    PUSH EAX                            ; 004814ce
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawSurfaceBorder_FUN_0047f8c0 ; 004814cf
        ;   XREF to: 0047f8c0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawSurfaceBorder_FUN_0047f8c0(CDrawSurface * this_ptr)
    ADD ESP,0x4                         ; 004814d4
    PUSH 0xf9                           ; 004814d7
    CALL cockpit_drawsurf.cpp_setColor_FUN_0047e3b0 ; 004814dc
        ;   XREF to: 0047e3b0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_setColor_FUN_0047e3b0(int color_value)
    ADD ESP,0x4                         ; 004814e1
    PUSH ESI                            ; 004814e4
    CALL cockpit_drawsurf.cpp_setCurrentFont_FUN_0047e860 ; 004814e5
        ;   XREF to: 0047e860 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_setCurrentFont_FUN_0047e860(CBitFont * font_ptr)
    ADD ESP,0x4                         ; 004814ea
    MOV dword ptr [ESI + 0x4204],0x1    ; 004814ed
    LEA EAX,[ESP + 0xa8]                ; 004814f7
    PUSH EAX                            ; 004814fe
    PUSH 0x5db25e                       ; 004814ff
    PUSH 0x1                            ; 00481504
    PUSH 0x1                            ; 00481506
    LEA EAX,[ESP + 0x98]                ; 00481508
    PUSH EAX                            ; 0048150f
    CALL cockpit_drawsurf.cpp_FUN_004807b0 ; 00481510
        ;   XREF to: 004807b0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_FUN_004807b0()
    ADD ESP,0x14                        ; 00481515
    LEA EAX,[ESP + 0xa8]                ; 00481518
    PUSH EAX                            ; 0048151f
    PUSH 0x5db261                       ; 00481520
    PUSH 0x1                            ; 00481525
    PUSH 0xc7                           ; 00481527
    LEA EAX,[ESP + 0x98]                ; 0048152c
    PUSH EAX                            ; 00481533
    CALL cockpit_drawsurf.cpp_FUN_00480880 ; 00481534
        ;   XREF to: 00480880 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_FUN_00480880()
    ADD ESP,0x14                        ; 00481539
    LEA EAX,[ESP + 0xa8]                ; 0048153c
    PUSH EAX                            ; 00481543
    PUSH 0x5db264                       ; 00481544
    PUSH 0x1                            ; 00481549
    PUSH 0x64                           ; 0048154b
    LEA EAX,[ESP + 0x98]                ; 0048154d
    PUSH EAX                            ; 00481554
    CALL cockpit_drawsurf.cpp_FUN_00480950 ; 00481555
        ;   XREF to: 00480950 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_FUN_00480950()
    ADD ESP,0x14                        ; 0048155a
    LEA EAX,[ESP + 0xa8]                ; 0048155d
    PUSH EAX                            ; 00481564
    PUSH 0x5db267                       ; 00481565
    LEA EBP,[EBX + 0x1]                 ; 0048156a
    PUSH EBP                            ; 0048156d
    PUSH 0x64                           ; 0048156e
    LEA EAX,[ESP + 0x98]                ; 00481570
    PUSH EAX                            ; 00481577
    CALL cockpit_drawsurf.cpp_FUN_00480a20 ; 00481578
        ;   XREF to: 00480a20 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_FUN_00480a20()
    ADD ESP,0x14                        ; 0048157d
    LEA EAX,[ESP + 0xa8]                ; 00481580
    PUSH EAX                            ; 00481587
    LEA EAX,[EBX + EBX*0x1]             ; 00481588
    PUSH 0x5db26a                       ; 0048158b
    MOV dword ptr [ESP + 0xc4],EAX      ; 00481590
    INC EAX                             ; 00481597
    PUSH EAX                            ; 00481598
    PUSH 0x64                           ; 00481599
    MOV dword ptr [ESP + 0xd0],EAX      ; 0048159b
    LEA EAX,[ESP + 0x98]                ; 004815a2
    PUSH EAX                            ; 004815a9
    CALL cockpit_drawsurf.cpp_FUN_00480af0 ; 004815aa
        ;   XREF to: 00480af0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_FUN_00480af0()
    ADD ESP,0x14                        ; 004815af
    LEA EAX,[ESP + 0xa8]                ; 004815b2
    PUSH EAX                            ; 004815b9
    LEA EAX,[EBX*0x4 + 0x0]             ; 004815ba
    SUB EAX,EBX                         ; 004815c1
    MOV dword ptr [ESP + 0xb4],EAX      ; 004815c3
    MOV EDX,dword ptr [ESP + 0xb4]      ; 004815ca
    MOV EAX,EDI                         ; 004815d1
    PUSH 0x5db26d                       ; 004815d3
    SUB EAX,EDX                         ; 004815d8
    PUSH EAX                            ; 004815da
    PUSH 0x96                           ; 004815db
    PUSH 0x32                           ; 004815e0
    MOV dword ptr [ESP + 0xc0],EAX      ; 004815e2
    LEA EAX,[ESP + 0x9c]                ; 004815e9
    PUSH EAX                            ; 004815f0
    CALL cockpit_drawsurf.cpp_FUN_00480bc0 ; 004815f1
        ;   XREF to: 00480bc0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_FUN_00480bc0()
    ADD ESP,0x18                        ; 004815f6
    LEA EAX,[ESP + 0xa8]                ; 004815f9
    MOV EDX,dword ptr [ESP + 0xbc]      ; 00481600
    PUSH EAX                            ; 00481607
    MOV EAX,EDI                         ; 00481608
    SUB EAX,EDX                         ; 0048160a
    PUSH 0x5db270                       ; 0048160c
    MOV dword ptr [ESP + 0xc0],EAX      ; 00481611
    ADD EAX,0x32                        ; 00481618
    PUSH EAX                            ; 0048161b
    MOV EAX,dword ptr [ESP + 0xc4]      ; 0048161c
    SUB EAX,0x32                        ; 00481623
    PUSH EAX                            ; 00481626
    PUSH 0x64                           ; 00481627
    LEA EAX,[ESP + 0x9c]                ; 00481629
    PUSH EAX                            ; 00481630
    CALL cockpit_drawsurf.cpp_FUN_00480ca0 ; 00481631
        ;   XREF to: 00480ca0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_FUN_00480ca0()
    ADD ESP,0x18                        ; 00481636
    LEA EAX,[ESP + 0xa8]                ; 00481639
    PUSH EAX                            ; 00481640
    SUB EDI,EBX                         ; 00481641
    PUSH 0x5db273                       ; 00481643
    LEA EAX,[EDI + 0x32]                ; 00481648
    PUSH EAX                            ; 0048164b
    LEA EAX,[EDI + -0x32]               ; 0048164c
    PUSH EAX                            ; 0048164f
    PUSH 0x96                           ; 00481650
    PUSH 0x32                           ; 00481655
    LEA EAX,[ESP + 0xa0]                ; 00481657
    PUSH EAX                            ; 0048165e
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidthPrintf_FUN_00480d90 ; 0048165f
        ;   XREF to: 00480d90 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidthPrintf_FUN_00480d90(CDrawSurface * this_ptr, int x, int width, int y, ...)
    ADD ESP,0x1c                        ; 00481664
    LEA EAX,[ESP + 0xa8]                ; 00481667
    PUSH EAX                            ; 0048166e
    PUSH 0x5db276                       ; 0048166f
    LEA EAX,[ESP + 0x90]                ; 00481674
    PUSH EAX                            ; 0048167b
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurfacePrintf_FUN_00480fa0 ; 0048167c
        ;   XREF to: 00480fa0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurfacePrintf_FUN_00480fa0(CDrawSurface * this_ptr, char * format)
    ADD ESP,0xc                         ; 00481681
    PUSH 0xfb                           ; 00481684
    CALL cockpit_drawsurf.cpp_setColor_FUN_0047e3b0 ; 00481689
        ;   XREF to: 0047e3b0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_setColor_FUN_0047e3b0(int color_value)
    ADD ESP,0x4                         ; 0048168e
    PUSH 0x1                            ; 00481691
    PUSH 0x1                            ; 00481693
    LEA EAX,[ESP + 0x90]                ; 00481695
    PUSH EAX                            ; 0048169c
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0047e870 ; 0048169d
        ;   XREF to: 0047e870 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0047e870(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 004816a2
    PUSH 0x1                            ; 004816a5
    PUSH 0xc7                           ; 004816a7
    LEA EAX,[ESP + 0x90]                ; 004816ac
    PUSH EAX                            ; 004816b3
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0047e870 ; 004816b4
        ;   XREF to: 0047e870 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0047e870(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 004816b9
    PUSH 0x1                            ; 004816bc
    PUSH 0x64                           ; 004816be
    LEA EAX,[ESP + 0x90]                ; 004816c0
    PUSH EAX                            ; 004816c7
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0047e870 ; 004816c8
        ;   XREF to: 0047e870 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0047e870(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 004816cd
    PUSH EBP                            ; 004816d0
    PUSH 0x64                           ; 004816d1
    LEA EAX,[ESP + 0x90]                ; 004816d3
    PUSH EAX                            ; 004816da
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0047e870 ; 004816db
        ;   XREF to: 0047e870 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0047e870(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 004816e0
    MOV ECX,dword ptr [ESP + 0xc0]      ; 004816e3
    PUSH ECX                            ; 004816ea
    PUSH 0x64                           ; 004816eb
    LEA EAX,[ESP + 0x90]                ; 004816ed
    PUSH EAX                            ; 004816f4
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0047e870 ; 004816f5
        ;   XREF to: 0047e870 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0047e870(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 004816fa
    MOV EAX,dword ptr [ESP + 0xac]      ; 004816fd
    PUSH EAX                            ; 00481704
    PUSH 0x64                           ; 00481705
    LEA EAX,[ESP + 0x90]                ; 00481707
    PUSH EAX                            ; 0048170e
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0047e870 ; 0048170f
        ;   XREF to: 0047e870 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0047e870(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 00481714
    MOV EDX,dword ptr [ESP + 0xb8]      ; 00481717
    PUSH EDX                            ; 0048171e
    PUSH 0x64                           ; 0048171f
    LEA EAX,[ESP + 0x90]                ; 00481721
    PUSH EAX                            ; 00481728
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0047e870 ; 00481729
        ;   XREF to: 0047e870 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0047e870(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 0048172e
    PUSH EDI                            ; 00481731
    PUSH 0x64                           ; 00481732
    LEA EAX,[ESP + 0x90]                ; 00481734
    PUSH EAX                            ; 0048173b
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0047e870 ; 0048173c
        ;   XREF to: 0047e870 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0047e870(CDrawSurface * this_ptr, int x, int y)
    MOV EAX,[0x0061b498]                ; 00481741 | DAT_0061b498
    MOV EDX,EAX                         ; 00481746
    SAR EDX,0x1f                        ; 00481748
    SUB EAX,EDX                         ; 0048174b
    SAR EAX,0x1                         ; 0048174d
    LEA ECX,[EAX + 0xffffff36]          ; 0048174f
    MOV EAX,[0x0061b49c]                ; 00481755 | DAT_0061b49c
    MOV EDX,EAX                         ; 0048175a
    SAR EDX,0x1f                        ; 0048175c
    SUB EAX,EDX                         ; 0048175f
    SAR EAX,0x1                         ; 00481761
    MOV EDX,dword ptr [0x0061b49c]      ; 00481763 | DAT_0061b49c
    ADD EAX,0x66                        ; 00481769
    DEC EDX                             ; 0048176c
    ADD ESP,0xc                         ; 0048176d
    SUB EDX,EAX                         ; 00481770
    PUSH 0x0                            ; 00481772
    LEA EDI,[EDX + 0x1]                 ; 00481774
    PUSH EDI                            ; 00481777
    PUSH 0xc9                           ; 00481778
    PUSH EAX                            ; 0048177d
    PUSH ECX                            ; 0048177e
    LEA EAX,[ESP + 0x5c]                ; 0048177f
    PUSH EAX                            ; 00481783
    CALL cockpit_drawsurf.cpp_CDrawSurface_initFromParent_FUN_0047e240 ; 00481784
        ;   XREF to: 0047e240 (UNCONDITIONAL_CALL)  ; CDrawSurface * cockpit_drawsurf.cpp_CDrawSurface_initFromParent_FUN_0047e240(CDrawSurface * this_ptr, int x, int y, int width, ...)
    ADD ESP,0x18                        ; 00481789
    PUSH 0x80                           ; 0048178c
    PUSH 0x80                           ; 00481791
    PUSH 0x80                           ; 00481796
    CALL cockpit_drawsurf.cpp_FUN_0047e5c0 ; 0048179b
        ;   XREF to: 0047e5c0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_FUN_0047e5c0(int red, int green, int blue)
    ADD ESP,0xc                         ; 004817a0
    LEA EAX,[ESP + 0x48]                ; 004817a3
    PUSH EAX                            ; 004817a7
    CALL cockpit_drawsurf.cpp_CDrawSurface_fillFullSurface_FUN_0047ffd0 ; 004817a8
        ;   XREF to: 0047ffd0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_fillFullSurface_FUN_0047ffd0(CDrawSurface * this_ptr)
    ADD ESP,0x4                         ; 004817ad
    PUSH 0x7                            ; 004817b0
    CALL cockpit_drawsurf.cpp_setColor_FUN_0047e3b0 ; 004817b2
        ;   XREF to: 0047e3b0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_setColor_FUN_0047e3b0(int color_value)
    ADD ESP,0x4                         ; 004817b7
    LEA EAX,[ESP + 0x48]                ; 004817ba
    PUSH EAX                            ; 004817be
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawSurfaceBorder_FUN_0047f8c0 ; 004817bf
        ;   XREF to: 0047f8c0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawSurfaceBorder_FUN_0047f8c0(CDrawSurface * this_ptr)
    ADD ESP,0x4                         ; 004817c4
    PUSH 0xf9                           ; 004817c7
    CALL cockpit_drawsurf.cpp_setColor_FUN_0047e3b0 ; 004817cc
        ;   XREF to: 0047e3b0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_setColor_FUN_0047e3b0(int color_value)
    ADD ESP,0x4                         ; 004817d1
    PUSH 0x0                            ; 004817d4
    CALL cockpit_drawsurf.cpp_setCurrentFont_FUN_0047e860 ; 004817d6
        ;   XREF to: 0047e860 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_setCurrentFont_FUN_0047e860(CBitFont * font_ptr)
    ADD ESP,0x4                         ; 004817db
    MOV dword ptr [ESI + 0x4204],0x1    ; 004817de
    LEA EAX,[ESP + 0xa8]                ; 004817e8
    PUSH EAX                            ; 004817ef
    PUSH 0x5db279                       ; 004817f0
    PUSH 0x1                            ; 004817f5
    PUSH 0x1                            ; 004817f7
    LEA EAX,[ESP + 0x58]                ; 004817f9
    PUSH EAX                            ; 004817fd
    CALL cockpit_drawsurf.cpp_FUN_004807b0 ; 004817fe
        ;   XREF to: 004807b0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_FUN_004807b0()
    ADD ESP,0x14                        ; 00481803
    LEA EAX,[ESP + 0xa8]                ; 00481806
    PUSH EAX                            ; 0048180d
    PUSH 0x5db27c                       ; 0048180e
    PUSH 0x1                            ; 00481813
    PUSH 0xc7                           ; 00481815
    LEA EAX,[ESP + 0x58]                ; 0048181a
    PUSH EAX                            ; 0048181e
    CALL cockpit_drawsurf.cpp_FUN_00480880 ; 0048181f
        ;   XREF to: 00480880 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_FUN_00480880()
    ADD ESP,0x14                        ; 00481824
    LEA EAX,[ESP + 0xa8]                ; 00481827
    PUSH EAX                            ; 0048182e
    PUSH 0x5db27f                       ; 0048182f
    PUSH 0x1                            ; 00481834
    PUSH 0x64                           ; 00481836
    LEA EAX,[ESP + 0x58]                ; 00481838
    PUSH EAX                            ; 0048183c
    CALL cockpit_drawsurf.cpp_FUN_00480950 ; 0048183d
        ;   XREF to: 00480950 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_FUN_00480950()
    ADD ESP,0x14                        ; 00481842
    LEA EAX,[ESP + 0xa8]                ; 00481845
    PUSH EAX                            ; 0048184c
    PUSH 0x5db282                       ; 0048184d
    PUSH EBP                            ; 00481852
    PUSH 0x64                           ; 00481853
    LEA EAX,[ESP + 0x58]                ; 00481855
    PUSH EAX                            ; 00481859
    CALL cockpit_drawsurf.cpp_FUN_00480a20 ; 0048185a
        ;   XREF to: 00480a20 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_FUN_00480a20()
    ADD ESP,0x14                        ; 0048185f
    LEA EAX,[ESP + 0xa8]                ; 00481862
    PUSH EAX                            ; 00481869
    PUSH 0x5db285                       ; 0048186a
    MOV ECX,dword ptr [ESP + 0xc8]      ; 0048186f
    PUSH ECX                            ; 00481876
    PUSH 0x64                           ; 00481877
    LEA EAX,[ESP + 0x58]                ; 00481879
    PUSH EAX                            ; 0048187d
    CALL cockpit_drawsurf.cpp_FUN_00480af0 ; 0048187e
        ;   XREF to: 00480af0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_FUN_00480af0()
    ADD ESP,0x14                        ; 00481883
    LEA EAX,[ESP + 0xa8]                ; 00481886
    PUSH EAX                            ; 0048188d
    MOV ESI,dword ptr [ESP + 0xb4]      ; 0048188e
    MOV EAX,EDI                         ; 00481895
    PUSH 0x5db288                       ; 00481897
    SUB EAX,ESI                         ; 0048189c
    PUSH EAX                            ; 0048189e
    PUSH 0x96                           ; 0048189f
    PUSH 0x32                           ; 004818a4
    MOV dword ptr [ESP + 0xc8],EAX      ; 004818a6
    LEA EAX,[ESP + 0x5c]                ; 004818ad
    PUSH EAX                            ; 004818b1
    MOV ESI,EDI                         ; 004818b2
    CALL cockpit_drawsurf.cpp_FUN_00480bc0 ; 004818b4
        ;   XREF to: 00480bc0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_FUN_00480bc0()
    ADD ESP,0x18                        ; 004818b9
    LEA EAX,[ESP + 0xa8]                ; 004818bc
    MOV EDX,dword ptr [ESP + 0xbc]      ; 004818c3
    PUSH EAX                            ; 004818ca
    SUB ESI,EDX                         ; 004818cb
    PUSH 0x5db28b                       ; 004818cd
    LEA EAX,[ESI + 0x32]                ; 004818d2
    PUSH EAX                            ; 004818d5
    LEA EAX,[ESI + -0x32]               ; 004818d6
    PUSH EAX                            ; 004818d9
    PUSH 0x64                           ; 004818da
    LEA EAX,[ESP + 0x5c]                ; 004818dc
    PUSH EAX                            ; 004818e0
    CALL cockpit_drawsurf.cpp_FUN_00480ca0 ; 004818e1
        ;   XREF to: 00480ca0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_FUN_00480ca0()
    ADD ESP,0x18                        ; 004818e6
    LEA EAX,[ESP + 0xa8]                ; 004818e9
    PUSH EAX                            ; 004818f0
    SUB EDI,EBX                         ; 004818f1
    PUSH 0x5db28e                       ; 004818f3
    LEA EAX,[EDI + 0x32]                ; 004818f8
    PUSH EAX                            ; 004818fb
    LEA EAX,[EDI + -0x32]               ; 004818fc
    PUSH EAX                            ; 004818ff
    PUSH 0x96                           ; 00481900
    PUSH 0x32                           ; 00481905
    LEA EAX,[ESP + 0x60]                ; 00481907
    PUSH EAX                            ; 0048190b
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidthPrintf_FUN_00480d90 ; 0048190c
        ;   XREF to: 00480d90 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidthPrintf_FUN_00480d90(CDrawSurface * this_ptr, int x, int width, int y, ...)
    ADD ESP,0x1c                        ; 00481911
    LEA EAX,[ESP + 0xa8]                ; 00481914
    PUSH EAX                            ; 0048191b
    PUSH 0x5db291                       ; 0048191c
    LEA EAX,[ESP + 0x50]                ; 00481921
    PUSH EAX                            ; 00481925
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurfacePrintf_FUN_00480fa0 ; 00481926
        ;   XREF to: 00480fa0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurfacePrintf_FUN_00480fa0(CDrawSurface * this_ptr, char * format)
    ADD ESP,0xc                         ; 0048192b
    PUSH 0xfb                           ; 0048192e
    CALL cockpit_drawsurf.cpp_setColor_FUN_0047e3b0 ; 00481933
        ;   XREF to: 0047e3b0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_setColor_FUN_0047e3b0(int color_value)
    ADD ESP,0x4                         ; 00481938
    PUSH 0x1                            ; 0048193b
    PUSH 0x1                            ; 0048193d
    LEA EAX,[ESP + 0x50]                ; 0048193f
    PUSH EAX                            ; 00481943
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0047e870 ; 00481944
        ;   XREF to: 0047e870 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0047e870(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 00481949
    PUSH 0x1                            ; 0048194c
    PUSH 0xc7                           ; 0048194e
    LEA EAX,[ESP + 0x50]                ; 00481953
    PUSH EAX                            ; 00481957
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0047e870 ; 00481958
        ;   XREF to: 0047e870 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0047e870(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 0048195d
    PUSH 0x1                            ; 00481960
    PUSH 0x64                           ; 00481962
    LEA EAX,[ESP + 0x50]                ; 00481964
    PUSH EAX                            ; 00481968
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0047e870 ; 00481969
        ;   XREF to: 0047e870 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0047e870(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 0048196e
    PUSH EBP                            ; 00481971
    PUSH 0x64                           ; 00481972
    LEA EAX,[ESP + 0x50]                ; 00481974
    PUSH EAX                            ; 00481978
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0047e870 ; 00481979
        ;   XREF to: 0047e870 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0047e870(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 0048197e
    MOV ECX,dword ptr [ESP + 0xc0]      ; 00481981
    PUSH ECX                            ; 00481988
    PUSH 0x64                           ; 00481989
    LEA EAX,[ESP + 0x50]                ; 0048198b
    PUSH EAX                            ; 0048198f
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0047e870 ; 00481990
        ;   XREF to: 0047e870 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0047e870(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 00481995
    MOV EBX,dword ptr [ESP + 0xb4]      ; 00481998
    PUSH EBX                            ; 0048199f
    PUSH 0x64                           ; 004819a0
    LEA EAX,[ESP + 0x50]                ; 004819a2
    PUSH EAX                            ; 004819a6
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0047e870 ; 004819a7
        ;   XREF to: 0047e870 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0047e870(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 004819ac
    PUSH ESI                            ; 004819af
    PUSH 0x64                           ; 004819b0
    LEA EAX,[ESP + 0x50]                ; 004819b2
    PUSH EAX                            ; 004819b6
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0047e870 ; 004819b7
        ;   XREF to: 0047e870 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0047e870(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 004819bc
    PUSH EDI                            ; 004819bf
    PUSH 0x64                           ; 004819c0
    LEA EAX,[ESP + 0x50]                ; 004819c2
    PUSH EAX                            ; 004819c6
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0047e870 ; 004819c7
        ;   XREF to: 0047e870 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_0047e870(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 004819cc
    PUSH 0x4                            ; 004819cf
    CALL cockpit_drawsurf.cpp_setColor_FUN_0047e3b0 ; 004819d1
        ;   XREF to: 0047e3b0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_setColor_FUN_0047e3b0(int color_value)
    ADD ESP,0x4                         ; 004819d6
    LEA EAX,[ESP + 0x48]                ; 004819d9
    PUSH EAX                            ; 004819dd
    CALL cockpit_drawsurf.cpp_FUN_0047fcf0 ; 004819de
        ;   XREF to: 0047fcf0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_FUN_0047fcf0(CDrawSurface * this_ptr)
    ADD ESP,0x4                         ; 004819e3
    POP EBX                             ; 004819e6
    POP EDI                             ; 004819e7
    ADD ESP,0xbc                        ; 004819e8
    POP EBP                             ; 004819ee
    POP ESI                             ; 004819ef
    RET                                 ; 004819f0

