; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadJoinedRAW_FUN_0054bf40(CPackedBitmapSet *this_ptr,char *filename,int bitmap_width,int bitmap_height,int transparency_color,int apply_palette_flag)
;
; Parameters:
; CPackedBitmapSet * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
; int              Stack[0xc]:4   bitmap_width
; int              Stack[0x10]:4   bitmap_height
; int              Stack[0x14]:4   transparency_color
; int              Stack[0x18]:4   apply_palette_flag
; Local Variables:
; char[100]        Stack[-0x1a8]:100  local_1a8
; char[100]        Stack[-0x144]:100  local_144
; char[100]        Stack[-0xe0]:100  local_e0
; char[100]        Stack[-0x7c]:100  local_7c
; _FILE *          Stack[-0x18]:4  local_18
; SIZE_T           Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_art_0063f433
;   TerminatedCString s_rb_0063f437
;   TerminatedCString s_art_0063f43a
;   TerminatedCString s_Unable_to_open_s_in_CPac_0063f43e
;   TerminatedCString s_cockpit_pkbmpset_cpp_0063f473
;   TerminatedCString s_Size_of_s_is_lu_must_be__0063f48b
;   TerminatedCString s_cockpit_pkbmpset_cpp_0063f4e8
;   TerminatedCString s_cockpit_pkbmpset_cpp_0063f500
;   TerminatedCString s_Can_t_allocate_u_bytes_f_0063f518
;   TerminatedCString s_cockpit_pkbmpset_cpp_0063f562
;   TerminatedCString s_Error_reading_from_s_in__0063f57a
;   TerminatedCString s_cockpit_pkbmpset_cpp_0063f5b3
;   TerminatedCString s_cockpit_pkbmpset_cpp_0063f5cb
;   TerminatedCString s_cockpit_pkbmpset_cpp_0063f5e3
;   char* g_CurrentFilename
;   ... and 1 more
;
; Called Functions:
;   cockpit_pkbitmap.cpp_CPackedBitmap_load_FUN_0054b190
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_alloc_FUN_0054bdb0
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadStoredACTFile_FUN_0054c710
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_reset_FUN_0054bd60
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_setFilename_FUN_0054c6f0
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_fread_FUN_005fd990
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   engine_dosio.c_getFile_FUN_00481a50
;   engine_dosio.c_getFileSize_FUN_00481880
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   shape_memdbg.cpp_debugFree_FUN_0050f460
;   shape_memdbg.cpp_debugMalloc_FUN_0050f250
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054bf40
        ;   Label: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadJoinedRAW_FUN_0054bf40
    PUSH ESI                            ; 0054bf41
    PUSH EDI                            ; 0054bf42
    PUSH EBP                            ; 0054bf43
    SUB ESP,0x198                       ; 0054bf44
    MOV EBX,dword ptr [ESP + 0x1ac]     ; 0054bf4a
    MOV EBP,dword ptr [ESP + 0x1b8]     ; 0054bf51
    PUSH EBX                            ; 0054bf58
    CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_reset_FUN_0054bd60 ; 0054bf59
        ;   XREF to: 0054bd60 (UNCONDITIONAL_CALL)  ; void cockpit_pkbmpset.cpp_CPackedBitmapSet_reset_FUN_0054bd60(CPackedBitmapSet * this_ptr)
    ADD ESP,0x4                         ; 0054bf5e
    MOV EDX,dword ptr [ESP + 0x1b0]     ; 0054bf61
    PUSH EDX                            ; 0054bf68
    PUSH 0x63f433                       ; 0054bf69 | = "art"
    CALL engine_dosio.c_getFileSize_FUN_00481880 ; 0054bf6e
        ;   XREF to: 00481880 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_getFileSize_FUN_00481880(char * directory, char * filename)
    ADD ESP,0x8                         ; 0054bf73
    PUSH 0x63f437                       ; 0054bf76 | = "rb"
    MOV ECX,dword ptr [ESP + 0x1b4]     ; 0054bf7b
    PUSH ECX                            ; 0054bf82
    PUSH 0x63f43a                       ; 0054bf83 | = "art"
    MOV ESI,EAX                         ; 0054bf88
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 0054bf8a
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0054bf8f
    MOV dword ptr [ESP + 0x190],EAX     ; 0054bf92
    TEST EAX,EAX                        ; 0054bf99
    JZ 0x0054c17f                       ; 0054bf9b
        ;   XREF to: 0054c17f (CONDITIONAL_JUMP)  ; LAB_0054c17f
    MOV EAX,dword ptr [ESP + 0x1b4]     ; 0054bfa1
        ;   Label: LAB_0054bfa1
    IMUL EAX,EBP                        ; 0054bfa8
    MOV EDX,ESI                         ; 0054bfab
    MOV dword ptr [ESP + 0x194],EAX     ; 0054bfad
    SAR EDX,0x1f                        ; 0054bfb4
    MOV ECX,dword ptr [ESP + 0x194]     ; 0054bfb7
    MOV EAX,ESI                         ; 0054bfbe
    IDIV ECX                            ; 0054bfc0
    MOV EDI,EAX                         ; 0054bfc2
    MOV EAX,ECX                         ; 0054bfc4
    IMUL EAX,EDI                        ; 0054bfc6
    CMP EAX,ESI                         ; 0054bfc9
    JZ 0x0054c014                       ; 0054bfcb
        ;   XREF to: 0054c014 (CONDITIONAL_JUMP)  ; LAB_0054c014
    PUSH EBP                            ; 0054bfcd
    MOV EAX,dword ptr [ESP + 0x1b8]     ; 0054bfce
    PUSH EAX                            ; 0054bfd5
    PUSH ESI                            ; 0054bfd6
    MOV EDX,dword ptr [ESP + 0x1bc]     ; 0054bfd7
    PUSH EDX                            ; 0054bfde
    PUSH 0x63f48b                       ; 0054bfdf | = "Size of %s is %lu, must be a multiple..."
    LEA EAX,[ESP + 0x78]                ; 0054bfe4
    PUSH EAX                            ; 0054bfe8
    MOV ESI,0xc7                        ; 0054bfe9
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0054bfee
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x18                        ; 0054bff3
    LEA EAX,[ESP + 0x64]                ; 0054bff6
    MOV ECX,0x63f4e8                    ; 0054bffa | = "..\\cockpit\\pkbmpset.cpp"
    PUSH EAX                            ; 0054bfff
    MOV dword ptr [0x02f0ca4c],ESI      ; 0054c000 | g_CurrentLineNumber
    MOV dword ptr [0x02f0ca48],ECX      ; 0054c006 | g_CurrentFilename
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0054c00c
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0054c011
    PUSH EDI                            ; 0054c014
        ;   Label: LAB_0054c014
    PUSH EBX                            ; 0054c015
    CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_alloc_FUN_0054bdb0 ; 0054c016
        ;   XREF to: 0054bdb0 (UNCONDITIONAL_CALL)  ; void cockpit_pkbmpset.cpp_CPackedBitmapSet_alloc_FUN_0054bdb0(CPackedBitmapSet * this_ptr, int bitmap_count)
    ADD ESP,0x8                         ; 0054c01b
    PUSH 0xd3                           ; 0054c01e
    MOV dword ptr [EBX + 0x20],EBP      ; 0054c023
    PUSH 0x63f500                       ; 0054c026 | = "..\\cockpit\\pkbmpset.cpp"
    MOV EDI,dword ptr [ESP + 0x19c]     ; 0054c02b
    MOV EAX,dword ptr [ESP + 0x1bc]     ; 0054c032
    PUSH EDI                            ; 0054c039
    MOV dword ptr [EBX + 0x1c],EAX      ; 0054c03a
    CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250 ; 0054c03d
        ;   XREF to: 0050f250 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugMalloc_FUN_0050f250(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 0054c042
    MOV EBP,EAX                         ; 0054c045
    TEST EAX,EAX                        ; 0054c047
    JNZ 0x0054c087                      ; 0054c049
        ;   XREF to: 0054c087 (CONDITIONAL_JUMP)  ; LAB_0054c087
    PUSH EDI                            ; 0054c04b
    PUSH 0x63f518                       ; 0054c04c | = "Can't allocate %u bytes for RAW buffe..."
    LEA EAX,[ESP + 0xd0]                ; 0054c051
    PUSH EAX                            ; 0054c058
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0054c059
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    MOV EDX,0x63f562                    ; 0054c05e | = "..\\cockpit\\pkbmpset.cpp"
    ADD ESP,0xc                         ; 0054c063
    LEA EAX,[ESP + 0xc8]                ; 0054c066
    MOV ECX,0xd8                        ; 0054c06d
    PUSH EAX                            ; 0054c072
    MOV dword ptr [0x02f0ca48],EDX      ; 0054c073 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 0054c079 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0054c07f
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0054c084
    MOV ESI,dword ptr [EBX]             ; 0054c087
        ;   Label: LAB_0054c087
    XOR EDI,EDI                         ; 0054c089
    TEST ESI,ESI                        ; 0054c08b
    JLE 0x0054c12c                      ; 0054c08d
        ;   XREF to: 0054c12c (CONDITIONAL_JUMP)  ; LAB_0054c12c
    XOR ESI,ESI                         ; 0054c093
    MOV EAX,dword ptr [ESP + 0x190]     ; 0054c095
        ;   Label: LAB_0054c095
    PUSH EAX                            ; 0054c09c
    PUSH 0x1                            ; 0054c09d
    MOV EDX,dword ptr [ESP + 0x19c]     ; 0054c09f
    PUSH EDX                            ; 0054c0a6
    PUSH EBP                            ; 0054c0a7
    CALL crt_stdio.c_fread_FUN_005fd990 ; 0054c0a8
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 0054c0ad
    CMP EAX,0x1                         ; 0054c0b0
    JZ 0x0054c0f7                       ; 0054c0b3
        ;   XREF to: 0054c0f7 (CONDITIONAL_JUMP)  ; LAB_0054c0f7
    MOV ECX,dword ptr [ESP + 0x1b0]     ; 0054c0b5
    PUSH ECX                            ; 0054c0bc
    PUSH 0x63f57a                       ; 0054c0bd | = "Error reading from %s in CPackedBitma..."
    LEA EAX,[ESP + 0x134]               ; 0054c0c2
    PUSH EAX                            ; 0054c0c9
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0054c0ca
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    MOV EAX,0x63f5b3                    ; 0054c0cf | = "..\\cockpit\\pkbmpset.cpp"
    ADD ESP,0xc                         ; 0054c0d4
    MOV [0x02f0ca48],EAX                ; 0054c0d7 | g_CurrentFilename
    LEA EAX,[ESP + 0x12c]               ; 0054c0dc
    MOV EDX,0xe2                        ; 0054c0e3
    PUSH EAX                            ; 0054c0e8
    MOV dword ptr [0x02f0ca4c],EDX      ; 0054c0e9 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0054c0ef
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0054c0f4
    MOV EAX,dword ptr [ESP + 0x1b4]     ; 0054c0f7
        ;   Label: LAB_0054c0f7
    PUSH EAX                            ; 0054c0fe
    MOV EDX,dword ptr [ESP + 0x1c0]     ; 0054c0ff
    PUSH EDX                            ; 0054c106
    MOV ECX,dword ptr [EBX + 0x20]      ; 0054c107
    PUSH ECX                            ; 0054c10a
    MOV EAX,dword ptr [EBX + 0x1c]      ; 0054c10b
    PUSH EAX                            ; 0054c10e
    MOV EAX,dword ptr [EBX + 0x4]       ; 0054c10f
    PUSH EBP                            ; 0054c112
    ADD EAX,ESI                         ; 0054c113
    PUSH EAX                            ; 0054c115
    INC EDI                             ; 0054c116
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_load_FUN_0054b190 ; 0054c117
        ;   XREF to: 0054b190 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_load_FUN_0054b190(CPackedBitmap * this_ptr, uchar * bitmap_data, int width, int height, ...)
    ADD ESI,0x24                        ; 0054c11c
    MOV EDX,dword ptr [EBX]             ; 0054c11f
    ADD ESP,0x18                        ; 0054c121
    CMP EDI,EDX                         ; 0054c124
    JL 0x0054c095                       ; 0054c126
        ;   XREF to: 0054c095 (CONDITIONAL_JUMP)  ; LAB_0054c095
    PUSH 0xec                           ; 0054c12c
        ;   Label: LAB_0054c12c
    PUSH 0x63f5cb                       ; 0054c131 | = "..\\cockpit\\pkbmpset.cpp"
    PUSH EBP                            ; 0054c136
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 0054c137
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 0054c13c
    PUSH 0xed                           ; 0054c13f
    PUSH 0x63f5e3                       ; 0054c144 | = "..\\cockpit\\pkbmpset.cpp"
    MOV ECX,dword ptr [ESP + 0x198]     ; 0054c149
    PUSH ECX                            ; 0054c150
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0054c151
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 0054c156
    MOV ESI,dword ptr [ESP + 0x1b0]     ; 0054c159
    PUSH ESI                            ; 0054c160
    PUSH EBX                            ; 0054c161
    CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_setFilename_FUN_0054c6f0 ; 0054c162
        ;   XREF to: 0054c6f0 (UNCONDITIONAL_CALL)  ; void cockpit_pkbmpset.cpp_CPackedBitmapSet_setFilename_FUN_0054c6f0(CPackedBitmapSet * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0054c167
    CMP dword ptr [ESP + 0x1c0],0x0     ; 0054c16a
    JNZ 0x0054c1be                      ; 0054c172
        ;   XREF to: 0054c1be (CONDITIONAL_JUMP)  ; LAB_0054c1be
    ADD ESP,0x198                       ; 0054c174
    POP EBP                             ; 0054c17a
    POP EDI                             ; 0054c17b
    POP ESI                             ; 0054c17c
    POP EBX                             ; 0054c17d
    RET                                 ; 0054c17e
    MOV EDI,dword ptr [ESP + 0x1b0]     ; 0054c17f
        ;   Label: LAB_0054c17f
    PUSH EDI                            ; 0054c186
    PUSH 0x63f43e                       ; 0054c187 | = "Unable to open %s in CPackedBitmapSet..."
    LEA EAX,[ESP + 0x8]                 ; 0054c18c
    PUSH EAX                            ; 0054c190
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0054c191
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    MOV EAX,0x63f473                    ; 0054c196 | = "..\\cockpit\\pkbmpset.cpp"
    ADD ESP,0xc                         ; 0054c19b
    MOV [0x02f0ca48],EAX                ; 0054c19e | g_CurrentFilename
    MOV EAX,ESP                         ; 0054c1a3
    MOV EDX,0xba                        ; 0054c1a5
    PUSH EAX                            ; 0054c1aa
    MOV dword ptr [0x02f0ca4c],EDX      ; 0054c1ab | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0054c1b1
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0054c1b6
    JMP 0x0054bfa1                      ; 0054c1b9
        ;   XREF to: 0054bfa1 (UNCONDITIONAL_JUMP)  ; LAB_0054bfa1
    PUSH EBX                            ; 0054c1be
        ;   Label: LAB_0054c1be
    CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_loadStoredACTFile_FUN_0054c710 ; 0054c1bf
        ;   XREF to: 0054c710 (UNCONDITIONAL_CALL)  ; void cockpit_pkbmpset.cpp_CPackedBitmapSet_loadStoredACTFile_FUN_0054c710(CPackedBitmapSet * this_ptr)
    ADD ESP,0x4                         ; 0054c1c4
    ADD ESP,0x198                       ; 0054c1c7
    POP EBP                             ; 0054c1cd
    POP EDI                             ; 0054c1ce
    POP ESI                             ; 0054c1cf
    POP EBX                             ; 0054c1d0
    RET                                 ; 0054c1d1

