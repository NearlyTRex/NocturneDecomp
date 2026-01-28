; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_setedit_cpp_OpenSomethingBackdropThumbs_FUN_005769a0(void)
;
; Local Variables:
; undefined1       Stack[-0x5c]:1  local_5c
; undefined1       Stack[-0x4c]:1  local_4c
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
;   core_setedit.cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0 at 00576ee1
;
; Referenced Globals:
;   TerminatedCString s_core_setedit_cpp_006465a8
;   TerminatedCString s_Too_many_thumbs_006465bc
;   TerminatedCString s_s_s_raw_006465cd
;   TerminatedCString s_s_s_act_006465d6
;   TerminatedCString s_rb_006465df
;   TerminatedCString s_backdrop_006465e2
;   TerminatedCString s_rb_006465eb
;   TerminatedCString s_art_006465ee
;   TerminatedCString s_art_006465f2
;   TerminatedCString s_rb_006465f6
;   TerminatedCString s_art_006465f9
;   TerminatedCString s_backdrop_006465fd
;   TerminatedCString s_rb_00646606
;   TerminatedCString s_backdrop_00646609
;   TerminatedCString s_core_setedit_cpp_00646612
;   ... and 22 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_fread_FUN_005fd990
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   engine_dosio.c_getFile_FUN_00481a50
;   engine_dosio.c_getFileSize_FUN_00481880
;   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
;   shape_edittool.cpp_CStrList_add_FUN_004a2b80
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   shape_memdbg.cpp_debugFree_FUN_0050f460
;   shape_memdbg.cpp_debugMalloc_FUN_0050f250
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005769a0
        ;   Label: core_setedit.cpp_OpenSomethingBackdropThumbs_FUN_005769a0
    PUSH ESI                            ; 005769a1
    PUSH EDI                            ; 005769a2
    PUSH EBP                            ; 005769a3
    SUB ESP,0x4c                        ; 005769a4
    MOV ESI,dword ptr [ESP + 0x60]      ; 005769a7
    MOV EBX,dword ptr [ESP + 0x64]      ; 005769ab
    MOV EDI,dword ptr [ESP + 0x68]      ; 005769af
    CMP EDI,0xfa                        ; 005769b3
    JGE 0x00576a80                      ; 005769b9
        ;   XREF to: 00576a80 (CONDITIONAL_JUMP)  ; LAB_00576a80
    PUSH EBX                            ; 005769bf
        ;   Label: LAB_005769bf
    PUSH ESI                            ; 005769c0
    PUSH 0x6465cd                       ; 005769c1 | = "%s%s.raw"
    LEA EAX,[ESP + 0xc]                 ; 005769c6
    PUSH EAX                            ; 005769ca
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 005769cb
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 005769d0
    PUSH EBX                            ; 005769d3
    PUSH ESI                            ; 005769d4
    PUSH 0x6465d6                       ; 005769d5 | = "%s%s.act"
    LEA EAX,[ESP + 0x1c]                ; 005769da
    PUSH EAX                            ; 005769de
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 005769df
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 005769e4
    PUSH 0x6465df                       ; 005769e7 | = "rb"
    LEA EAX,[ESP + 0x4]                 ; 005769ec
    PUSH EAX                            ; 005769f0
    PUSH 0x6465e2                       ; 005769f1 | = "backdrop"
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 005769f6
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 005769fb
    MOV dword ptr [ESP + 0x20],EAX      ; 005769fe
    TEST EAX,EAX                        ; 00576a02
    JNZ 0x00576cb2                      ; 00576a04
        ;   XREF to: 00576cb2 (CONDITIONAL_JUMP)  ; LAB_00576cb2
    PUSH 0x6465eb                       ; 00576a0a | = "rb"
    LEA EAX,[ESP + 0x4]                 ; 00576a0f
    PUSH EAX                            ; 00576a13
    PUSH 0x6465ee                       ; 00576a14 | = "art"
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 00576a19
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 00576a1e
    MOV dword ptr [ESP + 0x20],EAX      ; 00576a21
    TEST EAX,EAX                        ; 00576a25
    JNZ 0x00576aa8                      ; 00576a27
        ;   XREF to: 00576aa8 (CONDITIONAL_JUMP)  ; LAB_00576aa8
    MOV EAX,ESP                         ; 00576a2d
    PUSH EAX                            ; 00576a2f
    PUSH 0x3653fc0                      ; 00576a30 | CPickList_03653fc0
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 00576a35
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 00576a3a
    LEA ESI,[EDI*0x4 + 0x0]             ; 00576a3d
        ;   Label: LAB_00576a3d
    SUB ESI,EDI                         ; 00576a44
    MOV EBP,0xff00ff                    ; 00576a46
    SHL ESI,0xc                         ; 00576a4b
    XOR EBX,EBX                         ; 00576a4e
    LEA ECX,[ESI + 0x100]               ; 00576a50
    MOV EAX,EBX                         ; 00576a56
        ;   Label: LAB_00576a56
    SHL EAX,0x8                         ; 00576a58
    MOV EDX,ECX                         ; 00576a5b
    ADD EAX,ESI                         ; 00576a5d
    ADD EAX,0x4                         ; 00576a5f
        ;   Label: LAB_00576a5f
    MOV dword ptr [EAX + 0x3365cbc],EBP ; 00576a62 | DAT_03365cbc | g_ColorMagenta | DAT_03365cc0
    CMP EAX,EDX                         ; 00576a68
    JNZ 0x00576a5f                      ; 00576a6a
        ;   XREF to: 00576a5f (CONDITIONAL_JUMP)  ; LAB_00576a5f
    INC EBX                             ; 00576a6c
    ADD ECX,0x100                       ; 00576a6d
    CMP EBX,0x30                        ; 00576a73
    JL 0x00576a56                       ; 00576a76
        ;   XREF to: 00576a56 (CONDITIONAL_JUMP)  ; LAB_00576a56
    ADD ESP,0x4c                        ; 00576a78
    POP EBP                             ; 00576a7b
    POP EDI                             ; 00576a7c
    POP ESI                             ; 00576a7d
    POP EBX                             ; 00576a7e
    RET                                 ; 00576a7f
    MOV EDX,0x6465a8                    ; 00576a80 | = "..\\core\\setedit.cpp"
        ;   Label: LAB_00576a80
    MOV ECX,0xd3                        ; 00576a85
    PUSH 0x6465bc                       ; 00576a8a | = "Too many thumbs!"
    MOV dword ptr [0x02f0ca48],EDX      ; 00576a8f | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 00576a95 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00576a9b
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00576aa0
    JMP 0x005769bf                      ; 00576aa3
        ;   XREF to: 005769bf (UNCONDITIONAL_JUMP)  ; LAB_005769bf
    MOV EAX,ESP                         ; 00576aa8
        ;   Label: LAB_00576aa8
    PUSH EAX                            ; 00576aaa
    PUSH 0x6465f2                       ; 00576aab | = "art"
    CALL engine_dosio.c_getFileSize_FUN_00481880 ; 00576ab0
        ;   XREF to: 00481880 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_getFileSize_FUN_00481880(char * directory, char * filename)
    ADD ESP,0x8                         ; 00576ab5
    PUSH 0x6465f6                       ; 00576ab8 | = "rb"
    MOV EBX,EAX                         ; 00576abd
    LEA EAX,[ESP + 0x14]                ; 00576abf
    PUSH EAX                            ; 00576ac3
    PUSH 0x6465f9                       ; 00576ac4 | = "art"
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 00576ac9
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
        ;   Label: LAB_00576ac9
    ADD ESP,0xc                         ; 00576ace
    MOV ESI,EAX                         ; 00576ad1
    TEST ESI,ESI                        ; 00576ad3
    JNZ 0x00576afe                      ; 00576ad5
        ;   XREF to: 00576afe (CONDITIONAL_JUMP)  ; LAB_00576afe
    MOV dword ptr [0x02f0ca4c],0xfd     ; 00576ad7 | g_CurrentLineNumber
    LEA EAX,[ESP + 0x10]                ; 00576ae1
    PUSH EAX                            ; 00576ae5
    MOV EBP,0x646612                    ; 00576ae6 | = "..\\core\\setedit.cpp"
    PUSH 0x646626                       ; 00576aeb | = "Can't open %s"
    MOV dword ptr [0x02f0ca48],EBP      ; 00576af0 | g_CurrentFilename
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00576af6
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 00576afb
    PUSH ESI                            ; 00576afe
        ;   Label: LAB_00576afe
    PUSH 0x1                            ; 00576aff
    PUSH 0x300                          ; 00576b01
    PUSH 0x3653cc0                      ; 00576b06 | DAT_03653cc0
    CALL crt_stdio.c_fread_FUN_005fd990 ; 00576b0b
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, FILE * file)
    ADD ESP,0x10                        ; 00576b10
    PUSH 0xff                           ; 00576b13
    PUSH 0x646634                       ; 00576b18 | = "..\\core\\setedit.cpp"
    PUSH ESI                            ; 00576b1d
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 00576b1e
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 00576b23
    CMP EBX,0x40000                     ; 00576b26
    JNC 0x00576d19                      ; 00576b2c
        ;   XREF to: 00576d19 (CONDITIONAL_JUMP)  ; LAB_00576d19
    CMP EBX,0x10000                     ; 00576b32
    JC 0x00576d37                       ; 00576b38
        ;   XREF to: 00576d37 (CONDITIONAL_JUMP)  ; LAB_00576d37
    JA 0x00576d2f                       ; 00576b3e
        ;   XREF to: 00576d2f (CONDITIONAL_JUMP)  ; LAB_00576d2f
    MOV EBP,0x100                       ; 00576b44
    MOV EBX,EBP                         ; 00576b49
    MOV dword ptr [ESP + 0x30],EBP      ; 00576b4b
    MOV EAX,dword ptr [ESP + 0x30]      ; 00576b4f
        ;   Label: LAB_00576b4f
    IMUL EAX,EBX                        ; 00576b53
    PUSH 0x121                          ; 00576b56
    PUSH 0x646685                       ; 00576b5b | = "..\\core\\setedit.cpp"
    PUSH EAX                            ; 00576b60
    CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250 ; 00576b61
        ;   XREF to: 0050f250 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugMalloc_FUN_0050f250(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 00576b66
    MOV dword ptr [ESP + 0x44],EAX      ; 00576b69
    TEST EAX,EAX                        ; 00576b6d
    JZ 0x00576d6a                       ; 00576b6f
        ;   XREF to: 00576d6a (CONDITIONAL_JUMP)  ; LAB_00576d6a
    MOV ECX,dword ptr [ESP + 0x20]      ; 00576b75
        ;   Label: LAB_00576b75
    PUSH ECX                            ; 00576b79
    PUSH EBX                            ; 00576b7a
    MOV ESI,dword ptr [ESP + 0x38]      ; 00576b7b
    PUSH ESI                            ; 00576b7f
    MOV EBP,dword ptr [ESP + 0x50]      ; 00576b80
    PUSH EBP                            ; 00576b84
    CALL crt_stdio.c_fread_FUN_005fd990 ; 00576b85
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, FILE * file)
    ADD ESP,0x10                        ; 00576b8a
    MOV dword ptr [ESP + 0x24],EBX      ; 00576b8d
    IMUL EBX,EBX,0x0                    ; 00576b91
    XOR EAX,EAX                         ; 00576b94
    MOV dword ptr [ESP + 0x3c],EAX      ; 00576b96
    LEA EAX,[EDI*0x4 + 0x0]             ; 00576b9a
    SUB EAX,EDI                         ; 00576ba1
    SHL EAX,0xc                         ; 00576ba3
    MOV dword ptr [ESP + 0x2c],EAX      ; 00576ba6
    ADD EAX,0x100                       ; 00576baa
    MOV dword ptr [ESP + 0x40],ESI      ; 00576baf
    MOV dword ptr [ESP + 0x34],EAX      ; 00576bb3
    IMUL EAX,ESI,0x0                    ; 00576bb7
    MOV dword ptr [ESP + 0x38],EBX      ; 00576bba
    MOV dword ptr [ESP + 0x28],EAX      ; 00576bbe
    MOV EAX,dword ptr [ESP + 0x38]      ; 00576bc2
        ;   Label: LAB_00576bc2
    MOV EDX,EAX                         ; 00576bc6
    MOV ECX,0x30                        ; 00576bc8
    SAR EDX,0x1f                        ; 00576bcd
    IDIV ECX                            ; 00576bd0
    MOV EBP,dword ptr [ESP + 0x30]      ; 00576bd2
    IMUL EBP,EAX                        ; 00576bd6
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00576bd9
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00576bdd
    SHL EAX,0x8                         ; 00576be1
    ADD EBX,EAX                         ; 00576be4
    MOV EAX,dword ptr [ESP + 0x34]      ; 00576be6
    MOV ECX,dword ptr [ESP + 0x28]      ; 00576bea
    MOV dword ptr [ESP + 0x48],EAX      ; 00576bee
    MOV EDX,ECX                         ; 00576bf2
        ;   Label: LAB_00576bf2
    MOV EAX,ECX                         ; 00576bf4
    SAR EDX,0x1f                        ; 00576bf6
    SHL EDX,0x6                         ; 00576bf9
    SBB EAX,EDX                         ; 00576bfc
    SAR EAX,0x6                         ; 00576bfe
    MOV ESI,dword ptr [ESP + 0x44]      ; 00576c01
    ADD EAX,EBP                         ; 00576c05
    ADD EAX,ESI                         ; 00576c07
    MOV AL,byte ptr [EAX]               ; 00576c09
    AND EAX,0xff                        ; 00576c0b
    LEA EAX,[EAX + EAX*0x2]             ; 00576c10
    XOR EDX,EDX                         ; 00576c13
    MOVZX EDI,byte ptr [EAX + 0x3653cc0] ; 00576c15 | DAT_03653cc0
    MOV DL,byte ptr [EAX + 0x3653cc1]   ; 00576c1c | DAT_03653cc1
    MOVZX ESI,byte ptr [EAX + 0x3653cc2] ; 00576c22 | DAT_03653cc2
    MOV EAX,EDX                         ; 00576c29
    MOV EDX,ESI                         ; 00576c2b
    SHL EAX,0x8                         ; 00576c2d
    SHL EDX,0x10                        ; 00576c30
    ADD EAX,EDI                         ; 00576c33
    ADD EBX,0x4                         ; 00576c35
    ADD EAX,EDX                         ; 00576c38
    MOV EDI,dword ptr [ESP + 0x40]      ; 00576c3a
    MOV dword ptr [EBX + 0x3365cbc],EAX ; 00576c3e | DAT_03365cbc | DAT_03365cc0
    MOV EAX,dword ptr [ESP + 0x48]      ; 00576c44
    ADD ECX,EDI                         ; 00576c48
    CMP EBX,EAX                         ; 00576c4a
    JNZ 0x00576bf2                      ; 00576c4c
        ;   XREF to: 00576bf2 (CONDITIONAL_JUMP)  ; LAB_00576bf2
    MOV EAX,dword ptr [ESP + 0x24]      ; 00576c4e
    MOV ECX,dword ptr [ESP + 0x38]      ; 00576c52
    MOV EBX,dword ptr [ESP + 0x3c]      ; 00576c56
    MOV EDX,dword ptr [ESP + 0x34]      ; 00576c5a
    INC EBX                             ; 00576c5e
    ADD ECX,EAX                         ; 00576c5f
    ADD EDX,0x100                       ; 00576c61
    MOV dword ptr [ESP + 0x38],ECX      ; 00576c67
    MOV dword ptr [ESP + 0x3c],EBX      ; 00576c6b
    MOV dword ptr [ESP + 0x34],EDX      ; 00576c6f
    CMP EBX,0x30                        ; 00576c73
    JL 0x00576bc2                       ; 00576c76
        ;   XREF to: 00576bc2 (CONDITIONAL_JUMP)  ; LAB_00576bc2
    PUSH 0x133                          ; 00576c7c
    PUSH 0x6466bb                       ; 00576c81 | = "..\\core\\setedit.cpp"
    MOV EDI,dword ptr [ESP + 0x4c]      ; 00576c86
    PUSH EDI                            ; 00576c8a
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 00576c8b
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 00576c90
    PUSH 0x134                          ; 00576c93
    PUSH 0x6466cf                       ; 00576c98 | = "..\\core\\setedit.cpp"
    MOV EBP,dword ptr [ESP + 0x28]      ; 00576c9d
    PUSH EBP                            ; 00576ca1
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 00576ca2
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 00576ca7
    ADD ESP,0x4c                        ; 00576caa
    POP EBP                             ; 00576cad
    POP EDI                             ; 00576cae
    POP ESI                             ; 00576caf
    POP EBX                             ; 00576cb0
    RET                                 ; 00576cb1
    MOV EAX,ESP                         ; 00576cb2
        ;   Label: LAB_00576cb2
    PUSH EAX                            ; 00576cb4
    PUSH 0x6465fd                       ; 00576cb5 | = "backdrop"
    CALL engine_dosio.c_getFileSize_FUN_00481880 ; 00576cba
        ;   XREF to: 00481880 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_getFileSize_FUN_00481880(char * directory, char * filename)
    ADD ESP,0x8                         ; 00576cbf
    PUSH 0x646606                       ; 00576cc2 | = "rb"
    MOV EBX,EAX                         ; 00576cc7
    LEA EAX,[ESP + 0x14]                ; 00576cc9
    PUSH EAX                            ; 00576ccd
    PUSH 0x646609                       ; 00576cce | = "backdrop"
    JMP 0x00576ac9                      ; 00576cd3
        ;   XREF to: 00576ac9 (UNCONDITIONAL_JUMP)  ; LAB_00576ac9
    MOV ESI,0x1fc                       ; 00576cd8
        ;   Label: LAB_00576cd8
    MOV EBX,ESI                         ; 00576cdd
    MOV dword ptr [ESP + 0x30],ESI      ; 00576cdf
    JMP 0x00576b4f                      ; 00576ce3
        ;   XREF to: 00576b4f (UNCONDITIONAL_JUMP)  ; LAB_00576b4f
    MOV EBX,0x200                       ; 00576ce8
        ;   Label: LAB_00576ce8
    MOV dword ptr [ESP + 0x30],EBX      ; 00576ced
    JMP 0x00576b4f                      ; 00576cf1
        ;   XREF to: 00576b4f (UNCONDITIONAL_JUMP)  ; LAB_00576b4f
    MOV EDX,0x400                       ; 00576cf6
        ;   Label: LAB_00576cf6
    MOV EBX,EDX                         ; 00576cfb
    MOV dword ptr [ESP + 0x30],EDX      ; 00576cfd
    JMP 0x00576b4f                      ; 00576d01
        ;   XREF to: 00576b4f (UNCONDITIONAL_JUMP)  ; LAB_00576b4f
    MOV ECX,0x280                       ; 00576d06
        ;   Label: LAB_00576d06
    MOV EBX,0x1e0                       ; 00576d0b
    MOV dword ptr [ESP + 0x30],ECX      ; 00576d10
    JMP 0x00576b4f                      ; 00576d14
        ;   XREF to: 00576b4f (UNCONDITIONAL_JUMP)  ; LAB_00576b4f
    JBE 0x00576ce8                      ; 00576d19
        ;   XREF to: 00576ce8 (CONDITIONAL_JUMP)  ; LAB_00576ce8
        ;   Label: LAB_00576d19
    CMP EBX,0x4b000                     ; 00576d1b
    JC 0x00576d37                       ; 00576d21
        ;   XREF to: 00576d37 (CONDITIONAL_JUMP)  ; LAB_00576d37
    JBE 0x00576d06                      ; 00576d23
        ;   XREF to: 00576d06 (CONDITIONAL_JUMP)  ; LAB_00576d06
    CMP EBX,0x100000                    ; 00576d25
    JZ 0x00576cf6                       ; 00576d2b
        ;   XREF to: 00576cf6 (CONDITIONAL_JUMP)  ; LAB_00576cf6
    JMP 0x00576d37                      ; 00576d2d
        ;   XREF to: 00576d37 (UNCONDITIONAL_JUMP)  ; LAB_00576d37
    CMP EBX,0x3f010                     ; 00576d2f
        ;   Label: LAB_00576d2f
    JZ 0x00576cd8                       ; 00576d35
        ;   XREF to: 00576cd8 (CONDITIONAL_JUMP)  ; LAB_00576cd8
    PUSH 0x11a                          ; 00576d37
        ;   Label: LAB_00576d37
    PUSH 0x646648                       ; 00576d3c | = "..\\core\\setedit.cpp"
    MOV ECX,dword ptr [ESP + 0x28]      ; 00576d41
    PUSH ECX                            ; 00576d45
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 00576d46
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 00576d4b
    MOV EAX,ESP                         ; 00576d4e
    PUSH EAX                            ; 00576d50
    PUSH 0x64665c                       ; 00576d51 | = "Can't figure out image dimensions for %s"
    MOV EBX,dword ptr [0x00678a60]      ; 00576d56 | g_CEditorToolsPtr
    PUSH EBX                            ; 00576d5c | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 00576d5d
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0xc                         ; 00576d62
    JMP 0x00576a3d                      ; 00576d65
        ;   XREF to: 00576a3d (UNCONDITIONAL_JUMP)  ; LAB_00576a3d
    MOV EAX,0x646699                    ; 00576d6a | = "..\\core\\setedit.cpp"
        ;   Label: LAB_00576d6a
    MOV EDX,0x122                       ; 00576d6f
    PUSH 0x6466ad                       ; 00576d74 | = "Out of memory"
    MOV [0x02f0ca48],EAX                ; 00576d79 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 00576d7e | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00576d84
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00576d89
    JMP 0x00576b75                      ; 00576d8c
        ;   XREF to: 00576b75 (UNCONDITIONAL_JUMP)  ; LAB_00576b75

