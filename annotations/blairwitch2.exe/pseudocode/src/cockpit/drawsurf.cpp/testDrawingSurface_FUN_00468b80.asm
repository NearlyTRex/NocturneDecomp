; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_testDrawingSurface_FUN_00468b80(CBitFont *test_font)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   test_font
;
; Referenced Globals:
;   undefined4 DAT_0060b278
;   undefined4 DAT_006141b8
;   undefined4 DAT_006141bc
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_004665c0
;   cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromBottomLeft_FUN_00466710
;   cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromBottomRight_FUN_00466740
;   cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromTopLeft_FUN_004666b0
;   cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromTopRight_FUN_004666e0
;   cockpit_drawsurf.cpp_CDrawSurface_drawClippedLine_FUN_00466820
;   cockpit_drawsurf.cpp_CDrawSurface_drawSurfaceBorder_FUN_004673b0
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurfacePrintf_FUN_00468a90
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidthPrintf_FUN_00468880
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBoundsWrapper_FUN_00468680
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredWrapper_FUN_00468410
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00468270
;   cockpit_drawsurf.cpp_CDrawSurface_fillFullSurface_FUN_00467ac0
;   cockpit_drawsurf.cpp_CDrawSurface_initFromParent_FUN_00465d30
;   cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00466360
;   ... and 11 more
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00468b80
        ;   Label: cockpit_drawsurf.cpp_testDrawingSurface_FUN_00468b80
    PUSH EBP                            ; 00468b81
    SUB ESP,0xbc                        ; 00468b82
    MOV ESI,dword ptr [ESP + 0xc8]      ; 00468b88
    MOV EDX,dword ptr [0x006141b8]      ; 00468b8f | DAT_006141b8
    CMP EDX,0x280                       ; 00468b95
    JL 0x00468bab                       ; 00468b9b
        ;   XREF to: 00468bab (CONDITIONAL_JUMP)  ; LAB_00468bab
    MOV ECX,dword ptr [0x006141bc]      ; 00468b9d | DAT_006141bc
    CMP ECX,0x1e0                       ; 00468ba3
    JGE 0x00468bb4                      ; 00468ba9
        ;   XREF to: 00468bb4 (CONDITIONAL_JUMP)  ; LAB_00468bb4
    ADD ESP,0xbc                        ; 00468bab
        ;   Label: LAB_00468bab
    POP EBP                             ; 00468bb1
    POP ESI                             ; 00468bb2
    RET                                 ; 00468bb3
    PUSH EDI                            ; 00468bb4
        ;   Label: LAB_00468bb4
    PUSH EBX                            ; 00468bb5
    MOV EAX,EDX                         ; 00468bb6
    SAR EDX,0x1f                        ; 00468bb8
    SUB EAX,EDX                         ; 00468bbb
    SAR EAX,0x1                         ; 00468bbd
    MOV EBX,EAX                         ; 00468bbf
    MOV EDX,ECX                         ; 00468bc1
    MOV EAX,ECX                         ; 00468bc3
    SAR EDX,0x1f                        ; 00468bc5
    SUB EAX,EDX                         ; 00468bc8
    SAR EAX,0x1                         ; 00468bca
    PUSH 0x0                            ; 00468bcc
    PUSH 0x65                           ; 00468bce
    PUSH 0xc9                           ; 00468bd0
    PUSH EAX                            ; 00468bd5
    PUSH EBX                            ; 00468bd6
    LEA EAX,[ESP + 0x7c]                ; 00468bd7
    PUSH EAX                            ; 00468bdb
    CALL cockpit_drawsurf.cpp_CDrawSurface_initFromParent_FUN_00465d30 ; 00468bdc
        ;   XREF to: 00465d30 (UNCONDITIONAL_CALL)  ; CDrawSurface * cockpit_drawsurf.cpp_CDrawSurface_initFromParent_FUN_00465d30(CDrawSurface * this_ptr, int x, int y, int width, ...)
    ADD ESP,0x18                        ; 00468be1
    LEA EAX,[ESP + 0x68]                ; 00468be4
    PUSH EAX                            ; 00468be8
    PUSH 0xb                            ; 00468be9
    PUSH 0x15                           ; 00468beb
    PUSH 0x8                            ; 00468bed
    PUSH 0xc                            ; 00468bef
    LEA EAX,[ESP + 0x3c]                ; 00468bf1
    PUSH EAX                            ; 00468bf5
    CALL cockpit_drawsurf.cpp_CDrawSurface_initFromParent_FUN_00465d30 ; 00468bf6
        ;   XREF to: 00465d30 (UNCONDITIONAL_CALL)  ; CDrawSurface * cockpit_drawsurf.cpp_CDrawSurface_initFromParent_FUN_00465d30(CDrawSurface * this_ptr, int x, int y, int width, ...)
    ADD ESP,0x18                        ; 00468bfb
    LEA EAX,[ESP + 0x68]                ; 00468bfe
    PUSH EAX                            ; 00468c02
    PUSH 0xa                            ; 00468c03
    PUSH 0x14                           ; 00468c05
    PUSH 0x5f                           ; 00468c07
    PUSH 0xbe                           ; 00468c09
    LEA EAX,[ESP + 0x1c]                ; 00468c0e
    PUSH EAX                            ; 00468c12
    CALL cockpit_drawsurf.cpp_CDrawSurface_initFromParent_FUN_00465d30 ; 00468c13
        ;   XREF to: 00465d30 (UNCONDITIONAL_CALL)  ; CDrawSurface * cockpit_drawsurf.cpp_CDrawSurface_initFromParent_FUN_00465d30(CDrawSurface * this_ptr, int x, int y, int width, ...)
    ADD ESP,0x18                        ; 00468c18
    PUSH 0x80                           ; 00468c1b
    PUSH 0x80                           ; 00468c20
    PUSH 0x80                           ; 00468c25
    CALL cockpit_drawsurf.cpp_setColorRGB_FUN_004660b0 ; 00468c2a
        ;   XREF to: 004660b0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_setColorRGB_FUN_004660b0(int red, int green, int blue)
    ADD ESP,0xc                         ; 00468c2f
    LEA EAX,[ESP + 0x68]                ; 00468c32
    PUSH EAX                            ; 00468c36
    CALL cockpit_drawsurf.cpp_CDrawSurface_fillFullSurface_FUN_00467ac0 ; 00468c37
        ;   XREF to: 00467ac0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_fillFullSurface_FUN_00467ac0(CDrawSurface * this_ptr)
    ADD ESP,0x4                         ; 00468c3c
    PUSH 0x7                            ; 00468c3f
    CALL cockpit_drawsurf.cpp_setColor_FUN_00465ea0 ; 00468c41
        ;   XREF to: 00465ea0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_setColor_FUN_00465ea0(int color_value)
    ADD ESP,0x4                         ; 00468c46
    LEA EAX,[ESP + 0x68]                ; 00468c49
    PUSH EAX                            ; 00468c4d
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawSurfaceBorder_FUN_004673b0 ; 00468c4e
        ;   XREF to: 004673b0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawSurfaceBorder_FUN_004673b0(CDrawSurface * this_ptr)
    ADD ESP,0x4                         ; 00468c53
    PUSH 0x64                           ; 00468c56
    PUSH 0xc8                           ; 00468c58
    PUSH 0x0                            ; 00468c5d
    PUSH 0x0                            ; 00468c5f
    LEA EAX,[ESP + 0x78]                ; 00468c61
    PUSH EAX                            ; 00468c65
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawClippedLine_FUN_00466820 ; 00468c66
        ;   XREF to: 00466820 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawClippedLine_FUN_00466820(CDrawSurface * this_ptr, int x1, int y1, int x2, ...)
    ADD ESP,0x14                        ; 00468c6b
    PUSH 0x64                           ; 00468c6e
    PUSH 0x32                           ; 00468c70
    PUSH 0x64                           ; 00468c72
    LEA EAX,[ESP + 0x74]                ; 00468c74
    PUSH EAX                            ; 00468c78
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_004665c0 ; 00468c79
        ;   XREF to: 004665c0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_004665c0(CDrawSurface * this_ptr, int center_x, int center_y, int radius)
    ADD ESP,0x10                        ; 00468c7e
    PUSH 0x32                           ; 00468c81
    PUSH 0x32                           ; 00468c83
    PUSH 0x64                           ; 00468c85
    LEA EAX,[ESP + 0x74]                ; 00468c87
    PUSH EAX                            ; 00468c8b
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_004665c0 ; 00468c8c
        ;   XREF to: 004665c0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_004665c0(CDrawSurface * this_ptr, int center_x, int center_y, int radius)
    ADD ESP,0x10                        ; 00468c91
    PUSH 0x32                           ; 00468c94
    PUSH 0x0                            ; 00468c96
    PUSH 0x0                            ; 00468c98
    LEA EAX,[ESP + 0x74]                ; 00468c9a
    PUSH EAX                            ; 00468c9e
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromTopLeft_FUN_004666b0 ; 00468c9f
        ;   XREF to: 004666b0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromTopLeft_FUN_004666b0(CDrawSurface * this_ptr, int x, int y, int radius)
    ADD ESP,0x10                        ; 00468ca4
    PUSH 0x32                           ; 00468ca7
    PUSH 0x0                            ; 00468ca9
    PUSH 0xc8                           ; 00468cab
    LEA EAX,[ESP + 0x74]                ; 00468cb0
    PUSH EAX                            ; 00468cb4
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromTopRight_FUN_004666e0 ; 00468cb5
        ;   XREF to: 004666e0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromTopRight_FUN_004666e0(CDrawSurface * this_ptr, int top_right_x, int top_right_y, int radius)
    ADD ESP,0x10                        ; 00468cba
    PUSH 0x32                           ; 00468cbd
    PUSH 0x64                           ; 00468cbf
    PUSH 0x0                            ; 00468cc1
    LEA EAX,[ESP + 0x74]                ; 00468cc3
    PUSH EAX                            ; 00468cc7
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromBottomLeft_FUN_00466710 ; 00468cc8
        ;   XREF to: 00466710 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromBottomLeft_FUN_00466710(CDrawSurface * this_ptr, int bottom_left_x, int bottom_left_y, int radius)
    ADD ESP,0x10                        ; 00468ccd
    PUSH 0x32                           ; 00468cd0
    PUSH 0x64                           ; 00468cd2
    PUSH 0xc8                           ; 00468cd4
    LEA EAX,[ESP + 0x74]                ; 00468cd9
    PUSH EAX                            ; 00468cdd
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromBottomRight_FUN_00466740 ; 00468cde
        ;   XREF to: 00466740 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromBottomRight_FUN_00466740(CDrawSurface * this_ptr, int bottom_right_x, int bottom_right_y, int radius)
    ADD ESP,0x10                        ; 00468ce3
    PUSH 0xf9                           ; 00468ce6
    CALL cockpit_drawsurf.cpp_setColor_FUN_00465ea0 ; 00468ceb
        ;   XREF to: 00465ea0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_setColor_FUN_00465ea0(int color_value)
    ADD ESP,0x4                         ; 00468cf0
    PUSH 0x0                            ; 00468cf3
    CALL cockpit_drawsurf.cpp_setCurrentFont_FUN_00466350 ; 00468cf5
        ;   XREF to: 00466350 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_setCurrentFont_FUN_00466350(CBitFont * font_ptr)
    ADD ESP,0x4                         ; 00468cfa
    PUSH 0x5d1423                       ; 00468cfd
    PUSH 0x2                            ; 00468d02
    PUSH 0x5                            ; 00468d04
    LEA EAX,[ESP + 0x74]                ; 00468d06
    PUSH EAX                            ; 00468d0a
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00468270 ; 00468d0b
        ;   XREF to: 00468270 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00468270(CDrawSurface * this_ptr, int x, int y, char * text)
    ADD ESP,0x10                        ; 00468d10
    PUSH 0x5d1429                       ; 00468d13
    PUSH 0x11                           ; 00468d18
    PUSH -0x5                           ; 00468d1a
    LEA EAX,[ESP + 0x74]                ; 00468d1c
    PUSH EAX                            ; 00468d20
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00468270 ; 00468d21
        ;   XREF to: 00468270 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00468270(CDrawSurface * this_ptr, int x, int y, char * text)
    ADD ESP,0x10                        ; 00468d26
    PUSH 0x5d142f                       ; 00468d29
    PUSH 0x11                           ; 00468d2e
    PUSH 0xb9                           ; 00468d30
    LEA EAX,[ESP + 0x74]                ; 00468d35
    PUSH EAX                            ; 00468d39
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00468270 ; 00468d3a
        ;   XREF to: 00468270 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00468270(CDrawSurface * this_ptr, int x, int y, char * text)
    ADD ESP,0x10                        ; 00468d3f
    PUSH 0x5d143f                       ; 00468d42
    PUSH 0x11                           ; 00468d47
    PUSH 0x64                           ; 00468d49
    LEA EAX,[ESP + 0x74]                ; 00468d4b
    PUSH EAX                            ; 00468d4f
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredWrapper_FUN_00468410 ; 00468d50
        ;   XREF to: 00468410 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredWrapper_FUN_00468410(CDrawSurface * this_ptr, int x, int y, char * text)
    ADD ESP,0x10                        ; 00468d55
    PUSH 0x5d1441                       ; 00468d58
    PUSH 0x20                           ; 00468d5d
    PUSH 0x6c                           ; 00468d5f
    PUSH 0x5c                           ; 00468d61
    LEA EAX,[ESP + 0x78]                ; 00468d63
    PUSH EAX                            ; 00468d67
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBoundsWrapper_FUN_00468680 ; 00468d68
        ;   XREF to: 00468680 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBoundsWrapper_FUN_00468680(CDrawSurface * this_ptr, int x, int y, int width, ...)
    ADD ESP,0x14                        ; 00468d6d
    PUSH ESI                            ; 00468d70
    CALL cockpit_drawsurf.cpp_setCurrentFont_FUN_00466350 ; 00468d71
        ;   XREF to: 00466350 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_setCurrentFont_FUN_00466350(CBitFont * font_ptr)
    ADD ESP,0x4                         ; 00468d76
    PUSH 0x5d1443                       ; 00468d79
    PUSH 0x2a                           ; 00468d7e
    PUSH 0x5                            ; 00468d80
    LEA EAX,[ESP + 0x74]                ; 00468d82
    PUSH EAX                            ; 00468d86
    MOV dword ptr [ESI + 0x4204],0x0    ; 00468d87
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00468270 ; 00468d91
        ;   XREF to: 00468270 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00468270(CDrawSurface * this_ptr, int x, int y, char * text)
    ADD ESP,0x10                        ; 00468d96
    PUSH 0x5d1449                       ; 00468d99
    PUSH 0x39                           ; 00468d9e
    PUSH -0x5                           ; 00468da0
    LEA EAX,[ESP + 0x74]                ; 00468da2
    PUSH EAX                            ; 00468da6
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00468270 ; 00468da7
        ;   XREF to: 00468270 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00468270(CDrawSurface * this_ptr, int x, int y, char * text)
    ADD ESP,0x10                        ; 00468dac
    PUSH 0x5d144f                       ; 00468daf
    PUSH 0x39                           ; 00468db4
    PUSH 0xb9                           ; 00468db6
    LEA EAX,[ESP + 0x74]                ; 00468dbb
    PUSH EAX                            ; 00468dbf
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00468270 ; 00468dc0
        ;   XREF to: 00468270 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00468270(CDrawSurface * this_ptr, int x, int y, char * text)
    ADD ESP,0x10                        ; 00468dc5
    MOV dword ptr [ESI + 0x4204],0x1    ; 00468dc8
    PUSH 0x5d1455                       ; 00468dd2
    PUSH 0x48                           ; 00468dd7
    PUSH -0x5                           ; 00468dd9
    LEA EAX,[ESP + 0x74]                ; 00468ddb
    PUSH EAX                            ; 00468ddf
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00468270 ; 00468de0
        ;   XREF to: 00468270 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00468270(CDrawSurface * this_ptr, int x, int y, char * text)
    ADD ESP,0x10                        ; 00468de5
    PUSH 0x5d145b                       ; 00468de8
    PUSH 0x48                           ; 00468ded
    PUSH 0xb9                           ; 00468def
    LEA EAX,[ESP + 0x74]                ; 00468df4
    PUSH EAX                            ; 00468df8
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00468270 ; 00468df9
        ;   XREF to: 00468270 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00468270(CDrawSurface * this_ptr, int x, int y, char * text)
    ADD ESP,0x10                        ; 00468dfe
    PUSH 0x5d1461                       ; 00468e01
    PUSH 0x48                           ; 00468e06
    PUSH 0x64                           ; 00468e08
    LEA EAX,[ESP + 0x74]                ; 00468e0a
    PUSH EAX                            ; 00468e0e
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredWrapper_FUN_00468410 ; 00468e0f
        ;   XREF to: 00468410 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredWrapper_FUN_00468410(CDrawSurface * this_ptr, int x, int y, char * text)
    ADD ESP,0x10                        ; 00468e14
    PUSH 0x5d1463                       ; 00468e17
    PUSH 0x57                           ; 00468e1c
    PUSH 0x6c                           ; 00468e1e
    PUSH 0x5c                           ; 00468e20
    LEA EAX,[ESP + 0x78]                ; 00468e22
    PUSH EAX                            ; 00468e26
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBoundsWrapper_FUN_00468680 ; 00468e27
        ;   XREF to: 00468680 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBoundsWrapper_FUN_00468680(CDrawSurface * this_ptr, int x, int y, int width, ...)
    ADD ESP,0x14                        ; 00468e2c
    PUSH 0xff                           ; 00468e2f
    CALL cockpit_drawsurf.cpp_setColor_FUN_00465ea0 ; 00468e34
        ;   XREF to: 00465ea0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_setColor_FUN_00465ea0(int color_value)
    ADD ESP,0x4                         ; 00468e39
    PUSH 0x14                           ; 00468e3c
    PUSH 0x64                           ; 00468e3e
    LEA EAX,[ESP + 0x70]                ; 00468e40
    PUSH EAX                            ; 00468e44
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00466360 ; 00468e45
        ;   XREF to: 00466360 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00466360(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 00468e4a
    PUSH 0x23                           ; 00468e4d
    PUSH 0x64                           ; 00468e4f
    LEA EAX,[ESP + 0x70]                ; 00468e51
    PUSH EAX                            ; 00468e55
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00466360 ; 00468e56
        ;   XREF to: 00466360 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00466360(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 00468e5b
    PUSH 0x4f                           ; 00468e5e
    PUSH 0x64                           ; 00468e60
    LEA EAX,[ESP + 0x70]                ; 00468e62
    PUSH EAX                            ; 00468e66
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00466360 ; 00468e67
        ;   XREF to: 00466360 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00466360(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 00468e6c
    PUSH 0x5e                           ; 00468e6f
    PUSH 0x64                           ; 00468e71
    LEA EAX,[ESP + 0x70]                ; 00468e73
    PUSH EAX                            ; 00468e77
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00466360 ; 00468e78
        ;   XREF to: 00466360 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00466360(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 00468e7d
    PUSH 0x0                            ; 00468e80
    PUSH 0x0                            ; 00468e82
    PUSH 0xff                           ; 00468e84
    CALL cockpit_drawsurf.cpp_setColorRGB_FUN_004660b0 ; 00468e89
        ;   XREF to: 004660b0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_setColorRGB_FUN_004660b0(int red, int green, int blue)
    ADD ESP,0xc                         ; 00468e8e
    LEA EAX,[ESP + 0x28]                ; 00468e91
    PUSH EAX                            ; 00468e95
    CALL cockpit_drawsurf.cpp_CDrawSurface_fillFullSurface_FUN_00467ac0 ; 00468e96
        ;   XREF to: 00467ac0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_fillFullSurface_FUN_00467ac0(CDrawSurface * this_ptr)
    ADD ESP,0x4                         ; 00468e9b
    PUSH 0xfb                           ; 00468e9e
    CALL cockpit_drawsurf.cpp_setColor_FUN_00465ea0 ; 00468ea3
        ;   XREF to: 00465ea0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_setColor_FUN_00465ea0(int color_value)
    ADD ESP,0x4                         ; 00468ea8
    LEA EAX,[ESP + 0x28]                ; 00468eab
    PUSH EAX                            ; 00468eaf
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawSurfaceBorder_FUN_004673b0 ; 00468eb0
        ;   XREF to: 004673b0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawSurfaceBorder_FUN_004673b0(CDrawSurface * this_ptr)
    ADD ESP,0x4                         ; 00468eb5
    PUSH 0x15                           ; 00468eb8
    PUSH 0x29                           ; 00468eba
    PUSH -0xb                           ; 00468ebc
    PUSH -0x15                          ; 00468ebe
    LEA EAX,[ESP + 0x38]                ; 00468ec0
    PUSH EAX                            ; 00468ec4
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawClippedLine_FUN_00466820 ; 00468ec5
        ;   XREF to: 00466820 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawClippedLine_FUN_00466820(CDrawSurface * this_ptr, int x1, int y1, int x2, ...)
    ADD ESP,0x14                        ; 00468eca
    PUSH 0x6                            ; 00468ecd
    PUSH 0x5                            ; 00468ecf
    PUSH 0xa                            ; 00468ed1
    LEA EAX,[ESP + 0x34]                ; 00468ed3
    PUSH EAX                            ; 00468ed7
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_004665c0 ; 00468ed8
        ;   XREF to: 004665c0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_004665c0(CDrawSurface * this_ptr, int center_x, int center_y, int radius)
    ADD ESP,0x10                        ; 00468edd
    PUSH 0xff                           ; 00468ee0
    PUSH 0x0                            ; 00468ee5
    PUSH 0x0                            ; 00468ee7
    CALL cockpit_drawsurf.cpp_setColorRGB_FUN_004660b0 ; 00468ee9
        ;   XREF to: 004660b0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_setColorRGB_FUN_004660b0(int red, int green, int blue)
    ADD ESP,0xc                         ; 00468eee
    LEA EAX,[ESP + 0x8]                 ; 00468ef1
    PUSH EAX                            ; 00468ef5
    CALL cockpit_drawsurf.cpp_CDrawSurface_fillFullSurface_FUN_00467ac0 ; 00468ef6
        ;   XREF to: 00467ac0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_fillFullSurface_FUN_00467ac0(CDrawSurface * this_ptr)
    ADD ESP,0x4                         ; 00468efb
    PUSH 0xfb                           ; 00468efe
    CALL cockpit_drawsurf.cpp_setColor_FUN_00465ea0 ; 00468f03
        ;   XREF to: 00465ea0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_setColor_FUN_00465ea0(int color_value)
    ADD ESP,0x4                         ; 00468f08
    LEA EAX,[ESP + 0x8]                 ; 00468f0b
    PUSH EAX                            ; 00468f0f
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawSurfaceBorder_FUN_004673b0 ; 00468f10
        ;   XREF to: 004673b0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawSurfaceBorder_FUN_004673b0(CDrawSurface * this_ptr)
    ADD ESP,0x4                         ; 00468f15
    PUSH 0x9                            ; 00468f18
    PUSH 0x13                           ; 00468f1a
    PUSH 0x0                            ; 00468f1c
    PUSH 0x0                            ; 00468f1e
    LEA EAX,[ESP + 0x18]                ; 00468f20
    PUSH EAX                            ; 00468f24
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawClippedLine_FUN_00466820 ; 00468f25
        ;   XREF to: 00466820 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawClippedLine_FUN_00466820(CDrawSurface * this_ptr, int x1, int y1, int x2, ...)
    MOV EAX,[0x0060b278]                ; 00468f2a | DAT_0060b278
    ADD ESP,0x14                        ; 00468f2f
    MOV dword ptr [ESP + 0xa8],EAX      ; 00468f32
    MOV EAX,[0x006141b8]                ; 00468f39 | DAT_006141b8
    MOV EDX,EAX                         ; 00468f3e
    SAR EDX,0x1f                        ; 00468f40
    SUB EAX,EDX                         ; 00468f43
    SAR EAX,0x1                         ; 00468f45
    MOV EBP,EAX                         ; 00468f47
    MOV EAX,[0x006141bc]                ; 00468f49 | DAT_006141bc
    MOV EDX,EAX                         ; 00468f4e
    SAR EDX,0x1f                        ; 00468f50
    SUB EAX,EDX                         ; 00468f53
    SAR EAX,0x1                         ; 00468f55
    MOV EDX,dword ptr [0x006141bc]      ; 00468f57 | DAT_006141bc
    ADD EAX,0x66                        ; 00468f5d
    DEC EDX                             ; 00468f60
    SUB EDX,EAX                         ; 00468f61
    PUSH 0x0                            ; 00468f63
    LEA EDI,[EDX + 0x1]                 ; 00468f65
    PUSH EDI                            ; 00468f68
    PUSH 0xc9                           ; 00468f69
    PUSH EAX                            ; 00468f6e
    PUSH EBP                            ; 00468f6f
    LEA EAX,[ESP + 0x9c]                ; 00468f70
    PUSH EAX                            ; 00468f77
    MOV EBX,dword ptr [ESI + 0x41f0]    ; 00468f78
    CALL cockpit_drawsurf.cpp_CDrawSurface_initFromParent_FUN_00465d30 ; 00468f7e
        ;   XREF to: 00465d30 (UNCONDITIONAL_CALL)  ; CDrawSurface * cockpit_drawsurf.cpp_CDrawSurface_initFromParent_FUN_00465d30(CDrawSurface * this_ptr, int x, int y, int width, ...)
    ADD ESP,0x18                        ; 00468f83
    PUSH 0x80                           ; 00468f86
    PUSH 0x80                           ; 00468f8b
    PUSH 0x80                           ; 00468f90
    CALL cockpit_drawsurf.cpp_setColorRGB_FUN_004660b0 ; 00468f95
        ;   XREF to: 004660b0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_setColorRGB_FUN_004660b0(int red, int green, int blue)
    ADD ESP,0xc                         ; 00468f9a
    LEA EAX,[ESP + 0x88]                ; 00468f9d
    PUSH EAX                            ; 00468fa4
    CALL cockpit_drawsurf.cpp_CDrawSurface_fillFullSurface_FUN_00467ac0 ; 00468fa5
        ;   XREF to: 00467ac0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_fillFullSurface_FUN_00467ac0(CDrawSurface * this_ptr)
    ADD ESP,0x4                         ; 00468faa
    PUSH 0x7                            ; 00468fad
    CALL cockpit_drawsurf.cpp_setColor_FUN_00465ea0 ; 00468faf
        ;   XREF to: 00465ea0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_setColor_FUN_00465ea0(int color_value)
    ADD ESP,0x4                         ; 00468fb4
    LEA EAX,[ESP + 0x88]                ; 00468fb7
    PUSH EAX                            ; 00468fbe
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawSurfaceBorder_FUN_004673b0 ; 00468fbf
        ;   XREF to: 004673b0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawSurfaceBorder_FUN_004673b0(CDrawSurface * this_ptr)
    ADD ESP,0x4                         ; 00468fc4
    PUSH 0xf9                           ; 00468fc7
    CALL cockpit_drawsurf.cpp_setColor_FUN_00465ea0 ; 00468fcc
        ;   XREF to: 00465ea0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_setColor_FUN_00465ea0(int color_value)
    ADD ESP,0x4                         ; 00468fd1
    PUSH ESI                            ; 00468fd4
    CALL cockpit_drawsurf.cpp_setCurrentFont_FUN_00466350 ; 00468fd5
        ;   XREF to: 00466350 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_setCurrentFont_FUN_00466350(CBitFont * font_ptr)
    ADD ESP,0x4                         ; 00468fda
    MOV dword ptr [ESI + 0x4204],0x1    ; 00468fdd
    LEA EAX,[ESP + 0xa8]                ; 00468fe7
    PUSH EAX                            ; 00468fee
    PUSH 0x5d1465                       ; 00468fef
    PUSH 0x1                            ; 00468ff4
    PUSH 0x1                            ; 00468ff6
    LEA EAX,[ESP + 0x98]                ; 00468ff8
    PUSH EAX                            ; 00468fff
    CALL cockpit_drawsurf.cpp_FUN_004682a0 ; 00469000
        ;   XREF to: 004682a0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_FUN_004682a0()
    ADD ESP,0x14                        ; 00469005
    LEA EAX,[ESP + 0xa8]                ; 00469008
    PUSH EAX                            ; 0046900f
    PUSH 0x5d1468                       ; 00469010
    PUSH 0x1                            ; 00469015
    PUSH 0xc7                           ; 00469017
    LEA EAX,[ESP + 0x98]                ; 0046901c
    PUSH EAX                            ; 00469023
    CALL cockpit_drawsurf.cpp_FUN_00468370 ; 00469024
        ;   XREF to: 00468370 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_FUN_00468370()
    ADD ESP,0x14                        ; 00469029
    LEA EAX,[ESP + 0xa8]                ; 0046902c
    PUSH EAX                            ; 00469033
    PUSH 0x5d146b                       ; 00469034
    PUSH 0x1                            ; 00469039
    PUSH 0x64                           ; 0046903b
    LEA EAX,[ESP + 0x98]                ; 0046903d
    PUSH EAX                            ; 00469044
    CALL cockpit_drawsurf.cpp_FUN_00468440 ; 00469045
        ;   XREF to: 00468440 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_FUN_00468440()
    ADD ESP,0x14                        ; 0046904a
    LEA EAX,[ESP + 0xa8]                ; 0046904d
    PUSH EAX                            ; 00469054
    PUSH 0x5d146e                       ; 00469055
    LEA EBP,[EBX + 0x1]                 ; 0046905a
    PUSH EBP                            ; 0046905d
    PUSH 0x64                           ; 0046905e
    LEA EAX,[ESP + 0x98]                ; 00469060
    PUSH EAX                            ; 00469067
    CALL cockpit_drawsurf.cpp_FUN_00468510 ; 00469068
        ;   XREF to: 00468510 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_FUN_00468510()
    ADD ESP,0x14                        ; 0046906d
    LEA EAX,[ESP + 0xa8]                ; 00469070
    PUSH EAX                            ; 00469077
    LEA EAX,[EBX + EBX*0x1]             ; 00469078
    PUSH 0x5d1471                       ; 0046907b
    MOV dword ptr [ESP + 0xc4],EAX      ; 00469080
    INC EAX                             ; 00469087
    PUSH EAX                            ; 00469088
    PUSH 0x64                           ; 00469089
    MOV dword ptr [ESP + 0xd0],EAX      ; 0046908b
    LEA EAX,[ESP + 0x98]                ; 00469092
    PUSH EAX                            ; 00469099
    CALL cockpit_drawsurf.cpp_FUN_004685e0 ; 0046909a
        ;   XREF to: 004685e0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_FUN_004685e0()
    ADD ESP,0x14                        ; 0046909f
    LEA EAX,[ESP + 0xa8]                ; 004690a2
    PUSH EAX                            ; 004690a9
    LEA EAX,[EBX*0x4 + 0x0]             ; 004690aa
    SUB EAX,EBX                         ; 004690b1
    MOV dword ptr [ESP + 0xb4],EAX      ; 004690b3
    MOV EDX,dword ptr [ESP + 0xb4]      ; 004690ba
    MOV EAX,EDI                         ; 004690c1
    PUSH 0x5d1474                       ; 004690c3
    SUB EAX,EDX                         ; 004690c8
    PUSH EAX                            ; 004690ca
    PUSH 0x96                           ; 004690cb
    PUSH 0x32                           ; 004690d0
    MOV dword ptr [ESP + 0xc0],EAX      ; 004690d2
    LEA EAX,[ESP + 0x9c]                ; 004690d9
    PUSH EAX                            ; 004690e0
    CALL cockpit_drawsurf.cpp_FUN_004686b0 ; 004690e1
        ;   XREF to: 004686b0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_FUN_004686b0()
    ADD ESP,0x18                        ; 004690e6
    LEA EAX,[ESP + 0xa8]                ; 004690e9
    MOV EDX,dword ptr [ESP + 0xbc]      ; 004690f0
    PUSH EAX                            ; 004690f7
    MOV EAX,EDI                         ; 004690f8
    SUB EAX,EDX                         ; 004690fa
    PUSH 0x5d1477                       ; 004690fc
    MOV dword ptr [ESP + 0xc0],EAX      ; 00469101
    ADD EAX,0x32                        ; 00469108
    PUSH EAX                            ; 0046910b
    MOV EAX,dword ptr [ESP + 0xc4]      ; 0046910c
    SUB EAX,0x32                        ; 00469113
    PUSH EAX                            ; 00469116
    PUSH 0x64                           ; 00469117
    LEA EAX,[ESP + 0x9c]                ; 00469119
    PUSH EAX                            ; 00469120
    CALL cockpit_drawsurf.cpp_FUN_00468790 ; 00469121
        ;   XREF to: 00468790 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_FUN_00468790()
    ADD ESP,0x18                        ; 00469126
    LEA EAX,[ESP + 0xa8]                ; 00469129
    PUSH EAX                            ; 00469130
    SUB EDI,EBX                         ; 00469131
    PUSH 0x5d147a                       ; 00469133
    LEA EAX,[EDI + 0x32]                ; 00469138
    PUSH EAX                            ; 0046913b
    LEA EAX,[EDI + -0x32]               ; 0046913c
    PUSH EAX                            ; 0046913f
    PUSH 0x96                           ; 00469140
    PUSH 0x32                           ; 00469145
    LEA EAX,[ESP + 0xa0]                ; 00469147
    PUSH EAX                            ; 0046914e
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidthPrintf_FUN_00468880 ; 0046914f
        ;   XREF to: 00468880 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidthPrintf_FUN_00468880(CDrawSurface * this_ptr, int x, int width, int y, ...)
    ADD ESP,0x1c                        ; 00469154
    LEA EAX,[ESP + 0xa8]                ; 00469157
    PUSH EAX                            ; 0046915e
    PUSH 0x5d147d                       ; 0046915f
    LEA EAX,[ESP + 0x90]                ; 00469164
    PUSH EAX                            ; 0046916b
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurfacePrintf_FUN_00468a90 ; 0046916c
        ;   XREF to: 00468a90 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurfacePrintf_FUN_00468a90(CDrawSurface * this_ptr, char * format)
    ADD ESP,0xc                         ; 00469171
    PUSH 0xfb                           ; 00469174
    CALL cockpit_drawsurf.cpp_setColor_FUN_00465ea0 ; 00469179
        ;   XREF to: 00465ea0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_setColor_FUN_00465ea0(int color_value)
    ADD ESP,0x4                         ; 0046917e
    PUSH 0x1                            ; 00469181
    PUSH 0x1                            ; 00469183
    LEA EAX,[ESP + 0x90]                ; 00469185
    PUSH EAX                            ; 0046918c
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00466360 ; 0046918d
        ;   XREF to: 00466360 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00466360(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 00469192
    PUSH 0x1                            ; 00469195
    PUSH 0xc7                           ; 00469197
    LEA EAX,[ESP + 0x90]                ; 0046919c
    PUSH EAX                            ; 004691a3
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00466360 ; 004691a4
        ;   XREF to: 00466360 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00466360(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 004691a9
    PUSH 0x1                            ; 004691ac
    PUSH 0x64                           ; 004691ae
    LEA EAX,[ESP + 0x90]                ; 004691b0
    PUSH EAX                            ; 004691b7
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00466360 ; 004691b8
        ;   XREF to: 00466360 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00466360(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 004691bd
    PUSH EBP                            ; 004691c0
    PUSH 0x64                           ; 004691c1
    LEA EAX,[ESP + 0x90]                ; 004691c3
    PUSH EAX                            ; 004691ca
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00466360 ; 004691cb
        ;   XREF to: 00466360 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00466360(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 004691d0
    MOV ECX,dword ptr [ESP + 0xc0]      ; 004691d3
    PUSH ECX                            ; 004691da
    PUSH 0x64                           ; 004691db
    LEA EAX,[ESP + 0x90]                ; 004691dd
    PUSH EAX                            ; 004691e4
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00466360 ; 004691e5
        ;   XREF to: 00466360 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00466360(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 004691ea
    MOV EAX,dword ptr [ESP + 0xac]      ; 004691ed
    PUSH EAX                            ; 004691f4
    PUSH 0x64                           ; 004691f5
    LEA EAX,[ESP + 0x90]                ; 004691f7
    PUSH EAX                            ; 004691fe
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00466360 ; 004691ff
        ;   XREF to: 00466360 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00466360(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 00469204
    MOV EDX,dword ptr [ESP + 0xb8]      ; 00469207
    PUSH EDX                            ; 0046920e
    PUSH 0x64                           ; 0046920f
    LEA EAX,[ESP + 0x90]                ; 00469211
    PUSH EAX                            ; 00469218
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00466360 ; 00469219
        ;   XREF to: 00466360 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00466360(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 0046921e
    PUSH EDI                            ; 00469221
    PUSH 0x64                           ; 00469222
    LEA EAX,[ESP + 0x90]                ; 00469224
    PUSH EAX                            ; 0046922b
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00466360 ; 0046922c
        ;   XREF to: 00466360 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00466360(CDrawSurface * this_ptr, int x, int y)
    MOV EAX,[0x006141b8]                ; 00469231 | DAT_006141b8
    MOV EDX,EAX                         ; 00469236
    SAR EDX,0x1f                        ; 00469238
    SUB EAX,EDX                         ; 0046923b
    SAR EAX,0x1                         ; 0046923d
    LEA ECX,[EAX + 0xffffff36]          ; 0046923f
    MOV EAX,[0x006141bc]                ; 00469245 | DAT_006141bc
    MOV EDX,EAX                         ; 0046924a
    SAR EDX,0x1f                        ; 0046924c
    SUB EAX,EDX                         ; 0046924f
    SAR EAX,0x1                         ; 00469251
    MOV EDX,dword ptr [0x006141bc]      ; 00469253 | DAT_006141bc
    ADD EAX,0x66                        ; 00469259
    DEC EDX                             ; 0046925c
    ADD ESP,0xc                         ; 0046925d
    SUB EDX,EAX                         ; 00469260
    PUSH 0x0                            ; 00469262
    LEA EDI,[EDX + 0x1]                 ; 00469264
    PUSH EDI                            ; 00469267
    PUSH 0xc9                           ; 00469268
    PUSH EAX                            ; 0046926d
    PUSH ECX                            ; 0046926e
    LEA EAX,[ESP + 0x5c]                ; 0046926f
    PUSH EAX                            ; 00469273
    CALL cockpit_drawsurf.cpp_CDrawSurface_initFromParent_FUN_00465d30 ; 00469274
        ;   XREF to: 00465d30 (UNCONDITIONAL_CALL)  ; CDrawSurface * cockpit_drawsurf.cpp_CDrawSurface_initFromParent_FUN_00465d30(CDrawSurface * this_ptr, int x, int y, int width, ...)
    ADD ESP,0x18                        ; 00469279
    PUSH 0x80                           ; 0046927c
    PUSH 0x80                           ; 00469281
    PUSH 0x80                           ; 00469286
    CALL cockpit_drawsurf.cpp_setColorRGB_FUN_004660b0 ; 0046928b
        ;   XREF to: 004660b0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_setColorRGB_FUN_004660b0(int red, int green, int blue)
    ADD ESP,0xc                         ; 00469290
    LEA EAX,[ESP + 0x48]                ; 00469293
    PUSH EAX                            ; 00469297
    CALL cockpit_drawsurf.cpp_CDrawSurface_fillFullSurface_FUN_00467ac0 ; 00469298
        ;   XREF to: 00467ac0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_fillFullSurface_FUN_00467ac0(CDrawSurface * this_ptr)
    ADD ESP,0x4                         ; 0046929d
    PUSH 0x7                            ; 004692a0
    CALL cockpit_drawsurf.cpp_setColor_FUN_00465ea0 ; 004692a2
        ;   XREF to: 00465ea0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_setColor_FUN_00465ea0(int color_value)
    ADD ESP,0x4                         ; 004692a7
    LEA EAX,[ESP + 0x48]                ; 004692aa
    PUSH EAX                            ; 004692ae
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawSurfaceBorder_FUN_004673b0 ; 004692af
        ;   XREF to: 004673b0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawSurfaceBorder_FUN_004673b0(CDrawSurface * this_ptr)
    ADD ESP,0x4                         ; 004692b4
    PUSH 0xf9                           ; 004692b7
    CALL cockpit_drawsurf.cpp_setColor_FUN_00465ea0 ; 004692bc
        ;   XREF to: 00465ea0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_setColor_FUN_00465ea0(int color_value)
    ADD ESP,0x4                         ; 004692c1
    PUSH 0x0                            ; 004692c4
    CALL cockpit_drawsurf.cpp_setCurrentFont_FUN_00466350 ; 004692c6
        ;   XREF to: 00466350 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_setCurrentFont_FUN_00466350(CBitFont * font_ptr)
    ADD ESP,0x4                         ; 004692cb
    MOV dword ptr [ESI + 0x4204],0x1    ; 004692ce
    LEA EAX,[ESP + 0xa8]                ; 004692d8
    PUSH EAX                            ; 004692df
    PUSH 0x5d1480                       ; 004692e0
    PUSH 0x1                            ; 004692e5
    PUSH 0x1                            ; 004692e7
    LEA EAX,[ESP + 0x58]                ; 004692e9
    PUSH EAX                            ; 004692ed
    CALL cockpit_drawsurf.cpp_FUN_004682a0 ; 004692ee
        ;   XREF to: 004682a0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_FUN_004682a0()
    ADD ESP,0x14                        ; 004692f3
    LEA EAX,[ESP + 0xa8]                ; 004692f6
    PUSH EAX                            ; 004692fd
    PUSH 0x5d1483                       ; 004692fe
    PUSH 0x1                            ; 00469303
    PUSH 0xc7                           ; 00469305
    LEA EAX,[ESP + 0x58]                ; 0046930a
    PUSH EAX                            ; 0046930e
    CALL cockpit_drawsurf.cpp_FUN_00468370 ; 0046930f
        ;   XREF to: 00468370 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_FUN_00468370()
    ADD ESP,0x14                        ; 00469314
    LEA EAX,[ESP + 0xa8]                ; 00469317
    PUSH EAX                            ; 0046931e
    PUSH 0x5d1486                       ; 0046931f
    PUSH 0x1                            ; 00469324
    PUSH 0x64                           ; 00469326
    LEA EAX,[ESP + 0x58]                ; 00469328
    PUSH EAX                            ; 0046932c
    CALL cockpit_drawsurf.cpp_FUN_00468440 ; 0046932d
        ;   XREF to: 00468440 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_FUN_00468440()
    ADD ESP,0x14                        ; 00469332
    LEA EAX,[ESP + 0xa8]                ; 00469335
    PUSH EAX                            ; 0046933c
    PUSH 0x5d1489                       ; 0046933d
    PUSH EBP                            ; 00469342
    PUSH 0x64                           ; 00469343
    LEA EAX,[ESP + 0x58]                ; 00469345
    PUSH EAX                            ; 00469349
    CALL cockpit_drawsurf.cpp_FUN_00468510 ; 0046934a
        ;   XREF to: 00468510 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_FUN_00468510()
    ADD ESP,0x14                        ; 0046934f
    LEA EAX,[ESP + 0xa8]                ; 00469352
    PUSH EAX                            ; 00469359
    PUSH 0x5d148c                       ; 0046935a
    MOV ECX,dword ptr [ESP + 0xc8]      ; 0046935f
    PUSH ECX                            ; 00469366
    PUSH 0x64                           ; 00469367
    LEA EAX,[ESP + 0x58]                ; 00469369
    PUSH EAX                            ; 0046936d
    CALL cockpit_drawsurf.cpp_FUN_004685e0 ; 0046936e
        ;   XREF to: 004685e0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_FUN_004685e0()
    ADD ESP,0x14                        ; 00469373
    LEA EAX,[ESP + 0xa8]                ; 00469376
    PUSH EAX                            ; 0046937d
    MOV ESI,dword ptr [ESP + 0xb4]      ; 0046937e
    MOV EAX,EDI                         ; 00469385
    PUSH 0x5d148f                       ; 00469387
    SUB EAX,ESI                         ; 0046938c
    PUSH EAX                            ; 0046938e
    PUSH 0x96                           ; 0046938f
    PUSH 0x32                           ; 00469394
    MOV dword ptr [ESP + 0xc8],EAX      ; 00469396
    LEA EAX,[ESP + 0x5c]                ; 0046939d
    PUSH EAX                            ; 004693a1
    MOV ESI,EDI                         ; 004693a2
    CALL cockpit_drawsurf.cpp_FUN_004686b0 ; 004693a4
        ;   XREF to: 004686b0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_FUN_004686b0()
    ADD ESP,0x18                        ; 004693a9
    LEA EAX,[ESP + 0xa8]                ; 004693ac
    MOV EDX,dword ptr [ESP + 0xbc]      ; 004693b3
    PUSH EAX                            ; 004693ba
    SUB ESI,EDX                         ; 004693bb
    PUSH 0x5d1492                       ; 004693bd
    LEA EAX,[ESI + 0x32]                ; 004693c2
    PUSH EAX                            ; 004693c5
    LEA EAX,[ESI + -0x32]               ; 004693c6
    PUSH EAX                            ; 004693c9
    PUSH 0x64                           ; 004693ca
    LEA EAX,[ESP + 0x5c]                ; 004693cc
    PUSH EAX                            ; 004693d0
    CALL cockpit_drawsurf.cpp_FUN_00468790 ; 004693d1
        ;   XREF to: 00468790 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_FUN_00468790()
    ADD ESP,0x18                        ; 004693d6
    LEA EAX,[ESP + 0xa8]                ; 004693d9
    PUSH EAX                            ; 004693e0
    SUB EDI,EBX                         ; 004693e1
    PUSH 0x5d1495                       ; 004693e3
    LEA EAX,[EDI + 0x32]                ; 004693e8
    PUSH EAX                            ; 004693eb
    LEA EAX,[EDI + -0x32]               ; 004693ec
    PUSH EAX                            ; 004693ef
    PUSH 0x96                           ; 004693f0
    PUSH 0x32                           ; 004693f5
    LEA EAX,[ESP + 0x60]                ; 004693f7
    PUSH EAX                            ; 004693fb
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidthPrintf_FUN_00468880 ; 004693fc
        ;   XREF to: 00468880 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidthPrintf_FUN_00468880(CDrawSurface * this_ptr, int x, int width, int y, ...)
    ADD ESP,0x1c                        ; 00469401
    LEA EAX,[ESP + 0xa8]                ; 00469404
    PUSH EAX                            ; 0046940b
    PUSH 0x5d1498                       ; 0046940c
    LEA EAX,[ESP + 0x50]                ; 00469411
    PUSH EAX                            ; 00469415
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurfacePrintf_FUN_00468a90 ; 00469416
        ;   XREF to: 00468a90 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurfacePrintf_FUN_00468a90(CDrawSurface * this_ptr, char * format)
    ADD ESP,0xc                         ; 0046941b
    PUSH 0xfb                           ; 0046941e
    CALL cockpit_drawsurf.cpp_setColor_FUN_00465ea0 ; 00469423
        ;   XREF to: 00465ea0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_setColor_FUN_00465ea0(int color_value)
    ADD ESP,0x4                         ; 00469428
    PUSH 0x1                            ; 0046942b
    PUSH 0x1                            ; 0046942d
    LEA EAX,[ESP + 0x50]                ; 0046942f
    PUSH EAX                            ; 00469433
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00466360 ; 00469434
        ;   XREF to: 00466360 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00466360(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 00469439
    PUSH 0x1                            ; 0046943c
    PUSH 0xc7                           ; 0046943e
    LEA EAX,[ESP + 0x50]                ; 00469443
    PUSH EAX                            ; 00469447
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00466360 ; 00469448
        ;   XREF to: 00466360 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00466360(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 0046944d
    PUSH 0x1                            ; 00469450
    PUSH 0x64                           ; 00469452
    LEA EAX,[ESP + 0x50]                ; 00469454
    PUSH EAX                            ; 00469458
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00466360 ; 00469459
        ;   XREF to: 00466360 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00466360(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 0046945e
    PUSH EBP                            ; 00469461
    PUSH 0x64                           ; 00469462
    LEA EAX,[ESP + 0x50]                ; 00469464
    PUSH EAX                            ; 00469468
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00466360 ; 00469469
        ;   XREF to: 00466360 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00466360(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 0046946e
    MOV ECX,dword ptr [ESP + 0xc0]      ; 00469471
    PUSH ECX                            ; 00469478
    PUSH 0x64                           ; 00469479
    LEA EAX,[ESP + 0x50]                ; 0046947b
    PUSH EAX                            ; 0046947f
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00466360 ; 00469480
        ;   XREF to: 00466360 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00466360(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 00469485
    MOV EBX,dword ptr [ESP + 0xb4]      ; 00469488
    PUSH EBX                            ; 0046948f
    PUSH 0x64                           ; 00469490
    LEA EAX,[ESP + 0x50]                ; 00469492
    PUSH EAX                            ; 00469496
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00466360 ; 00469497
        ;   XREF to: 00466360 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00466360(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 0046949c
    PUSH ESI                            ; 0046949f
    PUSH 0x64                           ; 004694a0
    LEA EAX,[ESP + 0x50]                ; 004694a2
    PUSH EAX                            ; 004694a6
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00466360 ; 004694a7
        ;   XREF to: 00466360 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00466360(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 004694ac
    PUSH EDI                            ; 004694af
    PUSH 0x64                           ; 004694b0
    LEA EAX,[ESP + 0x50]                ; 004694b2
    PUSH EAX                            ; 004694b6
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00466360 ; 004694b7
        ;   XREF to: 00466360 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00466360(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 004694bc
    PUSH 0x4                            ; 004694bf
    CALL cockpit_drawsurf.cpp_setColor_FUN_00465ea0 ; 004694c1
        ;   XREF to: 00465ea0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_setColor_FUN_00465ea0(int color_value)
    ADD ESP,0x4                         ; 004694c6
    LEA EAX,[ESP + 0x48]                ; 004694c9
    PUSH EAX                            ; 004694cd
    CALL cockpit_drawsurf.cpp_FUN_004677e0 ; 004694ce
        ;   XREF to: 004677e0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_FUN_004677e0(CDrawSurface * this_ptr)
    ADD ESP,0x4                         ; 004694d3
    POP EBX                             ; 004694d6
    POP EDI                             ; 004694d7
    ADD ESP,0xbc                        ; 004694d8
    POP EBP                             ; 004694de
    POP ESI                             ; 004694df
    RET                                 ; 004694e0

