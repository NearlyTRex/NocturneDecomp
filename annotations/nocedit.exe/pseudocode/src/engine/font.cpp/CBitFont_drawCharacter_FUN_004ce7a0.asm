; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_font_cpp_CBitFont_drawCharacter_FUN_004ce7a0(CBitFont *this_ptr,int character_code,int x,int y,int color_mode,int color_value)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   character_code
; int              Stack[0xc]:4   x
; int              Stack[0x10]:4   y
; int              Stack[0x14]:4   color_mode
; int              Stack[0x18]:4   color_value
; Local Variables:
; byte *           Stack[-0xd4]:4  local_d4
; int              Stack[-0xd0]:4  local_d0
; int              Stack[-0xcc]:4  local_cc
; int              Stack[-0xc8]:4  local_c8
; int              Stack[-0xc4]:4  local_c4
; int              Stack[-0xc0]:4  local_c0
; int              Stack[-0xbc]:4  local_bc
; int              Stack[-0xb8]:4  local_b8
; int              Stack[-0xb4]:4  local_b4
; int              Stack[-0xb0]:4  local_b0
; int              Stack[-0x90]:4  local_90
; int              Stack[-0x74]:4  local_74
; int              Stack[-0x58]:4  local_58
; int              Stack[-0x34]:4  local_34
; int              Stack[-0x30]:4  local_30
; int              Stack[-0x2c]:4  local_2c
; int              Stack[-0x28]:4  local_28
;
; XREF[4]:
;   core_script.cpp_CScript_drawLine_FUN_005664d0 at 00566616
;   engine_font.cpp_CBitFont_drawText_FUN_004cda80 at 004cdbca
;   engine_font.cpp_CBitFont_showExtendedFontTest_FUN_004d0850 at 004d08d0
;   engine_font.cpp_CBitFont_showFontTest_FUN_004d04b0 at 004d050d
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   int g_CurrentAlphaValue = 0xff
;   _MMX_INTEGER g_RedMask16
;   _MMX_INTEGER g_GreenMask16
;   _MMX_INTEGER g_BlueMask16
;   void*[1200] g_ScreenBufferArray
;   undefined4 g_ScreenBufferArray[1]
;   ushort[256] g_ColorTable16
;   uint[256] g_ColorTable32
;   _BIT_INTEGER32 g_RedBitPosition
;   int g_RedScaleFactor
;   _BIT_INTEGER32 g_RedBitCount
;   _BIT_INTEGER32 g_GreenBitPosition
;   int g_GreenScaleFactor
;   _BIT_INTEGER32 g_GreenBitCount
;   ... and 12 more
;
; Called Functions:
;   engine_font.cpp_CBitFont_render3DCharacter_FUN_004ce2d0
;   engine_font.cpp_clipCharacter_FUN_004ccdd0
;   engine_font.cpp_drawAlphaBlendedPixels_FUN_004ce240
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ce7a0
        ;   Label: engine_font.cpp_CBitFont_drawCharacter_FUN_004ce7a0
    PUSH ESI                            ; 004ce7a1
    PUSH EDI                            ; 004ce7a2
    PUSH EBP                            ; 004ce7a3
    SUB ESP,0xc8                        ; 004ce7a4
    MOV EBX,dword ptr [ESP + 0xdc]      ; 004ce7aa
    MOV EDI,dword ptr [ESP + 0xe0]      ; 004ce7b1
    MOV ECX,dword ptr [ESP + 0xf0]      ; 004ce7b8
    TEST EDI,EDI                        ; 004ce7bf
    JL 0x004ce9b0                       ; 004ce7c1
        ;   XREF to: 004ce9b0 (CONDITIONAL_JUMP)  ; LAB_004ce9b0
    CMP EDI,0x100                       ; 004ce7c7
    JGE 0x004ce9b0                      ; 004ce7cd
        ;   XREF to: 004ce9b0 (CONDITIONAL_JUMP)  ; LAB_004ce9b0
    MOV EAX,dword ptr [EBX + EDI*0x4 + 0x2568] ; 004ce7d3
    ADD EAX,dword ptr [EBX + 0x3174]    ; 004ce7da
    MOV ESI,dword ptr [EBX + EDI*0x4 + 0x1d68] ; 004ce7e0
    MOV dword ptr [ESP],EAX             ; 004ce7e7
    TEST ESI,ESI                        ; 004ce7ea
    JZ 0x004ce9bf                       ; 004ce7ec
        ;   XREF to: 004ce9bf (CONDITIONAL_JUMP)  ; LAB_004ce9bf
    CMP ECX,-0x1                        ; 004ce7f2
    JNZ 0x004ce9ce                      ; 004ce7f5
        ;   XREF to: 004ce9ce (CONDITIONAL_JUMP)  ; LAB_004ce9ce
    LEA EDX,[EDI*0x4 + 0x0]             ; 004ce7fb
        ;   Label: LAB_004ce7fb
    ADD EDX,EBX                         ; 004ce802
    MOV EAX,dword ptr [EDX + 0x1d68]    ; 004ce804
    MOV dword ptr [ESP + 0x4],EAX       ; 004ce80a
    MOV ECX,dword ptr [ESP + 0xe8]      ; 004ce80e
    MOV EAX,dword ptr [EDX + 0x2d68]    ; 004ce815
    ADD ECX,EAX                         ; 004ce81b
    MOV dword ptr [ESP + 0xe8],ECX      ; 004ce81d
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004ce824
    ADD EAX,dword ptr [EDX + 0x2568]    ; 004ce82b
    DEC EAX                             ; 004ce831
    MOV dword ptr [ESP + 0x8],EAX       ; 004ce832
    MOV EBP,dword ptr [EDX + 0x2968]    ; 004ce836
    LEA EAX,[ECX + EBP*0x1 + -0x1]      ; 004ce83c
    MOV dword ptr [ESP + 0xc],EAX       ; 004ce840
    MOV EAX,dword ptr [EDX + 0x2168]    ; 004ce844
    MOV ESI,EAX                         ; 004ce84a
    MOV dword ptr [ESP + 0x10],EAX      ; 004ce84c
    MOV EAX,dword ptr [EBX + 0x3184]    ; 004ce850
    MOV ESI,dword ptr [EBX + ESI*0x4 + 0x154] ; 004ce856
    TEST EAX,EAX                        ; 004ce85d
    JNZ 0x004cea00                      ; 004ce85f
        ;   XREF to: 004cea00 (CONDITIONAL_JUMP)  ; LAB_004cea00
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004ce865
    MOV EBP,dword ptr [0x02d02558]      ; 004ce86c | g_ClipLeft
    MOV ECX,dword ptr [EDX + 0x2568]    ; 004ce872
    MOV EDX,dword ptr [EDX + 0x2968]    ; 004ce878
    CMP EAX,EBP                         ; 004ce87e
    JL 0x004ce9a0                       ; 004ce880
        ;   XREF to: 004ce9a0 (CONDITIONAL_JUMP)  ; LAB_004ce9a0
    MOV EAX,dword ptr [ESP + 0xe8]      ; 004ce886
    CMP EAX,dword ptr [0x02d0255c]      ; 004ce88d | g_ClipTop
    JL 0x004ce9a0                       ; 004ce893
        ;   XREF to: 004ce9a0 (CONDITIONAL_JUMP)  ; LAB_004ce9a0
    MOV EAX,[0x02d02560]                ; 004ce899 | g_ClipRight
    INC EAX                             ; 004ce89e
    SUB EAX,ECX                         ; 004ce89f
    CMP EAX,dword ptr [ESP + 0xe4]      ; 004ce8a1
    JL 0x004ce9a0                       ; 004ce8a8
        ;   XREF to: 004ce9a0 (CONDITIONAL_JUMP)  ; LAB_004ce9a0
    MOV EAX,[0x02d02564]                ; 004ce8ae | g_ClipBottom
    INC EAX                             ; 004ce8b3
    MOV EBP,dword ptr [ESP + 0xe8]      ; 004ce8b4
    SUB EAX,EDX                         ; 004ce8bb
    CMP EAX,EBP                         ; 004ce8bd
    JL 0x004ce9a0                       ; 004ce8bf
        ;   XREF to: 004ce9a0 (CONDITIONAL_JUMP)  ; LAB_004ce9a0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004ce8c5
        ;   Label: LAB_004ce8c5
    SUB EAX,dword ptr [ESP + 0xe4]      ; 004ce8c9
    INC EAX                             ; 004ce8d0
    SUB ESI,EAX                         ; 004ce8d1
    MOV ECX,dword ptr [EBX + 0x318c]    ; 004ce8d3
    MOV dword ptr [ESP + 0x14],ESI      ; 004ce8d9
    TEST ECX,ECX                        ; 004ce8dd
    JZ 0x004ce8ee                       ; 004ce8df
        ;   XREF to: 004ce8ee (CONDITIONAL_JUMP)  ; LAB_004ce8ee
    CMP dword ptr [0x02d03e94],0x0      ; 004ce8e1 | g_UseExternalRenderer
    JNZ 0x004cea40                      ; 004ce8e8
        ;   XREF to: 004cea40 (CONDITIONAL_JUMP)  ; LAB_004cea40
    MOV EDI,dword ptr [0x0067939c]      ; 004ce8ee | g_BitsPerPixel
        ;   Label: LAB_004ce8ee
    CMP EDI,0x8                         ; 004ce8f4
    JNZ 0x004cec40                      ; 004ce8f7
        ;   XREF to: 004cec40 (CONDITIONAL_JUMP)  ; LAB_004cec40
    MOV ECX,dword ptr [ESP + 0xec]      ; 004ce8fd
    CMP ECX,-0x1                        ; 004ce904
    JNZ 0x004cea7c                      ; 004ce907
        ;   XREF to: 004cea7c (CONDITIONAL_JUMP)  ; LAB_004cea7c
    MOV EAX,dword ptr [ESP + 0xe8]      ; 004ce90d
    MOV ESI,dword ptr [ESP + 0xc]       ; 004ce914
    MOV dword ptr [ESP + 0x18],EAX      ; 004ce918
    CMP EAX,ESI                         ; 004ce91c
    JG 0x004ce9a0                       ; 004ce91e
        ;   XREF to: 004ce9a0 (CONDITIONAL_JUMP)  ; LAB_004ce9a0
    LEA ESI,[EAX*0x4 + 0x0]             ; 004ce924
    MOV EDI,dword ptr [ESP + 0xe4]      ; 004ce92b
        ;   Label: LAB_004ce92b
    MOV EBP,dword ptr [ESP + 0x8]       ; 004ce932
    MOV ECX,dword ptr [ESI + 0x2cf6a9c] ; 004ce936 | g_ScreenBufferArray | g_ScreenBufferArray[1]
    MOV EDX,EDI                         ; 004ce93c
    ADD ECX,EDI                         ; 004ce93e
    CMP EDI,EBP                         ; 004ce940
    JG 0x004ce972                       ; 004ce942
        ;   XREF to: 004ce972 (CONDITIONAL_JUMP)  ; LAB_004ce972
    MOV EAX,dword ptr [ESP + 0x4]       ; 004ce944
        ;   Label: LAB_004ce944
    MOV AL,byte ptr [EAX]               ; 004ce948
    AND EAX,0xff                        ; 004ce94a
    CMP EAX,dword ptr [EBX + 0x3188]    ; 004ce94f
    JZ 0x004ce95f                       ; 004ce955
        ;   XREF to: 004ce95f (CONDITIONAL_JUMP)  ; LAB_004ce95f
    MOV EAX,dword ptr [ESP + 0x4]       ; 004ce957
    MOV AL,byte ptr [EAX]               ; 004ce95b
    MOV byte ptr [ECX],AL               ; 004ce95d
    MOV EAX,dword ptr [ESP + 0x4]       ; 004ce95f
        ;   Label: LAB_004ce95f
    MOV EDI,dword ptr [ESP + 0x8]       ; 004ce963
    INC ECX                             ; 004ce967
    INC EAX                             ; 004ce968
    INC EDX                             ; 004ce969
    MOV dword ptr [ESP + 0x4],EAX       ; 004ce96a
    CMP EDX,EDI                         ; 004ce96e
    JLE 0x004ce944                      ; 004ce970
        ;   XREF to: 004ce944 (CONDITIONAL_JUMP)  ; LAB_004ce944
    MOV EAX,dword ptr [ESP + 0x18]      ; 004ce972
        ;   Label: LAB_004ce972
    MOV EDX,dword ptr [ESP + 0x4]       ; 004ce976
    INC EAX                             ; 004ce97a
    MOV ECX,dword ptr [ESP + 0xc]       ; 004ce97b
    MOV dword ptr [ESP + 0x18],EAX      ; 004ce97f
    MOV EAX,dword ptr [ESP + 0x14]      ; 004ce983
    ADD ESI,0x4                         ; 004ce987
    ADD EDX,EAX                         ; 004ce98a
    MOV EAX,dword ptr [ESP + 0x18]      ; 004ce98c
    MOV dword ptr [ESP + 0x4],EDX       ; 004ce990
    CMP EAX,ECX                         ; 004ce994
    JLE 0x004ce92b                      ; 004ce996
        ;   XREF to: 004ce92b (CONDITIONAL_JUMP)  ; LAB_004ce92b
    LEA EAX,[EAX]                       ; 004ce998
    MOV EDX,EDX                         ; 004ce99e
    MOV EBX,dword ptr [ESP]             ; 004ce9a0
        ;   Label: LAB_004ce9a0
    MOV EAX,EBX                         ; 004ce9a3
    ADD ESP,0xc8                        ; 004ce9a5
    POP EBP                             ; 004ce9ab
    POP EDI                             ; 004ce9ac
    POP ESI                             ; 004ce9ad
    POP EBX                             ; 004ce9ae
    RET                                 ; 004ce9af
    XOR EBX,EBX                         ; 004ce9b0
        ;   Label: LAB_004ce9b0
    MOV EAX,EBX                         ; 004ce9b2
    ADD ESP,0xc8                        ; 004ce9b4
    POP EBP                             ; 004ce9ba
    POP EDI                             ; 004ce9bb
    POP ESI                             ; 004ce9bc
    POP EBX                             ; 004ce9bd
    RET                                 ; 004ce9be
    MOV EBX,EAX                         ; 004ce9bf
        ;   Label: LAB_004ce9bf
    MOV EAX,EBX                         ; 004ce9c1
    ADD ESP,0xc8                        ; 004ce9c3
    POP EBP                             ; 004ce9c9
    POP EDI                             ; 004ce9ca
    POP ESI                             ; 004ce9cb
    POP EBX                             ; 004ce9cc
    RET                                 ; 004ce9cd
    PUSH -0x1                           ; 004ce9ce
        ;   Label: LAB_004ce9ce
    MOV EAX,dword ptr [ESP + 0xec]      ; 004ce9d0
    MOV EBP,dword ptr [EBX + 0x3180]    ; 004ce9d7
    PUSH ECX                            ; 004ce9dd
    ADD EAX,EBP                         ; 004ce9de
    MOV EDX,dword ptr [EBX + 0x317c]    ; 004ce9e0
    PUSH EAX                            ; 004ce9e6
    MOV EAX,dword ptr [ESP + 0xf0]      ; 004ce9e7
    ADD EAX,EDX                         ; 004ce9ee
    PUSH EAX                            ; 004ce9f0
    PUSH EDI                            ; 004ce9f1
    PUSH EBX                            ; 004ce9f2
    CALL engine_font.cpp_CBitFont_drawCharacter_FUN_004ce7a0 ; 004ce9f3
        ;   XREF to: 004ce7a0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawCharacter_FUN_004ce7a0(CBitFont * this_ptr, int character_code, int x, int y, ...)
    ADD ESP,0x18                        ; 004ce9f8
    JMP 0x004ce7fb                      ; 004ce9fb
        ;   XREF to: 004ce7fb (UNCONDITIONAL_JUMP)  ; LAB_004ce7fb
    PUSH ESI                            ; 004cea00
        ;   Label: LAB_004cea00
    LEA EAX,[ESP + 0x10]                ; 004cea01
    PUSH EAX                            ; 004cea05
    LEA EAX,[ESP + 0x10]                ; 004cea06
    PUSH EAX                            ; 004cea0a
    LEA EAX,[ESP + 0xf4]                ; 004cea0b
    PUSH EAX                            ; 004cea12
    LEA EAX,[ESP + 0xf4]                ; 004cea13
    PUSH EAX                            ; 004cea1a
    LEA EAX,[ESP + 0x18]                ; 004cea1b
    PUSH EAX                            ; 004cea1f
    CALL engine_font.cpp_clipCharacter_FUN_004ccdd0 ; 004cea20
        ;   XREF to: 004ccdd0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_clipCharacter_FUN_004ccdd0(int * bitmap_offset, int * left_x, int * top_y, int * right_x, ...)
    ADD ESP,0x18                        ; 004cea25
    TEST EAX,EAX                        ; 004cea28
    JZ 0x004ce8c5                       ; 004cea2a
        ;   XREF to: 004ce8c5 (CONDITIONAL_JUMP)  ; LAB_004ce8c5
    MOV EBX,dword ptr [ESP]             ; 004cea30
    MOV EAX,EBX                         ; 004cea33
    ADD ESP,0xc8                        ; 004cea35
    POP EBP                             ; 004cea3b
    POP EDI                             ; 004cea3c
    POP ESI                             ; 004cea3d
    POP EBX                             ; 004cea3e
    RET                                 ; 004cea3f
    MOV EBP,dword ptr [ESP + 0xec]      ; 004cea40
        ;   Label: LAB_004cea40
    PUSH EBP                            ; 004cea47
    MOV EAX,dword ptr [ESP + 0x10]      ; 004cea48
    PUSH EAX                            ; 004cea4c
    MOV EDX,dword ptr [ESP + 0x10]      ; 004cea4d
    PUSH EDX                            ; 004cea51
    MOV ECX,dword ptr [ESP + 0xf4]      ; 004cea52
    PUSH ECX                            ; 004cea59
    MOV ESI,dword ptr [ESP + 0xf4]      ; 004cea5a
    PUSH ESI                            ; 004cea61
    PUSH EDI                            ; 004cea62
    PUSH EBX                            ; 004cea63
    CALL engine_font.cpp_CBitFont_render3DCharacter_FUN_004ce2d0 ; 004cea64
        ;   XREF to: 004ce2d0 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_render3DCharacter_FUN_004ce2d0(CBitFont * this_ptr, int character_code, int x, int y, ...)
    ADD ESP,0x1c                        ; 004cea69
    MOV EBX,dword ptr [ESP]             ; 004cea6c
    MOV EAX,EBX                         ; 004cea6f
    ADD ESP,0xc8                        ; 004cea71
    POP EBP                             ; 004cea77
    POP EDI                             ; 004cea78
    POP ESI                             ; 004cea79
    POP EBX                             ; 004cea7a
    RET                                 ; 004cea7b
    CMP ECX,-0x2                        ; 004cea7c
        ;   Label: LAB_004cea7c
    JNZ 0x004ceb15                      ; 004cea7f
        ;   XREF to: 004ceb15 (CONDITIONAL_JUMP)  ; LAB_004ceb15
    MOV EAX,dword ptr [ESP + 0xe8]      ; 004cea85
    MOV ECX,dword ptr [ESP + 0xc]       ; 004cea8c
    MOV dword ptr [ESP + 0x1c],EAX      ; 004cea90
    CMP EAX,ECX                         ; 004cea94
    JG 0x004ce9a0                       ; 004cea96
        ;   XREF to: 004ce9a0 (CONDITIONAL_JUMP)  ; LAB_004ce9a0
    LEA ESI,[EAX*0x4 + 0x0]             ; 004cea9c
    MOV EDI,dword ptr [ESP + 0xe4]      ; 004ceaa3
        ;   Label: LAB_004ceaa3
    MOV EBP,dword ptr [ESP + 0x8]       ; 004ceaaa
    MOV EDX,dword ptr [ESI + 0x2cf6a9c] ; 004ceaae | g_ScreenBufferArray | g_ScreenBufferArray[1]
    MOV ECX,EDI                         ; 004ceab4
    ADD EDX,EDI                         ; 004ceab6
    CMP EDI,EBP                         ; 004ceab8
    JG 0x004ceae9                       ; 004ceaba
        ;   XREF to: 004ceae9 (CONDITIONAL_JUMP)  ; LAB_004ceae9
    MOV EAX,dword ptr [ESP + 0x4]       ; 004ceabc
        ;   Label: LAB_004ceabc
    MOV AL,byte ptr [EAX]               ; 004ceac0
    AND EAX,0xff                        ; 004ceac2
    CMP EAX,dword ptr [EBX + 0x3188]    ; 004ceac7
    JZ 0x004cead6                       ; 004ceacd
        ;   XREF to: 004cead6 (CONDITIONAL_JUMP)  ; LAB_004cead6
    MOV AL,[0x02d7b410]                 ; 004ceacf | g_ShadowColor8
    MOV byte ptr [EDX],AL               ; 004cead4
    MOV EAX,dword ptr [ESP + 0x4]       ; 004cead6
        ;   Label: LAB_004cead6
    MOV EDI,dword ptr [ESP + 0x8]       ; 004ceada
    INC EDX                             ; 004ceade
    INC EAX                             ; 004ceadf
    INC ECX                             ; 004ceae0
    MOV dword ptr [ESP + 0x4],EAX       ; 004ceae1
    CMP ECX,EDI                         ; 004ceae5
    JLE 0x004ceabc                      ; 004ceae7
        ;   XREF to: 004ceabc (CONDITIONAL_JUMP)  ; LAB_004ceabc
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004ceae9
        ;   Label: LAB_004ceae9
    MOV EDX,dword ptr [ESP + 0x4]       ; 004ceaed
    INC EAX                             ; 004ceaf1
    MOV ECX,dword ptr [ESP + 0xc]       ; 004ceaf2
    MOV dword ptr [ESP + 0x1c],EAX      ; 004ceaf6
    MOV EAX,dword ptr [ESP + 0x14]      ; 004ceafa
    ADD ESI,0x4                         ; 004ceafe
    ADD EDX,EAX                         ; 004ceb01
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004ceb03
    MOV dword ptr [ESP + 0x4],EDX       ; 004ceb07
    CMP EAX,ECX                         ; 004ceb0b
    JG 0x004ce9a0                       ; 004ceb0d
        ;   XREF to: 004ce9a0 (CONDITIONAL_JUMP)  ; LAB_004ce9a0
    JMP 0x004ceaa3                      ; 004ceb13
        ;   XREF to: 004ceaa3 (UNCONDITIONAL_JUMP)  ; LAB_004ceaa3
    CMP ECX,-0x3                        ; 004ceb15
        ;   Label: LAB_004ceb15
    JNZ 0x004cebae                      ; 004ceb18
        ;   XREF to: 004cebae (CONDITIONAL_JUMP)  ; LAB_004cebae
    MOV EAX,dword ptr [ESP + 0xe8]      ; 004ceb1e
    MOV EDX,dword ptr [ESP + 0xc]       ; 004ceb25
    MOV dword ptr [ESP + 0x20],EAX      ; 004ceb29
    CMP EAX,EDX                         ; 004ceb2d
    JG 0x004ce9a0                       ; 004ceb2f
        ;   XREF to: 004ce9a0 (CONDITIONAL_JUMP)  ; LAB_004ce9a0
    LEA ESI,[EAX*0x4 + 0x0]             ; 004ceb35
    MOV EDI,dword ptr [ESP + 0xe4]      ; 004ceb3c
        ;   Label: LAB_004ceb3c
    MOV EBP,dword ptr [ESP + 0x8]       ; 004ceb43
    MOV EDX,dword ptr [ESI + 0x2cf6a9c] ; 004ceb47 | g_ScreenBufferArray | g_ScreenBufferArray[1]
    MOV ECX,EDI                         ; 004ceb4d
    ADD EDX,EDI                         ; 004ceb4f
    CMP EDI,EBP                         ; 004ceb51
    JG 0x004ceb82                       ; 004ceb53
        ;   XREF to: 004ceb82 (CONDITIONAL_JUMP)  ; LAB_004ceb82
    MOV EAX,dword ptr [ESP + 0x4]       ; 004ceb55
        ;   Label: LAB_004ceb55
    MOV AL,byte ptr [EAX]               ; 004ceb59
    AND EAX,0xff                        ; 004ceb5b
    CMP EAX,dword ptr [EBX + 0x3188]    ; 004ceb60
    JZ 0x004ceb6f                       ; 004ceb66
        ;   XREF to: 004ceb6f (CONDITIONAL_JUMP)  ; LAB_004ceb6f
    MOV AL,[0x02d7b424]                 ; 004ceb68 | g_DefaultTextColor
    MOV byte ptr [EDX],AL               ; 004ceb6d
    MOV EAX,dword ptr [ESP + 0x4]       ; 004ceb6f
        ;   Label: LAB_004ceb6f
    MOV EDI,dword ptr [ESP + 0x8]       ; 004ceb73
    INC EDX                             ; 004ceb77
    INC EAX                             ; 004ceb78
    INC ECX                             ; 004ceb79
    MOV dword ptr [ESP + 0x4],EAX       ; 004ceb7a
    CMP ECX,EDI                         ; 004ceb7e
    JLE 0x004ceb55                      ; 004ceb80
        ;   XREF to: 004ceb55 (CONDITIONAL_JUMP)  ; LAB_004ceb55
    MOV EAX,dword ptr [ESP + 0x20]      ; 004ceb82
        ;   Label: LAB_004ceb82
    MOV EDX,dword ptr [ESP + 0x4]       ; 004ceb86
    INC EAX                             ; 004ceb8a
    MOV ECX,dword ptr [ESP + 0xc]       ; 004ceb8b
    MOV dword ptr [ESP + 0x20],EAX      ; 004ceb8f
    MOV EAX,dword ptr [ESP + 0x14]      ; 004ceb93
    ADD ESI,0x4                         ; 004ceb97
    ADD EDX,EAX                         ; 004ceb9a
    MOV EAX,dword ptr [ESP + 0x20]      ; 004ceb9c
    MOV dword ptr [ESP + 0x4],EDX       ; 004ceba0
    CMP EAX,ECX                         ; 004ceba4
    JG 0x004ce9a0                       ; 004ceba6
        ;   XREF to: 004ce9a0 (CONDITIONAL_JUMP)  ; LAB_004ce9a0
    JMP 0x004ceb3c                      ; 004cebac
        ;   XREF to: 004ceb3c (UNCONDITIONAL_JUMP)  ; LAB_004ceb3c
    MOV EAX,dword ptr [ESP + 0xe8]      ; 004cebae
        ;   Label: LAB_004cebae
    MOV EBP,dword ptr [ESP + 0xc]       ; 004cebb5
    MOV dword ptr [ESP + 0x24],EAX      ; 004cebb9
    CMP EAX,EBP                         ; 004cebbd
    JG 0x004ce9a0                       ; 004cebbf
        ;   XREF to: 004ce9a0 (CONDITIONAL_JUMP)  ; LAB_004ce9a0
    LEA ESI,[EAX*0x4 + 0x0]             ; 004cebc5
    MOV EDI,dword ptr [ESP + 0xe4]      ; 004cebcc
        ;   Label: LAB_004cebcc
    MOV EBP,dword ptr [ESP + 0x8]       ; 004cebd3
    MOV ECX,dword ptr [ESI + 0x2cf6a9c] ; 004cebd7 | g_ScreenBufferArray | g_ScreenBufferArray[1]
    MOV EDX,EDI                         ; 004cebdd
    ADD ECX,EDI                         ; 004cebdf
    CMP EDI,EBP                         ; 004cebe1
    JG 0x004cec14                       ; 004cebe3
        ;   XREF to: 004cec14 (CONDITIONAL_JUMP)  ; LAB_004cec14
    MOV EAX,dword ptr [ESP + 0x4]       ; 004cebe5
        ;   Label: LAB_004cebe5
    MOV AL,byte ptr [EAX]               ; 004cebe9
    AND EAX,0xff                        ; 004cebeb
    CMP EAX,dword ptr [EBX + 0x3188]    ; 004cebf0
    JZ 0x004cec01                       ; 004cebf6
        ;   XREF to: 004cec01 (CONDITIONAL_JUMP)  ; LAB_004cec01
    MOV AL,byte ptr [ESP + 0xec]        ; 004cebf8
    MOV byte ptr [ECX],AL               ; 004cebff
    MOV EAX,dword ptr [ESP + 0x4]       ; 004cec01
        ;   Label: LAB_004cec01
    MOV EDI,dword ptr [ESP + 0x8]       ; 004cec05
    INC ECX                             ; 004cec09
    INC EAX                             ; 004cec0a
    INC EDX                             ; 004cec0b
    MOV dword ptr [ESP + 0x4],EAX       ; 004cec0c
    CMP EDX,EDI                         ; 004cec10
    JLE 0x004cebe5                      ; 004cec12
        ;   XREF to: 004cebe5 (CONDITIONAL_JUMP)  ; LAB_004cebe5
    MOV EAX,dword ptr [ESP + 0x24]      ; 004cec14
        ;   Label: LAB_004cec14
    MOV EDX,dword ptr [ESP + 0x4]       ; 004cec18
    INC EAX                             ; 004cec1c
    MOV ECX,dword ptr [ESP + 0xc]       ; 004cec1d
    MOV dword ptr [ESP + 0x24],EAX      ; 004cec21
    MOV EAX,dword ptr [ESP + 0x14]      ; 004cec25
    ADD ESI,0x4                         ; 004cec29
    ADD EDX,EAX                         ; 004cec2c
    MOV EAX,dword ptr [ESP + 0x24]      ; 004cec2e
    MOV dword ptr [ESP + 0x4],EDX       ; 004cec32
    CMP EAX,ECX                         ; 004cec36
    JG 0x004ce9a0                       ; 004cec38
        ;   XREF to: 004ce9a0 (CONDITIONAL_JUMP)  ; LAB_004ce9a0
    JMP 0x004cebcc                      ; 004cec3e
        ;   XREF to: 004cebcc (UNCONDITIONAL_JUMP)  ; LAB_004cebcc
    MOV EDX,dword ptr [ESP + 0xe8]      ; 004cec40
        ;   Label: LAB_004cec40
    SHL EDX,0x2                         ; 004cec47
    CMP EDI,0x10                        ; 004cec4a
    JNZ 0x004cf9ac                      ; 004cec4d
        ;   XREF to: 004cf9ac (CONDITIONAL_JUMP)  ; LAB_004cf9ac
    MOV ESI,dword ptr [ESP + 0xec]      ; 004cec53
    CMP ESI,-0x1                        ; 004cec5a
    JNZ 0x004cefc4                      ; 004cec5d
        ;   XREF to: 004cefc4 (CONDITIONAL_JUMP)  ; LAB_004cefc4
    CMP dword ptr [EBX + 0x1d64],0x0    ; 004cec63
    JZ 0x004cef30                       ; 004cec6a
        ;   XREF to: 004cef30 (CONDITIONAL_JUMP)  ; LAB_004cef30
    MOV EAX,dword ptr [ESP + 0xe8]      ; 004cec70
    MOV EDX,dword ptr [ESP + 0xc]       ; 004cec77
    MOV dword ptr [ESP + 0x28],EAX      ; 004cec7b
    CMP EAX,EDX                         ; 004cec7f
    JG 0x004ce9a0                       ; 004cec81
        ;   XREF to: 004ce9a0 (CONDITIONAL_JUMP)  ; LAB_004ce9a0
    MOV EAX,dword ptr [ESP + 0x10]      ; 004cec87
    SHL EAX,0xa                         ; 004cec8b
    LEA EDX,[EBX + EAX*0x1]             ; 004cec8e
    MOV dword ptr [ESP + 0x40],EDX      ; 004cec91
    MOV EDX,dword ptr [ESP + 0x10]      ; 004cec95
    LEA EAX,[EDX*0x4 + 0x0]             ; 004cec99
    SUB EAX,EDX                         ; 004ceca0
    SHL EAX,0x8                         ; 004ceca2
    ADD EBX,EAX                         ; 004ceca5
    MOV EAX,dword ptr [ESP + 0x28]      ; 004ceca7
    SHL EAX,0x2                         ; 004cecab
    MOV dword ptr [ESP + 0x30],EBX      ; 004cecae
    MOV dword ptr [ESP + 0xb0],EAX      ; 004cecb2
    MOV EBX,dword ptr [ESP + 0xb0]      ; 004cecb9
        ;   Label: LAB_004cecb9
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004cecc0
    MOV EBX,dword ptr [EBX + 0x2cf6a9c] ; 004cecc7 | g_ScreenBufferArray | g_ScreenBufferArray[1]
    ADD EAX,EAX                         ; 004ceccd
    ADD EBX,EAX                         ; 004ceccf
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004cecd1
    MOV EDI,dword ptr [ESP + 0x8]       ; 004cecd8
    MOV dword ptr [ESP + 0x2c],EAX      ; 004cecdc
    CMP EAX,EDI                         ; 004cece0
    JG 0x004ceef7                       ; 004cece2
        ;   XREF to: 004ceef7 (CONDITIONAL_JUMP)  ; LAB_004ceef7
    MOV ECX,dword ptr [ESP + 0x4]       ; 004cece8
        ;   Label: LAB_004cece8
    MOV CL,byte ptr [ECX]               ; 004cecec
    AND ECX,0xff                        ; 004cecee
    MOV ESI,dword ptr [ESP + 0x30]      ; 004cecf4
    LEA EAX,[ECX + ECX*0x2]             ; 004cecf8
    ADD EAX,ESI                         ; 004cecfb
    MOV AL,byte ptr [EAX + 0x164]       ; 004cecfd
    MOV EDX,dword ptr [0x006793b4]      ; 004ced03 | g_CurrentAlphaValue
    AND EAX,0xff                        ; 004ced09
    IMUL EDX,EAX                        ; 004ced0e
    MOV EAX,EDX                         ; 004ced11
    SAR EDX,0x1f                        ; 004ced13
    SHL EDX,0x8                         ; 004ced16
    SBB EAX,EDX                         ; 004ced19
    SAR EAX,0x8                         ; 004ced1b
    TEST EAX,EAX                        ; 004ced1e
    JZ 0x004ceed6                       ; 004ced20
        ;   XREF to: 004ceed6 (CONDITIONAL_JUMP)  ; LAB_004ceed6
    MOV EDI,dword ptr [ESP + 0x40]      ; 004ced26
    SHL ECX,0x2                         ; 004ced2a
    MOV DX,word ptr [EBX]               ; 004ced2d
    ADD EDI,ECX                         ; 004ced30
    MOV EBP,dword ptr [0x00682748]      ; 004ced32 | g_RedMask16
    MOV dword ptr [ESP + 0xc0],EDX      ; 004ced38
    MOV EDX,dword ptr [EDI + 0xd64]     ; 004ced3f
    MOV CL,byte ptr [0x02d01f24]        ; 004ced45 | g_RedBitPosition
    AND EDX,EBP                         ; 004ced4b
    SHR EDX,CL                          ; 004ced4d
    MOV CL,byte ptr [0x02d01f2c]        ; 004ced4f | g_RedBitCount
    MOV ESI,dword ptr [EDI + 0xd64]     ; 004ced55
    SHL EDX,CL                          ; 004ced5b
    AND ESI,dword ptr [0x00682750]      ; 004ced5d | g_GreenMask16
    MOV CL,byte ptr [0x02d01f30]        ; 004ced63 | g_GreenBitPosition
    SHR ESI,CL                          ; 004ced69
    MOV CL,byte ptr [0x02d01f38]        ; 004ced6b | g_GreenBitCount
    SHL ESI,CL                          ; 004ced71
    AND ESI,0xff                        ; 004ced73
    IMUL ESI,EAX                        ; 004ced79
    MOV EBP,dword ptr [EDI + 0xd64]     ; 004ced7c
    AND EBP,dword ptr [0x00682758]      ; 004ced82 | g_BlueMask16
    MOV CL,byte ptr [0x02d01f3c]        ; 004ced88 | g_BlueBitPosition
    SHR EBP,CL                          ; 004ced8e
    MOV CL,byte ptr [0x02d01f44]        ; 004ced90 | g_BlueBitCount
    SHL EBP,CL                          ; 004ced96
    AND EBP,0xff                        ; 004ced98
    IMUL EBP,EAX                        ; 004ced9e
    AND EDX,0xff                        ; 004ceda1
    MOV dword ptr [ESP + 0x34],EDX      ; 004ceda7
    XOR EDX,EDX                         ; 004cedab
    MOV DX,word ptr [ESP + 0xc0]        ; 004cedad
    MOV ECX,dword ptr [0x00682748]      ; 004cedb5 | g_RedMask16
    AND ECX,EDX                         ; 004cedbb
    MOV dword ptr [ESP + 0x98],ECX      ; 004cedbd
    MOV EDI,dword ptr [ESP + 0x98]      ; 004cedc4
    MOV CL,byte ptr [0x02d01f24]        ; 004cedcb | g_RedBitPosition
    SHR EDI,CL                          ; 004cedd1
    MOV CL,byte ptr [0x02d01f2c]        ; 004cedd3 | g_RedBitCount
    SHL EDI,CL                          ; 004cedd9
    MOV ECX,EDI                         ; 004ceddb
    AND ECX,0xff                        ; 004ceddd
    MOV dword ptr [ESP + 0x38],ECX      ; 004cede3
    MOV ECX,dword ptr [0x00682750]      ; 004cede7 | g_GreenMask16
    AND ECX,EDX                         ; 004ceded
    MOV dword ptr [ESP + 0x98],ECX      ; 004cedef
    MOV EDI,dword ptr [ESP + 0x98]      ; 004cedf6
    MOV CL,byte ptr [0x02d01f30]        ; 004cedfd | g_GreenBitPosition
    SHR EDI,CL                          ; 004cee03
    MOV CL,byte ptr [0x02d01f38]        ; 004cee05 | g_GreenBitCount
    SHL EDI,CL                          ; 004cee0b
    MOV ECX,dword ptr [0x00682758]      ; 004cee0d | g_BlueMask16
    AND ECX,EDX                         ; 004cee13
    MOV dword ptr [ESP + 0x98],ECX      ; 004cee15
    MOV EDX,dword ptr [ESP + 0x98]      ; 004cee1c
    MOV CL,byte ptr [0x02d01f3c]        ; 004cee23 | g_BlueBitPosition
    SHR EDX,CL                          ; 004cee29
    MOV CL,byte ptr [0x02d01f44]        ; 004cee2b | g_BlueBitCount
    SHL EDX,CL                          ; 004cee31
    MOV ECX,EDX                         ; 004cee33
    MOV EDX,0xff                        ; 004cee35
    AND EDI,0xff                        ; 004cee3a
    SUB EDX,EAX                         ; 004cee40
    IMUL EDI,EDX                        ; 004cee42
    AND ECX,0xff                        ; 004cee45
    MOV dword ptr [ESP + 0x3c],ECX      ; 004cee4b
    MOV ECX,dword ptr [ESP + 0x38]      ; 004cee4f
    IMUL ECX,EDX                        ; 004cee53
    MOV dword ptr [ESP + 0x98],ECX      ; 004cee56
    MOV ECX,dword ptr [ESP + 0x34]      ; 004cee5d
    IMUL ECX,EAX                        ; 004cee61
    ADD ECX,dword ptr [ESP + 0x98]      ; 004cee64
    MOV dword ptr [ESP + 0x34],ECX      ; 004cee6b
    IMUL EDX,dword ptr [ESP + 0x3c]     ; 004cee6f
    MOV EAX,dword ptr [ESP + 0x34]      ; 004cee74
    ADD ESI,EDI                         ; 004cee78
    SHR EAX,0x8                         ; 004cee7a
    MOV ECX,ESI                         ; 004cee7d
    ADD EBP,EDX                         ; 004cee7f
    MOV ESI,dword ptr [0x02d01f28]      ; 004cee81 | g_RedScaleFactor
    XOR EDX,EDX                         ; 004cee87
    DIV ESI                             ; 004cee89
    MOV EDI,dword ptr [0x02d01f34]      ; 004cee8b | g_GreenScaleFactor
    SHR ECX,0x8                         ; 004cee91
    MOV ESI,EAX                         ; 004cee94
    XOR EDX,EDX                         ; 004cee96
    MOV EAX,ECX                         ; 004cee98
    DIV EDI                             ; 004cee9a
    MOV dword ptr [ESP + 0x44],ECX      ; 004cee9c
    SHR EBP,0x8                         ; 004ceea0
    MOV dword ptr [ESP + 0x44],EAX      ; 004ceea3
    XOR EDX,EDX                         ; 004ceea7
    MOV EAX,EBP                         ; 004ceea9
    DIV dword ptr [0x02d01f40]          ; 004ceeab | g_BlueScaleFactor
    MOV CL,byte ptr [0x02d01f24]        ; 004ceeb1 | g_RedBitPosition
    SHL ESI,CL                          ; 004ceeb7
    MOV CL,byte ptr [0x02d01f30]        ; 004ceeb9 | g_GreenBitPosition
    MOV EDI,EAX                         ; 004ceebf
    MOV EAX,dword ptr [ESP + 0x44]      ; 004ceec1
    SHL EAX,CL                          ; 004ceec5
    MOV CL,byte ptr [0x02d01f3c]        ; 004ceec7 | g_BlueBitPosition
    OR EAX,ESI                          ; 004ceecd
    SHL EDI,CL                          ; 004ceecf
    OR EAX,EDI                          ; 004ceed1
    MOV word ptr [EBX],AX               ; 004ceed3
    MOV EBP,dword ptr [ESP + 0x2c]      ; 004ceed6
        ;   Label: LAB_004ceed6
    MOV EAX,dword ptr [ESP + 0x4]       ; 004ceeda
    MOV EDX,dword ptr [ESP + 0x8]       ; 004ceede
    ADD EBX,0x2                         ; 004ceee2
    INC EBP                             ; 004ceee5
    INC EAX                             ; 004ceee6
    MOV dword ptr [ESP + 0x2c],EBP      ; 004ceee7
    MOV dword ptr [ESP + 0x4],EAX       ; 004ceeeb
    CMP EBP,EDX                         ; 004ceeef
    JLE 0x004cece8                      ; 004ceef1
        ;   XREF to: 004cece8 (CONDITIONAL_JUMP)  ; LAB_004cece8
    MOV EDX,dword ptr [ESP + 0xb0]      ; 004ceef7
        ;   Label: LAB_004ceef7
    MOV ECX,dword ptr [ESP + 0x28]      ; 004ceefe
    MOV EAX,dword ptr [ESP + 0x14]      ; 004cef02
    MOV EBX,dword ptr [ESP + 0x4]       ; 004cef06
    MOV ESI,dword ptr [ESP + 0xc]       ; 004cef0a
    ADD EDX,0x4                         ; 004cef0e
    INC ECX                             ; 004cef11
    ADD EBX,EAX                         ; 004cef12
    MOV dword ptr [ESP + 0xb0],EDX      ; 004cef14
    MOV dword ptr [ESP + 0x28],ECX      ; 004cef1b
    MOV dword ptr [ESP + 0x4],EBX       ; 004cef1f
    CMP ECX,ESI                         ; 004cef23
    JG 0x004ce9a0                       ; 004cef25
        ;   XREF to: 004ce9a0 (CONDITIONAL_JUMP)  ; LAB_004ce9a0
    JMP 0x004cecb9                      ; 004cef2b
        ;   XREF to: 004cecb9 (UNCONDITIONAL_JUMP)  ; LAB_004cecb9
    MOV EAX,dword ptr [ESP + 0xc]       ; 004cef30
        ;   Label: LAB_004cef30
    MOV EDI,dword ptr [ESP + 0xe8]      ; 004cef34
    CMP EDI,EAX                         ; 004cef3b
    JG 0x004ce9a0                       ; 004cef3d
        ;   XREF to: 004ce9a0 (CONDITIONAL_JUMP)  ; LAB_004ce9a0
    MOV ESI,dword ptr [ESP + 0x10]      ; 004cef43
    SHL ESI,0xa                         ; 004cef47
    LEA EBP,[EDI*0x4 + 0x0]             ; 004cef4a
    ADD ESI,EBX                         ; 004cef51
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004cef53
        ;   Label: LAB_004cef53
    MOV ECX,dword ptr [EBP + 0x2cf6a9c] ; 004cef5a | g_ScreenBufferArray | g_ScreenBufferArray[1]
    ADD EAX,EAX                         ; 004cef60
    MOV EDX,dword ptr [ESP + 0xe4]      ; 004cef62
    ADD ECX,EAX                         ; 004cef69
    CMP EDX,dword ptr [ESP + 0x8]       ; 004cef6b
    JG 0x004cefa4                       ; 004cef6f
        ;   XREF to: 004cefa4 (CONDITIONAL_JUMP)  ; LAB_004cefa4
    MOV EAX,dword ptr [ESP + 0x4]       ; 004cef71
        ;   Label: LAB_004cef71
    MOV AL,byte ptr [EAX]               ; 004cef75
    AND EAX,0xff                        ; 004cef77
    CMP EAX,dword ptr [EBX + 0x3188]    ; 004cef7c
    JZ 0x004cef8f                       ; 004cef82
        ;   XREF to: 004cef8f (CONDITIONAL_JUMP)  ; LAB_004cef8f
    MOV AX,word ptr [ESI + EAX*0x4 + 0xd64] ; 004cef84
    MOV word ptr [ECX],AX               ; 004cef8c
    MOV EAX,dword ptr [ESP + 0x4]       ; 004cef8f
        ;   Label: LAB_004cef8f
    INC EAX                             ; 004cef93
    INC EDX                             ; 004cef94
    MOV dword ptr [ESP + 0x4],EAX       ; 004cef95
    MOV EAX,dword ptr [ESP + 0x8]       ; 004cef99
    ADD ECX,0x2                         ; 004cef9d
    CMP EDX,EAX                         ; 004cefa0
    JLE 0x004cef71                      ; 004cefa2
        ;   XREF to: 004cef71 (CONDITIONAL_JUMP)  ; LAB_004cef71
    MOV EAX,dword ptr [ESP + 0x14]      ; 004cefa4
        ;   Label: LAB_004cefa4
    MOV EDX,dword ptr [ESP + 0x4]       ; 004cefa8
    MOV ECX,dword ptr [ESP + 0xc]       ; 004cefac
    ADD EBP,0x4                         ; 004cefb0
    ADD EDX,EAX                         ; 004cefb3
    INC EDI                             ; 004cefb5
    MOV dword ptr [ESP + 0x4],EDX       ; 004cefb6
    CMP EDI,ECX                         ; 004cefba
    JG 0x004ce9a0                       ; 004cefbc
        ;   XREF to: 004ce9a0 (CONDITIONAL_JUMP)  ; LAB_004ce9a0
    JMP 0x004cef53                      ; 004cefc2
        ;   XREF to: 004cef53 (UNCONDITIONAL_JUMP)  ; LAB_004cef53
    CMP ESI,-0x2                        ; 004cefc4
        ;   Label: LAB_004cefc4
    JNZ 0x004cf30a                      ; 004cefc7
        ;   XREF to: 004cf30a (CONDITIONAL_JUMP)  ; LAB_004cf30a
    CMP dword ptr [EBX + 0x1d64],0x0    ; 004cefcd
    JZ 0x004cf27f                       ; 004cefd4
        ;   XREF to: 004cf27f (CONDITIONAL_JUMP)  ; LAB_004cf27f
    MOV EAX,dword ptr [ESP + 0xe8]      ; 004cefda
    MOV EDI,dword ptr [ESP + 0xc]       ; 004cefe1
    MOV dword ptr [ESP + 0x48],EAX      ; 004cefe5
    CMP EAX,EDI                         ; 004cefe9
    JG 0x004ce9a0                       ; 004cefeb
        ;   XREF to: 004ce9a0 (CONDITIONAL_JUMP)  ; LAB_004ce9a0
    MOV EDX,dword ptr [ESP + 0x10]      ; 004ceff1
    LEA EAX,[EDX*0x4 + 0x0]             ; 004ceff5
    SUB EAX,EDX                         ; 004ceffc
    SHL EAX,0x8                         ; 004ceffe
    ADD EBX,EAX                         ; 004cf001
    MOV EAX,dword ptr [ESP + 0x48]      ; 004cf003
    SHL EAX,0x2                         ; 004cf007
    MOV dword ptr [ESP + 0x50],EBX      ; 004cf00a
    MOV dword ptr [ESP + 0xac],EAX      ; 004cf00e
    MOV EAX,dword ptr [ESP + 0xac]      ; 004cf015
        ;   Label: LAB_004cf015
    MOV EBX,dword ptr [ESP + 0xe4]      ; 004cf01c
    MOV EAX,dword ptr [EAX + 0x2cf6a9c] ; 004cf023 | g_ScreenBufferArray | g_ScreenBufferArray[1]
    ADD EBX,EBX                         ; 004cf029
    ADD EBX,EAX                         ; 004cf02b
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004cf02d
    MOV ESI,dword ptr [ESP + 0x8]       ; 004cf034
    MOV dword ptr [ESP + 0x4c],EAX      ; 004cf038
    CMP EAX,ESI                         ; 004cf03c
    JG 0x004cf246                       ; 004cf03e
        ;   XREF to: 004cf246 (CONDITIONAL_JUMP)  ; LAB_004cf246
    MOV EAX,dword ptr [ESP + 0x4]       ; 004cf044
        ;   Label: LAB_004cf044
    MOV AL,byte ptr [EAX]               ; 004cf048
    AND EAX,0xff                        ; 004cf04a
    MOV ECX,dword ptr [ESP + 0x50]      ; 004cf04f
    LEA EAX,[EAX + EAX*0x2]             ; 004cf053
    ADD EAX,ECX                         ; 004cf056
    MOV AL,byte ptr [EAX + 0x164]       ; 004cf058
    MOV EDX,dword ptr [0x006793b4]      ; 004cf05e | g_CurrentAlphaValue
    AND EAX,0xff                        ; 004cf064
    IMUL EDX,EAX                        ; 004cf069
    MOV EAX,EDX                         ; 004cf06c
    SAR EDX,0x1f                        ; 004cf06e
    SHL EDX,0x8                         ; 004cf071
    SBB EAX,EDX                         ; 004cf074
    SAR EAX,0x8                         ; 004cf076
    TEST EAX,EAX                        ; 004cf079
    JZ 0x004cf225                       ; 004cf07b
        ;   XREF to: 004cf225 (CONDITIONAL_JUMP)  ; LAB_004cf225
    MOV DX,word ptr [EBX]               ; 004cf081
    MOV dword ptr [ESP + 0xbc],EDX      ; 004cf084
    XOR EDX,EDX                         ; 004cf08b
    MOV ESI,dword ptr [0x00682748]      ; 004cf08d | g_RedMask16
    MOV DX,word ptr [0x02d7b412]        ; 004cf093 | g_ShadowColor16
    MOV CL,byte ptr [0x02d01f24]        ; 004cf09a | g_RedBitPosition
    AND ESI,EDX                         ; 004cf0a0
    SHR ESI,CL                          ; 004cf0a2
    MOV CL,byte ptr [0x02d01f2c]        ; 004cf0a4 | g_RedBitCount
    SHL ESI,CL                          ; 004cf0aa
    AND ESI,0xff                        ; 004cf0ac
    MOV dword ptr [ESP + 0x54],ESI      ; 004cf0b2
    MOV ESI,dword ptr [0x00682750]      ; 004cf0b6 | g_GreenMask16
    MOV CL,byte ptr [0x02d01f30]        ; 004cf0bc | g_GreenBitPosition
    AND ESI,EDX                         ; 004cf0c2
    MOV EDI,dword ptr [0x00682758]      ; 004cf0c4 | g_BlueMask16
    SHR ESI,CL                          ; 004cf0ca
    MOV CL,byte ptr [0x02d01f38]        ; 004cf0cc | g_GreenBitCount
    AND EDI,EDX                         ; 004cf0d2
    SHL ESI,CL                          ; 004cf0d4
    MOV CL,byte ptr [0x02d01f3c]        ; 004cf0d6 | g_BlueBitPosition
    XOR EDX,EDX                         ; 004cf0dc
    SHR EDI,CL                          ; 004cf0de
    MOV CL,byte ptr [0x02d01f44]        ; 004cf0e0 | g_BlueBitCount
    MOV DX,word ptr [ESP + 0xbc]        ; 004cf0e6
    SHL EDI,CL                          ; 004cf0ee
    MOV ECX,dword ptr [0x00682748]      ; 004cf0f0 | g_RedMask16
    AND ECX,EDX                         ; 004cf0f6
    MOV dword ptr [ESP + 0x98],ECX      ; 004cf0f8
    MOV EBP,dword ptr [ESP + 0x98]      ; 004cf0ff
    MOV CL,byte ptr [0x02d01f24]        ; 004cf106 | g_RedBitPosition
    SHR EBP,CL                          ; 004cf10c
    MOV CL,byte ptr [0x02d01f2c]        ; 004cf10e | g_RedBitCount
    SHL EBP,CL                          ; 004cf114
    MOV ECX,EBP                         ; 004cf116
    AND ECX,0xff                        ; 004cf118
    MOV dword ptr [ESP + 0x58],ECX      ; 004cf11e
    MOV ECX,dword ptr [0x00682750]      ; 004cf122 | g_GreenMask16
    AND ECX,EDX                         ; 004cf128
    MOV dword ptr [ESP + 0x98],ECX      ; 004cf12a
    MOV EBP,dword ptr [ESP + 0x98]      ; 004cf131
    MOV CL,byte ptr [0x02d01f30]        ; 004cf138 | g_GreenBitPosition
    SHR EBP,CL                          ; 004cf13e
    MOV CL,byte ptr [0x02d01f38]        ; 004cf140 | g_GreenBitCount
    SHL EBP,CL                          ; 004cf146
    MOV ECX,dword ptr [0x00682758]      ; 004cf148 | g_BlueMask16
    AND ECX,EDX                         ; 004cf14e
    MOV dword ptr [ESP + 0x98],ECX      ; 004cf150
    MOV EDX,dword ptr [ESP + 0x98]      ; 004cf157
    MOV CL,byte ptr [0x02d01f3c]        ; 004cf15e | g_BlueBitPosition
    SHR EDX,CL                          ; 004cf164
    MOV CL,byte ptr [0x02d01f44]        ; 004cf166 | g_BlueBitCount
    SHL EDX,CL                          ; 004cf16c
    MOV ECX,EDX                         ; 004cf16e
    MOV EDX,0xff                        ; 004cf170
    AND EBP,0xff                        ; 004cf175
    SUB EDX,EAX                         ; 004cf17b
    IMUL EBP,EDX                        ; 004cf17d
    AND ECX,0xff                        ; 004cf180
    MOV dword ptr [ESP + 0x5c],ECX      ; 004cf186
    MOV ECX,dword ptr [ESP + 0x58]      ; 004cf18a
    IMUL ECX,EDX                        ; 004cf18e
    MOV dword ptr [ESP + 0x98],ECX      ; 004cf191
    MOV ECX,dword ptr [ESP + 0x54]      ; 004cf198
    IMUL ECX,EAX                        ; 004cf19c
    ADD ECX,dword ptr [ESP + 0x98]      ; 004cf19f
    AND ESI,0xff                        ; 004cf1a6
    MOV dword ptr [ESP + 0x54],ECX      ; 004cf1ac
    MOV ECX,ESI                         ; 004cf1b0
    IMUL ECX,EAX                        ; 004cf1b2
    ADD ECX,EBP                         ; 004cf1b5
    IMUL EDX,dword ptr [ESP + 0x5c]     ; 004cf1b7
    AND EDI,0xff                        ; 004cf1bc
    MOV EBP,EDI                         ; 004cf1c2
    IMUL EBP,EAX                        ; 004cf1c4
    MOV ESI,dword ptr [0x02d01f28]      ; 004cf1c7 | g_RedScaleFactor
    MOV EAX,dword ptr [ESP + 0x54]      ; 004cf1cd
    ADD EBP,EDX                         ; 004cf1d1
    SHR EAX,0x8                         ; 004cf1d3
    XOR EDX,EDX                         ; 004cf1d6
    DIV ESI                             ; 004cf1d8
    SHR ECX,0x8                         ; 004cf1da
    MOV EDI,dword ptr [0x02d01f34]      ; 004cf1dd | g_GreenScaleFactor
    MOV ESI,EAX                         ; 004cf1e3
    XOR EDX,EDX                         ; 004cf1e5
    MOV EAX,ECX                         ; 004cf1e7
    DIV EDI                             ; 004cf1e9
    MOV dword ptr [ESP + 0x60],ECX      ; 004cf1eb
    SHR EBP,0x8                         ; 004cf1ef
    MOV dword ptr [ESP + 0x60],EAX      ; 004cf1f2
    XOR EDX,EDX                         ; 004cf1f6
    MOV EAX,EBP                         ; 004cf1f8
    DIV dword ptr [0x02d01f40]          ; 004cf1fa | g_BlueScaleFactor
    MOV CL,byte ptr [0x02d01f24]        ; 004cf200 | g_RedBitPosition
    SHL ESI,CL                          ; 004cf206
    MOV CL,byte ptr [0x02d01f30]        ; 004cf208 | g_GreenBitPosition
    MOV EDI,EAX                         ; 004cf20e
    MOV EAX,dword ptr [ESP + 0x60]      ; 004cf210
    SHL EAX,CL                          ; 004cf214
    MOV CL,byte ptr [0x02d01f3c]        ; 004cf216 | g_BlueBitPosition
    OR EAX,ESI                          ; 004cf21c
    SHL EDI,CL                          ; 004cf21e
    OR EAX,EDI                          ; 004cf220
    MOV word ptr [EBX],AX               ; 004cf222
    MOV EDI,dword ptr [ESP + 0x4c]      ; 004cf225
        ;   Label: LAB_004cf225
    MOV EBP,dword ptr [ESP + 0x4]       ; 004cf229
    MOV EDX,dword ptr [ESP + 0x8]       ; 004cf22d
    ADD EBX,0x2                         ; 004cf231
    INC EDI                             ; 004cf234
    INC EBP                             ; 004cf235
    MOV dword ptr [ESP + 0x4c],EDI      ; 004cf236
    MOV dword ptr [ESP + 0x4],EBP       ; 004cf23a
    CMP EDI,EDX                         ; 004cf23e
    JLE 0x004cf044                      ; 004cf240
        ;   XREF to: 004cf044 (CONDITIONAL_JUMP)  ; LAB_004cf044
    MOV EAX,dword ptr [ESP + 0xac]      ; 004cf246
        ;   Label: LAB_004cf246
    MOV EDX,dword ptr [ESP + 0x48]      ; 004cf24d
    MOV ECX,dword ptr [ESP + 0x4]       ; 004cf251
    ADD EAX,0x4                         ; 004cf255
    MOV EBX,dword ptr [ESP + 0xc]       ; 004cf258
    MOV dword ptr [ESP + 0xac],EAX      ; 004cf25c
    MOV EAX,dword ptr [ESP + 0x14]      ; 004cf263
    INC EDX                             ; 004cf267
    ADD ECX,EAX                         ; 004cf268
    MOV dword ptr [ESP + 0x48],EDX      ; 004cf26a
    MOV dword ptr [ESP + 0x4],ECX       ; 004cf26e
    CMP EDX,EBX                         ; 004cf272
    JG 0x004ce9a0                       ; 004cf274
        ;   XREF to: 004ce9a0 (CONDITIONAL_JUMP)  ; LAB_004ce9a0
    JMP 0x004cf015                      ; 004cf27a
        ;   XREF to: 004cf015 (UNCONDITIONAL_JUMP)  ; LAB_004cf015
    MOV ESI,dword ptr [ESP + 0xc]       ; 004cf27f
        ;   Label: LAB_004cf27f
    MOV EDI,dword ptr [ESP + 0xe8]      ; 004cf283
    CMP EDI,ESI                         ; 004cf28a
    JG 0x004ce9a0                       ; 004cf28c
        ;   XREF to: 004ce9a0 (CONDITIONAL_JUMP)  ; LAB_004ce9a0
    LEA ESI,[EDI*0x4 + 0x0]             ; 004cf292
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004cf299
        ;   Label: LAB_004cf299
    MOV EDX,dword ptr [ESP + 0xe4]      ; 004cf2a0
    MOV ECX,dword ptr [ESI + 0x2cf6a9c] ; 004cf2a7 | g_ScreenBufferArray | g_ScreenBufferArray[1]
    ADD EAX,EAX                         ; 004cf2ad
    MOV EBP,dword ptr [ESP + 0x8]       ; 004cf2af
    ADD ECX,EAX                         ; 004cf2b3
    CMP EDX,EBP                         ; 004cf2b5
    JG 0x004cf2ea                       ; 004cf2b7
        ;   XREF to: 004cf2ea (CONDITIONAL_JUMP)  ; LAB_004cf2ea
    MOV EAX,dword ptr [ESP + 0x4]       ; 004cf2b9
        ;   Label: LAB_004cf2b9
    MOV AL,byte ptr [EAX]               ; 004cf2bd
    AND EAX,0xff                        ; 004cf2bf
    CMP EAX,dword ptr [EBX + 0x3188]    ; 004cf2c4
    JZ 0x004cf2d5                       ; 004cf2ca
        ;   XREF to: 004cf2d5 (CONDITIONAL_JUMP)  ; LAB_004cf2d5
    MOV AX,[0x02d7b412]                 ; 004cf2cc | g_ShadowColor16
    MOV word ptr [ECX],AX               ; 004cf2d2
    MOV EAX,dword ptr [ESP + 0x4]       ; 004cf2d5
        ;   Label: LAB_004cf2d5
    MOV EBP,dword ptr [ESP + 0x8]       ; 004cf2d9
    ADD ECX,0x2                         ; 004cf2dd
    INC EAX                             ; 004cf2e0
    INC EDX                             ; 004cf2e1
    MOV dword ptr [ESP + 0x4],EAX       ; 004cf2e2
    CMP EDX,EBP                         ; 004cf2e6
    JLE 0x004cf2b9                      ; 004cf2e8
        ;   XREF to: 004cf2b9 (CONDITIONAL_JUMP)  ; LAB_004cf2b9
    MOV EAX,dword ptr [ESP + 0x14]      ; 004cf2ea
        ;   Label: LAB_004cf2ea
    MOV EDX,dword ptr [ESP + 0x4]       ; 004cf2ee
    MOV ECX,dword ptr [ESP + 0xc]       ; 004cf2f2
    ADD ESI,0x4                         ; 004cf2f6
    ADD EDX,EAX                         ; 004cf2f9
    INC EDI                             ; 004cf2fb
    MOV dword ptr [ESP + 0x4],EDX       ; 004cf2fc
    CMP EDI,ECX                         ; 004cf300
    JG 0x004ce9a0                       ; 004cf302
        ;   XREF to: 004ce9a0 (CONDITIONAL_JUMP)  ; LAB_004ce9a0
    JMP 0x004cf299                      ; 004cf308
        ;   XREF to: 004cf299 (UNCONDITIONAL_JUMP)  ; LAB_004cf299
    CMP ESI,-0x3                        ; 004cf30a
        ;   Label: LAB_004cf30a
    JNZ 0x004cf638                      ; 004cf30d
        ;   XREF to: 004cf638 (CONDITIONAL_JUMP)  ; LAB_004cf638
    CMP dword ptr [EBX + 0x1d64],0x0    ; 004cf313
    JZ 0x004cf5ad                       ; 004cf31a
        ;   XREF to: 004cf5ad (CONDITIONAL_JUMP)  ; LAB_004cf5ad
    MOV EAX,dword ptr [ESP + 0xe8]      ; 004cf320
    MOV EDX,dword ptr [ESP + 0xc]       ; 004cf327
    MOV dword ptr [ESP + 0x64],EAX      ; 004cf32b
    CMP EAX,EDX                         ; 004cf32f
    JG 0x004ce9a0                       ; 004cf331
        ;   XREF to: 004ce9a0 (CONDITIONAL_JUMP)  ; LAB_004ce9a0
    MOV EDX,dword ptr [ESP + 0x10]      ; 004cf337
    LEA EAX,[EDX*0x4 + 0x0]             ; 004cf33b
    SUB EAX,EDX                         ; 004cf342
    SHL EAX,0x8                         ; 004cf344
    ADD EBX,EAX                         ; 004cf347
    MOV EAX,dword ptr [ESP + 0x64]      ; 004cf349
    SHL EAX,0x2                         ; 004cf34d
    MOV dword ptr [ESP + 0x6c],EBX      ; 004cf350
    MOV dword ptr [ESP + 0xa8],EAX      ; 004cf354
    MOV EBX,dword ptr [ESP + 0xa8]      ; 004cf35b
        ;   Label: LAB_004cf35b
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004cf362
    MOV EBX,dword ptr [EBX + 0x2cf6a9c] ; 004cf369 | g_ScreenBufferArray | g_ScreenBufferArray[1]
    ADD EAX,EAX                         ; 004cf36f
    ADD EBX,EAX                         ; 004cf371
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004cf373
    MOV ESI,dword ptr [ESP + 0x8]       ; 004cf37a
    MOV dword ptr [ESP + 0x68],EAX      ; 004cf37e
    CMP EAX,ESI                         ; 004cf382
    JG 0x004cf574                       ; 004cf384
        ;   XREF to: 004cf574 (CONDITIONAL_JUMP)  ; LAB_004cf574
    MOV EAX,dword ptr [ESP + 0x4]       ; 004cf38a
        ;   Label: LAB_004cf38a
    MOV AL,byte ptr [EAX]               ; 004cf38e
    AND EAX,0xff                        ; 004cf390
    MOV ECX,dword ptr [ESP + 0x6c]      ; 004cf395
    LEA EAX,[EAX + EAX*0x2]             ; 004cf399
    ADD EAX,ECX                         ; 004cf39c
    MOV AL,byte ptr [EAX + 0x164]       ; 004cf39e
    MOV EDX,dword ptr [0x006793b4]      ; 004cf3a4 | g_CurrentAlphaValue
    AND EAX,0xff                        ; 004cf3aa
    IMUL EDX,EAX                        ; 004cf3af
    MOV EAX,EDX                         ; 004cf3b2
    SAR EDX,0x1f                        ; 004cf3b4
    SHL EDX,0x8                         ; 004cf3b7
    SBB EAX,EDX                         ; 004cf3ba
    SAR EAX,0x8                         ; 004cf3bc
    TEST EAX,EAX                        ; 004cf3bf
    JZ 0x004cf553                       ; 004cf3c1
        ;   XREF to: 004cf553 (CONDITIONAL_JUMP)  ; LAB_004cf553
    MOV EBP,dword ptr [0x02d7b424]      ; 004cf3c7 | g_DefaultTextColor
    MOV ESI,dword ptr [0x00682748]      ; 004cf3cd | g_RedMask16
    MOV CL,byte ptr [0x02d01f24]        ; 004cf3d3 | g_RedBitPosition
    AND EBP,ESI                         ; 004cf3d9
    SHR EBP,CL                          ; 004cf3db
    MOV CL,byte ptr [0x02d01f2c]        ; 004cf3dd | g_RedBitCount
    SHL EBP,CL                          ; 004cf3e3
    AND EBP,0xff                        ; 004cf3e5
    IMUL EBP,EAX                        ; 004cf3eb
    MOV DX,word ptr [EBX]               ; 004cf3ee
    MOV EDI,dword ptr [0x00682750]      ; 004cf3f1 | g_GreenMask16
    MOV dword ptr [ESP + 0xc4],EDX      ; 004cf3f7
    MOV EDX,dword ptr [0x02d7b424]      ; 004cf3fe | g_DefaultTextColor
    AND EDI,EDX                         ; 004cf404
    MOV CL,byte ptr [0x02d01f30]        ; 004cf406 | g_GreenBitPosition
    SHR EDI,CL                          ; 004cf40c
    MOV CL,byte ptr [0x02d01f38]        ; 004cf40e | g_GreenBitCount
    SHL EDI,CL                          ; 004cf414
    AND EDI,0xff                        ; 004cf416
    IMUL EDI,EAX                        ; 004cf41c
    MOV ESI,EDX                         ; 004cf41f
    AND ESI,dword ptr [0x00682758]      ; 004cf421 | g_BlueMask16
    MOV CL,byte ptr [0x02d01f3c]        ; 004cf427 | g_BlueBitPosition
    SHR ESI,CL                          ; 004cf42d
    MOV CL,byte ptr [0x02d01f44]        ; 004cf42f | g_BlueBitCount
    SHL ESI,CL                          ; 004cf435
    AND ESI,0xff                        ; 004cf437
    IMUL ESI,EAX                        ; 004cf43d
    XOR EDX,EDX                         ; 004cf440
    MOV DX,word ptr [ESP + 0xc4]        ; 004cf442
    MOV ECX,dword ptr [0x00682748]      ; 004cf44a | g_RedMask16
    MOV dword ptr [ESP + 0x98],EDX      ; 004cf450
    AND EDX,ECX                         ; 004cf457
    MOV CL,byte ptr [0x02d01f24]        ; 004cf459 | g_RedBitPosition
    SHR EDX,CL                          ; 004cf45f
    MOV CL,byte ptr [0x02d01f2c]        ; 004cf461 | g_RedBitCount
    SHL EDX,CL                          ; 004cf467
    MOV ECX,EDX                         ; 004cf469
    AND ECX,0xff                        ; 004cf46b
    MOV EDX,dword ptr [ESP + 0x98]      ; 004cf471
    MOV dword ptr [ESP + 0x70],ECX      ; 004cf478
    AND EDX,dword ptr [0x00682750]      ; 004cf47c | g_GreenMask16
    MOV CL,byte ptr [0x02d01f30]        ; 004cf482 | g_GreenBitPosition
    SHR EDX,CL                          ; 004cf488
    MOV CL,byte ptr [0x02d01f38]        ; 004cf48a | g_GreenBitCount
    SHL EDX,CL                          ; 004cf490
    MOV ECX,EDX                         ; 004cf492
    AND ECX,0xff                        ; 004cf494
    MOV EDX,dword ptr [ESP + 0x98]      ; 004cf49a
    MOV dword ptr [ESP + 0x74],ECX      ; 004cf4a1
    AND EDX,dword ptr [0x00682758]      ; 004cf4a5 | g_BlueMask16
    MOV CL,byte ptr [0x02d01f3c]        ; 004cf4ab | g_BlueBitPosition
    SHR EDX,CL                          ; 004cf4b1
    MOV CL,byte ptr [0x02d01f44]        ; 004cf4b3 | g_BlueBitCount
    SHL EDX,CL                          ; 004cf4b9
    MOV ECX,EDX                         ; 004cf4bb
    AND ECX,0xff                        ; 004cf4bd
    MOV EDX,0xff                        ; 004cf4c3
    MOV dword ptr [ESP + 0x78],ECX      ; 004cf4c8
    SUB EDX,EAX                         ; 004cf4cc
    MOV ECX,dword ptr [ESP + 0x70]      ; 004cf4ce
    IMUL ECX,EDX                        ; 004cf4d2
    ADD EBP,ECX                         ; 004cf4d5
    MOV ECX,dword ptr [ESP + 0x74]      ; 004cf4d7
    IMUL ECX,EDX                        ; 004cf4db
    ADD EDI,ECX                         ; 004cf4de
    IMUL EDX,dword ptr [ESP + 0x78]     ; 004cf4e0
    ADD ESI,EDX                         ; 004cf4e5
    MOV EAX,EBP                         ; 004cf4e7
    SHR ESI,0x8                         ; 004cf4e9
    SHR EAX,0x8                         ; 004cf4ec
    MOV dword ptr [ESP + 0x98],ESI      ; 004cf4ef
    MOV EDX,ESI                         ; 004cf4f6
    MOV dword ptr [ESP + 0x7c],ESI      ; 004cf4f8
    XOR EDX,ESI                         ; 004cf4fc
    DIV dword ptr [0x02d01f28]          ; 004cf4fe | g_RedScaleFactor
    MOV ECX,EDI                         ; 004cf504
    MOV EDI,dword ptr [0x02d01f34]      ; 004cf506 | g_GreenScaleFactor
    SHR ECX,0x8                         ; 004cf50c
    MOV ESI,EAX                         ; 004cf50f
    XOR EDX,EDX                         ; 004cf511
    MOV EAX,ECX                         ; 004cf513
    DIV EDI                             ; 004cf515
    MOV EBP,dword ptr [0x02d01f40]      ; 004cf517 | g_BlueScaleFactor
    MOV EDI,EAX                         ; 004cf51d
    XOR EDX,EDX                         ; 004cf51f
    MOV EAX,dword ptr [ESP + 0x98]      ; 004cf521
    DIV EBP                             ; 004cf528
    MOV CL,byte ptr [0x02d01f24]        ; 004cf52a | g_RedBitPosition
    MOV dword ptr [ESP + 0x7c],EAX      ; 004cf530
    MOV EAX,ESI                         ; 004cf534
    SHL EAX,CL                          ; 004cf536
    MOV CL,byte ptr [0x02d01f30]        ; 004cf538 | g_GreenBitPosition
    MOV EDX,dword ptr [ESP + 0x7c]      ; 004cf53e
    SHL EDI,CL                          ; 004cf542
    MOV CL,byte ptr [0x02d01f3c]        ; 004cf544 | g_BlueBitPosition
    OR EAX,EDI                          ; 004cf54a
    SHL EDX,CL                          ; 004cf54c
    OR EAX,EDX                          ; 004cf54e
    MOV word ptr [EBX],AX               ; 004cf550
    MOV EDI,dword ptr [ESP + 0x68]      ; 004cf553
        ;   Label: LAB_004cf553
    MOV EBP,dword ptr [ESP + 0x4]       ; 004cf557
    MOV EDX,dword ptr [ESP + 0x8]       ; 004cf55b
    ADD EBX,0x2                         ; 004cf55f
    INC EDI                             ; 004cf562
    INC EBP                             ; 004cf563
    MOV dword ptr [ESP + 0x68],EDI      ; 004cf564
    MOV dword ptr [ESP + 0x4],EBP       ; 004cf568
    CMP EDI,EDX                         ; 004cf56c
    JLE 0x004cf38a                      ; 004cf56e
        ;   XREF to: 004cf38a (CONDITIONAL_JUMP)  ; LAB_004cf38a
    MOV EAX,dword ptr [ESP + 0xa8]      ; 004cf574
        ;   Label: LAB_004cf574
    MOV EDX,dword ptr [ESP + 0x64]      ; 004cf57b
    MOV ECX,dword ptr [ESP + 0x4]       ; 004cf57f
    ADD EAX,0x4                         ; 004cf583
    MOV EBX,dword ptr [ESP + 0xc]       ; 004cf586
    MOV dword ptr [ESP + 0xa8],EAX      ; 004cf58a
    MOV EAX,dword ptr [ESP + 0x14]      ; 004cf591
    INC EDX                             ; 004cf595
    ADD ECX,EAX                         ; 004cf596
    MOV dword ptr [ESP + 0x64],EDX      ; 004cf598
    MOV dword ptr [ESP + 0x4],ECX       ; 004cf59c
    CMP EDX,EBX                         ; 004cf5a0
    JG 0x004ce9a0                       ; 004cf5a2
        ;   XREF to: 004ce9a0 (CONDITIONAL_JUMP)  ; LAB_004ce9a0
    JMP 0x004cf35b                      ; 004cf5a8
        ;   XREF to: 004cf35b (UNCONDITIONAL_JUMP)  ; LAB_004cf35b
    MOV EBP,dword ptr [ESP + 0xc]       ; 004cf5ad
        ;   Label: LAB_004cf5ad
    MOV EDI,dword ptr [ESP + 0xe8]      ; 004cf5b1
    CMP EDI,EBP                         ; 004cf5b8
    JG 0x004ce9a0                       ; 004cf5ba
        ;   XREF to: 004ce9a0 (CONDITIONAL_JUMP)  ; LAB_004ce9a0
    LEA ESI,[EDI*0x4 + 0x0]             ; 004cf5c0
    MOV EDX,dword ptr [ESP + 0xe4]      ; 004cf5c7
        ;   Label: LAB_004cf5c7
    MOV ECX,dword ptr [ESP + 0xe4]      ; 004cf5ce
    MOV EAX,dword ptr [ESI + 0x2cf6a9c] ; 004cf5d5 | g_ScreenBufferArray | g_ScreenBufferArray[1]
    ADD EDX,EDX                         ; 004cf5db
    MOV EBP,dword ptr [ESP + 0x8]       ; 004cf5dd
    ADD EDX,EAX                         ; 004cf5e1
    CMP ECX,EBP                         ; 004cf5e3
    JG 0x004cf618                       ; 004cf5e5
        ;   XREF to: 004cf618 (CONDITIONAL_JUMP)  ; LAB_004cf618
    MOV EAX,dword ptr [ESP + 0x4]       ; 004cf5e7
        ;   Label: LAB_004cf5e7
    MOV AL,byte ptr [EAX]               ; 004cf5eb
    AND EAX,0xff                        ; 004cf5ed
    CMP EAX,dword ptr [EBX + 0x3188]    ; 004cf5f2
    JZ 0x004cf603                       ; 004cf5f8
        ;   XREF to: 004cf603 (CONDITIONAL_JUMP)  ; LAB_004cf603
    MOV AX,[0x02d7b424]                 ; 004cf5fa | g_DefaultTextColor
    MOV word ptr [EDX],AX               ; 004cf600
    MOV EAX,dword ptr [ESP + 0x4]       ; 004cf603
        ;   Label: LAB_004cf603
    MOV EBP,dword ptr [ESP + 0x8]       ; 004cf607
    INC ECX                             ; 004cf60b
    INC EAX                             ; 004cf60c
    ADD EDX,0x2                         ; 004cf60d
    MOV dword ptr [ESP + 0x4],EAX       ; 004cf610
    CMP ECX,EBP                         ; 004cf614
    JLE 0x004cf5e7                      ; 004cf616
        ;   XREF to: 004cf5e7 (CONDITIONAL_JUMP)  ; LAB_004cf5e7
    MOV EAX,dword ptr [ESP + 0x14]      ; 004cf618
        ;   Label: LAB_004cf618
    MOV EDX,dword ptr [ESP + 0x4]       ; 004cf61c
    MOV ECX,dword ptr [ESP + 0xc]       ; 004cf620
    ADD ESI,0x4                         ; 004cf624
    ADD EDX,EAX                         ; 004cf627
    INC EDI                             ; 004cf629
    MOV dword ptr [ESP + 0x4],EDX       ; 004cf62a
    CMP EDI,ECX                         ; 004cf62e
    JG 0x004ce9a0                       ; 004cf630
        ;   XREF to: 004ce9a0 (CONDITIONAL_JUMP)  ; LAB_004ce9a0
    JMP 0x004cf5c7                      ; 004cf636
        ;   XREF to: 004cf5c7 (UNCONDITIONAL_JUMP)  ; LAB_004cf5c7
    MOV AX,word ptr [ESI*0x2 + 0x2d01020] ; 004cf638 | g_ColorTable16
        ;   Label: LAB_004cf638
    MOV dword ptr [ESP + 0xb8],EAX      ; 004cf640
    CMP dword ptr [EBX + 0x1d64],0x0    ; 004cf647
    JZ 0x004cf925                       ; 004cf64e
        ;   XREF to: 004cf925 (CONDITIONAL_JUMP)  ; LAB_004cf925
    MOV EAX,dword ptr [ESP + 0xe8]      ; 004cf654
    MOV ESI,dword ptr [ESP + 0xc]       ; 004cf65b
    MOV dword ptr [ESP + 0x80],EAX      ; 004cf65f
    CMP EAX,ESI                         ; 004cf666
    JG 0x004ce9a0                       ; 004cf668
        ;   XREF to: 004ce9a0 (CONDITIONAL_JUMP)  ; LAB_004ce9a0
    MOV EDX,dword ptr [ESP + 0x10]      ; 004cf66e
    LEA EAX,[EDX*0x4 + 0x0]             ; 004cf672
    SUB EAX,EDX                         ; 004cf679
    SHL EAX,0x8                         ; 004cf67b
    ADD EBX,EAX                         ; 004cf67e
    MOV EAX,dword ptr [ESP + 0x80]      ; 004cf680
    SHL EAX,0x2                         ; 004cf687
    MOV dword ptr [ESP + 0x88],EBX      ; 004cf68a
    MOV dword ptr [ESP + 0xa4],EAX      ; 004cf691
    MOV EBX,dword ptr [ESP + 0xa4]      ; 004cf698
        ;   Label: LAB_004cf698
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004cf69f
    MOV EBX,dword ptr [EBX + 0x2cf6a9c] ; 004cf6a6 | g_ScreenBufferArray | g_ScreenBufferArray[1]
    ADD EAX,EAX                         ; 004cf6ac
    ADD EBX,EAX                         ; 004cf6ae
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004cf6b0
    MOV ESI,dword ptr [ESP + 0x8]       ; 004cf6b7
    MOV dword ptr [ESP + 0x84],EAX      ; 004cf6bb
    CMP EAX,ESI                         ; 004cf6c2
    JG 0x004cf8e6                       ; 004cf6c4
        ;   XREF to: 004cf8e6 (CONDITIONAL_JUMP)  ; LAB_004cf8e6
    MOV EAX,dword ptr [ESP + 0x4]       ; 004cf6ca
        ;   Label: LAB_004cf6ca
    MOV AL,byte ptr [EAX]               ; 004cf6ce
    AND EAX,0xff                        ; 004cf6d0
    MOV ECX,dword ptr [ESP + 0x88]      ; 004cf6d5
    LEA EAX,[EAX + EAX*0x2]             ; 004cf6dc
    ADD EAX,ECX                         ; 004cf6df
    MOV AL,byte ptr [EAX + 0x164]       ; 004cf6e1
    MOV EDX,dword ptr [0x006793b4]      ; 004cf6e7 | g_CurrentAlphaValue
    AND EAX,0xff                        ; 004cf6ed
    IMUL EDX,EAX                        ; 004cf6f2
    MOV EAX,EDX                         ; 004cf6f5
    SAR EDX,0x1f                        ; 004cf6f7
    SHL EDX,0x8                         ; 004cf6fa
    SBB EAX,EDX                         ; 004cf6fd
    SAR EAX,0x8                         ; 004cf6ff
    TEST EAX,EAX                        ; 004cf702
    JZ 0x004cf8bf                       ; 004cf704
        ;   XREF to: 004cf8bf (CONDITIONAL_JUMP)  ; LAB_004cf8bf
    XOR ESI,ESI                         ; 004cf70a
    MOV EDI,dword ptr [0x00682748]      ; 004cf70c | g_RedMask16
    MOV SI,word ptr [ESP + 0xb8]        ; 004cf712
    MOV CL,byte ptr [0x02d01f24]        ; 004cf71a | g_RedBitPosition
    AND EDI,ESI                         ; 004cf720
    SHR EDI,CL                          ; 004cf722
    MOV CL,byte ptr [0x02d01f2c]        ; 004cf724 | g_RedBitCount
    SHL EDI,CL                          ; 004cf72a
    AND EDI,0xff                        ; 004cf72c
    IMUL EDI,EAX                        ; 004cf732
    MOV DX,word ptr [EBX]               ; 004cf735
    MOV dword ptr [ESP + 0xb4],EDX      ; 004cf738
    MOV EDX,dword ptr [0x00682750]      ; 004cf73f | g_GreenMask16
    AND EDX,ESI                         ; 004cf745
    MOV CL,byte ptr [0x02d01f30]        ; 004cf747 | g_GreenBitPosition
    SHR EDX,CL                          ; 004cf74d
    MOV CL,byte ptr [0x02d01f38]        ; 004cf74f | g_GreenBitCount
    SHL EDX,CL                          ; 004cf755
    AND EDX,0xff                        ; 004cf757
    IMUL EDX,EAX                        ; 004cf75d
    AND ESI,dword ptr [0x00682758]      ; 004cf760 | g_BlueMask16
    MOV CL,byte ptr [0x02d01f3c]        ; 004cf766 | g_BlueBitPosition
    SHR ESI,CL                          ; 004cf76c
    MOV CL,byte ptr [0x02d01f44]        ; 004cf76e | g_BlueBitCount
    SHL ESI,CL                          ; 004cf774
    AND ESI,0xff                        ; 004cf776
    MOV dword ptr [ESP + 0x8c],ESI      ; 004cf77c
    XOR ESI,ESI                         ; 004cf783
    MOV ECX,dword ptr [0x00682748]      ; 004cf785 | g_RedMask16
    MOV SI,word ptr [ESP + 0xb4]        ; 004cf78b
    AND ECX,ESI                         ; 004cf793
    MOV dword ptr [ESP + 0x98],ECX      ; 004cf795
    MOV EBP,dword ptr [ESP + 0x98]      ; 004cf79c
    MOV CL,byte ptr [0x02d01f24]        ; 004cf7a3 | g_RedBitPosition
    SHR EBP,CL                          ; 004cf7a9
    MOV CL,byte ptr [0x02d01f2c]        ; 004cf7ab | g_RedBitCount
    SHL EBP,CL                          ; 004cf7b1
    MOV ECX,EBP                         ; 004cf7b3
    AND ECX,0xff                        ; 004cf7b5
    MOV dword ptr [ESP + 0x90],ECX      ; 004cf7bb
    MOV ECX,dword ptr [0x00682750]      ; 004cf7c2 | g_GreenMask16
    AND ECX,ESI                         ; 004cf7c8
    MOV dword ptr [ESP + 0x98],ECX      ; 004cf7ca
    MOV EBP,dword ptr [ESP + 0x98]      ; 004cf7d1
    MOV CL,byte ptr [0x02d01f30]        ; 004cf7d8 | g_GreenBitPosition
    SHR EBP,CL                          ; 004cf7de
    MOV CL,byte ptr [0x02d01f38]        ; 004cf7e0 | g_GreenBitCount
    SHL EBP,CL                          ; 004cf7e6
    MOV ECX,dword ptr [0x00682758]      ; 004cf7e8 | g_BlueMask16
    AND ECX,ESI                         ; 004cf7ee
    MOV dword ptr [ESP + 0x98],ECX      ; 004cf7f0
    MOV ESI,dword ptr [ESP + 0x98]      ; 004cf7f7
    MOV CL,byte ptr [0x02d01f3c]        ; 004cf7fe | g_BlueBitPosition
    SHR ESI,CL                          ; 004cf804
    MOV CL,byte ptr [0x02d01f44]        ; 004cf806 | g_BlueBitCount
    SHL ESI,CL                          ; 004cf80c
    MOV ECX,ESI                         ; 004cf80e
    MOV ESI,0xff                        ; 004cf810
    AND EBP,0xff                        ; 004cf815
    SUB ESI,EAX                         ; 004cf81b
    IMUL EBP,ESI                        ; 004cf81d
    AND ECX,0xff                        ; 004cf820
    MOV dword ptr [ESP + 0x94],ECX      ; 004cf826
    MOV ECX,dword ptr [ESP + 0x90]      ; 004cf82d
    IMUL ECX,ESI                        ; 004cf834
    ADD EDX,EBP                         ; 004cf837
    IMUL ESI,dword ptr [ESP + 0x94]     ; 004cf839
    ADD EDI,ECX                         ; 004cf841
    IMUL EAX,dword ptr [ESP + 0x8c]     ; 004cf843
    ADD EAX,ESI                         ; 004cf84b
    MOV EBP,EDX                         ; 004cf84d
    MOV dword ptr [ESP + 0x8c],EAX      ; 004cf84f
    MOV ECX,EAX                         ; 004cf856
    MOV EAX,EDI                         ; 004cf858
    XOR EDX,EDX                         ; 004cf85a
    SHR EAX,0x8                         ; 004cf85c
    MOV ESI,dword ptr [0x02d01f28]      ; 004cf85f | g_RedScaleFactor
    MOV dword ptr [ESP + 0x9c],EAX      ; 004cf865
    DIV ESI                             ; 004cf86c
    SHR EBP,0x8                         ; 004cf86e
    MOV EDI,dword ptr [0x02d01f34]      ; 004cf871 | g_GreenScaleFactor
    MOV dword ptr [ESP + 0x9c],EAX      ; 004cf877
    XOR EDX,EDX                         ; 004cf87e
    MOV EAX,EBP                         ; 004cf880
    DIV EDI                             ; 004cf882
    SHR ECX,0x8                         ; 004cf884
    MOV EBP,dword ptr [0x02d01f40]      ; 004cf887 | g_BlueScaleFactor
    MOV EDI,EAX                         ; 004cf88d
    XOR EDX,EDX                         ; 004cf88f
    MOV EAX,ECX                         ; 004cf891
    DIV EBP                             ; 004cf893
    MOV CL,byte ptr [0x02d01f24]        ; 004cf895 | g_RedBitPosition
    MOV EDX,dword ptr [ESP + 0x9c]      ; 004cf89b
    MOV ESI,EAX                         ; 004cf8a2
    MOV EAX,EDI                         ; 004cf8a4
    SHL EDX,CL                          ; 004cf8a6
    MOV CL,byte ptr [0x02d01f30]        ; 004cf8a8 | g_GreenBitPosition
    SHL EAX,CL                          ; 004cf8ae
    MOV CL,byte ptr [0x02d01f3c]        ; 004cf8b0 | g_BlueBitPosition
    OR EAX,EDX                          ; 004cf8b6
    SHL ESI,CL                          ; 004cf8b8
    OR EAX,ESI                          ; 004cf8ba
    MOV word ptr [EBX],AX               ; 004cf8bc
    MOV EDI,dword ptr [ESP + 0x84]      ; 004cf8bf
        ;   Label: LAB_004cf8bf
    MOV EBP,dword ptr [ESP + 0x4]       ; 004cf8c6
    MOV EDX,dword ptr [ESP + 0x8]       ; 004cf8ca
    ADD EBX,0x2                         ; 004cf8ce
    INC EDI                             ; 004cf8d1
    INC EBP                             ; 004cf8d2
    MOV dword ptr [ESP + 0x84],EDI      ; 004cf8d3
    MOV dword ptr [ESP + 0x4],EBP       ; 004cf8da
    CMP EDI,EDX                         ; 004cf8de
    JLE 0x004cf6ca                      ; 004cf8e0
        ;   XREF to: 004cf6ca (CONDITIONAL_JUMP)  ; LAB_004cf6ca
    MOV EAX,dword ptr [ESP + 0xa4]      ; 004cf8e6
        ;   Label: LAB_004cf8e6
    MOV EDX,dword ptr [ESP + 0x80]      ; 004cf8ed
    MOV ECX,dword ptr [ESP + 0x4]       ; 004cf8f4
    ADD EAX,0x4                         ; 004cf8f8
    MOV EBX,dword ptr [ESP + 0xc]       ; 004cf8fb
    MOV dword ptr [ESP + 0xa4],EAX      ; 004cf8ff
    MOV EAX,dword ptr [ESP + 0x14]      ; 004cf906
    INC EDX                             ; 004cf90a
    ADD ECX,EAX                         ; 004cf90b
    MOV dword ptr [ESP + 0x80],EDX      ; 004cf90d
    MOV dword ptr [ESP + 0x4],ECX       ; 004cf914
    CMP EDX,EBX                         ; 004cf918
    JG 0x004ce9a0                       ; 004cf91a
        ;   XREF to: 004ce9a0 (CONDITIONAL_JUMP)  ; LAB_004ce9a0
    JMP 0x004cf698                      ; 004cf920
        ;   XREF to: 004cf698 (UNCONDITIONAL_JUMP)  ; LAB_004cf698
    MOV ECX,dword ptr [ESP + 0xc]       ; 004cf925
        ;   Label: LAB_004cf925
    MOV EDI,dword ptr [ESP + 0xe8]      ; 004cf929
    CMP EDI,ECX                         ; 004cf930
    JG 0x004ce9a0                       ; 004cf932
        ;   XREF to: 004ce9a0 (CONDITIONAL_JUMP)  ; LAB_004ce9a0
    MOV ESI,EDX                         ; 004cf938
    MOV EDX,dword ptr [ESP + 0xe4]      ; 004cf93a
        ;   Label: LAB_004cf93a
    MOV ECX,dword ptr [ESP + 0xe4]      ; 004cf941
    MOV EAX,dword ptr [ESI + 0x2cf6a9c] ; 004cf948 | g_ScreenBufferArray | g_ScreenBufferArray[1]
    ADD EDX,EDX                         ; 004cf94e
    MOV EBP,dword ptr [ESP + 0x8]       ; 004cf950
    ADD EDX,EAX                         ; 004cf954
    CMP ECX,EBP                         ; 004cf956
    JG 0x004cf98c                       ; 004cf958
        ;   XREF to: 004cf98c (CONDITIONAL_JUMP)  ; LAB_004cf98c
    MOV EAX,dword ptr [ESP + 0x4]       ; 004cf95a
        ;   Label: LAB_004cf95a
    MOV AL,byte ptr [EAX]               ; 004cf95e
    AND EAX,0xff                        ; 004cf960
    CMP EAX,dword ptr [EBX + 0x3188]    ; 004cf965
    JZ 0x004cf977                       ; 004cf96b
        ;   XREF to: 004cf977 (CONDITIONAL_JUMP)  ; LAB_004cf977
    MOV EAX,dword ptr [ESP + 0xb8]      ; 004cf96d
    MOV word ptr [EDX],AX               ; 004cf974
    MOV EAX,dword ptr [ESP + 0x4]       ; 004cf977
        ;   Label: LAB_004cf977
    MOV EBP,dword ptr [ESP + 0x8]       ; 004cf97b
    INC ECX                             ; 004cf97f
    INC EAX                             ; 004cf980
    ADD EDX,0x2                         ; 004cf981
    MOV dword ptr [ESP + 0x4],EAX       ; 004cf984
    CMP ECX,EBP                         ; 004cf988
    JLE 0x004cf95a                      ; 004cf98a
        ;   XREF to: 004cf95a (CONDITIONAL_JUMP)  ; LAB_004cf95a
    MOV EAX,dword ptr [ESP + 0x14]      ; 004cf98c
        ;   Label: LAB_004cf98c
    MOV EDX,dword ptr [ESP + 0x4]       ; 004cf990
    MOV ECX,dword ptr [ESP + 0xc]       ; 004cf994
    ADD ESI,0x4                         ; 004cf998
    ADD EDX,EAX                         ; 004cf99b
    INC EDI                             ; 004cf99d
    MOV dword ptr [ESP + 0x4],EDX       ; 004cf99e
    CMP EDI,ECX                         ; 004cf9a2
    JG 0x004ce9a0                       ; 004cf9a4
        ;   XREF to: 004ce9a0 (CONDITIONAL_JUMP)  ; LAB_004ce9a0
    JMP 0x004cf93a                      ; 004cf9aa
        ;   XREF to: 004cf93a (UNCONDITIONAL_JUMP)  ; LAB_004cf93a
    CMP EDI,0x20                        ; 004cf9ac
        ;   Label: LAB_004cf9ac
    JNZ 0x004ce9a0                      ; 004cf9af
        ;   XREF to: 004ce9a0 (CONDITIONAL_JUMP)  ; LAB_004ce9a0
    MOV EAX,dword ptr [ESP + 0x10]      ; 004cf9b5
    LEA EBP,[EBX + 0xd64]               ; 004cf9b9
    SHL EAX,0xa                         ; 004cf9bf
    MOV ECX,dword ptr [ESP + 0xec]      ; 004cf9c2
    ADD EBP,EAX                         ; 004cf9c9
    CMP ECX,-0x1                        ; 004cf9cb
    JNZ 0x004cfafd                      ; 004cf9ce
        ;   XREF to: 004cfafd (CONDITIONAL_JUMP)  ; LAB_004cfafd
    MOV EDI,dword ptr [EBX + 0x1d64]    ; 004cf9d4
    LEA ESI,[EBX + EAX*0x1]             ; 004cf9da
    TEST EDI,EDI                        ; 004cf9dd
    JZ 0x004cfa78                       ; 004cf9df
        ;   XREF to: 004cfa78 (CONDITIONAL_JUMP)  ; LAB_004cfa78
    MOV ECX,dword ptr [ESP + 0xc]       ; 004cf9e5
    MOV EDI,dword ptr [ESP + 0xe8]      ; 004cf9e9
    CMP EDI,ECX                         ; 004cf9f0
    JG 0x004ce9a0                       ; 004cf9f2
        ;   XREF to: 004ce9a0 (CONDITIONAL_JUMP)  ; LAB_004ce9a0
    MOV EBX,EDX                         ; 004cf9f8
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004cf9fa
        ;   Label: LAB_004cf9fa
    MOV EDX,dword ptr [EBX + 0x2cf6a9c] ; 004cfa01 | g_ScreenBufferArray | g_ScreenBufferArray[1]
    SHL EAX,0x2                         ; 004cfa07
    ADD EDX,EAX                         ; 004cfa0a
    MOV EAX,dword ptr [ESP + 0x4]       ; 004cfa0c
    MOV AL,byte ptr [EAX]               ; 004cfa10
    AND EAX,0xff                        ; 004cfa12
    MOV ECX,dword ptr [ESI + EAX*0x4 + 0xd64] ; 004cfa17
    MOV EAX,dword ptr [ESP + 0x8]       ; 004cfa1e
    PUSH ECX                            ; 004cfa22
    SUB EAX,dword ptr [ESP + 0xe8]      ; 004cfa23
    INC EAX                             ; 004cfa2a
    PUSH EAX                            ; 004cfa2b
    PUSH EBP                            ; 004cfa2c
    MOV EAX,dword ptr [ESP + 0x10]      ; 004cfa2d
    PUSH EAX                            ; 004cfa31
    PUSH EDX                            ; 004cfa32
    CALL engine_font.cpp_drawAlphaBlendedPixels_FUN_004ce240 ; 004cfa33
        ;   XREF to: 004ce240 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_drawAlphaBlendedPixels_FUN_004ce240(uint * dest_buffer, uchar * src_indices, uint * color_table, int pixel_count, ...)
    ADD ESP,0x14                        ; 004cfa38
    MOV EAX,dword ptr [ESP + 0x8]       ; 004cfa3b
    SUB EAX,dword ptr [ESP + 0xe4]      ; 004cfa3f
    MOV ECX,dword ptr [ESP + 0x4]       ; 004cfa46
    INC EAX                             ; 004cfa4a
    ADD EBX,0x4                         ; 004cfa4b
    ADD ECX,EAX                         ; 004cfa4e
    MOV EAX,dword ptr [ESP + 0x14]      ; 004cfa50
    MOV dword ptr [ESP + 0x4],ECX       ; 004cfa54
    LEA EDX,[ECX + EAX*0x1]             ; 004cfa58
    INC EDI                             ; 004cfa5b
    MOV ECX,dword ptr [ESP + 0xc]       ; 004cfa5c
    MOV dword ptr [ESP + 0x4],EDX       ; 004cfa60
    CMP EDI,ECX                         ; 004cfa64
    JLE 0x004cf9fa                      ; 004cfa66
        ;   XREF to: 004cf9fa (CONDITIONAL_JUMP)  ; LAB_004cf9fa
    MOV EBX,dword ptr [ESP]             ; 004cfa68
    MOV EAX,EBX                         ; 004cfa6b
    ADD ESP,0xc8                        ; 004cfa6d
    POP EBP                             ; 004cfa73
    POP EDI                             ; 004cfa74
    POP ESI                             ; 004cfa75
    POP EBX                             ; 004cfa76
    RET                                 ; 004cfa77
    MOV EBP,dword ptr [ESP + 0xc]       ; 004cfa78
        ;   Label: LAB_004cfa78
    MOV EDI,dword ptr [ESP + 0xe8]      ; 004cfa7c
    CMP EDI,EBP                         ; 004cfa83
    JG 0x004ce9a0                       ; 004cfa85
        ;   XREF to: 004ce9a0 (CONDITIONAL_JUMP)  ; LAB_004ce9a0
    MOV EBP,EDX                         ; 004cfa8b
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004cfa8d
        ;   Label: LAB_004cfa8d
    MOV EDX,dword ptr [EBP + 0x2cf6a9c] ; 004cfa94 | g_ScreenBufferArray | g_ScreenBufferArray[1]
    SHL EAX,0x2                         ; 004cfa9a
    MOV ECX,dword ptr [ESP + 0xe4]      ; 004cfa9d
    ADD EDX,EAX                         ; 004cfaa4
    CMP ECX,dword ptr [ESP + 0x8]       ; 004cfaa6
    JG 0x004cfadd                       ; 004cfaaa
        ;   XREF to: 004cfadd (CONDITIONAL_JUMP)  ; LAB_004cfadd
    MOV EAX,dword ptr [ESP + 0x4]       ; 004cfaac
        ;   Label: LAB_004cfaac
    MOV AL,byte ptr [EAX]               ; 004cfab0
    AND EAX,0xff                        ; 004cfab2
    CMP EAX,dword ptr [EBX + 0x3188]    ; 004cfab7
    JZ 0x004cfac8                       ; 004cfabd
        ;   XREF to: 004cfac8 (CONDITIONAL_JUMP)  ; LAB_004cfac8
    MOV EAX,dword ptr [ESI + EAX*0x4 + 0xd64] ; 004cfabf
    MOV dword ptr [EDX],EAX             ; 004cfac6
    MOV EAX,dword ptr [ESP + 0x4]       ; 004cfac8
        ;   Label: LAB_004cfac8
    INC EAX                             ; 004cfacc
    INC ECX                             ; 004cfacd
    MOV dword ptr [ESP + 0x4],EAX       ; 004cface
    MOV EAX,dword ptr [ESP + 0x8]       ; 004cfad2
    ADD EDX,0x4                         ; 004cfad6
    CMP ECX,EAX                         ; 004cfad9
    JLE 0x004cfaac                      ; 004cfadb
        ;   XREF to: 004cfaac (CONDITIONAL_JUMP)  ; LAB_004cfaac
    MOV EAX,dword ptr [ESP + 0x14]      ; 004cfadd
        ;   Label: LAB_004cfadd
    MOV EDX,dword ptr [ESP + 0x4]       ; 004cfae1
    MOV ECX,dword ptr [ESP + 0xc]       ; 004cfae5
    ADD EBP,0x4                         ; 004cfae9
    ADD EDX,EAX                         ; 004cfaec
    INC EDI                             ; 004cfaee
    MOV dword ptr [ESP + 0x4],EDX       ; 004cfaef
    CMP EDI,ECX                         ; 004cfaf3
    JG 0x004ce9a0                       ; 004cfaf5
        ;   XREF to: 004ce9a0 (CONDITIONAL_JUMP)  ; LAB_004ce9a0
    JMP 0x004cfa8d                      ; 004cfafb
        ;   XREF to: 004cfa8d (UNCONDITIONAL_JUMP)  ; LAB_004cfa8d
    CMP ECX,-0x2                        ; 004cfafd
        ;   Label: LAB_004cfafd
    JNZ 0x004cfc25                      ; 004cfb00
        ;   XREF to: 004cfc25 (CONDITIONAL_JUMP)  ; LAB_004cfc25
    CMP dword ptr [EBX + 0x1d64],0x0    ; 004cfb06
    JZ 0x004cfba0                       ; 004cfb0d
        ;   XREF to: 004cfba0 (CONDITIONAL_JUMP)  ; LAB_004cfba0
    MOV ECX,dword ptr [ESP + 0xc]       ; 004cfb13
    MOV EDI,dword ptr [ESP + 0xe8]      ; 004cfb17
    CMP EDI,ECX                         ; 004cfb1e
    JG 0x004ce9a0                       ; 004cfb20
        ;   XREF to: 004ce9a0 (CONDITIONAL_JUMP)  ; LAB_004ce9a0
    MOV EBX,EDX                         ; 004cfb26
    MOV ESI,EBP                         ; 004cfb28
    MOV EDX,dword ptr [ESP + 0xe4]      ; 004cfb2a
        ;   Label: LAB_004cfb2a
    MOV EAX,dword ptr [EBX + 0x2cf6a9c] ; 004cfb31 | g_ScreenBufferArray | g_ScreenBufferArray[1]
    SHL EDX,0x2                         ; 004cfb37
    MOV EBP,dword ptr [ESP + 0xe4]      ; 004cfb3a
    ADD EDX,EAX                         ; 004cfb41
    MOV EAX,dword ptr [ESP + 0x8]       ; 004cfb43
    MOV ECX,dword ptr [0x02d7b414]      ; 004cfb47 | g_ShadowColor32
    SUB EAX,EBP                         ; 004cfb4d
    PUSH ECX                            ; 004cfb4f
    INC EAX                             ; 004cfb50
    PUSH EAX                            ; 004cfb51
    PUSH ESI                            ; 004cfb52
    MOV EAX,dword ptr [ESP + 0x10]      ; 004cfb53
    PUSH EAX                            ; 004cfb57
    PUSH EDX                            ; 004cfb58
    CALL engine_font.cpp_drawAlphaBlendedPixels_FUN_004ce240 ; 004cfb59
        ;   XREF to: 004ce240 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_drawAlphaBlendedPixels_FUN_004ce240(uint * dest_buffer, uchar * src_indices, uint * color_table, int pixel_count, ...)
    ADD ESP,0x14                        ; 004cfb5e
    MOV EAX,dword ptr [ESP + 0x8]       ; 004cfb61
    MOV EDX,dword ptr [ESP + 0xe4]      ; 004cfb65
    ADD EBX,0x4                         ; 004cfb6c
    SUB EAX,EDX                         ; 004cfb6f
    MOV ECX,dword ptr [ESP + 0x4]       ; 004cfb71
    INC EAX                             ; 004cfb75
    INC EDI                             ; 004cfb76
    ADD ECX,EAX                         ; 004cfb77
    MOV EAX,dword ptr [ESP + 0x14]      ; 004cfb79
    MOV dword ptr [ESP + 0x4],ECX       ; 004cfb7d
    LEA EBP,[ECX + EAX*0x1]             ; 004cfb81
    MOV EAX,dword ptr [ESP + 0xc]       ; 004cfb84
    MOV dword ptr [ESP + 0x4],EBP       ; 004cfb88
    CMP EDI,EAX                         ; 004cfb8c
    JLE 0x004cfb2a                      ; 004cfb8e
        ;   XREF to: 004cfb2a (CONDITIONAL_JUMP)  ; LAB_004cfb2a
    MOV EBX,dword ptr [ESP]             ; 004cfb90
    MOV EAX,EBX                         ; 004cfb93
    ADD ESP,0xc8                        ; 004cfb95
    POP EBP                             ; 004cfb9b
    POP EDI                             ; 004cfb9c
    POP ESI                             ; 004cfb9d
    POP EBX                             ; 004cfb9e
    RET                                 ; 004cfb9f
    MOV EBP,dword ptr [ESP + 0xc]       ; 004cfba0
        ;   Label: LAB_004cfba0
    MOV EDI,dword ptr [ESP + 0xe8]      ; 004cfba4
    CMP EDI,EBP                         ; 004cfbab
    JG 0x004ce9a0                       ; 004cfbad
        ;   XREF to: 004ce9a0 (CONDITIONAL_JUMP)  ; LAB_004ce9a0
    MOV ESI,EDX                         ; 004cfbb3
    MOV ECX,dword ptr [ESP + 0xe4]      ; 004cfbb5
        ;   Label: LAB_004cfbb5
    MOV EDX,dword ptr [ESP + 0xe4]      ; 004cfbbc
    MOV EAX,dword ptr [ESI + 0x2cf6a9c] ; 004cfbc3 | g_ScreenBufferArray | g_ScreenBufferArray[1]
    SHL ECX,0x2                         ; 004cfbc9
    MOV EBP,dword ptr [ESP + 0x8]       ; 004cfbcc
    ADD ECX,EAX                         ; 004cfbd0
    CMP EDX,EBP                         ; 004cfbd2
    JG 0x004cfc05                       ; 004cfbd4
        ;   XREF to: 004cfc05 (CONDITIONAL_JUMP)  ; LAB_004cfc05
    MOV EAX,dword ptr [ESP + 0x4]       ; 004cfbd6
        ;   Label: LAB_004cfbd6
    MOV AL,byte ptr [EAX]               ; 004cfbda
    AND EAX,0xff                        ; 004cfbdc
    CMP EAX,dword ptr [EBX + 0x3188]    ; 004cfbe1
    JZ 0x004cfbf0                       ; 004cfbe7
        ;   XREF to: 004cfbf0 (CONDITIONAL_JUMP)  ; LAB_004cfbf0
    MOV EAX,[0x02d7b414]                ; 004cfbe9 | g_ShadowColor32
    MOV dword ptr [ECX],EAX             ; 004cfbee
    MOV EAX,dword ptr [ESP + 0x4]       ; 004cfbf0
        ;   Label: LAB_004cfbf0
    MOV EBP,dword ptr [ESP + 0x8]       ; 004cfbf4
    INC EDX                             ; 004cfbf8
    INC EAX                             ; 004cfbf9
    ADD ECX,0x4                         ; 004cfbfa
    MOV dword ptr [ESP + 0x4],EAX       ; 004cfbfd
    CMP EDX,EBP                         ; 004cfc01
    JLE 0x004cfbd6                      ; 004cfc03
        ;   XREF to: 004cfbd6 (CONDITIONAL_JUMP)  ; LAB_004cfbd6
    MOV EAX,dword ptr [ESP + 0x14]      ; 004cfc05
        ;   Label: LAB_004cfc05
    MOV EDX,dword ptr [ESP + 0x4]       ; 004cfc09
    MOV ECX,dword ptr [ESP + 0xc]       ; 004cfc0d
    ADD ESI,0x4                         ; 004cfc11
    ADD EDX,EAX                         ; 004cfc14
    INC EDI                             ; 004cfc16
    MOV dword ptr [ESP + 0x4],EDX       ; 004cfc17
    CMP EDI,ECX                         ; 004cfc1b
    JG 0x004ce9a0                       ; 004cfc1d
        ;   XREF to: 004ce9a0 (CONDITIONAL_JUMP)  ; LAB_004ce9a0
    JMP 0x004cfbb5                      ; 004cfc23
        ;   XREF to: 004cfbb5 (UNCONDITIONAL_JUMP)  ; LAB_004cfbb5
    CMP ECX,-0x3                        ; 004cfc25
        ;   Label: LAB_004cfc25
    JNZ 0x004cfd4d                      ; 004cfc28
        ;   XREF to: 004cfd4d (CONDITIONAL_JUMP)  ; LAB_004cfd4d
    CMP dword ptr [EBX + 0x1d64],0x0    ; 004cfc2e
    JZ 0x004cfcc8                       ; 004cfc35
        ;   XREF to: 004cfcc8 (CONDITIONAL_JUMP)  ; LAB_004cfcc8
    MOV ECX,dword ptr [ESP + 0xc]       ; 004cfc3b
    MOV EDI,dword ptr [ESP + 0xe8]      ; 004cfc3f
    CMP EDI,ECX                         ; 004cfc46
    JG 0x004ce9a0                       ; 004cfc48
        ;   XREF to: 004ce9a0 (CONDITIONAL_JUMP)  ; LAB_004ce9a0
    MOV EBX,EDX                         ; 004cfc4e
    MOV ESI,EBP                         ; 004cfc50
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004cfc52
        ;   Label: LAB_004cfc52
    MOV EDX,dword ptr [EBX + 0x2cf6a9c] ; 004cfc59 | g_ScreenBufferArray | g_ScreenBufferArray[1]
    SHL EAX,0x2                         ; 004cfc5f
    MOV ECX,dword ptr [ESP + 0xe4]      ; 004cfc62
    ADD EDX,EAX                         ; 004cfc69
    MOV EAX,dword ptr [ESP + 0x8]       ; 004cfc6b
    MOV EBP,dword ptr [0x02d7b424]      ; 004cfc6f | g_DefaultTextColor
    SUB EAX,ECX                         ; 004cfc75
    PUSH EBP                            ; 004cfc77
    INC EAX                             ; 004cfc78
    PUSH EAX                            ; 004cfc79
    PUSH ESI                            ; 004cfc7a
    MOV EBP,dword ptr [ESP + 0x10]      ; 004cfc7b
    PUSH EBP                            ; 004cfc7f
    PUSH EDX                            ; 004cfc80
    CALL engine_font.cpp_drawAlphaBlendedPixels_FUN_004ce240 ; 004cfc81
        ;   XREF to: 004ce240 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_drawAlphaBlendedPixels_FUN_004ce240(uint * dest_buffer, uchar * src_indices, uint * color_table, int pixel_count, ...)
    ADD ESP,0x14                        ; 004cfc86
    MOV EAX,dword ptr [ESP + 0x8]       ; 004cfc89
    MOV EDX,dword ptr [ESP + 0xe4]      ; 004cfc8d
    ADD EBX,0x4                         ; 004cfc94
    SUB EAX,EDX                         ; 004cfc97
    MOV ECX,dword ptr [ESP + 0x4]       ; 004cfc99
    INC EAX                             ; 004cfc9d
    INC EDI                             ; 004cfc9e
    ADD ECX,EAX                         ; 004cfc9f
    MOV EAX,dword ptr [ESP + 0x14]      ; 004cfca1
    MOV dword ptr [ESP + 0x4],ECX       ; 004cfca5
    LEA EBP,[ECX + EAX*0x1]             ; 004cfca9
    MOV EAX,dword ptr [ESP + 0xc]       ; 004cfcac
    MOV dword ptr [ESP + 0x4],EBP       ; 004cfcb0
    CMP EDI,EAX                         ; 004cfcb4
    JLE 0x004cfc52                      ; 004cfcb6
        ;   XREF to: 004cfc52 (CONDITIONAL_JUMP)  ; LAB_004cfc52
    MOV EBX,dword ptr [ESP]             ; 004cfcb8
    MOV EAX,EBX                         ; 004cfcbb
    ADD ESP,0xc8                        ; 004cfcbd
    POP EBP                             ; 004cfcc3
    POP EDI                             ; 004cfcc4
    POP ESI                             ; 004cfcc5
    POP EBX                             ; 004cfcc6
    RET                                 ; 004cfcc7
    MOV EBP,dword ptr [ESP + 0xc]       ; 004cfcc8
        ;   Label: LAB_004cfcc8
    MOV EDI,dword ptr [ESP + 0xe8]      ; 004cfccc
    CMP EDI,EBP                         ; 004cfcd3
    JG 0x004ce9a0                       ; 004cfcd5
        ;   XREF to: 004ce9a0 (CONDITIONAL_JUMP)  ; LAB_004ce9a0
    MOV ESI,EDX                         ; 004cfcdb
    MOV EDX,dword ptr [ESP + 0xe4]      ; 004cfcdd
        ;   Label: LAB_004cfcdd
    MOV ECX,dword ptr [ESP + 0xe4]      ; 004cfce4
    MOV EAX,dword ptr [ESI + 0x2cf6a9c] ; 004cfceb | g_ScreenBufferArray | g_ScreenBufferArray[1]
    SHL EDX,0x2                         ; 004cfcf1
    MOV EBP,dword ptr [ESP + 0x8]       ; 004cfcf4
    ADD EDX,EAX                         ; 004cfcf8
    CMP ECX,EBP                         ; 004cfcfa
    JG 0x004cfd2d                       ; 004cfcfc
        ;   XREF to: 004cfd2d (CONDITIONAL_JUMP)  ; LAB_004cfd2d
    MOV EAX,dword ptr [ESP + 0x4]       ; 004cfcfe
        ;   Label: LAB_004cfcfe
    MOV AL,byte ptr [EAX]               ; 004cfd02
    AND EAX,0xff                        ; 004cfd04
    CMP EAX,dword ptr [EBX + 0x3188]    ; 004cfd09
    JZ 0x004cfd18                       ; 004cfd0f
        ;   XREF to: 004cfd18 (CONDITIONAL_JUMP)  ; LAB_004cfd18
    MOV EAX,[0x02d7b424]                ; 004cfd11 | g_DefaultTextColor
    MOV dword ptr [EDX],EAX             ; 004cfd16
    MOV EAX,dword ptr [ESP + 0x4]       ; 004cfd18
        ;   Label: LAB_004cfd18
    MOV EBP,dword ptr [ESP + 0x8]       ; 004cfd1c
    INC ECX                             ; 004cfd20
    INC EAX                             ; 004cfd21
    ADD EDX,0x4                         ; 004cfd22
    MOV dword ptr [ESP + 0x4],EAX       ; 004cfd25
    CMP ECX,EBP                         ; 004cfd29
    JLE 0x004cfcfe                      ; 004cfd2b
        ;   XREF to: 004cfcfe (CONDITIONAL_JUMP)  ; LAB_004cfcfe
    MOV EAX,dword ptr [ESP + 0x14]      ; 004cfd2d
        ;   Label: LAB_004cfd2d
    MOV EDX,dword ptr [ESP + 0x4]       ; 004cfd31
    MOV ECX,dword ptr [ESP + 0xc]       ; 004cfd35
    ADD ESI,0x4                         ; 004cfd39
    ADD EDX,EAX                         ; 004cfd3c
    INC EDI                             ; 004cfd3e
    MOV dword ptr [ESP + 0x4],EDX       ; 004cfd3f
    CMP EDI,ECX                         ; 004cfd43
    JG 0x004ce9a0                       ; 004cfd45
        ;   XREF to: 004ce9a0 (CONDITIONAL_JUMP)  ; LAB_004ce9a0
    JMP 0x004cfcdd                      ; 004cfd4b
        ;   XREF to: 004cfcdd (UNCONDITIONAL_JUMP)  ; LAB_004cfcdd
    MOV EAX,dword ptr [EBX + 0x1d64]    ; 004cfd4d
        ;   Label: LAB_004cfd4d
    MOV ESI,dword ptr [ECX*0x4 + 0x2d01220] ; 004cfd53 | g_ColorTable32
    TEST EAX,EAX                        ; 004cfd5a
    JZ 0x004cfde5                       ; 004cfd5c
        ;   XREF to: 004cfde5 (CONDITIONAL_JUMP)  ; LAB_004cfde5
    MOV EBX,dword ptr [ESP + 0xc]       ; 004cfd62
    MOV EDI,dword ptr [ESP + 0xe8]      ; 004cfd66
    CMP EDI,EBX                         ; 004cfd6d
    JG 0x004ce9a0                       ; 004cfd6f
        ;   XREF to: 004ce9a0 (CONDITIONAL_JUMP)  ; LAB_004ce9a0
    MOV EBX,EDX                         ; 004cfd75
    MOV EDX,dword ptr [ESP + 0xe4]      ; 004cfd77
        ;   Label: LAB_004cfd77
    MOV EAX,dword ptr [EBX + 0x2cf6a9c] ; 004cfd7e | g_ScreenBufferArray | g_ScreenBufferArray[1]
    SHL EDX,0x2                         ; 004cfd84
    MOV ECX,dword ptr [ESP + 0xe4]      ; 004cfd87
    ADD EDX,EAX                         ; 004cfd8e
    MOV EAX,dword ptr [ESP + 0x8]       ; 004cfd90
    SUB EAX,ECX                         ; 004cfd94
    PUSH ESI                            ; 004cfd96
    INC EAX                             ; 004cfd97
    PUSH EAX                            ; 004cfd98
    PUSH EBP                            ; 004cfd99
    MOV EAX,dword ptr [ESP + 0x10]      ; 004cfd9a
    PUSH EAX                            ; 004cfd9e
    PUSH EDX                            ; 004cfd9f
    CALL engine_font.cpp_drawAlphaBlendedPixels_FUN_004ce240 ; 004cfda0
        ;   XREF to: 004ce240 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_drawAlphaBlendedPixels_FUN_004ce240(uint * dest_buffer, uchar * src_indices, uint * color_table, int pixel_count, ...)
    ADD ESP,0x14                        ; 004cfda5
    MOV EAX,dword ptr [ESP + 0x8]       ; 004cfda8
    SUB EAX,dword ptr [ESP + 0xe4]      ; 004cfdac
    MOV ECX,dword ptr [ESP + 0x4]       ; 004cfdb3
    INC EAX                             ; 004cfdb7
    ADD EBX,0x4                         ; 004cfdb8
    ADD ECX,EAX                         ; 004cfdbb
    MOV EAX,dword ptr [ESP + 0x14]      ; 004cfdbd
    MOV dword ptr [ESP + 0x4],ECX       ; 004cfdc1
    LEA EDX,[ECX + EAX*0x1]             ; 004cfdc5
    INC EDI                             ; 004cfdc8
    MOV ECX,dword ptr [ESP + 0xc]       ; 004cfdc9
    MOV dword ptr [ESP + 0x4],EDX       ; 004cfdcd
    CMP EDI,ECX                         ; 004cfdd1
    JLE 0x004cfd77                      ; 004cfdd3
        ;   XREF to: 004cfd77 (CONDITIONAL_JUMP)  ; LAB_004cfd77
    MOV EBX,dword ptr [ESP]             ; 004cfdd5
    MOV EAX,EBX                         ; 004cfdd8
    ADD ESP,0xc8                        ; 004cfdda
    POP EBP                             ; 004cfde0
    POP EDI                             ; 004cfde1
    POP ESI                             ; 004cfde2
    POP EBX                             ; 004cfde3
    RET                                 ; 004cfde4
    MOV EAX,dword ptr [ESP + 0xe8]      ; 004cfde5
        ;   Label: LAB_004cfde5
    MOV ECX,dword ptr [ESP + 0xc]       ; 004cfdec
    MOV dword ptr [ESP + 0xa0],EAX      ; 004cfdf0
    CMP EAX,ECX                         ; 004cfdf7
    JG 0x004ce9a0                       ; 004cfdf9
        ;   XREF to: 004ce9a0 (CONDITIONAL_JUMP)  ; LAB_004ce9a0
    MOV EDI,EDX                         ; 004cfdff
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004cfe01
        ;   Label: LAB_004cfe01
    MOV EDX,dword ptr [ESP + 0xe4]      ; 004cfe08
    MOV ECX,dword ptr [EDI + 0x2cf6a9c] ; 004cfe0f | g_ScreenBufferArray | g_ScreenBufferArray[1]
    SHL EAX,0x2                         ; 004cfe15
    MOV EBP,dword ptr [ESP + 0x8]       ; 004cfe18
    ADD ECX,EAX                         ; 004cfe1c
    CMP EDX,EBP                         ; 004cfe1e
    JG 0x004cfe4c                       ; 004cfe20
        ;   XREF to: 004cfe4c (CONDITIONAL_JUMP)  ; LAB_004cfe4c
    MOV EAX,dword ptr [ESP + 0x4]       ; 004cfe22
        ;   Label: LAB_004cfe22
    MOV AL,byte ptr [EAX]               ; 004cfe26
    AND EAX,0xff                        ; 004cfe28
    CMP EAX,dword ptr [EBX + 0x3188]    ; 004cfe2d
    JZ 0x004cfe37                       ; 004cfe33
        ;   XREF to: 004cfe37 (CONDITIONAL_JUMP)  ; LAB_004cfe37
    MOV dword ptr [ECX],ESI             ; 004cfe35
    MOV EAX,dword ptr [ESP + 0x4]       ; 004cfe37
        ;   Label: LAB_004cfe37
    MOV EBP,dword ptr [ESP + 0x8]       ; 004cfe3b
    INC EDX                             ; 004cfe3f
    INC EAX                             ; 004cfe40
    ADD ECX,0x4                         ; 004cfe41
    MOV dword ptr [ESP + 0x4],EAX       ; 004cfe44
    CMP EDX,EBP                         ; 004cfe48
    JLE 0x004cfe22                      ; 004cfe4a
        ;   XREF to: 004cfe22 (CONDITIONAL_JUMP)  ; LAB_004cfe22
    MOV EBP,dword ptr [ESP + 0xa0]      ; 004cfe4c
        ;   Label: LAB_004cfe4c
    MOV EAX,dword ptr [ESP + 0x14]      ; 004cfe53
    MOV EDX,dword ptr [ESP + 0x4]       ; 004cfe57
    MOV ECX,dword ptr [ESP + 0xc]       ; 004cfe5b
    ADD EDI,0x4                         ; 004cfe5f
    INC EBP                             ; 004cfe62
    ADD EDX,EAX                         ; 004cfe63
    MOV dword ptr [ESP + 0xa0],EBP      ; 004cfe65
    MOV dword ptr [ESP + 0x4],EDX       ; 004cfe6c
    CMP EBP,ECX                         ; 004cfe70
    JG 0x004ce9a0                       ; 004cfe72
        ;   XREF to: 004ce9a0 (CONDITIONAL_JUMP)  ; LAB_004ce9a0
    JMP 0x004cfe01                      ; 004cfe78
        ;   XREF to: 004cfe01 (UNCONDITIONAL_JUMP)  ; LAB_004cfe01

