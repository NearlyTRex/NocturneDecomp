; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void * cockpit_ckptutil.c_readBitmapFile_FUN_00431870(char * filename, void * buffer, int size)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; void *           Stack[0x8]:4   buffer
; int              Stack[0xc]:4   size
; Local Variables:
; undefined1       Stack[-0x60]:1  local_60
;
; XREF[5]:
;   cockpit_ckptutil.c_applyColorPalette_FUN_004319b0 at 0043184a
;   cockpit_ckptutil.c_loadBitmapWithPalette_FUN_004317b0 at 004317cc
;   cockpit_pkbitmap.cpp_CPackedBitmap_loadAndCompressBitmap_FUN_0054b080 at 0054b091
;   cockpit_pkbitmap.cpp_CPackedBitmap_reloadFromBitmapFile_FUN_0054b000 at 0054b02e
;   engine_font.cpp_CBitFont_loadBitmap_FUN_004ccff0 at 004cd123
;
; Referenced Globals:
;   TerminatedCString s_cockpit_ckptutil_c_00617981
;   TerminatedCString s_Unable_to_allocate_u_byt_00617997
;   TerminatedCString s_cockpit_ckptutil_c_006179c9
;   TerminatedCString s_rb_006179df
;   TerminatedCString s_art_006179e2
;   TerminatedCString s_Unable_to_open_bitmap_fi_006179e6
;   TerminatedCString s_cockpit_ckptutil_c_00617a07
;   TerminatedCString s_Unable_to_read_bitmap_fi_00617a1d
;   TerminatedCString s_cockpit_ckptutil_c_00617a3e
;   TerminatedCString s_cockpit_ckptutil_c_00617a54
;   TerminatedCString s_cockpit_ckptutil_c_00617a6a
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_fread_FUN_005fd990
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   engine_dosio.c_getFile_FUN_00481a50
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   shape_memdbg.cpp_debugMalloc_FUN_0050f250
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00431870
        ;   Label: cockpit_ckptutil.c_readBitmapFile_FUN_00431870
    PUSH ESI                            ; 00431871
    PUSH EDI                            ; 00431872
    PUSH EBP                            ; 00431873
    SUB ESP,0x50                        ; 00431874
    MOV EDI,dword ptr [ESP + 0x64]      ; 00431877
    MOV ESI,dword ptr [ESP + 0x68]      ; 0043187b
    MOV EBP,dword ptr [ESP + 0x6c]      ; 0043187f
    TEST ESI,ESI                        ; 00431883
    JZ 0x00431906                       ; 00431885
        ;   XREF to: 00431906 (CONDITIONAL_JUMP)  ; LAB_00431906
    PUSH 0x6179df                       ; 0043188b | = "rb"
        ;   Label: LAB_0043188b
    PUSH EDI                            ; 00431890
    PUSH 0x6179e2                       ; 00431891 | = "art"
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 00431896
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0043189b
    MOV EBX,EAX                         ; 0043189e
    TEST EAX,EAX                        ; 004318a0
    JNZ 0x004318d7                      ; 004318a2
        ;   XREF to: 004318d7 (CONDITIONAL_JUMP)  ; LAB_004318d7
    PUSH EDI                            ; 004318a4
    PUSH 0x6179e6                       ; 004318a5 | = "Unable to open bitmap file (%s)."
    LEA EAX,[ESP + 0x8]                 ; 004318aa
    PUSH EAX                            ; 004318ae
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004318af
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    MOV EAX,0x617a07                    ; 004318b4 | = "..\\cockpit\\ckptutil.c"
    ADD ESP,0xc                         ; 004318b9
    MOV [0x02f0ca48],EAX                ; 004318bc | g_CurrentFilename
    MOV EAX,ESP                         ; 004318c1
    MOV EDX,0xe3                        ; 004318c3
    PUSH EAX                            ; 004318c8
    MOV dword ptr [0x02f0ca4c],EDX      ; 004318c9 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004318cf
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004318d4
    PUSH EBX                            ; 004318d7
        ;   Label: LAB_004318d7
    PUSH 0x1                            ; 004318d8
    PUSH EBP                            ; 004318da
    PUSH ESI                            ; 004318db
    CALL crt_stdio.c_fread_FUN_005fd990 ; 004318dc
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, FILE * file)
    ADD ESP,0x10                        ; 004318e1
    CMP EAX,0x1                         ; 004318e4
    JNZ 0x0043195d                      ; 004318e7
        ;   XREF to: 0043195d (CONDITIONAL_JUMP)  ; LAB_0043195d
    PUSH 0xee                           ; 004318e9
        ;   Label: LAB_004318e9
    PUSH 0x617a6a                       ; 004318ee | = "..\\cockpit\\ckptutil.c"
    PUSH EBX                            ; 004318f3
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004318f4
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 004318f9
    MOV EAX,ESI                         ; 004318fc
    ADD ESP,0x50                        ; 004318fe
    POP EBP                             ; 00431901
    POP EDI                             ; 00431902
    POP ESI                             ; 00431903
    POP EBX                             ; 00431904
    RET                                 ; 00431905
    PUSH 0xd7                           ; 00431906
        ;   Label: LAB_00431906
    PUSH 0x617981                       ; 0043190b | = "..\\cockpit\\ckptutil.c"
    PUSH EBP                            ; 00431910
    CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250 ; 00431911
        ;   XREF to: 0050f250 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugMalloc_FUN_0050f250(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 00431916
    MOV ESI,EAX                         ; 00431919
    TEST EAX,EAX                        ; 0043191b
    JNZ 0x0043188b                      ; 0043191d
        ;   XREF to: 0043188b (CONDITIONAL_JUMP)  ; LAB_0043188b
    PUSH EDI                            ; 00431923
    PUSH EBP                            ; 00431924
    PUSH 0x617997                       ; 00431925 | = "Unable to allocate %u bytes for bitma..."
    LEA EAX,[ESP + 0xc]                 ; 0043192a
    PUSH EAX                            ; 0043192e
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0043192f
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    MOV EDX,0x6179c9                    ; 00431934 | = "..\\cockpit\\ckptutil.c"
    ADD ESP,0x10                        ; 00431939
    MOV EAX,ESP                         ; 0043193c
    MOV ECX,0xda                        ; 0043193e
    PUSH EAX                            ; 00431943
    MOV dword ptr [0x02f0ca48],EDX      ; 00431944 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 0043194a | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00431950
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00431955
    JMP 0x0043188b                      ; 00431958
        ;   XREF to: 0043188b (UNCONDITIONAL_JUMP)  ; LAB_0043188b
    PUSH EDI                            ; 0043195d
        ;   Label: LAB_0043195d
    PUSH 0x617a1d                       ; 0043195e | = "Unable to read bitmap file (%s)."
    LEA EAX,[ESP + 0x8]                 ; 00431963
    PUSH EAX                            ; 00431967
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00431968
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0043196d
    PUSH 0xea                           ; 00431970
    PUSH 0x617a3e                       ; 00431975 | = "..\\cockpit\\ckptutil.c"
    PUSH EBX                            ; 0043197a
    MOV EDI,0xeb                        ; 0043197b
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 00431980
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 00431985
    MOV EAX,ESP                         ; 00431988
    MOV ECX,0x617a54                    ; 0043198a | = "..\\cockpit\\ckptutil.c"
    PUSH EAX                            ; 0043198f
    MOV dword ptr [0x02f0ca4c],EDI      ; 00431990 | g_CurrentLineNumber
    MOV dword ptr [0x02f0ca48],ECX      ; 00431996 | g_CurrentFilename
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0043199c
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004319a1
    JMP 0x004318e9                      ; 004319a4
        ;   XREF to: 004318e9 (UNCONDITIONAL_JUMP)  ; LAB_004318e9

