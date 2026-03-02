; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeledit_cpp_saveIni_FUN_00589a40(void)
;
;
; Referenced Globals:
;   TerminatedCString s_core_skeledit_cpp_00649d66
;   TerminatedCString s_wt_00649d7b
;   TerminatedCString s_version_00649d7e
;   TerminatedCString s_d_00649d8a
;   TerminatedCString s_lastPOSimported_00649d8e
;   TerminatedCString s_s_00649da2
;   TerminatedCString s_lastMOTimported_00649da8
;   TerminatedCString s_s_00649dbc
;   TerminatedCString s_lastTestSkeletonDir_00649dc2
;   TerminatedCString s_s_00649dda
;   TerminatedCString s_core_skeledit_cpp_00649de0
;   TerminatedCString s_skeledit_ini_00681868
;   char[264] g_SkeleditLastPOSImported
;   char[264] g_SkeleditLastMOTImported
;   char[260] g_SkeleditLastTestSkeletonDir
;
; Called Functions:
;   crt_stack.c___STK_FUN_005ff9f3
;   crt_stdio.c_fprintf_FUN_005fe6d0
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   shape_memdbg.cpp_openFile_FUN_0050f7a0
;
; *****************************************************************************

section .text

    PUSH 0x1c                           ; 00589a40
        ;   Label: core_skeledit.cpp_saveIni_FUN_00589a40
    CALL crt_stack.c___STK_FUN_005ff9f3 ; 00589a45
        ;   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)  ; void crt_stack.c___STK_FUN_005ff9f3()
    PUSH EBX                            ; 00589a4a
    PUSH 0x144                          ; 00589a4b
    PUSH 0x649d66                       ; 00589a50 | = "..\\core\\skeledit.cpp"
    PUSH 0x649d7b                       ; 00589a55 | = "wt"
    PUSH 0x0                            ; 00589a5a
    PUSH 0x681868                       ; 00589a5c | = "skeledit.ini"
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 00589a61
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)  ; _FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
    MOV EBX,EAX                         ; 00589a66
    ADD ESP,0x14                        ; 00589a68
    TEST EAX,EAX                        ; 00589a6b
    JNZ 0x00589a71                      ; 00589a6d
        ;   XREF to: 00589a71 (CONDITIONAL_JUMP)  ; LAB_00589a71
    POP EBX                             ; 00589a6f
    RET                                 ; 00589a70
    PUSH 0x649d7e                       ; 00589a71 | = "// version\n"
        ;   Label: LAB_00589a71
    PUSH EAX                            ; 00589a76
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00589a77
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 00589a7c
    PUSH 0x1                            ; 00589a7f
    PUSH 0x649d8a                       ; 00589a81 | = "%d\n"
    PUSH EBX                            ; 00589a86
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00589a87
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00589a8c
    PUSH 0x649d8e                       ; 00589a8f | = "// lastPOSimported\n"
    PUSH EBX                            ; 00589a94
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00589a95
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 00589a9a
    PUSH 0x3670848                      ; 00589a9d | g_SkeleditLastPOSImported
    PUSH 0x649da2                       ; 00589aa2 | = "\"%s\"\n"
    PUSH EBX                            ; 00589aa7
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00589aa8
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00589aad
    PUSH 0x649da8                       ; 00589ab0 | = "// lastMOTimported\n"
    PUSH EBX                            ; 00589ab5
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00589ab6
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 00589abb
    PUSH 0x3670950                      ; 00589abe | g_SkeleditLastMOTImported
    PUSH 0x649dbc                       ; 00589ac3 | = "\"%s\"\n"
    PUSH EBX                            ; 00589ac8
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00589ac9
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00589ace
    PUSH 0x649dc2                       ; 00589ad1 | = "// lastTestSkeletonDir\n"
    PUSH EBX                            ; 00589ad6
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00589ad7
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x8                         ; 00589adc
    PUSH 0x3670a58                      ; 00589adf | g_SkeleditLastTestSkeletonDir
    PUSH 0x649dda                       ; 00589ae4 | = "\"%s\"\n"
    PUSH EBX                            ; 00589ae9
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00589aea
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00589aef
    PUSH 0x154                          ; 00589af2
    PUSH 0x649de0                       ; 00589af7 | = "..\\core\\skeledit.cpp"
    PUSH EBX                            ; 00589afc
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 00589afd
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 00589b02
    POP EBX                             ; 00589b05
    RET                                 ; 00589b06

