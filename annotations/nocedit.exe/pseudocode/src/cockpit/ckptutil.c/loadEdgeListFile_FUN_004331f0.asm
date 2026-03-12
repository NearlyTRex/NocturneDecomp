; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_loadEdgeListFile_FUN_004331f0(char *filename,SEdgeList *edge_lists,int expected_count)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; SEdgeList *      Stack[0x8]:4   edge_lists
; int              Stack[0xc]:4   expected_count
; Local Variables:
; char[80]         Stack[-0x68]:80  local_68
; int              Stack[-0x18]:4  local_18
; _FILE *          Stack[-0x14]:4  local_14
;
; XREF[1]:
;   cockpit_ckptutil.c_loadSingleEdgeList_FUN_00433440 at 00433455
;
; Referenced Globals:
;   TerminatedCString s_rb_00617b65
;   TerminatedCString s_art_00617b68
;   TerminatedCString s_Unable_to_open_edge_list_00617b6c
;   TerminatedCString s_cockpit_ckptutil_c_00617b90
;   TerminatedCString s_Unable_to_read_number_of_00617ba6
;   TerminatedCString s_cockpit_ckptutil_c_00617bd0
;   TerminatedCString s_Invalid_number_of_edge_l_00617be6
;   TerminatedCString s_cockpit_ckptutil_c_00617c11
;   TerminatedCString s_Unable_to_read_number_of_00617c27
;   TerminatedCString s_cockpit_ckptutil_c_00617c4c
;   TerminatedCString s_cockpit_ckptutil_c_00617c62
;   TerminatedCString s_cockpit_ckptutil_c_00617c78
;   TerminatedCString s_Unable_to_allocate_memor_00617c8e
;   TerminatedCString s_cockpit_ckptutil_c_00617cb9
;   TerminatedCString s_Unable_to_read_edge_list_00617ccf
;   ... and 4 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   crt_stdio.c_fread_FUN_005fd990
;   crt_stdio.c_printf_FUN_005ff0d0
;   engine_dosio.c_getFile_FUN_00481a50
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   shape_memdbg.cpp_debugFree_FUN_0050f460
;   shape_memdbg.cpp_debugMalloc_FUN_0050f250
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004331f0
        ;   Label: cockpit_ckptutil.c_loadEdgeListFile_FUN_004331f0
    PUSH ESI                            ; 004331f1
    PUSH EDI                            ; 004331f2
    PUSH EBP                            ; 004331f3
    SUB ESP,0x58                        ; 004331f4
    MOV EBX,dword ptr [ESP + 0x70]      ; 004331f7
    PUSH 0x617b65                       ; 004331fb | = "rb"
    MOV EDX,dword ptr [ESP + 0x70]      ; 00433200
    PUSH EDX                            ; 00433204
    PUSH 0x617b68                       ; 00433205 | = "art"
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 0043320a
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0043320f
    MOV dword ptr [ESP + 0x54],EAX      ; 00433212
    TEST EAX,EAX                        ; 00433216
    JNZ 0x00433252                      ; 00433218
        ;   XREF to: 00433252 (CONDITIONAL_JUMP)  ; LAB_00433252
    MOV ECX,dword ptr [ESP + 0x6c]      ; 0043321a
    PUSH ECX                            ; 0043321e
    PUSH 0x617b6c                       ; 0043321f | = "Unable to open edge list file (%s)."
    LEA EAX,[ESP + 0x8]                 ; 00433224
    PUSH EAX                            ; 00433228
    MOV ESI,0x617b90                    ; 00433229 | = "..\\cockpit\\ckptutil.c"
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0043322e
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 00433233
    MOV EAX,ESP                         ; 00433236
    MOV EDI,0x4a7                       ; 00433238
    PUSH EAX                            ; 0043323d
    MOV dword ptr [0x02f0ca48],ESI      ; 0043323e | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 00433244 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0043324a
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0043324f
    MOV EBP,dword ptr [ESP + 0x54]      ; 00433252
        ;   Label: LAB_00433252
    PUSH EBP                            ; 00433256
    PUSH 0x1                            ; 00433257
    PUSH 0x4                            ; 00433259
    LEA EAX,[ESP + 0x5c]                ; 0043325b
    PUSH EAX                            ; 0043325f
    CALL crt_stdio.c_fread_FUN_005fd990 ; 00433260
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 00433265
    CMP EAX,0x1                         ; 00433268
    JZ 0x004332a5                       ; 0043326b
        ;   XREF to: 004332a5 (CONDITIONAL_JUMP)  ; LAB_004332a5
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0043326d
    PUSH EAX                            ; 00433271
    PUSH 0x617ba6                       ; 00433272 | = "Unable to read number of edge lists (..."
    LEA EAX,[ESP + 0x8]                 ; 00433277
    PUSH EAX                            ; 0043327b
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0043327c
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    MOV EDX,0x617bd0                    ; 00433281 | = "..\\cockpit\\ckptutil.c"
    ADD ESP,0xc                         ; 00433286
    MOV EAX,ESP                         ; 00433289
    MOV ECX,0x4b0                       ; 0043328b
    PUSH EAX                            ; 00433290
    MOV dword ptr [0x02f0ca48],EDX      ; 00433291 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 00433297 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0043329d
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004332a2
    MOV EAX,dword ptr [ESP + 0x50]      ; 004332a5
        ;   Label: LAB_004332a5
    CMP EAX,dword ptr [ESP + 0x74]      ; 004332a9
    JZ 0x004332e6                       ; 004332ad
        ;   XREF to: 004332e6 (CONDITIONAL_JUMP)  ; LAB_004332e6
    MOV EDI,dword ptr [ESP + 0x6c]      ; 004332af
    PUSH EDI                            ; 004332b3
    PUSH 0x617be6                       ; 004332b4 | = "Invalid number of edge lists in file ..."
    LEA EAX,[ESP + 0x8]                 ; 004332b9
    PUSH EAX                            ; 004332bd
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004332be
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    MOV EAX,0x4b7                       ; 004332c3
    ADD ESP,0xc                         ; 004332c8
    MOV [0x02f0ca4c],EAX                ; 004332cb | g_CurrentLineNumber
    MOV EAX,ESP                         ; 004332d0
    MOV EBP,0x617c11                    ; 004332d2 | = "..\\cockpit\\ckptutil.c"
    PUSH EAX                            ; 004332d7
    MOV dword ptr [0x02f0ca48],EBP      ; 004332d8 | g_CurrentFilename
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004332de
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004332e3
    MOV EDX,dword ptr [ESP + 0x74]      ; 004332e6
        ;   Label: LAB_004332e6
    XOR EDI,EDI                         ; 004332ea
    TEST EDX,EDX                        ; 004332ec
    JLE 0x004333ed                      ; 004332ee
        ;   XREF to: 004333ed (CONDITIONAL_JUMP)  ; LAB_004333ed
    LEA ESI,[EBX + 0x4]                 ; 004332f4
    MOV EBP,dword ptr [ESP + 0x54]      ; 004332f7
        ;   Label: LAB_004332f7
    PUSH EBP                            ; 004332fb
    PUSH 0x1                            ; 004332fc
    PUSH 0x4                            ; 004332fe
    PUSH ESI                            ; 00433300
    CALL crt_stdio.c_fread_FUN_005fd990 ; 00433301
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 00433306
    CMP EAX,0x1                         ; 00433309
    JZ 0x00433346                       ; 0043330c
        ;   XREF to: 00433346 (CONDITIONAL_JUMP)  ; LAB_00433346
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0043330e
    PUSH EAX                            ; 00433312
    PUSH 0x617c27                       ; 00433313 | = "Unable to read number of edges (%s)."
    LEA EAX,[ESP + 0x8]                 ; 00433318
    PUSH EAX                            ; 0043331c
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0043331d
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    MOV EDX,0x617c4c                    ; 00433322 | = "..\\cockpit\\ckptutil.c"
    ADD ESP,0xc                         ; 00433327
    MOV EAX,ESP                         ; 0043332a
    MOV ECX,0x4c2                       ; 0043332c
    PUSH EAX                            ; 00433331
    MOV dword ptr [0x02f0ca48],EDX      ; 00433332 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 00433338 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0043333e
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00433343
    MOV EBP,dword ptr [EBX]             ; 00433346
        ;   Label: LAB_00433346
    TEST EBP,EBP                        ; 00433348
    JZ 0x0043335f                       ; 0043334a
        ;   XREF to: 0043335f (CONDITIONAL_JUMP)  ; LAB_0043335f
    PUSH 0x4c8                          ; 0043334c
    PUSH 0x617c62                       ; 00433351 | = "..\\cockpit\\ckptutil.c"
    PUSH EBP                            ; 00433356
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 00433357
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 0043335c
    MOV EDX,dword ptr [EBX + 0x4]       ; 0043335f
        ;   Label: LAB_0043335f
    TEST EDX,EDX                        ; 00433362
    JLE 0x004333da                      ; 00433364
        ;   XREF to: 004333da (CONDITIONAL_JUMP)  ; LAB_004333da
    PUSH 0x4d2                          ; 00433366
    PUSH 0x617c78                       ; 0043336b | = "..\\cockpit\\ckptutil.c"
    LEA EBP,[EDX*0x8 + 0x0]             ; 00433370
    PUSH EBP                            ; 00433377
    CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250 ; 00433378
        ;   XREF to: 0050f250 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugMalloc_FUN_0050f250(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 0043337d
    MOV dword ptr [EBX],EAX             ; 00433380
    TEST EAX,EAX                        ; 00433382
    JZ 0x0043340c                       ; 00433384
        ;   XREF to: 0043340c (CONDITIONAL_JUMP)  ; LAB_0043340c
    MOV ECX,dword ptr [ESP + 0x54]      ; 0043338a
        ;   Label: LAB_0043338a
    PUSH ECX                            ; 0043338e
    PUSH 0x1                            ; 0043338f
    PUSH EBP                            ; 00433391
    MOV EBP,dword ptr [EBX]             ; 00433392
    PUSH EBP                            ; 00433394
    CALL crt_stdio.c_fread_FUN_005fd990 ; 00433395
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 0043339a
    CMP EAX,0x1                         ; 0043339d
    JZ 0x004333da                       ; 004333a0
        ;   XREF to: 004333da (CONDITIONAL_JUMP)  ; LAB_004333da
    MOV EAX,dword ptr [ESP + 0x6c]      ; 004333a2
    PUSH EAX                            ; 004333a6
    PUSH 0x617ccf                       ; 004333a7 | = "Unable to read edge list (%s)."
    LEA EAX,[ESP + 0x8]                 ; 004333ac
    PUSH EAX                            ; 004333b0
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 004333b1
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    MOV EDX,0x617cee                    ; 004333b6 | = "..\\cockpit\\ckptutil.c"
    ADD ESP,0xc                         ; 004333bb
    MOV EAX,ESP                         ; 004333be
    MOV ECX,0x4dd                       ; 004333c0
    PUSH EAX                            ; 004333c5
    MOV dword ptr [0x02f0ca48],EDX      ; 004333c6 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 004333cc | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004333d2
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004333d7
    MOV ECX,dword ptr [ESP + 0x74]      ; 004333da
        ;   Label: LAB_004333da
    ADD ESI,0x8                         ; 004333de
    INC EDI                             ; 004333e1
    ADD EBX,0x8                         ; 004333e2
    CMP EDI,ECX                         ; 004333e5
    JL 0x004332f7                       ; 004333e7
        ;   XREF to: 004332f7 (CONDITIONAL_JUMP)  ; LAB_004332f7
    PUSH 0x4e2                          ; 004333ed
        ;   Label: LAB_004333ed
    PUSH 0x617d04                       ; 004333f2 | = "..\\cockpit\\ckptutil.c"
    MOV EBX,dword ptr [ESP + 0x5c]      ; 004333f7
    PUSH EBX                            ; 004333fb
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 004333fc
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 00433401
    ADD ESP,0x58                        ; 00433404
    POP EBP                             ; 00433407
    POP EDI                             ; 00433408
    POP ESI                             ; 00433409
    POP EBX                             ; 0043340a
    RET                                 ; 0043340b
    PUSH 0x617c8e                       ; 0043340c | = "\nUnable to allocate memory for edge ..."
        ;   Label: LAB_0043340c
    CALL crt_stdio.c_printf_FUN_005ff0d0 ; 00433411
        ;   XREF to: 005ff0d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_printf_FUN_005ff0d0(char * format)
    MOV EAX,0x617cb9                    ; 00433416 | = "..\\cockpit\\ckptutil.c"
    ADD ESP,0x4                         ; 0043341b
    MOV [0x02f0ca48],EAX                ; 0043341e | g_CurrentFilename
    MOV EAX,ESP                         ; 00433423
    MOV EDX,0x4d6                       ; 00433425
    PUSH EAX                            ; 0043342a
    MOV dword ptr [0x02f0ca4c],EDX      ; 0043342b | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00433431
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00433436
    JMP 0x0043338a                      ; 00433439
        ;   XREF to: 0043338a (UNCONDITIONAL_JUMP)  ; LAB_0043338a

