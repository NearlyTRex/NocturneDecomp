; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_superopt_cpp_logToFile_FUN_005c7910(char *format,...)
;
; Parameters:
; char *           Stack[0x4]:4   format
; Local Variables:
; va_list_t        Stack[-0x8]:4  local_8
;
; XREF[11]:
;   shape_superopt.cpp_CComplexPolygon_closeSplitBoundary_FUN_005ca590 at 005cb062
;   shape_superopt.cpp_CObj_addPolygons_FUN_005d2410 at 005d24cb
;   shape_superopt.cpp_CObj_addVertices_FUN_005d2580 at 005d25ec
;   shape_superopt.cpp_CObj_allocatePolygons_FUN_005d2320 at 005d236f
;   shape_superopt.cpp_CObj_allocateVertices_FUN_005d2500 at 005d2541
;   shape_superopt.cpp_CObj_appendTo_FUN_005d2720 at 005d2861
;   shape_superopt.cpp_CObj_copyFrom_FUN_005d2650 at 005d2709
;   shape_superopt.cpp_COptimize_optimizeComplex_FUN_005d7350 at 005d7420
;   shape_superopt.cpp_COptimize_optimize_FUN_005d7290 at 005d730c
;   shape_superopt.cpp_COptimize_setGeometry_FUN_005d71e0 at 005d7261
;   ... and 1 more
;
; Referenced Globals:
;   TerminatedCString s_log_txt_006541e2
;   TerminatedCString s_shape_superopt_cpp_006541ea
;   TerminatedCString s_at_00654200
;   TerminatedCString s_log_txt_00654203
;   TerminatedCString s_shape_superopt_cpp_0065420b
;   int g_LogInitialized
;
; Called Functions:
;   crt_stdio.c_fprintf_FUN_006021c0
;   crt_stdio.c_remove_FUN_005ff9d0
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   shape_memdbg.cpp_openFile_FUN_0050f7a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c7910
        ;   Label: shape_superopt.cpp_logToFile_FUN_005c7910
    SUB ESP,0x4                         ; 005c7911
    CMP dword ptr [0x03f6bbe0],0x0      ; 005c7914 | g_LogInitialized
    JNZ 0x005c7935                      ; 005c791b
        ;   XREF to: 005c7935 (CONDITIONAL_JUMP)  ; LAB_005c7935
    PUSH 0x6541e2                       ; 005c791d | = "log.txt"
    CALL crt_stdio.c_remove_FUN_005ff9d0 ; 005c7922
        ;   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_remove_FUN_005ff9d0(char * filename)
    MOV ECX,0x1                         ; 005c7927
    ADD ESP,0x4                         ; 005c792c
    MOV dword ptr [0x03f6bbe0],ECX      ; 005c792f | g_LogInitialized
    PUSH 0x34                           ; 005c7935
        ;   Label: LAB_005c7935
    PUSH 0x6541ea                       ; 005c7937 | = "..\\shape\\superopt.cpp"
    PUSH 0x654200                       ; 005c793c | = "at"
    PUSH 0x0                            ; 005c7941
    PUSH 0x654203                       ; 005c7943 | = "log.txt"
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 005c7948
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; _FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    MOV EBX,EAX                         ; 005c794d
    ADD ESP,0x14                        ; 005c794f
    TEST EAX,EAX                        ; 005c7952
    JNZ 0x005c795b                      ; 005c7954
        ;   XREF to: 005c795b (CONDITIONAL_JUMP)  ; LAB_005c795b
    ADD ESP,0x4                         ; 005c7956
    POP EBX                             ; 005c7959
    RET                                 ; 005c795a
    PUSH EDI                            ; 005c795b
        ;   Label: LAB_005c795b
    PUSH ESI                            ; 005c795c
    LEA EAX,[ESP + 0x18]                ; 005c795d
    MOV dword ptr [ESP + 0x8],EAX       ; 005c7961
    LEA EAX,[ESP + 0x8]                 ; 005c7965
    PUSH EAX                            ; 005c7969
    MOV ESI,dword ptr [ESP + 0x18]      ; 005c796a
    PUSH ESI                            ; 005c796e
    PUSH EBX                            ; 005c796f
    CALL crt_stdio.c_fprintf_FUN_006021c0 ; 005c7970
        ;   XREF to: 006021c0 (UNCONDITIONAL_CALL)  ; void crt_stdio.c_fprintf_FUN_006021c0(_FILE * stream, char * format)
    ADD ESP,0xc                         ; 005c7975
    PUSH 0x3a                           ; 005c7978
    PUSH 0x65420b                       ; 005c797a | = "..\\shape\\superopt.cpp"
    XOR EDI,EDI                         ; 005c797f
    PUSH EBX                            ; 005c7981
    MOV dword ptr [ESP + 0x14],EDI      ; 005c7982
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 005c7986
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 005c798b
    POP ESI                             ; 005c798e
    POP EDI                             ; 005c798f
    ADD ESP,0x4                         ; 005c7990
    POP EBX                             ; 005c7993
    RET                                 ; 005c7994

