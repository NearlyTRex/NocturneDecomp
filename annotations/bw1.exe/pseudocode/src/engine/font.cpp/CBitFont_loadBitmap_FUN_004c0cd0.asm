; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_font_cpp_CBitFont_loadBitmap_FUN_004c0cd0(CBitFont *this_ptr,char *filename,int width,int height,int first_char)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
; int              Stack[0xc]:4   width
; int              Stack[0x10]:4   height
; int              Stack[0x14]:4   first_char
; Local Variables:
; undefined        Stack[-0x468]:1  local_468
; undefined        Stack[-0x33c]:1  local_33c
; undefined        Stack[-0x23c]:1  local_23c
; undefined        Stack[-0x13c]:1  local_13c
; undefined        Stack[-0x3c]:1  local_3c
;
; XREF[1]:
;   engine_font.cpp_CBitFont_loadNewBitmap_FUN_004c1540 at 004c156f
;
; Referenced Globals:
;   TerminatedCString s_engine_font_cpp_005e07a6
;   TerminatedCString s_Too_many_bitmaps_005e07b9
;   undefined4 DAT_005e07ca
;   TerminatedCString s_Invalid_font_file_size_s_005e07ce
;   TerminatedCString s_engine_font_cpp_005e07eb
;   TerminatedCString s_Unable_to_allocate_memor_005e07fe
;   TerminatedCString s_engine_font_cpp_005e082e
;   undefined4 DAT_005e0841
;   undefined4 DAT_005e0845
;   TerminatedCString s_engine_font_cpp_005e0849
;   TerminatedCString s_CBitFont_addBitmap_File_005e085c
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   cockpit_ckptutil.c_FUN_0043b2e0
;   core_main.c_FUN_005030e0
;   crt_memory.c_operator_new_array_FUN_005c1268
;   crt_string.c_strupr_FUN_005c2c20
;   crt_unknown.c_sprintf_FUN_005bfb40
;   engine_dosio.cpp_getFileSize_FUN_00478fb0
;   engine_dosio.cpp_makePath_FUN_004795b0
;   engine_dosio.cpp_splitPath_FUN_00479580
;   engine_font.cpp_CBitFont_remapPalette_FUN_004c45e0
;   engine_font.cpp_FUN_004c18c0
;   support_trstream.cpp_CInStreamFile_openInDirectory_FUN_005a0fd0
;   unkaddr_0059f520.cpp_CInStreamFile_close_FUN_005a0dc0
;   unkaddr_0059f520.cpp_CInStreamFile_getChar_FUN_005a0ab0
;   unkclass_instream.cpp_CInStreamFile_ctor_FUN_005a08d0
;   unkclass_instream.cpp_CInStreamFile_dtor_FUN_005a0a50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c0cd0
        ;   Label: engine_font.cpp_CBitFont_loadBitmap_FUN_004c0cd0
    PUSH ESI                            ; 004c0cd1
    PUSH EDI                            ; 004c0cd2
    PUSH EBP                            ; 004c0cd3
    SUB ESP,0x458                       ; 004c0cd4
    MOV EBX,dword ptr [ESP + 0x46c]     ; 004c0cda
    MOV EBP,dword ptr [ESP + 0x470]     ; 004c0ce1
    CMP dword ptr [EBX],0x4             ; 004c0ce8
    JGE 0x004c0f45                      ; 004c0ceb
        ;   XREF to: 004c0f45 (CONDITIONAL_JUMP)  ; LAB_004c0f45
    MOV EDX,dword ptr [EBX]             ; 004c0cf1
        ;   Label: LAB_004c0cf1
    LEA EAX,[EDX*0x4 + 0x0]             ; 004c0cf3
    ADD EAX,EDX                         ; 004c0cfa
    LEA ECX,[EBX + 0x4]                 ; 004c0cfc
    SHL EAX,0x4                         ; 004c0cff
    MOV ESI,EBP                         ; 004c0d02
    LEA EDI,[ECX + EAX*0x1]             ; 004c0d04
    PUSH EDI                            ; 004c0d07
    MOV AL,byte ptr [ESI]               ; 004c0d08
        ;   Label: LAB_004c0d08
    MOV byte ptr [EDI],AL               ; 004c0d0a
    CMP AL,0x0                          ; 004c0d0c
    JZ 0x004c0d20                       ; 004c0d0e
        ;   XREF to: 004c0d20 (CONDITIONAL_JUMP)  ; LAB_004c0d20
    MOV AL,byte ptr [ESI + 0x1]         ; 004c0d10
    ADD ESI,0x2                         ; 004c0d13
    MOV byte ptr [EDI + 0x1],AL         ; 004c0d16
    ADD EDI,0x2                         ; 004c0d19
    CMP AL,0x0                          ; 004c0d1c
    JNZ 0x004c0d08                      ; 004c0d1e
        ;   XREF to: 004c0d08 (CONDITIONAL_JUMP)  ; LAB_004c0d08
    POP EDI                             ; 004c0d20
        ;   Label: LAB_004c0d20
    MOV EDX,dword ptr [EBX]             ; 004c0d21
    LEA EAX,[EDX*0x4 + 0x0]             ; 004c0d23
    ADD EAX,EDX                         ; 004c0d2a
    SHL EAX,0x4                         ; 004c0d2c
    ADD EAX,ECX                         ; 004c0d2f
    PUSH EAX                            ; 004c0d31
    CALL crt_string.c_strupr_FUN_005c2c20 ; 004c0d32
        ;   XREF to: 005c2c20 (UNCONDITIONAL_CALL)  ; char * crt_string.c_strupr_FUN_005c2c20(char * string)
    ADD ESP,0x4                         ; 004c0d37
    MOV EDX,dword ptr [ESP + 0x474]     ; 004c0d3a
    MOV EDI,dword ptr [ESP + 0x478]     ; 004c0d41
    MOV ESI,EDX                         ; 004c0d48
    IMUL ESI,EDI                        ; 004c0d4a
    PUSH EBP                            ; 004c0d4d
    MOV EAX,dword ptr [EBX]             ; 004c0d4e
    PUSH 0x5e07ca                       ; 004c0d50 | DAT_005e07ca
    MOV dword ptr [EBX + EAX*0x4 + 0x1a4],EDX ; 004c0d55
    CALL engine_dosio.cpp_getFileSize_FUN_00478fb0 ; 004c0d5c
        ;   XREF to: 00478fb0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFileSize_FUN_00478fb0(char * directory, char * filename)
    ADD ESP,0x8                         ; 004c0d61
    CMP EAX,ESI                         ; 004c0d64
    JGE 0x004c0d9b                      ; 004c0d66
        ;   XREF to: 004c0d9b (CONDITIONAL_JUMP)  ; LAB_004c0d9b
    PUSH EBP                            ; 004c0d68
    PUSH 0x5e07ce                       ; 004c0d69 | = "Invalid font file size (%s)."
    LEA EAX,[ESP + 0x8]                 ; 004c0d6e
    PUSH EAX                            ; 004c0d72
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 004c0d73
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    MOV EAX,0x5e07eb                    ; 004c0d78 | = "..\\engine\\font.cpp"
    ADD ESP,0xc                         ; 004c0d7d
    MOV [0x01d1d400],EAX                ; 004c0d80 | DAT_01d1d400
    MOV EAX,ESP                         ; 004c0d85
    MOV EDX,0x10f                       ; 004c0d87
    PUSH EAX                            ; 004c0d8c
    MOV dword ptr [0x01d1d404],EDX      ; 004c0d8d | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004c0d93
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004c0d98
    PUSH ESI                            ; 004c0d9b
        ;   Label: LAB_004c0d9b
    CALL crt_memory.c_operator_new_array_FUN_005c1268 ; 004c0d9c
        ;   XREF to: 005c1268 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_array_FUN_005c1268()
    MOV EDX,dword ptr [EBX]             ; 004c0da1
    MOV dword ptr [EBX + EDX*0x4 + 0x194],EAX ; 004c0da3
    MOV EAX,dword ptr [EBX]             ; 004c0daa
    MOV ECX,dword ptr [EBX + EAX*0x4 + 0x194] ; 004c0dac
    ADD ESP,0x4                         ; 004c0db3
    TEST ECX,ECX                        ; 004c0db6
    JNZ 0x004c0ded                      ; 004c0db8
        ;   XREF to: 004c0ded (CONDITIONAL_JUMP)  ; LAB_004c0ded
    PUSH EBP                            ; 004c0dba
    PUSH 0x5e07fe                       ; 004c0dbb | = "Unable to allocate memory for font bi..."
    LEA EAX,[ESP + 0x8]                 ; 004c0dc0
    PUSH EAX                            ; 004c0dc4
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 004c0dc5
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    MOV EAX,0x117                       ; 004c0dca
    ADD ESP,0xc                         ; 004c0dcf
    MOV [0x01d1d404],EAX                ; 004c0dd2 | DAT_01d1d404
    MOV EAX,ESP                         ; 004c0dd7
    MOV EDI,0x5e082e                    ; 004c0dd9 | = "..\\engine\\font.cpp"
    PUSH EAX                            ; 004c0dde
    MOV dword ptr [0x01d1d400],EDI      ; 004c0ddf | DAT_01d1d400
    CALL core_main.c_FUN_005030e0       ; 004c0de5
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004c0dea
    MOV EAX,dword ptr [EBX]             ; 004c0ded
        ;   Label: LAB_004c0ded
    PUSH ESI                            ; 004c0def
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0x194] ; 004c0df0
    PUSH EDX                            ; 004c0df7
    PUSH EBP                            ; 004c0df8
    CALL cockpit_ckptutil.c_FUN_0043b2e0 ; 004c0df9
        ;   XREF to: 0043b2e0 (UNCONDITIONAL_CALL)  ; void * cockpit_ckptutil.c_FUN_0043b2e0(char * filename, void * buffer, int size)
    ADD ESP,0xc                         ; 004c0dfe
    PUSH 0x0                            ; 004c0e01
    LEA EAX,[ESP + 0x330]               ; 004c0e03
    PUSH EAX                            ; 004c0e0a
    LEA EAX,[ESP + 0x234]               ; 004c0e0b
    PUSH EAX                            ; 004c0e12
    PUSH 0x0                            ; 004c0e13
    PUSH EBP                            ; 004c0e15
    CALL engine_dosio.cpp_splitPath_FUN_00479580 ; 004c0e16
        ;   XREF to: 00479580 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_splitPath_FUN_00479580(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 004c0e1b
    PUSH 0x5e0841                       ; 004c0e1e | DAT_005e0841
    LEA EAX,[ESP + 0x330]               ; 004c0e23
    PUSH EAX                            ; 004c0e2a
    LEA EAX,[ESP + 0x234]               ; 004c0e2b
    PUSH EAX                            ; 004c0e32
    PUSH 0x0                            ; 004c0e33
    LEA EAX,[ESP + 0x13c]               ; 004c0e35
    PUSH EAX                            ; 004c0e3c
    CALL engine_dosio.cpp_makePath_FUN_004795b0 ; 004c0e3d
        ;   XREF to: 004795b0 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_makePath_FUN_004795b0(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 004c0e42
    LEA EAX,[ESP + 0x42c]               ; 004c0e45
    PUSH EAX                            ; 004c0e4c
    CALL unkclass_instream.cpp_CInStreamFile_ctor_FUN_005a08d0 ; 004c0e4d
        ;   XREF to: 005a08d0 (UNCONDITIONAL_CALL)  ; CInStreamFile * unkclass_instream.cpp_CInStreamFile_ctor_FUN_005a08d0(CInStreamFile * this_ptr)
    ADD ESP,0x4                         ; 004c0e52
    PUSH 0x1                            ; 004c0e55
    LEA EAX,[ESP + 0x130]               ; 004c0e57
    PUSH EAX                            ; 004c0e5e
    PUSH 0x5e0845                       ; 004c0e5f | DAT_005e0845
    LEA EAX,[ESP + 0x438]               ; 004c0e64
    PUSH EAX                            ; 004c0e6b
    CALL support_trstream.cpp_CInStreamFile_openInDirectory_FUN_005a0fd0 ; 004c0e6c
        ;   XREF to: 005a0fd0 (UNCONDITIONAL_CALL)  ; undefined4 support_trstream.cpp_CInStreamFile_openInDirectory_FUN_005a0fd0(CInStreamFile * this_ptr, undefined4 param_2, undefined4 param_3, int param_4)
    ADD ESP,0x10                        ; 004c0e71
    TEST EAX,EAX                        ; 004c0e74
    JZ 0x004c0f6d                       ; 004c0e76
        ;   XREF to: 004c0f6d (CONDITIONAL_JUMP)  ; LAB_004c0f6d
    XOR ESI,ESI                         ; 004c0e7c
    LEA EAX,[ESP + 0x42c]               ; 004c0e7e
        ;   Label: LAB_004c0e7e
    PUSH EAX                            ; 004c0e85
    CALL unkaddr_0059f520.cpp_CInStreamFile_getChar_FUN_005a0ab0 ; 004c0e86
        ;   XREF to: 005a0ab0 (UNCONDITIONAL_CALL)  ; int unkaddr_0059f520.cpp_CInStreamFile_getChar_FUN_005a0ab0(CInStreamFile * this_ptr)
    IMUL EDX,dword ptr [EBX],0x300      ; 004c0e8b
    ADD EDX,EBX                         ; 004c0e91
    ADD ESP,0x4                         ; 004c0e93
    MOV byte ptr [EDX + ESI*0x1 + 0x1b4],AL ; 004c0e96
    LEA EAX,[ESP + 0x42c]               ; 004c0e9d
    PUSH EAX                            ; 004c0ea4
    CALL unkaddr_0059f520.cpp_CInStreamFile_getChar_FUN_005a0ab0 ; 004c0ea5
        ;   XREF to: 005a0ab0 (UNCONDITIONAL_CALL)  ; int unkaddr_0059f520.cpp_CInStreamFile_getChar_FUN_005a0ab0(CInStreamFile * this_ptr)
    IMUL EDX,dword ptr [EBX],0x300      ; 004c0eaa
    ADD EDX,EBX                         ; 004c0eb0
    ADD ESP,0x4                         ; 004c0eb2
    MOV byte ptr [EDX + ESI*0x1 + 0x1b5],AL ; 004c0eb5
    LEA EAX,[ESP + 0x42c]               ; 004c0ebc
    PUSH EAX                            ; 004c0ec3
    CALL unkaddr_0059f520.cpp_CInStreamFile_getChar_FUN_005a0ab0 ; 004c0ec4
        ;   XREF to: 005a0ab0 (UNCONDITIONAL_CALL)  ; int unkaddr_0059f520.cpp_CInStreamFile_getChar_FUN_005a0ab0(CInStreamFile * this_ptr)
    IMUL EDX,dword ptr [EBX],0x300      ; 004c0ec9
    ADD ESI,0x3                         ; 004c0ecf
    ADD EDX,EBX                         ; 004c0ed2
    ADD ESP,0x4                         ; 004c0ed4
    MOV byte ptr [EDX + ESI*0x1 + 0x1b3],AL ; 004c0ed7
    CMP ESI,0x300                       ; 004c0ede
    JNZ 0x004c0e7e                      ; 004c0ee4
        ;   XREF to: 004c0e7e (CONDITIONAL_JUMP)  ; LAB_004c0e7e
    LEA EAX,[ESP + 0x42c]               ; 004c0ee6
    PUSH EAX                            ; 004c0eed
    CALL unkaddr_0059f520.cpp_CInStreamFile_close_FUN_005a0dc0 ; 004c0eee
        ;   XREF to: 005a0dc0 (UNCONDITIONAL_CALL)  ; undefined4 unkaddr_0059f520.cpp_CInStreamFile_close_FUN_005a0dc0(CInStreamFile * this_ptr)
    ADD ESP,0x4                         ; 004c0ef3
    MOV ESI,dword ptr [ESP + 0x47c]     ; 004c0ef6
        ;   Label: LAB_004c0ef6
    PUSH ESI                            ; 004c0efd
    MOV EDI,dword ptr [ESP + 0x47c]     ; 004c0efe
    PUSH EDI                            ; 004c0f05
    MOV EBP,dword ptr [ESP + 0x47c]     ; 004c0f06
    PUSH EBP                            ; 004c0f0d
    MOV EAX,dword ptr [EBX]             ; 004c0f0e
    PUSH EAX                            ; 004c0f10
    PUSH EBX                            ; 004c0f11
    CALL engine_font.cpp_FUN_004c18c0   ; 004c0f12
        ;   XREF to: 004c18c0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004c18c0()
    MOV EDX,dword ptr [EBX]             ; 004c0f17
    ADD ESP,0x14                        ; 004c0f19
    INC EDX                             ; 004c0f1c
    PUSH EBX                            ; 004c0f1d
    MOV dword ptr [EBX],EDX             ; 004c0f1e
    CALL engine_font.cpp_CBitFont_remapPalette_FUN_004c45e0 ; 004c0f20
        ;   XREF to: 004c45e0 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_remapPalette_FUN_004c45e0(CBitFont * this_ptr)
    ADD ESP,0x4                         ; 004c0f25
    PUSH 0x0                            ; 004c0f28
    LEA EAX,[ESP + 0x430]               ; 004c0f2a
    PUSH EAX                            ; 004c0f31
    CALL unkclass_instream.cpp_CInStreamFile_dtor_FUN_005a0a50 ; 004c0f32
        ;   XREF to: 005a0a50 (UNCONDITIONAL_CALL)  ; CInStreamFile * unkclass_instream.cpp_CInStreamFile_dtor_FUN_005a0a50(CInStreamFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004c0f37
    ADD ESP,0x458                       ; 004c0f3a
    POP EBP                             ; 004c0f40
    POP EDI                             ; 004c0f41
    POP ESI                             ; 004c0f42
    POP EBX                             ; 004c0f43
    RET                                 ; 004c0f44
    MOV ECX,0x5e07a6                    ; 004c0f45 | = "..\\engine\\font.cpp"
        ;   Label: LAB_004c0f45
    MOV ESI,0xfa                        ; 004c0f4a
    PUSH 0x5e07b9                       ; 004c0f4f | = "Too many bitmaps"
    MOV dword ptr [0x01d1d400],ECX      ; 004c0f54 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 004c0f5a | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004c0f60
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004c0f65
    JMP 0x004c0cf1                      ; 004c0f68
        ;   XREF to: 004c0cf1 (UNCONDITIONAL_JUMP)  ; LAB_004c0cf1
    LEA EAX,[ESP + 0x12c]               ; 004c0f6d
        ;   Label: LAB_004c0f6d
    PUSH EAX                            ; 004c0f74
    MOV ECX,0x5e0849                    ; 004c0f75 | = "..\\engine\\font.cpp"
    MOV ESI,0x128                       ; 004c0f7a
    PUSH 0x5e085c                       ; 004c0f7f | = "CBitFont::addBitmap - File not found ..."
    MOV dword ptr [0x01d1d400],ECX      ; 004c0f84 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 004c0f8a | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004c0f90
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 004c0f95
    JMP 0x004c0ef6                      ; 004c0f98
        ;   XREF to: 004c0ef6 (UNCONDITIONAL_JUMP)  ; LAB_004c0ef6

