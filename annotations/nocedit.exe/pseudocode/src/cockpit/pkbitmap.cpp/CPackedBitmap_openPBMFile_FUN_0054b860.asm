; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void cockpit_pkbitmap.cpp_CPackedBitmap_openPBMFile_FUN_0054b860(CPackedBitmap * this_ptr, char * filename, int post_load_processing)
;
; Parameters:
; CPackedBitmap *  Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
; int              Stack[0xc]:4   post_load_processing
; Local Variables:
; undefined        Stack[-0x6c]:1  local_6c
;
; XREF[2]:
;   cockpit_pkbitmap.cpp_CPackedBitmap_loadStoredPBMFile_FUN_0054b910 at 0054b91b
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadPBMFileRange_FUN_0054c3d0 at 0054c44c
;
; Referenced Globals:
;   TerminatedCString s_rb_0063f1fe
;   TerminatedCString s_art_0063f201
;   TerminatedCString s_Unable_to_open_PBM_file__0063f205
;   TerminatedCString s_cockpit_pkbitmap_cpp_0063f220
;   TerminatedCString s_cockpit_pkbitmap_cpp_0063f238
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   cockpit_pkbitmap.cpp_CPackedBitmap_applyPalette_FUN_0054b4a0
;   cockpit_pkbitmap.cpp_CPackedBitmap_free_FUN_0054a8e0
;   cockpit_pkbitmap.cpp_CPackedBitmap_readPBMFile_FUN_0054b690
;   cockpit_pkbitmap.cpp_CPackedBitmap_setFilename_FUN_0054a990
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   engine_dosio.c_getFile_FUN_00481a50
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054b860
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_openPBMFile_FUN_0054b860
    PUSH ESI                            ; 0054b861
    SUB ESP,0x64                        ; 0054b862
    MOV EBX,dword ptr [ESP + 0x70]      ; 0054b865
    PUSH EBX                            ; 0054b869
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_free_FUN_0054a8e0 ; 0054b86a
        ;   XREF to: 0054a8e0 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_free_FUN_0054a8e0(CPackedBitmap * this_ptr)
    ADD ESP,0x4                         ; 0054b86f
    MOV EDX,dword ptr [ESP + 0x74]      ; 0054b872
    PUSH EDX                            ; 0054b876
    PUSH EBX                            ; 0054b877
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_setFilename_FUN_0054a990 ; 0054b878
        ;   XREF to: 0054a990 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_setFilename_FUN_0054a990(CPackedBitmap * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0054b87d
    PUSH 0x63f1fe                       ; 0054b880 | = "rb"
    PUSH EBX                            ; 0054b885
    PUSH 0x63f201                       ; 0054b886 | = "art"
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 0054b88b
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0054b890
    MOV ESI,EAX                         ; 0054b893
    TEST EAX,EAX                        ; 0054b895
    JNZ 0x0054b8d1                      ; 0054b897
        ;   XREF to: 0054b8d1 (CONDITIONAL_JUMP)  ; LAB_0054b8d1
    PUSH EDI                            ; 0054b899
    PUSH EBX                            ; 0054b89a
    PUSH 0x63f205                       ; 0054b89b | = "Unable to open PBM file %s"
    LEA EAX,[ESP + 0xc]                 ; 0054b8a0
    PUSH EAX                            ; 0054b8a4
    MOV EDI,0x4fc                       ; 0054b8a5
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0054b8aa
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0054b8af
    LEA EAX,[ESP + 0x4]                 ; 0054b8b2
    MOV ECX,0x63f220                    ; 0054b8b6 | = "..\\cockpit\\pkbitmap.cpp"
    PUSH EAX                            ; 0054b8bb
    MOV dword ptr [0x02f0ca4c],EDI      ; 0054b8bc | g_CurrentLineNumber
    MOV dword ptr [0x02f0ca48],ECX      ; 0054b8c2 | g_CurrentFilename
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0054b8c8
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0054b8cd
    POP EDI                             ; 0054b8d0
    PUSH 0x0                            ; 0054b8d1
        ;   Label: LAB_0054b8d1
    PUSH ESI                            ; 0054b8d3
    PUSH EBX                            ; 0054b8d4
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_readPBMFile_FUN_0054b690 ; 0054b8d5
        ;   XREF to: 0054b690 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_readPBMFile_FUN_0054b690(CPackedBitmap * this_ptr, FILE * file_handle, int skip_data_load)
    ADD ESP,0xc                         ; 0054b8da
    PUSH 0x500                          ; 0054b8dd
    PUSH 0x63f238                       ; 0054b8e2 | = "..\\cockpit\\pkbitmap.cpp"
    PUSH ESI                            ; 0054b8e7
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0054b8e8
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 0054b8ed
    CMP dword ptr [ESP + 0x78],0x0      ; 0054b8f0
    JNZ 0x0054b8fd                      ; 0054b8f5
        ;   XREF to: 0054b8fd (CONDITIONAL_JUMP)  ; LAB_0054b8fd
    ADD ESP,0x64                        ; 0054b8f7
    POP ESI                             ; 0054b8fa
    POP EBX                             ; 0054b8fb
    RET                                 ; 0054b8fc
    PUSH EBX                            ; 0054b8fd
        ;   Label: LAB_0054b8fd
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_applyPalette_FUN_0054b4a0 ; 0054b8fe
        ;   XREF to: 0054b4a0 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_applyPalette_FUN_0054b4a0(CPackedBitmap * this_ptr)
    ADD ESP,0x4                         ; 0054b903
    ADD ESP,0x64                        ; 0054b906
    POP ESI                             ; 0054b909
    POP EBX                             ; 0054b90a
    RET                                 ; 0054b90b

