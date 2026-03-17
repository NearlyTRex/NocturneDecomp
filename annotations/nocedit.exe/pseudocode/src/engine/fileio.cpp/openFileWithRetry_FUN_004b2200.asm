; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; _FILE * __cdecl engine_fileio_cpp_openFileWithRetry_FUN_004b2200(char *filename,char *mode)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; char *           Stack[0x8]:4   mode
;
; Referenced Globals:
;   SLEEP_FUNC* g_SleepFunc = 00212228
;   TerminatedCString s_engine_fileio_cpp_00626129
;
; Called Functions:
;   crt_errno.c__errno_FUN_00601450
;   crt_stdio.c_setvbuf_FUN_00601490
;   shape_memdbg.cpp_openFile_FUN_0050f7a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b2200
        ;   Label: engine_fileio.cpp_openFileWithRetry_FUN_004b2200
    PUSH ESI                            ; 004b2201
    PUSH EDI                            ; 004b2202
    PUSH EBP                            ; 004b2203
    MOV EBP,dword ptr [ESP + 0x14]      ; 004b2204
    MOV EDI,dword ptr [ESP + 0x18]      ; 004b2208
    XOR ESI,ESI                         ; 004b220c
    PUSH 0x153                          ; 004b220e
        ;   Label: LAB_004b220e
    PUSH 0x626129                       ; 004b2213 | = "..\\engine\\fileio.cpp"
    PUSH EDI                            ; 004b2218
    PUSH 0x0                            ; 004b2219
    PUSH EBP                            ; 004b221b
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 004b221c
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; _FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    MOV EBX,EAX                         ; 004b2221
    ADD ESP,0x14                        ; 004b2223
    TEST EAX,EAX                        ; 004b2226
    JNZ 0x004b224d                      ; 004b2228
        ;   XREF to: 004b224d (CONDITIONAL_JUMP)  ; LAB_004b224d
    CALL crt_errno.c__errno_FUN_00601450 ; 004b222a
        ;   XREF to: 00601450 (UNCONDITIONAL_CALL)  ; int * crt_errno.c__errno_FUN_00601450()
    CMP dword ptr [EAX],0x6             ; 004b222f
    JNZ 0x004b2246                      ; 004b2232
        ;   XREF to: 004b2246 (CONDITIONAL_JUMP)  ; LAB_004b2246
    PUSH 0x1f4                          ; 004b2234
    INC ESI                             ; 004b2239
    CALL dword ptr CS:[0x611644]        ; 004b223a | g_SleepFunc
    CMP ESI,0xa                         ; 004b2241
    JL 0x004b220e                       ; 004b2244
        ;   XREF to: 004b220e (CONDITIONAL_JUMP)  ; LAB_004b220e
    XOR EAX,EAX                         ; 004b2246
        ;   Label: LAB_004b2246
    POP EBP                             ; 004b2248
    POP EDI                             ; 004b2249
    POP ESI                             ; 004b224a
    POP EBX                             ; 004b224b
    RET                                 ; 004b224c
    PUSH 0x400                          ; 004b224d
        ;   Label: LAB_004b224d
    PUSH 0x0                            ; 004b2252
    PUSH 0x0                            ; 004b2254
    PUSH EAX                            ; 004b2256
    CALL crt_stdio.c_setvbuf_FUN_00601490 ; 004b2257
        ;   XREF to: 00601490 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_setvbuf_FUN_00601490(_FILE * stream_ptr, char * buffer_ptr, int buffer_mode, SIZE_T buffer_size)
    ADD ESP,0x10                        ; 004b225c
    MOV EAX,EBX                         ; 004b225f
    POP EBP                             ; 004b2261
    POP EDI                             ; 004b2262
    POP ESI                             ; 004b2263
    POP EBX                             ; 004b2264
    RET                                 ; 004b2265

