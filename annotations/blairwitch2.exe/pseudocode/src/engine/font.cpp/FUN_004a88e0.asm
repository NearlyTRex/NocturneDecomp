; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_font_cpp_FUN_004a88e0(CBitFont *param_1,int param_2,int param_3,int param_4,int param_5)
;
; Local Variables:
; undefined        Stack[-0x16c]:1  local_16c
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
; XREF[1]:
;   engine_font.cpp_CBitFont_loadBitmap_FUN_004a7d00 at 004a7f40
;
; Referenced Globals:
;   TerminatedCString s_engine_font_cpp_005d6940
;   TerminatedCString s_Out_of_memory_005d6953
;   TerminatedCString s_No_character_markers_fou_005d6961
;   TerminatedCString s_engine_font_cpp_005d698f
;   TerminatedCString s_Too_many_chars_fontfile_005d69a2
;   TerminatedCString s_engine_font_cpp_005d69c8
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_memory.c_operator_new_array_FUN_005b8df8
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_sprintf_FUN_005b7790
;   engine_font.cpp_CBitFont_calculateCharacterHeight_FUN_004a8d90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a88e0
        ;   Label: engine_font.cpp_FUN_004a88e0
    PUSH ESI                            ; 004a88e1
    PUSH EDI                            ; 004a88e2
    PUSH EBP                            ; 004a88e3
    SUB ESP,0x15c                       ; 004a88e4
    MOV ESI,dword ptr [ESP + 0x170]     ; 004a88ea
    MOV EBX,dword ptr [ESP + 0x178]     ; 004a88f1
    MOV EDX,dword ptr [ESP + 0x17c]     ; 004a88f8
    IMUL EBX,EDX                        ; 004a88ff
    LEA EAX,[EDX*0x4 + 0x0]             ; 004a8902
    PUSH EAX                            ; 004a8909
    CALL crt_memory.c_operator_new_array_FUN_005b8df8 ; 004a890a
        ;   XREF to: 005b8df8 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_array_FUN_005b8df8()
    ADD ESP,0x4                         ; 004a890f
    MOV dword ptr [ESP + 0x12c],EAX     ; 004a8912
    TEST EAX,EAX                        ; 004a8919
    JZ 0x004a8b51                       ; 004a891b
        ;   XREF to: 004a8b51 (CONDITIONAL_JUMP)  ; LAB_004a8b51
    MOV EAX,dword ptr [ESI + 0x4208]    ; 004a8921
        ;   Label: LAB_004a8921
    MOV dword ptr [ESP + 0x14c],EAX     ; 004a8927
    MOV EAX,dword ptr [ESP + 0x174]     ; 004a892e
    XOR EDX,EDX                         ; 004a8935
    MOV EAX,dword ptr [ESI + EAX*0x4 + 0x194] ; 004a8937
    TEST EBX,EBX                        ; 004a893e
    JLE 0x004a895b                      ; 004a8940
        ;   XREF to: 004a895b (CONDITIONAL_JUMP)  ; LAB_004a895b
    XOR ECX,ECX                         ; 004a8942
        ;   Label: LAB_004a8942
    MOV EBP,dword ptr [ESI + 0x4208]    ; 004a8944
    MOV CL,byte ptr [EAX]               ; 004a894a
    CMP ECX,EBP                         ; 004a894c
    JZ 0x004a8b79                       ; 004a894e
        ;   XREF to: 004a8b79 (CONDITIONAL_JUMP)  ; LAB_004a8b79
    MOV dword ptr [ESP + 0x14c],ECX     ; 004a8954
    MOV EAX,dword ptr [ESP + 0x14c]     ; 004a895b
        ;   Label: LAB_004a895b
    CMP EAX,dword ptr [ESI + 0x4208]    ; 004a8962
    JNZ 0x004a89b6                      ; 004a8968
        ;   XREF to: 004a89b6 (CONDITIONAL_JUMP)  ; LAB_004a89b6
    MOV EDX,dword ptr [ESP + 0x174]     ; 004a896a
    LEA EAX,[EDX*0x4 + 0x0]             ; 004a8971
    ADD EAX,EDX                         ; 004a8978
    SHL EAX,0x4                         ; 004a897a
    LEA EDX,[ESI + 0x4]                 ; 004a897d
    ADD EAX,EDX                         ; 004a8980
    PUSH EAX                            ; 004a8982
    PUSH 0x5d6961                       ; 004a8983 | = "No character markers found in font fi..."
    LEA EAX,[ESP + 0x8]                 ; 004a8988
    PUSH EAX                            ; 004a898c
    MOV EBX,0x2db                       ; 004a898d
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004a8992
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0xc                         ; 004a8997
    MOV EAX,ESP                         ; 004a899a
    MOV ECX,0x5d698f                    ; 004a899c | = "..\\engine\\font.cpp"
    PUSH EAX                            ; 004a89a1
    MOV dword ptr [0x01d046a4],EBX      ; 004a89a2 | DAT_01d046a4
    MOV dword ptr [0x01d046a0],ECX      ; 004a89a8 | DAT_01d046a0
    CALL core_main.c_FUN_004e4500       ; 004a89ae
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004a89b3
    MOV EAX,dword ptr [ESP + 0x174]     ; 004a89b6
        ;   Label: LAB_004a89b6
    XOR EDI,EDI                         ; 004a89bd
    XOR EBP,EBP                         ; 004a89bf
    MOV EDX,dword ptr [ESI + EAX*0x4 + 0x194] ; 004a89c1
    MOV EAX,dword ptr [ESP + 0x17c]     ; 004a89c8
    MOV dword ptr [ESP + 0x138],EDI     ; 004a89cf
    TEST EAX,EAX                        ; 004a89d6
    JLE 0x004a8a2b                      ; 004a89d8
        ;   XREF to: 004a8a2b (CONDITIONAL_JUMP)  ; LAB_004a8a2b
    MOV ECX,dword ptr [ESP + 0x12c]     ; 004a89da
    MOV EAX,dword ptr [ESP + 0x178]     ; 004a89e1
        ;   Label: LAB_004a89e1
    MOV EDI,EDX                         ; 004a89e8
    XOR EBX,EBX                         ; 004a89ea
    TEST EAX,EAX                        ; 004a89ec
    JLE 0x004a8a16                      ; 004a89ee
        ;   XREF to: 004a8a16 (CONDITIONAL_JUMP)  ; LAB_004a8a16
    XOR EAX,EAX                         ; 004a89f0
        ;   Label: LAB_004a89f0
    MOV AL,byte ptr [EDI]               ; 004a89f2
    CMP EAX,dword ptr [ESP + 0x14c]     ; 004a89f4
    JNZ 0x004a8b88                      ; 004a89fb
        ;   XREF to: 004a8b88 (CONDITIONAL_JUMP)  ; LAB_004a8b88
    MOV EBX,dword ptr [ESP + 0x138]     ; 004a8a01
    ADD ECX,0x4                         ; 004a8a08
    INC EBX                             ; 004a8a0b
    MOV dword ptr [ECX + -0x4],EBP      ; 004a8a0c
    MOV dword ptr [ESP + 0x138],EBX     ; 004a8a0f
    MOV EBX,dword ptr [ESP + 0x178]     ; 004a8a16
        ;   Label: LAB_004a8a16
    MOV EDI,dword ptr [ESP + 0x17c]     ; 004a8a1d
    INC EBP                             ; 004a8a24
    ADD EDX,EBX                         ; 004a8a25
    CMP EBP,EDI                         ; 004a8a27
    JL 0x004a89e1                       ; 004a8a29
        ;   XREF to: 004a89e1 (CONDITIONAL_JUMP)  ; LAB_004a89e1
    MOV EDX,dword ptr [ESP + 0x138]     ; 004a8a2b
        ;   Label: LAB_004a8a2b
    MOV EBP,dword ptr [ESP + 0x180]     ; 004a8a32
    XOR EAX,EAX                         ; 004a8a39
    DEC EDX                             ; 004a8a3b
    MOV dword ptr [ESP + 0x134],EAX     ; 004a8a3c
    MOV dword ptr [ESP + 0x138],EDX     ; 004a8a43
    TEST EDX,EDX                        ; 004a8a4a
    JLE 0x004a8d37                      ; 004a8a4c
        ;   XREF to: 004a8d37 (CONDITIONAL_JUMP)  ; LAB_004a8d37
    MOV EDX,dword ptr [ESP + 0x174]     ; 004a8a52
    LEA EAX,[EDX*0x4 + 0x0]             ; 004a8a59
    ADD EDX,EAX                         ; 004a8a60
    SHL EDX,0x4                         ; 004a8a62
    LEA EAX,[ESI + 0x4]                 ; 004a8a65
    ADD EAX,EDX                         ; 004a8a68
    MOV dword ptr [ESP + 0x140],EAX     ; 004a8a6a
    MOV EAX,dword ptr [ESP + 0x174]     ; 004a8a71
    SHL EAX,0x2                         ; 004a8a78
    LEA EDX,[ESI + EAX*0x1]             ; 004a8a7b
    MOV EAX,dword ptr [ESP + 0x12c]     ; 004a8a7e
    MOV dword ptr [ESP + 0x130],EDX     ; 004a8a85
    MOV dword ptr [ESP + 0x13c],EAX     ; 004a8a8c
    MOV EAX,dword ptr [ESP + 0x13c]     ; 004a8a93
        ;   Label: LAB_004a8a93
    MOV EBX,dword ptr [ESP + 0x178]     ; 004a8a9a
    MOV EAX,dword ptr [EAX]             ; 004a8aa1
    IMUL EAX,EBX                        ; 004a8aa3
    MOV EDX,dword ptr [ESP + 0x130]     ; 004a8aa6
    XOR EDI,EDI                         ; 004a8aad
    MOV EDX,dword ptr [EDX + 0x194]     ; 004a8aaf
    MOV dword ptr [ESP + 0x154],EDI     ; 004a8ab5
    ADD EDX,EAX                         ; 004a8abc
    MOV EAX,dword ptr [ESP + 0x13c]     ; 004a8abe
    MOV dword ptr [ESP + 0x158],EDX     ; 004a8ac5
    MOV dword ptr [ESP + 0x148],EAX     ; 004a8acc
    MOV EAX,EDX                         ; 004a8ad3
    MOV EDX,dword ptr [ESP + 0x178]     ; 004a8ad5
    LEA EBX,[EBP*0x4 + 0x0]             ; 004a8adc
    ADD EAX,EDX                         ; 004a8ae3
    ADD EBX,ESI                         ; 004a8ae5
    MOV dword ptr [ESP + 0x150],EAX     ; 004a8ae7
    MOV ECX,dword ptr [ESP + 0x144]     ; 004a8aee
        ;   Label: LAB_004a8aee
    MOV EAX,EDI                         ; 004a8af5
    MOV EDX,dword ptr [ESP + 0x178]     ; 004a8af7
    SUB EAX,ECX                         ; 004a8afe
    CMP EDI,EDX                         ; 004a8b00
    JGE 0x004a8c94                      ; 004a8b02
        ;   XREF to: 004a8c94 (CONDITIONAL_JUMP)  ; LAB_004a8c94
    CMP dword ptr [ESP + 0x154],0x0     ; 004a8b08
    JNZ 0x004a8c06                      ; 004a8b10
        ;   XREF to: 004a8c06 (CONDITIONAL_JUMP)  ; LAB_004a8c06
    MOV EDX,dword ptr [ESP + 0x158]     ; 004a8b16
    XOR EAX,EAX                         ; 004a8b1d
    MOV ECX,dword ptr [ESP + 0x14c]     ; 004a8b1f
    MOV AL,byte ptr [EDX]               ; 004a8b26
    CMP EAX,ECX                         ; 004a8b28
    JZ 0x004a8b9e                       ; 004a8b2a
        ;   XREF to: 004a8b9e (CONDITIONAL_JUMP)  ; LAB_004a8b9e
    MOV EDX,dword ptr [ESP + 0x150]     ; 004a8b30
        ;   Label: LAB_004a8b30
    MOV ECX,dword ptr [ESP + 0x158]     ; 004a8b37
    INC EDI                             ; 004a8b3e
    INC EDX                             ; 004a8b3f
    INC ECX                             ; 004a8b40
    MOV dword ptr [ESP + 0x150],EDX     ; 004a8b41
    MOV dword ptr [ESP + 0x158],ECX     ; 004a8b48
    JMP 0x004a8aee                      ; 004a8b4f
        ;   XREF to: 004a8aee (UNCONDITIONAL_JUMP)  ; LAB_004a8aee
    MOV ECX,0x5d6940                    ; 004a8b51 | = "..\\engine\\font.cpp"
        ;   Label: LAB_004a8b51
    MOV EDI,0x2c6                       ; 004a8b56
    PUSH 0x5d6953                       ; 004a8b5b | = "Out of memory"
    MOV dword ptr [0x01d046a0],ECX      ; 004a8b60 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 004a8b66 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004a8b6c
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004a8b71
    JMP 0x004a8921                      ; 004a8b74
        ;   XREF to: 004a8921 (UNCONDITIONAL_JUMP)  ; LAB_004a8921
    INC EDX                             ; 004a8b79
        ;   Label: LAB_004a8b79
    INC EAX                             ; 004a8b7a
    CMP EDX,EBX                         ; 004a8b7b
    JL 0x004a8942                       ; 004a8b7d
        ;   XREF to: 004a8942 (CONDITIONAL_JUMP)  ; LAB_004a8942
    JMP 0x004a895b                      ; 004a8b83
        ;   XREF to: 004a895b (UNCONDITIONAL_JUMP)  ; LAB_004a895b
    MOV EAX,dword ptr [ESP + 0x178]     ; 004a8b88
        ;   Label: LAB_004a8b88
    INC EBX                             ; 004a8b8f
    INC EDI                             ; 004a8b90
    CMP EBX,EAX                         ; 004a8b91
    JL 0x004a89f0                       ; 004a8b93
        ;   XREF to: 004a89f0 (CONDITIONAL_JUMP)  ; LAB_004a89f0
    JMP 0x004a8a16                      ; 004a8b99
        ;   XREF to: 004a8a16 (UNCONDITIONAL_JUMP)  ; LAB_004a8a16
    MOV EAX,0x1                         ; 004a8b9e
        ;   Label: LAB_004a8b9e
    MOV dword ptr [ESP + 0x144],EDI     ; 004a8ba3
    MOV dword ptr [ESP + 0x154],EAX     ; 004a8baa
    CMP EBP,0x100                       ; 004a8bb1
    JL 0x004a8bf4                       ; 004a8bb7
        ;   XREF to: 004a8bf4 (CONDITIONAL_JUMP)  ; LAB_004a8bf4
    PUSH EBP                            ; 004a8bb9
    MOV EDX,dword ptr [ESP + 0x144]     ; 004a8bba
    PUSH EDX                            ; 004a8bc1
    PUSH 0x5d69a2                       ; 004a8bc2 | = "Too many chars: fontfile %s, chars %d"
    LEA EAX,[ESP + 0xc]                 ; 004a8bc7
    PUSH EAX                            ; 004a8bcb
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004a8bcc
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    MOV EAX,0x30f                       ; 004a8bd1
    ADD ESP,0x10                        ; 004a8bd6
    MOV [0x01d046a4],EAX                ; 004a8bd9 | DAT_01d046a4
    MOV EAX,ESP                         ; 004a8bde
    MOV ECX,0x5d69c8                    ; 004a8be0 | = "..\\engine\\font.cpp"
    PUSH EAX                            ; 004a8be5
    MOV dword ptr [0x01d046a0],ECX      ; 004a8be6 | DAT_01d046a0
    CALL core_main.c_FUN_004e4500       ; 004a8bec
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004a8bf1
    MOV EAX,dword ptr [ESP + 0x150]     ; 004a8bf4
        ;   Label: LAB_004a8bf4
    MOV dword ptr [EBX + 0x1de8],EAX    ; 004a8bfb
    JMP 0x004a8b30                      ; 004a8c01
        ;   XREF to: 004a8b30 (UNCONDITIONAL_JUMP)  ; LAB_004a8b30
    MOV ECX,dword ptr [ESP + 0x158]     ; 004a8c06
        ;   Label: LAB_004a8c06
    XOR EDX,EDX                         ; 004a8c0d
    MOV DL,byte ptr [ECX]               ; 004a8c0f
    MOV ECX,dword ptr [ESP + 0x14c]     ; 004a8c11
    CMP EDX,ECX                         ; 004a8c18
    JZ 0x004a8b30                       ; 004a8c1a
        ;   XREF to: 004a8b30 (CONDITIONAL_JUMP)  ; LAB_004a8b30
    MOV dword ptr [EBX + 0x35e8],EAX    ; 004a8c20
    XOR EDX,EDX                         ; 004a8c26
    MOV ECX,dword ptr [ESI + 0x41e8]    ; 004a8c28
    MOV dword ptr [ESP + 0x154],EDX     ; 004a8c2e
    CMP EAX,ECX                         ; 004a8c35
    JLE 0x004a8c3f                      ; 004a8c37
        ;   XREF to: 004a8c3f (CONDITIONAL_JUMP)  ; LAB_004a8c3f
    MOV dword ptr [ESI + 0x41e8],EAX    ; 004a8c39
    MOV EAX,dword ptr [ESP + 0x178]     ; 004a8c3f
        ;   Label: LAB_004a8c3f
    PUSH EAX                            ; 004a8c46
    MOV EAX,dword ptr [ESP + 0x14c]     ; 004a8c47
    MOV EDX,dword ptr [ESP + 0x14c]     ; 004a8c4e
    MOV EAX,dword ptr [EAX]             ; 004a8c55
    MOV EDX,dword ptr [EDX + 0x4]       ; 004a8c57
    INC EAX                             ; 004a8c5a
    SUB EDX,EAX                         ; 004a8c5b
    PUSH EDX                            ; 004a8c5d
    MOV EDX,dword ptr [EBX + 0x35e8]    ; 004a8c5e
    PUSH EDX                            ; 004a8c64
    MOV ECX,dword ptr [EBX + 0x1de8]    ; 004a8c65
    PUSH ECX                            ; 004a8c6b
    PUSH ESI                            ; 004a8c6c
    CALL engine_font.cpp_CBitFont_calculateCharacterHeight_FUN_004a8d90 ; 004a8c6d
        ;   XREF to: 004a8d90 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_calculateCharacterHeight_FUN_004a8d90(CBitFont * this_ptr, uchar * char_bitmap, int char_width, int char_height, ...)
    MOV dword ptr [EBX + 0x39e8],EAX    ; 004a8c72
    MOV EDX,dword ptr [ESI + 0x41ec]    ; 004a8c78
    ADD ESP,0x14                        ; 004a8c7e
    CMP EAX,EDX                         ; 004a8c81
    JLE 0x004a8c8b                      ; 004a8c83
        ;   XREF to: 004a8c8b (CONDITIONAL_JUMP)  ; LAB_004a8c8b
    MOV dword ptr [ESI + 0x41ec],EAX    ; 004a8c85
    INC EBP                             ; 004a8c8b
        ;   Label: LAB_004a8c8b
    ADD EBX,0x4                         ; 004a8c8c
    JMP 0x004a8b30                      ; 004a8c8f
        ;   XREF to: 004a8b30 (UNCONDITIONAL_JUMP)  ; LAB_004a8b30
    CMP dword ptr [ESP + 0x154],0x1     ; 004a8c94
        ;   Label: LAB_004a8c94
    JNZ 0x004a8d08                      ; 004a8c9c
        ;   XREF to: 004a8d08 (CONDITIONAL_JUMP)  ; LAB_004a8d08
    MOV dword ptr [EBX + 0x35e8],EAX    ; 004a8c9e
    CMP EAX,dword ptr [ESI + 0x41e8]    ; 004a8ca4
    JLE 0x004a8cb2                      ; 004a8caa
        ;   XREF to: 004a8cb2 (CONDITIONAL_JUMP)  ; LAB_004a8cb2
    MOV dword ptr [ESI + 0x41e8],EAX    ; 004a8cac
    MOV EAX,dword ptr [ESP + 0x178]     ; 004a8cb2
        ;   Label: LAB_004a8cb2
    PUSH EAX                            ; 004a8cb9
    MOV EAX,dword ptr [ESP + 0x140]     ; 004a8cba
    MOV EDX,dword ptr [ESP + 0x140]     ; 004a8cc1
    MOV EAX,dword ptr [EAX]             ; 004a8cc8
    MOV EDX,dword ptr [EDX + 0x4]       ; 004a8cca
    INC EAX                             ; 004a8ccd
    LEA EBX,[EBP*0x4 + 0x0]             ; 004a8cce
    SUB EDX,EAX                         ; 004a8cd5
    ADD EBX,ESI                         ; 004a8cd7
    PUSH EDX                            ; 004a8cd9
    MOV EDX,dword ptr [EBX + 0x35e8]    ; 004a8cda
    PUSH EDX                            ; 004a8ce0
    MOV ECX,dword ptr [EBX + 0x1de8]    ; 004a8ce1
    PUSH ECX                            ; 004a8ce7
    PUSH ESI                            ; 004a8ce8
    CALL engine_font.cpp_CBitFont_calculateCharacterHeight_FUN_004a8d90 ; 004a8ce9
        ;   XREF to: 004a8d90 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_calculateCharacterHeight_FUN_004a8d90(CBitFont * this_ptr, uchar * char_bitmap, int char_width, int char_height, ...)
    MOV dword ptr [EBX + 0x39e8],EAX    ; 004a8cee
    MOV EDI,dword ptr [ESI + 0x41ec]    ; 004a8cf4
    ADD ESP,0x14                        ; 004a8cfa
    CMP EAX,EDI                         ; 004a8cfd
    JLE 0x004a8d07                      ; 004a8cff
        ;   XREF to: 004a8d07 (CONDITIONAL_JUMP)  ; LAB_004a8d07
    MOV dword ptr [ESI + 0x41ec],EAX    ; 004a8d01
    INC EBP                             ; 004a8d07
        ;   Label: LAB_004a8d07
    MOV EDI,dword ptr [ESP + 0x13c]     ; 004a8d08
        ;   Label: LAB_004a8d08
    MOV EAX,dword ptr [ESP + 0x134]     ; 004a8d0f
    MOV EDX,dword ptr [ESP + 0x138]     ; 004a8d16
    ADD EDI,0x4                         ; 004a8d1d
    INC EAX                             ; 004a8d20
    MOV dword ptr [ESP + 0x13c],EDI     ; 004a8d21
    MOV dword ptr [ESP + 0x134],EAX     ; 004a8d28
    CMP EAX,EDX                         ; 004a8d2f
    JL 0x004a8a93                       ; 004a8d31
        ;   XREF to: 004a8a93 (CONDITIONAL_JUMP)  ; LAB_004a8a93
    MOV EBX,dword ptr [ESP + 0x180]     ; 004a8d37
        ;   Label: LAB_004a8d37
    CMP EBP,EBX                         ; 004a8d3e
    JLE 0x004a8d60                      ; 004a8d40
        ;   XREF to: 004a8d60 (CONDITIONAL_JUMP)  ; LAB_004a8d60
    LEA EAX,[EBX*0x4 + 0x0]             ; 004a8d42
    MOV EDX,dword ptr [ESP + 0x174]     ; 004a8d49
    ADD EAX,ESI                         ; 004a8d50
    ADD EAX,0x4                         ; 004a8d52
        ;   Label: LAB_004a8d52
    INC EBX                             ; 004a8d55
    MOV dword ptr [EAX + 0x21e4],EDX    ; 004a8d56
    CMP EBX,EBP                         ; 004a8d5c
    JL 0x004a8d52                       ; 004a8d5e
        ;   XREF to: 004a8d52 (CONDITIONAL_JUMP)  ; LAB_004a8d52
    MOV EBX,dword ptr [ESP + 0x12c]     ; 004a8d60
        ;   Label: LAB_004a8d60
    MOV EAX,dword ptr [ESI + 0x41ec]    ; 004a8d67
    PUSH EBX                            ; 004a8d6d
    MOV dword ptr [ESI + 0x41f0],EAX    ; 004a8d6e
    CALL crt_unknown.c_FUN_005b7fce     ; 004a8d74
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 004a8d79
    ADD ESP,0x15c                       ; 004a8d7c
    POP EBP                             ; 004a8d82
    POP EDI                             ; 004a8d83
    POP ESI                             ; 004a8d84
    POP EBX                             ; 004a8d85
    RET                                 ; 004a8d86

