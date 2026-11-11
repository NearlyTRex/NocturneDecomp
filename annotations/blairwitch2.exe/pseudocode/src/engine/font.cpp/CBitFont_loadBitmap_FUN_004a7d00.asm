; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_font_cpp_CBitFont_loadBitmap_FUN_004a7d00(CBitFont *this_ptr,char *filename,int width,int height,int first_char)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
; int              Stack[0xc]:4   width
; int              Stack[0x10]:4   height
; int              Stack[0x14]:4   first_char
; Local Variables:
; undefined        Stack[-0x464]:1  local_464
; undefined        Stack[-0x338]:1  local_338
; undefined        Stack[-0x238]:1  local_238
; undefined        Stack[-0x138]:1  local_138
; undefined        Stack[-0x38]:1  local_38
;
; XREF[1]:
;   engine_font.cpp_CBitFont_loadNewBitmap_FUN_004a8560 at 004a858f
;
; Referenced Globals:
;   TerminatedCString s_engine_font_cpp_005d672d
;   TerminatedCString s_Too_many_bitmaps_005d6740
;   undefined4 DAT_005d6751
;   TerminatedCString s_Invalid_font_file_size_s_005d6755
;   TerminatedCString s_engine_font_cpp_005d6772
;   TerminatedCString s_Unable_to_allocate_memor_005d6785
;   TerminatedCString s_engine_font_cpp_005d67b5
;   undefined4 DAT_005d67c8
;   undefined4 DAT_005d67cc
;   TerminatedCString s_engine_font_cpp_005d67d0
;   TerminatedCString s_CBitFont_addBitmap_File_005d67e3
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   cockpit_ckptutil.c_FUN_0042c520
;   core_main.c_FUN_004e4500
;   crt_memory.c_operator_new_array_FUN_005b8df8
;   crt_string.c_strupr_FUN_005ba840
;   crt_unknown.c_sprintf_FUN_005b7790
;   engine_dosio.cpp_getFileSize_FUN_00460aa0
;   engine_dosio.cpp_makePath_FUN_004610a0
;   engine_dosio.cpp_splitPath_FUN_00461070
;   engine_font.cpp_CBitFont_remapPalette_FUN_004ab630
;   engine_font.cpp_FUN_004a88e0
;   support_trstream.cpp_CInStreamFile_openInDirectory_FUN_0057d390
;   unkaddr_0057b9a0.cpp_CInStreamFile_close_FUN_0057d180
;   unkaddr_0057b9a0.cpp_CInStreamFile_getChar_FUN_0057cf20
;   unkclass_instream.cpp_CInStreamFile_ctor_FUN_0057cd50
;   unkclass_instream.cpp_CInStreamFile_dtor_FUN_0057cec0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a7d00
        ;   Label: engine_font.cpp_CBitFont_loadBitmap_FUN_004a7d00
    PUSH ESI                            ; 004a7d01
    PUSH EDI                            ; 004a7d02
    PUSH EBP                            ; 004a7d03
    SUB ESP,0x454                       ; 004a7d04
    MOV EBX,dword ptr [ESP + 0x468]     ; 004a7d0a
    MOV EBP,dword ptr [ESP + 0x46c]     ; 004a7d11
    CMP dword ptr [EBX],0x4             ; 004a7d18
    JGE 0x004a7f73                      ; 004a7d1b
        ;   XREF to: 004a7f73 (CONDITIONAL_JUMP)  ; LAB_004a7f73
    MOV EDX,dword ptr [EBX]             ; 004a7d21
        ;   Label: LAB_004a7d21
    LEA EAX,[EDX*0x4 + 0x0]             ; 004a7d23
    ADD EAX,EDX                         ; 004a7d2a
    LEA ECX,[EBX + 0x4]                 ; 004a7d2c
    SHL EAX,0x4                         ; 004a7d2f
    MOV ESI,EBP                         ; 004a7d32
    LEA EDI,[ECX + EAX*0x1]             ; 004a7d34
    PUSH EDI                            ; 004a7d37
    MOV AL,byte ptr [ESI]               ; 004a7d38
        ;   Label: LAB_004a7d38
    MOV byte ptr [EDI],AL               ; 004a7d3a
    CMP AL,0x0                          ; 004a7d3c
    JZ 0x004a7d50                       ; 004a7d3e
        ;   XREF to: 004a7d50 (CONDITIONAL_JUMP)  ; LAB_004a7d50
    MOV AL,byte ptr [ESI + 0x1]         ; 004a7d40
    ADD ESI,0x2                         ; 004a7d43
    MOV byte ptr [EDI + 0x1],AL         ; 004a7d46
    ADD EDI,0x2                         ; 004a7d49
    CMP AL,0x0                          ; 004a7d4c
    JNZ 0x004a7d38                      ; 004a7d4e
        ;   XREF to: 004a7d38 (CONDITIONAL_JUMP)  ; LAB_004a7d38
    POP EDI                             ; 004a7d50
        ;   Label: LAB_004a7d50
    MOV EDX,dword ptr [EBX]             ; 004a7d51
    LEA EAX,[EDX*0x4 + 0x0]             ; 004a7d53
    ADD EAX,EDX                         ; 004a7d5a
    SHL EAX,0x4                         ; 004a7d5c
    ADD EAX,ECX                         ; 004a7d5f
    PUSH EAX                            ; 004a7d61
    CALL crt_string.c_strupr_FUN_005ba840 ; 004a7d62
        ;   XREF to: 005ba840 (UNCONDITIONAL_CALL)  ; char * crt_string.c_strupr_FUN_005ba840(char * string)
    ADD ESP,0x4                         ; 004a7d67
    MOV EDX,dword ptr [ESP + 0x470]     ; 004a7d6a
    MOV EDI,dword ptr [ESP + 0x474]     ; 004a7d71
    MOV ESI,EDX                         ; 004a7d78
    IMUL ESI,EDI                        ; 004a7d7a
    PUSH EBP                            ; 004a7d7d
    MOV EAX,dword ptr [EBX]             ; 004a7d7e
    PUSH 0x5d6751                       ; 004a7d80 | DAT_005d6751
    MOV dword ptr [EBX + EAX*0x4 + 0x1a4],EDX ; 004a7d85
    CALL engine_dosio.cpp_getFileSize_FUN_00460aa0 ; 004a7d8c
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFileSize_FUN_00460aa0(char * directory, char * filename)
    ADD ESP,0x8                         ; 004a7d91
    CMP EAX,ESI                         ; 004a7d94
    JGE 0x004a7dcb                      ; 004a7d96
        ;   XREF to: 004a7dcb (CONDITIONAL_JUMP)  ; LAB_004a7dcb
    PUSH EBP                            ; 004a7d98
    PUSH 0x5d6755                       ; 004a7d99 | = "Invalid font file size (%s)."
    LEA EAX,[ESP + 0x8]                 ; 004a7d9e
    PUSH EAX                            ; 004a7da2
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004a7da3
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    MOV EAX,0x5d6772                    ; 004a7da8 | = "..\\engine\\font.cpp"
    ADD ESP,0xc                         ; 004a7dad
    MOV [0x01d046a0],EAX                ; 004a7db0 | DAT_01d046a0
    MOV EAX,ESP                         ; 004a7db5
    MOV EDX,0x10f                       ; 004a7db7
    PUSH EAX                            ; 004a7dbc
    MOV dword ptr [0x01d046a4],EDX      ; 004a7dbd | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004a7dc3
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004a7dc8
    PUSH ESI                            ; 004a7dcb
        ;   Label: LAB_004a7dcb
    CALL crt_memory.c_operator_new_array_FUN_005b8df8 ; 004a7dcc
        ;   XREF to: 005b8df8 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_array_FUN_005b8df8()
    MOV EDX,dword ptr [EBX]             ; 004a7dd1
    MOV dword ptr [EBX + EDX*0x4 + 0x194],EAX ; 004a7dd3
    MOV EAX,dword ptr [EBX]             ; 004a7dda
    MOV ECX,dword ptr [EBX + EAX*0x4 + 0x194] ; 004a7ddc
    ADD ESP,0x4                         ; 004a7de3
    TEST ECX,ECX                        ; 004a7de6
    JNZ 0x004a7e1d                      ; 004a7de8
        ;   XREF to: 004a7e1d (CONDITIONAL_JUMP)  ; LAB_004a7e1d
    PUSH EBP                            ; 004a7dea
    PUSH 0x5d6785                       ; 004a7deb | = "Unable to allocate memory for font bi..."
    LEA EAX,[ESP + 0x8]                 ; 004a7df0
    PUSH EAX                            ; 004a7df4
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004a7df5
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    MOV EAX,0x117                       ; 004a7dfa
    ADD ESP,0xc                         ; 004a7dff
    MOV [0x01d046a4],EAX                ; 004a7e02 | DAT_01d046a4
    MOV EAX,ESP                         ; 004a7e07
    MOV EDI,0x5d67b5                    ; 004a7e09 | = "..\\engine\\font.cpp"
    PUSH EAX                            ; 004a7e0e
    MOV dword ptr [0x01d046a0],EDI      ; 004a7e0f | DAT_01d046a0
    CALL core_main.c_FUN_004e4500       ; 004a7e15
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004a7e1a
    MOV EAX,dword ptr [EBX]             ; 004a7e1d
        ;   Label: LAB_004a7e1d
    PUSH ESI                            ; 004a7e1f
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0x194] ; 004a7e20
    PUSH EDX                            ; 004a7e27
    PUSH EBP                            ; 004a7e28
    CALL cockpit_ckptutil.c_FUN_0042c520 ; 004a7e29
        ;   XREF to: 0042c520 (UNCONDITIONAL_CALL)  ; void * cockpit_ckptutil.c_FUN_0042c520(char * filename, void * buffer, int size)
    ADD ESP,0xc                         ; 004a7e2e
    PUSH 0x0                            ; 004a7e31
    LEA EAX,[ESP + 0x330]               ; 004a7e33
    PUSH EAX                            ; 004a7e3a
    LEA EAX,[ESP + 0x234]               ; 004a7e3b
    PUSH EAX                            ; 004a7e42
    PUSH 0x0                            ; 004a7e43
    PUSH EBP                            ; 004a7e45
    CALL engine_dosio.cpp_splitPath_FUN_00461070 ; 004a7e46
        ;   XREF to: 00461070 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_splitPath_FUN_00461070(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 004a7e4b
    PUSH 0x5d67c8                       ; 004a7e4e | DAT_005d67c8
    LEA EAX,[ESP + 0x330]               ; 004a7e53
    PUSH EAX                            ; 004a7e5a
    LEA EAX,[ESP + 0x234]               ; 004a7e5b
    PUSH EAX                            ; 004a7e62
    PUSH 0x0                            ; 004a7e63
    LEA EAX,[ESP + 0x13c]               ; 004a7e65
    PUSH EAX                            ; 004a7e6c
    CALL engine_dosio.cpp_makePath_FUN_004610a0 ; 004a7e6d
        ;   XREF to: 004610a0 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_makePath_FUN_004610a0(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 004a7e72
    LEA EAX,[ESP + 0x42c]               ; 004a7e75
    PUSH EAX                            ; 004a7e7c
    CALL unkclass_instream.cpp_CInStreamFile_ctor_FUN_0057cd50 ; 004a7e7d
        ;   XREF to: 0057cd50 (UNCONDITIONAL_CALL)  ; CInStreamFile * unkclass_instream.cpp_CInStreamFile_ctor_FUN_0057cd50(CInStreamFile * this_ptr)
    ADD ESP,0x4                         ; 004a7e82
    LEA EAX,[ESP + 0x12c]               ; 004a7e85
    PUSH EAX                            ; 004a7e8c
    PUSH 0x5d67cc                       ; 004a7e8d | DAT_005d67cc
    LEA EAX,[ESP + 0x434]               ; 004a7e92
    PUSH EAX                            ; 004a7e99
    CALL support_trstream.cpp_CInStreamFile_openInDirectory_FUN_0057d390 ; 004a7e9a
        ;   XREF to: 0057d390 (UNCONDITIONAL_CALL)  ; undefined4 support_trstream.cpp_CInStreamFile_openInDirectory_FUN_0057d390(CInStreamFile * this_ptr, undefined4 param_2, undefined4 param_3)
    ADD ESP,0xc                         ; 004a7e9f
    TEST EAX,EAX                        ; 004a7ea2
    JZ 0x004a7f9b                       ; 004a7ea4
        ;   XREF to: 004a7f9b (CONDITIONAL_JUMP)  ; LAB_004a7f9b
    XOR ESI,ESI                         ; 004a7eaa
    LEA EAX,[ESP + 0x42c]               ; 004a7eac
        ;   Label: LAB_004a7eac
    PUSH EAX                            ; 004a7eb3
    CALL unkaddr_0057b9a0.cpp_CInStreamFile_getChar_FUN_0057cf20 ; 004a7eb4
        ;   XREF to: 0057cf20 (UNCONDITIONAL_CALL)  ; int unkaddr_0057b9a0.cpp_CInStreamFile_getChar_FUN_0057cf20(CInStreamFile * this_ptr)
    IMUL EDX,dword ptr [EBX],0x300      ; 004a7eb9
    ADD EDX,EBX                         ; 004a7ebf
    ADD ESP,0x4                         ; 004a7ec1
    MOV byte ptr [EDX + ESI*0x1 + 0x1b4],AL ; 004a7ec4
    LEA EAX,[ESP + 0x42c]               ; 004a7ecb
    PUSH EAX                            ; 004a7ed2
    CALL unkaddr_0057b9a0.cpp_CInStreamFile_getChar_FUN_0057cf20 ; 004a7ed3
        ;   XREF to: 0057cf20 (UNCONDITIONAL_CALL)  ; int unkaddr_0057b9a0.cpp_CInStreamFile_getChar_FUN_0057cf20(CInStreamFile * this_ptr)
    IMUL EDX,dword ptr [EBX],0x300      ; 004a7ed8
    ADD EDX,EBX                         ; 004a7ede
    ADD ESP,0x4                         ; 004a7ee0
    MOV byte ptr [EDX + ESI*0x1 + 0x1b5],AL ; 004a7ee3
    LEA EAX,[ESP + 0x42c]               ; 004a7eea
    PUSH EAX                            ; 004a7ef1
    CALL unkaddr_0057b9a0.cpp_CInStreamFile_getChar_FUN_0057cf20 ; 004a7ef2
        ;   XREF to: 0057cf20 (UNCONDITIONAL_CALL)  ; int unkaddr_0057b9a0.cpp_CInStreamFile_getChar_FUN_0057cf20(CInStreamFile * this_ptr)
    IMUL EDX,dword ptr [EBX],0x300      ; 004a7ef7
    ADD ESI,0x3                         ; 004a7efd
    ADD EDX,EBX                         ; 004a7f00
    ADD ESP,0x4                         ; 004a7f02
    MOV byte ptr [EDX + ESI*0x1 + 0x1b3],AL ; 004a7f05
    CMP ESI,0x300                       ; 004a7f0c
    JNZ 0x004a7eac                      ; 004a7f12
        ;   XREF to: 004a7eac (CONDITIONAL_JUMP)  ; LAB_004a7eac
    LEA EAX,[ESP + 0x42c]               ; 004a7f14
    PUSH EAX                            ; 004a7f1b
    CALL unkaddr_0057b9a0.cpp_CInStreamFile_close_FUN_0057d180 ; 004a7f1c
        ;   XREF to: 0057d180 (UNCONDITIONAL_CALL)  ; undefined4 unkaddr_0057b9a0.cpp_CInStreamFile_close_FUN_0057d180(CInStreamFile * this_ptr)
    ADD ESP,0x4                         ; 004a7f21
    MOV ESI,dword ptr [ESP + 0x478]     ; 004a7f24
        ;   Label: LAB_004a7f24
    PUSH ESI                            ; 004a7f2b
    MOV EDI,dword ptr [ESP + 0x478]     ; 004a7f2c
    PUSH EDI                            ; 004a7f33
    MOV EBP,dword ptr [ESP + 0x478]     ; 004a7f34
    PUSH EBP                            ; 004a7f3b
    MOV EAX,dword ptr [EBX]             ; 004a7f3c
    PUSH EAX                            ; 004a7f3e
    PUSH EBX                            ; 004a7f3f
    CALL engine_font.cpp_FUN_004a88e0   ; 004a7f40
        ;   XREF to: 004a88e0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004a88e0()
    MOV EDX,dword ptr [EBX]             ; 004a7f45
    ADD ESP,0x14                        ; 004a7f47
    INC EDX                             ; 004a7f4a
    PUSH EBX                            ; 004a7f4b
    MOV dword ptr [EBX],EDX             ; 004a7f4c
    CALL engine_font.cpp_CBitFont_remapPalette_FUN_004ab630 ; 004a7f4e
        ;   XREF to: 004ab630 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_remapPalette_FUN_004ab630(CBitFont * this_ptr)
    ADD ESP,0x4                         ; 004a7f53
    PUSH 0x0                            ; 004a7f56
    LEA EAX,[ESP + 0x430]               ; 004a7f58
    PUSH EAX                            ; 004a7f5f
    CALL unkclass_instream.cpp_CInStreamFile_dtor_FUN_0057cec0 ; 004a7f60
        ;   XREF to: 0057cec0 (UNCONDITIONAL_CALL)  ; CInStreamFile * unkclass_instream.cpp_CInStreamFile_dtor_FUN_0057cec0(CInStreamFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004a7f65
    ADD ESP,0x454                       ; 004a7f68
    POP EBP                             ; 004a7f6e
    POP EDI                             ; 004a7f6f
    POP ESI                             ; 004a7f70
    POP EBX                             ; 004a7f71
    RET                                 ; 004a7f72
    MOV ECX,0x5d672d                    ; 004a7f73 | = "..\\engine\\font.cpp"
        ;   Label: LAB_004a7f73
    MOV ESI,0xfa                        ; 004a7f78
    PUSH 0x5d6740                       ; 004a7f7d | = "Too many bitmaps"
    MOV dword ptr [0x01d046a0],ECX      ; 004a7f82 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 004a7f88 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004a7f8e
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004a7f93
    JMP 0x004a7d21                      ; 004a7f96
        ;   XREF to: 004a7d21 (UNCONDITIONAL_JUMP)  ; LAB_004a7d21
    LEA EAX,[ESP + 0x12c]               ; 004a7f9b
        ;   Label: LAB_004a7f9b
    PUSH EAX                            ; 004a7fa2
    MOV ECX,0x5d67d0                    ; 004a7fa3 | = "..\\engine\\font.cpp"
    MOV ESI,0x128                       ; 004a7fa8
    PUSH 0x5d67e3                       ; 004a7fad | = "CBitFont::addBitmap - File not found ..."
    MOV dword ptr [0x01d046a0],ECX      ; 004a7fb2 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 004a7fb8 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004a7fbe
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 004a7fc3
    JMP 0x004a7f24                      ; 004a7fc6
        ;   XREF to: 004a7f24 (UNCONDITIONAL_JUMP)  ; LAB_004a7f24

