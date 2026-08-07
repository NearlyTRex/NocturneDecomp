; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_font_cpp_CBitFont_drawCharacter_FUN_004916c0(CBitFont *this_ptr,int character_code,int x,int y,int color_mode,int color_value)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   character_code
; int              Stack[0xc]:4   x
; int              Stack[0x10]:4   y
; int              Stack[0x14]:4   color_mode
; int              Stack[0x18]:4   color_value
; Local Variables:
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
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
; XREF[3]:
;   engine_font.cpp_CBitFont_drawText_FUN_00490980 at 00490aca
;   engine_font.cpp_CBitFont_showExtendedFontTest_FUN_00493760 at 004937e0
;   engine_font.cpp_CBitFont_showFontTest_FUN_004933c0 at 0049341d
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   undefined4 DAT_005b763c
;   _MMX_INTEGER g_RedMask16
;   _MMX_INTEGER g_GreenMask16
;   _MMX_INTEGER g_BlueMask16
;   void*[1200] g_ScreenBufferArray
;   undefined4 g_ScreenBufferArray[1]
;   _BIT_INTEGER32 g_RedBitPosition
;   int g_RedScaleFactor
;   _BIT_INTEGER32 g_RedDitherShift
;   _BIT_INTEGER32 g_GreenBitPosition
;   int g_GreenScaleFactor
;   _BIT_INTEGER32 g_GreenDitherShift
;   _BIT_INTEGER32 g_BlueBitPosition
;   int g_BlueScaleFactor
;   ... and 10 more
;
; Called Functions:
;   engine_font.cpp_CBitFont_render3DCharacter_FUN_004911f0
;   engine_font.cpp_clipCharacter_FUN_0048fd50
;   engine_font.cpp_drawAlphaBlendedPixels_FUN_00491160
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004916c0
        ;   Label: engine_font.cpp_CBitFont_drawCharacter_FUN_004916c0
    PUSH ESI                            ; 004916c1
    PUSH EDI                            ; 004916c2
    PUSH EBP                            ; 004916c3
    SUB ESP,0xc8                        ; 004916c4
    MOV EBX,dword ptr [ESP + 0xdc]      ; 004916ca
    MOV EDI,dword ptr [ESP + 0xe0]      ; 004916d1
    MOV ECX,dword ptr [ESP + 0xf0]      ; 004916d8
    TEST EDI,EDI                        ; 004916df
    JL 0x004918d0                       ; 004916e1
        ;   XREF to: 004918d0 (CONDITIONAL_JUMP)  ; LAB_004918d0
    CMP EDI,0x100                       ; 004916e7
    JGE 0x004918d0                      ; 004916ed
        ;   XREF to: 004918d0 (CONDITIONAL_JUMP)  ; LAB_004918d0
    MOV EAX,dword ptr [EBX + EDI*0x4 + 0x2568] ; 004916f3
    ADD EAX,dword ptr [EBX + 0x3174]    ; 004916fa
    MOV ESI,dword ptr [EBX + EDI*0x4 + 0x1d68] ; 00491700
    MOV dword ptr [ESP],EAX             ; 00491707
    TEST ESI,ESI                        ; 0049170a
    JZ 0x004918df                       ; 0049170c
        ;   XREF to: 004918df (CONDITIONAL_JUMP)  ; LAB_004918df
    CMP ECX,-0x1                        ; 00491712
    JNZ 0x004918ee                      ; 00491715
        ;   XREF to: 004918ee (CONDITIONAL_JUMP)  ; LAB_004918ee
    LEA EDX,[EDI*0x4 + 0x0]             ; 0049171b
        ;   Label: LAB_0049171b
    ADD EDX,EBX                         ; 00491722
    MOV EAX,dword ptr [EDX + 0x1d68]    ; 00491724
    MOV dword ptr [ESP + 0x4],EAX       ; 0049172a
    MOV ECX,dword ptr [ESP + 0xe8]      ; 0049172e
    MOV EAX,dword ptr [EDX + 0x2d68]    ; 00491735
    ADD ECX,EAX                         ; 0049173b
    MOV dword ptr [ESP + 0xe8],ECX      ; 0049173d
    MOV EAX,dword ptr [ESP + 0xe4]      ; 00491744
    ADD EAX,dword ptr [EDX + 0x2568]    ; 0049174b
    DEC EAX                             ; 00491751
    MOV dword ptr [ESP + 0x8],EAX       ; 00491752
    MOV EBP,dword ptr [EDX + 0x2968]    ; 00491756
    LEA EAX,[ECX + EBP*0x1 + -0x1]      ; 0049175c
    MOV dword ptr [ESP + 0xc],EAX       ; 00491760
    MOV EAX,dword ptr [EDX + 0x2168]    ; 00491764
    MOV ESI,EAX                         ; 0049176a
    MOV dword ptr [ESP + 0x10],EAX      ; 0049176c
    MOV EAX,dword ptr [EBX + 0x3184]    ; 00491770
    MOV ESI,dword ptr [EBX + ESI*0x4 + 0x154] ; 00491776
    TEST EAX,EAX                        ; 0049177d
    JNZ 0x00491920                      ; 0049177f
        ;   XREF to: 00491920 (CONDITIONAL_JUMP)  ; LAB_00491920
    MOV EAX,dword ptr [ESP + 0xe4]      ; 00491785
    MOV EBP,dword ptr [0x01c00c58]      ; 0049178c | g_ClipLeft
    MOV ECX,dword ptr [EDX + 0x2568]    ; 00491792
    MOV EDX,dword ptr [EDX + 0x2968]    ; 00491798
    CMP EAX,EBP                         ; 0049179e
    JL 0x004918c0                       ; 004917a0
        ;   XREF to: 004918c0 (CONDITIONAL_JUMP)  ; LAB_004918c0
    MOV EAX,dword ptr [ESP + 0xe8]      ; 004917a6
    CMP EAX,dword ptr [0x01c00c5c]      ; 004917ad | g_ClipTop
    JL 0x004918c0                       ; 004917b3
        ;   XREF to: 004918c0 (CONDITIONAL_JUMP)  ; LAB_004918c0
    MOV EAX,[0x01c00c60]                ; 004917b9 | g_ClipRight
    INC EAX                             ; 004917be
    SUB EAX,ECX                         ; 004917bf
    CMP EAX,dword ptr [ESP + 0xe4]      ; 004917c1
    JL 0x004918c0                       ; 004917c8
        ;   XREF to: 004918c0 (CONDITIONAL_JUMP)  ; LAB_004918c0
    MOV EAX,[0x01c00c64]                ; 004917ce | g_ClipBottom
    INC EAX                             ; 004917d3
    MOV EBP,dword ptr [ESP + 0xe8]      ; 004917d4
    SUB EAX,EDX                         ; 004917db
    CMP EAX,EBP                         ; 004917dd
    JL 0x004918c0                       ; 004917df
        ;   XREF to: 004918c0 (CONDITIONAL_JUMP)  ; LAB_004918c0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004917e5
        ;   Label: LAB_004917e5
    SUB EAX,dword ptr [ESP + 0xe4]      ; 004917e9
    INC EAX                             ; 004917f0
    SUB ESI,EAX                         ; 004917f1
    MOV ECX,dword ptr [EBX + 0x318c]    ; 004917f3
    MOV dword ptr [ESP + 0x14],ESI      ; 004917f9
    TEST ECX,ECX                        ; 004917fd
    JZ 0x0049180e                       ; 004917ff
        ;   XREF to: 0049180e (CONDITIONAL_JUMP)  ; LAB_0049180e
    CMP dword ptr [0x01c02594],0x0      ; 00491801 | g_UseExternalRenderer
    JNZ 0x00491960                      ; 00491808
        ;   XREF to: 00491960 (CONDITIONAL_JUMP)  ; LAB_00491960
    MOV EDI,dword ptr [0x005b7624]      ; 0049180e | g_BitsPerPixel
        ;   Label: LAB_0049180e
    CMP EDI,0x8                         ; 00491814
    JNZ 0x00491b60                      ; 00491817
        ;   XREF to: 00491b60 (CONDITIONAL_JUMP)  ; LAB_00491b60
    MOV ECX,dword ptr [ESP + 0xec]      ; 0049181d
    CMP ECX,-0x1                        ; 00491824
    JNZ 0x0049199c                      ; 00491827
        ;   XREF to: 0049199c (CONDITIONAL_JUMP)  ; LAB_0049199c
    MOV EAX,dword ptr [ESP + 0xe8]      ; 0049182d
    MOV ESI,dword ptr [ESP + 0xc]       ; 00491834
    MOV dword ptr [ESP + 0x18],EAX      ; 00491838
    CMP EAX,ESI                         ; 0049183c
    JG 0x004918c0                       ; 0049183e
        ;   XREF to: 004918c0 (CONDITIONAL_JUMP)  ; LAB_004918c0
    LEA ESI,[EAX*0x4 + 0x0]             ; 00491844
    MOV EDI,dword ptr [ESP + 0xe4]      ; 0049184b
        ;   Label: LAB_0049184b
    MOV EBP,dword ptr [ESP + 0x8]       ; 00491852
    MOV ECX,dword ptr [ESI + 0x1bd2fa0] ; 00491856 | g_ScreenBufferArray | g_ScreenBufferArray[1]
    MOV EDX,EDI                         ; 0049185c
    ADD ECX,EDI                         ; 0049185e
    CMP EDI,EBP                         ; 00491860
    JG 0x00491892                       ; 00491862
        ;   XREF to: 00491892 (CONDITIONAL_JUMP)  ; LAB_00491892
    MOV EAX,dword ptr [ESP + 0x4]       ; 00491864
        ;   Label: LAB_00491864
    MOV AL,byte ptr [EAX]               ; 00491868
    AND EAX,0xff                        ; 0049186a
    CMP EAX,dword ptr [EBX + 0x3188]    ; 0049186f
    JZ 0x0049187f                       ; 00491875
        ;   XREF to: 0049187f (CONDITIONAL_JUMP)  ; LAB_0049187f
    MOV EAX,dword ptr [ESP + 0x4]       ; 00491877
    MOV AL,byte ptr [EAX]               ; 0049187b
    MOV byte ptr [ECX],AL               ; 0049187d
    MOV EAX,dword ptr [ESP + 0x4]       ; 0049187f
        ;   Label: LAB_0049187f
    MOV EDI,dword ptr [ESP + 0x8]       ; 00491883
    INC ECX                             ; 00491887
    INC EAX                             ; 00491888
    INC EDX                             ; 00491889
    MOV dword ptr [ESP + 0x4],EAX       ; 0049188a
    CMP EDX,EDI                         ; 0049188e
    JLE 0x00491864                      ; 00491890
        ;   XREF to: 00491864 (CONDITIONAL_JUMP)  ; LAB_00491864
    MOV EAX,dword ptr [ESP + 0x18]      ; 00491892
        ;   Label: LAB_00491892
    MOV EDX,dword ptr [ESP + 0x4]       ; 00491896
    INC EAX                             ; 0049189a
    MOV ECX,dword ptr [ESP + 0xc]       ; 0049189b
    MOV dword ptr [ESP + 0x18],EAX      ; 0049189f
    MOV EAX,dword ptr [ESP + 0x14]      ; 004918a3
    ADD ESI,0x4                         ; 004918a7
    ADD EDX,EAX                         ; 004918aa
    MOV EAX,dword ptr [ESP + 0x18]      ; 004918ac
    MOV dword ptr [ESP + 0x4],EDX       ; 004918b0
    CMP EAX,ECX                         ; 004918b4
    JLE 0x0049184b                      ; 004918b6
        ;   XREF to: 0049184b (CONDITIONAL_JUMP)  ; LAB_0049184b
    LEA EAX,[EAX]                       ; 004918b8
    MOV EDX,EDX                         ; 004918be
    MOV EBX,dword ptr [ESP]             ; 004918c0
        ;   Label: LAB_004918c0
    MOV EAX,EBX                         ; 004918c3
    ADD ESP,0xc8                        ; 004918c5
    POP EBP                             ; 004918cb
    POP EDI                             ; 004918cc
    POP ESI                             ; 004918cd
    POP EBX                             ; 004918ce
    RET                                 ; 004918cf
    XOR EBX,EBX                         ; 004918d0
        ;   Label: LAB_004918d0
    MOV EAX,EBX                         ; 004918d2
    ADD ESP,0xc8                        ; 004918d4
    POP EBP                             ; 004918da
    POP EDI                             ; 004918db
    POP ESI                             ; 004918dc
    POP EBX                             ; 004918dd
    RET                                 ; 004918de
    MOV EBX,EAX                         ; 004918df
        ;   Label: LAB_004918df
    MOV EAX,EBX                         ; 004918e1
    ADD ESP,0xc8                        ; 004918e3
    POP EBP                             ; 004918e9
    POP EDI                             ; 004918ea
    POP ESI                             ; 004918eb
    POP EBX                             ; 004918ec
    RET                                 ; 004918ed
    PUSH -0x1                           ; 004918ee
        ;   Label: LAB_004918ee
    MOV EAX,dword ptr [ESP + 0xec]      ; 004918f0
    MOV EBP,dword ptr [EBX + 0x3180]    ; 004918f7
    PUSH ECX                            ; 004918fd
    ADD EAX,EBP                         ; 004918fe
    MOV EDX,dword ptr [EBX + 0x317c]    ; 00491900
    PUSH EAX                            ; 00491906
    MOV EAX,dword ptr [ESP + 0xf0]      ; 00491907
    ADD EAX,EDX                         ; 0049190e
    PUSH EAX                            ; 00491910
    PUSH EDI                            ; 00491911
    PUSH EBX                            ; 00491912
    CALL engine_font.cpp_CBitFont_drawCharacter_FUN_004916c0 ; 00491913
        ;   XREF to: 004916c0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawCharacter_FUN_004916c0(CBitFont * this_ptr, int character_code, int x, int y, ...)
    ADD ESP,0x18                        ; 00491918
    JMP 0x0049171b                      ; 0049191b
        ;   XREF to: 0049171b (UNCONDITIONAL_JUMP)  ; LAB_0049171b
    PUSH ESI                            ; 00491920
        ;   Label: LAB_00491920
    LEA EAX,[ESP + 0x10]                ; 00491921
    PUSH EAX                            ; 00491925
    LEA EAX,[ESP + 0x10]                ; 00491926
    PUSH EAX                            ; 0049192a
    LEA EAX,[ESP + 0xf4]                ; 0049192b
    PUSH EAX                            ; 00491932
    LEA EAX,[ESP + 0xf4]                ; 00491933
    PUSH EAX                            ; 0049193a
    LEA EAX,[ESP + 0x18]                ; 0049193b
    PUSH EAX                            ; 0049193f
    CALL engine_font.cpp_clipCharacter_FUN_0048fd50 ; 00491940
        ;   XREF to: 0048fd50 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_clipCharacter_FUN_0048fd50(int * bitmap_offset, int * left_x, int * top_y, int * right_x, ...)
    ADD ESP,0x18                        ; 00491945
    TEST EAX,EAX                        ; 00491948
    JZ 0x004917e5                       ; 0049194a
        ;   XREF to: 004917e5 (CONDITIONAL_JUMP)  ; LAB_004917e5
    MOV EBX,dword ptr [ESP]             ; 00491950
    MOV EAX,EBX                         ; 00491953
    ADD ESP,0xc8                        ; 00491955
    POP EBP                             ; 0049195b
    POP EDI                             ; 0049195c
    POP ESI                             ; 0049195d
    POP EBX                             ; 0049195e
    RET                                 ; 0049195f
    MOV EBP,dword ptr [ESP + 0xec]      ; 00491960
        ;   Label: LAB_00491960
    PUSH EBP                            ; 00491967
    MOV EAX,dword ptr [ESP + 0x10]      ; 00491968
    PUSH EAX                            ; 0049196c
    MOV EDX,dword ptr [ESP + 0x10]      ; 0049196d
    PUSH EDX                            ; 00491971
    MOV ECX,dword ptr [ESP + 0xf4]      ; 00491972
    PUSH ECX                            ; 00491979
    MOV ESI,dword ptr [ESP + 0xf4]      ; 0049197a
    PUSH ESI                            ; 00491981
    PUSH EDI                            ; 00491982
    PUSH EBX                            ; 00491983
    CALL engine_font.cpp_CBitFont_render3DCharacter_FUN_004911f0 ; 00491984
        ;   XREF to: 004911f0 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_render3DCharacter_FUN_004911f0(CBitFont * this_ptr, int character_code, int x, int y, ...)
    ADD ESP,0x1c                        ; 00491989
    MOV EBX,dword ptr [ESP]             ; 0049198c
    MOV EAX,EBX                         ; 0049198f
    ADD ESP,0xc8                        ; 00491991
    POP EBP                             ; 00491997
    POP EDI                             ; 00491998
    POP ESI                             ; 00491999
    POP EBX                             ; 0049199a
    RET                                 ; 0049199b
    CMP ECX,-0x2                        ; 0049199c
        ;   Label: LAB_0049199c
    JNZ 0x00491a35                      ; 0049199f
        ;   XREF to: 00491a35 (CONDITIONAL_JUMP)  ; LAB_00491a35
    MOV EAX,dword ptr [ESP + 0xe8]      ; 004919a5
    MOV ECX,dword ptr [ESP + 0xc]       ; 004919ac
    MOV dword ptr [ESP + 0x1c],EAX      ; 004919b0
    CMP EAX,ECX                         ; 004919b4
    JG 0x004918c0                       ; 004919b6
        ;   XREF to: 004918c0 (CONDITIONAL_JUMP)  ; LAB_004918c0
    LEA ESI,[EAX*0x4 + 0x0]             ; 004919bc
    MOV EDI,dword ptr [ESP + 0xe4]      ; 004919c3
        ;   Label: LAB_004919c3
    MOV EBP,dword ptr [ESP + 0x8]       ; 004919ca
    MOV EDX,dword ptr [ESI + 0x1bd2fa0] ; 004919ce | g_ScreenBufferArray | g_ScreenBufferArray[1]
    MOV ECX,EDI                         ; 004919d4
    ADD EDX,EDI                         ; 004919d6
    CMP EDI,EBP                         ; 004919d8
    JG 0x00491a09                       ; 004919da
        ;   XREF to: 00491a09 (CONDITIONAL_JUMP)  ; LAB_00491a09
    MOV EAX,dword ptr [ESP + 0x4]       ; 004919dc
        ;   Label: LAB_004919dc
    MOV AL,byte ptr [EAX]               ; 004919e0
    AND EAX,0xff                        ; 004919e2
    CMP EAX,dword ptr [EBX + 0x3188]    ; 004919e7
    JZ 0x004919f6                       ; 004919ed
        ;   XREF to: 004919f6 (CONDITIONAL_JUMP)  ; LAB_004919f6
    MOV AL,[0x01c70f5c]                 ; 004919ef | DAT_01c70f5c
    MOV byte ptr [EDX],AL               ; 004919f4
    MOV EAX,dword ptr [ESP + 0x4]       ; 004919f6
        ;   Label: LAB_004919f6
    MOV EDI,dword ptr [ESP + 0x8]       ; 004919fa
    INC EDX                             ; 004919fe
    INC EAX                             ; 004919ff
    INC ECX                             ; 00491a00
    MOV dword ptr [ESP + 0x4],EAX       ; 00491a01
    CMP ECX,EDI                         ; 00491a05
    JLE 0x004919dc                      ; 00491a07
        ;   XREF to: 004919dc (CONDITIONAL_JUMP)  ; LAB_004919dc
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00491a09
        ;   Label: LAB_00491a09
    MOV EDX,dword ptr [ESP + 0x4]       ; 00491a0d
    INC EAX                             ; 00491a11
    MOV ECX,dword ptr [ESP + 0xc]       ; 00491a12
    MOV dword ptr [ESP + 0x1c],EAX      ; 00491a16
    MOV EAX,dword ptr [ESP + 0x14]      ; 00491a1a
    ADD ESI,0x4                         ; 00491a1e
    ADD EDX,EAX                         ; 00491a21
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00491a23
    MOV dword ptr [ESP + 0x4],EDX       ; 00491a27
    CMP EAX,ECX                         ; 00491a2b
    JG 0x004918c0                       ; 00491a2d
        ;   XREF to: 004918c0 (CONDITIONAL_JUMP)  ; LAB_004918c0
    JMP 0x004919c3                      ; 00491a33
        ;   XREF to: 004919c3 (UNCONDITIONAL_JUMP)  ; LAB_004919c3
    CMP ECX,-0x3                        ; 00491a35
        ;   Label: LAB_00491a35
    JNZ 0x00491ace                      ; 00491a38
        ;   XREF to: 00491ace (CONDITIONAL_JUMP)  ; LAB_00491ace
    MOV EAX,dword ptr [ESP + 0xe8]      ; 00491a3e
    MOV EDX,dword ptr [ESP + 0xc]       ; 00491a45
    MOV dword ptr [ESP + 0x20],EAX      ; 00491a49
    CMP EAX,EDX                         ; 00491a4d
    JG 0x004918c0                       ; 00491a4f
        ;   XREF to: 004918c0 (CONDITIONAL_JUMP)  ; LAB_004918c0
    LEA ESI,[EAX*0x4 + 0x0]             ; 00491a55
    MOV EDI,dword ptr [ESP + 0xe4]      ; 00491a5c
        ;   Label: LAB_00491a5c
    MOV EBP,dword ptr [ESP + 0x8]       ; 00491a63
    MOV EDX,dword ptr [ESI + 0x1bd2fa0] ; 00491a67 | g_ScreenBufferArray | g_ScreenBufferArray[1]
    MOV ECX,EDI                         ; 00491a6d
    ADD EDX,EDI                         ; 00491a6f
    CMP EDI,EBP                         ; 00491a71
    JG 0x00491aa2                       ; 00491a73
        ;   XREF to: 00491aa2 (CONDITIONAL_JUMP)  ; LAB_00491aa2
    MOV EAX,dword ptr [ESP + 0x4]       ; 00491a75
        ;   Label: LAB_00491a75
    MOV AL,byte ptr [EAX]               ; 00491a79
    AND EAX,0xff                        ; 00491a7b
    CMP EAX,dword ptr [EBX + 0x3188]    ; 00491a80
    JZ 0x00491a8f                       ; 00491a86
        ;   XREF to: 00491a8f (CONDITIONAL_JUMP)  ; LAB_00491a8f
    MOV AL,[0x01c70f70]                 ; 00491a88 | DAT_01c70f70
    MOV byte ptr [EDX],AL               ; 00491a8d
    MOV EAX,dword ptr [ESP + 0x4]       ; 00491a8f
        ;   Label: LAB_00491a8f
    MOV EDI,dword ptr [ESP + 0x8]       ; 00491a93
    INC EDX                             ; 00491a97
    INC EAX                             ; 00491a98
    INC ECX                             ; 00491a99
    MOV dword ptr [ESP + 0x4],EAX       ; 00491a9a
    CMP ECX,EDI                         ; 00491a9e
    JLE 0x00491a75                      ; 00491aa0
        ;   XREF to: 00491a75 (CONDITIONAL_JUMP)  ; LAB_00491a75
    MOV EAX,dword ptr [ESP + 0x20]      ; 00491aa2
        ;   Label: LAB_00491aa2
    MOV EDX,dword ptr [ESP + 0x4]       ; 00491aa6
    INC EAX                             ; 00491aaa
    MOV ECX,dword ptr [ESP + 0xc]       ; 00491aab
    MOV dword ptr [ESP + 0x20],EAX      ; 00491aaf
    MOV EAX,dword ptr [ESP + 0x14]      ; 00491ab3
    ADD ESI,0x4                         ; 00491ab7
    ADD EDX,EAX                         ; 00491aba
    MOV EAX,dword ptr [ESP + 0x20]      ; 00491abc
    MOV dword ptr [ESP + 0x4],EDX       ; 00491ac0
    CMP EAX,ECX                         ; 00491ac4
    JG 0x004918c0                       ; 00491ac6
        ;   XREF to: 004918c0 (CONDITIONAL_JUMP)  ; LAB_004918c0
    JMP 0x00491a5c                      ; 00491acc
        ;   XREF to: 00491a5c (UNCONDITIONAL_JUMP)  ; LAB_00491a5c
    MOV EAX,dword ptr [ESP + 0xe8]      ; 00491ace
        ;   Label: LAB_00491ace
    MOV EBP,dword ptr [ESP + 0xc]       ; 00491ad5
    MOV dword ptr [ESP + 0x24],EAX      ; 00491ad9
    CMP EAX,EBP                         ; 00491add
    JG 0x004918c0                       ; 00491adf
        ;   XREF to: 004918c0 (CONDITIONAL_JUMP)  ; LAB_004918c0
    LEA ESI,[EAX*0x4 + 0x0]             ; 00491ae5
    MOV EDI,dword ptr [ESP + 0xe4]      ; 00491aec
        ;   Label: LAB_00491aec
    MOV EBP,dword ptr [ESP + 0x8]       ; 00491af3
    MOV ECX,dword ptr [ESI + 0x1bd2fa0] ; 00491af7 | g_ScreenBufferArray | g_ScreenBufferArray[1]
    MOV EDX,EDI                         ; 00491afd
    ADD ECX,EDI                         ; 00491aff
    CMP EDI,EBP                         ; 00491b01
    JG 0x00491b34                       ; 00491b03
        ;   XREF to: 00491b34 (CONDITIONAL_JUMP)  ; LAB_00491b34
    MOV EAX,dword ptr [ESP + 0x4]       ; 00491b05
        ;   Label: LAB_00491b05
    MOV AL,byte ptr [EAX]               ; 00491b09
    AND EAX,0xff                        ; 00491b0b
    CMP EAX,dword ptr [EBX + 0x3188]    ; 00491b10
    JZ 0x00491b21                       ; 00491b16
        ;   XREF to: 00491b21 (CONDITIONAL_JUMP)  ; LAB_00491b21
    MOV AL,byte ptr [ESP + 0xec]        ; 00491b18
    MOV byte ptr [ECX],AL               ; 00491b1f
    MOV EAX,dword ptr [ESP + 0x4]       ; 00491b21
        ;   Label: LAB_00491b21
    MOV EDI,dword ptr [ESP + 0x8]       ; 00491b25
    INC ECX                             ; 00491b29
    INC EAX                             ; 00491b2a
    INC EDX                             ; 00491b2b
    MOV dword ptr [ESP + 0x4],EAX       ; 00491b2c
    CMP EDX,EDI                         ; 00491b30
    JLE 0x00491b05                      ; 00491b32
        ;   XREF to: 00491b05 (CONDITIONAL_JUMP)  ; LAB_00491b05
    MOV EAX,dword ptr [ESP + 0x24]      ; 00491b34
        ;   Label: LAB_00491b34
    MOV EDX,dword ptr [ESP + 0x4]       ; 00491b38
    INC EAX                             ; 00491b3c
    MOV ECX,dword ptr [ESP + 0xc]       ; 00491b3d
    MOV dword ptr [ESP + 0x24],EAX      ; 00491b41
    MOV EAX,dword ptr [ESP + 0x14]      ; 00491b45
    ADD ESI,0x4                         ; 00491b49
    ADD EDX,EAX                         ; 00491b4c
    MOV EAX,dword ptr [ESP + 0x24]      ; 00491b4e
    MOV dword ptr [ESP + 0x4],EDX       ; 00491b52
    CMP EAX,ECX                         ; 00491b56
    JG 0x004918c0                       ; 00491b58
        ;   XREF to: 004918c0 (CONDITIONAL_JUMP)  ; LAB_004918c0
    JMP 0x00491aec                      ; 00491b5e
        ;   XREF to: 00491aec (UNCONDITIONAL_JUMP)  ; LAB_00491aec
    MOV EDX,dword ptr [ESP + 0xe8]      ; 00491b60
        ;   Label: LAB_00491b60
    SHL EDX,0x2                         ; 00491b67
    CMP EDI,0x10                        ; 00491b6a
    JNZ 0x004928cc                      ; 00491b6d
        ;   XREF to: 004928cc (CONDITIONAL_JUMP)  ; LAB_004928cc
    MOV ESI,dword ptr [ESP + 0xec]      ; 00491b73
    CMP ESI,-0x1                        ; 00491b7a
    JNZ 0x00491ee4                      ; 00491b7d
        ;   XREF to: 00491ee4 (CONDITIONAL_JUMP)  ; LAB_00491ee4
    CMP dword ptr [EBX + 0x1d64],0x0    ; 00491b83
    JZ 0x00491e50                       ; 00491b8a
        ;   XREF to: 00491e50 (CONDITIONAL_JUMP)  ; LAB_00491e50
    MOV EAX,dword ptr [ESP + 0xe8]      ; 00491b90
    MOV EDX,dword ptr [ESP + 0xc]       ; 00491b97
    MOV dword ptr [ESP + 0x28],EAX      ; 00491b9b
    CMP EAX,EDX                         ; 00491b9f
    JG 0x004918c0                       ; 00491ba1
        ;   XREF to: 004918c0 (CONDITIONAL_JUMP)  ; LAB_004918c0
    MOV EAX,dword ptr [ESP + 0x10]      ; 00491ba7
    SHL EAX,0xa                         ; 00491bab
    LEA EDX,[EBX + EAX*0x1]             ; 00491bae
    MOV dword ptr [ESP + 0x40],EDX      ; 00491bb1
    MOV EDX,dword ptr [ESP + 0x10]      ; 00491bb5
    LEA EAX,[EDX*0x4 + 0x0]             ; 00491bb9
    SUB EAX,EDX                         ; 00491bc0
    SHL EAX,0x8                         ; 00491bc2
    ADD EBX,EAX                         ; 00491bc5
    MOV EAX,dword ptr [ESP + 0x28]      ; 00491bc7
    SHL EAX,0x2                         ; 00491bcb
    MOV dword ptr [ESP + 0x30],EBX      ; 00491bce
    MOV dword ptr [ESP + 0xb0],EAX      ; 00491bd2
    MOV EBX,dword ptr [ESP + 0xb0]      ; 00491bd9
        ;   Label: LAB_00491bd9
    MOV EAX,dword ptr [ESP + 0xe4]      ; 00491be0
    MOV EBX,dword ptr [EBX + 0x1bd2fa0] ; 00491be7 | g_ScreenBufferArray | g_ScreenBufferArray[1]
    ADD EAX,EAX                         ; 00491bed
    ADD EBX,EAX                         ; 00491bef
    MOV EAX,dword ptr [ESP + 0xe4]      ; 00491bf1
    MOV EDI,dword ptr [ESP + 0x8]       ; 00491bf8
    MOV dword ptr [ESP + 0x2c],EAX      ; 00491bfc
    CMP EAX,EDI                         ; 00491c00
    JG 0x00491e17                       ; 00491c02
        ;   XREF to: 00491e17 (CONDITIONAL_JUMP)  ; LAB_00491e17
    MOV ECX,dword ptr [ESP + 0x4]       ; 00491c08
        ;   Label: LAB_00491c08
    MOV CL,byte ptr [ECX]               ; 00491c0c
    AND ECX,0xff                        ; 00491c0e
    MOV ESI,dword ptr [ESP + 0x30]      ; 00491c14
    LEA EAX,[ECX + ECX*0x2]             ; 00491c18
    ADD EAX,ESI                         ; 00491c1b
    MOV AL,byte ptr [EAX + 0x164]       ; 00491c1d
    MOV EDX,dword ptr [0x005b763c]      ; 00491c23 | DAT_005b763c
    AND EAX,0xff                        ; 00491c29
    IMUL EDX,EAX                        ; 00491c2e
    MOV EAX,EDX                         ; 00491c31
    SAR EDX,0x1f                        ; 00491c33
    SHL EDX,0x8                         ; 00491c36
    SBB EAX,EDX                         ; 00491c39
    SAR EAX,0x8                         ; 00491c3b
    TEST EAX,EAX                        ; 00491c3e
    JZ 0x00491df6                       ; 00491c40
        ;   XREF to: 00491df6 (CONDITIONAL_JUMP)  ; LAB_00491df6
    MOV EDI,dword ptr [ESP + 0x40]      ; 00491c46
    SHL ECX,0x2                         ; 00491c4a
    MOV DX,word ptr [EBX]               ; 00491c4d
    ADD EDI,ECX                         ; 00491c50
    MOV EBP,dword ptr [0x005bf5b8]      ; 00491c52 | g_RedMask16
    MOV dword ptr [ESP + 0xc0],EDX      ; 00491c58
    MOV EDX,dword ptr [EDI + 0xd64]     ; 00491c5f
    MOV CL,byte ptr [0x01c00624]        ; 00491c65 | g_RedBitPosition
    AND EDX,EBP                         ; 00491c6b
    SHR EDX,CL                          ; 00491c6d
    MOV CL,byte ptr [0x01c0062c]        ; 00491c6f | g_RedDitherShift
    MOV ESI,dword ptr [EDI + 0xd64]     ; 00491c75
    SHL EDX,CL                          ; 00491c7b
    AND ESI,dword ptr [0x005bf5c0]      ; 00491c7d | g_GreenMask16
    MOV CL,byte ptr [0x01c00630]        ; 00491c83 | g_GreenBitPosition
    SHR ESI,CL                          ; 00491c89
    MOV CL,byte ptr [0x01c00638]        ; 00491c8b | g_GreenDitherShift
    SHL ESI,CL                          ; 00491c91
    AND ESI,0xff                        ; 00491c93
    IMUL ESI,EAX                        ; 00491c99
    MOV EBP,dword ptr [EDI + 0xd64]     ; 00491c9c
    AND EBP,dword ptr [0x005bf5c8]      ; 00491ca2 | g_BlueMask16
    MOV CL,byte ptr [0x01c0063c]        ; 00491ca8 | g_BlueBitPosition
    SHR EBP,CL                          ; 00491cae
    MOV CL,byte ptr [0x01c00644]        ; 00491cb0 | g_BlueDitherShift
    SHL EBP,CL                          ; 00491cb6
    AND EBP,0xff                        ; 00491cb8
    IMUL EBP,EAX                        ; 00491cbe
    AND EDX,0xff                        ; 00491cc1
    MOV dword ptr [ESP + 0x34],EDX      ; 00491cc7
    XOR EDX,EDX                         ; 00491ccb
    MOV DX,word ptr [ESP + 0xc0]        ; 00491ccd
    MOV ECX,dword ptr [0x005bf5b8]      ; 00491cd5 | g_RedMask16
    AND ECX,EDX                         ; 00491cdb
    MOV dword ptr [ESP + 0x98],ECX      ; 00491cdd
    MOV EDI,dword ptr [ESP + 0x98]      ; 00491ce4
    MOV CL,byte ptr [0x01c00624]        ; 00491ceb | g_RedBitPosition
    SHR EDI,CL                          ; 00491cf1
    MOV CL,byte ptr [0x01c0062c]        ; 00491cf3 | g_RedDitherShift
    SHL EDI,CL                          ; 00491cf9
    MOV ECX,EDI                         ; 00491cfb
    AND ECX,0xff                        ; 00491cfd
    MOV dword ptr [ESP + 0x38],ECX      ; 00491d03
    MOV ECX,dword ptr [0x005bf5c0]      ; 00491d07 | g_GreenMask16
    AND ECX,EDX                         ; 00491d0d
    MOV dword ptr [ESP + 0x98],ECX      ; 00491d0f
    MOV EDI,dword ptr [ESP + 0x98]      ; 00491d16
    MOV CL,byte ptr [0x01c00630]        ; 00491d1d | g_GreenBitPosition
    SHR EDI,CL                          ; 00491d23
    MOV CL,byte ptr [0x01c00638]        ; 00491d25 | g_GreenDitherShift
    SHL EDI,CL                          ; 00491d2b
    MOV ECX,dword ptr [0x005bf5c8]      ; 00491d2d | g_BlueMask16
    AND ECX,EDX                         ; 00491d33
    MOV dword ptr [ESP + 0x98],ECX      ; 00491d35
    MOV EDX,dword ptr [ESP + 0x98]      ; 00491d3c
    MOV CL,byte ptr [0x01c0063c]        ; 00491d43 | g_BlueBitPosition
    SHR EDX,CL                          ; 00491d49
    MOV CL,byte ptr [0x01c00644]        ; 00491d4b | g_BlueDitherShift
    SHL EDX,CL                          ; 00491d51
    MOV ECX,EDX                         ; 00491d53
    MOV EDX,0xff                        ; 00491d55
    AND EDI,0xff                        ; 00491d5a
    SUB EDX,EAX                         ; 00491d60
    IMUL EDI,EDX                        ; 00491d62
    AND ECX,0xff                        ; 00491d65
    MOV dword ptr [ESP + 0x3c],ECX      ; 00491d6b
    MOV ECX,dword ptr [ESP + 0x38]      ; 00491d6f
    IMUL ECX,EDX                        ; 00491d73
    MOV dword ptr [ESP + 0x98],ECX      ; 00491d76
    MOV ECX,dword ptr [ESP + 0x34]      ; 00491d7d
    IMUL ECX,EAX                        ; 00491d81
    ADD ECX,dword ptr [ESP + 0x98]      ; 00491d84
    MOV dword ptr [ESP + 0x34],ECX      ; 00491d8b
    IMUL EDX,dword ptr [ESP + 0x3c]     ; 00491d8f
    MOV EAX,dword ptr [ESP + 0x34]      ; 00491d94
    ADD ESI,EDI                         ; 00491d98
    SHR EAX,0x8                         ; 00491d9a
    MOV ECX,ESI                         ; 00491d9d
    ADD EBP,EDX                         ; 00491d9f
    MOV ESI,dword ptr [0x01c00628]      ; 00491da1 | g_RedScaleFactor
    XOR EDX,EDX                         ; 00491da7
    DIV ESI                             ; 00491da9
    MOV EDI,dword ptr [0x01c00634]      ; 00491dab | g_GreenScaleFactor
    SHR ECX,0x8                         ; 00491db1
    MOV ESI,EAX                         ; 00491db4
    XOR EDX,EDX                         ; 00491db6
    MOV EAX,ECX                         ; 00491db8
    DIV EDI                             ; 00491dba
    MOV dword ptr [ESP + 0x44],ECX      ; 00491dbc
    SHR EBP,0x8                         ; 00491dc0
    MOV dword ptr [ESP + 0x44],EAX      ; 00491dc3
    XOR EDX,EDX                         ; 00491dc7
    MOV EAX,EBP                         ; 00491dc9
    DIV dword ptr [0x01c00640]          ; 00491dcb | g_BlueScaleFactor
    MOV CL,byte ptr [0x01c00624]        ; 00491dd1 | g_RedBitPosition
    SHL ESI,CL                          ; 00491dd7
    MOV CL,byte ptr [0x01c00630]        ; 00491dd9 | g_GreenBitPosition
    MOV EDI,EAX                         ; 00491ddf
    MOV EAX,dword ptr [ESP + 0x44]      ; 00491de1
    SHL EAX,CL                          ; 00491de5
    MOV CL,byte ptr [0x01c0063c]        ; 00491de7 | g_BlueBitPosition
    OR EAX,ESI                          ; 00491ded
    SHL EDI,CL                          ; 00491def
    OR EAX,EDI                          ; 00491df1
    MOV word ptr [EBX],AX               ; 00491df3
    MOV EBP,dword ptr [ESP + 0x2c]      ; 00491df6
        ;   Label: LAB_00491df6
    MOV EAX,dword ptr [ESP + 0x4]       ; 00491dfa
    MOV EDX,dword ptr [ESP + 0x8]       ; 00491dfe
    ADD EBX,0x2                         ; 00491e02
    INC EBP                             ; 00491e05
    INC EAX                             ; 00491e06
    MOV dword ptr [ESP + 0x2c],EBP      ; 00491e07
    MOV dword ptr [ESP + 0x4],EAX       ; 00491e0b
    CMP EBP,EDX                         ; 00491e0f
    JLE 0x00491c08                      ; 00491e11
        ;   XREF to: 00491c08 (CONDITIONAL_JUMP)  ; LAB_00491c08
    MOV EDX,dword ptr [ESP + 0xb0]      ; 00491e17
        ;   Label: LAB_00491e17
    MOV ECX,dword ptr [ESP + 0x28]      ; 00491e1e
    MOV EAX,dword ptr [ESP + 0x14]      ; 00491e22
    MOV EBX,dword ptr [ESP + 0x4]       ; 00491e26
    MOV ESI,dword ptr [ESP + 0xc]       ; 00491e2a
    ADD EDX,0x4                         ; 00491e2e
    INC ECX                             ; 00491e31
    ADD EBX,EAX                         ; 00491e32
    MOV dword ptr [ESP + 0xb0],EDX      ; 00491e34
    MOV dword ptr [ESP + 0x28],ECX      ; 00491e3b
    MOV dword ptr [ESP + 0x4],EBX       ; 00491e3f
    CMP ECX,ESI                         ; 00491e43
    JG 0x004918c0                       ; 00491e45
        ;   XREF to: 004918c0 (CONDITIONAL_JUMP)  ; LAB_004918c0
    JMP 0x00491bd9                      ; 00491e4b
        ;   XREF to: 00491bd9 (UNCONDITIONAL_JUMP)  ; LAB_00491bd9
    MOV EAX,dword ptr [ESP + 0xc]       ; 00491e50
        ;   Label: LAB_00491e50
    MOV EDI,dword ptr [ESP + 0xe8]      ; 00491e54
    CMP EDI,EAX                         ; 00491e5b
    JG 0x004918c0                       ; 00491e5d
        ;   XREF to: 004918c0 (CONDITIONAL_JUMP)  ; LAB_004918c0
    MOV ESI,dword ptr [ESP + 0x10]      ; 00491e63
    SHL ESI,0xa                         ; 00491e67
    LEA EBP,[EDI*0x4 + 0x0]             ; 00491e6a
    ADD ESI,EBX                         ; 00491e71
    MOV EAX,dword ptr [ESP + 0xe4]      ; 00491e73
        ;   Label: LAB_00491e73
    MOV ECX,dword ptr [EBP + 0x1bd2fa0] ; 00491e7a | g_ScreenBufferArray | g_ScreenBufferArray[1]
    ADD EAX,EAX                         ; 00491e80
    MOV EDX,dword ptr [ESP + 0xe4]      ; 00491e82
    ADD ECX,EAX                         ; 00491e89
    CMP EDX,dword ptr [ESP + 0x8]       ; 00491e8b
    JG 0x00491ec4                       ; 00491e8f
        ;   XREF to: 00491ec4 (CONDITIONAL_JUMP)  ; LAB_00491ec4
    MOV EAX,dword ptr [ESP + 0x4]       ; 00491e91
        ;   Label: LAB_00491e91
    MOV AL,byte ptr [EAX]               ; 00491e95
    AND EAX,0xff                        ; 00491e97
    CMP EAX,dword ptr [EBX + 0x3188]    ; 00491e9c
    JZ 0x00491eaf                       ; 00491ea2
        ;   XREF to: 00491eaf (CONDITIONAL_JUMP)  ; LAB_00491eaf
    MOV AX,word ptr [ESI + EAX*0x4 + 0xd64] ; 00491ea4
    MOV word ptr [ECX],AX               ; 00491eac
    MOV EAX,dword ptr [ESP + 0x4]       ; 00491eaf
        ;   Label: LAB_00491eaf
    INC EAX                             ; 00491eb3
    INC EDX                             ; 00491eb4
    MOV dword ptr [ESP + 0x4],EAX       ; 00491eb5
    MOV EAX,dword ptr [ESP + 0x8]       ; 00491eb9
    ADD ECX,0x2                         ; 00491ebd
    CMP EDX,EAX                         ; 00491ec0
    JLE 0x00491e91                      ; 00491ec2
        ;   XREF to: 00491e91 (CONDITIONAL_JUMP)  ; LAB_00491e91
    MOV EAX,dword ptr [ESP + 0x14]      ; 00491ec4
        ;   Label: LAB_00491ec4
    MOV EDX,dword ptr [ESP + 0x4]       ; 00491ec8
    MOV ECX,dword ptr [ESP + 0xc]       ; 00491ecc
    ADD EBP,0x4                         ; 00491ed0
    ADD EDX,EAX                         ; 00491ed3
    INC EDI                             ; 00491ed5
    MOV dword ptr [ESP + 0x4],EDX       ; 00491ed6
    CMP EDI,ECX                         ; 00491eda
    JG 0x004918c0                       ; 00491edc
        ;   XREF to: 004918c0 (CONDITIONAL_JUMP)  ; LAB_004918c0
    JMP 0x00491e73                      ; 00491ee2
        ;   XREF to: 00491e73 (UNCONDITIONAL_JUMP)  ; LAB_00491e73
    CMP ESI,-0x2                        ; 00491ee4
        ;   Label: LAB_00491ee4
    JNZ 0x0049222a                      ; 00491ee7
        ;   XREF to: 0049222a (CONDITIONAL_JUMP)  ; LAB_0049222a
    CMP dword ptr [EBX + 0x1d64],0x0    ; 00491eed
    JZ 0x0049219f                       ; 00491ef4
        ;   XREF to: 0049219f (CONDITIONAL_JUMP)  ; LAB_0049219f
    MOV EAX,dword ptr [ESP + 0xe8]      ; 00491efa
    MOV EDI,dword ptr [ESP + 0xc]       ; 00491f01
    MOV dword ptr [ESP + 0x48],EAX      ; 00491f05
    CMP EAX,EDI                         ; 00491f09
    JG 0x004918c0                       ; 00491f0b
        ;   XREF to: 004918c0 (CONDITIONAL_JUMP)  ; LAB_004918c0
    MOV EDX,dword ptr [ESP + 0x10]      ; 00491f11
    LEA EAX,[EDX*0x4 + 0x0]             ; 00491f15
    SUB EAX,EDX                         ; 00491f1c
    SHL EAX,0x8                         ; 00491f1e
    ADD EBX,EAX                         ; 00491f21
    MOV EAX,dword ptr [ESP + 0x48]      ; 00491f23
    SHL EAX,0x2                         ; 00491f27
    MOV dword ptr [ESP + 0x50],EBX      ; 00491f2a
    MOV dword ptr [ESP + 0xac],EAX      ; 00491f2e
    MOV EAX,dword ptr [ESP + 0xac]      ; 00491f35
        ;   Label: LAB_00491f35
    MOV EBX,dword ptr [ESP + 0xe4]      ; 00491f3c
    MOV EAX,dword ptr [EAX + 0x1bd2fa0] ; 00491f43 | g_ScreenBufferArray | g_ScreenBufferArray[1]
    ADD EBX,EBX                         ; 00491f49
    ADD EBX,EAX                         ; 00491f4b
    MOV EAX,dword ptr [ESP + 0xe4]      ; 00491f4d
    MOV ESI,dword ptr [ESP + 0x8]       ; 00491f54
    MOV dword ptr [ESP + 0x4c],EAX      ; 00491f58
    CMP EAX,ESI                         ; 00491f5c
    JG 0x00492166                       ; 00491f5e
        ;   XREF to: 00492166 (CONDITIONAL_JUMP)  ; LAB_00492166
    MOV EAX,dword ptr [ESP + 0x4]       ; 00491f64
        ;   Label: LAB_00491f64
    MOV AL,byte ptr [EAX]               ; 00491f68
    AND EAX,0xff                        ; 00491f6a
    MOV ECX,dword ptr [ESP + 0x50]      ; 00491f6f
    LEA EAX,[EAX + EAX*0x2]             ; 00491f73
    ADD EAX,ECX                         ; 00491f76
    MOV AL,byte ptr [EAX + 0x164]       ; 00491f78
    MOV EDX,dword ptr [0x005b763c]      ; 00491f7e | DAT_005b763c
    AND EAX,0xff                        ; 00491f84
    IMUL EDX,EAX                        ; 00491f89
    MOV EAX,EDX                         ; 00491f8c
    SAR EDX,0x1f                        ; 00491f8e
    SHL EDX,0x8                         ; 00491f91
    SBB EAX,EDX                         ; 00491f94
    SAR EAX,0x8                         ; 00491f96
    TEST EAX,EAX                        ; 00491f99
    JZ 0x00492145                       ; 00491f9b
        ;   XREF to: 00492145 (CONDITIONAL_JUMP)  ; LAB_00492145
    MOV DX,word ptr [EBX]               ; 00491fa1
    MOV dword ptr [ESP + 0xbc],EDX      ; 00491fa4
    XOR EDX,EDX                         ; 00491fab
    MOV ESI,dword ptr [0x005bf5b8]      ; 00491fad | g_RedMask16
    MOV DX,word ptr [0x01c70f5e]        ; 00491fb3 | DAT_01c70f5e
    MOV CL,byte ptr [0x01c00624]        ; 00491fba | g_RedBitPosition
    AND ESI,EDX                         ; 00491fc0
    SHR ESI,CL                          ; 00491fc2
    MOV CL,byte ptr [0x01c0062c]        ; 00491fc4 | g_RedDitherShift
    SHL ESI,CL                          ; 00491fca
    AND ESI,0xff                        ; 00491fcc
    MOV dword ptr [ESP + 0x54],ESI      ; 00491fd2
    MOV ESI,dword ptr [0x005bf5c0]      ; 00491fd6 | g_GreenMask16
    MOV CL,byte ptr [0x01c00630]        ; 00491fdc | g_GreenBitPosition
    AND ESI,EDX                         ; 00491fe2
    MOV EDI,dword ptr [0x005bf5c8]      ; 00491fe4 | g_BlueMask16
    SHR ESI,CL                          ; 00491fea
    MOV CL,byte ptr [0x01c00638]        ; 00491fec | g_GreenDitherShift
    AND EDI,EDX                         ; 00491ff2
    SHL ESI,CL                          ; 00491ff4
    MOV CL,byte ptr [0x01c0063c]        ; 00491ff6 | g_BlueBitPosition
    XOR EDX,EDX                         ; 00491ffc
    SHR EDI,CL                          ; 00491ffe
    MOV CL,byte ptr [0x01c00644]        ; 00492000 | g_BlueDitherShift
    MOV DX,word ptr [ESP + 0xbc]        ; 00492006
    SHL EDI,CL                          ; 0049200e
    MOV ECX,dword ptr [0x005bf5b8]      ; 00492010 | g_RedMask16
    AND ECX,EDX                         ; 00492016
    MOV dword ptr [ESP + 0x98],ECX      ; 00492018
    MOV EBP,dword ptr [ESP + 0x98]      ; 0049201f
    MOV CL,byte ptr [0x01c00624]        ; 00492026 | g_RedBitPosition
    SHR EBP,CL                          ; 0049202c
    MOV CL,byte ptr [0x01c0062c]        ; 0049202e | g_RedDitherShift
    SHL EBP,CL                          ; 00492034
    MOV ECX,EBP                         ; 00492036
    AND ECX,0xff                        ; 00492038
    MOV dword ptr [ESP + 0x58],ECX      ; 0049203e
    MOV ECX,dword ptr [0x005bf5c0]      ; 00492042 | g_GreenMask16
    AND ECX,EDX                         ; 00492048
    MOV dword ptr [ESP + 0x98],ECX      ; 0049204a
    MOV EBP,dword ptr [ESP + 0x98]      ; 00492051
    MOV CL,byte ptr [0x01c00630]        ; 00492058 | g_GreenBitPosition
    SHR EBP,CL                          ; 0049205e
    MOV CL,byte ptr [0x01c00638]        ; 00492060 | g_GreenDitherShift
    SHL EBP,CL                          ; 00492066
    MOV ECX,dword ptr [0x005bf5c8]      ; 00492068 | g_BlueMask16
    AND ECX,EDX                         ; 0049206e
    MOV dword ptr [ESP + 0x98],ECX      ; 00492070
    MOV EDX,dword ptr [ESP + 0x98]      ; 00492077
    MOV CL,byte ptr [0x01c0063c]        ; 0049207e | g_BlueBitPosition
    SHR EDX,CL                          ; 00492084
    MOV CL,byte ptr [0x01c00644]        ; 00492086 | g_BlueDitherShift
    SHL EDX,CL                          ; 0049208c
    MOV ECX,EDX                         ; 0049208e
    MOV EDX,0xff                        ; 00492090
    AND EBP,0xff                        ; 00492095
    SUB EDX,EAX                         ; 0049209b
    IMUL EBP,EDX                        ; 0049209d
    AND ECX,0xff                        ; 004920a0
    MOV dword ptr [ESP + 0x5c],ECX      ; 004920a6
    MOV ECX,dword ptr [ESP + 0x58]      ; 004920aa
    IMUL ECX,EDX                        ; 004920ae
    MOV dword ptr [ESP + 0x98],ECX      ; 004920b1
    MOV ECX,dword ptr [ESP + 0x54]      ; 004920b8
    IMUL ECX,EAX                        ; 004920bc
    ADD ECX,dword ptr [ESP + 0x98]      ; 004920bf
    AND ESI,0xff                        ; 004920c6
    MOV dword ptr [ESP + 0x54],ECX      ; 004920cc
    MOV ECX,ESI                         ; 004920d0
    IMUL ECX,EAX                        ; 004920d2
    ADD ECX,EBP                         ; 004920d5
    IMUL EDX,dword ptr [ESP + 0x5c]     ; 004920d7
    AND EDI,0xff                        ; 004920dc
    MOV EBP,EDI                         ; 004920e2
    IMUL EBP,EAX                        ; 004920e4
    MOV ESI,dword ptr [0x01c00628]      ; 004920e7 | g_RedScaleFactor
    MOV EAX,dword ptr [ESP + 0x54]      ; 004920ed
    ADD EBP,EDX                         ; 004920f1
    SHR EAX,0x8                         ; 004920f3
    XOR EDX,EDX                         ; 004920f6
    DIV ESI                             ; 004920f8
    SHR ECX,0x8                         ; 004920fa
    MOV EDI,dword ptr [0x01c00634]      ; 004920fd | g_GreenScaleFactor
    MOV ESI,EAX                         ; 00492103
    XOR EDX,EDX                         ; 00492105
    MOV EAX,ECX                         ; 00492107
    DIV EDI                             ; 00492109
    MOV dword ptr [ESP + 0x60],ECX      ; 0049210b
    SHR EBP,0x8                         ; 0049210f
    MOV dword ptr [ESP + 0x60],EAX      ; 00492112
    XOR EDX,EDX                         ; 00492116
    MOV EAX,EBP                         ; 00492118
    DIV dword ptr [0x01c00640]          ; 0049211a | g_BlueScaleFactor
    MOV CL,byte ptr [0x01c00624]        ; 00492120 | g_RedBitPosition
    SHL ESI,CL                          ; 00492126
    MOV CL,byte ptr [0x01c00630]        ; 00492128 | g_GreenBitPosition
    MOV EDI,EAX                         ; 0049212e
    MOV EAX,dword ptr [ESP + 0x60]      ; 00492130
    SHL EAX,CL                          ; 00492134
    MOV CL,byte ptr [0x01c0063c]        ; 00492136 | g_BlueBitPosition
    OR EAX,ESI                          ; 0049213c
    SHL EDI,CL                          ; 0049213e
    OR EAX,EDI                          ; 00492140
    MOV word ptr [EBX],AX               ; 00492142
    MOV EDI,dword ptr [ESP + 0x4c]      ; 00492145
        ;   Label: LAB_00492145
    MOV EBP,dword ptr [ESP + 0x4]       ; 00492149
    MOV EDX,dword ptr [ESP + 0x8]       ; 0049214d
    ADD EBX,0x2                         ; 00492151
    INC EDI                             ; 00492154
    INC EBP                             ; 00492155
    MOV dword ptr [ESP + 0x4c],EDI      ; 00492156
    MOV dword ptr [ESP + 0x4],EBP       ; 0049215a
    CMP EDI,EDX                         ; 0049215e
    JLE 0x00491f64                      ; 00492160
        ;   XREF to: 00491f64 (CONDITIONAL_JUMP)  ; LAB_00491f64
    MOV EAX,dword ptr [ESP + 0xac]      ; 00492166
        ;   Label: LAB_00492166
    MOV EDX,dword ptr [ESP + 0x48]      ; 0049216d
    MOV ECX,dword ptr [ESP + 0x4]       ; 00492171
    ADD EAX,0x4                         ; 00492175
    MOV EBX,dword ptr [ESP + 0xc]       ; 00492178
    MOV dword ptr [ESP + 0xac],EAX      ; 0049217c
    MOV EAX,dword ptr [ESP + 0x14]      ; 00492183
    INC EDX                             ; 00492187
    ADD ECX,EAX                         ; 00492188
    MOV dword ptr [ESP + 0x48],EDX      ; 0049218a
    MOV dword ptr [ESP + 0x4],ECX       ; 0049218e
    CMP EDX,EBX                         ; 00492192
    JG 0x004918c0                       ; 00492194
        ;   XREF to: 004918c0 (CONDITIONAL_JUMP)  ; LAB_004918c0
    JMP 0x00491f35                      ; 0049219a
        ;   XREF to: 00491f35 (UNCONDITIONAL_JUMP)  ; LAB_00491f35
    MOV ESI,dword ptr [ESP + 0xc]       ; 0049219f
        ;   Label: LAB_0049219f
    MOV EDI,dword ptr [ESP + 0xe8]      ; 004921a3
    CMP EDI,ESI                         ; 004921aa
    JG 0x004918c0                       ; 004921ac
        ;   XREF to: 004918c0 (CONDITIONAL_JUMP)  ; LAB_004918c0
    LEA ESI,[EDI*0x4 + 0x0]             ; 004921b2
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004921b9
        ;   Label: LAB_004921b9
    MOV EDX,dword ptr [ESP + 0xe4]      ; 004921c0
    MOV ECX,dword ptr [ESI + 0x1bd2fa0] ; 004921c7 | g_ScreenBufferArray | g_ScreenBufferArray[1]
    ADD EAX,EAX                         ; 004921cd
    MOV EBP,dword ptr [ESP + 0x8]       ; 004921cf
    ADD ECX,EAX                         ; 004921d3
    CMP EDX,EBP                         ; 004921d5
    JG 0x0049220a                       ; 004921d7
        ;   XREF to: 0049220a (CONDITIONAL_JUMP)  ; LAB_0049220a
    MOV EAX,dword ptr [ESP + 0x4]       ; 004921d9
        ;   Label: LAB_004921d9
    MOV AL,byte ptr [EAX]               ; 004921dd
    AND EAX,0xff                        ; 004921df
    CMP EAX,dword ptr [EBX + 0x3188]    ; 004921e4
    JZ 0x004921f5                       ; 004921ea
        ;   XREF to: 004921f5 (CONDITIONAL_JUMP)  ; LAB_004921f5
    MOV AX,[0x01c70f5e]                 ; 004921ec | DAT_01c70f5e
    MOV word ptr [ECX],AX               ; 004921f2
    MOV EAX,dword ptr [ESP + 0x4]       ; 004921f5
        ;   Label: LAB_004921f5
    MOV EBP,dword ptr [ESP + 0x8]       ; 004921f9
    ADD ECX,0x2                         ; 004921fd
    INC EAX                             ; 00492200
    INC EDX                             ; 00492201
    MOV dword ptr [ESP + 0x4],EAX       ; 00492202
    CMP EDX,EBP                         ; 00492206
    JLE 0x004921d9                      ; 00492208
        ;   XREF to: 004921d9 (CONDITIONAL_JUMP)  ; LAB_004921d9
    MOV EAX,dword ptr [ESP + 0x14]      ; 0049220a
        ;   Label: LAB_0049220a
    MOV EDX,dword ptr [ESP + 0x4]       ; 0049220e
    MOV ECX,dword ptr [ESP + 0xc]       ; 00492212
    ADD ESI,0x4                         ; 00492216
    ADD EDX,EAX                         ; 00492219
    INC EDI                             ; 0049221b
    MOV dword ptr [ESP + 0x4],EDX       ; 0049221c
    CMP EDI,ECX                         ; 00492220
    JG 0x004918c0                       ; 00492222
        ;   XREF to: 004918c0 (CONDITIONAL_JUMP)  ; LAB_004918c0
    JMP 0x004921b9                      ; 00492228
        ;   XREF to: 004921b9 (UNCONDITIONAL_JUMP)  ; LAB_004921b9
    CMP ESI,-0x3                        ; 0049222a
        ;   Label: LAB_0049222a
    JNZ 0x00492558                      ; 0049222d
        ;   XREF to: 00492558 (CONDITIONAL_JUMP)  ; LAB_00492558
    CMP dword ptr [EBX + 0x1d64],0x0    ; 00492233
    JZ 0x004924cd                       ; 0049223a
        ;   XREF to: 004924cd (CONDITIONAL_JUMP)  ; LAB_004924cd
    MOV EAX,dword ptr [ESP + 0xe8]      ; 00492240
    MOV EDX,dword ptr [ESP + 0xc]       ; 00492247
    MOV dword ptr [ESP + 0x64],EAX      ; 0049224b
    CMP EAX,EDX                         ; 0049224f
    JG 0x004918c0                       ; 00492251
        ;   XREF to: 004918c0 (CONDITIONAL_JUMP)  ; LAB_004918c0
    MOV EDX,dword ptr [ESP + 0x10]      ; 00492257
    LEA EAX,[EDX*0x4 + 0x0]             ; 0049225b
    SUB EAX,EDX                         ; 00492262
    SHL EAX,0x8                         ; 00492264
    ADD EBX,EAX                         ; 00492267
    MOV EAX,dword ptr [ESP + 0x64]      ; 00492269
    SHL EAX,0x2                         ; 0049226d
    MOV dword ptr [ESP + 0x6c],EBX      ; 00492270
    MOV dword ptr [ESP + 0xa8],EAX      ; 00492274
    MOV EBX,dword ptr [ESP + 0xa8]      ; 0049227b
        ;   Label: LAB_0049227b
    MOV EAX,dword ptr [ESP + 0xe4]      ; 00492282
    MOV EBX,dword ptr [EBX + 0x1bd2fa0] ; 00492289 | g_ScreenBufferArray | g_ScreenBufferArray[1]
    ADD EAX,EAX                         ; 0049228f
    ADD EBX,EAX                         ; 00492291
    MOV EAX,dword ptr [ESP + 0xe4]      ; 00492293
    MOV ESI,dword ptr [ESP + 0x8]       ; 0049229a
    MOV dword ptr [ESP + 0x68],EAX      ; 0049229e
    CMP EAX,ESI                         ; 004922a2
    JG 0x00492494                       ; 004922a4
        ;   XREF to: 00492494 (CONDITIONAL_JUMP)  ; LAB_00492494
    MOV EAX,dword ptr [ESP + 0x4]       ; 004922aa
        ;   Label: LAB_004922aa
    MOV AL,byte ptr [EAX]               ; 004922ae
    AND EAX,0xff                        ; 004922b0
    MOV ECX,dword ptr [ESP + 0x6c]      ; 004922b5
    LEA EAX,[EAX + EAX*0x2]             ; 004922b9
    ADD EAX,ECX                         ; 004922bc
    MOV AL,byte ptr [EAX + 0x164]       ; 004922be
    MOV EDX,dword ptr [0x005b763c]      ; 004922c4 | DAT_005b763c
    AND EAX,0xff                        ; 004922ca
    IMUL EDX,EAX                        ; 004922cf
    MOV EAX,EDX                         ; 004922d2
    SAR EDX,0x1f                        ; 004922d4
    SHL EDX,0x8                         ; 004922d7
    SBB EAX,EDX                         ; 004922da
    SAR EAX,0x8                         ; 004922dc
    TEST EAX,EAX                        ; 004922df
    JZ 0x00492473                       ; 004922e1
        ;   XREF to: 00492473 (CONDITIONAL_JUMP)  ; LAB_00492473
    MOV EBP,dword ptr [0x01c70f70]      ; 004922e7 | DAT_01c70f70
    MOV ESI,dword ptr [0x005bf5b8]      ; 004922ed | g_RedMask16
    MOV CL,byte ptr [0x01c00624]        ; 004922f3 | g_RedBitPosition
    AND EBP,ESI                         ; 004922f9
    SHR EBP,CL                          ; 004922fb
    MOV CL,byte ptr [0x01c0062c]        ; 004922fd | g_RedDitherShift
    SHL EBP,CL                          ; 00492303
    AND EBP,0xff                        ; 00492305
    IMUL EBP,EAX                        ; 0049230b
    MOV DX,word ptr [EBX]               ; 0049230e
    MOV EDI,dword ptr [0x005bf5c0]      ; 00492311 | g_GreenMask16
    MOV dword ptr [ESP + 0xc4],EDX      ; 00492317
    MOV EDX,dword ptr [0x01c70f70]      ; 0049231e | DAT_01c70f70
    AND EDI,EDX                         ; 00492324
    MOV CL,byte ptr [0x01c00630]        ; 00492326 | g_GreenBitPosition
    SHR EDI,CL                          ; 0049232c
    MOV CL,byte ptr [0x01c00638]        ; 0049232e | g_GreenDitherShift
    SHL EDI,CL                          ; 00492334
    AND EDI,0xff                        ; 00492336
    IMUL EDI,EAX                        ; 0049233c
    MOV ESI,EDX                         ; 0049233f
    AND ESI,dword ptr [0x005bf5c8]      ; 00492341 | g_BlueMask16
    MOV CL,byte ptr [0x01c0063c]        ; 00492347 | g_BlueBitPosition
    SHR ESI,CL                          ; 0049234d
    MOV CL,byte ptr [0x01c00644]        ; 0049234f | g_BlueDitherShift
    SHL ESI,CL                          ; 00492355
    AND ESI,0xff                        ; 00492357
    IMUL ESI,EAX                        ; 0049235d
    XOR EDX,EDX                         ; 00492360
    MOV DX,word ptr [ESP + 0xc4]        ; 00492362
    MOV ECX,dword ptr [0x005bf5b8]      ; 0049236a | g_RedMask16
    MOV dword ptr [ESP + 0x98],EDX      ; 00492370
    AND EDX,ECX                         ; 00492377
    MOV CL,byte ptr [0x01c00624]        ; 00492379 | g_RedBitPosition
    SHR EDX,CL                          ; 0049237f
    MOV CL,byte ptr [0x01c0062c]        ; 00492381 | g_RedDitherShift
    SHL EDX,CL                          ; 00492387
    MOV ECX,EDX                         ; 00492389
    AND ECX,0xff                        ; 0049238b
    MOV EDX,dword ptr [ESP + 0x98]      ; 00492391
    MOV dword ptr [ESP + 0x70],ECX      ; 00492398
    AND EDX,dword ptr [0x005bf5c0]      ; 0049239c | g_GreenMask16
    MOV CL,byte ptr [0x01c00630]        ; 004923a2 | g_GreenBitPosition
    SHR EDX,CL                          ; 004923a8
    MOV CL,byte ptr [0x01c00638]        ; 004923aa | g_GreenDitherShift
    SHL EDX,CL                          ; 004923b0
    MOV ECX,EDX                         ; 004923b2
    AND ECX,0xff                        ; 004923b4
    MOV EDX,dword ptr [ESP + 0x98]      ; 004923ba
    MOV dword ptr [ESP + 0x74],ECX      ; 004923c1
    AND EDX,dword ptr [0x005bf5c8]      ; 004923c5 | g_BlueMask16
    MOV CL,byte ptr [0x01c0063c]        ; 004923cb | g_BlueBitPosition
    SHR EDX,CL                          ; 004923d1
    MOV CL,byte ptr [0x01c00644]        ; 004923d3 | g_BlueDitherShift
    SHL EDX,CL                          ; 004923d9
    MOV ECX,EDX                         ; 004923db
    AND ECX,0xff                        ; 004923dd
    MOV EDX,0xff                        ; 004923e3
    MOV dword ptr [ESP + 0x78],ECX      ; 004923e8
    SUB EDX,EAX                         ; 004923ec
    MOV ECX,dword ptr [ESP + 0x70]      ; 004923ee
    IMUL ECX,EDX                        ; 004923f2
    ADD EBP,ECX                         ; 004923f5
    MOV ECX,dword ptr [ESP + 0x74]      ; 004923f7
    IMUL ECX,EDX                        ; 004923fb
    ADD EDI,ECX                         ; 004923fe
    IMUL EDX,dword ptr [ESP + 0x78]     ; 00492400
    ADD ESI,EDX                         ; 00492405
    MOV EAX,EBP                         ; 00492407
    SHR ESI,0x8                         ; 00492409
    SHR EAX,0x8                         ; 0049240c
    MOV dword ptr [ESP + 0x98],ESI      ; 0049240f
    MOV EDX,ESI                         ; 00492416
    MOV dword ptr [ESP + 0x7c],ESI      ; 00492418
    XOR EDX,ESI                         ; 0049241c
    DIV dword ptr [0x01c00628]          ; 0049241e | g_RedScaleFactor
    MOV ECX,EDI                         ; 00492424
    MOV EDI,dword ptr [0x01c00634]      ; 00492426 | g_GreenScaleFactor
    SHR ECX,0x8                         ; 0049242c
    MOV ESI,EAX                         ; 0049242f
    XOR EDX,EDX                         ; 00492431
    MOV EAX,ECX                         ; 00492433
    DIV EDI                             ; 00492435
    MOV EBP,dword ptr [0x01c00640]      ; 00492437 | g_BlueScaleFactor
    MOV EDI,EAX                         ; 0049243d
    XOR EDX,EDX                         ; 0049243f
    MOV EAX,dword ptr [ESP + 0x98]      ; 00492441
    DIV EBP                             ; 00492448
    MOV CL,byte ptr [0x01c00624]        ; 0049244a | g_RedBitPosition
    MOV dword ptr [ESP + 0x7c],EAX      ; 00492450
    MOV EAX,ESI                         ; 00492454
    SHL EAX,CL                          ; 00492456
    MOV CL,byte ptr [0x01c00630]        ; 00492458 | g_GreenBitPosition
    MOV EDX,dword ptr [ESP + 0x7c]      ; 0049245e
    SHL EDI,CL                          ; 00492462
    MOV CL,byte ptr [0x01c0063c]        ; 00492464 | g_BlueBitPosition
    OR EAX,EDI                          ; 0049246a
    SHL EDX,CL                          ; 0049246c
    OR EAX,EDX                          ; 0049246e
    MOV word ptr [EBX],AX               ; 00492470
    MOV EDI,dword ptr [ESP + 0x68]      ; 00492473
        ;   Label: LAB_00492473
    MOV EBP,dword ptr [ESP + 0x4]       ; 00492477
    MOV EDX,dword ptr [ESP + 0x8]       ; 0049247b
    ADD EBX,0x2                         ; 0049247f
    INC EDI                             ; 00492482
    INC EBP                             ; 00492483
    MOV dword ptr [ESP + 0x68],EDI      ; 00492484
    MOV dword ptr [ESP + 0x4],EBP       ; 00492488
    CMP EDI,EDX                         ; 0049248c
    JLE 0x004922aa                      ; 0049248e
        ;   XREF to: 004922aa (CONDITIONAL_JUMP)  ; LAB_004922aa
    MOV EAX,dword ptr [ESP + 0xa8]      ; 00492494
        ;   Label: LAB_00492494
    MOV EDX,dword ptr [ESP + 0x64]      ; 0049249b
    MOV ECX,dword ptr [ESP + 0x4]       ; 0049249f
    ADD EAX,0x4                         ; 004924a3
    MOV EBX,dword ptr [ESP + 0xc]       ; 004924a6
    MOV dword ptr [ESP + 0xa8],EAX      ; 004924aa
    MOV EAX,dword ptr [ESP + 0x14]      ; 004924b1
    INC EDX                             ; 004924b5
    ADD ECX,EAX                         ; 004924b6
    MOV dword ptr [ESP + 0x64],EDX      ; 004924b8
    MOV dword ptr [ESP + 0x4],ECX       ; 004924bc
    CMP EDX,EBX                         ; 004924c0
    JG 0x004918c0                       ; 004924c2
        ;   XREF to: 004918c0 (CONDITIONAL_JUMP)  ; LAB_004918c0
    JMP 0x0049227b                      ; 004924c8
        ;   XREF to: 0049227b (UNCONDITIONAL_JUMP)  ; LAB_0049227b
    MOV EBP,dword ptr [ESP + 0xc]       ; 004924cd
        ;   Label: LAB_004924cd
    MOV EDI,dword ptr [ESP + 0xe8]      ; 004924d1
    CMP EDI,EBP                         ; 004924d8
    JG 0x004918c0                       ; 004924da
        ;   XREF to: 004918c0 (CONDITIONAL_JUMP)  ; LAB_004918c0
    LEA ESI,[EDI*0x4 + 0x0]             ; 004924e0
    MOV EDX,dword ptr [ESP + 0xe4]      ; 004924e7
        ;   Label: LAB_004924e7
    MOV ECX,dword ptr [ESP + 0xe4]      ; 004924ee
    MOV EAX,dword ptr [ESI + 0x1bd2fa0] ; 004924f5 | g_ScreenBufferArray | g_ScreenBufferArray[1]
    ADD EDX,EDX                         ; 004924fb
    MOV EBP,dword ptr [ESP + 0x8]       ; 004924fd
    ADD EDX,EAX                         ; 00492501
    CMP ECX,EBP                         ; 00492503
    JG 0x00492538                       ; 00492505
        ;   XREF to: 00492538 (CONDITIONAL_JUMP)  ; LAB_00492538
    MOV EAX,dword ptr [ESP + 0x4]       ; 00492507
        ;   Label: LAB_00492507
    MOV AL,byte ptr [EAX]               ; 0049250b
    AND EAX,0xff                        ; 0049250d
    CMP EAX,dword ptr [EBX + 0x3188]    ; 00492512
    JZ 0x00492523                       ; 00492518
        ;   XREF to: 00492523 (CONDITIONAL_JUMP)  ; LAB_00492523
    MOV AX,[0x01c70f70]                 ; 0049251a | DAT_01c70f70
    MOV word ptr [EDX],AX               ; 00492520
    MOV EAX,dword ptr [ESP + 0x4]       ; 00492523
        ;   Label: LAB_00492523
    MOV EBP,dword ptr [ESP + 0x8]       ; 00492527
    INC ECX                             ; 0049252b
    INC EAX                             ; 0049252c
    ADD EDX,0x2                         ; 0049252d
    MOV dword ptr [ESP + 0x4],EAX       ; 00492530
    CMP ECX,EBP                         ; 00492534
    JLE 0x00492507                      ; 00492536
        ;   XREF to: 00492507 (CONDITIONAL_JUMP)  ; LAB_00492507
    MOV EAX,dword ptr [ESP + 0x14]      ; 00492538
        ;   Label: LAB_00492538
    MOV EDX,dword ptr [ESP + 0x4]       ; 0049253c
    MOV ECX,dword ptr [ESP + 0xc]       ; 00492540
    ADD ESI,0x4                         ; 00492544
    ADD EDX,EAX                         ; 00492547
    INC EDI                             ; 00492549
    MOV dword ptr [ESP + 0x4],EDX       ; 0049254a
    CMP EDI,ECX                         ; 0049254e
    JG 0x004918c0                       ; 00492550
        ;   XREF to: 004918c0 (CONDITIONAL_JUMP)  ; LAB_004918c0
    JMP 0x004924e7                      ; 00492556
        ;   XREF to: 004924e7 (UNCONDITIONAL_JUMP)  ; LAB_004924e7
    MOV AX,word ptr [ESI*0x2 + 0x1bff720] ; 00492558
        ;   Label: LAB_00492558
    MOV dword ptr [ESP + 0xb8],EAX      ; 00492560
    CMP dword ptr [EBX + 0x1d64],0x0    ; 00492567
    JZ 0x00492845                       ; 0049256e
        ;   XREF to: 00492845 (CONDITIONAL_JUMP)  ; LAB_00492845
    MOV EAX,dword ptr [ESP + 0xe8]      ; 00492574
    MOV ESI,dword ptr [ESP + 0xc]       ; 0049257b
    MOV dword ptr [ESP + 0x80],EAX      ; 0049257f
    CMP EAX,ESI                         ; 00492586
    JG 0x004918c0                       ; 00492588
        ;   XREF to: 004918c0 (CONDITIONAL_JUMP)  ; LAB_004918c0
    MOV EDX,dword ptr [ESP + 0x10]      ; 0049258e
    LEA EAX,[EDX*0x4 + 0x0]             ; 00492592
    SUB EAX,EDX                         ; 00492599
    SHL EAX,0x8                         ; 0049259b
    ADD EBX,EAX                         ; 0049259e
    MOV EAX,dword ptr [ESP + 0x80]      ; 004925a0
    SHL EAX,0x2                         ; 004925a7
    MOV dword ptr [ESP + 0x88],EBX      ; 004925aa
    MOV dword ptr [ESP + 0xa4],EAX      ; 004925b1
    MOV EBX,dword ptr [ESP + 0xa4]      ; 004925b8
        ;   Label: LAB_004925b8
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004925bf
    MOV EBX,dword ptr [EBX + 0x1bd2fa0] ; 004925c6 | g_ScreenBufferArray | g_ScreenBufferArray[1]
    ADD EAX,EAX                         ; 004925cc
    ADD EBX,EAX                         ; 004925ce
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004925d0
    MOV ESI,dword ptr [ESP + 0x8]       ; 004925d7
    MOV dword ptr [ESP + 0x84],EAX      ; 004925db
    CMP EAX,ESI                         ; 004925e2
    JG 0x00492806                       ; 004925e4
        ;   XREF to: 00492806 (CONDITIONAL_JUMP)  ; LAB_00492806
    MOV EAX,dword ptr [ESP + 0x4]       ; 004925ea
        ;   Label: LAB_004925ea
    MOV AL,byte ptr [EAX]               ; 004925ee
    AND EAX,0xff                        ; 004925f0
    MOV ECX,dword ptr [ESP + 0x88]      ; 004925f5
    LEA EAX,[EAX + EAX*0x2]             ; 004925fc
    ADD EAX,ECX                         ; 004925ff
    MOV AL,byte ptr [EAX + 0x164]       ; 00492601
    MOV EDX,dword ptr [0x005b763c]      ; 00492607 | DAT_005b763c
    AND EAX,0xff                        ; 0049260d
    IMUL EDX,EAX                        ; 00492612
    MOV EAX,EDX                         ; 00492615
    SAR EDX,0x1f                        ; 00492617
    SHL EDX,0x8                         ; 0049261a
    SBB EAX,EDX                         ; 0049261d
    SAR EAX,0x8                         ; 0049261f
    TEST EAX,EAX                        ; 00492622
    JZ 0x004927df                       ; 00492624
        ;   XREF to: 004927df (CONDITIONAL_JUMP)  ; LAB_004927df
    XOR ESI,ESI                         ; 0049262a
    MOV EDI,dword ptr [0x005bf5b8]      ; 0049262c | g_RedMask16
    MOV SI,word ptr [ESP + 0xb8]        ; 00492632
    MOV CL,byte ptr [0x01c00624]        ; 0049263a | g_RedBitPosition
    AND EDI,ESI                         ; 00492640
    SHR EDI,CL                          ; 00492642
    MOV CL,byte ptr [0x01c0062c]        ; 00492644 | g_RedDitherShift
    SHL EDI,CL                          ; 0049264a
    AND EDI,0xff                        ; 0049264c
    IMUL EDI,EAX                        ; 00492652
    MOV DX,word ptr [EBX]               ; 00492655
    MOV dword ptr [ESP + 0xb4],EDX      ; 00492658
    MOV EDX,dword ptr [0x005bf5c0]      ; 0049265f | g_GreenMask16
    AND EDX,ESI                         ; 00492665
    MOV CL,byte ptr [0x01c00630]        ; 00492667 | g_GreenBitPosition
    SHR EDX,CL                          ; 0049266d
    MOV CL,byte ptr [0x01c00638]        ; 0049266f | g_GreenDitherShift
    SHL EDX,CL                          ; 00492675
    AND EDX,0xff                        ; 00492677
    IMUL EDX,EAX                        ; 0049267d
    AND ESI,dword ptr [0x005bf5c8]      ; 00492680 | g_BlueMask16
    MOV CL,byte ptr [0x01c0063c]        ; 00492686 | g_BlueBitPosition
    SHR ESI,CL                          ; 0049268c
    MOV CL,byte ptr [0x01c00644]        ; 0049268e | g_BlueDitherShift
    SHL ESI,CL                          ; 00492694
    AND ESI,0xff                        ; 00492696
    MOV dword ptr [ESP + 0x8c],ESI      ; 0049269c
    XOR ESI,ESI                         ; 004926a3
    MOV ECX,dword ptr [0x005bf5b8]      ; 004926a5 | g_RedMask16
    MOV SI,word ptr [ESP + 0xb4]        ; 004926ab
    AND ECX,ESI                         ; 004926b3
    MOV dword ptr [ESP + 0x98],ECX      ; 004926b5
    MOV EBP,dword ptr [ESP + 0x98]      ; 004926bc
    MOV CL,byte ptr [0x01c00624]        ; 004926c3 | g_RedBitPosition
    SHR EBP,CL                          ; 004926c9
    MOV CL,byte ptr [0x01c0062c]        ; 004926cb | g_RedDitherShift
    SHL EBP,CL                          ; 004926d1
    MOV ECX,EBP                         ; 004926d3
    AND ECX,0xff                        ; 004926d5
    MOV dword ptr [ESP + 0x90],ECX      ; 004926db
    MOV ECX,dword ptr [0x005bf5c0]      ; 004926e2 | g_GreenMask16
    AND ECX,ESI                         ; 004926e8
    MOV dword ptr [ESP + 0x98],ECX      ; 004926ea
    MOV EBP,dword ptr [ESP + 0x98]      ; 004926f1
    MOV CL,byte ptr [0x01c00630]        ; 004926f8 | g_GreenBitPosition
    SHR EBP,CL                          ; 004926fe
    MOV CL,byte ptr [0x01c00638]        ; 00492700 | g_GreenDitherShift
    SHL EBP,CL                          ; 00492706
    MOV ECX,dword ptr [0x005bf5c8]      ; 00492708 | g_BlueMask16
    AND ECX,ESI                         ; 0049270e
    MOV dword ptr [ESP + 0x98],ECX      ; 00492710
    MOV ESI,dword ptr [ESP + 0x98]      ; 00492717
    MOV CL,byte ptr [0x01c0063c]        ; 0049271e | g_BlueBitPosition
    SHR ESI,CL                          ; 00492724
    MOV CL,byte ptr [0x01c00644]        ; 00492726 | g_BlueDitherShift
    SHL ESI,CL                          ; 0049272c
    MOV ECX,ESI                         ; 0049272e
    MOV ESI,0xff                        ; 00492730
    AND EBP,0xff                        ; 00492735
    SUB ESI,EAX                         ; 0049273b
    IMUL EBP,ESI                        ; 0049273d
    AND ECX,0xff                        ; 00492740
    MOV dword ptr [ESP + 0x94],ECX      ; 00492746
    MOV ECX,dword ptr [ESP + 0x90]      ; 0049274d
    IMUL ECX,ESI                        ; 00492754
    ADD EDX,EBP                         ; 00492757
    IMUL ESI,dword ptr [ESP + 0x94]     ; 00492759
    ADD EDI,ECX                         ; 00492761
    IMUL EAX,dword ptr [ESP + 0x8c]     ; 00492763
    ADD EAX,ESI                         ; 0049276b
    MOV EBP,EDX                         ; 0049276d
    MOV dword ptr [ESP + 0x8c],EAX      ; 0049276f
    MOV ECX,EAX                         ; 00492776
    MOV EAX,EDI                         ; 00492778
    XOR EDX,EDX                         ; 0049277a
    SHR EAX,0x8                         ; 0049277c
    MOV ESI,dword ptr [0x01c00628]      ; 0049277f | g_RedScaleFactor
    MOV dword ptr [ESP + 0x9c],EAX      ; 00492785
    DIV ESI                             ; 0049278c
    SHR EBP,0x8                         ; 0049278e
    MOV EDI,dword ptr [0x01c00634]      ; 00492791 | g_GreenScaleFactor
    MOV dword ptr [ESP + 0x9c],EAX      ; 00492797
    XOR EDX,EDX                         ; 0049279e
    MOV EAX,EBP                         ; 004927a0
    DIV EDI                             ; 004927a2
    SHR ECX,0x8                         ; 004927a4
    MOV EBP,dword ptr [0x01c00640]      ; 004927a7 | g_BlueScaleFactor
    MOV EDI,EAX                         ; 004927ad
    XOR EDX,EDX                         ; 004927af
    MOV EAX,ECX                         ; 004927b1
    DIV EBP                             ; 004927b3
    MOV CL,byte ptr [0x01c00624]        ; 004927b5 | g_RedBitPosition
    MOV EDX,dword ptr [ESP + 0x9c]      ; 004927bb
    MOV ESI,EAX                         ; 004927c2
    MOV EAX,EDI                         ; 004927c4
    SHL EDX,CL                          ; 004927c6
    MOV CL,byte ptr [0x01c00630]        ; 004927c8 | g_GreenBitPosition
    SHL EAX,CL                          ; 004927ce
    MOV CL,byte ptr [0x01c0063c]        ; 004927d0 | g_BlueBitPosition
    OR EAX,EDX                          ; 004927d6
    SHL ESI,CL                          ; 004927d8
    OR EAX,ESI                          ; 004927da
    MOV word ptr [EBX],AX               ; 004927dc
    MOV EDI,dword ptr [ESP + 0x84]      ; 004927df
        ;   Label: LAB_004927df
    MOV EBP,dword ptr [ESP + 0x4]       ; 004927e6
    MOV EDX,dword ptr [ESP + 0x8]       ; 004927ea
    ADD EBX,0x2                         ; 004927ee
    INC EDI                             ; 004927f1
    INC EBP                             ; 004927f2
    MOV dword ptr [ESP + 0x84],EDI      ; 004927f3
    MOV dword ptr [ESP + 0x4],EBP       ; 004927fa
    CMP EDI,EDX                         ; 004927fe
    JLE 0x004925ea                      ; 00492800
        ;   XREF to: 004925ea (CONDITIONAL_JUMP)  ; LAB_004925ea
    MOV EAX,dword ptr [ESP + 0xa4]      ; 00492806
        ;   Label: LAB_00492806
    MOV EDX,dword ptr [ESP + 0x80]      ; 0049280d
    MOV ECX,dword ptr [ESP + 0x4]       ; 00492814
    ADD EAX,0x4                         ; 00492818
    MOV EBX,dword ptr [ESP + 0xc]       ; 0049281b
    MOV dword ptr [ESP + 0xa4],EAX      ; 0049281f
    MOV EAX,dword ptr [ESP + 0x14]      ; 00492826
    INC EDX                             ; 0049282a
    ADD ECX,EAX                         ; 0049282b
    MOV dword ptr [ESP + 0x80],EDX      ; 0049282d
    MOV dword ptr [ESP + 0x4],ECX       ; 00492834
    CMP EDX,EBX                         ; 00492838
    JG 0x004918c0                       ; 0049283a
        ;   XREF to: 004918c0 (CONDITIONAL_JUMP)  ; LAB_004918c0
    JMP 0x004925b8                      ; 00492840
        ;   XREF to: 004925b8 (UNCONDITIONAL_JUMP)  ; LAB_004925b8
    MOV ECX,dword ptr [ESP + 0xc]       ; 00492845
        ;   Label: LAB_00492845
    MOV EDI,dword ptr [ESP + 0xe8]      ; 00492849
    CMP EDI,ECX                         ; 00492850
    JG 0x004918c0                       ; 00492852
        ;   XREF to: 004918c0 (CONDITIONAL_JUMP)  ; LAB_004918c0
    MOV ESI,EDX                         ; 00492858
    MOV EDX,dword ptr [ESP + 0xe4]      ; 0049285a
        ;   Label: LAB_0049285a
    MOV ECX,dword ptr [ESP + 0xe4]      ; 00492861
    MOV EAX,dword ptr [ESI + 0x1bd2fa0] ; 00492868 | g_ScreenBufferArray | g_ScreenBufferArray[1]
    ADD EDX,EDX                         ; 0049286e
    MOV EBP,dword ptr [ESP + 0x8]       ; 00492870
    ADD EDX,EAX                         ; 00492874
    CMP ECX,EBP                         ; 00492876
    JG 0x004928ac                       ; 00492878
        ;   XREF to: 004928ac (CONDITIONAL_JUMP)  ; LAB_004928ac
    MOV EAX,dword ptr [ESP + 0x4]       ; 0049287a
        ;   Label: LAB_0049287a
    MOV AL,byte ptr [EAX]               ; 0049287e
    AND EAX,0xff                        ; 00492880
    CMP EAX,dword ptr [EBX + 0x3188]    ; 00492885
    JZ 0x00492897                       ; 0049288b
        ;   XREF to: 00492897 (CONDITIONAL_JUMP)  ; LAB_00492897
    MOV EAX,dword ptr [ESP + 0xb8]      ; 0049288d
    MOV word ptr [EDX],AX               ; 00492894
    MOV EAX,dword ptr [ESP + 0x4]       ; 00492897
        ;   Label: LAB_00492897
    MOV EBP,dword ptr [ESP + 0x8]       ; 0049289b
    INC ECX                             ; 0049289f
    INC EAX                             ; 004928a0
    ADD EDX,0x2                         ; 004928a1
    MOV dword ptr [ESP + 0x4],EAX       ; 004928a4
    CMP ECX,EBP                         ; 004928a8
    JLE 0x0049287a                      ; 004928aa
        ;   XREF to: 0049287a (CONDITIONAL_JUMP)  ; LAB_0049287a
    MOV EAX,dword ptr [ESP + 0x14]      ; 004928ac
        ;   Label: LAB_004928ac
    MOV EDX,dword ptr [ESP + 0x4]       ; 004928b0
    MOV ECX,dword ptr [ESP + 0xc]       ; 004928b4
    ADD ESI,0x4                         ; 004928b8
    ADD EDX,EAX                         ; 004928bb
    INC EDI                             ; 004928bd
    MOV dword ptr [ESP + 0x4],EDX       ; 004928be
    CMP EDI,ECX                         ; 004928c2
    JG 0x004918c0                       ; 004928c4
        ;   XREF to: 004918c0 (CONDITIONAL_JUMP)  ; LAB_004918c0
    JMP 0x0049285a                      ; 004928ca
        ;   XREF to: 0049285a (UNCONDITIONAL_JUMP)  ; LAB_0049285a
    CMP EDI,0x20                        ; 004928cc
        ;   Label: LAB_004928cc
    JNZ 0x004918c0                      ; 004928cf
        ;   XREF to: 004918c0 (CONDITIONAL_JUMP)  ; LAB_004918c0
    MOV EAX,dword ptr [ESP + 0x10]      ; 004928d5
    LEA EBP,[EBX + 0xd64]               ; 004928d9
    SHL EAX,0xa                         ; 004928df
    MOV ECX,dword ptr [ESP + 0xec]      ; 004928e2
    ADD EBP,EAX                         ; 004928e9
    CMP ECX,-0x1                        ; 004928eb
    JNZ 0x00492a1d                      ; 004928ee
        ;   XREF to: 00492a1d (CONDITIONAL_JUMP)  ; LAB_00492a1d
    MOV EDI,dword ptr [EBX + 0x1d64]    ; 004928f4
    LEA ESI,[EBX + EAX*0x1]             ; 004928fa
    TEST EDI,EDI                        ; 004928fd
    JZ 0x00492998                       ; 004928ff
        ;   XREF to: 00492998 (CONDITIONAL_JUMP)  ; LAB_00492998
    MOV ECX,dword ptr [ESP + 0xc]       ; 00492905
    MOV EDI,dword ptr [ESP + 0xe8]      ; 00492909
    CMP EDI,ECX                         ; 00492910
    JG 0x004918c0                       ; 00492912
        ;   XREF to: 004918c0 (CONDITIONAL_JUMP)  ; LAB_004918c0
    MOV EBX,EDX                         ; 00492918
    MOV EAX,dword ptr [ESP + 0xe4]      ; 0049291a
        ;   Label: LAB_0049291a
    MOV EDX,dword ptr [EBX + 0x1bd2fa0] ; 00492921 | g_ScreenBufferArray | g_ScreenBufferArray[1]
    SHL EAX,0x2                         ; 00492927
    ADD EDX,EAX                         ; 0049292a
    MOV EAX,dword ptr [ESP + 0x4]       ; 0049292c
    MOV AL,byte ptr [EAX]               ; 00492930
    AND EAX,0xff                        ; 00492932
    MOV ECX,dword ptr [ESI + EAX*0x4 + 0xd64] ; 00492937
    MOV EAX,dword ptr [ESP + 0x8]       ; 0049293e
    PUSH ECX                            ; 00492942
    SUB EAX,dword ptr [ESP + 0xe8]      ; 00492943
    INC EAX                             ; 0049294a
    PUSH EAX                            ; 0049294b
    PUSH EBP                            ; 0049294c
    MOV EAX,dword ptr [ESP + 0x10]      ; 0049294d
    PUSH EAX                            ; 00492951
    PUSH EDX                            ; 00492952
    CALL engine_font.cpp_drawAlphaBlendedPixels_FUN_00491160 ; 00492953
        ;   XREF to: 00491160 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_drawAlphaBlendedPixels_FUN_00491160(uint * dest_buffer, uchar * src_indices, uint * color_table, int pixel_count, ...)
    ADD ESP,0x14                        ; 00492958
    MOV EAX,dword ptr [ESP + 0x8]       ; 0049295b
    SUB EAX,dword ptr [ESP + 0xe4]      ; 0049295f
    MOV ECX,dword ptr [ESP + 0x4]       ; 00492966
    INC EAX                             ; 0049296a
    ADD EBX,0x4                         ; 0049296b
    ADD ECX,EAX                         ; 0049296e
    MOV EAX,dword ptr [ESP + 0x14]      ; 00492970
    MOV dword ptr [ESP + 0x4],ECX       ; 00492974
    LEA EDX,[ECX + EAX*0x1]             ; 00492978
    INC EDI                             ; 0049297b
    MOV ECX,dword ptr [ESP + 0xc]       ; 0049297c
    MOV dword ptr [ESP + 0x4],EDX       ; 00492980
    CMP EDI,ECX                         ; 00492984
    JLE 0x0049291a                      ; 00492986
        ;   XREF to: 0049291a (CONDITIONAL_JUMP)  ; LAB_0049291a
    MOV EBX,dword ptr [ESP]             ; 00492988
    MOV EAX,EBX                         ; 0049298b
    ADD ESP,0xc8                        ; 0049298d
    POP EBP                             ; 00492993
    POP EDI                             ; 00492994
    POP ESI                             ; 00492995
    POP EBX                             ; 00492996
    RET                                 ; 00492997
    MOV EBP,dword ptr [ESP + 0xc]       ; 00492998
        ;   Label: LAB_00492998
    MOV EDI,dword ptr [ESP + 0xe8]      ; 0049299c
    CMP EDI,EBP                         ; 004929a3
    JG 0x004918c0                       ; 004929a5
        ;   XREF to: 004918c0 (CONDITIONAL_JUMP)  ; LAB_004918c0
    MOV EBP,EDX                         ; 004929ab
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004929ad
        ;   Label: LAB_004929ad
    MOV EDX,dword ptr [EBP + 0x1bd2fa0] ; 004929b4 | g_ScreenBufferArray | g_ScreenBufferArray[1]
    SHL EAX,0x2                         ; 004929ba
    MOV ECX,dword ptr [ESP + 0xe4]      ; 004929bd
    ADD EDX,EAX                         ; 004929c4
    CMP ECX,dword ptr [ESP + 0x8]       ; 004929c6
    JG 0x004929fd                       ; 004929ca
        ;   XREF to: 004929fd (CONDITIONAL_JUMP)  ; LAB_004929fd
    MOV EAX,dword ptr [ESP + 0x4]       ; 004929cc
        ;   Label: LAB_004929cc
    MOV AL,byte ptr [EAX]               ; 004929d0
    AND EAX,0xff                        ; 004929d2
    CMP EAX,dword ptr [EBX + 0x3188]    ; 004929d7
    JZ 0x004929e8                       ; 004929dd
        ;   XREF to: 004929e8 (CONDITIONAL_JUMP)  ; LAB_004929e8
    MOV EAX,dword ptr [ESI + EAX*0x4 + 0xd64] ; 004929df
    MOV dword ptr [EDX],EAX             ; 004929e6
    MOV EAX,dword ptr [ESP + 0x4]       ; 004929e8
        ;   Label: LAB_004929e8
    INC EAX                             ; 004929ec
    INC ECX                             ; 004929ed
    MOV dword ptr [ESP + 0x4],EAX       ; 004929ee
    MOV EAX,dword ptr [ESP + 0x8]       ; 004929f2
    ADD EDX,0x4                         ; 004929f6
    CMP ECX,EAX                         ; 004929f9
    JLE 0x004929cc                      ; 004929fb
        ;   XREF to: 004929cc (CONDITIONAL_JUMP)  ; LAB_004929cc
    MOV EAX,dword ptr [ESP + 0x14]      ; 004929fd
        ;   Label: LAB_004929fd
    MOV EDX,dword ptr [ESP + 0x4]       ; 00492a01
    MOV ECX,dword ptr [ESP + 0xc]       ; 00492a05
    ADD EBP,0x4                         ; 00492a09
    ADD EDX,EAX                         ; 00492a0c
    INC EDI                             ; 00492a0e
    MOV dword ptr [ESP + 0x4],EDX       ; 00492a0f
    CMP EDI,ECX                         ; 00492a13
    JG 0x004918c0                       ; 00492a15
        ;   XREF to: 004918c0 (CONDITIONAL_JUMP)  ; LAB_004918c0
    JMP 0x004929ad                      ; 00492a1b
        ;   XREF to: 004929ad (UNCONDITIONAL_JUMP)  ; LAB_004929ad
    CMP ECX,-0x2                        ; 00492a1d
        ;   Label: LAB_00492a1d
    JNZ 0x00492b45                      ; 00492a20
        ;   XREF to: 00492b45 (CONDITIONAL_JUMP)  ; LAB_00492b45
    CMP dword ptr [EBX + 0x1d64],0x0    ; 00492a26
    JZ 0x00492ac0                       ; 00492a2d
        ;   XREF to: 00492ac0 (CONDITIONAL_JUMP)  ; LAB_00492ac0
    MOV ECX,dword ptr [ESP + 0xc]       ; 00492a33
    MOV EDI,dword ptr [ESP + 0xe8]      ; 00492a37
    CMP EDI,ECX                         ; 00492a3e
    JG 0x004918c0                       ; 00492a40
        ;   XREF to: 004918c0 (CONDITIONAL_JUMP)  ; LAB_004918c0
    MOV EBX,EDX                         ; 00492a46
    MOV ESI,EBP                         ; 00492a48
    MOV EDX,dword ptr [ESP + 0xe4]      ; 00492a4a
        ;   Label: LAB_00492a4a
    MOV EAX,dword ptr [EBX + 0x1bd2fa0] ; 00492a51 | g_ScreenBufferArray | g_ScreenBufferArray[1]
    SHL EDX,0x2                         ; 00492a57
    MOV EBP,dword ptr [ESP + 0xe4]      ; 00492a5a
    ADD EDX,EAX                         ; 00492a61
    MOV EAX,dword ptr [ESP + 0x8]       ; 00492a63
    MOV ECX,dword ptr [0x01c70f60]      ; 00492a67 | DAT_01c70f60
    SUB EAX,EBP                         ; 00492a6d
    PUSH ECX                            ; 00492a6f
    INC EAX                             ; 00492a70
    PUSH EAX                            ; 00492a71
    PUSH ESI                            ; 00492a72
    MOV EAX,dword ptr [ESP + 0x10]      ; 00492a73
    PUSH EAX                            ; 00492a77
    PUSH EDX                            ; 00492a78
    CALL engine_font.cpp_drawAlphaBlendedPixels_FUN_00491160 ; 00492a79
        ;   XREF to: 00491160 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_drawAlphaBlendedPixels_FUN_00491160(uint * dest_buffer, uchar * src_indices, uint * color_table, int pixel_count, ...)
    ADD ESP,0x14                        ; 00492a7e
    MOV EAX,dword ptr [ESP + 0x8]       ; 00492a81
    MOV EDX,dword ptr [ESP + 0xe4]      ; 00492a85
    ADD EBX,0x4                         ; 00492a8c
    SUB EAX,EDX                         ; 00492a8f
    MOV ECX,dword ptr [ESP + 0x4]       ; 00492a91
    INC EAX                             ; 00492a95
    INC EDI                             ; 00492a96
    ADD ECX,EAX                         ; 00492a97
    MOV EAX,dword ptr [ESP + 0x14]      ; 00492a99
    MOV dword ptr [ESP + 0x4],ECX       ; 00492a9d
    LEA EBP,[ECX + EAX*0x1]             ; 00492aa1
    MOV EAX,dword ptr [ESP + 0xc]       ; 00492aa4
    MOV dword ptr [ESP + 0x4],EBP       ; 00492aa8
    CMP EDI,EAX                         ; 00492aac
    JLE 0x00492a4a                      ; 00492aae
        ;   XREF to: 00492a4a (CONDITIONAL_JUMP)  ; LAB_00492a4a
    MOV EBX,dword ptr [ESP]             ; 00492ab0
    MOV EAX,EBX                         ; 00492ab3
    ADD ESP,0xc8                        ; 00492ab5
    POP EBP                             ; 00492abb
    POP EDI                             ; 00492abc
    POP ESI                             ; 00492abd
    POP EBX                             ; 00492abe
    RET                                 ; 00492abf
    MOV EBP,dword ptr [ESP + 0xc]       ; 00492ac0
        ;   Label: LAB_00492ac0
    MOV EDI,dword ptr [ESP + 0xe8]      ; 00492ac4
    CMP EDI,EBP                         ; 00492acb
    JG 0x004918c0                       ; 00492acd
        ;   XREF to: 004918c0 (CONDITIONAL_JUMP)  ; LAB_004918c0
    MOV ESI,EDX                         ; 00492ad3
    MOV ECX,dword ptr [ESP + 0xe4]      ; 00492ad5
        ;   Label: LAB_00492ad5
    MOV EDX,dword ptr [ESP + 0xe4]      ; 00492adc
    MOV EAX,dword ptr [ESI + 0x1bd2fa0] ; 00492ae3 | g_ScreenBufferArray | g_ScreenBufferArray[1]
    SHL ECX,0x2                         ; 00492ae9
    MOV EBP,dword ptr [ESP + 0x8]       ; 00492aec
    ADD ECX,EAX                         ; 00492af0
    CMP EDX,EBP                         ; 00492af2
    JG 0x00492b25                       ; 00492af4
        ;   XREF to: 00492b25 (CONDITIONAL_JUMP)  ; LAB_00492b25
    MOV EAX,dword ptr [ESP + 0x4]       ; 00492af6
        ;   Label: LAB_00492af6
    MOV AL,byte ptr [EAX]               ; 00492afa
    AND EAX,0xff                        ; 00492afc
    CMP EAX,dword ptr [EBX + 0x3188]    ; 00492b01
    JZ 0x00492b10                       ; 00492b07
        ;   XREF to: 00492b10 (CONDITIONAL_JUMP)  ; LAB_00492b10
    MOV EAX,[0x01c70f60]                ; 00492b09 | DAT_01c70f60
    MOV dword ptr [ECX],EAX             ; 00492b0e
    MOV EAX,dword ptr [ESP + 0x4]       ; 00492b10
        ;   Label: LAB_00492b10
    MOV EBP,dword ptr [ESP + 0x8]       ; 00492b14
    INC EDX                             ; 00492b18
    INC EAX                             ; 00492b19
    ADD ECX,0x4                         ; 00492b1a
    MOV dword ptr [ESP + 0x4],EAX       ; 00492b1d
    CMP EDX,EBP                         ; 00492b21
    JLE 0x00492af6                      ; 00492b23
        ;   XREF to: 00492af6 (CONDITIONAL_JUMP)  ; LAB_00492af6
    MOV EAX,dword ptr [ESP + 0x14]      ; 00492b25
        ;   Label: LAB_00492b25
    MOV EDX,dword ptr [ESP + 0x4]       ; 00492b29
    MOV ECX,dword ptr [ESP + 0xc]       ; 00492b2d
    ADD ESI,0x4                         ; 00492b31
    ADD EDX,EAX                         ; 00492b34
    INC EDI                             ; 00492b36
    MOV dword ptr [ESP + 0x4],EDX       ; 00492b37
    CMP EDI,ECX                         ; 00492b3b
    JG 0x004918c0                       ; 00492b3d
        ;   XREF to: 004918c0 (CONDITIONAL_JUMP)  ; LAB_004918c0
    JMP 0x00492ad5                      ; 00492b43
        ;   XREF to: 00492ad5 (UNCONDITIONAL_JUMP)  ; LAB_00492ad5
    CMP ECX,-0x3                        ; 00492b45
        ;   Label: LAB_00492b45
    JNZ 0x00492c6d                      ; 00492b48
        ;   XREF to: 00492c6d (CONDITIONAL_JUMP)  ; LAB_00492c6d
    CMP dword ptr [EBX + 0x1d64],0x0    ; 00492b4e
    JZ 0x00492be8                       ; 00492b55
        ;   XREF to: 00492be8 (CONDITIONAL_JUMP)  ; LAB_00492be8
    MOV ECX,dword ptr [ESP + 0xc]       ; 00492b5b
    MOV EDI,dword ptr [ESP + 0xe8]      ; 00492b5f
    CMP EDI,ECX                         ; 00492b66
    JG 0x004918c0                       ; 00492b68
        ;   XREF to: 004918c0 (CONDITIONAL_JUMP)  ; LAB_004918c0
    MOV EBX,EDX                         ; 00492b6e
    MOV ESI,EBP                         ; 00492b70
    MOV EAX,dword ptr [ESP + 0xe4]      ; 00492b72
        ;   Label: LAB_00492b72
    MOV EDX,dword ptr [EBX + 0x1bd2fa0] ; 00492b79 | g_ScreenBufferArray | g_ScreenBufferArray[1]
    SHL EAX,0x2                         ; 00492b7f
    MOV ECX,dword ptr [ESP + 0xe4]      ; 00492b82
    ADD EDX,EAX                         ; 00492b89
    MOV EAX,dword ptr [ESP + 0x8]       ; 00492b8b
    MOV EBP,dword ptr [0x01c70f70]      ; 00492b8f | DAT_01c70f70
    SUB EAX,ECX                         ; 00492b95
    PUSH EBP                            ; 00492b97
    INC EAX                             ; 00492b98
    PUSH EAX                            ; 00492b99
    PUSH ESI                            ; 00492b9a
    MOV EBP,dword ptr [ESP + 0x10]      ; 00492b9b
    PUSH EBP                            ; 00492b9f
    PUSH EDX                            ; 00492ba0
    CALL engine_font.cpp_drawAlphaBlendedPixels_FUN_00491160 ; 00492ba1
        ;   XREF to: 00491160 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_drawAlphaBlendedPixels_FUN_00491160(uint * dest_buffer, uchar * src_indices, uint * color_table, int pixel_count, ...)
    ADD ESP,0x14                        ; 00492ba6
    MOV EAX,dword ptr [ESP + 0x8]       ; 00492ba9
    MOV EDX,dword ptr [ESP + 0xe4]      ; 00492bad
    ADD EBX,0x4                         ; 00492bb4
    SUB EAX,EDX                         ; 00492bb7
    MOV ECX,dword ptr [ESP + 0x4]       ; 00492bb9
    INC EAX                             ; 00492bbd
    INC EDI                             ; 00492bbe
    ADD ECX,EAX                         ; 00492bbf
    MOV EAX,dword ptr [ESP + 0x14]      ; 00492bc1
    MOV dword ptr [ESP + 0x4],ECX       ; 00492bc5
    LEA EBP,[ECX + EAX*0x1]             ; 00492bc9
    MOV EAX,dword ptr [ESP + 0xc]       ; 00492bcc
    MOV dword ptr [ESP + 0x4],EBP       ; 00492bd0
    CMP EDI,EAX                         ; 00492bd4
    JLE 0x00492b72                      ; 00492bd6
        ;   XREF to: 00492b72 (CONDITIONAL_JUMP)  ; LAB_00492b72
    MOV EBX,dword ptr [ESP]             ; 00492bd8
    MOV EAX,EBX                         ; 00492bdb
    ADD ESP,0xc8                        ; 00492bdd
    POP EBP                             ; 00492be3
    POP EDI                             ; 00492be4
    POP ESI                             ; 00492be5
    POP EBX                             ; 00492be6
    RET                                 ; 00492be7
    MOV EBP,dword ptr [ESP + 0xc]       ; 00492be8
        ;   Label: LAB_00492be8
    MOV EDI,dword ptr [ESP + 0xe8]      ; 00492bec
    CMP EDI,EBP                         ; 00492bf3
    JG 0x004918c0                       ; 00492bf5
        ;   XREF to: 004918c0 (CONDITIONAL_JUMP)  ; LAB_004918c0
    MOV ESI,EDX                         ; 00492bfb
    MOV EDX,dword ptr [ESP + 0xe4]      ; 00492bfd
        ;   Label: LAB_00492bfd
    MOV ECX,dword ptr [ESP + 0xe4]      ; 00492c04
    MOV EAX,dword ptr [ESI + 0x1bd2fa0] ; 00492c0b | g_ScreenBufferArray | g_ScreenBufferArray[1]
    SHL EDX,0x2                         ; 00492c11
    MOV EBP,dword ptr [ESP + 0x8]       ; 00492c14
    ADD EDX,EAX                         ; 00492c18
    CMP ECX,EBP                         ; 00492c1a
    JG 0x00492c4d                       ; 00492c1c
        ;   XREF to: 00492c4d (CONDITIONAL_JUMP)  ; LAB_00492c4d
    MOV EAX,dword ptr [ESP + 0x4]       ; 00492c1e
        ;   Label: LAB_00492c1e
    MOV AL,byte ptr [EAX]               ; 00492c22
    AND EAX,0xff                        ; 00492c24
    CMP EAX,dword ptr [EBX + 0x3188]    ; 00492c29
    JZ 0x00492c38                       ; 00492c2f
        ;   XREF to: 00492c38 (CONDITIONAL_JUMP)  ; LAB_00492c38
    MOV EAX,[0x01c70f70]                ; 00492c31 | DAT_01c70f70
    MOV dword ptr [EDX],EAX             ; 00492c36
    MOV EAX,dword ptr [ESP + 0x4]       ; 00492c38
        ;   Label: LAB_00492c38
    MOV EBP,dword ptr [ESP + 0x8]       ; 00492c3c
    INC ECX                             ; 00492c40
    INC EAX                             ; 00492c41
    ADD EDX,0x4                         ; 00492c42
    MOV dword ptr [ESP + 0x4],EAX       ; 00492c45
    CMP ECX,EBP                         ; 00492c49
    JLE 0x00492c1e                      ; 00492c4b
        ;   XREF to: 00492c1e (CONDITIONAL_JUMP)  ; LAB_00492c1e
    MOV EAX,dword ptr [ESP + 0x14]      ; 00492c4d
        ;   Label: LAB_00492c4d
    MOV EDX,dword ptr [ESP + 0x4]       ; 00492c51
    MOV ECX,dword ptr [ESP + 0xc]       ; 00492c55
    ADD ESI,0x4                         ; 00492c59
    ADD EDX,EAX                         ; 00492c5c
    INC EDI                             ; 00492c5e
    MOV dword ptr [ESP + 0x4],EDX       ; 00492c5f
    CMP EDI,ECX                         ; 00492c63
    JG 0x004918c0                       ; 00492c65
        ;   XREF to: 004918c0 (CONDITIONAL_JUMP)  ; LAB_004918c0
    JMP 0x00492bfd                      ; 00492c6b
        ;   XREF to: 00492bfd (UNCONDITIONAL_JUMP)  ; LAB_00492bfd
    MOV EAX,dword ptr [EBX + 0x1d64]    ; 00492c6d
        ;   Label: LAB_00492c6d
    MOV ESI,dword ptr [ECX*0x4 + 0x1bff920] ; 00492c73
    TEST EAX,EAX                        ; 00492c7a
    JZ 0x00492d05                       ; 00492c7c
        ;   XREF to: 00492d05 (CONDITIONAL_JUMP)  ; LAB_00492d05
    MOV EBX,dword ptr [ESP + 0xc]       ; 00492c82
    MOV EDI,dword ptr [ESP + 0xe8]      ; 00492c86
    CMP EDI,EBX                         ; 00492c8d
    JG 0x004918c0                       ; 00492c8f
        ;   XREF to: 004918c0 (CONDITIONAL_JUMP)  ; LAB_004918c0
    MOV EBX,EDX                         ; 00492c95
    MOV EDX,dword ptr [ESP + 0xe4]      ; 00492c97
        ;   Label: LAB_00492c97
    MOV EAX,dword ptr [EBX + 0x1bd2fa0] ; 00492c9e | g_ScreenBufferArray | g_ScreenBufferArray[1]
    SHL EDX,0x2                         ; 00492ca4
    MOV ECX,dword ptr [ESP + 0xe4]      ; 00492ca7
    ADD EDX,EAX                         ; 00492cae
    MOV EAX,dword ptr [ESP + 0x8]       ; 00492cb0
    SUB EAX,ECX                         ; 00492cb4
    PUSH ESI                            ; 00492cb6
    INC EAX                             ; 00492cb7
    PUSH EAX                            ; 00492cb8
    PUSH EBP                            ; 00492cb9
    MOV EAX,dword ptr [ESP + 0x10]      ; 00492cba
    PUSH EAX                            ; 00492cbe
    PUSH EDX                            ; 00492cbf
    CALL engine_font.cpp_drawAlphaBlendedPixels_FUN_00491160 ; 00492cc0
        ;   XREF to: 00491160 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_drawAlphaBlendedPixels_FUN_00491160(uint * dest_buffer, uchar * src_indices, uint * color_table, int pixel_count, ...)
    ADD ESP,0x14                        ; 00492cc5
    MOV EAX,dword ptr [ESP + 0x8]       ; 00492cc8
    SUB EAX,dword ptr [ESP + 0xe4]      ; 00492ccc
    MOV ECX,dword ptr [ESP + 0x4]       ; 00492cd3
    INC EAX                             ; 00492cd7
    ADD EBX,0x4                         ; 00492cd8
    ADD ECX,EAX                         ; 00492cdb
    MOV EAX,dword ptr [ESP + 0x14]      ; 00492cdd
    MOV dword ptr [ESP + 0x4],ECX       ; 00492ce1
    LEA EDX,[ECX + EAX*0x1]             ; 00492ce5
    INC EDI                             ; 00492ce8
    MOV ECX,dword ptr [ESP + 0xc]       ; 00492ce9
    MOV dword ptr [ESP + 0x4],EDX       ; 00492ced
    CMP EDI,ECX                         ; 00492cf1
    JLE 0x00492c97                      ; 00492cf3
        ;   XREF to: 00492c97 (CONDITIONAL_JUMP)  ; LAB_00492c97
    MOV EBX,dword ptr [ESP]             ; 00492cf5
    MOV EAX,EBX                         ; 00492cf8
    ADD ESP,0xc8                        ; 00492cfa
    POP EBP                             ; 00492d00
    POP EDI                             ; 00492d01
    POP ESI                             ; 00492d02
    POP EBX                             ; 00492d03
    RET                                 ; 00492d04
    MOV EAX,dword ptr [ESP + 0xe8]      ; 00492d05
        ;   Label: LAB_00492d05
    MOV ECX,dword ptr [ESP + 0xc]       ; 00492d0c
    MOV dword ptr [ESP + 0xa0],EAX      ; 00492d10
    CMP EAX,ECX                         ; 00492d17
    JG 0x004918c0                       ; 00492d19
        ;   XREF to: 004918c0 (CONDITIONAL_JUMP)  ; LAB_004918c0
    MOV EDI,EDX                         ; 00492d1f
    MOV EAX,dword ptr [ESP + 0xe4]      ; 00492d21
        ;   Label: LAB_00492d21
    MOV EDX,dword ptr [ESP + 0xe4]      ; 00492d28
    MOV ECX,dword ptr [EDI + 0x1bd2fa0] ; 00492d2f | g_ScreenBufferArray | g_ScreenBufferArray[1]
    SHL EAX,0x2                         ; 00492d35
    MOV EBP,dword ptr [ESP + 0x8]       ; 00492d38
    ADD ECX,EAX                         ; 00492d3c
    CMP EDX,EBP                         ; 00492d3e
    JG 0x00492d6c                       ; 00492d40
        ;   XREF to: 00492d6c (CONDITIONAL_JUMP)  ; LAB_00492d6c
    MOV EAX,dword ptr [ESP + 0x4]       ; 00492d42
        ;   Label: LAB_00492d42
    MOV AL,byte ptr [EAX]               ; 00492d46
    AND EAX,0xff                        ; 00492d48
    CMP EAX,dword ptr [EBX + 0x3188]    ; 00492d4d
    JZ 0x00492d57                       ; 00492d53
        ;   XREF to: 00492d57 (CONDITIONAL_JUMP)  ; LAB_00492d57
    MOV dword ptr [ECX],ESI             ; 00492d55
    MOV EAX,dword ptr [ESP + 0x4]       ; 00492d57
        ;   Label: LAB_00492d57
    MOV EBP,dword ptr [ESP + 0x8]       ; 00492d5b
    INC EDX                             ; 00492d5f
    INC EAX                             ; 00492d60
    ADD ECX,0x4                         ; 00492d61
    MOV dword ptr [ESP + 0x4],EAX       ; 00492d64
    CMP EDX,EBP                         ; 00492d68
    JLE 0x00492d42                      ; 00492d6a
        ;   XREF to: 00492d42 (CONDITIONAL_JUMP)  ; LAB_00492d42
    MOV EBP,dword ptr [ESP + 0xa0]      ; 00492d6c
        ;   Label: LAB_00492d6c
    MOV EAX,dword ptr [ESP + 0x14]      ; 00492d73
    MOV EDX,dword ptr [ESP + 0x4]       ; 00492d77
    MOV ECX,dword ptr [ESP + 0xc]       ; 00492d7b
    ADD EDI,0x4                         ; 00492d7f
    INC EBP                             ; 00492d82
    ADD EDX,EAX                         ; 00492d83
    MOV dword ptr [ESP + 0xa0],EBP      ; 00492d85
    MOV dword ptr [ESP + 0x4],EDX       ; 00492d8c
    CMP EBP,ECX                         ; 00492d90
    JG 0x004918c0                       ; 00492d92
        ;   XREF to: 004918c0 (CONDITIONAL_JUMP)  ; LAB_004918c0
    JMP 0x00492d21                      ; 00492d98
        ;   XREF to: 00492d21 (UNCONDITIONAL_JUMP)  ; LAB_00492d21

