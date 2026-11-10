; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_font_cpp_FUN_004c18c0(CBitFont *param_1,int param_2,int param_3,int param_4,int param_5)
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
;   engine_font.cpp_CBitFont_loadBitmap_FUN_004c0cd0 at 004c0f12
;
; Referenced Globals:
;   TerminatedCString s_engine_font_cpp_005e09b9
;   TerminatedCString s_Out_of_memory_005e09cc
;   TerminatedCString s_No_character_markers_fou_005e09da
;   TerminatedCString s_engine_font_cpp_005e0a08
;   TerminatedCString s_Too_many_chars_fontfile_005e0a1b
;   TerminatedCString s_engine_font_cpp_005e0a41
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c1268
;   crt_unknown.c_sprintf_FUN_005bfb40
;   engine_font.cpp_CBitFont_calculateCharacterHeight_FUN_004c1d70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c18c0
        ;   Label: engine_font.cpp_FUN_004c18c0
    PUSH ESI                            ; 004c18c1
    PUSH EDI                            ; 004c18c2
    PUSH EBP                            ; 004c18c3
    SUB ESP,0x15c                       ; 004c18c4
    MOV ESI,dword ptr [ESP + 0x170]     ; 004c18ca
    MOV EBX,dword ptr [ESP + 0x178]     ; 004c18d1
    MOV EDX,dword ptr [ESP + 0x17c]     ; 004c18d8
    IMUL EBX,EDX                        ; 004c18df
    LEA EAX,[EDX*0x4 + 0x0]             ; 004c18e2
    PUSH EAX                            ; 004c18e9
    CALL crt_unknown.c_FUN_005c1268     ; 004c18ea
        ;   XREF to: 005c1268 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c1268()
    ADD ESP,0x4                         ; 004c18ef
    MOV dword ptr [ESP + 0x12c],EAX     ; 004c18f2
    TEST EAX,EAX                        ; 004c18f9
    JZ 0x004c1b31                       ; 004c18fb
        ;   XREF to: 004c1b31 (CONDITIONAL_JUMP)  ; LAB_004c1b31
    MOV EAX,dword ptr [ESI + 0x4208]    ; 004c1901
        ;   Label: LAB_004c1901
    MOV dword ptr [ESP + 0x14c],EAX     ; 004c1907
    MOV EAX,dword ptr [ESP + 0x174]     ; 004c190e
    XOR EDX,EDX                         ; 004c1915
    MOV EAX,dword ptr [ESI + EAX*0x4 + 0x194] ; 004c1917
    TEST EBX,EBX                        ; 004c191e
    JLE 0x004c193b                      ; 004c1920
        ;   XREF to: 004c193b (CONDITIONAL_JUMP)  ; LAB_004c193b
    XOR ECX,ECX                         ; 004c1922
        ;   Label: LAB_004c1922
    MOV EBP,dword ptr [ESI + 0x4208]    ; 004c1924
    MOV CL,byte ptr [EAX]               ; 004c192a
    CMP ECX,EBP                         ; 004c192c
    JZ 0x004c1b59                       ; 004c192e
        ;   XREF to: 004c1b59 (CONDITIONAL_JUMP)  ; LAB_004c1b59
    MOV dword ptr [ESP + 0x14c],ECX     ; 004c1934
    MOV EAX,dword ptr [ESP + 0x14c]     ; 004c193b
        ;   Label: LAB_004c193b
    CMP EAX,dword ptr [ESI + 0x4208]    ; 004c1942
    JNZ 0x004c1996                      ; 004c1948
        ;   XREF to: 004c1996 (CONDITIONAL_JUMP)  ; LAB_004c1996
    MOV EDX,dword ptr [ESP + 0x174]     ; 004c194a
    LEA EAX,[EDX*0x4 + 0x0]             ; 004c1951
    ADD EAX,EDX                         ; 004c1958
    SHL EAX,0x4                         ; 004c195a
    LEA EDX,[ESI + 0x4]                 ; 004c195d
    ADD EAX,EDX                         ; 004c1960
    PUSH EAX                            ; 004c1962
    PUSH 0x5e09da                       ; 004c1963 | = "No character markers found in font fi..."
    LEA EAX,[ESP + 0x8]                 ; 004c1968
    PUSH EAX                            ; 004c196c
    MOV EBX,0x2e0                       ; 004c196d
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 004c1972
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 004c1977
    MOV EAX,ESP                         ; 004c197a
    MOV ECX,0x5e0a08                    ; 004c197c | = "..\\engine\\font.cpp"
    PUSH EAX                            ; 004c1981
    MOV dword ptr [0x01d1d404],EBX      ; 004c1982 | DAT_01d1d404
    MOV dword ptr [0x01d1d400],ECX      ; 004c1988 | DAT_01d1d400
    CALL core_main.c_FUN_005030e0       ; 004c198e
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004c1993
    MOV EAX,dword ptr [ESP + 0x174]     ; 004c1996
        ;   Label: LAB_004c1996
    XOR EDI,EDI                         ; 004c199d
    XOR EBP,EBP                         ; 004c199f
    MOV EDX,dword ptr [ESI + EAX*0x4 + 0x194] ; 004c19a1
    MOV EAX,dword ptr [ESP + 0x17c]     ; 004c19a8
    MOV dword ptr [ESP + 0x138],EDI     ; 004c19af
    TEST EAX,EAX                        ; 004c19b6
    JLE 0x004c1a0b                      ; 004c19b8
        ;   XREF to: 004c1a0b (CONDITIONAL_JUMP)  ; LAB_004c1a0b
    MOV ECX,dword ptr [ESP + 0x12c]     ; 004c19ba
    MOV EAX,dword ptr [ESP + 0x178]     ; 004c19c1
        ;   Label: LAB_004c19c1
    MOV EDI,EDX                         ; 004c19c8
    XOR EBX,EBX                         ; 004c19ca
    TEST EAX,EAX                        ; 004c19cc
    JLE 0x004c19f6                      ; 004c19ce
        ;   XREF to: 004c19f6 (CONDITIONAL_JUMP)  ; LAB_004c19f6
    XOR EAX,EAX                         ; 004c19d0
        ;   Label: LAB_004c19d0
    MOV AL,byte ptr [EDI]               ; 004c19d2
    CMP EAX,dword ptr [ESP + 0x14c]     ; 004c19d4
    JNZ 0x004c1b68                      ; 004c19db
        ;   XREF to: 004c1b68 (CONDITIONAL_JUMP)  ; LAB_004c1b68
    MOV EBX,dword ptr [ESP + 0x138]     ; 004c19e1
    ADD ECX,0x4                         ; 004c19e8
    INC EBX                             ; 004c19eb
    MOV dword ptr [ECX + -0x4],EBP      ; 004c19ec
    MOV dword ptr [ESP + 0x138],EBX     ; 004c19ef
    MOV EBX,dword ptr [ESP + 0x178]     ; 004c19f6
        ;   Label: LAB_004c19f6
    MOV EDI,dword ptr [ESP + 0x17c]     ; 004c19fd
    INC EBP                             ; 004c1a04
    ADD EDX,EBX                         ; 004c1a05
    CMP EBP,EDI                         ; 004c1a07
    JL 0x004c19c1                       ; 004c1a09
        ;   XREF to: 004c19c1 (CONDITIONAL_JUMP)  ; LAB_004c19c1
    MOV EDX,dword ptr [ESP + 0x138]     ; 004c1a0b
        ;   Label: LAB_004c1a0b
    MOV EBP,dword ptr [ESP + 0x180]     ; 004c1a12
    XOR EAX,EAX                         ; 004c1a19
    DEC EDX                             ; 004c1a1b
    MOV dword ptr [ESP + 0x134],EAX     ; 004c1a1c
    MOV dword ptr [ESP + 0x138],EDX     ; 004c1a23
    TEST EDX,EDX                        ; 004c1a2a
    JLE 0x004c1d17                      ; 004c1a2c
        ;   XREF to: 004c1d17 (CONDITIONAL_JUMP)  ; LAB_004c1d17
    MOV EDX,dword ptr [ESP + 0x174]     ; 004c1a32
    LEA EAX,[EDX*0x4 + 0x0]             ; 004c1a39
    ADD EDX,EAX                         ; 004c1a40
    SHL EDX,0x4                         ; 004c1a42
    LEA EAX,[ESI + 0x4]                 ; 004c1a45
    ADD EAX,EDX                         ; 004c1a48
    MOV dword ptr [ESP + 0x140],EAX     ; 004c1a4a
    MOV EAX,dword ptr [ESP + 0x174]     ; 004c1a51
    SHL EAX,0x2                         ; 004c1a58
    LEA EDX,[ESI + EAX*0x1]             ; 004c1a5b
    MOV EAX,dword ptr [ESP + 0x12c]     ; 004c1a5e
    MOV dword ptr [ESP + 0x130],EDX     ; 004c1a65
    MOV dword ptr [ESP + 0x13c],EAX     ; 004c1a6c
    MOV EAX,dword ptr [ESP + 0x13c]     ; 004c1a73
        ;   Label: LAB_004c1a73
    MOV EBX,dword ptr [ESP + 0x178]     ; 004c1a7a
    MOV EAX,dword ptr [EAX]             ; 004c1a81
    IMUL EAX,EBX                        ; 004c1a83
    MOV EDX,dword ptr [ESP + 0x130]     ; 004c1a86
    XOR EDI,EDI                         ; 004c1a8d
    MOV EDX,dword ptr [EDX + 0x194]     ; 004c1a8f
    MOV dword ptr [ESP + 0x154],EDI     ; 004c1a95
    ADD EDX,EAX                         ; 004c1a9c
    MOV EAX,dword ptr [ESP + 0x13c]     ; 004c1a9e
    MOV dword ptr [ESP + 0x158],EDX     ; 004c1aa5
    MOV dword ptr [ESP + 0x148],EAX     ; 004c1aac
    MOV EAX,EDX                         ; 004c1ab3
    MOV EDX,dword ptr [ESP + 0x178]     ; 004c1ab5
    LEA EBX,[EBP*0x4 + 0x0]             ; 004c1abc
    ADD EAX,EDX                         ; 004c1ac3
    ADD EBX,ESI                         ; 004c1ac5
    MOV dword ptr [ESP + 0x150],EAX     ; 004c1ac7
    MOV ECX,dword ptr [ESP + 0x144]     ; 004c1ace
        ;   Label: LAB_004c1ace
    MOV EAX,EDI                         ; 004c1ad5
    MOV EDX,dword ptr [ESP + 0x178]     ; 004c1ad7
    SUB EAX,ECX                         ; 004c1ade
    CMP EDI,EDX                         ; 004c1ae0
    JGE 0x004c1c74                      ; 004c1ae2
        ;   XREF to: 004c1c74 (CONDITIONAL_JUMP)  ; LAB_004c1c74
    CMP dword ptr [ESP + 0x154],0x0     ; 004c1ae8
    JNZ 0x004c1be6                      ; 004c1af0
        ;   XREF to: 004c1be6 (CONDITIONAL_JUMP)  ; LAB_004c1be6
    MOV EDX,dword ptr [ESP + 0x158]     ; 004c1af6
    XOR EAX,EAX                         ; 004c1afd
    MOV ECX,dword ptr [ESP + 0x14c]     ; 004c1aff
    MOV AL,byte ptr [EDX]               ; 004c1b06
    CMP EAX,ECX                         ; 004c1b08
    JZ 0x004c1b7e                       ; 004c1b0a
        ;   XREF to: 004c1b7e (CONDITIONAL_JUMP)  ; LAB_004c1b7e
    MOV EDX,dword ptr [ESP + 0x150]     ; 004c1b10
        ;   Label: LAB_004c1b10
    MOV ECX,dword ptr [ESP + 0x158]     ; 004c1b17
    INC EDI                             ; 004c1b1e
    INC EDX                             ; 004c1b1f
    INC ECX                             ; 004c1b20
    MOV dword ptr [ESP + 0x150],EDX     ; 004c1b21
    MOV dword ptr [ESP + 0x158],ECX     ; 004c1b28
    JMP 0x004c1ace                      ; 004c1b2f
        ;   XREF to: 004c1ace (UNCONDITIONAL_JUMP)  ; LAB_004c1ace
    MOV ECX,0x5e09b9                    ; 004c1b31 | = "..\\engine\\font.cpp"
        ;   Label: LAB_004c1b31
    MOV EDI,0x2cb                       ; 004c1b36
    PUSH 0x5e09cc                       ; 004c1b3b | = "Out of memory"
    MOV dword ptr [0x01d1d400],ECX      ; 004c1b40 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 004c1b46 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004c1b4c
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004c1b51
    JMP 0x004c1901                      ; 004c1b54
        ;   XREF to: 004c1901 (UNCONDITIONAL_JUMP)  ; LAB_004c1901
    INC EDX                             ; 004c1b59
        ;   Label: LAB_004c1b59
    INC EAX                             ; 004c1b5a
    CMP EDX,EBX                         ; 004c1b5b
    JL 0x004c1922                       ; 004c1b5d
        ;   XREF to: 004c1922 (CONDITIONAL_JUMP)  ; LAB_004c1922
    JMP 0x004c193b                      ; 004c1b63
        ;   XREF to: 004c193b (UNCONDITIONAL_JUMP)  ; LAB_004c193b
    MOV EAX,dword ptr [ESP + 0x178]     ; 004c1b68
        ;   Label: LAB_004c1b68
    INC EBX                             ; 004c1b6f
    INC EDI                             ; 004c1b70
    CMP EBX,EAX                         ; 004c1b71
    JL 0x004c19d0                       ; 004c1b73
        ;   XREF to: 004c19d0 (CONDITIONAL_JUMP)  ; LAB_004c19d0
    JMP 0x004c19f6                      ; 004c1b79
        ;   XREF to: 004c19f6 (UNCONDITIONAL_JUMP)  ; LAB_004c19f6
    MOV EAX,0x1                         ; 004c1b7e
        ;   Label: LAB_004c1b7e
    MOV dword ptr [ESP + 0x144],EDI     ; 004c1b83
    MOV dword ptr [ESP + 0x154],EAX     ; 004c1b8a
    CMP EBP,0x100                       ; 004c1b91
    JL 0x004c1bd4                       ; 004c1b97
        ;   XREF to: 004c1bd4 (CONDITIONAL_JUMP)  ; LAB_004c1bd4
    PUSH EBP                            ; 004c1b99
    MOV EDX,dword ptr [ESP + 0x144]     ; 004c1b9a
    PUSH EDX                            ; 004c1ba1
    PUSH 0x5e0a1b                       ; 004c1ba2 | = "Too many chars: fontfile %s, chars %d"
    LEA EAX,[ESP + 0xc]                 ; 004c1ba7
    PUSH EAX                            ; 004c1bab
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 004c1bac
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    MOV EAX,0x314                       ; 004c1bb1
    ADD ESP,0x10                        ; 004c1bb6
    MOV [0x01d1d404],EAX                ; 004c1bb9 | DAT_01d1d404
    MOV EAX,ESP                         ; 004c1bbe
    MOV ECX,0x5e0a41                    ; 004c1bc0 | = "..\\engine\\font.cpp"
    PUSH EAX                            ; 004c1bc5
    MOV dword ptr [0x01d1d400],ECX      ; 004c1bc6 | DAT_01d1d400
    CALL core_main.c_FUN_005030e0       ; 004c1bcc
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004c1bd1
    MOV EAX,dword ptr [ESP + 0x150]     ; 004c1bd4
        ;   Label: LAB_004c1bd4
    MOV dword ptr [EBX + 0x1de8],EAX    ; 004c1bdb
    JMP 0x004c1b10                      ; 004c1be1
        ;   XREF to: 004c1b10 (UNCONDITIONAL_JUMP)  ; LAB_004c1b10
    MOV ECX,dword ptr [ESP + 0x158]     ; 004c1be6
        ;   Label: LAB_004c1be6
    XOR EDX,EDX                         ; 004c1bed
    MOV DL,byte ptr [ECX]               ; 004c1bef
    MOV ECX,dword ptr [ESP + 0x14c]     ; 004c1bf1
    CMP EDX,ECX                         ; 004c1bf8
    JZ 0x004c1b10                       ; 004c1bfa
        ;   XREF to: 004c1b10 (CONDITIONAL_JUMP)  ; LAB_004c1b10
    MOV dword ptr [EBX + 0x35e8],EAX    ; 004c1c00
    XOR EDX,EDX                         ; 004c1c06
    MOV ECX,dword ptr [ESI + 0x41e8]    ; 004c1c08
    MOV dword ptr [ESP + 0x154],EDX     ; 004c1c0e
    CMP EAX,ECX                         ; 004c1c15
    JLE 0x004c1c1f                      ; 004c1c17
        ;   XREF to: 004c1c1f (CONDITIONAL_JUMP)  ; LAB_004c1c1f
    MOV dword ptr [ESI + 0x41e8],EAX    ; 004c1c19
    MOV EAX,dword ptr [ESP + 0x178]     ; 004c1c1f
        ;   Label: LAB_004c1c1f
    PUSH EAX                            ; 004c1c26
    MOV EAX,dword ptr [ESP + 0x14c]     ; 004c1c27
    MOV EDX,dword ptr [ESP + 0x14c]     ; 004c1c2e
    MOV EAX,dword ptr [EAX]             ; 004c1c35
    MOV EDX,dword ptr [EDX + 0x4]       ; 004c1c37
    INC EAX                             ; 004c1c3a
    SUB EDX,EAX                         ; 004c1c3b
    PUSH EDX                            ; 004c1c3d
    MOV EDX,dword ptr [EBX + 0x35e8]    ; 004c1c3e
    PUSH EDX                            ; 004c1c44
    MOV ECX,dword ptr [EBX + 0x1de8]    ; 004c1c45
    PUSH ECX                            ; 004c1c4b
    PUSH ESI                            ; 004c1c4c
    CALL engine_font.cpp_CBitFont_calculateCharacterHeight_FUN_004c1d70 ; 004c1c4d
        ;   XREF to: 004c1d70 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_calculateCharacterHeight_FUN_004c1d70(CBitFont * this_ptr, uchar * char_bitmap, int char_width, int char_height, ...)
    MOV dword ptr [EBX + 0x39e8],EAX    ; 004c1c52
    MOV EDX,dword ptr [ESI + 0x41ec]    ; 004c1c58
    ADD ESP,0x14                        ; 004c1c5e
    CMP EAX,EDX                         ; 004c1c61
    JLE 0x004c1c6b                      ; 004c1c63
        ;   XREF to: 004c1c6b (CONDITIONAL_JUMP)  ; LAB_004c1c6b
    MOV dword ptr [ESI + 0x41ec],EAX    ; 004c1c65
    INC EBP                             ; 004c1c6b
        ;   Label: LAB_004c1c6b
    ADD EBX,0x4                         ; 004c1c6c
    JMP 0x004c1b10                      ; 004c1c6f
        ;   XREF to: 004c1b10 (UNCONDITIONAL_JUMP)  ; LAB_004c1b10
    CMP dword ptr [ESP + 0x154],0x1     ; 004c1c74
        ;   Label: LAB_004c1c74
    JNZ 0x004c1ce8                      ; 004c1c7c
        ;   XREF to: 004c1ce8 (CONDITIONAL_JUMP)  ; LAB_004c1ce8
    MOV dword ptr [EBX + 0x35e8],EAX    ; 004c1c7e
    CMP EAX,dword ptr [ESI + 0x41e8]    ; 004c1c84
    JLE 0x004c1c92                      ; 004c1c8a
        ;   XREF to: 004c1c92 (CONDITIONAL_JUMP)  ; LAB_004c1c92
    MOV dword ptr [ESI + 0x41e8],EAX    ; 004c1c8c
    MOV EAX,dword ptr [ESP + 0x178]     ; 004c1c92
        ;   Label: LAB_004c1c92
    PUSH EAX                            ; 004c1c99
    MOV EAX,dword ptr [ESP + 0x140]     ; 004c1c9a
    MOV EDX,dword ptr [ESP + 0x140]     ; 004c1ca1
    MOV EAX,dword ptr [EAX]             ; 004c1ca8
    MOV EDX,dword ptr [EDX + 0x4]       ; 004c1caa
    INC EAX                             ; 004c1cad
    LEA EBX,[EBP*0x4 + 0x0]             ; 004c1cae
    SUB EDX,EAX                         ; 004c1cb5
    ADD EBX,ESI                         ; 004c1cb7
    PUSH EDX                            ; 004c1cb9
    MOV EDX,dword ptr [EBX + 0x35e8]    ; 004c1cba
    PUSH EDX                            ; 004c1cc0
    MOV ECX,dword ptr [EBX + 0x1de8]    ; 004c1cc1
    PUSH ECX                            ; 004c1cc7
    PUSH ESI                            ; 004c1cc8
    CALL engine_font.cpp_CBitFont_calculateCharacterHeight_FUN_004c1d70 ; 004c1cc9
        ;   XREF to: 004c1d70 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_calculateCharacterHeight_FUN_004c1d70(CBitFont * this_ptr, uchar * char_bitmap, int char_width, int char_height, ...)
    MOV dword ptr [EBX + 0x39e8],EAX    ; 004c1cce
    MOV EDI,dword ptr [ESI + 0x41ec]    ; 004c1cd4
    ADD ESP,0x14                        ; 004c1cda
    CMP EAX,EDI                         ; 004c1cdd
    JLE 0x004c1ce7                      ; 004c1cdf
        ;   XREF to: 004c1ce7 (CONDITIONAL_JUMP)  ; LAB_004c1ce7
    MOV dword ptr [ESI + 0x41ec],EAX    ; 004c1ce1
    INC EBP                             ; 004c1ce7
        ;   Label: LAB_004c1ce7
    MOV EDI,dword ptr [ESP + 0x13c]     ; 004c1ce8
        ;   Label: LAB_004c1ce8
    MOV EAX,dword ptr [ESP + 0x134]     ; 004c1cef
    MOV EDX,dword ptr [ESP + 0x138]     ; 004c1cf6
    ADD EDI,0x4                         ; 004c1cfd
    INC EAX                             ; 004c1d00
    MOV dword ptr [ESP + 0x13c],EDI     ; 004c1d01
    MOV dword ptr [ESP + 0x134],EAX     ; 004c1d08
    CMP EAX,EDX                         ; 004c1d0f
    JL 0x004c1a73                       ; 004c1d11
        ;   XREF to: 004c1a73 (CONDITIONAL_JUMP)  ; LAB_004c1a73
    MOV EBX,dword ptr [ESP + 0x180]     ; 004c1d17
        ;   Label: LAB_004c1d17
    CMP EBP,EBX                         ; 004c1d1e
    JLE 0x004c1d40                      ; 004c1d20
        ;   XREF to: 004c1d40 (CONDITIONAL_JUMP)  ; LAB_004c1d40
    LEA EAX,[EBX*0x4 + 0x0]             ; 004c1d22
    MOV EDX,dword ptr [ESP + 0x174]     ; 004c1d29
    ADD EAX,ESI                         ; 004c1d30
    ADD EAX,0x4                         ; 004c1d32
        ;   Label: LAB_004c1d32
    INC EBX                             ; 004c1d35
    MOV dword ptr [EAX + 0x21e4],EDX    ; 004c1d36
    CMP EBX,EBP                         ; 004c1d3c
    JL 0x004c1d32                       ; 004c1d3e
        ;   XREF to: 004c1d32 (CONDITIONAL_JUMP)  ; LAB_004c1d32
    MOV EBX,dword ptr [ESP + 0x12c]     ; 004c1d40
        ;   Label: LAB_004c1d40
    MOV EAX,dword ptr [ESI + 0x41ec]    ; 004c1d47
    PUSH EBX                            ; 004c1d4d
    MOV dword ptr [ESI + 0x41f0],EAX    ; 004c1d4e
    CALL crt_unknown.c_FUN_005c0336     ; 004c1d54
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 004c1d59
    ADD ESP,0x15c                       ; 004c1d5c
    POP EBP                             ; 004c1d62
    POP EDI                             ; 004c1d63
    POP ESI                             ; 004c1d64
    POP EBX                             ; 004c1d65
    RET                                 ; 004c1d66

