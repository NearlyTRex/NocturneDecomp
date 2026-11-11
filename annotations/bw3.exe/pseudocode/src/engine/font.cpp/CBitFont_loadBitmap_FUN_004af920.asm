; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_font_cpp_CBitFont_loadBitmap_FUN_004af920(CBitFont *this_ptr,char *filename,int width,int height,int first_char)
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
;   engine_font.cpp_CBitFont_loadNewBitmap_FUN_004b0190 at 004b01bf
;
; Referenced Globals:
;   TerminatedCString s_engine_font_cpp_005c1dc4
;   TerminatedCString s_Too_many_bitmaps_005c1dd7
;   undefined4 DAT_005c1de8
;   TerminatedCString s_Invalid_font_file_size_s_005c1dec
;   TerminatedCString s_engine_font_cpp_005c1e09
;   TerminatedCString s_Unable_to_allocate_memor_005c1e1c
;   TerminatedCString s_engine_font_cpp_005c1e4c
;   undefined4 DAT_005c1e5f
;   undefined4 DAT_005c1e63
;   TerminatedCString s_engine_font_cpp_005c1e67
;   TerminatedCString s_CBitFont_addBitmap_File_005c1e7a
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   cockpit_ckptutil.c_FUN_00438ef0
;   core_main.c_FUN_004e4330
;   crt_memory.c_operator_new_array_FUN_005a40df
;   crt_string.c_strupr_FUN_005a5b10
;   crt_unknown.c_sprintf_FUN_005a28c0
;   engine_dosio.cpp_getFileSize_FUN_004657f0
;   engine_dosio.cpp_makePath_FUN_00465e80
;   engine_dosio.cpp_splitPath_FUN_00465e50
;   engine_font.cpp_CBitFont_remapPalette_FUN_004b31c0
;   engine_font.cpp_FUN_004b0510
;   support_trstream.cpp_CInStreamFile_openInDirectory_FUN_00573fc0
;   unkafter_turret.cpp_CInStreamFile_close_FUN_00573db0
;   unkafter_turret.cpp_CInStreamFile_ctor_FUN_005738c0
;   unkafter_turret.cpp_CInStreamFile_dtor_FUN_00573a40
;   unkafter_turret.cpp_CInStreamFile_getChar_FUN_00573aa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004af920
        ;   Label: engine_font.cpp_CBitFont_loadBitmap_FUN_004af920
    PUSH ESI                            ; 004af921
    PUSH EDI                            ; 004af922
    PUSH EBP                            ; 004af923
    SUB ESP,0x458                       ; 004af924
    MOV EBX,dword ptr [ESP + 0x46c]     ; 004af92a
    MOV EBP,dword ptr [ESP + 0x470]     ; 004af931
    CMP dword ptr [EBX],0x4             ; 004af938
    JGE 0x004afb95                      ; 004af93b
        ;   XREF to: 004afb95 (CONDITIONAL_JUMP)  ; LAB_004afb95
    MOV EDX,dword ptr [EBX]             ; 004af941
        ;   Label: LAB_004af941
    LEA EAX,[EDX*0x4 + 0x0]             ; 004af943
    ADD EAX,EDX                         ; 004af94a
    LEA ECX,[EBX + 0x4]                 ; 004af94c
    SHL EAX,0x4                         ; 004af94f
    MOV ESI,EBP                         ; 004af952
    LEA EDI,[ECX + EAX*0x1]             ; 004af954
    PUSH EDI                            ; 004af957
    MOV AL,byte ptr [ESI]               ; 004af958
        ;   Label: LAB_004af958
    MOV byte ptr [EDI],AL               ; 004af95a
    CMP AL,0x0                          ; 004af95c
    JZ 0x004af970                       ; 004af95e
        ;   XREF to: 004af970 (CONDITIONAL_JUMP)  ; LAB_004af970
    MOV AL,byte ptr [ESI + 0x1]         ; 004af960
    ADD ESI,0x2                         ; 004af963
    MOV byte ptr [EDI + 0x1],AL         ; 004af966
    ADD EDI,0x2                         ; 004af969
    CMP AL,0x0                          ; 004af96c
    JNZ 0x004af958                      ; 004af96e
        ;   XREF to: 004af958 (CONDITIONAL_JUMP)  ; LAB_004af958
    POP EDI                             ; 004af970
        ;   Label: LAB_004af970
    MOV EDX,dword ptr [EBX]             ; 004af971
    LEA EAX,[EDX*0x4 + 0x0]             ; 004af973
    ADD EAX,EDX                         ; 004af97a
    SHL EAX,0x4                         ; 004af97c
    ADD EAX,ECX                         ; 004af97f
    PUSH EAX                            ; 004af981
    CALL crt_string.c_strupr_FUN_005a5b10 ; 004af982
        ;   XREF to: 005a5b10 (UNCONDITIONAL_CALL)  ; char * crt_string.c_strupr_FUN_005a5b10(char * string)
    ADD ESP,0x4                         ; 004af987
    MOV EDX,dword ptr [ESP + 0x474]     ; 004af98a
    MOV EDI,dword ptr [ESP + 0x478]     ; 004af991
    MOV ESI,EDX                         ; 004af998
    IMUL ESI,EDI                        ; 004af99a
    PUSH EBP                            ; 004af99d
    MOV EAX,dword ptr [EBX]             ; 004af99e
    PUSH 0x5c1de8                       ; 004af9a0 | DAT_005c1de8
    MOV dword ptr [EBX + EAX*0x4 + 0x1a4],EDX ; 004af9a5
    CALL engine_dosio.cpp_getFileSize_FUN_004657f0 ; 004af9ac
        ;   XREF to: 004657f0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFileSize_FUN_004657f0(char * directory, char * filename)
    ADD ESP,0x8                         ; 004af9b1
    CMP EAX,ESI                         ; 004af9b4
    JGE 0x004af9eb                      ; 004af9b6
        ;   XREF to: 004af9eb (CONDITIONAL_JUMP)  ; LAB_004af9eb
    PUSH EBP                            ; 004af9b8
    PUSH 0x5c1dec                       ; 004af9b9 | = "Invalid font file size (%s)."
    LEA EAX,[ESP + 0x8]                 ; 004af9be
    PUSH EAX                            ; 004af9c2
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004af9c3
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    MOV EAX,0x5c1e09                    ; 004af9c8 | = "..\\engine\\font.cpp"
    ADD ESP,0xc                         ; 004af9cd
    MOV [0x01d71de0],EAX                ; 004af9d0 | DAT_01d71de0
    MOV EAX,ESP                         ; 004af9d5
    MOV EDX,0x10f                       ; 004af9d7
    PUSH EAX                            ; 004af9dc
    MOV dword ptr [0x01d71de4],EDX      ; 004af9dd | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004af9e3
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004af9e8
    PUSH ESI                            ; 004af9eb
        ;   Label: LAB_004af9eb
    CALL crt_memory.c_operator_new_array_FUN_005a40df ; 004af9ec
        ;   XREF to: 005a40df (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_array_FUN_005a40df()
    MOV EDX,dword ptr [EBX]             ; 004af9f1
    MOV dword ptr [EBX + EDX*0x4 + 0x194],EAX ; 004af9f3
    MOV EAX,dword ptr [EBX]             ; 004af9fa
    MOV ECX,dword ptr [EBX + EAX*0x4 + 0x194] ; 004af9fc
    ADD ESP,0x4                         ; 004afa03
    TEST ECX,ECX                        ; 004afa06
    JNZ 0x004afa3d                      ; 004afa08
        ;   XREF to: 004afa3d (CONDITIONAL_JUMP)  ; LAB_004afa3d
    PUSH EBP                            ; 004afa0a
    PUSH 0x5c1e1c                       ; 004afa0b | = "Unable to allocate memory for font bi..."
    LEA EAX,[ESP + 0x8]                 ; 004afa10
    PUSH EAX                            ; 004afa14
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004afa15
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    MOV EAX,0x117                       ; 004afa1a
    ADD ESP,0xc                         ; 004afa1f
    MOV [0x01d71de4],EAX                ; 004afa22 | DAT_01d71de4
    MOV EAX,ESP                         ; 004afa27
    MOV EDI,0x5c1e4c                    ; 004afa29 | = "..\\engine\\font.cpp"
    PUSH EAX                            ; 004afa2e
    MOV dword ptr [0x01d71de0],EDI      ; 004afa2f | DAT_01d71de0
    CALL core_main.c_FUN_004e4330       ; 004afa35
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004afa3a
    MOV EAX,dword ptr [EBX]             ; 004afa3d
        ;   Label: LAB_004afa3d
    PUSH ESI                            ; 004afa3f
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0x194] ; 004afa40
    PUSH EDX                            ; 004afa47
    PUSH EBP                            ; 004afa48
    CALL cockpit_ckptutil.c_FUN_00438ef0 ; 004afa49
        ;   XREF to: 00438ef0 (UNCONDITIONAL_CALL)  ; void * cockpit_ckptutil.c_FUN_00438ef0(char * filename, void * buffer, int size)
    ADD ESP,0xc                         ; 004afa4e
    PUSH 0x0                            ; 004afa51
    LEA EAX,[ESP + 0x330]               ; 004afa53
    PUSH EAX                            ; 004afa5a
    LEA EAX,[ESP + 0x234]               ; 004afa5b
    PUSH EAX                            ; 004afa62
    PUSH 0x0                            ; 004afa63
    PUSH EBP                            ; 004afa65
    CALL engine_dosio.cpp_splitPath_FUN_00465e50 ; 004afa66
        ;   XREF to: 00465e50 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_splitPath_FUN_00465e50(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 004afa6b
    PUSH 0x5c1e5f                       ; 004afa6e | DAT_005c1e5f
    LEA EAX,[ESP + 0x330]               ; 004afa73
    PUSH EAX                            ; 004afa7a
    LEA EAX,[ESP + 0x234]               ; 004afa7b
    PUSH EAX                            ; 004afa82
    PUSH 0x0                            ; 004afa83
    LEA EAX,[ESP + 0x13c]               ; 004afa85
    PUSH EAX                            ; 004afa8c
    CALL engine_dosio.cpp_makePath_FUN_00465e80 ; 004afa8d
        ;   XREF to: 00465e80 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_makePath_FUN_00465e80(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 004afa92
    LEA EAX,[ESP + 0x42c]               ; 004afa95
    PUSH EAX                            ; 004afa9c
    CALL unkafter_turret.cpp_CInStreamFile_ctor_FUN_005738c0 ; 004afa9d
        ;   XREF to: 005738c0 (UNCONDITIONAL_CALL)  ; CInStreamFile * unkafter_turret.cpp_CInStreamFile_ctor_FUN_005738c0(CInStreamFile * this_ptr)
    ADD ESP,0x4                         ; 004afaa2
    PUSH 0x1                            ; 004afaa5
    LEA EAX,[ESP + 0x130]               ; 004afaa7
    PUSH EAX                            ; 004afaae
    PUSH 0x5c1e63                       ; 004afaaf | DAT_005c1e63
    LEA EAX,[ESP + 0x438]               ; 004afab4
    PUSH EAX                            ; 004afabb
    CALL support_trstream.cpp_CInStreamFile_openInDirectory_FUN_00573fc0 ; 004afabc
        ;   XREF to: 00573fc0 (UNCONDITIONAL_CALL)  ; undefined4 support_trstream.cpp_CInStreamFile_openInDirectory_FUN_00573fc0(CInStreamFile * this_ptr, undefined4 param_2, undefined4 param_3, int param_4)
    ADD ESP,0x10                        ; 004afac1
    TEST EAX,EAX                        ; 004afac4
    JZ 0x004afbbd                       ; 004afac6
        ;   XREF to: 004afbbd (CONDITIONAL_JUMP)  ; LAB_004afbbd
    XOR ESI,ESI                         ; 004afacc
    LEA EAX,[ESP + 0x42c]               ; 004aface
        ;   Label: LAB_004aface
    PUSH EAX                            ; 004afad5
    CALL unkafter_turret.cpp_CInStreamFile_getChar_FUN_00573aa0 ; 004afad6
        ;   XREF to: 00573aa0 (UNCONDITIONAL_CALL)  ; int unkafter_turret.cpp_CInStreamFile_getChar_FUN_00573aa0(CInStreamFile * this_ptr)
    IMUL EDX,dword ptr [EBX],0x300      ; 004afadb
    ADD EDX,EBX                         ; 004afae1
    ADD ESP,0x4                         ; 004afae3
    MOV byte ptr [EDX + ESI*0x1 + 0x1b4],AL ; 004afae6
    LEA EAX,[ESP + 0x42c]               ; 004afaed
    PUSH EAX                            ; 004afaf4
    CALL unkafter_turret.cpp_CInStreamFile_getChar_FUN_00573aa0 ; 004afaf5
        ;   XREF to: 00573aa0 (UNCONDITIONAL_CALL)  ; int unkafter_turret.cpp_CInStreamFile_getChar_FUN_00573aa0(CInStreamFile * this_ptr)
    IMUL EDX,dword ptr [EBX],0x300      ; 004afafa
    ADD EDX,EBX                         ; 004afb00
    ADD ESP,0x4                         ; 004afb02
    MOV byte ptr [EDX + ESI*0x1 + 0x1b5],AL ; 004afb05
    LEA EAX,[ESP + 0x42c]               ; 004afb0c
    PUSH EAX                            ; 004afb13
    CALL unkafter_turret.cpp_CInStreamFile_getChar_FUN_00573aa0 ; 004afb14
        ;   XREF to: 00573aa0 (UNCONDITIONAL_CALL)  ; int unkafter_turret.cpp_CInStreamFile_getChar_FUN_00573aa0(CInStreamFile * this_ptr)
    IMUL EDX,dword ptr [EBX],0x300      ; 004afb19
    ADD ESI,0x3                         ; 004afb1f
    ADD EDX,EBX                         ; 004afb22
    ADD ESP,0x4                         ; 004afb24
    MOV byte ptr [EDX + ESI*0x1 + 0x1b3],AL ; 004afb27
    CMP ESI,0x300                       ; 004afb2e
    JNZ 0x004aface                      ; 004afb34
        ;   XREF to: 004aface (CONDITIONAL_JUMP)  ; LAB_004aface
    LEA EAX,[ESP + 0x42c]               ; 004afb36
    PUSH EAX                            ; 004afb3d
    CALL unkafter_turret.cpp_CInStreamFile_close_FUN_00573db0 ; 004afb3e
        ;   XREF to: 00573db0 (UNCONDITIONAL_CALL)  ; undefined4 unkafter_turret.cpp_CInStreamFile_close_FUN_00573db0(CInStreamFile * this_ptr)
    ADD ESP,0x4                         ; 004afb43
    MOV ESI,dword ptr [ESP + 0x47c]     ; 004afb46
        ;   Label: LAB_004afb46
    PUSH ESI                            ; 004afb4d
    MOV EDI,dword ptr [ESP + 0x47c]     ; 004afb4e
    PUSH EDI                            ; 004afb55
    MOV EBP,dword ptr [ESP + 0x47c]     ; 004afb56
    PUSH EBP                            ; 004afb5d
    MOV EAX,dword ptr [EBX]             ; 004afb5e
    PUSH EAX                            ; 004afb60
    PUSH EBX                            ; 004afb61
    CALL engine_font.cpp_FUN_004b0510   ; 004afb62
        ;   XREF to: 004b0510 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0510()
    MOV EDX,dword ptr [EBX]             ; 004afb67
    ADD ESP,0x14                        ; 004afb69
    INC EDX                             ; 004afb6c
    PUSH EBX                            ; 004afb6d
    MOV dword ptr [EBX],EDX             ; 004afb6e
    CALL engine_font.cpp_CBitFont_remapPalette_FUN_004b31c0 ; 004afb70
        ;   XREF to: 004b31c0 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_remapPalette_FUN_004b31c0(CBitFont * this_ptr)
    ADD ESP,0x4                         ; 004afb75
    PUSH 0x0                            ; 004afb78
    LEA EAX,[ESP + 0x430]               ; 004afb7a
    PUSH EAX                            ; 004afb81
    CALL unkafter_turret.cpp_CInStreamFile_dtor_FUN_00573a40 ; 004afb82
        ;   XREF to: 00573a40 (UNCONDITIONAL_CALL)  ; CInStreamFile * unkafter_turret.cpp_CInStreamFile_dtor_FUN_00573a40(CInStreamFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004afb87
    ADD ESP,0x458                       ; 004afb8a
    POP EBP                             ; 004afb90
    POP EDI                             ; 004afb91
    POP ESI                             ; 004afb92
    POP EBX                             ; 004afb93
    RET                                 ; 004afb94
    MOV ECX,0x5c1dc4                    ; 004afb95 | = "..\\engine\\font.cpp"
        ;   Label: LAB_004afb95
    MOV ESI,0xfa                        ; 004afb9a
    PUSH 0x5c1dd7                       ; 004afb9f | = "Too many bitmaps"
    MOV dword ptr [0x01d71de0],ECX      ; 004afba4 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 004afbaa | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004afbb0
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004afbb5
    JMP 0x004af941                      ; 004afbb8
        ;   XREF to: 004af941 (UNCONDITIONAL_JUMP)  ; LAB_004af941
    LEA EAX,[ESP + 0x12c]               ; 004afbbd
        ;   Label: LAB_004afbbd
    PUSH EAX                            ; 004afbc4
    MOV ECX,0x5c1e67                    ; 004afbc5 | = "..\\engine\\font.cpp"
    MOV ESI,0x128                       ; 004afbca
    PUSH 0x5c1e7a                       ; 004afbcf | = "CBitFont::addBitmap - File not found ..."
    MOV dword ptr [0x01d71de0],ECX      ; 004afbd4 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 004afbda | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004afbe0
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 004afbe5
    JMP 0x004afb46                      ; 004afbe8
        ;   XREF to: 004afb46 (UNCONDITIONAL_JUMP)  ; LAB_004afb46

