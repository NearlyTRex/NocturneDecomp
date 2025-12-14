; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void * shape_memdbg.cpp_debugMalloc_FUN_0050f250(int size, char * filename, int line_number)
;
; Parameters:
; int              Stack[0x4]:4   size
; char *           Stack[0x8]:4   filename
; int              Stack[0xc]:4   line_number
;
; XREF[50]:
;   cockpit_ckptutil.c_loadBitmapWithPalette_FUN_004317b0 at 0043181c
;   cockpit_ckptutil.c_loadEdgeListFile_FUN_004331f0 at 00433378
;   cockpit_ckptutil.c_loadRotatedBitmapFile_FUN_00434690 at 004347b0
;   cockpit_ckptutil.c_readBitmapFile_FUN_00431870 at 00431911
;   cockpit_ckptutil.c_rotateBitmap_FUN_00434870 at 004348a9
;   cockpit_pkbitmap.cpp_CPackedBitmap_readPBMFile_FUN_0054b690 at 0054b816
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadJoinedRAW_FUN_0054bf40 at 0054c03d
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_reload_FUN_0054c1e0 at 0054c228
;   core_dcamera.cpp_CDemonCamera_init_FUN_0044c190 at 0044c2a0
;   core_dcube.cpp_CDemonCube_allocGeometryMemory_FUN_00456840 at 0045696a
;   ... and 40 more
;
; Referenced Globals:
;   TerminatedCString s_debugMalloc_d_s_d_00636032
;   TerminatedCString s_Returns_NULL_0063604a
;   TerminatedCString s_FAILED_0063605a
;   TerminatedCString s_Returns_08X_00636068
;   BOOL g_RecursiveCallFlag
;   HANDLE g_FileMutex
;
; Called Functions:
;   crt_memory.c_malloc_FUN_00601bb0
;   shape_memdbg.cpp_SMemHead_add_FUN_0050eef0
;   shape_memdbg.cpp_SMemHead_recordSourceFile_FUN_0050eea0
;   shape_memdbg.cpp_traceMemory_FUN_0050f150
;   wincore_winrun.cpp_createMutex_FUN_005f3fe0
;   wincore_winrun.cpp_releaseMutex_FUN_005f4050
;   wincore_winrun.cpp_waitForMutex_FUN_005f3ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050f250
        ;   Label: shape_memdbg.cpp_debugMalloc_FUN_0050f250
    PUSH ESI                            ; 0050f251
    PUSH EDI                            ; 0050f252
    PUSH EBP                            ; 0050f253
    MOV ESI,dword ptr [ESP + 0x14]      ; 0050f254
    CMP dword ptr [0x02f0ca50],0x0      ; 0050f258 | g_RecursiveCallFlag
    JNZ 0x0050f283                      ; 0050f25f
        ;   XREF to: 0050f283 (CONDITIONAL_JUMP)  ; LAB_0050f283
    CMP dword ptr [0x02f0d93c],0x0      ; 0050f261 | g_FileMutex
    JNZ 0x0050f274                      ; 0050f268
        ;   XREF to: 0050f274 (CONDITIONAL_JUMP)  ; LAB_0050f274
    CALL wincore_winrun.cpp_createMutex_FUN_005f3fe0 ; 0050f26a
        ;   XREF to: 005f3fe0 (UNCONDITIONAL_CALL)  ; HANDLE wincore_winrun.cpp_createMutex_FUN_005f3fe0()
    MOV [0x02f0d93c],EAX                ; 0050f26f | g_FileMutex
    MOV EBX,dword ptr [0x02f0d93c]      ; 0050f274 | g_FileMutex
        ;   Label: LAB_0050f274
    PUSH EBX                            ; 0050f27a
    CALL wincore_winrun.cpp_waitForMutex_FUN_005f3ff0 ; 0050f27b
        ;   XREF to: 005f3ff0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_waitForMutex_FUN_005f3ff0(HANDLE mutex_handle)
    ADD ESP,0x4                         ; 0050f280
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0050f283
        ;   Label: LAB_0050f283
    PUSH EDI                            ; 0050f287
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0050f288
    PUSH EBP                            ; 0050f28c
    PUSH ESI                            ; 0050f28d
    PUSH 0x636032                       ; 0050f28e | = "debugMalloc(%d, %s, %d)"
    CALL shape_memdbg.cpp_traceMemory_FUN_0050f150 ; 0050f293
        ;   XREF to: 0050f150 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_traceMemory_FUN_0050f150(char * format)
    ADD ESP,0x10                        ; 0050f298
    TEST ESI,ESI                        ; 0050f29b
    JZ 0x0050f2d4                       ; 0050f29d
        ;   XREF to: 0050f2d4 (CONDITIONAL_JUMP)  ; LAB_0050f2d4
    LEA EAX,[ESI + 0x2c]                ; 0050f29f
    PUSH EAX                            ; 0050f2a2
    CALL crt_memory.c_malloc_FUN_00601bb0 ; 0050f2a3
        ;   XREF to: 00601bb0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_00601bb0(ulong size)
    MOV EBX,EAX                         ; 0050f2a8
    ADD ESP,0x4                         ; 0050f2aa
    TEST EAX,EAX                        ; 0050f2ad
    JNZ 0x0050f2f7                      ; 0050f2af
        ;   XREF to: 0050f2f7 (CONDITIONAL_JUMP)  ; LAB_0050f2f7
    PUSH 0x63605a                       ; 0050f2b1 | = "   !!FAILED!!"
    CALL shape_memdbg.cpp_traceMemory_FUN_0050f150 ; 0050f2b6
        ;   XREF to: 0050f150 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_traceMemory_FUN_0050f150(char * format)
    ADD ESP,0x4                         ; 0050f2bb
    MOV ECX,dword ptr [0x02f0d93c]      ; 0050f2be | g_FileMutex
    PUSH ECX                            ; 0050f2c4
    CALL wincore_winrun.cpp_releaseMutex_FUN_005f4050 ; 0050f2c5
        ;   XREF to: 005f4050 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_releaseMutex_FUN_005f4050(HANDLE mutex_handle)
    ADD ESP,0x4                         ; 0050f2ca
    MOV EAX,EBX                         ; 0050f2cd
    POP EBP                             ; 0050f2cf
    POP EDI                             ; 0050f2d0
    POP ESI                             ; 0050f2d1
    POP EBX                             ; 0050f2d2
    RET                                 ; 0050f2d3
    PUSH 0x63604a                       ; 0050f2d4 | = "   Returns NULL"
        ;   Label: LAB_0050f2d4
    CALL shape_memdbg.cpp_traceMemory_FUN_0050f150 ; 0050f2d9
        ;   XREF to: 0050f150 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_traceMemory_FUN_0050f150(char * format)
    ADD ESP,0x4                         ; 0050f2de
    MOV EBX,dword ptr [0x02f0d93c]      ; 0050f2e1 | g_FileMutex
    PUSH EBX                            ; 0050f2e7
    CALL wincore_winrun.cpp_releaseMutex_FUN_005f4050 ; 0050f2e8
        ;   XREF to: 005f4050 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_releaseMutex_FUN_005f4050(HANDLE mutex_handle)
    ADD ESP,0x4                         ; 0050f2ed
    XOR EAX,EAX                         ; 0050f2f0
    POP EBP                             ; 0050f2f2
    POP EDI                             ; 0050f2f3
    POP ESI                             ; 0050f2f4
    POP EBX                             ; 0050f2f5
    RET                                 ; 0050f2f6
    PUSH EBP                            ; 0050f2f7
        ;   Label: LAB_0050f2f7
    PUSH EAX                            ; 0050f2f8
    MOV dword ptr [EAX + 0x8],ESI       ; 0050f2f9
    CALL shape_memdbg.cpp_SMemHead_recordSourceFile_FUN_0050eea0 ; 0050f2fc
        ;   XREF to: 0050eea0 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_SMemHead_recordSourceFile_FUN_0050eea0(SMemHead * header, char * source_filename)
    LEA ESI,[EBX + 0x28]                ; 0050f301
    MOV dword ptr [EBX + 0x24],0xdeadbeef ; 0050f304
    ADD ESP,0x8                         ; 0050f30b
    MOV EAX,dword ptr [EBX + 0x8]       ; 0050f30e
    MOV dword ptr [EBX + 0x20],EDI      ; 0050f311
    PUSH EBX                            ; 0050f314
    MOV dword ptr [ESI + EAX*0x1],0xbeefdead ; 0050f315
    CALL shape_memdbg.cpp_SMemHead_add_FUN_0050eef0 ; 0050f31c
        ;   XREF to: 0050eef0 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_SMemHead_add_FUN_0050eef0(SMemHead * header)
    ADD ESP,0x4                         ; 0050f321
    PUSH ESI                            ; 0050f324
    PUSH 0x636068                       ; 0050f325 | = "   Returns %08X"
    CALL shape_memdbg.cpp_traceMemory_FUN_0050f150 ; 0050f32a
        ;   XREF to: 0050f150 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_traceMemory_FUN_0050f150(char * format)
    ADD ESP,0x8                         ; 0050f32f
    MOV EDX,dword ptr [0x02f0d93c]      ; 0050f332 | g_FileMutex
    PUSH EDX                            ; 0050f338
    CALL wincore_winrun.cpp_releaseMutex_FUN_005f4050 ; 0050f339
        ;   XREF to: 005f4050 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_releaseMutex_FUN_005f4050(HANDLE mutex_handle)
    ADD ESP,0x4                         ; 0050f33e
    MOV EAX,ESI                         ; 0050f341
    POP EBP                             ; 0050f343
    POP EDI                             ; 0050f344
    POP ESI                             ; 0050f345
    POP EBX                             ; 0050f346
    RET                                 ; 0050f347

