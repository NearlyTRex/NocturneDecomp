; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_font.cpp_CBitFont_showExtendedFontTest_FUN_004d0850(CBitFont * this_ptr, int screen_width, int screen_height)
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
;   char[14] s_A_a_0062a86f
;   char[21] s_?_!_0062a87d
;   char[11] s__0062a892
;   TerminatedCString s_maxCharHght_d_0062a89d
;   char s_CharMax_0062a8ad = \u00ff
;   int g_ClipLeft
;   int g_ClipTop
;   int g_ClipRight
;   int g_ClipBottom
;   int g_ActiveRenderColor
;
; Called Functions:
;   engine_2d.c_drawLine_FUN_004011b0
;   engine_2d.c_fillRectColor_FUN_00403170
;   engine_font.cpp_CBitFont_drawCharacter_FUN_004ce7a0
;   engine_font.cpp_CBitFont_drawTextFV_FUN_004cdc20
;   engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
;   engine_font.cpp_CBitFont_getCharWidth_FUN_004d01a0
;   engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
;   engine_font.cpp_CBitFont_getCharXAdvance_FUN_004d0200
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d0850
        ;   Label: engine_font.cpp_CBitFont_showExtendedFontTest_FUN_004d0850
    PUSH ESI                            ; 004d0851
    PUSH EDI                            ; 004d0852
    PUSH EBP                            ; 004d0853
    MOV EBP,ESP                         ; 004d0854
    SUB ESP,0x30                        ; 004d0856
    MOV ESI,dword ptr [EBP + 0x14]      ; 004d0859
    MOV EDX,dword ptr [ESI + 0x316c]    ; 004d085c
    MOV EAX,dword ptr [ESI + 0x3178]    ; 004d0862
    ADD EDX,EAX                         ; 004d0868
    MOV dword ptr [EBP + -0x30],EDX     ; 004d086a
    MOV EDX,dword ptr [EBP + 0x1c]      ; 004d086d
    LEA EAX,[EDX*0x4 + 0x0]             ; 004d0870
    SUB EAX,EDX                         ; 004d0877
    MOV ECX,0x1e0                       ; 004d0879
    SHL EAX,0x2                         ; 004d087e
    XOR EDX,EDX                         ; 004d0881
    DIV ECX                             ; 004d0883
    MOV EDX,dword ptr [EBP + -0x30]     ; 004d0885
    ADD EDX,EAX                         ; 004d0888
    PUSH 0x0                            ; 004d088a
    MOV dword ptr [EBP + -0x2c],EDX     ; 004d088c
    MOV EDX,dword ptr [0x02d02564]      ; 004d088f | g_ClipBottom
    PUSH EDX                            ; 004d0895
    MOV ECX,dword ptr [0x02d02560]      ; 004d0896 | g_ClipRight
    PUSH ECX                            ; 004d089c
    MOV EAX,[0x02d0255c]                ; 004d089d | g_ClipTop
    PUSH EAX                            ; 004d08a2
    MOV EDX,dword ptr [0x02d02558]      ; 004d08a3 | g_ClipLeft
    MOV EDI,0xa                         ; 004d08a9
    PUSH EDX                            ; 004d08ae
    MOV EBX,EDI                         ; 004d08af
    CALL engine_2d.c_fillRectColor_FUN_00403170 ; 004d08b1
        ;   XREF to: 00403170 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectColor_FUN_00403170(int x1, int y1, int x2, int y2, ...)
    MOV EAX,dword ptr [EBP + 0x18]      ; 004d08b6
    ADD ESP,0x14                        ; 004d08b9
    XOR ECX,ECX                         ; 004d08bc
    DEC EAX                             ; 004d08be
    MOV dword ptr [EBP + -0x4],ECX      ; 004d08bf
    MOV dword ptr [EBP + -0x28],EAX     ; 004d08c2
    PUSH -0x1                           ; 004d08c5
        ;   Label: LAB_004d08c5
    PUSH 0x6                            ; 004d08c7
    PUSH EBX                            ; 004d08c9
    PUSH EDI                            ; 004d08ca
    MOV EAX,dword ptr [EBP + -0x4]      ; 004d08cb
    PUSH EAX                            ; 004d08ce
    PUSH ESI                            ; 004d08cf
    CALL engine_font.cpp_CBitFont_drawCharacter_FUN_004ce7a0 ; 004d08d0
        ;   XREF to: 004ce7a0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawCharacter_FUN_004ce7a0(CBitFont * this_ptr, int character_code, int x_pos, int y_pos, ...)
    INC EAX                             ; 004d08d5
    ADD EDI,EAX                         ; 004d08d6
    MOV EAX,dword ptr [ESI + 0x3168]    ; 004d08d8
    LEA EDX,[EDI + EAX*0x1]             ; 004d08de
    MOV EAX,dword ptr [ESI + 0x3174]    ; 004d08e1
    ADD EAX,EDX                         ; 004d08e7
    MOV EDX,dword ptr [EBP + 0x18]      ; 004d08e9
    INC EAX                             ; 004d08ec
    ADD ESP,0x18                        ; 004d08ed
    CMP EAX,EDX                         ; 004d08f0
    JBE 0x004d0984                      ; 004d08f2
        ;   XREF to: 004d0984 (CONDITIONAL_JUMP)  ; LAB_004d0984
    MOV EAX,dword ptr [ESI + 0x316c]    ; 004d08f8
    MOV ECX,dword ptr [EBP + 0x1c]      ; 004d08fe
    ADD EAX,EBX                         ; 004d0901
    CMP EAX,ECX                         ; 004d0903
    JNC 0x004d097a                      ; 004d0905
        ;   XREF to: 004d097a (CONDITIONAL_JUMP)  ; LAB_004d097a
    LEA EAX,[EBX + -0x1]                ; 004d0907
    PUSH EAX                            ; 004d090a
    MOV EDX,dword ptr [EBP + -0x28]     ; 004d090b
    PUSH EDX                            ; 004d090e
    PUSH EAX                            ; 004d090f
    MOV EDI,0x4                         ; 004d0910
    PUSH 0x3                            ; 004d0915
    MOV dword ptr [0x02d02570],EDI      ; 004d0917 | g_ActiveRenderColor
    CALL engine_2d.c_drawLine_FUN_004011b0 ; 004d091d
        ;   XREF to: 004011b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004011b0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 004d0922
    PUSH 0xc5                           ; 004d0925
    PUSH ESI                            ; 004d092a
    MOV dword ptr [0x02d02570],EDI      ; 004d092b | g_ActiveRenderColor
    CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0 ; 004d0931
        ;   XREF to: 004d01d0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004d0936
    ADD EAX,EBX                         ; 004d0939
    PUSH EAX                            ; 004d093b
    MOV EDI,dword ptr [EBP + -0x28]     ; 004d093c
    PUSH EDI                            ; 004d093f
    PUSH 0xc5                           ; 004d0940
    PUSH ESI                            ; 004d0945
    CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0 ; 004d0946
        ;   XREF to: 004d01d0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004d094b
    ADD EAX,EBX                         ; 004d094e
    PUSH EAX                            ; 004d0950
    PUSH 0x3                            ; 004d0951
    CALL engine_2d.c_drawLine_FUN_004011b0 ; 004d0953
        ;   XREF to: 004011b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004011b0(int x1, int y1, int x2, int y2)
    MOV dword ptr [0x02d02570],0x4      ; 004d0958 | g_ActiveRenderColor
    MOV EAX,dword ptr [ESI + 0x316c]    ; 004d0962
    ADD ESP,0x10                        ; 004d0968
    ADD EAX,EBX                         ; 004d096b
    PUSH EAX                            ; 004d096d
    PUSH EDI                            ; 004d096e
    PUSH EAX                            ; 004d096f
    PUSH 0x3                            ; 004d0970
    CALL engine_2d.c_drawLine_FUN_004011b0 ; 004d0972
        ;   XREF to: 004011b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004011b0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 004d0977
    MOV ECX,dword ptr [EBP + -0x2c]     ; 004d097a
        ;   Label: LAB_004d097a
    MOV EDI,0xa                         ; 004d097d
    ADD EBX,ECX                         ; 004d0982
    MOV EAX,dword ptr [EBP + -0x4]      ; 004d0984
        ;   Label: LAB_004d0984
    INC EAX                             ; 004d0987
    MOV dword ptr [EBP + -0x4],EAX      ; 004d0988
    CMP EAX,0x7f                        ; 004d098b
    JL 0x004d08c5                       ; 004d098e
        ;   XREF to: 004d08c5 (CONDITIONAL_JUMP)  ; LAB_004d08c5
    MOV EAX,dword ptr [ESI + 0x316c]    ; 004d0994
    MOV ECX,dword ptr [EBP + 0x1c]      ; 004d099a
    ADD EAX,EBX                         ; 004d099d
    CMP EAX,ECX                         ; 004d099f
    JNC 0x004d0a19                      ; 004d09a1
        ;   XREF to: 004d0a19 (CONDITIONAL_JUMP)  ; LAB_004d0a19
    MOV EDI,0x4                         ; 004d09a3
    LEA EAX,[EBX + -0x1]                ; 004d09a8
    MOV dword ptr [0x02d02570],EDI      ; 004d09ab | g_ActiveRenderColor
    MOV EDI,dword ptr [EBP + 0x18]      ; 004d09b1
    PUSH EAX                            ; 004d09b4
    DEC EDI                             ; 004d09b5
    PUSH EDI                            ; 004d09b6
    PUSH EAX                            ; 004d09b7
    PUSH 0x3                            ; 004d09b8
    CALL engine_2d.c_drawLine_FUN_004011b0 ; 004d09ba
        ;   XREF to: 004011b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004011b0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 004d09bf
    PUSH 0xc5                           ; 004d09c2
    MOV EAX,0x4                         ; 004d09c7
    PUSH ESI                            ; 004d09cc
    MOV [0x02d02570],EAX                ; 004d09cd | g_ActiveRenderColor
    CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0 ; 004d09d2
        ;   XREF to: 004d01d0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004d09d7
    ADD EAX,EBX                         ; 004d09da
    PUSH EAX                            ; 004d09dc
    PUSH EDI                            ; 004d09dd
    PUSH 0xc5                           ; 004d09de
    PUSH ESI                            ; 004d09e3
    CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0 ; 004d09e4
        ;   XREF to: 004d01d0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004d09e9
    ADD EAX,EBX                         ; 004d09ec
    PUSH EAX                            ; 004d09ee
    PUSH 0x3                            ; 004d09ef
    CALL engine_2d.c_drawLine_FUN_004011b0 ; 004d09f1
        ;   XREF to: 004011b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004011b0(int x1, int y1, int x2, int y2)
    MOV EAX,dword ptr [ESI + 0x316c]    ; 004d09f6
    ADD ESP,0x10                        ; 004d09fc
    ADD EAX,EBX                         ; 004d09ff
    PUSH EAX                            ; 004d0a01
    PUSH EDI                            ; 004d0a02
    PUSH EAX                            ; 004d0a03
    MOV EDX,0x4                         ; 004d0a04
    PUSH 0x3                            ; 004d0a09
    MOV dword ptr [0x02d02570],EDX      ; 004d0a0b | g_ActiveRenderColor
    CALL engine_2d.c_drawLine_FUN_004011b0 ; 004d0a11
        ;   XREF to: 004011b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004011b0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 004d0a16
    MOV ECX,dword ptr [EBP + -0x2c]     ; 004d0a19
        ;   Label: LAB_004d0a19
    MOV EAX,dword ptr [ESI + 0x316c]    ; 004d0a1c
    ADD EBX,ECX                         ; 004d0a22
    MOV EDI,dword ptr [EBP + 0x1c]      ; 004d0a24
    ADD EAX,EBX                         ; 004d0a27
    CMP EAX,EDI                         ; 004d0a29
    JC 0x004d0d38                       ; 004d0a2b
        ;   XREF to: 004d0d38 (CONDITIONAL_JUMP)  ; LAB_004d0d38
    MOV EAX,0xa                         ; 004d0a31
        ;   Label: LAB_004d0a31
    MOV EDI,0x7f                        ; 004d0a36
    MOV dword ptr [EBP + -0xc],EAX      ; 004d0a3b
    PUSH -0x1                           ; 004d0a3e
        ;   Label: LAB_004d0a3e
    PUSH 0x6                            ; 004d0a40
    PUSH EBX                            ; 004d0a42
    MOV EDX,dword ptr [EBP + -0xc]      ; 004d0a43
    PUSH EDX                            ; 004d0a46
    PUSH EDI                            ; 004d0a47
    PUSH ESI                            ; 004d0a48
    CALL engine_font.cpp_CBitFont_drawCharacter_FUN_004ce7a0 ; 004d0a49
        ;   XREF to: 004ce7a0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawCharacter_FUN_004ce7a0(CBitFont * this_ptr, int character_code, int x_pos, int y_pos, ...)
    MOV ECX,dword ptr [EBP + -0xc]      ; 004d0a4e
    INC EAX                             ; 004d0a51
    INC EDI                             ; 004d0a52
    ADD ECX,EAX                         ; 004d0a53
    ADD ESP,0x18                        ; 004d0a55
    MOV dword ptr [EBP + -0xc],ECX      ; 004d0a58
    CMP EDI,0x90                        ; 004d0a5b
    JL 0x004d0a3e                       ; 004d0a61
        ;   XREF to: 004d0a3e (CONDITIONAL_JUMP)  ; LAB_004d0a3e
    MOV EDI,dword ptr [EBP + -0x2c]     ; 004d0a63
    ADD EBX,EDI                         ; 004d0a66
    PUSH -0x1                           ; 004d0a68
    MOV EAX,EBX                         ; 004d0a6a
    PUSH 0x6                            ; 004d0a6c
    SUB EAX,EDI                         ; 004d0a6e
    PUSH EAX                            ; 004d0a70
    MOV EAX,dword ptr [EBP + 0x18]      ; 004d0a71
    SHR EAX,0x1                         ; 004d0a74
    PUSH EAX                            ; 004d0a76
    PUSH 0x62a86f                       ; 004d0a77 | s_A_a_0062a86f
    PUSH ESI                            ; 004d0a7c
    CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80 ; 004d0a7d
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80(CBitFont * this_ptr, char * text_string, int x_pos, int y_pos, ...)
    MOV EAX,dword ptr [ESI + 0x316c]    ; 004d0a82
    MOV ECX,dword ptr [EBP + 0x1c]      ; 004d0a88
    ADD EAX,EBX                         ; 004d0a8b
    ADD ESP,0x18                        ; 004d0a8d
    CMP EAX,ECX                         ; 004d0a90
    JC 0x004d0db3                       ; 004d0a92
        ;   XREF to: 004d0db3 (CONDITIONAL_JUMP)  ; LAB_004d0db3
    MOV ECX,0xa                         ; 004d0a98
        ;   Label: LAB_004d0a98
    MOV EDI,0x90                        ; 004d0a9d
    MOV dword ptr [EBP + -0x10],ECX     ; 004d0aa2
    PUSH -0x1                           ; 004d0aa5
        ;   Label: LAB_004d0aa5
    PUSH 0x6                            ; 004d0aa7
    PUSH EBX                            ; 004d0aa9
    MOV EAX,dword ptr [EBP + -0x10]     ; 004d0aaa
    PUSH EAX                            ; 004d0aad
    PUSH EDI                            ; 004d0aae
    PUSH ESI                            ; 004d0aaf
    CALL engine_font.cpp_CBitFont_drawCharacter_FUN_004ce7a0 ; 004d0ab0
        ;   XREF to: 004ce7a0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawCharacter_FUN_004ce7a0(CBitFont * this_ptr, int character_code, int x_pos, int y_pos, ...)
    MOV EDX,dword ptr [EBP + -0x10]     ; 004d0ab5
    INC EAX                             ; 004d0ab8
    INC EDI                             ; 004d0ab9
    ADD EDX,EAX                         ; 004d0aba
    ADD ESP,0x18                        ; 004d0abc
    MOV dword ptr [EBP + -0x10],EDX     ; 004d0abf
    CMP EDI,0xa0                        ; 004d0ac2
    JL 0x004d0aa5                       ; 004d0ac8
        ;   XREF to: 004d0aa5 (CONDITIONAL_JUMP)  ; LAB_004d0aa5
    MOV ECX,dword ptr [EBP + -0x2c]     ; 004d0aca
    ADD EBX,ECX                         ; 004d0acd
    PUSH -0x1                           ; 004d0acf
    MOV EAX,EBX                         ; 004d0ad1
    PUSH 0x6                            ; 004d0ad3
    SUB EAX,ECX                         ; 004d0ad5
    PUSH EAX                            ; 004d0ad7
    MOV EAX,dword ptr [EBP + 0x18]      ; 004d0ad8
    SHR EAX,0x1                         ; 004d0adb
    PUSH EAX                            ; 004d0add
    PUSH 0x62a87d                       ; 004d0ade | s_?_!_0062a87d
    PUSH ESI                            ; 004d0ae3
    CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80 ; 004d0ae4
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80(CBitFont * this_ptr, char * text_string, int x_pos, int y_pos, ...)
    MOV EAX,dword ptr [ESI + 0x316c]    ; 004d0ae9
    MOV EDX,dword ptr [EBP + 0x1c]      ; 004d0aef
    ADD EAX,EBX                         ; 004d0af2
    ADD ESP,0x18                        ; 004d0af4
    CMP EAX,EDX                         ; 004d0af7
    JC 0x004d0e2e                       ; 004d0af9
        ;   XREF to: 004d0e2e (CONDITIONAL_JUMP)  ; LAB_004d0e2e
    MOV ECX,0xa                         ; 004d0aff
        ;   Label: LAB_004d0aff
    MOV EDI,0xa0                        ; 004d0b04
    MOV dword ptr [EBP + -0x14],ECX     ; 004d0b09
    PUSH -0x1                           ; 004d0b0c
        ;   Label: LAB_004d0b0c
    PUSH 0x6                            ; 004d0b0e
    PUSH EBX                            ; 004d0b10
    MOV EAX,dword ptr [EBP + -0x14]     ; 004d0b11
    PUSH EAX                            ; 004d0b14
    PUSH EDI                            ; 004d0b15
    PUSH ESI                            ; 004d0b16
    CALL engine_font.cpp_CBitFont_drawCharacter_FUN_004ce7a0 ; 004d0b17
        ;   XREF to: 004ce7a0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawCharacter_FUN_004ce7a0(CBitFont * this_ptr, int character_code, int x_pos, int y_pos, ...)
    MOV EDX,dword ptr [EBP + -0x14]     ; 004d0b1c
    INC EAX                             ; 004d0b1f
    INC EDI                             ; 004d0b20
    ADD EDX,EAX                         ; 004d0b21
    ADD ESP,0x18                        ; 004d0b23
    MOV dword ptr [EBP + -0x14],EDX     ; 004d0b26
    CMP EDI,0xb0                        ; 004d0b29
    JL 0x004d0b0c                       ; 004d0b2f
        ;   XREF to: 004d0b0c (CONDITIONAL_JUMP)  ; LAB_004d0b0c
    MOV ECX,dword ptr [EBP + -0x2c]     ; 004d0b31
    ADD EBX,ECX                         ; 004d0b34
    PUSH -0x1                           ; 004d0b36
    MOV EAX,EBX                         ; 004d0b38
    PUSH 0x6                            ; 004d0b3a
    SUB EAX,ECX                         ; 004d0b3c
    PUSH EAX                            ; 004d0b3e
    MOV EAX,dword ptr [EBP + 0x18]      ; 004d0b3f
    SHR EAX,0x1                         ; 004d0b42
    PUSH EAX                            ; 004d0b44
    PUSH 0x62a892                       ; 004d0b45 | s__0062a892
    PUSH ESI                            ; 004d0b4a
    CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80 ; 004d0b4b
        ;   XREF to: 004cda80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80(CBitFont * this_ptr, char * text_string, int x_pos, int y_pos, ...)
    MOV EAX,dword ptr [ESI + 0x316c]    ; 004d0b50
    MOV EDX,dword ptr [EBP + 0x1c]      ; 004d0b56
    ADD EAX,EBX                         ; 004d0b59
    ADD ESP,0x18                        ; 004d0b5b
    CMP EAX,EDX                         ; 004d0b5e
    JC 0x004d0ea9                       ; 004d0b60
        ;   XREF to: 004d0ea9 (CONDITIONAL_JUMP)  ; LAB_004d0ea9
    MOV ECX,0xa                         ; 004d0b66
        ;   Label: LAB_004d0b66
    MOV EDI,0xb0                        ; 004d0b6b
    MOV dword ptr [EBP + -0x18],ECX     ; 004d0b70
    PUSH -0x1                           ; 004d0b73
        ;   Label: LAB_004d0b73
    PUSH 0x6                            ; 004d0b75
    PUSH EBX                            ; 004d0b77
    MOV EAX,dword ptr [EBP + -0x18]     ; 004d0b78
    PUSH EAX                            ; 004d0b7b
    PUSH EDI                            ; 004d0b7c
    PUSH ESI                            ; 004d0b7d
    CALL engine_font.cpp_CBitFont_drawCharacter_FUN_004ce7a0 ; 004d0b7e
        ;   XREF to: 004ce7a0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawCharacter_FUN_004ce7a0(CBitFont * this_ptr, int character_code, int x_pos, int y_pos, ...)
    MOV EDX,dword ptr [EBP + -0x18]     ; 004d0b83
    INC EAX                             ; 004d0b86
    INC EDI                             ; 004d0b87
    ADD EDX,EAX                         ; 004d0b88
    ADD ESP,0x18                        ; 004d0b8a
    MOV dword ptr [EBP + -0x18],EDX     ; 004d0b8d
    CMP EDI,0xc0                        ; 004d0b90
    JL 0x004d0b73                       ; 004d0b96
        ;   XREF to: 004d0b73 (CONDITIONAL_JUMP)  ; LAB_004d0b73
    MOV EAX,dword ptr [ESI + 0x316c]    ; 004d0b98
    PUSH EAX                            ; 004d0b9e
    MOV ECX,dword ptr [EBP + -0x2c]     ; 004d0b9f
    PUSH 0x62a89d                       ; 004d0ba2 | = "maxCharHght: %d"
    ADD EBX,ECX                         ; 004d0ba7
    PUSH 0x6                            ; 004d0ba9
    MOV EAX,EBX                         ; 004d0bab
    PUSH 0x1                            ; 004d0bad
    SUB EAX,ECX                         ; 004d0baf
    PUSH EAX                            ; 004d0bb1
    MOV EAX,dword ptr [EBP + 0x18]      ; 004d0bb2
    SHR EAX,0x1                         ; 004d0bb5
    PUSH EAX                            ; 004d0bb7
    PUSH ESI                            ; 004d0bb8
    CALL engine_font.cpp_CBitFont_drawTextFV_FUN_004cdc20 ; 004d0bb9
        ;   XREF to: 004cdc20 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextFV_FUN_004cdc20(CBitFont * this_ptr, int x_pos, int y_pos, int color_mode, ...)
    MOV EAX,dword ptr [ESI + 0x316c]    ; 004d0bbe
    MOV EDX,dword ptr [EBP + 0x1c]      ; 004d0bc4
    ADD EAX,EBX                         ; 004d0bc7
    ADD ESP,0x1c                        ; 004d0bc9
    CMP EAX,EDX                         ; 004d0bcc
    JC 0x004d0f24                       ; 004d0bce
        ;   XREF to: 004d0f24 (CONDITIONAL_JUMP)  ; LAB_004d0f24
    MOV ECX,0xa                         ; 004d0bd4
        ;   Label: LAB_004d0bd4
    MOV EDI,0xc0                        ; 004d0bd9
    MOV dword ptr [EBP + -0x1c],ECX     ; 004d0bde
    PUSH -0x1                           ; 004d0be1
        ;   Label: LAB_004d0be1
    PUSH 0x6                            ; 004d0be3
    PUSH EBX                            ; 004d0be5
    MOV EAX,dword ptr [EBP + -0x1c]     ; 004d0be6
    PUSH EAX                            ; 004d0be9
    PUSH EDI                            ; 004d0bea
    PUSH ESI                            ; 004d0beb
    CALL engine_font.cpp_CBitFont_drawCharacter_FUN_004ce7a0 ; 004d0bec
        ;   XREF to: 004ce7a0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawCharacter_FUN_004ce7a0(CBitFont * this_ptr, int character_code, int x_pos, int y_pos, ...)
    MOV EDX,dword ptr [EBP + -0x1c]     ; 004d0bf1
    INC EAX                             ; 004d0bf4
    INC EDI                             ; 004d0bf5
    ADD EDX,EAX                         ; 004d0bf6
    ADD ESP,0x18                        ; 004d0bf8
    MOV dword ptr [EBP + -0x1c],EDX     ; 004d0bfb
    CMP EDI,0xd0                        ; 004d0bfe
    JL 0x004d0be1                       ; 004d0c04
        ;   XREF to: 004d0be1 (CONDITIONAL_JUMP)  ; LAB_004d0be1
    MOV ECX,dword ptr [EBP + -0x2c]     ; 004d0c06
    MOV EAX,dword ptr [ESI + 0x316c]    ; 004d0c09
    ADD EBX,ECX                         ; 004d0c0f
    MOV EDI,dword ptr [EBP + 0x1c]      ; 004d0c11
    ADD EAX,EBX                         ; 004d0c14
    CMP EAX,EDI                         ; 004d0c16
    JC 0x004d0f9f                       ; 004d0c18
        ;   XREF to: 004d0f9f (CONDITIONAL_JUMP)  ; LAB_004d0f9f
    MOV EAX,0xa                         ; 004d0c1e
        ;   Label: LAB_004d0c1e
    MOV EDI,0xd0                        ; 004d0c23
    MOV dword ptr [EBP + -0x20],EAX     ; 004d0c28
    PUSH -0x1                           ; 004d0c2b
        ;   Label: LAB_004d0c2b
    PUSH 0x6                            ; 004d0c2d
    PUSH EBX                            ; 004d0c2f
    MOV EDX,dword ptr [EBP + -0x20]     ; 004d0c30
    PUSH EDX                            ; 004d0c33
    PUSH EDI                            ; 004d0c34
    PUSH ESI                            ; 004d0c35
    CALL engine_font.cpp_CBitFont_drawCharacter_FUN_004ce7a0 ; 004d0c36
        ;   XREF to: 004ce7a0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawCharacter_FUN_004ce7a0(CBitFont * this_ptr, int character_code, int x_pos, int y_pos, ...)
    MOV ECX,dword ptr [EBP + -0x20]     ; 004d0c3b
    INC EAX                             ; 004d0c3e
    INC EDI                             ; 004d0c3f
    ADD ECX,EAX                         ; 004d0c40
    ADD ESP,0x18                        ; 004d0c42
    MOV dword ptr [EBP + -0x20],ECX     ; 004d0c45
    CMP EDI,0xe0                        ; 004d0c48
    JL 0x004d0c2b                       ; 004d0c4e
        ;   XREF to: 004d0c2b (CONDITIONAL_JUMP)  ; LAB_004d0c2b
    MOV EDI,dword ptr [EBP + -0x2c]     ; 004d0c50
    MOV EAX,dword ptr [ESI + 0x316c]    ; 004d0c53
    ADD EBX,EDI                         ; 004d0c59
    MOV EDX,dword ptr [EBP + 0x1c]      ; 004d0c5b
    ADD EAX,EBX                         ; 004d0c5e
    CMP EAX,EDX                         ; 004d0c60
    JC 0x004d101a                       ; 004d0c62
        ;   XREF to: 004d101a (CONDITIONAL_JUMP)  ; LAB_004d101a
    MOV ECX,0xa                         ; 004d0c68
        ;   Label: LAB_004d0c68
    MOV EDI,0xe0                        ; 004d0c6d
    MOV dword ptr [EBP + -0x24],ECX     ; 004d0c72
    PUSH -0x1                           ; 004d0c75
        ;   Label: LAB_004d0c75
    PUSH 0x6                            ; 004d0c77
    PUSH EBX                            ; 004d0c79
    MOV EAX,dword ptr [EBP + -0x24]     ; 004d0c7a
    PUSH EAX                            ; 004d0c7d
    PUSH EDI                            ; 004d0c7e
    PUSH ESI                            ; 004d0c7f
    CALL engine_font.cpp_CBitFont_drawCharacter_FUN_004ce7a0 ; 004d0c80
        ;   XREF to: 004ce7a0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawCharacter_FUN_004ce7a0(CBitFont * this_ptr, int character_code, int x_pos, int y_pos, ...)
    MOV EDX,dword ptr [EBP + -0x24]     ; 004d0c85
    INC EAX                             ; 004d0c88
    INC EDI                             ; 004d0c89
    ADD EDX,EAX                         ; 004d0c8a
    ADD ESP,0x18                        ; 004d0c8c
    MOV dword ptr [EBP + -0x24],EDX     ; 004d0c8f
    CMP EDI,0xf0                        ; 004d0c92
    JL 0x004d0c75                       ; 004d0c98
        ;   XREF to: 004d0c75 (CONDITIONAL_JUMP)  ; LAB_004d0c75
    MOV ECX,dword ptr [EBP + -0x2c]     ; 004d0c9a
    MOV EAX,dword ptr [ESI + 0x316c]    ; 004d0c9d
    ADD EBX,ECX                         ; 004d0ca3
    MOV EDI,dword ptr [EBP + 0x1c]      ; 004d0ca5
    ADD EAX,EBX                         ; 004d0ca8
    CMP EAX,EDI                         ; 004d0caa
    JC 0x004d1095                       ; 004d0cac
        ;   XREF to: 004d1095 (CONDITIONAL_JUMP)  ; LAB_004d1095
    MOV EAX,0xa                         ; 004d0cb2
        ;   Label: LAB_004d0cb2
    MOV EDI,0xf0                        ; 004d0cb7
    MOV dword ptr [EBP + -0x8],EAX      ; 004d0cbc
    PUSH -0x1                           ; 004d0cbf
        ;   Label: LAB_004d0cbf
    PUSH 0x6                            ; 004d0cc1
    PUSH EBX                            ; 004d0cc3
    MOV EDX,dword ptr [EBP + -0x8]      ; 004d0cc4
    PUSH EDX                            ; 004d0cc7
    PUSH EDI                            ; 004d0cc8
    PUSH ESI                            ; 004d0cc9
    CALL engine_font.cpp_CBitFont_drawCharacter_FUN_004ce7a0 ; 004d0cca
        ;   XREF to: 004ce7a0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawCharacter_FUN_004ce7a0(CBitFont * this_ptr, int character_code, int x_pos, int y_pos, ...)
    MOV ECX,dword ptr [EBP + -0x8]      ; 004d0ccf
    INC EAX                             ; 004d0cd2
    INC EDI                             ; 004d0cd3
    ADD ECX,EAX                         ; 004d0cd4
    ADD ESP,0x18                        ; 004d0cd6
    MOV dword ptr [EBP + -0x8],ECX      ; 004d0cd9
    CMP EDI,0x100                       ; 004d0cdc
    JL 0x004d0cbf                       ; 004d0ce2
        ;   XREF to: 004d0cbf (CONDITIONAL_JUMP)  ; LAB_004d0cbf
    PUSH 0xff                           ; 004d0ce4
    PUSH ESI                            ; 004d0ce9
    CALL engine_font.cpp_CBitFont_getCharXAdvance_FUN_004d0200 ; 004d0cea
        ;   XREF to: 004d0200 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharXAdvance_FUN_004d0200(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004d0cef
    PUSH EAX                            ; 004d0cf2
    PUSH 0xff                           ; 004d0cf3
    PUSH ESI                            ; 004d0cf8
    CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0 ; 004d0cf9
        ;   XREF to: 004d01d0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004d0cfe
    PUSH EAX                            ; 004d0d01
    PUSH 0xff                           ; 004d0d02
    PUSH ESI                            ; 004d0d07
    CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01a0 ; 004d0d08
        ;   XREF to: 004d01a0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharWidth_FUN_004d01a0(CBitFont * font, int char_code)
    ADD ESP,0x8                         ; 004d0d0d
    PUSH EAX                            ; 004d0d10
    PUSH 0x62a8ad                       ; 004d0d11 | s_CharMax_0062a8ad
    MOV EDI,dword ptr [EBP + -0x2c]     ; 004d0d16
    PUSH 0x6                            ; 004d0d19
    ADD EBX,EDI                         ; 004d0d1b
    PUSH 0x1                            ; 004d0d1d
    SUB EBX,EDI                         ; 004d0d1f
    MOV EAX,dword ptr [EBP + 0x18]      ; 004d0d21
    PUSH EBX                            ; 004d0d24
    SHR EAX,0x1                         ; 004d0d25
    PUSH EAX                            ; 004d0d27
    PUSH ESI                            ; 004d0d28
    CALL engine_font.cpp_CBitFont_drawTextFV_FUN_004cdc20 ; 004d0d29
        ;   XREF to: 004cdc20 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextFV_FUN_004cdc20(CBitFont * this_ptr, int x_pos, int y_pos, int color_mode, ...)
    ADD ESP,0x24                        ; 004d0d2e
    MOV ESP,EBP                         ; 004d0d31
    POP EBP                             ; 004d0d33
    POP EDI                             ; 004d0d34
    POP ESI                             ; 004d0d35
    POP EBX                             ; 004d0d36
    RET                                 ; 004d0d37
    MOV dword ptr [0x02d02570],0x4      ; 004d0d38 | g_ActiveRenderColor
        ;   Label: LAB_004d0d38
    LEA EAX,[EBX + -0x1]                ; 004d0d42
    MOV EDI,dword ptr [EBP + 0x18]      ; 004d0d45
    PUSH EAX                            ; 004d0d48
    DEC EDI                             ; 004d0d49
    PUSH EDI                            ; 004d0d4a
    PUSH EAX                            ; 004d0d4b
    PUSH 0x3                            ; 004d0d4c
    CALL engine_2d.c_drawLine_FUN_004011b0 ; 004d0d4e
        ;   XREF to: 004011b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004011b0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 004d0d53
    PUSH 0xc5                           ; 004d0d56
    MOV EDX,0x4                         ; 004d0d5b
    PUSH ESI                            ; 004d0d60
    MOV dword ptr [0x02d02570],EDX      ; 004d0d61 | g_ActiveRenderColor
    CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0 ; 004d0d67
        ;   XREF to: 004d01d0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004d0d6c
    ADD EAX,EBX                         ; 004d0d6f
    PUSH EAX                            ; 004d0d71
    PUSH EDI                            ; 004d0d72
    PUSH 0xc5                           ; 004d0d73
    PUSH ESI                            ; 004d0d78
    CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0 ; 004d0d79
        ;   XREF to: 004d01d0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004d0d7e
    ADD EAX,EBX                         ; 004d0d81
    PUSH EAX                            ; 004d0d83
    PUSH 0x3                            ; 004d0d84
    CALL engine_2d.c_drawLine_FUN_004011b0 ; 004d0d86
        ;   XREF to: 004011b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004011b0(int x1, int y1, int x2, int y2)
    MOV EAX,dword ptr [ESI + 0x316c]    ; 004d0d8b
    ADD ESP,0x10                        ; 004d0d91
    ADD EAX,EBX                         ; 004d0d94
    PUSH EAX                            ; 004d0d96
    PUSH EDI                            ; 004d0d97
    PUSH EAX                            ; 004d0d98
    MOV ECX,0x4                         ; 004d0d99
    PUSH 0x3                            ; 004d0d9e
    MOV dword ptr [0x02d02570],ECX      ; 004d0da0 | g_ActiveRenderColor
    CALL engine_2d.c_drawLine_FUN_004011b0 ; 004d0da6
        ;   XREF to: 004011b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004011b0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 004d0dab
    JMP 0x004d0a31                      ; 004d0dae
        ;   XREF to: 004d0a31 (UNCONDITIONAL_JUMP)  ; LAB_004d0a31
    MOV EDI,0x4                         ; 004d0db3
        ;   Label: LAB_004d0db3
    LEA EAX,[EBX + -0x1]                ; 004d0db8
    MOV dword ptr [0x02d02570],EDI      ; 004d0dbb | g_ActiveRenderColor
    MOV EDI,dword ptr [EBP + 0x18]      ; 004d0dc1
    PUSH EAX                            ; 004d0dc4
    DEC EDI                             ; 004d0dc5
    PUSH EDI                            ; 004d0dc6
    PUSH EAX                            ; 004d0dc7
    PUSH 0x3                            ; 004d0dc8
    CALL engine_2d.c_drawLine_FUN_004011b0 ; 004d0dca
        ;   XREF to: 004011b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004011b0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 004d0dcf
    PUSH 0xc5                           ; 004d0dd2
    MOV EAX,0x4                         ; 004d0dd7
    PUSH ESI                            ; 004d0ddc
    MOV [0x02d02570],EAX                ; 004d0ddd | g_ActiveRenderColor
    CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0 ; 004d0de2
        ;   XREF to: 004d01d0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004d0de7
    ADD EAX,EBX                         ; 004d0dea
    PUSH EAX                            ; 004d0dec
    PUSH EDI                            ; 004d0ded
    PUSH 0xc5                           ; 004d0dee
    PUSH ESI                            ; 004d0df3
    CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0 ; 004d0df4
        ;   XREF to: 004d01d0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004d0df9
    ADD EAX,EBX                         ; 004d0dfc
    PUSH EAX                            ; 004d0dfe
    PUSH 0x3                            ; 004d0dff
    CALL engine_2d.c_drawLine_FUN_004011b0 ; 004d0e01
        ;   XREF to: 004011b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004011b0(int x1, int y1, int x2, int y2)
    MOV EAX,dword ptr [ESI + 0x316c]    ; 004d0e06
    ADD ESP,0x10                        ; 004d0e0c
    ADD EAX,EBX                         ; 004d0e0f
    PUSH EAX                            ; 004d0e11
    PUSH EDI                            ; 004d0e12
    PUSH EAX                            ; 004d0e13
    MOV EDX,0x4                         ; 004d0e14
    PUSH 0x3                            ; 004d0e19
    MOV dword ptr [0x02d02570],EDX      ; 004d0e1b | g_ActiveRenderColor
    CALL engine_2d.c_drawLine_FUN_004011b0 ; 004d0e21
        ;   XREF to: 004011b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004011b0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 004d0e26
    JMP 0x004d0a98                      ; 004d0e29
        ;   XREF to: 004d0a98 (UNCONDITIONAL_JUMP)  ; LAB_004d0a98
    LEA EAX,[EBX + -0x1]                ; 004d0e2e
        ;   Label: LAB_004d0e2e
    MOV EDI,dword ptr [EBP + 0x18]      ; 004d0e31
    PUSH EAX                            ; 004d0e34
    DEC EDI                             ; 004d0e35
    PUSH EDI                            ; 004d0e36
    PUSH EAX                            ; 004d0e37
    MOV ECX,0x4                         ; 004d0e38
    PUSH 0x3                            ; 004d0e3d
    MOV dword ptr [0x02d02570],ECX      ; 004d0e3f | g_ActiveRenderColor
    CALL engine_2d.c_drawLine_FUN_004011b0 ; 004d0e45
        ;   XREF to: 004011b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004011b0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 004d0e4a
    PUSH 0xc5                           ; 004d0e4d
    MOV EAX,0x4                         ; 004d0e52
    PUSH ESI                            ; 004d0e57
    MOV [0x02d02570],EAX                ; 004d0e58 | g_ActiveRenderColor
    CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0 ; 004d0e5d
        ;   XREF to: 004d01d0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004d0e62
    ADD EAX,EBX                         ; 004d0e65
    PUSH EAX                            ; 004d0e67
    PUSH EDI                            ; 004d0e68
    PUSH 0xc5                           ; 004d0e69
    PUSH ESI                            ; 004d0e6e
    CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0 ; 004d0e6f
        ;   XREF to: 004d01d0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004d0e74
    ADD EAX,EBX                         ; 004d0e77
    PUSH EAX                            ; 004d0e79
    PUSH 0x3                            ; 004d0e7a
    CALL engine_2d.c_drawLine_FUN_004011b0 ; 004d0e7c
        ;   XREF to: 004011b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004011b0(int x1, int y1, int x2, int y2)
    MOV EAX,dword ptr [ESI + 0x316c]    ; 004d0e81
    ADD ESP,0x10                        ; 004d0e87
    ADD EAX,EBX                         ; 004d0e8a
    PUSH EAX                            ; 004d0e8c
    PUSH EDI                            ; 004d0e8d
    PUSH EAX                            ; 004d0e8e
    MOV EDX,0x4                         ; 004d0e8f
    PUSH 0x3                            ; 004d0e94
    MOV dword ptr [0x02d02570],EDX      ; 004d0e96 | g_ActiveRenderColor
    CALL engine_2d.c_drawLine_FUN_004011b0 ; 004d0e9c
        ;   XREF to: 004011b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004011b0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 004d0ea1
    JMP 0x004d0aff                      ; 004d0ea4
        ;   XREF to: 004d0aff (UNCONDITIONAL_JUMP)  ; LAB_004d0aff
    LEA EAX,[EBX + -0x1]                ; 004d0ea9
        ;   Label: LAB_004d0ea9
    MOV EDI,dword ptr [EBP + 0x18]      ; 004d0eac
    PUSH EAX                            ; 004d0eaf
    DEC EDI                             ; 004d0eb0
    PUSH EDI                            ; 004d0eb1
    PUSH EAX                            ; 004d0eb2
    MOV ECX,0x4                         ; 004d0eb3
    PUSH 0x3                            ; 004d0eb8
    MOV dword ptr [0x02d02570],ECX      ; 004d0eba | g_ActiveRenderColor
    CALL engine_2d.c_drawLine_FUN_004011b0 ; 004d0ec0
        ;   XREF to: 004011b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004011b0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 004d0ec5
    PUSH 0xc5                           ; 004d0ec8
    MOV EAX,0x4                         ; 004d0ecd
    PUSH ESI                            ; 004d0ed2
    MOV [0x02d02570],EAX                ; 004d0ed3 | g_ActiveRenderColor
    CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0 ; 004d0ed8
        ;   XREF to: 004d01d0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004d0edd
    ADD EAX,EBX                         ; 004d0ee0
    PUSH EAX                            ; 004d0ee2
    PUSH EDI                            ; 004d0ee3
    PUSH 0xc5                           ; 004d0ee4
    PUSH ESI                            ; 004d0ee9
    CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0 ; 004d0eea
        ;   XREF to: 004d01d0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004d0eef
    ADD EAX,EBX                         ; 004d0ef2
    PUSH EAX                            ; 004d0ef4
    PUSH 0x3                            ; 004d0ef5
    CALL engine_2d.c_drawLine_FUN_004011b0 ; 004d0ef7
        ;   XREF to: 004011b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004011b0(int x1, int y1, int x2, int y2)
    MOV EAX,dword ptr [ESI + 0x316c]    ; 004d0efc
    ADD ESP,0x10                        ; 004d0f02
    ADD EAX,EBX                         ; 004d0f05
    PUSH EAX                            ; 004d0f07
    PUSH EDI                            ; 004d0f08
    PUSH EAX                            ; 004d0f09
    MOV EDX,0x4                         ; 004d0f0a
    PUSH 0x3                            ; 004d0f0f
    MOV dword ptr [0x02d02570],EDX      ; 004d0f11 | g_ActiveRenderColor
    CALL engine_2d.c_drawLine_FUN_004011b0 ; 004d0f17
        ;   XREF to: 004011b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004011b0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 004d0f1c
    JMP 0x004d0b66                      ; 004d0f1f
        ;   XREF to: 004d0b66 (UNCONDITIONAL_JUMP)  ; LAB_004d0b66
    LEA EAX,[EBX + -0x1]                ; 004d0f24
        ;   Label: LAB_004d0f24
    MOV EDI,dword ptr [EBP + 0x18]      ; 004d0f27
    PUSH EAX                            ; 004d0f2a
    DEC EDI                             ; 004d0f2b
    PUSH EDI                            ; 004d0f2c
    PUSH EAX                            ; 004d0f2d
    MOV ECX,0x4                         ; 004d0f2e
    PUSH 0x3                            ; 004d0f33
    MOV dword ptr [0x02d02570],ECX      ; 004d0f35 | g_ActiveRenderColor
    CALL engine_2d.c_drawLine_FUN_004011b0 ; 004d0f3b
        ;   XREF to: 004011b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004011b0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 004d0f40
    PUSH 0xc5                           ; 004d0f43
    MOV EAX,0x4                         ; 004d0f48
    PUSH ESI                            ; 004d0f4d
    MOV [0x02d02570],EAX                ; 004d0f4e | g_ActiveRenderColor
    CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0 ; 004d0f53
        ;   XREF to: 004d01d0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004d0f58
    ADD EAX,EBX                         ; 004d0f5b
    PUSH EAX                            ; 004d0f5d
    PUSH EDI                            ; 004d0f5e
    PUSH 0xc5                           ; 004d0f5f
    PUSH ESI                            ; 004d0f64
    CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0 ; 004d0f65
        ;   XREF to: 004d01d0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004d0f6a
    ADD EAX,EBX                         ; 004d0f6d
    PUSH EAX                            ; 004d0f6f
    PUSH 0x3                            ; 004d0f70
    CALL engine_2d.c_drawLine_FUN_004011b0 ; 004d0f72
        ;   XREF to: 004011b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004011b0(int x1, int y1, int x2, int y2)
    MOV EAX,dword ptr [ESI + 0x316c]    ; 004d0f77
    ADD ESP,0x10                        ; 004d0f7d
    ADD EAX,EBX                         ; 004d0f80
    PUSH EAX                            ; 004d0f82
    PUSH EDI                            ; 004d0f83
    PUSH EAX                            ; 004d0f84
    MOV EDX,0x4                         ; 004d0f85
    PUSH 0x3                            ; 004d0f8a
    MOV dword ptr [0x02d02570],EDX      ; 004d0f8c | g_ActiveRenderColor
    CALL engine_2d.c_drawLine_FUN_004011b0 ; 004d0f92
        ;   XREF to: 004011b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004011b0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 004d0f97
    JMP 0x004d0bd4                      ; 004d0f9a
        ;   XREF to: 004d0bd4 (UNCONDITIONAL_JUMP)  ; LAB_004d0bd4
    MOV dword ptr [0x02d02570],0x4      ; 004d0f9f | g_ActiveRenderColor
        ;   Label: LAB_004d0f9f
    LEA EAX,[EBX + -0x1]                ; 004d0fa9
    MOV EDI,dword ptr [EBP + 0x18]      ; 004d0fac
    PUSH EAX                            ; 004d0faf
    DEC EDI                             ; 004d0fb0
    PUSH EDI                            ; 004d0fb1
    PUSH EAX                            ; 004d0fb2
    PUSH 0x3                            ; 004d0fb3
    CALL engine_2d.c_drawLine_FUN_004011b0 ; 004d0fb5
        ;   XREF to: 004011b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004011b0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 004d0fba
    PUSH 0xc5                           ; 004d0fbd
    MOV EDX,0x4                         ; 004d0fc2
    PUSH ESI                            ; 004d0fc7
    MOV dword ptr [0x02d02570],EDX      ; 004d0fc8 | g_ActiveRenderColor
    CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0 ; 004d0fce
        ;   XREF to: 004d01d0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004d0fd3
    ADD EAX,EBX                         ; 004d0fd6
    PUSH EAX                            ; 004d0fd8
    PUSH EDI                            ; 004d0fd9
    PUSH 0xc5                           ; 004d0fda
    PUSH ESI                            ; 004d0fdf
    CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0 ; 004d0fe0
        ;   XREF to: 004d01d0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004d0fe5
    ADD EAX,EBX                         ; 004d0fe8
    PUSH EAX                            ; 004d0fea
    PUSH 0x3                            ; 004d0feb
    CALL engine_2d.c_drawLine_FUN_004011b0 ; 004d0fed
        ;   XREF to: 004011b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004011b0(int x1, int y1, int x2, int y2)
    MOV EAX,dword ptr [ESI + 0x316c]    ; 004d0ff2
    ADD ESP,0x10                        ; 004d0ff8
    ADD EAX,EBX                         ; 004d0ffb
    PUSH EAX                            ; 004d0ffd
    PUSH EDI                            ; 004d0ffe
    PUSH EAX                            ; 004d0fff
    MOV ECX,0x4                         ; 004d1000
    PUSH 0x3                            ; 004d1005
    MOV dword ptr [0x02d02570],ECX      ; 004d1007 | g_ActiveRenderColor
    CALL engine_2d.c_drawLine_FUN_004011b0 ; 004d100d
        ;   XREF to: 004011b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004011b0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 004d1012
    JMP 0x004d0c1e                      ; 004d1015
        ;   XREF to: 004d0c1e (UNCONDITIONAL_JUMP)  ; LAB_004d0c1e
    LEA EAX,[EBX + -0x1]                ; 004d101a
        ;   Label: LAB_004d101a
    MOV EDI,dword ptr [EBP + 0x18]      ; 004d101d
    PUSH EAX                            ; 004d1020
    DEC EDI                             ; 004d1021
    PUSH EDI                            ; 004d1022
    PUSH EAX                            ; 004d1023
    MOV ECX,0x4                         ; 004d1024
    PUSH 0x3                            ; 004d1029
    MOV dword ptr [0x02d02570],ECX      ; 004d102b | g_ActiveRenderColor
    CALL engine_2d.c_drawLine_FUN_004011b0 ; 004d1031
        ;   XREF to: 004011b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004011b0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 004d1036
    PUSH 0xc5                           ; 004d1039
    MOV EAX,0x4                         ; 004d103e
    PUSH ESI                            ; 004d1043
    MOV [0x02d02570],EAX                ; 004d1044 | g_ActiveRenderColor
    CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0 ; 004d1049
        ;   XREF to: 004d01d0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004d104e
    ADD EAX,EBX                         ; 004d1051
    PUSH EAX                            ; 004d1053
    PUSH EDI                            ; 004d1054
    PUSH 0xc5                           ; 004d1055
    PUSH ESI                            ; 004d105a
    CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0 ; 004d105b
        ;   XREF to: 004d01d0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004d1060
    ADD EAX,EBX                         ; 004d1063
    PUSH EAX                            ; 004d1065
    PUSH 0x3                            ; 004d1066
    CALL engine_2d.c_drawLine_FUN_004011b0 ; 004d1068
        ;   XREF to: 004011b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004011b0(int x1, int y1, int x2, int y2)
    MOV EAX,dword ptr [ESI + 0x316c]    ; 004d106d
    ADD ESP,0x10                        ; 004d1073
    ADD EAX,EBX                         ; 004d1076
    PUSH EAX                            ; 004d1078
    PUSH EDI                            ; 004d1079
    PUSH EAX                            ; 004d107a
    MOV EDX,0x4                         ; 004d107b
    PUSH 0x3                            ; 004d1080
    MOV dword ptr [0x02d02570],EDX      ; 004d1082 | g_ActiveRenderColor
    CALL engine_2d.c_drawLine_FUN_004011b0 ; 004d1088
        ;   XREF to: 004011b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004011b0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 004d108d
    JMP 0x004d0c68                      ; 004d1090
        ;   XREF to: 004d0c68 (UNCONDITIONAL_JUMP)  ; LAB_004d0c68
    MOV dword ptr [0x02d02570],0x4      ; 004d1095 | g_ActiveRenderColor
        ;   Label: LAB_004d1095
    LEA EAX,[EBX + -0x1]                ; 004d109f
    MOV EDI,dword ptr [EBP + 0x18]      ; 004d10a2
    PUSH EAX                            ; 004d10a5
    DEC EDI                             ; 004d10a6
    PUSH EDI                            ; 004d10a7
    PUSH EAX                            ; 004d10a8
    PUSH 0x3                            ; 004d10a9
    CALL engine_2d.c_drawLine_FUN_004011b0 ; 004d10ab
        ;   XREF to: 004011b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004011b0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 004d10b0
    PUSH 0xc5                           ; 004d10b3
    MOV EDX,0x4                         ; 004d10b8
    PUSH ESI                            ; 004d10bd
    MOV dword ptr [0x02d02570],EDX      ; 004d10be | g_ActiveRenderColor
    CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0 ; 004d10c4
        ;   XREF to: 004d01d0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004d10c9
    ADD EAX,EBX                         ; 004d10cc
    PUSH EAX                            ; 004d10ce
    PUSH EDI                            ; 004d10cf
    PUSH 0xc5                           ; 004d10d0
    PUSH ESI                            ; 004d10d5
    CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0 ; 004d10d6
        ;   XREF to: 004d01d0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004d10db
    ADD EAX,EBX                         ; 004d10de
    PUSH EAX                            ; 004d10e0
    PUSH 0x3                            ; 004d10e1
    CALL engine_2d.c_drawLine_FUN_004011b0 ; 004d10e3
        ;   XREF to: 004011b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004011b0(int x1, int y1, int x2, int y2)
    MOV EAX,dword ptr [ESI + 0x316c]    ; 004d10e8
    ADD ESP,0x10                        ; 004d10ee
    ADD EAX,EBX                         ; 004d10f1
    PUSH EAX                            ; 004d10f3
    PUSH EDI                            ; 004d10f4
    PUSH EAX                            ; 004d10f5
    MOV ECX,0x4                         ; 004d10f6
    PUSH 0x3                            ; 004d10fb
    MOV dword ptr [0x02d02570],ECX      ; 004d10fd | g_ActiveRenderColor
    CALL engine_2d.c_drawLine_FUN_004011b0 ; 004d1103
        ;   XREF to: 004011b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004011b0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 004d1108
    JMP 0x004d0cb2                      ; 004d110b
        ;   XREF to: 004d0cb2 (UNCONDITIONAL_JUMP)  ; LAB_004d0cb2

