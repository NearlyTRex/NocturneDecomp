; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_menu_cpp_FUN_004e7860(char **menu_text_array,int menu_count,int *selected_index_ptr,int y_position,char *title)
;
; Parameters:
; char * *         Stack[0x4]:4   menu_text_array
; int              Stack[0x8]:4   menu_count
; int *            Stack[0xc]:4   selected_index_ptr
; int              Stack[0x10]:4   y_position
; char *           Stack[0x14]:4   title
; Local Variables:
; undefined        Stack[-0xf0]:1  local_f0
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[5]:
;   core_menu.cpp_FUN_004e85a0 at 004e89ee
;   core_menu.cpp_FUN_004e8f80 at 004e9263
;   core_menu.cpp_FUN_004e94f0 at 004e9bd1
;   core_menu.cpp_FUN_004ea280 at 004ea3be
;   core_menu.cpp_showMainGameMenu_FUN_004ea4d0 at 004ea707
;
; Referenced Globals:
;   TerminatedCString s_Blair_Witch_Volume_III_T_005c71f6
;   undefined4 DAT_00600284
;   undefined4 DAT_01549aac
;   undefined4 DAT_01549ab0
;   undefined4 DAT_01549ab4
;   undefined4 DAT_01d70a78
;   undefined4 DAT_01d737d4
;   undefined4 DAT_01d737e4
;   undefined4 DAT_01dd4890
;
; Called Functions:
;   core_moon.cpp_CMoon_isAnimationFirstHalf_FUN_004f99b0
;   crt_stdlib.c_rand_FUN_005a35cc
;   crt_unknown.c_sprintf_FUN_005a28c0
;   engine_3d.c_setRenderAlpha_FUN_00406bf0
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004b30f0
;   engine_font.cpp_CBitFont_getTextHeight_FUN_004b2b30
;   engine_font.cpp_CBitFont_getTextWidth_FUN_004b2a80
;   engine_font.cpp_FUN_004b0a20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e7860
        ;   Label: core_menu.cpp_FUN_004e7860
    PUSH ESI                            ; 004e7861
    PUSH EDI                            ; 004e7862
    PUSH EBP                            ; 004e7863
    SUB ESP,0xe0                        ; 004e7864
    MOV EBP,dword ptr [ESP + 0x100]     ; 004e786a
    MOV EDX,dword ptr [ESP + 0x104]     ; 004e7871
    MOV EBX,dword ptr [0x01549aac]      ; 004e7878 | DAT_01549aac
    TEST EDX,EDX                        ; 004e787e
    JNZ 0x004e7bbf                      ; 004e7880
        ;   XREF to: 004e7bbf (CONDITIONAL_JUMP)  ; LAB_004e7bbf
    CMP dword ptr [ESP + 0x104],0x0     ; 004e7886
        ;   Label: LAB_004e7886
    JZ 0x004e7bea                       ; 004e788e
        ;   XREF to: 004e7bea (CONDITIONAL_JUMP)  ; LAB_004e7bea
    MOV EAX,[0x01549ab0]                ; 004e7894 | DAT_01549ab0
    MOV dword ptr [ESP + 0xd8],EAX      ; 004e7899
        ;   Label: LAB_004e7899
    XOR ESI,ESI                         ; 004e78a0
    MOV EDI,dword ptr [ESP + 0xf8]      ; 004e78a2
    MOV dword ptr [ESP + 0xd0],ESI      ; 004e78a9
    TEST EDI,EDI                        ; 004e78b0
    JLE 0x004e7a22                      ; 004e78b2
        ;   XREF to: 004e7a22 (CONDITIONAL_JUMP)  ; LAB_004e7a22
    MOV EAX,dword ptr [ESP + 0xf4]      ; 004e78b8
    MOV dword ptr [ESP + 0xcc],EAX      ; 004e78bf
    MOV EAX,dword ptr [ESP + 0xcc]      ; 004e78c6
        ;   Label: LAB_004e78c6
    MOV ECX,dword ptr [EAX]             ; 004e78cd
    PUSH ECX                            ; 004e78cf
    MOV EBX,dword ptr [ESP + 0xdc]      ; 004e78d0
    PUSH EBX                            ; 004e78d7
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004b2a80 ; 004e78d8
        ;   XREF to: 004b2a80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004b2a80(CBitFont * this_ptr, char * text)
    ADD ESP,0x8                         ; 004e78dd
    PUSH 0x58                           ; 004e78e0
    PUSH EBX                            ; 004e78e2
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004b30f0 ; 004e78e3
        ;   XREF to: 004b30f0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004b30f0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004e78e8
    MOV EDI,dword ptr [ESP + 0x104]     ; 004e78eb
    MOV dword ptr [ESP + 0xc8],EAX      ; 004e78f2
    TEST EDI,EDI                        ; 004e78f9
    JZ 0x004e7bf4                       ; 004e78fb
        ;   XREF to: 004e7bf4 (CONDITIONAL_JUMP)  ; LAB_004e7bf4
    MOV dword ptr [ESP + 0xdc],0xaf     ; 004e7901
    MOV EDX,dword ptr [ESP + 0xfc]      ; 004e790c
        ;   Label: LAB_004e790c
    MOV EAX,dword ptr [ESP + 0xd0]      ; 004e7913
    CMP EAX,dword ptr [EDX]             ; 004e791a
    JNZ 0x004e79a6                      ; 004e791c
        ;   XREF to: 004e79a6 (CONDITIONAL_JUMP)  ; LAB_004e79a6
    PUSH 0x1d72cb0                      ; 004e7922
    CALL core_moon.cpp_CMoon_isAnimationFirstHalf_FUN_004f99b0 ; 004e7927
        ;   XREF to: 004f99b0 (UNCONDITIONAL_CALL)  ; int core_moon.cpp_CMoon_isAnimationFirstHalf_FUN_004f99b0(CMoon * this_ptr)
    ADD ESP,0x4                         ; 004e792c
    TEST EAX,EAX                        ; 004e792f
    JZ 0x004e79a6                       ; 004e7931
        ;   XREF to: 004e79a6 (CONDITIONAL_JUMP)  ; LAB_004e79a6
    MOV EAX,dword ptr [ESP + 0xcc]      ; 004e7933
    XOR EBX,EBX                         ; 004e793a
    MOV dword ptr [ESP + 0xd4],EAX      ; 004e793c
    CALL crt_stdlib.c_rand_FUN_005a35cc ; 004e7943
        ;   XREF to: 005a35cc (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005a35cc()
        ;   Label: LAB_004e7943
    AND EAX,0x3                         ; 004e7948
    LEA EDI,[EAX + -0x2]                ; 004e794b
    CALL crt_stdlib.c_rand_FUN_005a35cc ; 004e794e
        ;   XREF to: 005a35cc (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005a35cc()
    AND EAX,0x3                         ; 004e7953
    LEA ESI,[EAX + -0x2]                ; 004e7956
    CALL crt_stdlib.c_rand_FUN_005a35cc ; 004e7959
        ;   XREF to: 005a35cc (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005a35cc()
    MOV EDX,EAX                         ; 004e795e
    MOV EAX,0xbb80                      ; 004e7960
    IMUL EDX                            ; 004e7965
    SHRD EAX,EDX,0x10                   ; 004e7967
    PUSH EAX                            ; 004e796b
    CALL engine_3d.c_setRenderAlpha_FUN_00406bf0 ; 004e796c
        ;   XREF to: 00406bf0 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00406bf0(int alpha_color_value)
    ADD ESP,0x4                         ; 004e7971
    PUSH -0x1                           ; 004e7974
    PUSH 0xab                           ; 004e7976
    ADD ESI,EBP                         ; 004e797b
    PUSH ESI                            ; 004e797d
    ADD EDI,dword ptr [ESP + 0xe8]      ; 004e797e
    MOV EAX,dword ptr [ESP + 0xe0]      ; 004e7985
    PUSH EDI                            ; 004e798c
    MOV EDI,dword ptr [EAX]             ; 004e798d
    PUSH EDI                            ; 004e798f
    MOV EAX,dword ptr [ESP + 0xec]      ; 004e7990
    PUSH EAX                            ; 004e7997
    INC EBX                             ; 004e7998
    CALL engine_font.cpp_FUN_004b0a20   ; 004e7999
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    ADD ESP,0x18                        ; 004e799e
    CMP EBX,0x5                         ; 004e79a1
    JL 0x004e7943                       ; 004e79a4
        ;   XREF to: 004e7943 (CONDITIONAL_JUMP)  ; LAB_004e7943
    PUSH 0xbb80                         ; 004e79a6
        ;   Label: LAB_004e79a6
    CALL engine_3d.c_setRenderAlpha_FUN_00406bf0 ; 004e79ab
        ;   XREF to: 00406bf0 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00406bf0(int alpha_color_value)
    ADD ESP,0x4                         ; 004e79b0
    PUSH -0x1                           ; 004e79b3
    PUSH 0x9a                           ; 004e79b5
    PUSH EBP                            ; 004e79ba
    MOV EDX,dword ptr [ESP + 0xe8]      ; 004e79bb
    MOV EAX,dword ptr [ESP + 0xd8]      ; 004e79c2
    PUSH EDX                            ; 004e79c9
    MOV ECX,dword ptr [EAX]             ; 004e79ca
    PUSH ECX                            ; 004e79cc
    MOV EBX,dword ptr [ESP + 0xec]      ; 004e79cd
    PUSH EBX                            ; 004e79d4
    CALL engine_font.cpp_FUN_004b0a20   ; 004e79d5
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    ADD ESP,0x18                        ; 004e79da
    MOV ESI,dword ptr [ESP + 0xc8]      ; 004e79dd
    MOV EDI,dword ptr [ESP + 0x104]     ; 004e79e4
    ADD EBP,ESI                         ; 004e79eb
    TEST EDI,EDI                        ; 004e79ed
    JNZ 0x004e79f3                      ; 004e79ef
        ;   XREF to: 004e79f3 (CONDITIONAL_JUMP)  ; LAB_004e79f3
    ADD EBP,ESI                         ; 004e79f1
    MOV EAX,dword ptr [ESP + 0xcc]      ; 004e79f3
        ;   Label: LAB_004e79f3
    MOV EDX,dword ptr [ESP + 0xd0]      ; 004e79fa
    MOV ECX,dword ptr [ESP + 0xf8]      ; 004e7a01
    ADD EAX,0x4                         ; 004e7a08
    INC EDX                             ; 004e7a0b
    MOV dword ptr [ESP + 0xcc],EAX      ; 004e7a0c
    MOV dword ptr [ESP + 0xd0],EDX      ; 004e7a13
    CMP EDX,ECX                         ; 004e7a1a
    JL 0x004e78c6                       ; 004e7a1c
        ;   XREF to: 004e78c6 (CONDITIONAL_JUMP)  ; LAB_004e78c6
    PUSH 0xffff                         ; 004e7a22
        ;   Label: LAB_004e7a22
    CALL engine_3d.c_setRenderAlpha_FUN_00406bf0 ; 004e7a27
        ;   XREF to: 00406bf0 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00406bf0(int alpha_color_value)
    ADD ESP,0x4                         ; 004e7a2c
    PUSH 0x3ff028f5                     ; 004e7a2f
    PUSH 0xc28f5c29                     ; 004e7a34
    PUSH 0x5c71f6                       ; 004e7a39 | = "Blair Witch Volume III: The Elly Kedw..."
    LEA EAX,[ESP + 0xc]                 ; 004e7a3e
    PUSH EAX                            ; 004e7a42
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004e7a43
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    MOV EBX,dword ptr [0x01dd4890]      ; 004e7a48 | DAT_01dd4890
    ADD ESP,0x10                        ; 004e7a4e
    TEST EBX,EBX                        ; 004e7a51
    JZ 0x004e7c69                       ; 004e7a53
        ;   XREF to: 004e7c69 (CONDITIONAL_JUMP)  ; LAB_004e7c69
    MOV EAX,ESP                         ; 004e7a59
    PUSH EAX                            ; 004e7a5b
    MOV EAX,[0x01549ab4]                ; 004e7a5c | DAT_01549ab4
    PUSH EAX                            ; 004e7a61
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004b2a80 ; 004e7a62
        ;   XREF to: 004b2a80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004b2a80(CBitFont * this_ptr, char * text)
    ADD ESP,0x8                         ; 004e7a67
    MOV EBX,EAX                         ; 004e7a6a
    MOV EAX,ESP                         ; 004e7a6c
    PUSH EAX                            ; 004e7a6e
    MOV EDX,dword ptr [0x01549ab4]      ; 004e7a6f | DAT_01549ab4
    PUSH EDX                            ; 004e7a75
    CALL engine_font.cpp_CBitFont_getTextHeight_FUN_004b2b30 ; 004e7a76
        ;   XREF to: 004b2b30 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextHeight_FUN_004b2b30(CBitFont * this_ptr, char * text_string)
    ADD ESP,0x8                         ; 004e7a7b
    PUSH 0x0                            ; 004e7a7e
    MOV EDX,0x1df                       ; 004e7a80
    PUSH 0xf8                           ; 004e7a85
    SUB EDX,EAX                         ; 004e7a8a
    MOV EAX,0x26b                       ; 004e7a8c
    PUSH EDX                            ; 004e7a91
    SUB EAX,EBX                         ; 004e7a92
    PUSH EAX                            ; 004e7a94
    LEA EAX,[ESP + 0x10]                ; 004e7a95
    PUSH EAX                            ; 004e7a99
    MOV ECX,dword ptr [0x01549ab4]      ; 004e7a9a | DAT_01549ab4
    PUSH ECX                            ; 004e7aa0
    CALL engine_font.cpp_FUN_004b0a20   ; 004e7aa1
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
        ;   Label: LAB_004e7aa1
    ADD ESP,0x18                        ; 004e7aa6
    MOV ESI,dword ptr [ESP + 0xfc]      ; 004e7aa9
    MOV ESI,dword ptr [ESI]             ; 004e7ab0
    MOV EDI,dword ptr [ESP + 0xf4]      ; 004e7ab2
    SHL ESI,0x2                         ; 004e7ab9
    ADD ESI,EDI                         ; 004e7abc
    MOV DL,0x3a                         ; 004e7abe
    MOV ESI,dword ptr [ESI]             ; 004e7ac0
    XOR EBX,EBX                         ; 004e7ac2
    MOV AL,byte ptr [ESI]               ; 004e7ac4
        ;   Label: LAB_004e7ac4
    CMP AL,DL                           ; 004e7ac6
    JZ 0x004e7adc                       ; 004e7ac8
        ;   XREF to: 004e7adc (CONDITIONAL_JUMP)  ; LAB_004e7adc
    CMP AL,0x0                          ; 004e7aca
    JZ 0x004e7ada                       ; 004e7acc
        ;   XREF to: 004e7ada (CONDITIONAL_JUMP)  ; LAB_004e7ada
    INC ESI                             ; 004e7ace
    MOV AL,byte ptr [ESI]               ; 004e7acf
    CMP AL,DL                           ; 004e7ad1
    JZ 0x004e7adc                       ; 004e7ad3
        ;   XREF to: 004e7adc (CONDITIONAL_JUMP)  ; LAB_004e7adc
    INC ESI                             ; 004e7ad5
    CMP AL,0x0                          ; 004e7ad6
    JNZ 0x004e7ac4                      ; 004e7ad8
        ;   XREF to: 004e7ac4 (CONDITIONAL_JUMP)  ; LAB_004e7ac4
    SUB ESI,ESI                         ; 004e7ada
        ;   Label: LAB_004e7ada
    TEST ESI,ESI                        ; 004e7adc
        ;   Label: LAB_004e7adc
    JZ 0x004e7ae5                       ; 004e7ade
        ;   XREF to: 004e7ae5 (CONDITIONAL_JUMP)  ; LAB_004e7ae5
    MOV EBX,0x1                         ; 004e7ae0
    PUSH 0x48                           ; 004e7ae5
        ;   Label: LAB_004e7ae5
    MOV EAX,[0x00600284]                ; 004e7ae7 | DAT_00600284
    XOR EBP,EBP                         ; 004e7aec
    PUSH EAX                            ; 004e7aee | DAT_01d70a78
    MOV EDX,dword ptr [EAX]             ; 004e7aef | DAT_01d70a78
    MOV dword ptr [0x01d737e4],EBP      ; 004e7af1 | DAT_01d737e4
    CALL dword ptr [EDX + 0x4]          ; 004e7af7
    ADD ESP,0x8                         ; 004e7afa
    TEST EAX,EAX                        ; 004e7afd
    JZ 0x004e7b1f                       ; 004e7aff
        ;   XREF to: 004e7b1f (CONDITIONAL_JUMP)  ; LAB_004e7b1f
    MOV dword ptr [0x01d737e4],0x1      ; 004e7b01 | DAT_01d737e4
    MOV EAX,dword ptr [ESP + 0xfc]      ; 004e7b0b
    MOV EDX,dword ptr [EAX]             ; 004e7b12
    DEC EDX                             ; 004e7b14
    MOV dword ptr [EAX],EDX             ; 004e7b15
    TEST EDX,EDX                        ; 004e7b17
    JL 0x004e7cb7                       ; 004e7b19
        ;   XREF to: 004e7cb7 (CONDITIONAL_JUMP)  ; LAB_004e7cb7
    PUSH 0x50                           ; 004e7b1f
        ;   Label: LAB_004e7b1f
    MOV EAX,[0x00600284]                ; 004e7b21 | DAT_00600284
    PUSH EAX                            ; 004e7b26 | DAT_01d70a78
    MOV EDX,dword ptr [EAX]             ; 004e7b27 | DAT_01d70a78
    CALL dword ptr [EDX + 0x4]          ; 004e7b29
    ADD ESP,0x8                         ; 004e7b2c
    TEST EAX,EAX                        ; 004e7b2f
    JZ 0x004e7b5c                       ; 004e7b31
        ;   XREF to: 004e7b5c (CONDITIONAL_JUMP)  ; LAB_004e7b5c
    MOV EAX,dword ptr [ESP + 0xfc]      ; 004e7b33
    MOV ESI,0x1                         ; 004e7b3a
    MOV EDI,dword ptr [EAX]             ; 004e7b3f
    MOV EBP,dword ptr [ESP + 0xf8]      ; 004e7b41
    ADD EDI,ESI                         ; 004e7b48
    MOV dword ptr [0x01d737e4],ESI      ; 004e7b4a | DAT_01d737e4
    MOV dword ptr [EAX],EDI             ; 004e7b50
    CMP EDI,EBP                         ; 004e7b52
    JL 0x004e7b5c                       ; 004e7b54
        ;   XREF to: 004e7b5c (CONDITIONAL_JUMP)  ; LAB_004e7b5c
    MOV dword ptr [EAX],0x0             ; 004e7b56
    TEST EBX,EBX                        ; 004e7b5c
        ;   Label: LAB_004e7b5c
    JZ 0x004e7b93                       ; 004e7b5e
        ;   XREF to: 004e7b93 (CONDITIONAL_JUMP)  ; LAB_004e7b93
    XOR EAX,EAX                         ; 004e7b60
    PUSH 0x4b                           ; 004e7b62
    MOV [0x01d737d4],EAX                ; 004e7b64 | DAT_01d737d4
    MOV EAX,[0x00600284]                ; 004e7b69 | DAT_00600284
    PUSH EAX                            ; 004e7b6e | DAT_01d70a78
    MOV EDX,dword ptr [EAX]             ; 004e7b6f | DAT_01d70a78
    CALL dword ptr [EDX + 0x4]          ; 004e7b71
    ADD ESP,0x8                         ; 004e7b74
    TEST EAX,EAX                        ; 004e7b77
    JNZ 0x004e7ccd                      ; 004e7b79
        ;   XREF to: 004e7ccd (CONDITIONAL_JUMP)  ; LAB_004e7ccd
    PUSH 0x4d                           ; 004e7b7f
    MOV EAX,[0x00600284]                ; 004e7b81 | DAT_00600284
    PUSH EAX                            ; 004e7b86 | DAT_01d70a78
    MOV EDX,dword ptr [EAX]             ; 004e7b87 | DAT_01d70a78
    CALL dword ptr [EDX + 0x4]          ; 004e7b89
    ADD ESP,0x8                         ; 004e7b8c
    TEST EAX,EAX                        ; 004e7b8f
    JNZ 0x004e7bab                      ; 004e7b91
        ;   XREF to: 004e7bab (CONDITIONAL_JUMP)  ; LAB_004e7bab
    PUSH 0x1c                           ; 004e7b93
        ;   Label: LAB_004e7b93
    MOV EAX,[0x00600284]                ; 004e7b95 | DAT_00600284
    PUSH EAX                            ; 004e7b9a | DAT_01d70a78
    MOV EDX,dword ptr [EAX]             ; 004e7b9b | DAT_01d70a78
    CALL dword ptr [EDX + 0x4]          ; 004e7b9d
    ADD ESP,0x8                         ; 004e7ba0
    TEST EAX,EAX                        ; 004e7ba3
    JZ 0x004e7cec                       ; 004e7ba5
        ;   XREF to: 004e7cec (CONDITIONAL_JUMP)  ; LAB_004e7cec
    MOV EAX,dword ptr [ESP + 0xfc]      ; 004e7bab
        ;   Label: LAB_004e7bab
    MOV EAX,dword ptr [EAX]             ; 004e7bb2
    ADD ESP,0xe0                        ; 004e7bb4
    POP EBP                             ; 004e7bba
    POP EDI                             ; 004e7bbb
    POP ESI                             ; 004e7bbc
    POP EBX                             ; 004e7bbd
    RET                                 ; 004e7bbe
    PUSH 0x0                            ; 004e7bbf
        ;   Label: LAB_004e7bbf
    PUSH 0x9a                           ; 004e7bc1
    PUSH EBP                            ; 004e7bc6
    PUSH 0xaf                           ; 004e7bc7
    PUSH EDX                            ; 004e7bcc
    PUSH EBX                            ; 004e7bcd
    CALL engine_font.cpp_FUN_004b0a20   ; 004e7bce
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    ADD ESP,0x18                        ; 004e7bd3
    PUSH 0x58                           ; 004e7bd6
    PUSH EBX                            ; 004e7bd8
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004b30f0 ; 004e7bd9
        ;   XREF to: 004b30f0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004b30f0(CBitFont * this_ptr, int char_code)
    ADD EAX,EAX                         ; 004e7bde
    ADD ESP,0x8                         ; 004e7be0
    ADD EBP,EAX                         ; 004e7be3
    JMP 0x004e7886                      ; 004e7be5
        ;   XREF to: 004e7886 (UNCONDITIONAL_JUMP)  ; LAB_004e7886
    MOV EAX,[0x01549aac]                ; 004e7bea | DAT_01549aac
        ;   Label: LAB_004e7bea
    JMP 0x004e7899                      ; 004e7bef
        ;   XREF to: 004e7899 (UNCONDITIONAL_JUMP)  ; LAB_004e7899
    MOV EAX,dword ptr [ESP + 0xd0]      ; 004e7bf4
        ;   Label: LAB_004e7bf4
    TEST EAX,EAX                        ; 004e7bfb
    JNZ 0x004e7c15                      ; 004e7bfd
        ;   XREF to: 004e7c15 (CONDITIONAL_JUMP)  ; LAB_004e7c15
    MOV EAX,0x11c                       ; 004e7bff
    MOV EBP,0xea                        ; 004e7c04
    MOV dword ptr [ESP + 0xdc],EAX      ; 004e7c09
    JMP 0x004e790c                      ; 004e7c10
        ;   XREF to: 004e790c (UNCONDITIONAL_JUMP)  ; LAB_004e790c
    CMP EAX,0x1                         ; 004e7c15
        ;   Label: LAB_004e7c15
    JNZ 0x004e7c2f                      ; 004e7c18
        ;   XREF to: 004e7c2f (CONDITIONAL_JUMP)  ; LAB_004e7c2f
    MOV dword ptr [ESP + 0xdc],0x10d    ; 004e7c1a
    MOV EBP,0x112                       ; 004e7c25
    JMP 0x004e790c                      ; 004e7c2a
        ;   XREF to: 004e790c (UNCONDITIONAL_JUMP)  ; LAB_004e790c
    CMP EAX,0x2                         ; 004e7c2f
        ;   Label: LAB_004e7c2f
    JNZ 0x004e7c4a                      ; 004e7c32
        ;   XREF to: 004e7c4a (CONDITIONAL_JUMP)  ; LAB_004e7c4a
    MOV EDI,0x122                       ; 004e7c34
    MOV EBP,0x13a                       ; 004e7c39
    MOV dword ptr [ESP + 0xdc],EDI      ; 004e7c3e
    JMP 0x004e790c                      ; 004e7c45
        ;   XREF to: 004e790c (UNCONDITIONAL_JUMP)  ; LAB_004e790c
    CMP EAX,0x3                         ; 004e7c4a
        ;   Label: LAB_004e7c4a
    JNZ 0x004e790c                      ; 004e7c4d
        ;   XREF to: 004e790c (CONDITIONAL_JUMP)  ; LAB_004e790c
    MOV ESI,0x124                       ; 004e7c53
    MOV EBP,0x162                       ; 004e7c58
    MOV dword ptr [ESP + 0xdc],ESI      ; 004e7c5d
    JMP 0x004e790c                      ; 004e7c64
        ;   XREF to: 004e790c (UNCONDITIONAL_JUMP)  ; LAB_004e790c
    MOV EAX,ESP                         ; 004e7c69
        ;   Label: LAB_004e7c69
    PUSH EAX                            ; 004e7c6b
    MOV ESI,dword ptr [0x01549ab4]      ; 004e7c6c | DAT_01549ab4
    PUSH ESI                            ; 004e7c72
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004b2a80 ; 004e7c73
        ;   XREF to: 004b2a80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004b2a80(CBitFont * this_ptr, char * text)
    ADD ESP,0x8                         ; 004e7c78
    MOV EBX,EAX                         ; 004e7c7b
    MOV EAX,ESP                         ; 004e7c7d
    PUSH EAX                            ; 004e7c7f
    MOV EDI,dword ptr [0x01549ab4]      ; 004e7c80 | DAT_01549ab4
    PUSH EDI                            ; 004e7c86
    CALL engine_font.cpp_CBitFont_getTextHeight_FUN_004b2b30 ; 004e7c87
        ;   XREF to: 004b2b30 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextHeight_FUN_004b2b30(CBitFont * this_ptr, char * text_string)
    ADD ESP,0x8                         ; 004e7c8c
    PUSH 0x0                            ; 004e7c8f
    MOV EDX,0x1df                       ; 004e7c91
    PUSH 0xf8                           ; 004e7c96
    SUB EDX,EAX                         ; 004e7c9b
    MOV EAX,0x26b                       ; 004e7c9d
    PUSH EDX                            ; 004e7ca2
    SUB EAX,EBX                         ; 004e7ca3
    PUSH EAX                            ; 004e7ca5
    LEA EAX,[ESP + 0x10]                ; 004e7ca6
    PUSH EAX                            ; 004e7caa
    MOV EBP,dword ptr [0x01549ab4]      ; 004e7cab | DAT_01549ab4
    PUSH EBP                            ; 004e7cb1
    JMP 0x004e7aa1                      ; 004e7cb2
        ;   XREF to: 004e7aa1 (UNCONDITIONAL_JUMP)  ; LAB_004e7aa1
    MOV EAX,dword ptr [ESP + 0xf8]      ; 004e7cb7
        ;   Label: LAB_004e7cb7
    MOV EDX,dword ptr [ESP + 0xfc]      ; 004e7cbe
    DEC EAX                             ; 004e7cc5
    MOV dword ptr [EDX],EAX             ; 004e7cc6
    JMP 0x004e7b1f                      ; 004e7cc8
        ;   XREF to: 004e7b1f (UNCONDITIONAL_JUMP)  ; LAB_004e7b1f
    MOV EDX,0x1                         ; 004e7ccd
        ;   Label: LAB_004e7ccd
    MOV EAX,dword ptr [ESP + 0xfc]      ; 004e7cd2
    MOV dword ptr [0x01d737d4],EDX      ; 004e7cd9 | DAT_01d737d4
    MOV EAX,dword ptr [EAX]             ; 004e7cdf
    ADD ESP,0xe0                        ; 004e7ce1
    POP EBP                             ; 004e7ce7
    POP EDI                             ; 004e7ce8
    POP ESI                             ; 004e7ce9
    POP EBX                             ; 004e7cea
    RET                                 ; 004e7ceb
    MOV EAX,0xffffffff                  ; 004e7cec
        ;   Label: LAB_004e7cec
    ADD ESP,0xe0                        ; 004e7cf1
    POP EBP                             ; 004e7cf7
    POP EDI                             ; 004e7cf8
    POP ESI                             ; 004e7cf9
    POP EBX                             ; 004e7cfa
    RET                                 ; 004e7cfb

