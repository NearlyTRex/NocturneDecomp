; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_font_cpp_CBitFont_showExtendedFontTest_FUN_00493760(CBitFont *this_ptr,int screen_width,int screen_height)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   screen_width
; int              Stack[0xc]:4   screen_height
; Local Variables:
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
; Referenced Globals:
;   undefined4 DAT_00581aa2
;   undefined4 DAT_00581ab0
;   undefined4 DAT_00581ac5
;   TerminatedCString s_maxCharHght_d_00581ad0
;   undefined4 DAT_00581ae0
;   int g_ClipLeft
;   int g_ClipTop
;   int g_ClipRight
;   int g_ClipBottom
;   int g_ActiveRenderColor
;
; Called Functions:
;   engine_2d.c_drawLine_FUN_004015a0
;   engine_2d.c_fillRectColor_FUN_00403e60
;   engine_font.cpp_CBitFont_drawCharacter_FUN_004916c0
;   engine_font.cpp_CBitFont_drawText_FUN_00490980
;   engine_font.cpp_CBitFont_drawTextF_FUN_00490b20
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0
;   engine_font.cpp_CBitFont_getCharWidth_FUN_004930b0
;   engine_font.cpp_CBitFont_getCharYOffset_FUN_00493110
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00493760
        ;   Label: engine_font.cpp_CBitFont_showExtendedFontTest_FUN_00493760
    PUSH ESI                            ; 00493761
    PUSH EDI                            ; 00493762
    PUSH EBP                            ; 00493763
    MOV EBP,ESP                         ; 00493764
    SUB ESP,0x30                        ; 00493766
    MOV ESI,dword ptr [EBP + 0x14]      ; 00493769
    MOV EDX,dword ptr [ESI + 0x316c]    ; 0049376c
    MOV EAX,dword ptr [ESI + 0x3178]    ; 00493772
    ADD EDX,EAX                         ; 00493778
    MOV dword ptr [EBP + -0x30],EDX     ; 0049377a
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0049377d
    LEA EAX,[EDX*0x4 + 0x0]             ; 00493780
    SUB EAX,EDX                         ; 00493787
    MOV ECX,0x1e0                       ; 00493789
    SHL EAX,0x2                         ; 0049378e
    XOR EDX,EDX                         ; 00493791
    DIV ECX                             ; 00493793
    MOV EDX,dword ptr [EBP + -0x30]     ; 00493795
    ADD EDX,EAX                         ; 00493798
    PUSH 0x0                            ; 0049379a
    MOV dword ptr [EBP + -0x2c],EDX     ; 0049379c
    MOV EDX,dword ptr [0x01c00c64]      ; 0049379f | g_ClipBottom
    PUSH EDX                            ; 004937a5
    MOV ECX,dword ptr [0x01c00c60]      ; 004937a6 | g_ClipRight
    PUSH ECX                            ; 004937ac
    MOV EAX,[0x01c00c5c]                ; 004937ad | g_ClipTop
    PUSH EAX                            ; 004937b2
    MOV EDX,dword ptr [0x01c00c58]      ; 004937b3 | g_ClipLeft
    MOV EDI,0xa                         ; 004937b9
    PUSH EDX                            ; 004937be
    MOV EBX,EDI                         ; 004937bf
    CALL engine_2d.c_fillRectColor_FUN_00403e60 ; 004937c1
        ;   XREF to: 00403e60 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectColor_FUN_00403e60(int x1, int y1, int x2, int y2, ...)
    MOV EAX,dword ptr [EBP + 0x18]      ; 004937c6
    ADD ESP,0x14                        ; 004937c9
    XOR ECX,ECX                         ; 004937cc
    DEC EAX                             ; 004937ce
    MOV dword ptr [EBP + -0x4],ECX      ; 004937cf
    MOV dword ptr [EBP + -0x28],EAX     ; 004937d2
    PUSH -0x1                           ; 004937d5
        ;   Label: LAB_004937d5
    PUSH 0x6                            ; 004937d7
    PUSH EBX                            ; 004937d9
    PUSH EDI                            ; 004937da
    MOV EAX,dword ptr [EBP + -0x4]      ; 004937db
    PUSH EAX                            ; 004937de
    PUSH ESI                            ; 004937df
    CALL engine_font.cpp_CBitFont_drawCharacter_FUN_004916c0 ; 004937e0
        ;   XREF to: 004916c0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawCharacter_FUN_004916c0(CBitFont * this_ptr, int character_code, int x, int y, ...)
    INC EAX                             ; 004937e5
    ADD EDI,EAX                         ; 004937e6
    MOV EAX,dword ptr [ESI + 0x3168]    ; 004937e8
    LEA EDX,[EDI + EAX*0x1]             ; 004937ee
    MOV EAX,dword ptr [ESI + 0x3174]    ; 004937f1
    ADD EAX,EDX                         ; 004937f7
    MOV EDX,dword ptr [EBP + 0x18]      ; 004937f9
    INC EAX                             ; 004937fc
    ADD ESP,0x18                        ; 004937fd
    CMP EAX,EDX                         ; 00493800
    JBE 0x00493894                      ; 00493802
        ;   XREF to: 00493894 (CONDITIONAL_JUMP)  ; LAB_00493894
    MOV EAX,dword ptr [ESI + 0x316c]    ; 00493808
    MOV ECX,dword ptr [EBP + 0x1c]      ; 0049380e
    ADD EAX,EBX                         ; 00493811
    CMP EAX,ECX                         ; 00493813
    JNC 0x0049388a                      ; 00493815
        ;   XREF to: 0049388a (CONDITIONAL_JUMP)  ; LAB_0049388a
    LEA EAX,[EBX + -0x1]                ; 00493817
    PUSH EAX                            ; 0049381a
    MOV EDX,dword ptr [EBP + -0x28]     ; 0049381b
    PUSH EDX                            ; 0049381e
    PUSH EAX                            ; 0049381f
    MOV EDI,0x4                         ; 00493820
    PUSH 0x3                            ; 00493825
    MOV dword ptr [0x01c00c70],EDI      ; 00493827 | g_ActiveRenderColor
    CALL engine_2d.c_drawLine_FUN_004015a0 ; 0049382d
        ;   XREF to: 004015a0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004015a0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 00493832
    PUSH 0xc5                           ; 00493835
    PUSH ESI                            ; 0049383a
    MOV dword ptr [0x01c00c70],EDI      ; 0049383b | g_ActiveRenderColor
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0 ; 00493841
        ;   XREF to: 004930e0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 00493846
    ADD EAX,EBX                         ; 00493849
    PUSH EAX                            ; 0049384b
    MOV EDI,dword ptr [EBP + -0x28]     ; 0049384c
    PUSH EDI                            ; 0049384f
    PUSH 0xc5                           ; 00493850
    PUSH ESI                            ; 00493855
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0 ; 00493856
        ;   XREF to: 004930e0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 0049385b
    ADD EAX,EBX                         ; 0049385e
    PUSH EAX                            ; 00493860
    PUSH 0x3                            ; 00493861
    CALL engine_2d.c_drawLine_FUN_004015a0 ; 00493863
        ;   XREF to: 004015a0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004015a0(int x1, int y1, int x2, int y2)
    MOV dword ptr [0x01c00c70],0x4      ; 00493868 | g_ActiveRenderColor
    MOV EAX,dword ptr [ESI + 0x316c]    ; 00493872
    ADD ESP,0x10                        ; 00493878
    ADD EAX,EBX                         ; 0049387b
    PUSH EAX                            ; 0049387d
    PUSH EDI                            ; 0049387e
    PUSH EAX                            ; 0049387f
    PUSH 0x3                            ; 00493880
    CALL engine_2d.c_drawLine_FUN_004015a0 ; 00493882
        ;   XREF to: 004015a0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004015a0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 00493887
    MOV ECX,dword ptr [EBP + -0x2c]     ; 0049388a
        ;   Label: LAB_0049388a
    MOV EDI,0xa                         ; 0049388d
    ADD EBX,ECX                         ; 00493892
    MOV EAX,dword ptr [EBP + -0x4]      ; 00493894
        ;   Label: LAB_00493894
    INC EAX                             ; 00493897
    MOV dword ptr [EBP + -0x4],EAX      ; 00493898
    CMP EAX,0x7f                        ; 0049389b
    JL 0x004937d5                       ; 0049389e
        ;   XREF to: 004937d5 (CONDITIONAL_JUMP)  ; LAB_004937d5
    MOV EAX,dword ptr [ESI + 0x316c]    ; 004938a4
    MOV ECX,dword ptr [EBP + 0x1c]      ; 004938aa
    ADD EAX,EBX                         ; 004938ad
    CMP EAX,ECX                         ; 004938af
    JNC 0x00493929                      ; 004938b1
        ;   XREF to: 00493929 (CONDITIONAL_JUMP)  ; LAB_00493929
    MOV EDI,0x4                         ; 004938b3
    LEA EAX,[EBX + -0x1]                ; 004938b8
    MOV dword ptr [0x01c00c70],EDI      ; 004938bb | g_ActiveRenderColor
    MOV EDI,dword ptr [EBP + 0x18]      ; 004938c1
    PUSH EAX                            ; 004938c4
    DEC EDI                             ; 004938c5
    PUSH EDI                            ; 004938c6
    PUSH EAX                            ; 004938c7
    PUSH 0x3                            ; 004938c8
    CALL engine_2d.c_drawLine_FUN_004015a0 ; 004938ca
        ;   XREF to: 004015a0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004015a0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 004938cf
    PUSH 0xc5                           ; 004938d2
    MOV EAX,0x4                         ; 004938d7
    PUSH ESI                            ; 004938dc
    MOV [0x01c00c70],EAX                ; 004938dd | g_ActiveRenderColor
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0 ; 004938e2
        ;   XREF to: 004930e0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004938e7
    ADD EAX,EBX                         ; 004938ea
    PUSH EAX                            ; 004938ec
    PUSH EDI                            ; 004938ed
    PUSH 0xc5                           ; 004938ee
    PUSH ESI                            ; 004938f3
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0 ; 004938f4
        ;   XREF to: 004930e0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004938f9
    ADD EAX,EBX                         ; 004938fc
    PUSH EAX                            ; 004938fe
    PUSH 0x3                            ; 004938ff
    CALL engine_2d.c_drawLine_FUN_004015a0 ; 00493901
        ;   XREF to: 004015a0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004015a0(int x1, int y1, int x2, int y2)
    MOV EAX,dword ptr [ESI + 0x316c]    ; 00493906
    ADD ESP,0x10                        ; 0049390c
    ADD EAX,EBX                         ; 0049390f
    PUSH EAX                            ; 00493911
    PUSH EDI                            ; 00493912
    PUSH EAX                            ; 00493913
    MOV EDX,0x4                         ; 00493914
    PUSH 0x3                            ; 00493919
    MOV dword ptr [0x01c00c70],EDX      ; 0049391b | g_ActiveRenderColor
    CALL engine_2d.c_drawLine_FUN_004015a0 ; 00493921
        ;   XREF to: 004015a0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004015a0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 00493926
    MOV ECX,dword ptr [EBP + -0x2c]     ; 00493929
        ;   Label: LAB_00493929
    MOV EAX,dword ptr [ESI + 0x316c]    ; 0049392c
    ADD EBX,ECX                         ; 00493932
    MOV EDI,dword ptr [EBP + 0x1c]      ; 00493934
    ADD EAX,EBX                         ; 00493937
    CMP EAX,EDI                         ; 00493939
    JC 0x00493c48                       ; 0049393b
        ;   XREF to: 00493c48 (CONDITIONAL_JUMP)  ; LAB_00493c48
    MOV EAX,0xa                         ; 00493941
        ;   Label: LAB_00493941
    MOV EDI,0x7f                        ; 00493946
    MOV dword ptr [EBP + -0xc],EAX      ; 0049394b
    PUSH -0x1                           ; 0049394e
        ;   Label: LAB_0049394e
    PUSH 0x6                            ; 00493950
    PUSH EBX                            ; 00493952
    MOV EDX,dword ptr [EBP + -0xc]      ; 00493953
    PUSH EDX                            ; 00493956
    PUSH EDI                            ; 00493957
    PUSH ESI                            ; 00493958
    CALL engine_font.cpp_CBitFont_drawCharacter_FUN_004916c0 ; 00493959
        ;   XREF to: 004916c0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawCharacter_FUN_004916c0(CBitFont * this_ptr, int character_code, int x, int y, ...)
    MOV ECX,dword ptr [EBP + -0xc]      ; 0049395e
    INC EAX                             ; 00493961
    INC EDI                             ; 00493962
    ADD ECX,EAX                         ; 00493963
    ADD ESP,0x18                        ; 00493965
    MOV dword ptr [EBP + -0xc],ECX      ; 00493968
    CMP EDI,0x90                        ; 0049396b
    JL 0x0049394e                       ; 00493971
        ;   XREF to: 0049394e (CONDITIONAL_JUMP)  ; LAB_0049394e
    MOV EDI,dword ptr [EBP + -0x2c]     ; 00493973
    ADD EBX,EDI                         ; 00493976
    PUSH -0x1                           ; 00493978
    MOV EAX,EBX                         ; 0049397a
    PUSH 0x6                            ; 0049397c
    SUB EAX,EDI                         ; 0049397e
    PUSH EAX                            ; 00493980
    MOV EAX,dword ptr [EBP + 0x18]      ; 00493981
    SHR EAX,0x1                         ; 00493984
    PUSH EAX                            ; 00493986
    PUSH 0x581aa2                       ; 00493987 | DAT_00581aa2
    PUSH ESI                            ; 0049398c
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 0049398d
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_00490980(CBitFont * this_ptr, char * text, int x, int y, ...)
    MOV EAX,dword ptr [ESI + 0x316c]    ; 00493992
    MOV ECX,dword ptr [EBP + 0x1c]      ; 00493998
    ADD EAX,EBX                         ; 0049399b
    ADD ESP,0x18                        ; 0049399d
    CMP EAX,ECX                         ; 004939a0
    JC 0x00493cc3                       ; 004939a2
        ;   XREF to: 00493cc3 (CONDITIONAL_JUMP)  ; LAB_00493cc3
    MOV ECX,0xa                         ; 004939a8
        ;   Label: LAB_004939a8
    MOV EDI,0x90                        ; 004939ad
    MOV dword ptr [EBP + -0x10],ECX     ; 004939b2
    PUSH -0x1                           ; 004939b5
        ;   Label: LAB_004939b5
    PUSH 0x6                            ; 004939b7
    PUSH EBX                            ; 004939b9
    MOV EAX,dword ptr [EBP + -0x10]     ; 004939ba
    PUSH EAX                            ; 004939bd
    PUSH EDI                            ; 004939be
    PUSH ESI                            ; 004939bf
    CALL engine_font.cpp_CBitFont_drawCharacter_FUN_004916c0 ; 004939c0
        ;   XREF to: 004916c0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawCharacter_FUN_004916c0(CBitFont * this_ptr, int character_code, int x, int y, ...)
    MOV EDX,dword ptr [EBP + -0x10]     ; 004939c5
    INC EAX                             ; 004939c8
    INC EDI                             ; 004939c9
    ADD EDX,EAX                         ; 004939ca
    ADD ESP,0x18                        ; 004939cc
    MOV dword ptr [EBP + -0x10],EDX     ; 004939cf
    CMP EDI,0xa0                        ; 004939d2
    JL 0x004939b5                       ; 004939d8
        ;   XREF to: 004939b5 (CONDITIONAL_JUMP)  ; LAB_004939b5
    MOV ECX,dword ptr [EBP + -0x2c]     ; 004939da
    ADD EBX,ECX                         ; 004939dd
    PUSH -0x1                           ; 004939df
    MOV EAX,EBX                         ; 004939e1
    PUSH 0x6                            ; 004939e3
    SUB EAX,ECX                         ; 004939e5
    PUSH EAX                            ; 004939e7
    MOV EAX,dword ptr [EBP + 0x18]      ; 004939e8
    SHR EAX,0x1                         ; 004939eb
    PUSH EAX                            ; 004939ed
    PUSH 0x581ab0                       ; 004939ee | DAT_00581ab0
    PUSH ESI                            ; 004939f3
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 004939f4
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_00490980(CBitFont * this_ptr, char * text, int x, int y, ...)
    MOV EAX,dword ptr [ESI + 0x316c]    ; 004939f9
    MOV EDX,dword ptr [EBP + 0x1c]      ; 004939ff
    ADD EAX,EBX                         ; 00493a02
    ADD ESP,0x18                        ; 00493a04
    CMP EAX,EDX                         ; 00493a07
    JC 0x00493d3e                       ; 00493a09
        ;   XREF to: 00493d3e (CONDITIONAL_JUMP)  ; LAB_00493d3e
    MOV ECX,0xa                         ; 00493a0f
        ;   Label: LAB_00493a0f
    MOV EDI,0xa0                        ; 00493a14
    MOV dword ptr [EBP + -0x14],ECX     ; 00493a19
    PUSH -0x1                           ; 00493a1c
        ;   Label: LAB_00493a1c
    PUSH 0x6                            ; 00493a1e
    PUSH EBX                            ; 00493a20
    MOV EAX,dword ptr [EBP + -0x14]     ; 00493a21
    PUSH EAX                            ; 00493a24
    PUSH EDI                            ; 00493a25
    PUSH ESI                            ; 00493a26
    CALL engine_font.cpp_CBitFont_drawCharacter_FUN_004916c0 ; 00493a27
        ;   XREF to: 004916c0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawCharacter_FUN_004916c0(CBitFont * this_ptr, int character_code, int x, int y, ...)
    MOV EDX,dword ptr [EBP + -0x14]     ; 00493a2c
    INC EAX                             ; 00493a2f
    INC EDI                             ; 00493a30
    ADD EDX,EAX                         ; 00493a31
    ADD ESP,0x18                        ; 00493a33
    MOV dword ptr [EBP + -0x14],EDX     ; 00493a36
    CMP EDI,0xb0                        ; 00493a39
    JL 0x00493a1c                       ; 00493a3f
        ;   XREF to: 00493a1c (CONDITIONAL_JUMP)  ; LAB_00493a1c
    MOV ECX,dword ptr [EBP + -0x2c]     ; 00493a41
    ADD EBX,ECX                         ; 00493a44
    PUSH -0x1                           ; 00493a46
    MOV EAX,EBX                         ; 00493a48
    PUSH 0x6                            ; 00493a4a
    SUB EAX,ECX                         ; 00493a4c
    PUSH EAX                            ; 00493a4e
    MOV EAX,dword ptr [EBP + 0x18]      ; 00493a4f
    SHR EAX,0x1                         ; 00493a52
    PUSH EAX                            ; 00493a54
    PUSH 0x581ac5                       ; 00493a55 | DAT_00581ac5
    PUSH ESI                            ; 00493a5a
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 00493a5b
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_00490980(CBitFont * this_ptr, char * text, int x, int y, ...)
    MOV EAX,dword ptr [ESI + 0x316c]    ; 00493a60
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00493a66
    ADD EAX,EBX                         ; 00493a69
    ADD ESP,0x18                        ; 00493a6b
    CMP EAX,EDX                         ; 00493a6e
    JC 0x00493db9                       ; 00493a70
        ;   XREF to: 00493db9 (CONDITIONAL_JUMP)  ; LAB_00493db9
    MOV ECX,0xa                         ; 00493a76
        ;   Label: LAB_00493a76
    MOV EDI,0xb0                        ; 00493a7b
    MOV dword ptr [EBP + -0x18],ECX     ; 00493a80
    PUSH -0x1                           ; 00493a83
        ;   Label: LAB_00493a83
    PUSH 0x6                            ; 00493a85
    PUSH EBX                            ; 00493a87
    MOV EAX,dword ptr [EBP + -0x18]     ; 00493a88
    PUSH EAX                            ; 00493a8b
    PUSH EDI                            ; 00493a8c
    PUSH ESI                            ; 00493a8d
    CALL engine_font.cpp_CBitFont_drawCharacter_FUN_004916c0 ; 00493a8e
        ;   XREF to: 004916c0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawCharacter_FUN_004916c0(CBitFont * this_ptr, int character_code, int x, int y, ...)
    MOV EDX,dword ptr [EBP + -0x18]     ; 00493a93
    INC EAX                             ; 00493a96
    INC EDI                             ; 00493a97
    ADD EDX,EAX                         ; 00493a98
    ADD ESP,0x18                        ; 00493a9a
    MOV dword ptr [EBP + -0x18],EDX     ; 00493a9d
    CMP EDI,0xc0                        ; 00493aa0
    JL 0x00493a83                       ; 00493aa6
        ;   XREF to: 00493a83 (CONDITIONAL_JUMP)  ; LAB_00493a83
    MOV EAX,dword ptr [ESI + 0x316c]    ; 00493aa8
    PUSH EAX                            ; 00493aae
    MOV ECX,dword ptr [EBP + -0x2c]     ; 00493aaf
    PUSH 0x581ad0                       ; 00493ab2 | = "maxCharHght: %d"
    ADD EBX,ECX                         ; 00493ab7
    PUSH 0x6                            ; 00493ab9
    MOV EAX,EBX                         ; 00493abb
    PUSH 0x1                            ; 00493abd
    SUB EAX,ECX                         ; 00493abf
    PUSH EAX                            ; 00493ac1
    MOV EAX,dword ptr [EBP + 0x18]      ; 00493ac2
    SHR EAX,0x1                         ; 00493ac5
    PUSH EAX                            ; 00493ac7
    PUSH ESI                            ; 00493ac8
    CALL engine_font.cpp_CBitFont_drawTextF_FUN_00490b20 ; 00493ac9
        ;   XREF to: 00490b20 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextF_FUN_00490b20(CBitFont * this_ptr, int x, int y, int color_mode, ...)
    MOV EAX,dword ptr [ESI + 0x316c]    ; 00493ace
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00493ad4
    ADD EAX,EBX                         ; 00493ad7
    ADD ESP,0x1c                        ; 00493ad9
    CMP EAX,EDX                         ; 00493adc
    JC 0x00493e34                       ; 00493ade
        ;   XREF to: 00493e34 (CONDITIONAL_JUMP)  ; LAB_00493e34
    MOV ECX,0xa                         ; 00493ae4
        ;   Label: LAB_00493ae4
    MOV EDI,0xc0                        ; 00493ae9
    MOV dword ptr [EBP + -0x1c],ECX     ; 00493aee
    PUSH -0x1                           ; 00493af1
        ;   Label: LAB_00493af1
    PUSH 0x6                            ; 00493af3
    PUSH EBX                            ; 00493af5
    MOV EAX,dword ptr [EBP + -0x1c]     ; 00493af6
    PUSH EAX                            ; 00493af9
    PUSH EDI                            ; 00493afa
    PUSH ESI                            ; 00493afb
    CALL engine_font.cpp_CBitFont_drawCharacter_FUN_004916c0 ; 00493afc
        ;   XREF to: 004916c0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawCharacter_FUN_004916c0(CBitFont * this_ptr, int character_code, int x, int y, ...)
    MOV EDX,dword ptr [EBP + -0x1c]     ; 00493b01
    INC EAX                             ; 00493b04
    INC EDI                             ; 00493b05
    ADD EDX,EAX                         ; 00493b06
    ADD ESP,0x18                        ; 00493b08
    MOV dword ptr [EBP + -0x1c],EDX     ; 00493b0b
    CMP EDI,0xd0                        ; 00493b0e
    JL 0x00493af1                       ; 00493b14
        ;   XREF to: 00493af1 (CONDITIONAL_JUMP)  ; LAB_00493af1
    MOV ECX,dword ptr [EBP + -0x2c]     ; 00493b16
    MOV EAX,dword ptr [ESI + 0x316c]    ; 00493b19
    ADD EBX,ECX                         ; 00493b1f
    MOV EDI,dword ptr [EBP + 0x1c]      ; 00493b21
    ADD EAX,EBX                         ; 00493b24
    CMP EAX,EDI                         ; 00493b26
    JC 0x00493eaf                       ; 00493b28
        ;   XREF to: 00493eaf (CONDITIONAL_JUMP)  ; LAB_00493eaf
    MOV EAX,0xa                         ; 00493b2e
        ;   Label: LAB_00493b2e
    MOV EDI,0xd0                        ; 00493b33
    MOV dword ptr [EBP + -0x20],EAX     ; 00493b38
    PUSH -0x1                           ; 00493b3b
        ;   Label: LAB_00493b3b
    PUSH 0x6                            ; 00493b3d
    PUSH EBX                            ; 00493b3f
    MOV EDX,dword ptr [EBP + -0x20]     ; 00493b40
    PUSH EDX                            ; 00493b43
    PUSH EDI                            ; 00493b44
    PUSH ESI                            ; 00493b45
    CALL engine_font.cpp_CBitFont_drawCharacter_FUN_004916c0 ; 00493b46
        ;   XREF to: 004916c0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawCharacter_FUN_004916c0(CBitFont * this_ptr, int character_code, int x, int y, ...)
    MOV ECX,dword ptr [EBP + -0x20]     ; 00493b4b
    INC EAX                             ; 00493b4e
    INC EDI                             ; 00493b4f
    ADD ECX,EAX                         ; 00493b50
    ADD ESP,0x18                        ; 00493b52
    MOV dword ptr [EBP + -0x20],ECX     ; 00493b55
    CMP EDI,0xe0                        ; 00493b58
    JL 0x00493b3b                       ; 00493b5e
        ;   XREF to: 00493b3b (CONDITIONAL_JUMP)  ; LAB_00493b3b
    MOV EDI,dword ptr [EBP + -0x2c]     ; 00493b60
    MOV EAX,dword ptr [ESI + 0x316c]    ; 00493b63
    ADD EBX,EDI                         ; 00493b69
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00493b6b
    ADD EAX,EBX                         ; 00493b6e
    CMP EAX,EDX                         ; 00493b70
    JC 0x00493f2a                       ; 00493b72
        ;   XREF to: 00493f2a (CONDITIONAL_JUMP)  ; LAB_00493f2a
    MOV ECX,0xa                         ; 00493b78
        ;   Label: LAB_00493b78
    MOV EDI,0xe0                        ; 00493b7d
    MOV dword ptr [EBP + -0x24],ECX     ; 00493b82
    PUSH -0x1                           ; 00493b85
        ;   Label: LAB_00493b85
    PUSH 0x6                            ; 00493b87
    PUSH EBX                            ; 00493b89
    MOV EAX,dword ptr [EBP + -0x24]     ; 00493b8a
    PUSH EAX                            ; 00493b8d
    PUSH EDI                            ; 00493b8e
    PUSH ESI                            ; 00493b8f
    CALL engine_font.cpp_CBitFont_drawCharacter_FUN_004916c0 ; 00493b90
        ;   XREF to: 004916c0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawCharacter_FUN_004916c0(CBitFont * this_ptr, int character_code, int x, int y, ...)
    MOV EDX,dword ptr [EBP + -0x24]     ; 00493b95
    INC EAX                             ; 00493b98
    INC EDI                             ; 00493b99
    ADD EDX,EAX                         ; 00493b9a
    ADD ESP,0x18                        ; 00493b9c
    MOV dword ptr [EBP + -0x24],EDX     ; 00493b9f
    CMP EDI,0xf0                        ; 00493ba2
    JL 0x00493b85                       ; 00493ba8
        ;   XREF to: 00493b85 (CONDITIONAL_JUMP)  ; LAB_00493b85
    MOV ECX,dword ptr [EBP + -0x2c]     ; 00493baa
    MOV EAX,dword ptr [ESI + 0x316c]    ; 00493bad
    ADD EBX,ECX                         ; 00493bb3
    MOV EDI,dword ptr [EBP + 0x1c]      ; 00493bb5
    ADD EAX,EBX                         ; 00493bb8
    CMP EAX,EDI                         ; 00493bba
    JC 0x00493fa5                       ; 00493bbc
        ;   XREF to: 00493fa5 (CONDITIONAL_JUMP)  ; LAB_00493fa5
    MOV EAX,0xa                         ; 00493bc2
        ;   Label: LAB_00493bc2
    MOV EDI,0xf0                        ; 00493bc7
    MOV dword ptr [EBP + -0x8],EAX      ; 00493bcc
    PUSH -0x1                           ; 00493bcf
        ;   Label: LAB_00493bcf
    PUSH 0x6                            ; 00493bd1
    PUSH EBX                            ; 00493bd3
    MOV EDX,dword ptr [EBP + -0x8]      ; 00493bd4
    PUSH EDX                            ; 00493bd7
    PUSH EDI                            ; 00493bd8
    PUSH ESI                            ; 00493bd9
    CALL engine_font.cpp_CBitFont_drawCharacter_FUN_004916c0 ; 00493bda
        ;   XREF to: 004916c0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawCharacter_FUN_004916c0(CBitFont * this_ptr, int character_code, int x, int y, ...)
    MOV ECX,dword ptr [EBP + -0x8]      ; 00493bdf
    INC EAX                             ; 00493be2
    INC EDI                             ; 00493be3
    ADD ECX,EAX                         ; 00493be4
    ADD ESP,0x18                        ; 00493be6
    MOV dword ptr [EBP + -0x8],ECX      ; 00493be9
    CMP EDI,0x100                       ; 00493bec
    JL 0x00493bcf                       ; 00493bf2
        ;   XREF to: 00493bcf (CONDITIONAL_JUMP)  ; LAB_00493bcf
    PUSH 0xff                           ; 00493bf4
    PUSH ESI                            ; 00493bf9
    CALL engine_font.cpp_CBitFont_getCharYOffset_FUN_00493110 ; 00493bfa
        ;   XREF to: 00493110 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharYOffset_FUN_00493110(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 00493bff
    PUSH EAX                            ; 00493c02
    PUSH 0xff                           ; 00493c03
    PUSH ESI                            ; 00493c08
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0 ; 00493c09
        ;   XREF to: 004930e0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 00493c0e
    PUSH EAX                            ; 00493c11
    PUSH 0xff                           ; 00493c12
    PUSH ESI                            ; 00493c17
    CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004930b0 ; 00493c18
        ;   XREF to: 004930b0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharWidth_FUN_004930b0(CBitFont * font, int char_code)
    ADD ESP,0x8                         ; 00493c1d
    PUSH EAX                            ; 00493c20
    PUSH 0x581ae0                       ; 00493c21 | DAT_00581ae0
    MOV EDI,dword ptr [EBP + -0x2c]     ; 00493c26
    PUSH 0x6                            ; 00493c29
    ADD EBX,EDI                         ; 00493c2b
    PUSH 0x1                            ; 00493c2d
    SUB EBX,EDI                         ; 00493c2f
    MOV EAX,dword ptr [EBP + 0x18]      ; 00493c31
    PUSH EBX                            ; 00493c34
    SHR EAX,0x1                         ; 00493c35
    PUSH EAX                            ; 00493c37
    PUSH ESI                            ; 00493c38
    CALL engine_font.cpp_CBitFont_drawTextF_FUN_00490b20 ; 00493c39
        ;   XREF to: 00490b20 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextF_FUN_00490b20(CBitFont * this_ptr, int x, int y, int color_mode, ...)
    ADD ESP,0x24                        ; 00493c3e
    MOV ESP,EBP                         ; 00493c41
    POP EBP                             ; 00493c43
    POP EDI                             ; 00493c44
    POP ESI                             ; 00493c45
    POP EBX                             ; 00493c46
    RET                                 ; 00493c47
    MOV dword ptr [0x01c00c70],0x4      ; 00493c48 | g_ActiveRenderColor
        ;   Label: LAB_00493c48
    LEA EAX,[EBX + -0x1]                ; 00493c52
    MOV EDI,dword ptr [EBP + 0x18]      ; 00493c55
    PUSH EAX                            ; 00493c58
    DEC EDI                             ; 00493c59
    PUSH EDI                            ; 00493c5a
    PUSH EAX                            ; 00493c5b
    PUSH 0x3                            ; 00493c5c
    CALL engine_2d.c_drawLine_FUN_004015a0 ; 00493c5e
        ;   XREF to: 004015a0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004015a0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 00493c63
    PUSH 0xc5                           ; 00493c66
    MOV EDX,0x4                         ; 00493c6b
    PUSH ESI                            ; 00493c70
    MOV dword ptr [0x01c00c70],EDX      ; 00493c71 | g_ActiveRenderColor
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0 ; 00493c77
        ;   XREF to: 004930e0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 00493c7c
    ADD EAX,EBX                         ; 00493c7f
    PUSH EAX                            ; 00493c81
    PUSH EDI                            ; 00493c82
    PUSH 0xc5                           ; 00493c83
    PUSH ESI                            ; 00493c88
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0 ; 00493c89
        ;   XREF to: 004930e0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 00493c8e
    ADD EAX,EBX                         ; 00493c91
    PUSH EAX                            ; 00493c93
    PUSH 0x3                            ; 00493c94
    CALL engine_2d.c_drawLine_FUN_004015a0 ; 00493c96
        ;   XREF to: 004015a0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004015a0(int x1, int y1, int x2, int y2)
    MOV EAX,dword ptr [ESI + 0x316c]    ; 00493c9b
    ADD ESP,0x10                        ; 00493ca1
    ADD EAX,EBX                         ; 00493ca4
    PUSH EAX                            ; 00493ca6
    PUSH EDI                            ; 00493ca7
    PUSH EAX                            ; 00493ca8
    MOV ECX,0x4                         ; 00493ca9
    PUSH 0x3                            ; 00493cae
    MOV dword ptr [0x01c00c70],ECX      ; 00493cb0 | g_ActiveRenderColor
    CALL engine_2d.c_drawLine_FUN_004015a0 ; 00493cb6
        ;   XREF to: 004015a0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004015a0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 00493cbb
    JMP 0x00493941                      ; 00493cbe
        ;   XREF to: 00493941 (UNCONDITIONAL_JUMP)  ; LAB_00493941
    MOV EDI,0x4                         ; 00493cc3
        ;   Label: LAB_00493cc3
    LEA EAX,[EBX + -0x1]                ; 00493cc8
    MOV dword ptr [0x01c00c70],EDI      ; 00493ccb | g_ActiveRenderColor
    MOV EDI,dword ptr [EBP + 0x18]      ; 00493cd1
    PUSH EAX                            ; 00493cd4
    DEC EDI                             ; 00493cd5
    PUSH EDI                            ; 00493cd6
    PUSH EAX                            ; 00493cd7
    PUSH 0x3                            ; 00493cd8
    CALL engine_2d.c_drawLine_FUN_004015a0 ; 00493cda
        ;   XREF to: 004015a0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004015a0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 00493cdf
    PUSH 0xc5                           ; 00493ce2
    MOV EAX,0x4                         ; 00493ce7
    PUSH ESI                            ; 00493cec
    MOV [0x01c00c70],EAX                ; 00493ced | g_ActiveRenderColor
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0 ; 00493cf2
        ;   XREF to: 004930e0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 00493cf7
    ADD EAX,EBX                         ; 00493cfa
    PUSH EAX                            ; 00493cfc
    PUSH EDI                            ; 00493cfd
    PUSH 0xc5                           ; 00493cfe
    PUSH ESI                            ; 00493d03
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0 ; 00493d04
        ;   XREF to: 004930e0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 00493d09
    ADD EAX,EBX                         ; 00493d0c
    PUSH EAX                            ; 00493d0e
    PUSH 0x3                            ; 00493d0f
    CALL engine_2d.c_drawLine_FUN_004015a0 ; 00493d11
        ;   XREF to: 004015a0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004015a0(int x1, int y1, int x2, int y2)
    MOV EAX,dword ptr [ESI + 0x316c]    ; 00493d16
    ADD ESP,0x10                        ; 00493d1c
    ADD EAX,EBX                         ; 00493d1f
    PUSH EAX                            ; 00493d21
    PUSH EDI                            ; 00493d22
    PUSH EAX                            ; 00493d23
    MOV EDX,0x4                         ; 00493d24
    PUSH 0x3                            ; 00493d29
    MOV dword ptr [0x01c00c70],EDX      ; 00493d2b | g_ActiveRenderColor
    CALL engine_2d.c_drawLine_FUN_004015a0 ; 00493d31
        ;   XREF to: 004015a0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004015a0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 00493d36
    JMP 0x004939a8                      ; 00493d39
        ;   XREF to: 004939a8 (UNCONDITIONAL_JUMP)  ; LAB_004939a8
    LEA EAX,[EBX + -0x1]                ; 00493d3e
        ;   Label: LAB_00493d3e
    MOV EDI,dword ptr [EBP + 0x18]      ; 00493d41
    PUSH EAX                            ; 00493d44
    DEC EDI                             ; 00493d45
    PUSH EDI                            ; 00493d46
    PUSH EAX                            ; 00493d47
    MOV ECX,0x4                         ; 00493d48
    PUSH 0x3                            ; 00493d4d
    MOV dword ptr [0x01c00c70],ECX      ; 00493d4f | g_ActiveRenderColor
    CALL engine_2d.c_drawLine_FUN_004015a0 ; 00493d55
        ;   XREF to: 004015a0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004015a0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 00493d5a
    PUSH 0xc5                           ; 00493d5d
    MOV EAX,0x4                         ; 00493d62
    PUSH ESI                            ; 00493d67
    MOV [0x01c00c70],EAX                ; 00493d68 | g_ActiveRenderColor
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0 ; 00493d6d
        ;   XREF to: 004930e0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 00493d72
    ADD EAX,EBX                         ; 00493d75
    PUSH EAX                            ; 00493d77
    PUSH EDI                            ; 00493d78
    PUSH 0xc5                           ; 00493d79
    PUSH ESI                            ; 00493d7e
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0 ; 00493d7f
        ;   XREF to: 004930e0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 00493d84
    ADD EAX,EBX                         ; 00493d87
    PUSH EAX                            ; 00493d89
    PUSH 0x3                            ; 00493d8a
    CALL engine_2d.c_drawLine_FUN_004015a0 ; 00493d8c
        ;   XREF to: 004015a0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004015a0(int x1, int y1, int x2, int y2)
    MOV EAX,dword ptr [ESI + 0x316c]    ; 00493d91
    ADD ESP,0x10                        ; 00493d97
    ADD EAX,EBX                         ; 00493d9a
    PUSH EAX                            ; 00493d9c
    PUSH EDI                            ; 00493d9d
    PUSH EAX                            ; 00493d9e
    MOV EDX,0x4                         ; 00493d9f
    PUSH 0x3                            ; 00493da4
    MOV dword ptr [0x01c00c70],EDX      ; 00493da6 | g_ActiveRenderColor
    CALL engine_2d.c_drawLine_FUN_004015a0 ; 00493dac
        ;   XREF to: 004015a0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004015a0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 00493db1
    JMP 0x00493a0f                      ; 00493db4
        ;   XREF to: 00493a0f (UNCONDITIONAL_JUMP)  ; LAB_00493a0f
    LEA EAX,[EBX + -0x1]                ; 00493db9
        ;   Label: LAB_00493db9
    MOV EDI,dword ptr [EBP + 0x18]      ; 00493dbc
    PUSH EAX                            ; 00493dbf
    DEC EDI                             ; 00493dc0
    PUSH EDI                            ; 00493dc1
    PUSH EAX                            ; 00493dc2
    MOV ECX,0x4                         ; 00493dc3
    PUSH 0x3                            ; 00493dc8
    MOV dword ptr [0x01c00c70],ECX      ; 00493dca | g_ActiveRenderColor
    CALL engine_2d.c_drawLine_FUN_004015a0 ; 00493dd0
        ;   XREF to: 004015a0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004015a0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 00493dd5
    PUSH 0xc5                           ; 00493dd8
    MOV EAX,0x4                         ; 00493ddd
    PUSH ESI                            ; 00493de2
    MOV [0x01c00c70],EAX                ; 00493de3 | g_ActiveRenderColor
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0 ; 00493de8
        ;   XREF to: 004930e0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 00493ded
    ADD EAX,EBX                         ; 00493df0
    PUSH EAX                            ; 00493df2
    PUSH EDI                            ; 00493df3
    PUSH 0xc5                           ; 00493df4
    PUSH ESI                            ; 00493df9
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0 ; 00493dfa
        ;   XREF to: 004930e0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 00493dff
    ADD EAX,EBX                         ; 00493e02
    PUSH EAX                            ; 00493e04
    PUSH 0x3                            ; 00493e05
    CALL engine_2d.c_drawLine_FUN_004015a0 ; 00493e07
        ;   XREF to: 004015a0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004015a0(int x1, int y1, int x2, int y2)
    MOV EAX,dword ptr [ESI + 0x316c]    ; 00493e0c
    ADD ESP,0x10                        ; 00493e12
    ADD EAX,EBX                         ; 00493e15
    PUSH EAX                            ; 00493e17
    PUSH EDI                            ; 00493e18
    PUSH EAX                            ; 00493e19
    MOV EDX,0x4                         ; 00493e1a
    PUSH 0x3                            ; 00493e1f
    MOV dword ptr [0x01c00c70],EDX      ; 00493e21 | g_ActiveRenderColor
    CALL engine_2d.c_drawLine_FUN_004015a0 ; 00493e27
        ;   XREF to: 004015a0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004015a0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 00493e2c
    JMP 0x00493a76                      ; 00493e2f
        ;   XREF to: 00493a76 (UNCONDITIONAL_JUMP)  ; LAB_00493a76
    LEA EAX,[EBX + -0x1]                ; 00493e34
        ;   Label: LAB_00493e34
    MOV EDI,dword ptr [EBP + 0x18]      ; 00493e37
    PUSH EAX                            ; 00493e3a
    DEC EDI                             ; 00493e3b
    PUSH EDI                            ; 00493e3c
    PUSH EAX                            ; 00493e3d
    MOV ECX,0x4                         ; 00493e3e
    PUSH 0x3                            ; 00493e43
    MOV dword ptr [0x01c00c70],ECX      ; 00493e45 | g_ActiveRenderColor
    CALL engine_2d.c_drawLine_FUN_004015a0 ; 00493e4b
        ;   XREF to: 004015a0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004015a0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 00493e50
    PUSH 0xc5                           ; 00493e53
    MOV EAX,0x4                         ; 00493e58
    PUSH ESI                            ; 00493e5d
    MOV [0x01c00c70],EAX                ; 00493e5e | g_ActiveRenderColor
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0 ; 00493e63
        ;   XREF to: 004930e0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 00493e68
    ADD EAX,EBX                         ; 00493e6b
    PUSH EAX                            ; 00493e6d
    PUSH EDI                            ; 00493e6e
    PUSH 0xc5                           ; 00493e6f
    PUSH ESI                            ; 00493e74
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0 ; 00493e75
        ;   XREF to: 004930e0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 00493e7a
    ADD EAX,EBX                         ; 00493e7d
    PUSH EAX                            ; 00493e7f
    PUSH 0x3                            ; 00493e80
    CALL engine_2d.c_drawLine_FUN_004015a0 ; 00493e82
        ;   XREF to: 004015a0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004015a0(int x1, int y1, int x2, int y2)
    MOV EAX,dword ptr [ESI + 0x316c]    ; 00493e87
    ADD ESP,0x10                        ; 00493e8d
    ADD EAX,EBX                         ; 00493e90
    PUSH EAX                            ; 00493e92
    PUSH EDI                            ; 00493e93
    PUSH EAX                            ; 00493e94
    MOV EDX,0x4                         ; 00493e95
    PUSH 0x3                            ; 00493e9a
    MOV dword ptr [0x01c00c70],EDX      ; 00493e9c | g_ActiveRenderColor
    CALL engine_2d.c_drawLine_FUN_004015a0 ; 00493ea2
        ;   XREF to: 004015a0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004015a0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 00493ea7
    JMP 0x00493ae4                      ; 00493eaa
        ;   XREF to: 00493ae4 (UNCONDITIONAL_JUMP)  ; LAB_00493ae4
    MOV dword ptr [0x01c00c70],0x4      ; 00493eaf | g_ActiveRenderColor
        ;   Label: LAB_00493eaf
    LEA EAX,[EBX + -0x1]                ; 00493eb9
    MOV EDI,dword ptr [EBP + 0x18]      ; 00493ebc
    PUSH EAX                            ; 00493ebf
    DEC EDI                             ; 00493ec0
    PUSH EDI                            ; 00493ec1
    PUSH EAX                            ; 00493ec2
    PUSH 0x3                            ; 00493ec3
    CALL engine_2d.c_drawLine_FUN_004015a0 ; 00493ec5
        ;   XREF to: 004015a0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004015a0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 00493eca
    PUSH 0xc5                           ; 00493ecd
    MOV EDX,0x4                         ; 00493ed2
    PUSH ESI                            ; 00493ed7
    MOV dword ptr [0x01c00c70],EDX      ; 00493ed8 | g_ActiveRenderColor
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0 ; 00493ede
        ;   XREF to: 004930e0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 00493ee3
    ADD EAX,EBX                         ; 00493ee6
    PUSH EAX                            ; 00493ee8
    PUSH EDI                            ; 00493ee9
    PUSH 0xc5                           ; 00493eea
    PUSH ESI                            ; 00493eef
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0 ; 00493ef0
        ;   XREF to: 004930e0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 00493ef5
    ADD EAX,EBX                         ; 00493ef8
    PUSH EAX                            ; 00493efa
    PUSH 0x3                            ; 00493efb
    CALL engine_2d.c_drawLine_FUN_004015a0 ; 00493efd
        ;   XREF to: 004015a0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004015a0(int x1, int y1, int x2, int y2)
    MOV EAX,dword ptr [ESI + 0x316c]    ; 00493f02
    ADD ESP,0x10                        ; 00493f08
    ADD EAX,EBX                         ; 00493f0b
    PUSH EAX                            ; 00493f0d
    PUSH EDI                            ; 00493f0e
    PUSH EAX                            ; 00493f0f
    MOV ECX,0x4                         ; 00493f10
    PUSH 0x3                            ; 00493f15
    MOV dword ptr [0x01c00c70],ECX      ; 00493f17 | g_ActiveRenderColor
    CALL engine_2d.c_drawLine_FUN_004015a0 ; 00493f1d
        ;   XREF to: 004015a0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004015a0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 00493f22
    JMP 0x00493b2e                      ; 00493f25
        ;   XREF to: 00493b2e (UNCONDITIONAL_JUMP)  ; LAB_00493b2e
    LEA EAX,[EBX + -0x1]                ; 00493f2a
        ;   Label: LAB_00493f2a
    MOV EDI,dword ptr [EBP + 0x18]      ; 00493f2d
    PUSH EAX                            ; 00493f30
    DEC EDI                             ; 00493f31
    PUSH EDI                            ; 00493f32
    PUSH EAX                            ; 00493f33
    MOV ECX,0x4                         ; 00493f34
    PUSH 0x3                            ; 00493f39
    MOV dword ptr [0x01c00c70],ECX      ; 00493f3b | g_ActiveRenderColor
    CALL engine_2d.c_drawLine_FUN_004015a0 ; 00493f41
        ;   XREF to: 004015a0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004015a0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 00493f46
    PUSH 0xc5                           ; 00493f49
    MOV EAX,0x4                         ; 00493f4e
    PUSH ESI                            ; 00493f53
    MOV [0x01c00c70],EAX                ; 00493f54 | g_ActiveRenderColor
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0 ; 00493f59
        ;   XREF to: 004930e0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 00493f5e
    ADD EAX,EBX                         ; 00493f61
    PUSH EAX                            ; 00493f63
    PUSH EDI                            ; 00493f64
    PUSH 0xc5                           ; 00493f65
    PUSH ESI                            ; 00493f6a
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0 ; 00493f6b
        ;   XREF to: 004930e0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 00493f70
    ADD EAX,EBX                         ; 00493f73
    PUSH EAX                            ; 00493f75
    PUSH 0x3                            ; 00493f76
    CALL engine_2d.c_drawLine_FUN_004015a0 ; 00493f78
        ;   XREF to: 004015a0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004015a0(int x1, int y1, int x2, int y2)
    MOV EAX,dword ptr [ESI + 0x316c]    ; 00493f7d
    ADD ESP,0x10                        ; 00493f83
    ADD EAX,EBX                         ; 00493f86
    PUSH EAX                            ; 00493f88
    PUSH EDI                            ; 00493f89
    PUSH EAX                            ; 00493f8a
    MOV EDX,0x4                         ; 00493f8b
    PUSH 0x3                            ; 00493f90
    MOV dword ptr [0x01c00c70],EDX      ; 00493f92 | g_ActiveRenderColor
    CALL engine_2d.c_drawLine_FUN_004015a0 ; 00493f98
        ;   XREF to: 004015a0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004015a0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 00493f9d
    JMP 0x00493b78                      ; 00493fa0
        ;   XREF to: 00493b78 (UNCONDITIONAL_JUMP)  ; LAB_00493b78
    MOV dword ptr [0x01c00c70],0x4      ; 00493fa5 | g_ActiveRenderColor
        ;   Label: LAB_00493fa5
    LEA EAX,[EBX + -0x1]                ; 00493faf
    MOV EDI,dword ptr [EBP + 0x18]      ; 00493fb2
    PUSH EAX                            ; 00493fb5
    DEC EDI                             ; 00493fb6
    PUSH EDI                            ; 00493fb7
    PUSH EAX                            ; 00493fb8
    PUSH 0x3                            ; 00493fb9
    CALL engine_2d.c_drawLine_FUN_004015a0 ; 00493fbb
        ;   XREF to: 004015a0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004015a0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 00493fc0
    PUSH 0xc5                           ; 00493fc3
    MOV EDX,0x4                         ; 00493fc8
    PUSH ESI                            ; 00493fcd
    MOV dword ptr [0x01c00c70],EDX      ; 00493fce | g_ActiveRenderColor
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0 ; 00493fd4
        ;   XREF to: 004930e0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 00493fd9
    ADD EAX,EBX                         ; 00493fdc
    PUSH EAX                            ; 00493fde
    PUSH EDI                            ; 00493fdf
    PUSH 0xc5                           ; 00493fe0
    PUSH ESI                            ; 00493fe5
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0 ; 00493fe6
        ;   XREF to: 004930e0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 00493feb
    ADD EAX,EBX                         ; 00493fee
    PUSH EAX                            ; 00493ff0
    PUSH 0x3                            ; 00493ff1
    CALL engine_2d.c_drawLine_FUN_004015a0 ; 00493ff3
        ;   XREF to: 004015a0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004015a0(int x1, int y1, int x2, int y2)
    MOV EAX,dword ptr [ESI + 0x316c]    ; 00493ff8
    ADD ESP,0x10                        ; 00493ffe
    ADD EAX,EBX                         ; 00494001
    PUSH EAX                            ; 00494003
    PUSH EDI                            ; 00494004
    PUSH EAX                            ; 00494005
    MOV ECX,0x4                         ; 00494006
    PUSH 0x3                            ; 0049400b
    MOV dword ptr [0x01c00c70],ECX      ; 0049400d | g_ActiveRenderColor
    CALL engine_2d.c_drawLine_FUN_004015a0 ; 00494013
        ;   XREF to: 004015a0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004015a0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 00494018
    JMP 0x00493bc2                      ; 0049401b
        ;   XREF to: 00493bc2 (UNCONDITIONAL_JUMP)  ; LAB_00493bc2

