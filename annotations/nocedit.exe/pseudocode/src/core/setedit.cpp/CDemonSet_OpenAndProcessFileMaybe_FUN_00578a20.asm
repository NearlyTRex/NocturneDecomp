; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_setedit_cpp_CDemonSet_OpenAndProcessFileMaybe_FUN_00578a20(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x4d8]:1  local_4d8
; undefined1       Stack[-0x3d8]:1  local_3d8
; undefined1       Stack[-0x3d7]:1  local_3d7
; undefined1       Stack[-0x2d8]:1  local_2d8
; undefined1       Stack[-0x1d8]:1  local_1d8
; undefined1       Stack[-0xd8]:1  local_d8
;
; XREF[1]:
;   core_setedit.cpp_CDemonSet_showEditorMenu_FUN_00584940 at 00584b6c
;
; Referenced Globals:
;   TerminatedCString s_models_00646ad9
;   undefined4 s_odels_00646ada
;   undefined4 s_dels_00646adb
;   undefined4 s_els_00646adc
;   TerminatedCString s_s3d_00646ae0
;   TerminatedCString s_Import_set_00646ae6
;   TerminatedCString s_core_setedit_cpp_00646af1
;   TerminatedCString s_rt_00646b05
;   TerminatedCString s_Can_t_open_s_00646b08
;   TerminatedCString s_geo_00646b16
;   TerminatedCString s_a3d_00646b1a
;   TerminatedCString s_s3d_00646b1e
;   TerminatedCString s_core_setedit_cpp_00646b22
;   TerminatedCString s_Can_t_decide_how_to_proc_00646b36
;   TerminatedCString s_core_setedit_cpp_00646b6b
;   ... and 8 more
;
; Called Functions:
;   core_setedit.cpp_CDemonSet_importS3D_FUN_00578d80
;   core_setedit.cpp_ImportA3DBroken_FUN_00578c60
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   crt_stdio.c_remove_FUN_005ff9d0
;   crt_string.c_stricmp_FUN_005fe7f0
;   engine_2d.c_drawText_FUN_00401fd0
;   engine_dosio.c_makePath_FUN_00481f50
;   engine_dosio.c_splitPath_FUN_00481f20
;   engine_keys.cpp_CKeys_getInputKey_FUN_00502460
;   shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   shape_memdbg.cpp_openFile_FUN_0050f7a0
;   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
;   wincore_windll.cpp_clearScreen_FUN_005b3e70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00578a20
        ;   Label: core_setedit.cpp_CDemonSet_OpenAndProcessFileMaybe_FUN_00578a20
    PUSH ESI                            ; 00578a21
    PUSH EDI                            ; 00578a22
    PUSH EBP                            ; 00578a23
    SUB ESP,0x4c8                       ; 00578a24
    MOV EBP,dword ptr [ESP + 0x4dc]     ; 00578a2a
    MOV ESI,0x646ad9                    ; 00578a31 | = "models"
    LEA EDI,[ESP + 0x100]               ; 00578a36
    PUSH EDI                            ; 00578a3d
    MOV AL,byte ptr [ESI]               ; 00578a3e | = "models" | s_dels_00646adb
        ;   Label: LAB_00578a3e
    MOV byte ptr [EDI],AL               ; 00578a40
    CMP AL,0x0                          ; 00578a42
    JZ 0x00578a56                       ; 00578a44
        ;   XREF to: 00578a56 (CONDITIONAL_JUMP)  ; LAB_00578a56
    MOV AL,byte ptr [ESI + 0x1]         ; 00578a46 | s_odels_00646ada | s_els_00646adc
    ADD ESI,0x2                         ; 00578a49
    MOV byte ptr [EDI + 0x1],AL         ; 00578a4c
    ADD EDI,0x2                         ; 00578a4f
    CMP AL,0x0                          ; 00578a52
    JNZ 0x00578a3e                      ; 00578a54
        ;   XREF to: 00578a3e (CONDITIONAL_JUMP)  ; LAB_00578a3e
    POP EDI                             ; 00578a56
        ;   Label: LAB_00578a56
    PUSH 0x1                            ; 00578a57
    LEA EAX,[ESP + 0x104]               ; 00578a59
    PUSH EAX                            ; 00578a60
    PUSH 0x646ae0                       ; 00578a61 | = "*.s3d"
    PUSH 0x646ae6                       ; 00578a66 | = "Import set"
    MOV EDX,dword ptr [0x00678a60]      ; 00578a6b | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EDX                            ; 00578a71 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420 ; 00578a72
        ;   XREF to: 0049f420 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420(CEditorTools * this_ptr, char * file_pattern, int include_files, char * initial_path)
    ADD ESP,0x14                        ; 00578a77
    TEST EAX,EAX                        ; 00578a7a
    JNZ 0x00578a89                      ; 00578a7c
        ;   XREF to: 00578a89 (CONDITIONAL_JUMP)  ; LAB_00578a89
    ADD ESP,0x4c8                       ; 00578a7e
    POP EBP                             ; 00578a84
    POP EDI                             ; 00578a85
    POP ESI                             ; 00578a86
    POP EBX                             ; 00578a87
    RET                                 ; 00578a88
    PUSH 0x36c                          ; 00578a89
        ;   Label: LAB_00578a89
    PUSH 0x646af1                       ; 00578a8e | = "..\\core\\setedit.cpp"
    PUSH 0x646b05                       ; 00578a93 | = "rt"
    PUSH 0x0                            ; 00578a98
    LEA EAX,[ESP + 0x110]               ; 00578a9a
    PUSH EAX                            ; 00578aa1
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 00578aa2
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; _FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    ADD ESP,0x14                        ; 00578aa7
    MOV EBX,EAX                         ; 00578aaa
    TEST EAX,EAX                        ; 00578aac
    JZ 0x00578ba4                       ; 00578aae
        ;   XREF to: 00578ba4 (CONDITIONAL_JUMP)  ; LAB_00578ba4
    MOV EAX,ESP                         ; 00578ab4
    PUSH EAX                            ; 00578ab6
    LEA EAX,[ESP + 0x204]               ; 00578ab7
    PUSH EAX                            ; 00578abe
    PUSH 0x0                            ; 00578abf
    PUSH 0x0                            ; 00578ac1
    LEA EAX,[ESP + 0x110]               ; 00578ac3
    PUSH EAX                            ; 00578aca
    CALL engine_dosio.c_splitPath_FUN_00481f20 ; 00578acb
        ;   XREF to: 00481f20 (UNCONDITIONAL_CALL)  ; void engine_dosio.c_splitPath_FUN_00481f20(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 00578ad0
    PUSH 0x646b16                       ; 00578ad3 | = "geo"
    LEA EAX,[ESP + 0x204]               ; 00578ad8
    PUSH EAX                            ; 00578adf
    PUSH 0x0                            ; 00578ae0
    PUSH 0x0                            ; 00578ae2
    LEA EAX,[EBP + 0x14d0f0]            ; 00578ae4
    PUSH EAX                            ; 00578aea
    CALL engine_dosio.c_makePath_FUN_00481f50 ; 00578aeb
        ;   XREF to: 00481f50 (UNCONDITIONAL_CALL)  ; void engine_dosio.c_makePath_FUN_00481f50(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 00578af0
    MOV AH,byte ptr [ESP]               ; 00578af3
    MOV ESI,ESP                         ; 00578af6
    CMP AH,0x2e                         ; 00578af8
    JNZ 0x00578afe                      ; 00578afb
        ;   XREF to: 00578afe (CONDITIONAL_JUMP)  ; LAB_00578afe
    INC ESI                             ; 00578afd
    PUSH 0x646b1a                       ; 00578afe | = "a3d"
        ;   Label: LAB_00578afe
    PUSH ESI                            ; 00578b03
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 00578b04
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 00578b09
    TEST EAX,EAX                        ; 00578b0c
    JNZ 0x00578bf9                      ; 00578b0e
        ;   XREF to: 00578bf9 (CONDITIONAL_JUMP)  ; LAB_00578bf9
    PUSH EBX                            ; 00578b14
    PUSH EBP                            ; 00578b15
    CALL core_setedit.cpp_ImportA3DBroken_FUN_00578c60 ; 00578b16
        ;   XREF to: 00578c60 (UNCONDITIONAL_CALL)  ; void core_setedit.cpp_ImportA3DBroken_FUN_00578c60()
    ADD ESP,0x8                         ; 00578b1b
        ;   Label: LAB_00578b1b
    PUSH 0x399                          ; 00578b1e
    PUSH 0x646b6b                       ; 00578b23 | = "..\\core\\setedit.cpp"
    PUSH EBX                            ; 00578b28
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 00578b29
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 00578b2e
    PUSH 0x646b7f                       ; 00578b31 | = "zth"
    LEA EAX,[ESP + 0x204]               ; 00578b36
    PUSH EAX                            ; 00578b3d
    PUSH 0x646b83                       ; 00578b3e | = "data"
    PUSH 0x0                            ; 00578b43
    LEA EAX,[ESP + 0x310]               ; 00578b45
    PUSH EAX                            ; 00578b4c
    CALL engine_dosio.c_makePath_FUN_00481f50 ; 00578b4d
        ;   XREF to: 00481f50 (UNCONDITIONAL_CALL)  ; void engine_dosio.c_makePath_FUN_00481f50(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 00578b52
    LEA EAX,[ESP + 0x300]               ; 00578b55
    PUSH EAX                            ; 00578b5c
    CALL crt_stdio.c_remove_FUN_005ff9d0 ; 00578b5d
        ;   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_remove_FUN_005ff9d0(char * filename)
    ADD ESP,0x4                         ; 00578b62
    PUSH 0x646b88                       ; 00578b65 | = "thm"
    LEA EAX,[ESP + 0x204]               ; 00578b6a
    PUSH EAX                            ; 00578b71
    PUSH 0x646b8c                       ; 00578b72 | = "data"
    PUSH 0x0                            ; 00578b77
    LEA EAX,[ESP + 0x310]               ; 00578b79
    PUSH EAX                            ; 00578b80
    CALL engine_dosio.c_makePath_FUN_00481f50 ; 00578b81
        ;   XREF to: 00481f50 (UNCONDITIONAL_CALL)  ; void engine_dosio.c_makePath_FUN_00481f50(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 00578b86
    LEA EAX,[ESP + 0x300]               ; 00578b89
    PUSH EAX                            ; 00578b90
    CALL crt_stdio.c_remove_FUN_005ff9d0 ; 00578b91
        ;   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_remove_FUN_005ff9d0(char * filename)
    ADD ESP,0x4                         ; 00578b96
    ADD ESP,0x4c8                       ; 00578b99
    POP EBP                             ; 00578b9f
    POP EDI                             ; 00578ba0
    POP ESI                             ; 00578ba1
    POP EBX                             ; 00578ba2
    RET                                 ; 00578ba3
    LEA EAX,[ESP + 0x100]               ; 00578ba4
        ;   Label: LAB_00578ba4
    PUSH EAX                            ; 00578bab
    PUSH 0x646b08                       ; 00578bac | = "Can't open %s"
    LEA EAX,[ESP + 0x408]               ; 00578bb1
    PUSH EAX                            ; 00578bb8
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 00578bb9
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 00578bbe
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 00578bc1
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    PUSH 0x0                            ; 00578bc6
    PUSH 0x0                            ; 00578bc8
    LEA EAX,[ESP + 0x408]               ; 00578bca
    PUSH EAX                            ; 00578bd1
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00578bd2
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00578bd7
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 00578bda
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    MOV EBX,dword ptr [0x0067cf44]      ; 00578bdf | g_CKeysInstance | g_CKeysPtr
    PUSH EBX                            ; 00578be5 | g_CKeysInstance
    CALL engine_keys.cpp_CKeys_getInputKey_FUN_00502460 ; 00578be6
        ;   XREF to: 00502460 (UNCONDITIONAL_CALL)  ; int engine_keys.cpp_CKeys_getInputKey_FUN_00502460(CKeys * this_ptr)
    ADD ESP,0x4                         ; 00578beb
    ADD ESP,0x4c8                       ; 00578bee
    POP EBP                             ; 00578bf4
    POP EDI                             ; 00578bf5
    POP ESI                             ; 00578bf6
    POP EBX                             ; 00578bf7
    RET                                 ; 00578bf8
    PUSH 0x646b1e                       ; 00578bf9 | = "s3d"
        ;   Label: LAB_00578bf9
    PUSH ESI                            ; 00578bfe
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 00578bff
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 00578c04
    TEST EAX,EAX                        ; 00578c07
    JNZ 0x00578c17                      ; 00578c09
        ;   XREF to: 00578c17 (CONDITIONAL_JUMP)  ; LAB_00578c17
    PUSH EBX                            ; 00578c0b
    PUSH EBP                            ; 00578c0c
    CALL core_setedit.cpp_CDemonSet_importS3D_FUN_00578d80 ; 00578c0d
        ;   XREF to: 00578d80 (UNCONDITIONAL_CALL)  ; void core_setedit.cpp_CDemonSet_importS3D_FUN_00578d80(CDemonSet * this_ptr)
    JMP 0x00578b1b                      ; 00578c12
        ;   XREF to: 00578b1b (UNCONDITIONAL_JUMP)  ; LAB_00578b1b
    PUSH 0x38f                          ; 00578c17
        ;   Label: LAB_00578c17
    PUSH 0x646b22                       ; 00578c1c | = "..\\core\\setedit.cpp"
    PUSH EBX                            ; 00578c21
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 00578c22
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 00578c27
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 00578c2a
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    PUSH 0x0                            ; 00578c2f
    PUSH 0x0                            ; 00578c31
    PUSH 0x646b36                       ; 00578c33 | = "Can't decide how to process file base..."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00578c38
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00578c3d
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 00578c40
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    MOV ECX,dword ptr [0x0067cf44]      ; 00578c45 | g_CKeysInstance | g_CKeysPtr
    PUSH ECX                            ; 00578c4b | g_CKeysInstance
    CALL engine_keys.cpp_CKeys_getInputKey_FUN_00502460 ; 00578c4c
        ;   XREF to: 00502460 (UNCONDITIONAL_CALL)  ; int engine_keys.cpp_CKeys_getInputKey_FUN_00502460(CKeys * this_ptr)
    ADD ESP,0x4                         ; 00578c51
    ADD ESP,0x4c8                       ; 00578c54
    POP EBP                             ; 00578c5a
    POP EDI                             ; 00578c5b
    POP ESI                             ; 00578c5c
    POP EBX                             ; 00578c5d
    RET                                 ; 00578c5e

