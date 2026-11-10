; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_menu_cpp_renderMenuAndGetChoice_FUN_00509e20(char **menu_text_array,int menu_count,int *selected_index_ptr,int y_position,char *title)
;
; Parameters:
; char * *         Stack[0x4]:4   menu_text_array
; int              Stack[0x8]:4   menu_count
; int *            Stack[0xc]:4   selected_index_ptr
; int              Stack[0x10]:4   y_position
; char *           Stack[0x14]:4   title
; Local Variables:
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[5]:
;   core_menu.cpp_FUN_0050b470 at 0050b787
;   core_menu.cpp_FUN_0050ba70 at 0050c2eb
;   core_menu.cpp_FUN_0050c990 at 0050cb23
;   core_menu.cpp_configureGraphicsOptions_FUN_0050aa90 at 0050ae98
;   core_menu.cpp_showMainGameMenu_FUN_0050cc90 at 0050cec4
;
; Referenced Globals:
;   TerminatedCString s_Blair_Witch_Volume_I_Rus_005e7a0a
;   TerminatedCString s_Blair_Witch_Volume_I_Rus_005e7a5c
;   undefined4 DAT_005e7aac
;   undefined4 DAT_0061f2a4
;   undefined4 DAT_0152d244
;   undefined4 DAT_0152d248
;   undefined4 DAT_01d1bca0
;   undefined4 DAT_01d1ee8c
;   undefined4 DAT_01d1ee9c
;   undefined4 DAT_01d7f1b8
;
; Called Functions:
;   core_moon.cpp_CMoon_isAnimationFirstHalf_FUN_005220b0
;   crt_stdlib.c_rand_FUN_005c084c
;   engine_3d.c_setRenderAlpha_FUN_00406bd0
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004c4510
;   engine_font.cpp_CBitFont_getTextHeight_FUN_004c3f50
;   engine_font.cpp_CBitFont_getTextWidth_FUN_004c3ea0
;   engine_font.cpp_FUN_004c1dd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00509e20
        ;   Label: core_menu.cpp_renderMenuAndGetChoice_FUN_00509e20
    PUSH ESI                            ; 00509e21
    PUSH EDI                            ; 00509e22
    PUSH EBP                            ; 00509e23
    SUB ESP,0x1c                        ; 00509e24
    MOV EBP,dword ptr [ESP + 0x3c]      ; 00509e27
    MOV EAX,[0x0152d244]                ; 00509e2b | DAT_0152d244
    MOV EDX,dword ptr [ESP + 0x40]      ; 00509e30
    MOV dword ptr [ESP + 0x18],EAX      ; 00509e34
    TEST EDX,EDX                        ; 00509e38
    JNZ 0x0050a12e                      ; 00509e3a
        ;   XREF to: 0050a12e (CONDITIONAL_JUMP)  ; LAB_0050a12e
    XOR EDI,EDI                         ; 00509e40
        ;   Label: LAB_00509e40
    MOV EAX,dword ptr [ESP + 0x34]      ; 00509e42
    MOV dword ptr [ESP + 0xc],EDI       ; 00509e46
    TEST EAX,EAX                        ; 00509e4a
    JLE 0x00509f7e                      ; 00509e4c
        ;   XREF to: 00509f7e (CONDITIONAL_JUMP)  ; LAB_00509f7e
    MOV EAX,dword ptr [ESP + 0x30]      ; 00509e52
    MOV dword ptr [ESP + 0x10],EAX      ; 00509e56
    MOV EAX,dword ptr [ESP + 0x10]      ; 00509e5a
        ;   Label: LAB_00509e5a
    MOV ECX,dword ptr [EAX]             ; 00509e5e
    PUSH ECX                            ; 00509e60
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00509e61
    PUSH EBX                            ; 00509e65
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004c3ea0 ; 00509e66
        ;   XREF to: 004c3ea0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004c3ea0(CBitFont * this_ptr, char * text)
    ADD ESP,0x8                         ; 00509e6b
    PUSH 0x58                           ; 00509e6e
    PUSH EBX                            ; 00509e70
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004c4510 ; 00509e71
        ;   XREF to: 004c4510 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004c4510(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 00509e76
    MOV EDI,0x190                       ; 00509e79
    MOV EDX,dword ptr [ESP + 0x38]      ; 00509e7e
    MOV dword ptr [ESP + 0x4],EAX       ; 00509e82
    MOV EAX,0xf8                        ; 00509e86
    MOV ECX,dword ptr [EDX]             ; 00509e8b
    MOV dword ptr [ESP + 0x8],EAX       ; 00509e8d
    MOV EAX,dword ptr [ESP + 0xc]       ; 00509e91
    MOV dword ptr [ESP],EDI             ; 00509e95
    CMP EAX,ECX                         ; 00509e98
    JNZ 0x00509f20                      ; 00509e9a
        ;   XREF to: 00509f20 (CONDITIONAL_JUMP)  ; LAB_00509f20
    PUSH 0x1d1e380                      ; 00509ea0
    MOV EBX,0x7                         ; 00509ea5
    CALL core_moon.cpp_CMoon_isAnimationFirstHalf_FUN_005220b0 ; 00509eaa
        ;   XREF to: 005220b0 (UNCONDITIONAL_CALL)  ; int core_moon.cpp_CMoon_isAnimationFirstHalf_FUN_005220b0(CMoon * this_ptr)
    MOV dword ptr [ESP + 0xc],EBX       ; 00509eaf
    ADD ESP,0x4                         ; 00509eb3
    TEST EAX,EAX                        ; 00509eb6
    JZ 0x0050a15a                       ; 00509eb8
        ;   XREF to: 0050a15a (CONDITIONAL_JUMP)  ; LAB_0050a15a
    MOV EAX,dword ptr [ESP + 0x10]      ; 00509ebe
    XOR EBX,EBX                         ; 00509ec2
    MOV dword ptr [ESP + 0x14],EAX      ; 00509ec4
    CALL crt_stdlib.c_rand_FUN_005c084c ; 00509ec8
        ;   XREF to: 005c084c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005c084c()
        ;   Label: LAB_00509ec8
    MOV EDI,EAX                         ; 00509ecd
    CALL crt_stdlib.c_rand_FUN_005c084c ; 00509ecf
        ;   XREF to: 005c084c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005c084c()
    AND EAX,0x3                         ; 00509ed4
    LEA ESI,[EAX + -0x2]                ; 00509ed7
    CALL crt_stdlib.c_rand_FUN_005c084c ; 00509eda
        ;   XREF to: 005c084c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005c084c()
    MOV EDX,EAX                         ; 00509edf
    MOV EAX,0xbb80                      ; 00509ee1
    IMUL EDX                            ; 00509ee6
    SHRD EAX,EDX,0x10                   ; 00509ee8
    PUSH EAX                            ; 00509eec
    CALL engine_3d.c_setRenderAlpha_FUN_00406bd0 ; 00509eed
        ;   XREF to: 00406bd0 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00406bd0(int alpha_color_value)
    ADD ESP,0x4                         ; 00509ef2
    PUSH -0x1                           ; 00509ef5
    PUSH 0x7                            ; 00509ef7
    ADD ESI,EBP                         ; 00509ef9
    AND EDI,0x3                         ; 00509efb
    PUSH ESI                            ; 00509efe
    ADD EDI,0x18e                       ; 00509eff
    MOV EAX,dword ptr [ESP + 0x20]      ; 00509f05
    PUSH EDI                            ; 00509f09
    MOV EDI,dword ptr [EAX]             ; 00509f0a
    PUSH EDI                            ; 00509f0c
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00509f0d
    PUSH EAX                            ; 00509f11
    INC EBX                             ; 00509f12
    CALL engine_font.cpp_FUN_004c1dd0   ; 00509f13
        ;   XREF to: 004c1dd0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004c1dd0()
    ADD ESP,0x18                        ; 00509f18
    CMP EBX,0x5                         ; 00509f1b
    JL 0x00509ec8                       ; 00509f1e
        ;   XREF to: 00509ec8 (CONDITIONAL_JUMP)  ; LAB_00509ec8
    PUSH 0xbb80                         ; 00509f20
        ;   Label: LAB_00509f20
    CALL engine_3d.c_setRenderAlpha_FUN_00406bd0 ; 00509f25
        ;   XREF to: 00406bd0 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00406bd0(int alpha_color_value)
    ADD ESP,0x4                         ; 00509f2a
    PUSH -0x1                           ; 00509f2d
    MOV EDX,dword ptr [ESP + 0xc]       ; 00509f2f
    PUSH EDX                            ; 00509f33
    PUSH EBP                            ; 00509f34
    MOV ECX,dword ptr [ESP + 0xc]       ; 00509f35
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00509f39
    PUSH ECX                            ; 00509f3d
    MOV EBX,dword ptr [EAX]             ; 00509f3e
    PUSH EBX                            ; 00509f40
    MOV ESI,dword ptr [ESP + 0x2c]      ; 00509f41
    PUSH ESI                            ; 00509f45
    CALL engine_font.cpp_FUN_004c1dd0   ; 00509f46
        ;   XREF to: 004c1dd0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004c1dd0()
    ADD ESP,0x18                        ; 00509f4b
    MOV EDI,dword ptr [ESP + 0x4]       ; 00509f4e
    MOV EAX,dword ptr [ESP + 0x40]      ; 00509f52
    ADD EBP,EDI                         ; 00509f56
    TEST EAX,EAX                        ; 00509f58
    JNZ 0x00509f5e                      ; 00509f5a
        ;   XREF to: 00509f5e (CONDITIONAL_JUMP)  ; LAB_00509f5e
    ADD EBP,EDI                         ; 00509f5c
    MOV EDX,dword ptr [ESP + 0x10]      ; 00509f5e
        ;   Label: LAB_00509f5e
    MOV ECX,dword ptr [ESP + 0xc]       ; 00509f62
    MOV EBX,dword ptr [ESP + 0x34]      ; 00509f66
    ADD EDX,0x4                         ; 00509f6a
    INC ECX                             ; 00509f6d
    MOV dword ptr [ESP + 0x10],EDX      ; 00509f6e
    MOV dword ptr [ESP + 0xc],ECX       ; 00509f72
    CMP ECX,EBX                         ; 00509f76
    JL 0x00509e5a                       ; 00509f78
        ;   XREF to: 00509e5a (CONDITIONAL_JUMP)  ; LAB_00509e5a
    PUSH 0xffff                         ; 00509f7e
        ;   Label: LAB_00509f7e
    CALL engine_3d.c_setRenderAlpha_FUN_00406bd0 ; 00509f83
        ;   XREF to: 00406bd0 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00406bd0(int alpha_color_value)
    MOV ESI,dword ptr [0x01d7f1b8]      ; 00509f88 | DAT_01d7f1b8
    ADD ESP,0x4                         ; 00509f8e
    TEST ESI,ESI                        ; 00509f91
    JZ 0x0050a167                       ; 00509f93
        ;   XREF to: 0050a167 (CONDITIONAL_JUMP)  ; LAB_0050a167
    PUSH 0x5e7a0a                       ; 00509f99 | = "Blair Witch Volume I: Rustin Parr (c)..."
    MOV EDX,dword ptr [0x0152d248]      ; 00509f9e | DAT_0152d248
    PUSH EDX                            ; 00509fa4
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004c3ea0 ; 00509fa5
        ;   XREF to: 004c3ea0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004c3ea0(CBitFont * this_ptr, char * text)
    ADD ESP,0x8                         ; 00509faa
    PUSH 0x5e7a0a                       ; 00509fad | = "Blair Witch Volume I: Rustin Parr (c)..."
    MOV ECX,dword ptr [0x0152d248]      ; 00509fb2 | DAT_0152d248
    PUSH ECX                            ; 00509fb8
    MOV EBX,EAX                         ; 00509fb9
    CALL engine_font.cpp_CBitFont_getTextHeight_FUN_004c3f50 ; 00509fbb
        ;   XREF to: 004c3f50 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextHeight_FUN_004c3f50(CBitFont * this_ptr, char * text_string)
    ADD ESP,0x8                         ; 00509fc0
    PUSH 0x0                            ; 00509fc3
    MOV EDX,0x1df                       ; 00509fc5
    PUSH 0xf8                           ; 00509fca
    SUB EDX,EAX                         ; 00509fcf
    MOV EAX,0x26b                       ; 00509fd1
    PUSH EDX                            ; 00509fd6
    SUB EAX,EBX                         ; 00509fd7
    PUSH EAX                            ; 00509fd9
    PUSH 0x5e7a0a                       ; 00509fda | = "Blair Witch Volume I: Rustin Parr (c)..."
    MOV EBX,dword ptr [0x0152d248]      ; 00509fdf | DAT_0152d248
    PUSH EBX                            ; 00509fe5
    CALL engine_font.cpp_FUN_004c1dd0   ; 00509fe6
        ;   XREF to: 004c1dd0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004c1dd0()
        ;   Label: LAB_00509fe6
    ADD ESP,0x18                        ; 00509feb
    PUSH 0x8000                         ; 00509fee
    CALL engine_3d.c_setRenderAlpha_FUN_00406bd0 ; 00509ff3
        ;   XREF to: 00406bd0 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00406bd0(int alpha_color_value)
    ADD ESP,0x4                         ; 00509ff8
    PUSH 0x0                            ; 00509ffb
    PUSH 0xf8                           ; 00509ffd
    PUSH 0x18f                          ; 0050a002
    PUSH 0x206                          ; 0050a007
    PUSH 0x5e7aac                       ; 0050a00c | DAT_005e7aac
    MOV ESI,dword ptr [0x0152d248]      ; 0050a011 | DAT_0152d248
    PUSH ESI                            ; 0050a017
    CALL engine_font.cpp_FUN_004c1dd0   ; 0050a018
        ;   XREF to: 004c1dd0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004c1dd0()
    ADD ESP,0x18                        ; 0050a01d
    PUSH 0xffff                         ; 0050a020
    CALL engine_3d.c_setRenderAlpha_FUN_00406bd0 ; 0050a025
        ;   XREF to: 00406bd0 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00406bd0(int alpha_color_value)
    ADD ESP,0x4                         ; 0050a02a
    MOV EAX,dword ptr [ESP + 0x38]      ; 0050a02d
    MOV EAX,dword ptr [EAX]             ; 0050a031
    MOV EDI,dword ptr [ESP + 0x30]      ; 0050a033
    SHL EAX,0x2                         ; 0050a037
    ADD EAX,EDI                         ; 0050a03a
    MOV DL,0x3a                         ; 0050a03c
    MOV ESI,dword ptr [EAX]             ; 0050a03e
    XOR EBX,EBX                         ; 0050a040
    MOV AL,byte ptr [ESI]               ; 0050a042
        ;   Label: LAB_0050a042
    CMP AL,DL                           ; 0050a044
    JZ 0x0050a05a                       ; 0050a046
        ;   XREF to: 0050a05a (CONDITIONAL_JUMP)  ; LAB_0050a05a
    CMP AL,0x0                          ; 0050a048
    JZ 0x0050a058                       ; 0050a04a
        ;   XREF to: 0050a058 (CONDITIONAL_JUMP)  ; LAB_0050a058
    INC ESI                             ; 0050a04c
    MOV AL,byte ptr [ESI]               ; 0050a04d
    CMP AL,DL                           ; 0050a04f
    JZ 0x0050a05a                       ; 0050a051
        ;   XREF to: 0050a05a (CONDITIONAL_JUMP)  ; LAB_0050a05a
    INC ESI                             ; 0050a053
    CMP AL,0x0                          ; 0050a054
    JNZ 0x0050a042                      ; 0050a056
        ;   XREF to: 0050a042 (CONDITIONAL_JUMP)  ; LAB_0050a042
    SUB ESI,ESI                         ; 0050a058
        ;   Label: LAB_0050a058
    TEST ESI,ESI                        ; 0050a05a
        ;   Label: LAB_0050a05a
    JZ 0x0050a063                       ; 0050a05c
        ;   XREF to: 0050a063 (CONDITIONAL_JUMP)  ; LAB_0050a063
    MOV EBX,0x1                         ; 0050a05e
    PUSH 0x48                           ; 0050a063
        ;   Label: LAB_0050a063
    MOV EAX,[0x0061f2a4]                ; 0050a065 | DAT_0061f2a4
    XOR EBP,EBP                         ; 0050a06a
    PUSH EAX                            ; 0050a06c | DAT_01d1bca0
    MOV EDX,dword ptr [EAX]             ; 0050a06d | DAT_01d1bca0
    MOV dword ptr [0x01d1ee9c],EBP      ; 0050a06f | DAT_01d1ee9c
    CALL dword ptr [EDX + 0x4]          ; 0050a075
    ADD ESP,0x8                         ; 0050a078
    TEST EAX,EAX                        ; 0050a07b
    JZ 0x0050a09a                       ; 0050a07d
        ;   XREF to: 0050a09a (CONDITIONAL_JUMP)  ; LAB_0050a09a
    MOV dword ptr [0x01d1ee9c],0x1      ; 0050a07f | DAT_01d1ee9c
    MOV EAX,dword ptr [ESP + 0x38]      ; 0050a089
    MOV EDX,dword ptr [EAX]             ; 0050a08d
    DEC EDX                             ; 0050a08f
    MOV dword ptr [EAX],EDX             ; 0050a090
    TEST EDX,EDX                        ; 0050a092
    JL 0x0050a1b7                       ; 0050a094
        ;   XREF to: 0050a1b7 (CONDITIONAL_JUMP)  ; LAB_0050a1b7
    PUSH 0x50                           ; 0050a09a
        ;   Label: LAB_0050a09a
    MOV EAX,[0x0061f2a4]                ; 0050a09c | DAT_0061f2a4
    PUSH EAX                            ; 0050a0a1 | DAT_01d1bca0
    MOV EDX,dword ptr [EAX]             ; 0050a0a2 | DAT_01d1bca0
    CALL dword ptr [EDX + 0x4]          ; 0050a0a4
    ADD ESP,0x8                         ; 0050a0a7
    TEST EAX,EAX                        ; 0050a0aa
    JZ 0x0050a0d1                       ; 0050a0ac
        ;   XREF to: 0050a0d1 (CONDITIONAL_JUMP)  ; LAB_0050a0d1
    MOV EAX,dword ptr [ESP + 0x38]      ; 0050a0ae
    MOV ESI,0x1                         ; 0050a0b2
    MOV EDI,dword ptr [EAX]             ; 0050a0b7
    MOV EBP,dword ptr [ESP + 0x34]      ; 0050a0b9
    ADD EDI,ESI                         ; 0050a0bd
    MOV dword ptr [0x01d1ee9c],ESI      ; 0050a0bf | DAT_01d1ee9c
    MOV dword ptr [EAX],EDI             ; 0050a0c5
    CMP EDI,EBP                         ; 0050a0c7
    JL 0x0050a0d1                       ; 0050a0c9
        ;   XREF to: 0050a0d1 (CONDITIONAL_JUMP)  ; LAB_0050a0d1
    MOV dword ptr [EAX],0x0             ; 0050a0cb
    TEST EBX,EBX                        ; 0050a0d1
        ;   Label: LAB_0050a0d1
    JZ 0x0050a108                       ; 0050a0d3
        ;   XREF to: 0050a108 (CONDITIONAL_JUMP)  ; LAB_0050a108
    XOR EAX,EAX                         ; 0050a0d5
    PUSH 0x4b                           ; 0050a0d7
    MOV [0x01d1ee8c],EAX                ; 0050a0d9 | DAT_01d1ee8c
    MOV EAX,[0x0061f2a4]                ; 0050a0de | DAT_0061f2a4
    PUSH EAX                            ; 0050a0e3 | DAT_01d1bca0
    MOV EDX,dword ptr [EAX]             ; 0050a0e4 | DAT_01d1bca0
    CALL dword ptr [EDX + 0x4]          ; 0050a0e6
    ADD ESP,0x8                         ; 0050a0e9
    TEST EAX,EAX                        ; 0050a0ec
    JNZ 0x0050a1c7                      ; 0050a0ee
        ;   XREF to: 0050a1c7 (CONDITIONAL_JUMP)  ; LAB_0050a1c7
    PUSH 0x4d                           ; 0050a0f4
    MOV EAX,[0x0061f2a4]                ; 0050a0f6 | DAT_0061f2a4
    PUSH EAX                            ; 0050a0fb | DAT_01d1bca0
    MOV EDX,dword ptr [EAX]             ; 0050a0fc | DAT_01d1bca0
    CALL dword ptr [EDX + 0x4]          ; 0050a0fe
    ADD ESP,0x8                         ; 0050a101
    TEST EAX,EAX                        ; 0050a104
    JNZ 0x0050a120                      ; 0050a106
        ;   XREF to: 0050a120 (CONDITIONAL_JUMP)  ; LAB_0050a120
    PUSH 0x1c                           ; 0050a108
        ;   Label: LAB_0050a108
    MOV EAX,[0x0061f2a4]                ; 0050a10a | DAT_0061f2a4
    PUSH EAX                            ; 0050a10f | DAT_01d1bca0
    MOV EDX,dword ptr [EAX]             ; 0050a110 | DAT_01d1bca0
    CALL dword ptr [EDX + 0x4]          ; 0050a112
    ADD ESP,0x8                         ; 0050a115
    TEST EAX,EAX                        ; 0050a118
    JZ 0x0050a1e0                       ; 0050a11a
        ;   XREF to: 0050a1e0 (CONDITIONAL_JUMP)  ; LAB_0050a1e0
    MOV EAX,dword ptr [ESP + 0x38]      ; 0050a120
        ;   Label: LAB_0050a120
    MOV EAX,dword ptr [EAX]             ; 0050a124
    ADD ESP,0x1c                        ; 0050a126
    POP EBP                             ; 0050a129
    POP EDI                             ; 0050a12a
    POP ESI                             ; 0050a12b
    POP EBX                             ; 0050a12c
    RET                                 ; 0050a12d
    PUSH 0x0                            ; 0050a12e
        ;   Label: LAB_0050a12e
    PUSH 0x7                            ; 0050a130
    PUSH EBP                            ; 0050a132
    PUSH 0x190                          ; 0050a133
    PUSH EDX                            ; 0050a138
    PUSH EAX                            ; 0050a139
    MOV EBX,EAX                         ; 0050a13a
    CALL engine_font.cpp_FUN_004c1dd0   ; 0050a13c
        ;   XREF to: 004c1dd0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004c1dd0()
    ADD ESP,0x18                        ; 0050a141
    PUSH 0x58                           ; 0050a144
    MOV ESI,EBX                         ; 0050a146
    PUSH ESI                            ; 0050a148
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004c4510 ; 0050a149
        ;   XREF to: 004c4510 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004c4510(CBitFont * this_ptr, int char_code)
    ADD EAX,EAX                         ; 0050a14e
    ADD ESP,0x8                         ; 0050a150
    ADD EBP,EAX                         ; 0050a153
    JMP 0x00509e40                      ; 0050a155
        ;   XREF to: 00509e40 (UNCONDITIONAL_JUMP)  ; LAB_00509e40
    MOV dword ptr [ESP + 0x8],0xff      ; 0050a15a
        ;   Label: LAB_0050a15a
    JMP 0x00509f20                      ; 0050a162
        ;   XREF to: 00509f20 (UNCONDITIONAL_JUMP)  ; LAB_00509f20
    PUSH 0x5e7a5c                       ; 0050a167 | = "Blair Witch Volume I: Rustin Parr  20..."
        ;   Label: LAB_0050a167
    MOV EDI,dword ptr [0x0152d248]      ; 0050a16c | DAT_0152d248
    PUSH EDI                            ; 0050a172
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004c3ea0 ; 0050a173
        ;   XREF to: 004c3ea0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_004c3ea0(CBitFont * this_ptr, char * text)
    ADD ESP,0x8                         ; 0050a178
    PUSH 0x5e7a5c                       ; 0050a17b | = "Blair Witch Volume I: Rustin Parr  20..."
    MOV EBP,dword ptr [0x0152d248]      ; 0050a180 | DAT_0152d248
    PUSH EBP                            ; 0050a186
    MOV EBX,EAX                         ; 0050a187
    CALL engine_font.cpp_CBitFont_getTextHeight_FUN_004c3f50 ; 0050a189
        ;   XREF to: 004c3f50 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextHeight_FUN_004c3f50(CBitFont * this_ptr, char * text_string)
    ADD ESP,0x8                         ; 0050a18e
    PUSH ESI                            ; 0050a191
    MOV EDX,0x1df                       ; 0050a192
    PUSH 0xf8                           ; 0050a197
    SUB EDX,EAX                         ; 0050a19c
    MOV EAX,0x26b                       ; 0050a19e
    PUSH EDX                            ; 0050a1a3
    SUB EAX,EBX                         ; 0050a1a4
    PUSH EAX                            ; 0050a1a6
    PUSH 0x5e7a5c                       ; 0050a1a7 | = "Blair Witch Volume I: Rustin Parr  20..."
    MOV EAX,[0x0152d248]                ; 0050a1ac | DAT_0152d248
    PUSH EAX                            ; 0050a1b1
    JMP 0x00509fe6                      ; 0050a1b2
        ;   XREF to: 00509fe6 (UNCONDITIONAL_JUMP)  ; LAB_00509fe6
    MOV EAX,dword ptr [ESP + 0x34]      ; 0050a1b7
        ;   Label: LAB_0050a1b7
    MOV EDX,dword ptr [ESP + 0x38]      ; 0050a1bb
    DEC EAX                             ; 0050a1bf
    MOV dword ptr [EDX],EAX             ; 0050a1c0
    JMP 0x0050a09a                      ; 0050a1c2
        ;   XREF to: 0050a09a (UNCONDITIONAL_JUMP)  ; LAB_0050a09a
    MOV EDX,0x1                         ; 0050a1c7
        ;   Label: LAB_0050a1c7
    MOV EAX,dword ptr [ESP + 0x38]      ; 0050a1cc
    MOV dword ptr [0x01d1ee8c],EDX      ; 0050a1d0 | DAT_01d1ee8c
    MOV EAX,dword ptr [EAX]             ; 0050a1d6
    ADD ESP,0x1c                        ; 0050a1d8
    POP EBP                             ; 0050a1db
    POP EDI                             ; 0050a1dc
    POP ESI                             ; 0050a1dd
    POP EBX                             ; 0050a1de
    RET                                 ; 0050a1df
    MOV EAX,0xffffffff                  ; 0050a1e0
        ;   Label: LAB_0050a1e0
    ADD ESP,0x1c                        ; 0050a1e5
    POP EBP                             ; 0050a1e8
    POP EDI                             ; 0050a1e9
    POP ESI                             ; 0050a1ea
    POP EBX                             ; 0050a1eb
    RET                                 ; 0050a1ec

