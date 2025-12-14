; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void * shape_memdbg.cpp_debugCalloc_FUN_0050f350(SIZE_T count, SIZE_T size, char * filename, int line_number)
;
; Parameters:
; typedef SIZE_T ULONG_PTR Stack[0x4]:4   count
; typedef SIZE_T ULONG_PTR Stack[0x8]:4   size
; char *           Stack[0xc]:4   filename
; int              Stack[0x10]:4   line_number
;
; XREF[9]:
;   core_dcube.cpp_CDemonCube_allocVoxelMemory_FUN_004567b0 at 004567c4
;   core_dpart.cpp_CDemonPart_alloc_FUN_00482180 at 00482261
;   core_dtrace.cpp_CDemonRaytrace_allocCubeList_FUN_00494270 at 0049428e
;   engine_fileio.cpp_CFileManager_rebuildLastPod_FUN_004b5a50 at 004b5fae
;   engine_palette.cpp_CPaletteManager_createOutputPalette_FUN_00545180 at 005451dd
;   shape_design.c_cramTextureList_FUN_0046bb80 at 0046d15c
;   shape_meshlod.cpp_CLodMesh_allocate_FUN_00515ac0 at 00515b37
;   shape_meshlod.cpp_CLodMesh_eqLoad_FUN_0051cdf0 at 0051ce32
;   shape_meshlod.cpp_CLodMesh_loadReplayData_FUN_0051d180 at 0051d1bc
;
; Referenced Globals:
;   TerminatedCString s_debugCalloc_d_d_s_d_00636078
;   TerminatedCString s_Returns_NULL_00636094
;   TerminatedCString s_FAILED_006360a4
;   TerminatedCString s_Returns_08X_006360b2
;   BOOL g_RecursiveCallFlag
;   HANDLE g_FileMutex
;
; Called Functions:
;   crt_memory.c_malloc_FUN_00601bb0
;   crt_memory.c_memset_FUN_005fde40
;   shape_memdbg.cpp_SMemHead_add_FUN_0050eef0
;   shape_memdbg.cpp_SMemHead_recordSourceFile_FUN_0050eea0
;   shape_memdbg.cpp_traceMemory_FUN_0050f150
;   wincore_winrun.cpp_createMutex_FUN_005f3fe0
;   wincore_winrun.cpp_releaseMutex_FUN_005f4050
;   wincore_winrun.cpp_waitForMutex_FUN_005f3ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050f350
        ;   Label: shape_memdbg.cpp_debugCalloc_FUN_0050f350
    PUSH ESI                            ; 0050f351
    PUSH EDI                            ; 0050f352
    PUSH EBP                            ; 0050f353
    MOV EBX,dword ptr [ESP + 0x14]      ; 0050f354
    MOV ESI,dword ptr [ESP + 0x18]      ; 0050f358
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0050f35c
    CMP dword ptr [0x02f0ca50],0x0      ; 0050f360 | g_RecursiveCallFlag
    JNZ 0x0050f38b                      ; 0050f367
        ;   XREF to: 0050f38b (CONDITIONAL_JUMP)  ; LAB_0050f38b
    CMP dword ptr [0x02f0d93c],0x0      ; 0050f369 | g_FileMutex
    JNZ 0x0050f37c                      ; 0050f370
        ;   XREF to: 0050f37c (CONDITIONAL_JUMP)  ; LAB_0050f37c
    CALL wincore_winrun.cpp_createMutex_FUN_005f3fe0 ; 0050f372
        ;   XREF to: 005f3fe0 (UNCONDITIONAL_CALL)  ; HANDLE wincore_winrun.cpp_createMutex_FUN_005f3fe0()
    MOV [0x02f0d93c],EAX                ; 0050f377 | g_FileMutex
    MOV EBP,dword ptr [0x02f0d93c]      ; 0050f37c | g_FileMutex
        ;   Label: LAB_0050f37c
    PUSH EBP                            ; 0050f382
    CALL wincore_winrun.cpp_waitForMutex_FUN_005f3ff0 ; 0050f383
        ;   XREF to: 005f3ff0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_waitForMutex_FUN_005f3ff0(HANDLE mutex_handle)
    ADD ESP,0x4                         ; 0050f388
    MOV EAX,dword ptr [ESP + 0x20]      ; 0050f38b
        ;   Label: LAB_0050f38b
    PUSH EAX                            ; 0050f38f
    PUSH EDI                            ; 0050f390
    PUSH ESI                            ; 0050f391
    IMUL ESI,EBX                        ; 0050f392
    PUSH EBX                            ; 0050f395
    PUSH 0x636078                       ; 0050f396 | = "debugCalloc(%d, %d, %s, %d)"
    CALL shape_memdbg.cpp_traceMemory_FUN_0050f150 ; 0050f39b
        ;   XREF to: 0050f150 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_traceMemory_FUN_0050f150(char * format)
    ADD ESP,0x14                        ; 0050f3a0
    TEST ESI,ESI                        ; 0050f3a3
    JZ 0x0050f3dc                       ; 0050f3a5
        ;   XREF to: 0050f3dc (CONDITIONAL_JUMP)  ; LAB_0050f3dc
    LEA EAX,[ESI + 0x2c]                ; 0050f3a7
    PUSH EAX                            ; 0050f3aa
    CALL crt_memory.c_malloc_FUN_00601bb0 ; 0050f3ab
        ;   XREF to: 00601bb0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_00601bb0(ulong size)
    MOV EBX,EAX                         ; 0050f3b0
    ADD ESP,0x4                         ; 0050f3b2
    TEST EAX,EAX                        ; 0050f3b5
    JNZ 0x0050f3ff                      ; 0050f3b7
        ;   XREF to: 0050f3ff (CONDITIONAL_JUMP)  ; LAB_0050f3ff
    PUSH 0x6360a4                       ; 0050f3b9 | = "   !!FAILED!!"
    CALL shape_memdbg.cpp_traceMemory_FUN_0050f150 ; 0050f3be
        ;   XREF to: 0050f150 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_traceMemory_FUN_0050f150(char * format)
    ADD ESP,0x4                         ; 0050f3c3
    MOV ECX,dword ptr [0x02f0d93c]      ; 0050f3c6 | g_FileMutex
    PUSH ECX                            ; 0050f3cc
    CALL wincore_winrun.cpp_releaseMutex_FUN_005f4050 ; 0050f3cd
        ;   XREF to: 005f4050 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_releaseMutex_FUN_005f4050(HANDLE mutex_handle)
    ADD ESP,0x4                         ; 0050f3d2
    MOV EAX,EBX                         ; 0050f3d5
    POP EBP                             ; 0050f3d7
    POP EDI                             ; 0050f3d8
    POP ESI                             ; 0050f3d9
    POP EBX                             ; 0050f3da
    RET                                 ; 0050f3db
    PUSH 0x636094                       ; 0050f3dc | = "   Returns NULL"
        ;   Label: LAB_0050f3dc
    CALL shape_memdbg.cpp_traceMemory_FUN_0050f150 ; 0050f3e1
        ;   XREF to: 0050f150 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_traceMemory_FUN_0050f150(char * format)
    ADD ESP,0x4                         ; 0050f3e6
    MOV EBX,dword ptr [0x02f0d93c]      ; 0050f3e9 | g_FileMutex
    PUSH EBX                            ; 0050f3ef
    CALL wincore_winrun.cpp_releaseMutex_FUN_005f4050 ; 0050f3f0
        ;   XREF to: 005f4050 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_releaseMutex_FUN_005f4050(HANDLE mutex_handle)
    ADD ESP,0x4                         ; 0050f3f5
    XOR EAX,EAX                         ; 0050f3f8
    POP EBP                             ; 0050f3fa
    POP EDI                             ; 0050f3fb
    POP ESI                             ; 0050f3fc
    POP EBX                             ; 0050f3fd
    RET                                 ; 0050f3fe
    PUSH EDI                            ; 0050f3ff
        ;   Label: LAB_0050f3ff
    PUSH EAX                            ; 0050f400
    MOV dword ptr [EAX + 0x8],ESI       ; 0050f401
    CALL shape_memdbg.cpp_SMemHead_recordSourceFile_FUN_0050eea0 ; 0050f404
        ;   XREF to: 0050eea0 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_SMemHead_recordSourceFile_FUN_0050eea0(SMemHead * header, char * source_filename)
    ADD ESP,0x8                         ; 0050f409
    MOV EAX,dword ptr [ESP + 0x20]      ; 0050f40c
    MOV dword ptr [EBX + 0x20],EAX      ; 0050f410
    LEA EDI,[EBX + 0x28]                ; 0050f413
    MOV EAX,dword ptr [EBX + 0x8]       ; 0050f416
    MOV dword ptr [EBX + 0x24],0xdeadbeef ; 0050f419
    PUSH EBX                            ; 0050f420
    MOV dword ptr [EDI + EAX*0x1],0xbeefdead ; 0050f421
    CALL shape_memdbg.cpp_SMemHead_add_FUN_0050eef0 ; 0050f428
        ;   XREF to: 0050eef0 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_SMemHead_add_FUN_0050eef0(SMemHead * header)
    ADD ESP,0x4                         ; 0050f42d
    PUSH ESI                            ; 0050f430
    PUSH 0x0                            ; 0050f431
    PUSH EDI                            ; 0050f433
    CALL crt_memory.c_memset_FUN_005fde40 ; 0050f434
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0050f439
    PUSH EDI                            ; 0050f43c
    PUSH 0x6360b2                       ; 0050f43d | = "   Returns %08X"
    CALL shape_memdbg.cpp_traceMemory_FUN_0050f150 ; 0050f442
        ;   XREF to: 0050f150 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_traceMemory_FUN_0050f150(char * format)
    ADD ESP,0x8                         ; 0050f447
    MOV EDX,dword ptr [0x02f0d93c]      ; 0050f44a | g_FileMutex
    PUSH EDX                            ; 0050f450
    CALL wincore_winrun.cpp_releaseMutex_FUN_005f4050 ; 0050f451
        ;   XREF to: 005f4050 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_releaseMutex_FUN_005f4050(HANDLE mutex_handle)
    ADD ESP,0x4                         ; 0050f456
    MOV EAX,EDI                         ; 0050f459
    POP EBP                             ; 0050f45b
    POP EDI                             ; 0050f45c
    POP ESI                             ; 0050f45d
    POP EBX                             ; 0050f45e
    RET                                 ; 0050f45f

