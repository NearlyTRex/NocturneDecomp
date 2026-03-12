; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_testDrawingSurface_FUN_00489d30(CBitFont *test_font)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   test_font
; Local Variables:
; CDrawSurface     Stack[-0xc4]:32  local_c4
; CDrawSurface     Stack[-0xa4]:32  local_a4
; CDrawSurface     Stack[-0x84]:32  local_84
; CDrawSurface     Stack[-0x64]:32  local_64
; CDrawSurface     Stack[-0x44]:32  local_44
; char[4]          Stack[-0x24]:4  local_24
; int              Stack[-0x20]:4  local_20
; int              Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
; int              Stack[-0x10]:4  local_10
; int              Stack[-0xc]:4  local_c
;
; Referenced Globals:
;   undefined4 DAT_00412b41
;   TerminatedCString s_Hello_00621eb5
;   TerminatedCString s_Hello_00621ebb
;   TerminatedCString s_Hello_world_00621ec1
;   TerminatedCString s_anon_00621ed1
;   TerminatedCString s_anon_00621ed3
;   TerminatedCString s_Hello_00621ed5
;   TerminatedCString s_Hello_00621edb
;   TerminatedCString s_Hello_00621ee1
;   TerminatedCString s_Hello_00621ee7
;   TerminatedCString s_Hello_00621eed
;   TerminatedCString s_anon_00621ef3
;   TerminatedCString s_anon_00621ef5
;   TerminatedCString s_s_00621ef7
;   TerminatedCString s_s_00621efa
;   ... and 19 more
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_ctor_FUN_00486ea0
;   cockpit_drawsurf.cpp_CDrawSurface_drawAnimatedFullSurface_FUN_00488990
;   cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_00487730
;   cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromBottomLeft_FUN_00487880
;   cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromBottomRight_FUN_004878b0
;   cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromTopLeft_FUN_00487820
;   cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromTopRight_FUN_00487850
;   cockpit_drawsurf.cpp_CDrawSurface_drawClippedLine_FUN_00487990
;   cockpit_drawsurf.cpp_CDrawSurface_drawSurfaceBorder_FUN_00488530
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredBothPrintf_FUN_00489790
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurfacePrintf_FUN_00489c40
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaPrintf_FUN_00489940
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidthPrintf_FUN_00489a30
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBoundsPrintf_FUN_00489860
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBoundsWrapper_FUN_00489830
;   ... and 11 more
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00489d30
        ;   Label: cockpit_drawsurf.cpp_testDrawingSurface_FUN_00489d30
    PUSH EBP                            ; 00489d31
    SUB ESP,0xbc                        ; 00489d32
    MOV ESI,dword ptr [ESP + 0xc8]      ; 00489d38
    MOV EDX,dword ptr [0x00679394]      ; 00489d3f | g_WindowWidth
    CMP EDX,0x280                       ; 00489d45
    JL 0x00489d5b                       ; 00489d4b
        ;   XREF to: 00489d5b (CONDITIONAL_JUMP)  ; LAB_00489d5b
    MOV ECX,dword ptr [0x00679398]      ; 00489d4d | g_WindowHeight
    CMP ECX,0x1e0                       ; 00489d53
    JGE 0x00489d64                      ; 00489d59
        ;   XREF to: 00489d64 (CONDITIONAL_JUMP)  ; LAB_00489d64
    ADD ESP,0xbc                        ; 00489d5b
        ;   Label: LAB_00489d5b
    POP EBP                             ; 00489d61
    POP ESI                             ; 00489d62
    RET                                 ; 00489d63
    PUSH EDI                            ; 00489d64
        ;   Label: LAB_00489d64
    PUSH EBX                            ; 00489d65
    MOV EAX,EDX                         ; 00489d66
    SAR EDX,0x1f                        ; 00489d68
    SUB EAX,EDX                         ; 00489d6b
    SAR EAX,0x1                         ; 00489d6d
    MOV EBX,EAX                         ; 00489d6f
    MOV EDX,ECX                         ; 00489d71
    MOV EAX,ECX                         ; 00489d73
    SAR EDX,0x1f                        ; 00489d75
    SUB EAX,EDX                         ; 00489d78
    SAR EAX,0x1                         ; 00489d7a
    PUSH 0x0                            ; 00489d7c
    PUSH 0x65                           ; 00489d7e
    PUSH 0xc9                           ; 00489d80
    PUSH EAX                            ; 00489d85
    PUSH EBX                            ; 00489d86
    LEA EAX,[ESP + 0x7c]                ; 00489d87
    PUSH EAX                            ; 00489d8b
    CALL cockpit_drawsurf.cpp_CDrawSurface_ctor_FUN_00486ea0 ; 00489d8c
        ;   XREF to: 00486ea0 (UNCONDITIONAL_CALL)  ; CDrawSurface * cockpit_drawsurf.cpp_CDrawSurface_ctor_FUN_00486ea0(CDrawSurface * this_ptr, int x, int y, int width, ...)
    ADD ESP,0x18                        ; 00489d91
    LEA EAX,[ESP + 0x68]                ; 00489d94
    PUSH EAX                            ; 00489d98
    PUSH 0xb                            ; 00489d99
    PUSH 0x15                           ; 00489d9b
    PUSH 0x8                            ; 00489d9d
    PUSH 0xc                            ; 00489d9f
    LEA EAX,[ESP + 0x3c]                ; 00489da1
    PUSH EAX                            ; 00489da5
    CALL cockpit_drawsurf.cpp_CDrawSurface_ctor_FUN_00486ea0 ; 00489da6
        ;   XREF to: 00486ea0 (UNCONDITIONAL_CALL)  ; CDrawSurface * cockpit_drawsurf.cpp_CDrawSurface_ctor_FUN_00486ea0(CDrawSurface * this_ptr, int x, int y, int width, ...)
    ADD ESP,0x18                        ; 00489dab
    LEA EAX,[ESP + 0x68]                ; 00489dae
    PUSH EAX                            ; 00489db2
    PUSH 0xa                            ; 00489db3
    PUSH 0x14                           ; 00489db5
    PUSH 0x5f                           ; 00489db7
    PUSH 0xbe                           ; 00489db9
    LEA EAX,[ESP + 0x1c]                ; 00489dbe
    PUSH EAX                            ; 00489dc2
    CALL cockpit_drawsurf.cpp_CDrawSurface_ctor_FUN_00486ea0 ; 00489dc3
        ;   XREF to: 00486ea0 (UNCONDITIONAL_CALL)  ; CDrawSurface * cockpit_drawsurf.cpp_CDrawSurface_ctor_FUN_00486ea0(CDrawSurface * this_ptr, int x, int y, int width, ...)
    ADD ESP,0x18                        ; 00489dc8
    PUSH 0x80                           ; 00489dcb
    PUSH 0x80                           ; 00489dd0
    PUSH 0x80                           ; 00489dd5
    CALL cockpit_drawsurf.cpp_CDrawSurface_setColorRGB_FUN_00487220 ; 00489dda
        ;   XREF to: 00487220 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_setColorRGB_FUN_00487220(int red, int green, int blue)
    ADD ESP,0xc                         ; 00489ddf
    LEA EAX,[ESP + 0x68]                ; 00489de2
    PUSH EAX                            ; 00489de6
    CALL cockpit_drawsurf.cpp_CDrawSurface_fillFullSurface_FUN_00488c70 ; 00489de7
        ;   XREF to: 00488c70 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_fillFullSurface_FUN_00488c70(CDrawSurface * this_ptr)
    ADD ESP,0x4                         ; 00489dec
    PUSH 0x7                            ; 00489def
    CALL cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_00487010 ; 00489df1
        ;   XREF to: 00487010 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_00487010(int color_value)
    ADD ESP,0x4                         ; 00489df6
    LEA EAX,[ESP + 0x68]                ; 00489df9
    PUSH EAX                            ; 00489dfd
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawSurfaceBorder_FUN_00488530 ; 00489dfe
        ;   XREF to: 00488530 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawSurfaceBorder_FUN_00488530(CDrawSurface * this_ptr)
    ADD ESP,0x4                         ; 00489e03
    PUSH 0x64                           ; 00489e06
    PUSH 0xc8                           ; 00489e08
    PUSH 0x0                            ; 00489e0d
    PUSH 0x0                            ; 00489e0f
    LEA EAX,[ESP + 0x78]                ; 00489e11
    PUSH EAX                            ; 00489e15
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawClippedLine_FUN_00487990 ; 00489e16
        ;   XREF to: 00487990 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawClippedLine_FUN_00487990(CDrawSurface * this_ptr, int x1, int y1, int x2, ...)
    ADD ESP,0x14                        ; 00489e1b
    PUSH 0x64                           ; 00489e1e
    PUSH 0x32                           ; 00489e20
    PUSH 0x64                           ; 00489e22
    LEA EAX,[ESP + 0x74]                ; 00489e24
    PUSH EAX                            ; 00489e28
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_00487730 ; 00489e29
        ;   XREF to: 00487730 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_00487730(CDrawSurface * this_ptr, int center_x, int center_y, int radius)
    ADD ESP,0x10                        ; 00489e2e
    PUSH 0x32                           ; 00489e31
    PUSH 0x32                           ; 00489e33
    PUSH 0x64                           ; 00489e35
    LEA EAX,[ESP + 0x74]                ; 00489e37
    PUSH EAX                            ; 00489e3b
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_00487730 ; 00489e3c
        ;   XREF to: 00487730 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_00487730(CDrawSurface * this_ptr, int center_x, int center_y, int radius)
    ADD ESP,0x10                        ; 00489e41
    PUSH 0x32                           ; 00489e44
    PUSH 0x0                            ; 00489e46
    PUSH 0x0                            ; 00489e48
    LEA EAX,[ESP + 0x74]                ; 00489e4a
    PUSH EAX                            ; 00489e4e
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromTopLeft_FUN_00487820 ; 00489e4f
        ;   XREF to: 00487820 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromTopLeft_FUN_00487820(CDrawSurface * this_ptr, int x, int y, int radius)
    ADD ESP,0x10                        ; 00489e54
    PUSH 0x32                           ; 00489e57
    PUSH 0x0                            ; 00489e59
    PUSH 0xc8                           ; 00489e5b
    LEA EAX,[ESP + 0x74]                ; 00489e60
    PUSH EAX                            ; 00489e64
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromTopRight_FUN_00487850 ; 00489e65
        ;   XREF to: 00487850 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromTopRight_FUN_00487850(CDrawSurface * this_ptr, int top_right_x, int top_right_y, int radius)
    ADD ESP,0x10                        ; 00489e6a
    PUSH 0x32                           ; 00489e6d
    PUSH 0x64                           ; 00489e6f
    PUSH 0x0                            ; 00489e71
    LEA EAX,[ESP + 0x74]                ; 00489e73
    PUSH EAX                            ; 00489e77
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromBottomLeft_FUN_00487880 ; 00489e78
        ;   XREF to: 00487880 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromBottomLeft_FUN_00487880(CDrawSurface * this_ptr, int bottom_left_x, int bottom_left_y, int radius)
    ADD ESP,0x10                        ; 00489e7d
    PUSH 0x32                           ; 00489e80
    PUSH 0x64                           ; 00489e82
    PUSH 0xc8                           ; 00489e84
    LEA EAX,[ESP + 0x74]                ; 00489e89
    PUSH EAX                            ; 00489e8d
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromBottomRight_FUN_004878b0 ; 00489e8e
        ;   XREF to: 004878b0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromBottomRight_FUN_004878b0(CDrawSurface * this_ptr, int bottom_right_x, int bottom_right_y, int radius)
    ADD ESP,0x10                        ; 00489e93
    PUSH 0xf9                           ; 00489e96
    CALL cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_00487010 ; 00489e9b
        ;   XREF to: 00487010 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_00487010(int color_value)
    ADD ESP,0x4                         ; 00489ea0
    PUSH 0x0                            ; 00489ea3
    CALL cockpit_drawsurf.cpp_setCurrentFont_FUN_004874c0 ; 00489ea5
        ;   XREF to: 004874c0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_setCurrentFont_FUN_004874c0(CBitFont * font_ptr)
    ADD ESP,0x4                         ; 00489eaa
    PUSH 0x621eb5                       ; 00489ead | = "Hello"
    PUSH 0x2                            ; 00489eb2
    PUSH 0x5                            ; 00489eb4
    LEA EAX,[ESP + 0x74]                ; 00489eb6
    PUSH EAX                            ; 00489eba
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00489420 ; 00489ebb
        ;   XREF to: 00489420 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00489420(CDrawSurface * this_ptr, int x, int y, char * text)
    ADD ESP,0x10                        ; 00489ec0
    PUSH 0x621ebb                       ; 00489ec3 | = "Hello"
    PUSH 0x11                           ; 00489ec8
    PUSH -0x5                           ; 00489eca
    LEA EAX,[ESP + 0x74]                ; 00489ecc
    PUSH EAX                            ; 00489ed0
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00489420 ; 00489ed1
        ;   XREF to: 00489420 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00489420(CDrawSurface * this_ptr, int x, int y, char * text)
    ADD ESP,0x10                        ; 00489ed6
    PUSH 0x621ec1                       ; 00489ed9 | = "Hello\nworld\n..."
    PUSH 0x11                           ; 00489ede
    PUSH 0xb9                           ; 00489ee0
    LEA EAX,[ESP + 0x74]                ; 00489ee5
    PUSH EAX                            ; 00489ee9
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00489420 ; 00489eea
        ;   XREF to: 00489420 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00489420(CDrawSurface * this_ptr, int x, int y, char * text)
    ADD ESP,0x10                        ; 00489eef
    PUSH 0x621ed1                       ; 00489ef2 | = "+"
    PUSH 0x11                           ; 00489ef7
    PUSH 0x64                           ; 00489ef9
    LEA EAX,[ESP + 0x74]                ; 00489efb
    PUSH EAX                            ; 00489eff
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredWrapper_FUN_004895c0 ; 00489f00
        ;   XREF to: 004895c0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredWrapper_FUN_004895c0(CDrawSurface * this_ptr, int x, int y, char * text)
    ADD ESP,0x10                        ; 00489f05
    PUSH 0x621ed3                       ; 00489f08 | = "+"
    PUSH 0x20                           ; 00489f0d
    PUSH 0x6c                           ; 00489f0f
    PUSH 0x5c                           ; 00489f11
    LEA EAX,[ESP + 0x78]                ; 00489f13
    PUSH EAX                            ; 00489f17
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBoundsWrapper_FUN_00489830 ; 00489f18
        ;   XREF to: 00489830 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBoundsWrapper_FUN_00489830(CDrawSurface * this_ptr, int x, int y, int width, ...)
    ADD ESP,0x14                        ; 00489f1d
    PUSH ESI                            ; 00489f20
    CALL cockpit_drawsurf.cpp_setCurrentFont_FUN_004874c0 ; 00489f21
        ;   XREF to: 004874c0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_setCurrentFont_FUN_004874c0(CBitFont * font_ptr)
    ADD ESP,0x4                         ; 00489f26
    PUSH 0x621ed5                       ; 00489f29 | = "Hello"
    PUSH 0x2a                           ; 00489f2e
    PUSH 0x5                            ; 00489f30
    LEA EAX,[ESP + 0x74]                ; 00489f32
    PUSH EAX                            ; 00489f36
    MOV dword ptr [ESI + 0x3184],0x0    ; 00489f37
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00489420 ; 00489f41
        ;   XREF to: 00489420 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00489420(CDrawSurface * this_ptr, int x, int y, char * text)
    ADD ESP,0x10                        ; 00489f46
    PUSH 0x621edb                       ; 00489f49 | = "Hello"
    PUSH 0x39                           ; 00489f4e
    PUSH -0x5                           ; 00489f50
    LEA EAX,[ESP + 0x74]                ; 00489f52
    PUSH EAX                            ; 00489f56
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00489420 ; 00489f57
        ;   XREF to: 00489420 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00489420(CDrawSurface * this_ptr, int x, int y, char * text)
    ADD ESP,0x10                        ; 00489f5c
    PUSH 0x621ee1                       ; 00489f5f | = "Hello"
    PUSH 0x39                           ; 00489f64
    PUSH 0xb9                           ; 00489f66
    LEA EAX,[ESP + 0x74]                ; 00489f6b
    PUSH EAX                            ; 00489f6f
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00489420 ; 00489f70
        ;   XREF to: 00489420 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00489420(CDrawSurface * this_ptr, int x, int y, char * text)
    ADD ESP,0x10                        ; 00489f75
    MOV dword ptr [ESI + 0x3184],0x1    ; 00489f78
    PUSH 0x621ee7                       ; 00489f82 | = "Hello"
    PUSH 0x48                           ; 00489f87
    PUSH -0x5                           ; 00489f89
    LEA EAX,[ESP + 0x74]                ; 00489f8b
    PUSH EAX                            ; 00489f8f
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00489420 ; 00489f90
        ;   XREF to: 00489420 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00489420(CDrawSurface * this_ptr, int x, int y, char * text)
    ADD ESP,0x10                        ; 00489f95
    PUSH 0x621eed                       ; 00489f98 | = "Hello"
    PUSH 0x48                           ; 00489f9d
    PUSH 0xb9                           ; 00489f9f
    LEA EAX,[ESP + 0x74]                ; 00489fa4
    PUSH EAX                            ; 00489fa8
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00489420 ; 00489fa9
        ;   XREF to: 00489420 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00489420(CDrawSurface * this_ptr, int x, int y, char * text)
    ADD ESP,0x10                        ; 00489fae
    PUSH 0x621ef3                       ; 00489fb1 | = "+"
    PUSH 0x48                           ; 00489fb6
    PUSH 0x64                           ; 00489fb8
    LEA EAX,[ESP + 0x74]                ; 00489fba
    PUSH EAX                            ; 00489fbe
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredWrapper_FUN_004895c0 ; 00489fbf
        ;   XREF to: 004895c0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredWrapper_FUN_004895c0(CDrawSurface * this_ptr, int x, int y, char * text)
    ADD ESP,0x10                        ; 00489fc4
    PUSH 0x621ef5                       ; 00489fc7 | = "+"
    PUSH 0x57                           ; 00489fcc
    PUSH 0x6c                           ; 00489fce
    PUSH 0x5c                           ; 00489fd0
    LEA EAX,[ESP + 0x78]                ; 00489fd2
    PUSH EAX                            ; 00489fd6
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBoundsWrapper_FUN_00489830 ; 00489fd7
        ;   XREF to: 00489830 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBoundsWrapper_FUN_00489830(CDrawSurface * this_ptr, int x, int y, int width, ...)
    ADD ESP,0x14                        ; 00489fdc
    PUSH 0xff                           ; 00489fdf
    CALL cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_00487010 ; 00489fe4
        ;   XREF to: 00487010 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_00487010(int color_value)
    ADD ESP,0x4                         ; 00489fe9
    PUSH 0x14                           ; 00489fec
    PUSH 0x64                           ; 00489fee
    LEA EAX,[ESP + 0x70]                ; 00489ff0
    PUSH EAX                            ; 00489ff4
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0 ; 00489ff5
        ;   XREF to: 004874d0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 00489ffa
    PUSH 0x23                           ; 00489ffd
    PUSH 0x64                           ; 00489fff
    LEA EAX,[ESP + 0x70]                ; 0048a001
    PUSH EAX                            ; 0048a005
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0 ; 0048a006
        ;   XREF to: 004874d0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 0048a00b
    PUSH 0x4f                           ; 0048a00e
    PUSH 0x64                           ; 0048a010
    LEA EAX,[ESP + 0x70]                ; 0048a012
    PUSH EAX                            ; 0048a016
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0 ; 0048a017
        ;   XREF to: 004874d0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 0048a01c
    PUSH 0x5e                           ; 0048a01f
    PUSH 0x64                           ; 0048a021
    LEA EAX,[ESP + 0x70]                ; 0048a023
    PUSH EAX                            ; 0048a027
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0 ; 0048a028
        ;   XREF to: 004874d0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 0048a02d
    PUSH 0x0                            ; 0048a030
    PUSH 0x0                            ; 0048a032
    PUSH 0xff                           ; 0048a034
    CALL cockpit_drawsurf.cpp_CDrawSurface_setColorRGB_FUN_00487220 ; 0048a039
        ;   XREF to: 00487220 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_setColorRGB_FUN_00487220(int red, int green, int blue)
    ADD ESP,0xc                         ; 0048a03e
    LEA EAX,[ESP + 0x28]                ; 0048a041
    PUSH EAX                            ; 0048a045
    CALL cockpit_drawsurf.cpp_CDrawSurface_fillFullSurface_FUN_00488c70 ; 0048a046
        ;   XREF to: 00488c70 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_fillFullSurface_FUN_00488c70(CDrawSurface * this_ptr)
    ADD ESP,0x4                         ; 0048a04b
    PUSH 0xfb                           ; 0048a04e
    CALL cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_00487010 ; 0048a053
        ;   XREF to: 00487010 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_00487010(int color_value)
    ADD ESP,0x4                         ; 0048a058
    LEA EAX,[ESP + 0x28]                ; 0048a05b
    PUSH EAX                            ; 0048a05f
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawSurfaceBorder_FUN_00488530 ; 0048a060
        ;   XREF to: 00488530 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawSurfaceBorder_FUN_00488530(CDrawSurface * this_ptr)
    ADD ESP,0x4                         ; 0048a065
    PUSH 0x15                           ; 0048a068
    PUSH 0x29                           ; 0048a06a
    PUSH -0xb                           ; 0048a06c
    PUSH -0x15                          ; 0048a06e
    LEA EAX,[ESP + 0x38]                ; 0048a070
    PUSH EAX                            ; 0048a074
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawClippedLine_FUN_00487990 ; 0048a075
        ;   XREF to: 00487990 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawClippedLine_FUN_00487990(CDrawSurface * this_ptr, int x1, int y1, int x2, ...)
    ADD ESP,0x14                        ; 0048a07a
    PUSH 0x6                            ; 0048a07d
    PUSH 0x5                            ; 0048a07f
    PUSH 0xa                            ; 0048a081
    LEA EAX,[ESP + 0x34]                ; 0048a083
    PUSH EAX                            ; 0048a087
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_00487730 ; 0048a088
        ;   XREF to: 00487730 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_00487730(CDrawSurface * this_ptr, int center_x, int center_y, int radius)
    ADD ESP,0x10                        ; 0048a08d
    PUSH 0xff                           ; 0048a090
    PUSH 0x0                            ; 0048a095
    PUSH 0x0                            ; 0048a097
    CALL cockpit_drawsurf.cpp_CDrawSurface_setColorRGB_FUN_00487220 ; 0048a099
        ;   XREF to: 00487220 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_setColorRGB_FUN_00487220(int red, int green, int blue)
    ADD ESP,0xc                         ; 0048a09e
    LEA EAX,[ESP + 0x8]                 ; 0048a0a1
    PUSH EAX                            ; 0048a0a5
    CALL cockpit_drawsurf.cpp_CDrawSurface_fillFullSurface_FUN_00488c70 ; 0048a0a6
        ;   XREF to: 00488c70 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_fillFullSurface_FUN_00488c70(CDrawSurface * this_ptr)
    ADD ESP,0x4                         ; 0048a0ab
    PUSH 0xfb                           ; 0048a0ae
    CALL cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_00487010 ; 0048a0b3
        ;   XREF to: 00487010 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_00487010(int color_value)
    ADD ESP,0x4                         ; 0048a0b8
    LEA EAX,[ESP + 0x8]                 ; 0048a0bb
    PUSH EAX                            ; 0048a0bf
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawSurfaceBorder_FUN_00488530 ; 0048a0c0
        ;   XREF to: 00488530 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawSurfaceBorder_FUN_00488530(CDrawSurface * this_ptr)
    ADD ESP,0x4                         ; 0048a0c5
    PUSH 0x9                            ; 0048a0c8
    PUSH 0x13                           ; 0048a0ca
    PUSH 0x0                            ; 0048a0cc
    PUSH 0x0                            ; 0048a0ce
    LEA EAX,[ESP + 0x18]                ; 0048a0d0
    PUSH EAX                            ; 0048a0d4
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawClippedLine_FUN_00487990 ; 0048a0d5
        ;   XREF to: 00487990 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawClippedLine_FUN_00487990(CDrawSurface * this_ptr, int x1, int y1, int x2, ...)
    MOV EAX,[0x006703e4]                ; 0048a0da | = "A+A"
    ADD ESP,0x14                        ; 0048a0df
    MOV dword ptr [ESP + 0xa8],EAX      ; 0048a0e2 | DAT_00412b41
    MOV EAX,[0x00679394]                ; 0048a0e9 | g_WindowWidth
    MOV EDX,EAX                         ; 0048a0ee
    SAR EDX,0x1f                        ; 0048a0f0
    SUB EAX,EDX                         ; 0048a0f3
    SAR EAX,0x1                         ; 0048a0f5
    MOV EBP,EAX                         ; 0048a0f7
    MOV EAX,[0x00679398]                ; 0048a0f9 | g_WindowHeight
    MOV EDX,EAX                         ; 0048a0fe
    SAR EDX,0x1f                        ; 0048a100
    SUB EAX,EDX                         ; 0048a103
    SAR EAX,0x1                         ; 0048a105
    MOV EDX,dword ptr [0x00679398]      ; 0048a107 | g_WindowHeight
    ADD EAX,0x66                        ; 0048a10d
    DEC EDX                             ; 0048a110
    SUB EDX,EAX                         ; 0048a111
    PUSH 0x0                            ; 0048a113
    LEA EDI,[EDX + 0x1]                 ; 0048a115
    PUSH EDI                            ; 0048a118
    PUSH 0xc9                           ; 0048a119
    PUSH EAX                            ; 0048a11e
    PUSH EBP                            ; 0048a11f
    LEA EAX,[ESP + 0x9c]                ; 0048a120
    PUSH EAX                            ; 0048a127
    MOV EBX,dword ptr [ESI + 0x3170]    ; 0048a128
    CALL cockpit_drawsurf.cpp_CDrawSurface_ctor_FUN_00486ea0 ; 0048a12e
        ;   XREF to: 00486ea0 (UNCONDITIONAL_CALL)  ; CDrawSurface * cockpit_drawsurf.cpp_CDrawSurface_ctor_FUN_00486ea0(CDrawSurface * this_ptr, int x, int y, int width, ...)
    ADD ESP,0x18                        ; 0048a133
    PUSH 0x80                           ; 0048a136
    PUSH 0x80                           ; 0048a13b
    PUSH 0x80                           ; 0048a140
    CALL cockpit_drawsurf.cpp_CDrawSurface_setColorRGB_FUN_00487220 ; 0048a145
        ;   XREF to: 00487220 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_setColorRGB_FUN_00487220(int red, int green, int blue)
    ADD ESP,0xc                         ; 0048a14a
    LEA EAX,[ESP + 0x88]                ; 0048a14d
    PUSH EAX                            ; 0048a154
    CALL cockpit_drawsurf.cpp_CDrawSurface_fillFullSurface_FUN_00488c70 ; 0048a155
        ;   XREF to: 00488c70 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_fillFullSurface_FUN_00488c70(CDrawSurface * this_ptr)
    ADD ESP,0x4                         ; 0048a15a
    PUSH 0x7                            ; 0048a15d
    CALL cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_00487010 ; 0048a15f
        ;   XREF to: 00487010 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_00487010(int color_value)
    ADD ESP,0x4                         ; 0048a164
    LEA EAX,[ESP + 0x88]                ; 0048a167
    PUSH EAX                            ; 0048a16e
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawSurfaceBorder_FUN_00488530 ; 0048a16f
        ;   XREF to: 00488530 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawSurfaceBorder_FUN_00488530(CDrawSurface * this_ptr)
    ADD ESP,0x4                         ; 0048a174
    PUSH 0xf9                           ; 0048a177
    CALL cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_00487010 ; 0048a17c
        ;   XREF to: 00487010 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_00487010(int color_value)
    ADD ESP,0x4                         ; 0048a181
    PUSH ESI                            ; 0048a184
    CALL cockpit_drawsurf.cpp_setCurrentFont_FUN_004874c0 ; 0048a185
        ;   XREF to: 004874c0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_setCurrentFont_FUN_004874c0(CBitFont * font_ptr)
    ADD ESP,0x4                         ; 0048a18a
    MOV dword ptr [ESI + 0x3184],0x1    ; 0048a18d
    LEA EAX,[ESP + 0xa8]                ; 0048a197
    PUSH EAX                            ; 0048a19e
    PUSH 0x621ef7                       ; 0048a19f | = "%s"
    PUSH 0x1                            ; 0048a1a4
    PUSH 0x1                            ; 0048a1a6
    LEA EAX,[ESP + 0x98]                ; 0048a1a8
    PUSH EAX                            ; 0048a1af
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedPrintf_FUN_00489450 ; 0048a1b0
        ;   XREF to: 00489450 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedPrintf_FUN_00489450(CDrawSurface * this_ptr, int x, int y, char * format)
    ADD ESP,0x14                        ; 0048a1b5
    LEA EAX,[ESP + 0xa8]                ; 0048a1b8
    PUSH EAX                            ; 0048a1bf
    PUSH 0x621efa                       ; 0048a1c0 | = "%s"
    PUSH 0x1                            ; 0048a1c5
    PUSH 0xc7                           ; 0048a1c7
    LEA EAX,[ESP + 0x98]                ; 0048a1cc
    PUSH EAX                            ; 0048a1d3
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVariantPrintf_FUN_00489520 ; 0048a1d4
        ;   XREF to: 00489520 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVariantPrintf_FUN_00489520(CDrawSurface * this_ptr, int x, int y, char * format)
    ADD ESP,0x14                        ; 0048a1d9
    LEA EAX,[ESP + 0xa8]                ; 0048a1dc
    PUSH EAX                            ; 0048a1e3
    PUSH 0x621efd                       ; 0048a1e4 | = "%s"
    PUSH 0x1                            ; 0048a1e9
    PUSH 0x64                           ; 0048a1eb
    LEA EAX,[ESP + 0x98]                ; 0048a1ed
    PUSH EAX                            ; 0048a1f4
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredPrintf_FUN_004895f0 ; 0048a1f5
        ;   XREF to: 004895f0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredPrintf_FUN_004895f0(CDrawSurface * this_ptr, int x, int y, char * format)
    ADD ESP,0x14                        ; 0048a1fa
    LEA EAX,[ESP + 0xa8]                ; 0048a1fd
    PUSH EAX                            ; 0048a204
    PUSH 0x621f00                       ; 0048a205 | = "%s"
    LEA EBP,[EBX + 0x1]                 ; 0048a20a
    PUSH EBP                            ; 0048a20d
    PUSH 0x64                           ; 0048a20e
    LEA EAX,[ESP + 0x98]                ; 0048a210
    PUSH EAX                            ; 0048a217
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVCenteredPrintf_FUN_004896c0 ; 0048a218
        ;   XREF to: 004896c0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVCenteredPrintf_FUN_004896c0(CDrawSurface * this_ptr, int x, int y, char * format)
    ADD ESP,0x14                        ; 0048a21d
    LEA EAX,[ESP + 0xa8]                ; 0048a220
    PUSH EAX                            ; 0048a227
    LEA EAX,[EBX + EBX*0x1]             ; 0048a228
    PUSH 0x621f03                       ; 0048a22b | = "%s"
    MOV dword ptr [ESP + 0xc4],EAX      ; 0048a230
    INC EAX                             ; 0048a237
    PUSH EAX                            ; 0048a238
    PUSH 0x64                           ; 0048a239
    MOV dword ptr [ESP + 0xd0],EAX      ; 0048a23b
    LEA EAX,[ESP + 0x98]                ; 0048a242
    PUSH EAX                            ; 0048a249
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredBothPrintf_FUN_00489790 ; 0048a24a
        ;   XREF to: 00489790 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredBothPrintf_FUN_00489790(CDrawSurface * this_ptr, int x, int y, char * format)
    ADD ESP,0x14                        ; 0048a24f
    LEA EAX,[ESP + 0xa8]                ; 0048a252
    PUSH EAX                            ; 0048a259
    LEA EAX,[EBX*0x4 + 0x0]             ; 0048a25a
    SUB EAX,EBX                         ; 0048a261
    MOV dword ptr [ESP + 0xb4],EAX      ; 0048a263
    MOV EDX,dword ptr [ESP + 0xb4]      ; 0048a26a
    MOV EAX,EDI                         ; 0048a271
    PUSH 0x621f06                       ; 0048a273 | = "%s"
    SUB EAX,EDX                         ; 0048a278
    PUSH EAX                            ; 0048a27a
    PUSH 0x96                           ; 0048a27b
    PUSH 0x32                           ; 0048a280
    MOV dword ptr [ESP + 0xc0],EAX      ; 0048a282
    LEA EAX,[ESP + 0x9c]                ; 0048a289
    PUSH EAX                            ; 0048a290
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBoundsPrintf_FUN_00489860 ; 0048a291
        ;   XREF to: 00489860 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBoundsPrintf_FUN_00489860(CDrawSurface * this_ptr, int x, int y, int width, ...)
    ADD ESP,0x18                        ; 0048a296
    LEA EAX,[ESP + 0xa8]                ; 0048a299
    MOV EDX,dword ptr [ESP + 0xbc]      ; 0048a2a0
    PUSH EAX                            ; 0048a2a7
    MOV EAX,EDI                         ; 0048a2a8
    SUB EAX,EDX                         ; 0048a2aa
    PUSH 0x621f09                       ; 0048a2ac | = "%s"
    MOV dword ptr [ESP + 0xc0],EAX      ; 0048a2b1
    ADD EAX,0x32                        ; 0048a2b8
    PUSH EAX                            ; 0048a2bb
    MOV EAX,dword ptr [ESP + 0xc4]      ; 0048a2bc
    SUB EAX,0x32                        ; 0048a2c3
    PUSH EAX                            ; 0048a2c6
    PUSH 0x64                           ; 0048a2c7
    LEA EAX,[ESP + 0x9c]                ; 0048a2c9
    PUSH EAX                            ; 0048a2d0
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaPrintf_FUN_00489940 ; 0048a2d1
        ;   XREF to: 00489940 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaPrintf_FUN_00489940(CDrawSurface * this_ptr, int x, int y, int height, ...)
    ADD ESP,0x18                        ; 0048a2d6
    LEA EAX,[ESP + 0xa8]                ; 0048a2d9
    PUSH EAX                            ; 0048a2e0
    SUB EDI,EBX                         ; 0048a2e1
    PUSH 0x621f0c                       ; 0048a2e3 | = "%s"
    LEA EAX,[EDI + 0x32]                ; 0048a2e8
    PUSH EAX                            ; 0048a2eb
    LEA EAX,[EDI + -0x32]               ; 0048a2ec
    PUSH EAX                            ; 0048a2ef
    PUSH 0x96                           ; 0048a2f0
    PUSH 0x32                           ; 0048a2f5
    LEA EAX,[ESP + 0xa0]                ; 0048a2f7
    PUSH EAX                            ; 0048a2fe
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidthPrintf_FUN_00489a30 ; 0048a2ff
        ;   XREF to: 00489a30 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidthPrintf_FUN_00489a30(CDrawSurface * this_ptr, int x, int width, int y, ...)
    ADD ESP,0x1c                        ; 0048a304
    LEA EAX,[ESP + 0xa8]                ; 0048a307
    PUSH EAX                            ; 0048a30e
    PUSH 0x621f0f                       ; 0048a30f | = "%s"
    LEA EAX,[ESP + 0x90]                ; 0048a314
    PUSH EAX                            ; 0048a31b
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurfacePrintf_FUN_00489c40 ; 0048a31c
        ;   XREF to: 00489c40 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurfacePrintf_FUN_00489c40(CDrawSurface * this_ptr, char * format)
    ADD ESP,0xc                         ; 0048a321
    PUSH 0xfb                           ; 0048a324
    CALL cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_00487010 ; 0048a329
        ;   XREF to: 00487010 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_00487010(int color_value)
    ADD ESP,0x4                         ; 0048a32e
    PUSH 0x1                            ; 0048a331
    PUSH 0x1                            ; 0048a333
    LEA EAX,[ESP + 0x90]                ; 0048a335
    PUSH EAX                            ; 0048a33c
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0 ; 0048a33d
        ;   XREF to: 004874d0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 0048a342
    PUSH 0x1                            ; 0048a345
    PUSH 0xc7                           ; 0048a347
    LEA EAX,[ESP + 0x90]                ; 0048a34c
    PUSH EAX                            ; 0048a353
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0 ; 0048a354
        ;   XREF to: 004874d0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 0048a359
    PUSH 0x1                            ; 0048a35c
    PUSH 0x64                           ; 0048a35e
    LEA EAX,[ESP + 0x90]                ; 0048a360
    PUSH EAX                            ; 0048a367
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0 ; 0048a368
        ;   XREF to: 004874d0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 0048a36d
    PUSH EBP                            ; 0048a370
    PUSH 0x64                           ; 0048a371
    LEA EAX,[ESP + 0x90]                ; 0048a373
    PUSH EAX                            ; 0048a37a
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0 ; 0048a37b
        ;   XREF to: 004874d0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 0048a380
    MOV ECX,dword ptr [ESP + 0xc0]      ; 0048a383
    PUSH ECX                            ; 0048a38a
    PUSH 0x64                           ; 0048a38b
    LEA EAX,[ESP + 0x90]                ; 0048a38d
    PUSH EAX                            ; 0048a394
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0 ; 0048a395
        ;   XREF to: 004874d0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 0048a39a
    MOV EAX,dword ptr [ESP + 0xac]      ; 0048a39d
    PUSH EAX                            ; 0048a3a4
    PUSH 0x64                           ; 0048a3a5
    LEA EAX,[ESP + 0x90]                ; 0048a3a7
    PUSH EAX                            ; 0048a3ae
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0 ; 0048a3af
        ;   XREF to: 004874d0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 0048a3b4
    MOV EDX,dword ptr [ESP + 0xb8]      ; 0048a3b7
    PUSH EDX                            ; 0048a3be
    PUSH 0x64                           ; 0048a3bf
    LEA EAX,[ESP + 0x90]                ; 0048a3c1
    PUSH EAX                            ; 0048a3c8
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0 ; 0048a3c9
        ;   XREF to: 004874d0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 0048a3ce
    PUSH EDI                            ; 0048a3d1
    PUSH 0x64                           ; 0048a3d2
    LEA EAX,[ESP + 0x90]                ; 0048a3d4
    PUSH EAX                            ; 0048a3db
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0 ; 0048a3dc
        ;   XREF to: 004874d0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0(CDrawSurface * this_ptr, int x, int y)
    MOV EAX,[0x00679394]                ; 0048a3e1 | g_WindowWidth
    MOV EDX,EAX                         ; 0048a3e6
    SAR EDX,0x1f                        ; 0048a3e8
    SUB EAX,EDX                         ; 0048a3eb
    SAR EAX,0x1                         ; 0048a3ed
    LEA ECX,[EAX + 0xffffff36]          ; 0048a3ef
    MOV EAX,[0x00679398]                ; 0048a3f5 | g_WindowHeight
    MOV EDX,EAX                         ; 0048a3fa
    SAR EDX,0x1f                        ; 0048a3fc
    SUB EAX,EDX                         ; 0048a3ff
    SAR EAX,0x1                         ; 0048a401
    MOV EDX,dword ptr [0x00679398]      ; 0048a403 | g_WindowHeight
    ADD EAX,0x66                        ; 0048a409
    DEC EDX                             ; 0048a40c
    ADD ESP,0xc                         ; 0048a40d
    SUB EDX,EAX                         ; 0048a410
    PUSH 0x0                            ; 0048a412
    LEA EDI,[EDX + 0x1]                 ; 0048a414
    PUSH EDI                            ; 0048a417
    PUSH 0xc9                           ; 0048a418
    PUSH EAX                            ; 0048a41d
    PUSH ECX                            ; 0048a41e
    LEA EAX,[ESP + 0x5c]                ; 0048a41f
    PUSH EAX                            ; 0048a423
    CALL cockpit_drawsurf.cpp_CDrawSurface_ctor_FUN_00486ea0 ; 0048a424
        ;   XREF to: 00486ea0 (UNCONDITIONAL_CALL)  ; CDrawSurface * cockpit_drawsurf.cpp_CDrawSurface_ctor_FUN_00486ea0(CDrawSurface * this_ptr, int x, int y, int width, ...)
    ADD ESP,0x18                        ; 0048a429
    PUSH 0x80                           ; 0048a42c
    PUSH 0x80                           ; 0048a431
    PUSH 0x80                           ; 0048a436
    CALL cockpit_drawsurf.cpp_CDrawSurface_setColorRGB_FUN_00487220 ; 0048a43b
        ;   XREF to: 00487220 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_setColorRGB_FUN_00487220(int red, int green, int blue)
    ADD ESP,0xc                         ; 0048a440
    LEA EAX,[ESP + 0x48]                ; 0048a443
    PUSH EAX                            ; 0048a447
    CALL cockpit_drawsurf.cpp_CDrawSurface_fillFullSurface_FUN_00488c70 ; 0048a448
        ;   XREF to: 00488c70 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_fillFullSurface_FUN_00488c70(CDrawSurface * this_ptr)
    ADD ESP,0x4                         ; 0048a44d
    PUSH 0x7                            ; 0048a450
    CALL cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_00487010 ; 0048a452
        ;   XREF to: 00487010 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_00487010(int color_value)
    ADD ESP,0x4                         ; 0048a457
    LEA EAX,[ESP + 0x48]                ; 0048a45a
    PUSH EAX                            ; 0048a45e
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawSurfaceBorder_FUN_00488530 ; 0048a45f
        ;   XREF to: 00488530 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawSurfaceBorder_FUN_00488530(CDrawSurface * this_ptr)
    ADD ESP,0x4                         ; 0048a464
    PUSH 0xf9                           ; 0048a467
    CALL cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_00487010 ; 0048a46c
        ;   XREF to: 00487010 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_00487010(int color_value)
    ADD ESP,0x4                         ; 0048a471
    PUSH 0x0                            ; 0048a474
    CALL cockpit_drawsurf.cpp_setCurrentFont_FUN_004874c0 ; 0048a476
        ;   XREF to: 004874c0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_setCurrentFont_FUN_004874c0(CBitFont * font_ptr)
    ADD ESP,0x4                         ; 0048a47b
    MOV dword ptr [ESI + 0x3184],0x1    ; 0048a47e
    LEA EAX,[ESP + 0xa8]                ; 0048a488
    PUSH EAX                            ; 0048a48f
    PUSH 0x621f12                       ; 0048a490 | = "%s"
    PUSH 0x1                            ; 0048a495
    PUSH 0x1                            ; 0048a497
    LEA EAX,[ESP + 0x58]                ; 0048a499
    PUSH EAX                            ; 0048a49d
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedPrintf_FUN_00489450 ; 0048a49e
        ;   XREF to: 00489450 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedPrintf_FUN_00489450(CDrawSurface * this_ptr, int x, int y, char * format)
    ADD ESP,0x14                        ; 0048a4a3
    LEA EAX,[ESP + 0xa8]                ; 0048a4a6
    PUSH EAX                            ; 0048a4ad
    PUSH 0x621f15                       ; 0048a4ae | = "%s"
    PUSH 0x1                            ; 0048a4b3
    PUSH 0xc7                           ; 0048a4b5
    LEA EAX,[ESP + 0x58]                ; 0048a4ba
    PUSH EAX                            ; 0048a4be
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVariantPrintf_FUN_00489520 ; 0048a4bf
        ;   XREF to: 00489520 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVariantPrintf_FUN_00489520(CDrawSurface * this_ptr, int x, int y, char * format)
    ADD ESP,0x14                        ; 0048a4c4
    LEA EAX,[ESP + 0xa8]                ; 0048a4c7
    PUSH EAX                            ; 0048a4ce
    PUSH 0x621f18                       ; 0048a4cf | = "%s"
    PUSH 0x1                            ; 0048a4d4
    PUSH 0x64                           ; 0048a4d6
    LEA EAX,[ESP + 0x58]                ; 0048a4d8
    PUSH EAX                            ; 0048a4dc
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredPrintf_FUN_004895f0 ; 0048a4dd
        ;   XREF to: 004895f0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredPrintf_FUN_004895f0(CDrawSurface * this_ptr, int x, int y, char * format)
    ADD ESP,0x14                        ; 0048a4e2
    LEA EAX,[ESP + 0xa8]                ; 0048a4e5
    PUSH EAX                            ; 0048a4ec
    PUSH 0x621f1b                       ; 0048a4ed | = "%s"
    PUSH EBP                            ; 0048a4f2
    PUSH 0x64                           ; 0048a4f3
    LEA EAX,[ESP + 0x58]                ; 0048a4f5
    PUSH EAX                            ; 0048a4f9
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVCenteredPrintf_FUN_004896c0 ; 0048a4fa
        ;   XREF to: 004896c0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVCenteredPrintf_FUN_004896c0(CDrawSurface * this_ptr, int x, int y, char * format)
    ADD ESP,0x14                        ; 0048a4ff
    LEA EAX,[ESP + 0xa8]                ; 0048a502
    PUSH EAX                            ; 0048a509
    PUSH 0x621f1e                       ; 0048a50a | = "%s"
    MOV ECX,dword ptr [ESP + 0xc8]      ; 0048a50f
    PUSH ECX                            ; 0048a516
    PUSH 0x64                           ; 0048a517
    LEA EAX,[ESP + 0x58]                ; 0048a519
    PUSH EAX                            ; 0048a51d
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredBothPrintf_FUN_00489790 ; 0048a51e
        ;   XREF to: 00489790 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredBothPrintf_FUN_00489790(CDrawSurface * this_ptr, int x, int y, char * format)
    ADD ESP,0x14                        ; 0048a523
    LEA EAX,[ESP + 0xa8]                ; 0048a526
    PUSH EAX                            ; 0048a52d
    MOV ESI,dword ptr [ESP + 0xb4]      ; 0048a52e
    MOV EAX,EDI                         ; 0048a535
    PUSH 0x621f21                       ; 0048a537 | = "%s"
    SUB EAX,ESI                         ; 0048a53c
    PUSH EAX                            ; 0048a53e
    PUSH 0x96                           ; 0048a53f
    PUSH 0x32                           ; 0048a544
    MOV dword ptr [ESP + 0xc8],EAX      ; 0048a546
    LEA EAX,[ESP + 0x5c]                ; 0048a54d
    PUSH EAX                            ; 0048a551
    MOV ESI,EDI                         ; 0048a552
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBoundsPrintf_FUN_00489860 ; 0048a554
        ;   XREF to: 00489860 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBoundsPrintf_FUN_00489860(CDrawSurface * this_ptr, int x, int y, int width, ...)
    ADD ESP,0x18                        ; 0048a559
    LEA EAX,[ESP + 0xa8]                ; 0048a55c
    MOV EDX,dword ptr [ESP + 0xbc]      ; 0048a563
    PUSH EAX                            ; 0048a56a
    SUB ESI,EDX                         ; 0048a56b
    PUSH 0x621f24                       ; 0048a56d | = "%s"
    LEA EAX,[ESI + 0x32]                ; 0048a572
    PUSH EAX                            ; 0048a575
    LEA EAX,[ESI + -0x32]               ; 0048a576
    PUSH EAX                            ; 0048a579
    PUSH 0x64                           ; 0048a57a
    LEA EAX,[ESP + 0x5c]                ; 0048a57c
    PUSH EAX                            ; 0048a580
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaPrintf_FUN_00489940 ; 0048a581
        ;   XREF to: 00489940 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaPrintf_FUN_00489940(CDrawSurface * this_ptr, int x, int y, int height, ...)
    ADD ESP,0x18                        ; 0048a586
    LEA EAX,[ESP + 0xa8]                ; 0048a589
    PUSH EAX                            ; 0048a590
    SUB EDI,EBX                         ; 0048a591
    PUSH 0x621f27                       ; 0048a593 | = "%s"
    LEA EAX,[EDI + 0x32]                ; 0048a598
    PUSH EAX                            ; 0048a59b
    LEA EAX,[EDI + -0x32]               ; 0048a59c
    PUSH EAX                            ; 0048a59f
    PUSH 0x96                           ; 0048a5a0
    PUSH 0x32                           ; 0048a5a5
    LEA EAX,[ESP + 0x60]                ; 0048a5a7
    PUSH EAX                            ; 0048a5ab
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidthPrintf_FUN_00489a30 ; 0048a5ac
        ;   XREF to: 00489a30 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidthPrintf_FUN_00489a30(CDrawSurface * this_ptr, int x, int width, int y, ...)
    ADD ESP,0x1c                        ; 0048a5b1
    LEA EAX,[ESP + 0xa8]                ; 0048a5b4
    PUSH EAX                            ; 0048a5bb
    PUSH 0x621f2a                       ; 0048a5bc | = "%s"
    LEA EAX,[ESP + 0x50]                ; 0048a5c1
    PUSH EAX                            ; 0048a5c5
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurfacePrintf_FUN_00489c40 ; 0048a5c6
        ;   XREF to: 00489c40 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurfacePrintf_FUN_00489c40(CDrawSurface * this_ptr, char * format)
    ADD ESP,0xc                         ; 0048a5cb
    PUSH 0xfb                           ; 0048a5ce
    CALL cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_00487010 ; 0048a5d3
        ;   XREF to: 00487010 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_00487010(int color_value)
    ADD ESP,0x4                         ; 0048a5d8
    PUSH 0x1                            ; 0048a5db
    PUSH 0x1                            ; 0048a5dd
    LEA EAX,[ESP + 0x50]                ; 0048a5df
    PUSH EAX                            ; 0048a5e3
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0 ; 0048a5e4
        ;   XREF to: 004874d0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 0048a5e9
    PUSH 0x1                            ; 0048a5ec
    PUSH 0xc7                           ; 0048a5ee
    LEA EAX,[ESP + 0x50]                ; 0048a5f3
    PUSH EAX                            ; 0048a5f7
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0 ; 0048a5f8
        ;   XREF to: 004874d0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 0048a5fd
    PUSH 0x1                            ; 0048a600
    PUSH 0x64                           ; 0048a602
    LEA EAX,[ESP + 0x50]                ; 0048a604
    PUSH EAX                            ; 0048a608
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0 ; 0048a609
        ;   XREF to: 004874d0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 0048a60e
    PUSH EBP                            ; 0048a611
    PUSH 0x64                           ; 0048a612
    LEA EAX,[ESP + 0x50]                ; 0048a614
    PUSH EAX                            ; 0048a618
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0 ; 0048a619
        ;   XREF to: 004874d0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 0048a61e
    MOV ECX,dword ptr [ESP + 0xc0]      ; 0048a621
    PUSH ECX                            ; 0048a628
    PUSH 0x64                           ; 0048a629
    LEA EAX,[ESP + 0x50]                ; 0048a62b
    PUSH EAX                            ; 0048a62f
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0 ; 0048a630
        ;   XREF to: 004874d0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 0048a635
    MOV EBX,dword ptr [ESP + 0xb4]      ; 0048a638
    PUSH EBX                            ; 0048a63f
    PUSH 0x64                           ; 0048a640
    LEA EAX,[ESP + 0x50]                ; 0048a642
    PUSH EAX                            ; 0048a646
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0 ; 0048a647
        ;   XREF to: 004874d0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 0048a64c
    PUSH ESI                            ; 0048a64f
    PUSH 0x64                           ; 0048a650
    LEA EAX,[ESP + 0x50]                ; 0048a652
    PUSH EAX                            ; 0048a656
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0 ; 0048a657
        ;   XREF to: 004874d0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 0048a65c
    PUSH EDI                            ; 0048a65f
    PUSH 0x64                           ; 0048a660
    LEA EAX,[ESP + 0x50]                ; 0048a662
    PUSH EAX                            ; 0048a666
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0 ; 0048a667
        ;   XREF to: 004874d0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 0048a66c
    PUSH 0x4                            ; 0048a66f
    CALL cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_00487010 ; 0048a671
        ;   XREF to: 00487010 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_00487010(int color_value)
    ADD ESP,0x4                         ; 0048a676
    LEA EAX,[ESP + 0x48]                ; 0048a679
    PUSH EAX                            ; 0048a67d
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawAnimatedFullSurface_FUN_00488990 ; 0048a67e
        ;   XREF to: 00488990 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawAnimatedFullSurface_FUN_00488990(CDrawSurface * this_ptr)
    ADD ESP,0x4                         ; 0048a683
    POP EBX                             ; 0048a686
    POP EDI                             ; 0048a687
    ADD ESP,0xbc                        ; 0048a688
    POP EBP                             ; 0048a68e
    POP ESI                             ; 0048a68f
    RET                                 ; 0048a690

