; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_testDrawingSurface_FUN_0046a750(CBitFont *test_font)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   test_font
;
; Referenced Globals:
;   undefined4 DAT_005f2af4
;   undefined4 DAT_005fba18
;   undefined4 DAT_005fba1c
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_00468190
;   cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromBottomLeft_FUN_004682e0
;   cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromBottomRight_FUN_00468310
;   cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromTopLeft_FUN_00468280
;   cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromTopRight_FUN_004682b0
;   cockpit_drawsurf.cpp_CDrawSurface_drawClippedLine_FUN_004683f0
;   cockpit_drawsurf.cpp_CDrawSurface_drawSurfaceBorder_FUN_00468f80
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurfacePrintf_FUN_0046a660
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidthPrintf_FUN_0046a450
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBoundsWrapper_FUN_0046a250
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredWrapper_FUN_00469fe0
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00469e40
;   cockpit_drawsurf.cpp_CDrawSurface_fillFullSurface_FUN_00469690
;   cockpit_drawsurf.cpp_CDrawSurface_initFromParent_FUN_00467900
;   cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00467f30
;   ... and 11 more
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0046a750
        ;   Label: cockpit_drawsurf.cpp_testDrawingSurface_FUN_0046a750
    PUSH EBP                            ; 0046a751
    SUB ESP,0xbc                        ; 0046a752
    MOV ESI,dword ptr [ESP + 0xc8]      ; 0046a758
    MOV EDX,dword ptr [0x005fba18]      ; 0046a75f | DAT_005fba18
    CMP EDX,0x280                       ; 0046a765
    JL 0x0046a77b                       ; 0046a76b
        ;   XREF to: 0046a77b (CONDITIONAL_JUMP)  ; LAB_0046a77b
    MOV ECX,dword ptr [0x005fba1c]      ; 0046a76d | DAT_005fba1c
    CMP ECX,0x1e0                       ; 0046a773
    JGE 0x0046a784                      ; 0046a779
        ;   XREF to: 0046a784 (CONDITIONAL_JUMP)  ; LAB_0046a784
    ADD ESP,0xbc                        ; 0046a77b
        ;   Label: LAB_0046a77b
    POP EBP                             ; 0046a781
    POP ESI                             ; 0046a782
    RET                                 ; 0046a783
    PUSH EDI                            ; 0046a784
        ;   Label: LAB_0046a784
    PUSH EBX                            ; 0046a785
    MOV EAX,EDX                         ; 0046a786
    SAR EDX,0x1f                        ; 0046a788
    SUB EAX,EDX                         ; 0046a78b
    SAR EAX,0x1                         ; 0046a78d
    MOV EBX,EAX                         ; 0046a78f
    MOV EDX,ECX                         ; 0046a791
    MOV EAX,ECX                         ; 0046a793
    SAR EDX,0x1f                        ; 0046a795
    SUB EAX,EDX                         ; 0046a798
    SAR EAX,0x1                         ; 0046a79a
    PUSH 0x0                            ; 0046a79c
    PUSH 0x65                           ; 0046a79e
    PUSH 0xc9                           ; 0046a7a0
    PUSH EAX                            ; 0046a7a5
    PUSH EBX                            ; 0046a7a6
    LEA EAX,[ESP + 0x7c]                ; 0046a7a7
    PUSH EAX                            ; 0046a7ab
    CALL cockpit_drawsurf.cpp_CDrawSurface_initFromParent_FUN_00467900 ; 0046a7ac
        ;   XREF to: 00467900 (UNCONDITIONAL_CALL)  ; CDrawSurface * cockpit_drawsurf.cpp_CDrawSurface_initFromParent_FUN_00467900(CDrawSurface * this_ptr, int x, int y, int width, ...)
    ADD ESP,0x18                        ; 0046a7b1
    LEA EAX,[ESP + 0x68]                ; 0046a7b4
    PUSH EAX                            ; 0046a7b8
    PUSH 0xb                            ; 0046a7b9
    PUSH 0x15                           ; 0046a7bb
    PUSH 0x8                            ; 0046a7bd
    PUSH 0xc                            ; 0046a7bf
    LEA EAX,[ESP + 0x3c]                ; 0046a7c1
    PUSH EAX                            ; 0046a7c5
    CALL cockpit_drawsurf.cpp_CDrawSurface_initFromParent_FUN_00467900 ; 0046a7c6
        ;   XREF to: 00467900 (UNCONDITIONAL_CALL)  ; CDrawSurface * cockpit_drawsurf.cpp_CDrawSurface_initFromParent_FUN_00467900(CDrawSurface * this_ptr, int x, int y, int width, ...)
    ADD ESP,0x18                        ; 0046a7cb
    LEA EAX,[ESP + 0x68]                ; 0046a7ce
    PUSH EAX                            ; 0046a7d2
    PUSH 0xa                            ; 0046a7d3
    PUSH 0x14                           ; 0046a7d5
    PUSH 0x5f                           ; 0046a7d7
    PUSH 0xbe                           ; 0046a7d9
    LEA EAX,[ESP + 0x1c]                ; 0046a7de
    PUSH EAX                            ; 0046a7e2
    CALL cockpit_drawsurf.cpp_CDrawSurface_initFromParent_FUN_00467900 ; 0046a7e3
        ;   XREF to: 00467900 (UNCONDITIONAL_CALL)  ; CDrawSurface * cockpit_drawsurf.cpp_CDrawSurface_initFromParent_FUN_00467900(CDrawSurface * this_ptr, int x, int y, int width, ...)
    ADD ESP,0x18                        ; 0046a7e8
    PUSH 0x80                           ; 0046a7eb
    PUSH 0x80                           ; 0046a7f0
    PUSH 0x80                           ; 0046a7f5
    CALL cockpit_drawsurf.cpp_FUN_00467c80 ; 0046a7fa
        ;   XREF to: 00467c80 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_FUN_00467c80(int red, int green, int blue)
    ADD ESP,0xc                         ; 0046a7ff
    LEA EAX,[ESP + 0x68]                ; 0046a802
    PUSH EAX                            ; 0046a806
    CALL cockpit_drawsurf.cpp_CDrawSurface_fillFullSurface_FUN_00469690 ; 0046a807
        ;   XREF to: 00469690 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_fillFullSurface_FUN_00469690(CDrawSurface * this_ptr)
    ADD ESP,0x4                         ; 0046a80c
    PUSH 0x7                            ; 0046a80f
    CALL cockpit_drawsurf.cpp_setColor_FUN_00467a70 ; 0046a811
        ;   XREF to: 00467a70 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_setColor_FUN_00467a70(int color_value)
    ADD ESP,0x4                         ; 0046a816
    LEA EAX,[ESP + 0x68]                ; 0046a819
    PUSH EAX                            ; 0046a81d
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawSurfaceBorder_FUN_00468f80 ; 0046a81e
        ;   XREF to: 00468f80 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawSurfaceBorder_FUN_00468f80(CDrawSurface * this_ptr)
    ADD ESP,0x4                         ; 0046a823
    PUSH 0x64                           ; 0046a826
    PUSH 0xc8                           ; 0046a828
    PUSH 0x0                            ; 0046a82d
    PUSH 0x0                            ; 0046a82f
    LEA EAX,[ESP + 0x78]                ; 0046a831
    PUSH EAX                            ; 0046a835
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawClippedLine_FUN_004683f0 ; 0046a836
        ;   XREF to: 004683f0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawClippedLine_FUN_004683f0(CDrawSurface * this_ptr, int x1, int y1, int x2, ...)
    ADD ESP,0x14                        ; 0046a83b
    PUSH 0x64                           ; 0046a83e
    PUSH 0x32                           ; 0046a840
    PUSH 0x64                           ; 0046a842
    LEA EAX,[ESP + 0x74]                ; 0046a844
    PUSH EAX                            ; 0046a848
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_00468190 ; 0046a849
        ;   XREF to: 00468190 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_00468190(CDrawSurface * this_ptr, int center_x, int center_y, int radius)
    ADD ESP,0x10                        ; 0046a84e
    PUSH 0x32                           ; 0046a851
    PUSH 0x32                           ; 0046a853
    PUSH 0x64                           ; 0046a855
    LEA EAX,[ESP + 0x74]                ; 0046a857
    PUSH EAX                            ; 0046a85b
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_00468190 ; 0046a85c
        ;   XREF to: 00468190 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_00468190(CDrawSurface * this_ptr, int center_x, int center_y, int radius)
    ADD ESP,0x10                        ; 0046a861
    PUSH 0x32                           ; 0046a864
    PUSH 0x0                            ; 0046a866
    PUSH 0x0                            ; 0046a868
    LEA EAX,[ESP + 0x74]                ; 0046a86a
    PUSH EAX                            ; 0046a86e
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromTopLeft_FUN_00468280 ; 0046a86f
        ;   XREF to: 00468280 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromTopLeft_FUN_00468280(CDrawSurface * this_ptr, int x, int y, int radius)
    ADD ESP,0x10                        ; 0046a874
    PUSH 0x32                           ; 0046a877
    PUSH 0x0                            ; 0046a879
    PUSH 0xc8                           ; 0046a87b
    LEA EAX,[ESP + 0x74]                ; 0046a880
    PUSH EAX                            ; 0046a884
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromTopRight_FUN_004682b0 ; 0046a885
        ;   XREF to: 004682b0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromTopRight_FUN_004682b0(CDrawSurface * this_ptr, int top_right_x, int top_right_y, int radius)
    ADD ESP,0x10                        ; 0046a88a
    PUSH 0x32                           ; 0046a88d
    PUSH 0x64                           ; 0046a88f
    PUSH 0x0                            ; 0046a891
    LEA EAX,[ESP + 0x74]                ; 0046a893
    PUSH EAX                            ; 0046a897
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromBottomLeft_FUN_004682e0 ; 0046a898
        ;   XREF to: 004682e0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromBottomLeft_FUN_004682e0(CDrawSurface * this_ptr, int bottom_left_x, int bottom_left_y, int radius)
    ADD ESP,0x10                        ; 0046a89d
    PUSH 0x32                           ; 0046a8a0
    PUSH 0x64                           ; 0046a8a2
    PUSH 0xc8                           ; 0046a8a4
    LEA EAX,[ESP + 0x74]                ; 0046a8a9
    PUSH EAX                            ; 0046a8ad
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromBottomRight_FUN_00468310 ; 0046a8ae
        ;   XREF to: 00468310 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromBottomRight_FUN_00468310(CDrawSurface * this_ptr, int bottom_right_x, int bottom_right_y, int radius)
    ADD ESP,0x10                        ; 0046a8b3
    PUSH 0xf9                           ; 0046a8b6
    CALL cockpit_drawsurf.cpp_setColor_FUN_00467a70 ; 0046a8bb
        ;   XREF to: 00467a70 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_setColor_FUN_00467a70(int color_value)
    ADD ESP,0x4                         ; 0046a8c0
    PUSH 0x0                            ; 0046a8c3
    CALL cockpit_drawsurf.cpp_setCurrentFont_FUN_00467f20 ; 0046a8c5
        ;   XREF to: 00467f20 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_setCurrentFont_FUN_00467f20(CBitFont * font_ptr)
    ADD ESP,0x4                         ; 0046a8ca
    PUSH 0x5bc3b3                       ; 0046a8cd
    PUSH 0x2                            ; 0046a8d2
    PUSH 0x5                            ; 0046a8d4
    LEA EAX,[ESP + 0x74]                ; 0046a8d6
    PUSH EAX                            ; 0046a8da
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00469e40 ; 0046a8db
        ;   XREF to: 00469e40 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00469e40(CDrawSurface * this_ptr, int x, int y, char * text)
    ADD ESP,0x10                        ; 0046a8e0
    PUSH 0x5bc3b9                       ; 0046a8e3
    PUSH 0x11                           ; 0046a8e8
    PUSH -0x5                           ; 0046a8ea
    LEA EAX,[ESP + 0x74]                ; 0046a8ec
    PUSH EAX                            ; 0046a8f0
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00469e40 ; 0046a8f1
        ;   XREF to: 00469e40 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00469e40(CDrawSurface * this_ptr, int x, int y, char * text)
    ADD ESP,0x10                        ; 0046a8f6
    PUSH 0x5bc3bf                       ; 0046a8f9
    PUSH 0x11                           ; 0046a8fe
    PUSH 0xb9                           ; 0046a900
    LEA EAX,[ESP + 0x74]                ; 0046a905
    PUSH EAX                            ; 0046a909
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00469e40 ; 0046a90a
        ;   XREF to: 00469e40 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00469e40(CDrawSurface * this_ptr, int x, int y, char * text)
    ADD ESP,0x10                        ; 0046a90f
    PUSH 0x5bc3cf                       ; 0046a912
    PUSH 0x11                           ; 0046a917
    PUSH 0x64                           ; 0046a919
    LEA EAX,[ESP + 0x74]                ; 0046a91b
    PUSH EAX                            ; 0046a91f
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredWrapper_FUN_00469fe0 ; 0046a920
        ;   XREF to: 00469fe0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredWrapper_FUN_00469fe0(CDrawSurface * this_ptr, int x, int y, char * text)
    ADD ESP,0x10                        ; 0046a925
    PUSH 0x5bc3d1                       ; 0046a928
    PUSH 0x20                           ; 0046a92d
    PUSH 0x6c                           ; 0046a92f
    PUSH 0x5c                           ; 0046a931
    LEA EAX,[ESP + 0x78]                ; 0046a933
    PUSH EAX                            ; 0046a937
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBoundsWrapper_FUN_0046a250 ; 0046a938
        ;   XREF to: 0046a250 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBoundsWrapper_FUN_0046a250(CDrawSurface * this_ptr, int x, int y, int width, ...)
    ADD ESP,0x14                        ; 0046a93d
    PUSH ESI                            ; 0046a940
    CALL cockpit_drawsurf.cpp_setCurrentFont_FUN_00467f20 ; 0046a941
        ;   XREF to: 00467f20 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_setCurrentFont_FUN_00467f20(CBitFont * font_ptr)
    ADD ESP,0x4                         ; 0046a946
    PUSH 0x5bc3d3                       ; 0046a949
    PUSH 0x2a                           ; 0046a94e
    PUSH 0x5                            ; 0046a950
    LEA EAX,[ESP + 0x74]                ; 0046a952
    PUSH EAX                            ; 0046a956
    MOV dword ptr [ESI + 0x4204],0x0    ; 0046a957
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00469e40 ; 0046a961
        ;   XREF to: 00469e40 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00469e40(CDrawSurface * this_ptr, int x, int y, char * text)
    ADD ESP,0x10                        ; 0046a966
    PUSH 0x5bc3d9                       ; 0046a969
    PUSH 0x39                           ; 0046a96e
    PUSH -0x5                           ; 0046a970
    LEA EAX,[ESP + 0x74]                ; 0046a972
    PUSH EAX                            ; 0046a976
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00469e40 ; 0046a977
        ;   XREF to: 00469e40 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00469e40(CDrawSurface * this_ptr, int x, int y, char * text)
    ADD ESP,0x10                        ; 0046a97c
    PUSH 0x5bc3df                       ; 0046a97f
    PUSH 0x39                           ; 0046a984
    PUSH 0xb9                           ; 0046a986
    LEA EAX,[ESP + 0x74]                ; 0046a98b
    PUSH EAX                            ; 0046a98f
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00469e40 ; 0046a990
        ;   XREF to: 00469e40 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00469e40(CDrawSurface * this_ptr, int x, int y, char * text)
    ADD ESP,0x10                        ; 0046a995
    MOV dword ptr [ESI + 0x4204],0x1    ; 0046a998
    PUSH 0x5bc3e5                       ; 0046a9a2
    PUSH 0x48                           ; 0046a9a7
    PUSH -0x5                           ; 0046a9a9
    LEA EAX,[ESP + 0x74]                ; 0046a9ab
    PUSH EAX                            ; 0046a9af
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00469e40 ; 0046a9b0
        ;   XREF to: 00469e40 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00469e40(CDrawSurface * this_ptr, int x, int y, char * text)
    ADD ESP,0x10                        ; 0046a9b5
    PUSH 0x5bc3eb                       ; 0046a9b8
    PUSH 0x48                           ; 0046a9bd
    PUSH 0xb9                           ; 0046a9bf
    LEA EAX,[ESP + 0x74]                ; 0046a9c4
    PUSH EAX                            ; 0046a9c8
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00469e40 ; 0046a9c9
        ;   XREF to: 00469e40 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00469e40(CDrawSurface * this_ptr, int x, int y, char * text)
    ADD ESP,0x10                        ; 0046a9ce
    PUSH 0x5bc3f1                       ; 0046a9d1
    PUSH 0x48                           ; 0046a9d6
    PUSH 0x64                           ; 0046a9d8
    LEA EAX,[ESP + 0x74]                ; 0046a9da
    PUSH EAX                            ; 0046a9de
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredWrapper_FUN_00469fe0 ; 0046a9df
        ;   XREF to: 00469fe0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredWrapper_FUN_00469fe0(CDrawSurface * this_ptr, int x, int y, char * text)
    ADD ESP,0x10                        ; 0046a9e4
    PUSH 0x5bc3f3                       ; 0046a9e7
    PUSH 0x57                           ; 0046a9ec
    PUSH 0x6c                           ; 0046a9ee
    PUSH 0x5c                           ; 0046a9f0
    LEA EAX,[ESP + 0x78]                ; 0046a9f2
    PUSH EAX                            ; 0046a9f6
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBoundsWrapper_FUN_0046a250 ; 0046a9f7
        ;   XREF to: 0046a250 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBoundsWrapper_FUN_0046a250(CDrawSurface * this_ptr, int x, int y, int width, ...)
    ADD ESP,0x14                        ; 0046a9fc
    PUSH 0xff                           ; 0046a9ff
    CALL cockpit_drawsurf.cpp_setColor_FUN_00467a70 ; 0046aa04
        ;   XREF to: 00467a70 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_setColor_FUN_00467a70(int color_value)
    ADD ESP,0x4                         ; 0046aa09
    PUSH 0x14                           ; 0046aa0c
    PUSH 0x64                           ; 0046aa0e
    LEA EAX,[ESP + 0x70]                ; 0046aa10
    PUSH EAX                            ; 0046aa14
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00467f30 ; 0046aa15
        ;   XREF to: 00467f30 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00467f30(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 0046aa1a
    PUSH 0x23                           ; 0046aa1d
    PUSH 0x64                           ; 0046aa1f
    LEA EAX,[ESP + 0x70]                ; 0046aa21
    PUSH EAX                            ; 0046aa25
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00467f30 ; 0046aa26
        ;   XREF to: 00467f30 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00467f30(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 0046aa2b
    PUSH 0x4f                           ; 0046aa2e
    PUSH 0x64                           ; 0046aa30
    LEA EAX,[ESP + 0x70]                ; 0046aa32
    PUSH EAX                            ; 0046aa36
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00467f30 ; 0046aa37
        ;   XREF to: 00467f30 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00467f30(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 0046aa3c
    PUSH 0x5e                           ; 0046aa3f
    PUSH 0x64                           ; 0046aa41
    LEA EAX,[ESP + 0x70]                ; 0046aa43
    PUSH EAX                            ; 0046aa47
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00467f30 ; 0046aa48
        ;   XREF to: 00467f30 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00467f30(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 0046aa4d
    PUSH 0x0                            ; 0046aa50
    PUSH 0x0                            ; 0046aa52
    PUSH 0xff                           ; 0046aa54
    CALL cockpit_drawsurf.cpp_FUN_00467c80 ; 0046aa59
        ;   XREF to: 00467c80 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_FUN_00467c80(int red, int green, int blue)
    ADD ESP,0xc                         ; 0046aa5e
    LEA EAX,[ESP + 0x28]                ; 0046aa61
    PUSH EAX                            ; 0046aa65
    CALL cockpit_drawsurf.cpp_CDrawSurface_fillFullSurface_FUN_00469690 ; 0046aa66
        ;   XREF to: 00469690 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_fillFullSurface_FUN_00469690(CDrawSurface * this_ptr)
    ADD ESP,0x4                         ; 0046aa6b
    PUSH 0xfb                           ; 0046aa6e
    CALL cockpit_drawsurf.cpp_setColor_FUN_00467a70 ; 0046aa73
        ;   XREF to: 00467a70 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_setColor_FUN_00467a70(int color_value)
    ADD ESP,0x4                         ; 0046aa78
    LEA EAX,[ESP + 0x28]                ; 0046aa7b
    PUSH EAX                            ; 0046aa7f
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawSurfaceBorder_FUN_00468f80 ; 0046aa80
        ;   XREF to: 00468f80 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawSurfaceBorder_FUN_00468f80(CDrawSurface * this_ptr)
    ADD ESP,0x4                         ; 0046aa85
    PUSH 0x15                           ; 0046aa88
    PUSH 0x29                           ; 0046aa8a
    PUSH -0xb                           ; 0046aa8c
    PUSH -0x15                          ; 0046aa8e
    LEA EAX,[ESP + 0x38]                ; 0046aa90
    PUSH EAX                            ; 0046aa94
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawClippedLine_FUN_004683f0 ; 0046aa95
        ;   XREF to: 004683f0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawClippedLine_FUN_004683f0(CDrawSurface * this_ptr, int x1, int y1, int x2, ...)
    ADD ESP,0x14                        ; 0046aa9a
    PUSH 0x6                            ; 0046aa9d
    PUSH 0x5                            ; 0046aa9f
    PUSH 0xa                            ; 0046aaa1
    LEA EAX,[ESP + 0x34]                ; 0046aaa3
    PUSH EAX                            ; 0046aaa7
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_00468190 ; 0046aaa8
        ;   XREF to: 00468190 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_00468190(CDrawSurface * this_ptr, int center_x, int center_y, int radius)
    ADD ESP,0x10                        ; 0046aaad
    PUSH 0xff                           ; 0046aab0
    PUSH 0x0                            ; 0046aab5
    PUSH 0x0                            ; 0046aab7
    CALL cockpit_drawsurf.cpp_FUN_00467c80 ; 0046aab9
        ;   XREF to: 00467c80 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_FUN_00467c80(int red, int green, int blue)
    ADD ESP,0xc                         ; 0046aabe
    LEA EAX,[ESP + 0x8]                 ; 0046aac1
    PUSH EAX                            ; 0046aac5
    CALL cockpit_drawsurf.cpp_CDrawSurface_fillFullSurface_FUN_00469690 ; 0046aac6
        ;   XREF to: 00469690 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_fillFullSurface_FUN_00469690(CDrawSurface * this_ptr)
    ADD ESP,0x4                         ; 0046aacb
    PUSH 0xfb                           ; 0046aace
    CALL cockpit_drawsurf.cpp_setColor_FUN_00467a70 ; 0046aad3
        ;   XREF to: 00467a70 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_setColor_FUN_00467a70(int color_value)
    ADD ESP,0x4                         ; 0046aad8
    LEA EAX,[ESP + 0x8]                 ; 0046aadb
    PUSH EAX                            ; 0046aadf
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawSurfaceBorder_FUN_00468f80 ; 0046aae0
        ;   XREF to: 00468f80 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawSurfaceBorder_FUN_00468f80(CDrawSurface * this_ptr)
    ADD ESP,0x4                         ; 0046aae5
    PUSH 0x9                            ; 0046aae8
    PUSH 0x13                           ; 0046aaea
    PUSH 0x0                            ; 0046aaec
    PUSH 0x0                            ; 0046aaee
    LEA EAX,[ESP + 0x18]                ; 0046aaf0
    PUSH EAX                            ; 0046aaf4
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawClippedLine_FUN_004683f0 ; 0046aaf5
        ;   XREF to: 004683f0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawClippedLine_FUN_004683f0(CDrawSurface * this_ptr, int x1, int y1, int x2, ...)
    MOV EAX,[0x005f2af4]                ; 0046aafa | DAT_005f2af4
    ADD ESP,0x14                        ; 0046aaff
    MOV dword ptr [ESP + 0xa8],EAX      ; 0046ab02
    MOV EAX,[0x005fba18]                ; 0046ab09 | DAT_005fba18
    MOV EDX,EAX                         ; 0046ab0e
    SAR EDX,0x1f                        ; 0046ab10
    SUB EAX,EDX                         ; 0046ab13
    SAR EAX,0x1                         ; 0046ab15
    MOV EBP,EAX                         ; 0046ab17
    MOV EAX,[0x005fba1c]                ; 0046ab19 | DAT_005fba1c
    MOV EDX,EAX                         ; 0046ab1e
    SAR EDX,0x1f                        ; 0046ab20
    SUB EAX,EDX                         ; 0046ab23
    SAR EAX,0x1                         ; 0046ab25
    MOV EDX,dword ptr [0x005fba1c]      ; 0046ab27 | DAT_005fba1c
    ADD EAX,0x66                        ; 0046ab2d
    DEC EDX                             ; 0046ab30
    SUB EDX,EAX                         ; 0046ab31
    PUSH 0x0                            ; 0046ab33
    LEA EDI,[EDX + 0x1]                 ; 0046ab35
    PUSH EDI                            ; 0046ab38
    PUSH 0xc9                           ; 0046ab39
    PUSH EAX                            ; 0046ab3e
    PUSH EBP                            ; 0046ab3f
    LEA EAX,[ESP + 0x9c]                ; 0046ab40
    PUSH EAX                            ; 0046ab47
    MOV EBX,dword ptr [ESI + 0x41f0]    ; 0046ab48
    CALL cockpit_drawsurf.cpp_CDrawSurface_initFromParent_FUN_00467900 ; 0046ab4e
        ;   XREF to: 00467900 (UNCONDITIONAL_CALL)  ; CDrawSurface * cockpit_drawsurf.cpp_CDrawSurface_initFromParent_FUN_00467900(CDrawSurface * this_ptr, int x, int y, int width, ...)
    ADD ESP,0x18                        ; 0046ab53
    PUSH 0x80                           ; 0046ab56
    PUSH 0x80                           ; 0046ab5b
    PUSH 0x80                           ; 0046ab60
    CALL cockpit_drawsurf.cpp_FUN_00467c80 ; 0046ab65
        ;   XREF to: 00467c80 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_FUN_00467c80(int red, int green, int blue)
    ADD ESP,0xc                         ; 0046ab6a
    LEA EAX,[ESP + 0x88]                ; 0046ab6d
    PUSH EAX                            ; 0046ab74
    CALL cockpit_drawsurf.cpp_CDrawSurface_fillFullSurface_FUN_00469690 ; 0046ab75
        ;   XREF to: 00469690 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_fillFullSurface_FUN_00469690(CDrawSurface * this_ptr)
    ADD ESP,0x4                         ; 0046ab7a
    PUSH 0x7                            ; 0046ab7d
    CALL cockpit_drawsurf.cpp_setColor_FUN_00467a70 ; 0046ab7f
        ;   XREF to: 00467a70 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_setColor_FUN_00467a70(int color_value)
    ADD ESP,0x4                         ; 0046ab84
    LEA EAX,[ESP + 0x88]                ; 0046ab87
    PUSH EAX                            ; 0046ab8e
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawSurfaceBorder_FUN_00468f80 ; 0046ab8f
        ;   XREF to: 00468f80 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawSurfaceBorder_FUN_00468f80(CDrawSurface * this_ptr)
    ADD ESP,0x4                         ; 0046ab94
    PUSH 0xf9                           ; 0046ab97
    CALL cockpit_drawsurf.cpp_setColor_FUN_00467a70 ; 0046ab9c
        ;   XREF to: 00467a70 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_setColor_FUN_00467a70(int color_value)
    ADD ESP,0x4                         ; 0046aba1
    PUSH ESI                            ; 0046aba4
    CALL cockpit_drawsurf.cpp_setCurrentFont_FUN_00467f20 ; 0046aba5
        ;   XREF to: 00467f20 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_setCurrentFont_FUN_00467f20(CBitFont * font_ptr)
    ADD ESP,0x4                         ; 0046abaa
    MOV dword ptr [ESI + 0x4204],0x1    ; 0046abad
    LEA EAX,[ESP + 0xa8]                ; 0046abb7
    PUSH EAX                            ; 0046abbe
    PUSH 0x5bc3f5                       ; 0046abbf
    PUSH 0x1                            ; 0046abc4
    PUSH 0x1                            ; 0046abc6
    LEA EAX,[ESP + 0x98]                ; 0046abc8
    PUSH EAX                            ; 0046abcf
    CALL cockpit_drawsurf.cpp_FUN_00469e70 ; 0046abd0
        ;   XREF to: 00469e70 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_FUN_00469e70()
    ADD ESP,0x14                        ; 0046abd5
    LEA EAX,[ESP + 0xa8]                ; 0046abd8
    PUSH EAX                            ; 0046abdf
    PUSH 0x5bc3f8                       ; 0046abe0
    PUSH 0x1                            ; 0046abe5
    PUSH 0xc7                           ; 0046abe7
    LEA EAX,[ESP + 0x98]                ; 0046abec
    PUSH EAX                            ; 0046abf3
    CALL cockpit_drawsurf.cpp_FUN_00469f40 ; 0046abf4
        ;   XREF to: 00469f40 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_FUN_00469f40()
    ADD ESP,0x14                        ; 0046abf9
    LEA EAX,[ESP + 0xa8]                ; 0046abfc
    PUSH EAX                            ; 0046ac03
    PUSH 0x5bc3fb                       ; 0046ac04
    PUSH 0x1                            ; 0046ac09
    PUSH 0x64                           ; 0046ac0b
    LEA EAX,[ESP + 0x98]                ; 0046ac0d
    PUSH EAX                            ; 0046ac14
    CALL cockpit_drawsurf.cpp_FUN_0046a010 ; 0046ac15
        ;   XREF to: 0046a010 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_FUN_0046a010()
    ADD ESP,0x14                        ; 0046ac1a
    LEA EAX,[ESP + 0xa8]                ; 0046ac1d
    PUSH EAX                            ; 0046ac24
    PUSH 0x5bc3fe                       ; 0046ac25
    LEA EBP,[EBX + 0x1]                 ; 0046ac2a
    PUSH EBP                            ; 0046ac2d
    PUSH 0x64                           ; 0046ac2e
    LEA EAX,[ESP + 0x98]                ; 0046ac30
    PUSH EAX                            ; 0046ac37
    CALL cockpit_drawsurf.cpp_FUN_0046a0e0 ; 0046ac38
        ;   XREF to: 0046a0e0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_FUN_0046a0e0()
    ADD ESP,0x14                        ; 0046ac3d
    LEA EAX,[ESP + 0xa8]                ; 0046ac40
    PUSH EAX                            ; 0046ac47
    LEA EAX,[EBX + EBX*0x1]             ; 0046ac48
    PUSH 0x5bc401                       ; 0046ac4b
    MOV dword ptr [ESP + 0xc4],EAX      ; 0046ac50
    INC EAX                             ; 0046ac57
    PUSH EAX                            ; 0046ac58
    PUSH 0x64                           ; 0046ac59
    MOV dword ptr [ESP + 0xd0],EAX      ; 0046ac5b
    LEA EAX,[ESP + 0x98]                ; 0046ac62
    PUSH EAX                            ; 0046ac69
    CALL cockpit_drawsurf.cpp_FUN_0046a1b0 ; 0046ac6a
        ;   XREF to: 0046a1b0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_FUN_0046a1b0()
    ADD ESP,0x14                        ; 0046ac6f
    LEA EAX,[ESP + 0xa8]                ; 0046ac72
    PUSH EAX                            ; 0046ac79
    LEA EAX,[EBX*0x4 + 0x0]             ; 0046ac7a
    SUB EAX,EBX                         ; 0046ac81
    MOV dword ptr [ESP + 0xb4],EAX      ; 0046ac83
    MOV EDX,dword ptr [ESP + 0xb4]      ; 0046ac8a
    MOV EAX,EDI                         ; 0046ac91
    PUSH 0x5bc404                       ; 0046ac93
    SUB EAX,EDX                         ; 0046ac98
    PUSH EAX                            ; 0046ac9a
    PUSH 0x96                           ; 0046ac9b
    PUSH 0x32                           ; 0046aca0
    MOV dword ptr [ESP + 0xc0],EAX      ; 0046aca2
    LEA EAX,[ESP + 0x9c]                ; 0046aca9
    PUSH EAX                            ; 0046acb0
    CALL cockpit_drawsurf.cpp_FUN_0046a280 ; 0046acb1
        ;   XREF to: 0046a280 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_FUN_0046a280()
    ADD ESP,0x18                        ; 0046acb6
    LEA EAX,[ESP + 0xa8]                ; 0046acb9
    MOV EDX,dword ptr [ESP + 0xbc]      ; 0046acc0
    PUSH EAX                            ; 0046acc7
    MOV EAX,EDI                         ; 0046acc8
    SUB EAX,EDX                         ; 0046acca
    PUSH 0x5bc407                       ; 0046accc
    MOV dword ptr [ESP + 0xc0],EAX      ; 0046acd1
    ADD EAX,0x32                        ; 0046acd8
    PUSH EAX                            ; 0046acdb
    MOV EAX,dword ptr [ESP + 0xc4]      ; 0046acdc
    SUB EAX,0x32                        ; 0046ace3
    PUSH EAX                            ; 0046ace6
    PUSH 0x64                           ; 0046ace7
    LEA EAX,[ESP + 0x9c]                ; 0046ace9
    PUSH EAX                            ; 0046acf0
    CALL cockpit_drawsurf.cpp_FUN_0046a360 ; 0046acf1
        ;   XREF to: 0046a360 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_FUN_0046a360()
    ADD ESP,0x18                        ; 0046acf6
    LEA EAX,[ESP + 0xa8]                ; 0046acf9
    PUSH EAX                            ; 0046ad00
    SUB EDI,EBX                         ; 0046ad01
    PUSH 0x5bc40a                       ; 0046ad03
    LEA EAX,[EDI + 0x32]                ; 0046ad08
    PUSH EAX                            ; 0046ad0b
    LEA EAX,[EDI + -0x32]               ; 0046ad0c
    PUSH EAX                            ; 0046ad0f
    PUSH 0x96                           ; 0046ad10
    PUSH 0x32                           ; 0046ad15
    LEA EAX,[ESP + 0xa0]                ; 0046ad17
    PUSH EAX                            ; 0046ad1e
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidthPrintf_FUN_0046a450 ; 0046ad1f
        ;   XREF to: 0046a450 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidthPrintf_FUN_0046a450(CDrawSurface * this_ptr, int x, int width, int y, ...)
    ADD ESP,0x1c                        ; 0046ad24
    LEA EAX,[ESP + 0xa8]                ; 0046ad27
    PUSH EAX                            ; 0046ad2e
    PUSH 0x5bc40d                       ; 0046ad2f
    LEA EAX,[ESP + 0x90]                ; 0046ad34
    PUSH EAX                            ; 0046ad3b
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurfacePrintf_FUN_0046a660 ; 0046ad3c
        ;   XREF to: 0046a660 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurfacePrintf_FUN_0046a660(CDrawSurface * this_ptr, char * format)
    ADD ESP,0xc                         ; 0046ad41
    PUSH 0xfb                           ; 0046ad44
    CALL cockpit_drawsurf.cpp_setColor_FUN_00467a70 ; 0046ad49
        ;   XREF to: 00467a70 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_setColor_FUN_00467a70(int color_value)
    ADD ESP,0x4                         ; 0046ad4e
    PUSH 0x1                            ; 0046ad51
    PUSH 0x1                            ; 0046ad53
    LEA EAX,[ESP + 0x90]                ; 0046ad55
    PUSH EAX                            ; 0046ad5c
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00467f30 ; 0046ad5d
        ;   XREF to: 00467f30 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00467f30(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 0046ad62
    PUSH 0x1                            ; 0046ad65
    PUSH 0xc7                           ; 0046ad67
    LEA EAX,[ESP + 0x90]                ; 0046ad6c
    PUSH EAX                            ; 0046ad73
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00467f30 ; 0046ad74
        ;   XREF to: 00467f30 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00467f30(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 0046ad79
    PUSH 0x1                            ; 0046ad7c
    PUSH 0x64                           ; 0046ad7e
    LEA EAX,[ESP + 0x90]                ; 0046ad80
    PUSH EAX                            ; 0046ad87
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00467f30 ; 0046ad88
        ;   XREF to: 00467f30 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00467f30(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 0046ad8d
    PUSH EBP                            ; 0046ad90
    PUSH 0x64                           ; 0046ad91
    LEA EAX,[ESP + 0x90]                ; 0046ad93
    PUSH EAX                            ; 0046ad9a
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00467f30 ; 0046ad9b
        ;   XREF to: 00467f30 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00467f30(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 0046ada0
    MOV ECX,dword ptr [ESP + 0xc0]      ; 0046ada3
    PUSH ECX                            ; 0046adaa
    PUSH 0x64                           ; 0046adab
    LEA EAX,[ESP + 0x90]                ; 0046adad
    PUSH EAX                            ; 0046adb4
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00467f30 ; 0046adb5
        ;   XREF to: 00467f30 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00467f30(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 0046adba
    MOV EAX,dword ptr [ESP + 0xac]      ; 0046adbd
    PUSH EAX                            ; 0046adc4
    PUSH 0x64                           ; 0046adc5
    LEA EAX,[ESP + 0x90]                ; 0046adc7
    PUSH EAX                            ; 0046adce
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00467f30 ; 0046adcf
        ;   XREF to: 00467f30 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00467f30(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 0046add4
    MOV EDX,dword ptr [ESP + 0xb8]      ; 0046add7
    PUSH EDX                            ; 0046adde
    PUSH 0x64                           ; 0046addf
    LEA EAX,[ESP + 0x90]                ; 0046ade1
    PUSH EAX                            ; 0046ade8
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00467f30 ; 0046ade9
        ;   XREF to: 00467f30 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00467f30(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 0046adee
    PUSH EDI                            ; 0046adf1
    PUSH 0x64                           ; 0046adf2
    LEA EAX,[ESP + 0x90]                ; 0046adf4
    PUSH EAX                            ; 0046adfb
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00467f30 ; 0046adfc
        ;   XREF to: 00467f30 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00467f30(CDrawSurface * this_ptr, int x, int y)
    MOV EAX,[0x005fba18]                ; 0046ae01 | DAT_005fba18
    MOV EDX,EAX                         ; 0046ae06
    SAR EDX,0x1f                        ; 0046ae08
    SUB EAX,EDX                         ; 0046ae0b
    SAR EAX,0x1                         ; 0046ae0d
    LEA ECX,[EAX + 0xffffff36]          ; 0046ae0f
    MOV EAX,[0x005fba1c]                ; 0046ae15 | DAT_005fba1c
    MOV EDX,EAX                         ; 0046ae1a
    SAR EDX,0x1f                        ; 0046ae1c
    SUB EAX,EDX                         ; 0046ae1f
    SAR EAX,0x1                         ; 0046ae21
    MOV EDX,dword ptr [0x005fba1c]      ; 0046ae23 | DAT_005fba1c
    ADD EAX,0x66                        ; 0046ae29
    DEC EDX                             ; 0046ae2c
    ADD ESP,0xc                         ; 0046ae2d
    SUB EDX,EAX                         ; 0046ae30
    PUSH 0x0                            ; 0046ae32
    LEA EDI,[EDX + 0x1]                 ; 0046ae34
    PUSH EDI                            ; 0046ae37
    PUSH 0xc9                           ; 0046ae38
    PUSH EAX                            ; 0046ae3d
    PUSH ECX                            ; 0046ae3e
    LEA EAX,[ESP + 0x5c]                ; 0046ae3f
    PUSH EAX                            ; 0046ae43
    CALL cockpit_drawsurf.cpp_CDrawSurface_initFromParent_FUN_00467900 ; 0046ae44
        ;   XREF to: 00467900 (UNCONDITIONAL_CALL)  ; CDrawSurface * cockpit_drawsurf.cpp_CDrawSurface_initFromParent_FUN_00467900(CDrawSurface * this_ptr, int x, int y, int width, ...)
    ADD ESP,0x18                        ; 0046ae49
    PUSH 0x80                           ; 0046ae4c
    PUSH 0x80                           ; 0046ae51
    PUSH 0x80                           ; 0046ae56
    CALL cockpit_drawsurf.cpp_FUN_00467c80 ; 0046ae5b
        ;   XREF to: 00467c80 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_FUN_00467c80(int red, int green, int blue)
    ADD ESP,0xc                         ; 0046ae60
    LEA EAX,[ESP + 0x48]                ; 0046ae63
    PUSH EAX                            ; 0046ae67
    CALL cockpit_drawsurf.cpp_CDrawSurface_fillFullSurface_FUN_00469690 ; 0046ae68
        ;   XREF to: 00469690 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_fillFullSurface_FUN_00469690(CDrawSurface * this_ptr)
    ADD ESP,0x4                         ; 0046ae6d
    PUSH 0x7                            ; 0046ae70
    CALL cockpit_drawsurf.cpp_setColor_FUN_00467a70 ; 0046ae72
        ;   XREF to: 00467a70 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_setColor_FUN_00467a70(int color_value)
    ADD ESP,0x4                         ; 0046ae77
    LEA EAX,[ESP + 0x48]                ; 0046ae7a
    PUSH EAX                            ; 0046ae7e
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawSurfaceBorder_FUN_00468f80 ; 0046ae7f
        ;   XREF to: 00468f80 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawSurfaceBorder_FUN_00468f80(CDrawSurface * this_ptr)
    ADD ESP,0x4                         ; 0046ae84
    PUSH 0xf9                           ; 0046ae87
    CALL cockpit_drawsurf.cpp_setColor_FUN_00467a70 ; 0046ae8c
        ;   XREF to: 00467a70 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_setColor_FUN_00467a70(int color_value)
    ADD ESP,0x4                         ; 0046ae91
    PUSH 0x0                            ; 0046ae94
    CALL cockpit_drawsurf.cpp_setCurrentFont_FUN_00467f20 ; 0046ae96
        ;   XREF to: 00467f20 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_setCurrentFont_FUN_00467f20(CBitFont * font_ptr)
    ADD ESP,0x4                         ; 0046ae9b
    MOV dword ptr [ESI + 0x4204],0x1    ; 0046ae9e
    LEA EAX,[ESP + 0xa8]                ; 0046aea8
    PUSH EAX                            ; 0046aeaf
    PUSH 0x5bc410                       ; 0046aeb0
    PUSH 0x1                            ; 0046aeb5
    PUSH 0x1                            ; 0046aeb7
    LEA EAX,[ESP + 0x58]                ; 0046aeb9
    PUSH EAX                            ; 0046aebd
    CALL cockpit_drawsurf.cpp_FUN_00469e70 ; 0046aebe
        ;   XREF to: 00469e70 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_FUN_00469e70()
    ADD ESP,0x14                        ; 0046aec3
    LEA EAX,[ESP + 0xa8]                ; 0046aec6
    PUSH EAX                            ; 0046aecd
    PUSH 0x5bc413                       ; 0046aece
    PUSH 0x1                            ; 0046aed3
    PUSH 0xc7                           ; 0046aed5
    LEA EAX,[ESP + 0x58]                ; 0046aeda
    PUSH EAX                            ; 0046aede
    CALL cockpit_drawsurf.cpp_FUN_00469f40 ; 0046aedf
        ;   XREF to: 00469f40 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_FUN_00469f40()
    ADD ESP,0x14                        ; 0046aee4
    LEA EAX,[ESP + 0xa8]                ; 0046aee7
    PUSH EAX                            ; 0046aeee
    PUSH 0x5bc416                       ; 0046aeef
    PUSH 0x1                            ; 0046aef4
    PUSH 0x64                           ; 0046aef6
    LEA EAX,[ESP + 0x58]                ; 0046aef8
    PUSH EAX                            ; 0046aefc
    CALL cockpit_drawsurf.cpp_FUN_0046a010 ; 0046aefd
        ;   XREF to: 0046a010 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_FUN_0046a010()
    ADD ESP,0x14                        ; 0046af02
    LEA EAX,[ESP + 0xa8]                ; 0046af05
    PUSH EAX                            ; 0046af0c
    PUSH 0x5bc419                       ; 0046af0d
    PUSH EBP                            ; 0046af12
    PUSH 0x64                           ; 0046af13
    LEA EAX,[ESP + 0x58]                ; 0046af15
    PUSH EAX                            ; 0046af19
    CALL cockpit_drawsurf.cpp_FUN_0046a0e0 ; 0046af1a
        ;   XREF to: 0046a0e0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_FUN_0046a0e0()
    ADD ESP,0x14                        ; 0046af1f
    LEA EAX,[ESP + 0xa8]                ; 0046af22
    PUSH EAX                            ; 0046af29
    PUSH 0x5bc41c                       ; 0046af2a
    MOV ECX,dword ptr [ESP + 0xc8]      ; 0046af2f
    PUSH ECX                            ; 0046af36
    PUSH 0x64                           ; 0046af37
    LEA EAX,[ESP + 0x58]                ; 0046af39
    PUSH EAX                            ; 0046af3d
    CALL cockpit_drawsurf.cpp_FUN_0046a1b0 ; 0046af3e
        ;   XREF to: 0046a1b0 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_FUN_0046a1b0()
    ADD ESP,0x14                        ; 0046af43
    LEA EAX,[ESP + 0xa8]                ; 0046af46
    PUSH EAX                            ; 0046af4d
    MOV ESI,dword ptr [ESP + 0xb4]      ; 0046af4e
    MOV EAX,EDI                         ; 0046af55
    PUSH 0x5bc41f                       ; 0046af57
    SUB EAX,ESI                         ; 0046af5c
    PUSH EAX                            ; 0046af5e
    PUSH 0x96                           ; 0046af5f
    PUSH 0x32                           ; 0046af64
    MOV dword ptr [ESP + 0xc8],EAX      ; 0046af66
    LEA EAX,[ESP + 0x5c]                ; 0046af6d
    PUSH EAX                            ; 0046af71
    MOV ESI,EDI                         ; 0046af72
    CALL cockpit_drawsurf.cpp_FUN_0046a280 ; 0046af74
        ;   XREF to: 0046a280 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_FUN_0046a280()
    ADD ESP,0x18                        ; 0046af79
    LEA EAX,[ESP + 0xa8]                ; 0046af7c
    MOV EDX,dword ptr [ESP + 0xbc]      ; 0046af83
    PUSH EAX                            ; 0046af8a
    SUB ESI,EDX                         ; 0046af8b
    PUSH 0x5bc422                       ; 0046af8d
    LEA EAX,[ESI + 0x32]                ; 0046af92
    PUSH EAX                            ; 0046af95
    LEA EAX,[ESI + -0x32]               ; 0046af96
    PUSH EAX                            ; 0046af99
    PUSH 0x64                           ; 0046af9a
    LEA EAX,[ESP + 0x5c]                ; 0046af9c
    PUSH EAX                            ; 0046afa0
    CALL cockpit_drawsurf.cpp_FUN_0046a360 ; 0046afa1
        ;   XREF to: 0046a360 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_FUN_0046a360()
    ADD ESP,0x18                        ; 0046afa6
    LEA EAX,[ESP + 0xa8]                ; 0046afa9
    PUSH EAX                            ; 0046afb0
    SUB EDI,EBX                         ; 0046afb1
    PUSH 0x5bc425                       ; 0046afb3
    LEA EAX,[EDI + 0x32]                ; 0046afb8
    PUSH EAX                            ; 0046afbb
    LEA EAX,[EDI + -0x32]               ; 0046afbc
    PUSH EAX                            ; 0046afbf
    PUSH 0x96                           ; 0046afc0
    PUSH 0x32                           ; 0046afc5
    LEA EAX,[ESP + 0x60]                ; 0046afc7
    PUSH EAX                            ; 0046afcb
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidthPrintf_FUN_0046a450 ; 0046afcc
        ;   XREF to: 0046a450 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidthPrintf_FUN_0046a450(CDrawSurface * this_ptr, int x, int width, int y, ...)
    ADD ESP,0x1c                        ; 0046afd1
    LEA EAX,[ESP + 0xa8]                ; 0046afd4
    PUSH EAX                            ; 0046afdb
    PUSH 0x5bc428                       ; 0046afdc
    LEA EAX,[ESP + 0x50]                ; 0046afe1
    PUSH EAX                            ; 0046afe5
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurfacePrintf_FUN_0046a660 ; 0046afe6
        ;   XREF to: 0046a660 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurfacePrintf_FUN_0046a660(CDrawSurface * this_ptr, char * format)
    ADD ESP,0xc                         ; 0046afeb
    PUSH 0xfb                           ; 0046afee
    CALL cockpit_drawsurf.cpp_setColor_FUN_00467a70 ; 0046aff3
        ;   XREF to: 00467a70 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_setColor_FUN_00467a70(int color_value)
    ADD ESP,0x4                         ; 0046aff8
    PUSH 0x1                            ; 0046affb
    PUSH 0x1                            ; 0046affd
    LEA EAX,[ESP + 0x50]                ; 0046afff
    PUSH EAX                            ; 0046b003
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00467f30 ; 0046b004
        ;   XREF to: 00467f30 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00467f30(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 0046b009
    PUSH 0x1                            ; 0046b00c
    PUSH 0xc7                           ; 0046b00e
    LEA EAX,[ESP + 0x50]                ; 0046b013
    PUSH EAX                            ; 0046b017
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00467f30 ; 0046b018
        ;   XREF to: 00467f30 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00467f30(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 0046b01d
    PUSH 0x1                            ; 0046b020
    PUSH 0x64                           ; 0046b022
    LEA EAX,[ESP + 0x50]                ; 0046b024
    PUSH EAX                            ; 0046b028
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00467f30 ; 0046b029
        ;   XREF to: 00467f30 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00467f30(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 0046b02e
    PUSH EBP                            ; 0046b031
    PUSH 0x64                           ; 0046b032
    LEA EAX,[ESP + 0x50]                ; 0046b034
    PUSH EAX                            ; 0046b038
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00467f30 ; 0046b039
        ;   XREF to: 00467f30 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00467f30(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 0046b03e
    MOV ECX,dword ptr [ESP + 0xc0]      ; 0046b041
    PUSH ECX                            ; 0046b048
    PUSH 0x64                           ; 0046b049
    LEA EAX,[ESP + 0x50]                ; 0046b04b
    PUSH EAX                            ; 0046b04f
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00467f30 ; 0046b050
        ;   XREF to: 00467f30 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00467f30(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 0046b055
    MOV EBX,dword ptr [ESP + 0xb4]      ; 0046b058
    PUSH EBX                            ; 0046b05f
    PUSH 0x64                           ; 0046b060
    LEA EAX,[ESP + 0x50]                ; 0046b062
    PUSH EAX                            ; 0046b066
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00467f30 ; 0046b067
        ;   XREF to: 00467f30 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00467f30(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 0046b06c
    PUSH ESI                            ; 0046b06f
    PUSH 0x64                           ; 0046b070
    LEA EAX,[ESP + 0x50]                ; 0046b072
    PUSH EAX                            ; 0046b076
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00467f30 ; 0046b077
        ;   XREF to: 00467f30 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00467f30(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 0046b07c
    PUSH EDI                            ; 0046b07f
    PUSH 0x64                           ; 0046b080
    LEA EAX,[ESP + 0x50]                ; 0046b082
    PUSH EAX                            ; 0046b086
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00467f30 ; 0046b087
        ;   XREF to: 00467f30 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_00467f30(CDrawSurface * this_ptr, int x, int y)
    ADD ESP,0xc                         ; 0046b08c
    PUSH 0x4                            ; 0046b08f
    CALL cockpit_drawsurf.cpp_setColor_FUN_00467a70 ; 0046b091
        ;   XREF to: 00467a70 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_setColor_FUN_00467a70(int color_value)
    ADD ESP,0x4                         ; 0046b096
    LEA EAX,[ESP + 0x48]                ; 0046b099
    PUSH EAX                            ; 0046b09d
    CALL cockpit_drawsurf.cpp_FUN_004693b0 ; 0046b09e
        ;   XREF to: 004693b0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_FUN_004693b0(CDrawSurface * this_ptr)
    ADD ESP,0x4                         ; 0046b0a3
    POP EBX                             ; 0046b0a6
    POP EDI                             ; 0046b0a7
    ADD ESP,0xbc                        ; 0046b0a8
    POP EBP                             ; 0046b0ae
    POP ESI                             ; 0046b0af
    RET                                 ; 0046b0b0

