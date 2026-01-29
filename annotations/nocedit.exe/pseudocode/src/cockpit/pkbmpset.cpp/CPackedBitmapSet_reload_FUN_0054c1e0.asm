; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_reload_FUN_0054c1e0(CPackedBitmapSet *this_ptr)
;
; Parameters:
; CPackedBitmapSet * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x148]:1  local_148
; undefined        Stack[-0xe4]:1  local_e4
; undefined        Stack[-0x80]:1  local_80
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadByFilenameAndIndex_FUN_0054c500 at 0054c5bd
;
; Referenced Globals:
;   TerminatedCString s_rb_0063f5fb
;   TerminatedCString s_art_0063f5fe
;   TerminatedCString s_Unable_to_open_s_in_CPac_0063f602
;   TerminatedCString s_cockpit_pkbmpset_cpp_0063f639
;   TerminatedCString s_cockpit_pkbmpset_cpp_0063f651
;   TerminatedCString s_Can_t_allocate_u_bytes_f_0063f669
;   TerminatedCString s_cockpit_pkbmpset_cpp_0063f6b3
;   TerminatedCString s_Error_reading_from_s_in__0063f6cb
;   TerminatedCString s_cockpit_pkbmpset_cpp_0063f704
;   TerminatedCString s_cockpit_pkbmpset_cpp_0063f71c
;   TerminatedCString s_cockpit_pkbmpset_cpp_0063f734
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   cockpit_pkbitmap.cpp_CPackedBitmap_copyRawDataToCompressedRuns_FUN_0054b0e0
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadStoredACTFile_FUN_0054c710
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_fread_FUN_005fd990
;   crt_stdio.c_fseek_FUN_005ffacc
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   engine_dosio.c_getFile_FUN_00481a50
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   shape_memdbg.cpp_debugFree_FUN_0050f460
;   shape_memdbg.cpp_debugMalloc_FUN_0050f250
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054c1e0
        ;   Label: cockpit_pkbmpset.cpp_CPackedBitmapSet_reload_FUN_0054c1e0
    PUSH ESI                            ; 0054c1e1
    PUSH EDI                            ; 0054c1e2
    PUSH EBP                            ; 0054c1e3
    SUB ESP,0x138                       ; 0054c1e4
    MOV ESI,dword ptr [ESP + 0x14c]     ; 0054c1ea
    PUSH 0x63f5fb                       ; 0054c1f1 | = "rb"
    LEA EBX,[ESI + 0x8]                 ; 0054c1f6
    PUSH EBX                            ; 0054c1f9
    PUSH 0x63f5fe                       ; 0054c1fa | = "art"
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 0054c1ff
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0054c204
    MOV dword ptr [ESP + 0x134],EAX     ; 0054c207
    TEST EAX,EAX                        ; 0054c20e
    JZ 0x0054c303                       ; 0054c210
        ;   XREF to: 0054c303 (CONDITIONAL_JUMP)  ; LAB_0054c303
    MOV EBP,dword ptr [ESI + 0x1c]      ; 0054c216
        ;   Label: LAB_0054c216
    IMUL EBP,dword ptr [ESI + 0x20]     ; 0054c219
    PUSH 0x110                          ; 0054c21d
    PUSH 0x63f651                       ; 0054c222 | = "..\\cockpit\\pkbmpset.cpp"
    PUSH EBP                            ; 0054c227
    CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250 ; 0054c228
        ;   XREF to: 0050f250 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugMalloc_FUN_0050f250(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 0054c22d
    MOV dword ptr [ESP + 0x130],EAX     ; 0054c230
    TEST EAX,EAX                        ; 0054c237
    JNZ 0x0054c26e                      ; 0054c239
        ;   XREF to: 0054c26e (CONDITIONAL_JUMP)  ; LAB_0054c26e
    PUSH EBP                            ; 0054c23b
    PUSH 0x63f669                       ; 0054c23c | = "Can't allocate %u bytes for RAW buffe..."
    LEA EAX,[ESP + 0x8]                 ; 0054c241
    PUSH EAX                            ; 0054c245
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0054c246
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    MOV EAX,0x115                       ; 0054c24b
    ADD ESP,0xc                         ; 0054c250
    MOV [0x02f0ca4c],EAX                ; 0054c253 | g_CurrentLineNumber
    MOV EAX,ESP                         ; 0054c258
    MOV EDI,0x63f6b3                    ; 0054c25a | = "..\\cockpit\\pkbmpset.cpp"
    PUSH EAX                            ; 0054c25f
    MOV dword ptr [0x02f0ca48],EDI      ; 0054c260 | g_CurrentFilename
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0054c266
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0054c26b
    MOV EDX,dword ptr [ESI]             ; 0054c26e
        ;   Label: LAB_0054c26e
    XOR EBX,EBX                         ; 0054c270
    TEST EDX,EDX                        ; 0054c272
    JLE 0x0054c2b6                      ; 0054c274
        ;   XREF to: 0054c2b6 (CONDITIONAL_JUMP)  ; LAB_0054c2b6
    LEA EAX,[ESI + 0x8]                 ; 0054c276
    XOR EDI,EDI                         ; 0054c279
    MOV dword ptr [ESP + 0x12c],EAX     ; 0054c27b
    MOV EAX,dword ptr [ESP + 0x154]     ; 0054c282
        ;   Label: LAB_0054c282
    TEST EAX,EAX                        ; 0054c289
    JL 0x0054c33e                       ; 0054c28b
        ;   XREF to: 0054c33e (CONDITIONAL_JUMP)  ; LAB_0054c33e
    CMP EBX,EAX                         ; 0054c291
    JZ 0x0054c33e                       ; 0054c293
        ;   XREF to: 0054c33e (CONDITIONAL_JUMP)  ; LAB_0054c33e
    PUSH 0x1                            ; 0054c299
    PUSH EBP                            ; 0054c29b
    MOV EAX,dword ptr [ESP + 0x13c]     ; 0054c29c
    PUSH EAX                            ; 0054c2a3
    CALL crt_stdio.c_fseek_FUN_005ffacc ; 0054c2a4
        ;   XREF to: 005ffacc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fseek_FUN_005ffacc(_FILE * file, long offset, int whence)
    ADD ESP,0xc                         ; 0054c2a9
        ;   Label: LAB_0054c2a9
    INC EBX                             ; 0054c2ac
    MOV ECX,dword ptr [ESI]             ; 0054c2ad
    ADD EDI,0x24                        ; 0054c2af
    CMP EBX,ECX                         ; 0054c2b2
    JL 0x0054c282                       ; 0054c2b4
        ;   XREF to: 0054c282 (CONDITIONAL_JUMP)  ; LAB_0054c282
    PUSH 0x132                          ; 0054c2b6
        ;   Label: LAB_0054c2b6
    PUSH 0x63f71c                       ; 0054c2bb | = "..\\cockpit\\pkbmpset.cpp"
    MOV EBX,dword ptr [ESP + 0x138]     ; 0054c2c0
    PUSH EBX                            ; 0054c2c7
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 0054c2c8
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 0054c2cd
    PUSH 0x133                          ; 0054c2d0
    PUSH 0x63f734                       ; 0054c2d5 | = "..\\cockpit\\pkbmpset.cpp"
    MOV EDI,dword ptr [ESP + 0x13c]     ; 0054c2da
    PUSH EDI                            ; 0054c2e1
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0054c2e2
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 0054c2e7
    CMP dword ptr [ESP + 0x150],0x0     ; 0054c2ea
    JNZ 0x0054c3bc                      ; 0054c2f2
        ;   XREF to: 0054c3bc (CONDITIONAL_JUMP)  ; LAB_0054c3bc
    ADD ESP,0x138                       ; 0054c2f8
    POP EBP                             ; 0054c2fe
    POP EDI                             ; 0054c2ff
    POP ESI                             ; 0054c300
    POP EBX                             ; 0054c301
    RET                                 ; 0054c302
    PUSH EBX                            ; 0054c303
        ;   Label: LAB_0054c303
    PUSH 0x63f602                       ; 0054c304 | = "Unable to open %s in CPackedBitmapSet..."
    LEA EAX,[ESP + 0x6c]                ; 0054c309
    PUSH EAX                            ; 0054c30d
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0054c30e
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    MOV EDX,0x63f639                    ; 0054c313 | = "..\\cockpit\\pkbmpset.cpp"
    ADD ESP,0xc                         ; 0054c318
    LEA EAX,[ESP + 0x64]                ; 0054c31b
    MOV ECX,0x108                       ; 0054c31f
    PUSH EAX                            ; 0054c324
    MOV dword ptr [0x02f0ca48],EDX      ; 0054c325 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 0054c32b | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0054c331
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0054c336
    JMP 0x0054c216                      ; 0054c339
        ;   XREF to: 0054c216 (UNCONDITIONAL_JUMP)  ; LAB_0054c216
    MOV ECX,dword ptr [ESP + 0x134]     ; 0054c33e
        ;   Label: LAB_0054c33e
    PUSH ECX                            ; 0054c345
    PUSH 0x1                            ; 0054c346
    PUSH EBP                            ; 0054c348
    MOV EAX,dword ptr [ESP + 0x13c]     ; 0054c349
    PUSH EAX                            ; 0054c350
    CALL crt_stdio.c_fread_FUN_005fd990 ; 0054c351
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 0054c356
    CMP EAX,0x1                         ; 0054c359
    JZ 0x0054c3a0                       ; 0054c35c
        ;   XREF to: 0054c3a0 (CONDITIONAL_JUMP)  ; LAB_0054c3a0
    MOV EDX,dword ptr [ESP + 0x12c]     ; 0054c35e
    PUSH EDX                            ; 0054c365
    PUSH 0x63f6cb                       ; 0054c366 | = "Error reading from %s in CPackedBitma..."
    LEA EAX,[ESP + 0xd0]                ; 0054c36b
    PUSH EAX                            ; 0054c372
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0054c373
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    MOV EAX,0x128                       ; 0054c378
    ADD ESP,0xc                         ; 0054c37d
    MOV [0x02f0ca4c],EAX                ; 0054c380 | g_CurrentLineNumber
    LEA EAX,[ESP + 0xc8]                ; 0054c385
    MOV ECX,0x63f704                    ; 0054c38c | = "..\\cockpit\\pkbmpset.cpp"
    PUSH EAX                            ; 0054c391
    MOV dword ptr [0x02f0ca48],ECX      ; 0054c392 | g_CurrentFilename
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0054c398
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0054c39d
    MOV EDX,dword ptr [ESI + 0x1c]      ; 0054c3a0
        ;   Label: LAB_0054c3a0
    PUSH EDX                            ; 0054c3a3
    MOV ECX,dword ptr [ESP + 0x134]     ; 0054c3a4
    MOV EAX,dword ptr [ESI + 0x4]       ; 0054c3ab
    PUSH ECX                            ; 0054c3ae
    ADD EAX,EDI                         ; 0054c3af
    PUSH EAX                            ; 0054c3b1
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_copyRawDataToCompressedRuns_FUN_0054b0e0 ; 0054c3b2
        ;   XREF to: 0054b0e0 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_copyRawDataToCompressedRuns_FUN_0054b0e0(CPackedBitmap * this_ptr, uchar * raw_bitmap_data, int row_stride)
    JMP 0x0054c2a9                      ; 0054c3b7
        ;   XREF to: 0054c2a9 (UNCONDITIONAL_JUMP)  ; LAB_0054c2a9
    PUSH ESI                            ; 0054c3bc
        ;   Label: LAB_0054c3bc
    CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_loadStoredACTFile_FUN_0054c710 ; 0054c3bd
        ;   XREF to: 0054c710 (UNCONDITIONAL_CALL)  ; void cockpit_pkbmpset.cpp_CPackedBitmapSet_loadStoredACTFile_FUN_0054c710(CPackedBitmapSet * this_ptr)
    ADD ESP,0x4                         ; 0054c3c2
    ADD ESP,0x138                       ; 0054c3c5
    POP EBP                             ; 0054c3cb
    POP EDI                             ; 0054c3cc
    POP ESI                             ; 0054c3cd
    POP EBX                             ; 0054c3ce
    RET                                 ; 0054c3cf

