; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
;
; Parameters:
; void *           Stack[0x4]:4   ptr
; char *           Stack[0x8]:4   filename
; int              Stack[0xc]:4   line_number
;
; XREF[75]:
;   cockpit_ckptutil.c_loadEdgeListFile_FUN_004331f0 at 00433357
;   cockpit_ckptutil.c_rotateBitmap_FUN_00434870 at 00434960
;   cockpit_pkbitmap.cpp_CPackedBitmap_freePackedData_FUN_0054a940 at 0054a959
;   cockpit_pkbitmap.cpp_CPackedBitmap_free_FUN_0054a8e0 at 0054a92a
;   cockpit_pkbitmap.cpp_CPackedBitmap_loadAndCompressBitmap_FUN_0054b080 at 0054b0bb
;   cockpit_pkbitmap.cpp_CPackedBitmap_reloadFromBitmapFile_FUN_0054b000 at 0054b059
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadJoinedRAW_FUN_0054bf40 at 0054c137
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_reload_FUN_0054c1e0 at 0054c2c8
;   core_dcamera.cpp_CDemonCamera_free_FUN_0044c360 at 0044c3cf
;   core_dcube.cpp_CDemonCube_freeMemory_FUN_004569b0 at 00456a00
;   ... and 65 more
;
; Referenced Globals:
;   TerminatedCString s_shape_memdbg_cpp_00635e2f
;   TerminatedCString s_headFromPtr_NULL_ptr_00635e43
;   TerminatedCString s_debugFree_08X_s_d_006360c2
;   TerminatedCString s_shape_memdbg_cpp_006360da
;   TerminatedCString s_Tried_to_free_NULL_point_006360ee
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   BOOL g_RecursiveCallFlag
;   HANDLE g_FileMutex
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_memory.c_free_FUN_00601cd0
;   shape_memdbg.cpp_SMemHead_checkMemory_FUN_0050f020
;   shape_memdbg.cpp_SMemHead_remove_FUN_0050ef20
;   shape_memdbg.cpp_traceMemory_FUN_0050f150
;   wincore_winrun.cpp_createMutex_FUN_005f3fe0
;   wincore_winrun.cpp_releaseMutex_FUN_005f4050
;   wincore_winrun.cpp_waitForMutex_FUN_005f3ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050f460
        ;   Label: shape_memdbg.cpp_debugFree_FUN_0050f460
    PUSH ESI                            ; 0050f461
    PUSH EDI                            ; 0050f462
    PUSH EBP                            ; 0050f463
    MOV EBX,dword ptr [ESP + 0x14]      ; 0050f464
    MOV ESI,dword ptr [ESP + 0x18]      ; 0050f468
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0050f46c
    CMP dword ptr [0x02f0ca50],0x0      ; 0050f470 | g_RecursiveCallFlag
    JNZ 0x0050f49b                      ; 0050f477
        ;   XREF to: 0050f49b (CONDITIONAL_JUMP)  ; LAB_0050f49b
    CMP dword ptr [0x02f0d93c],0x0      ; 0050f479 | g_FileMutex
    JNZ 0x0050f48c                      ; 0050f480
        ;   XREF to: 0050f48c (CONDITIONAL_JUMP)  ; LAB_0050f48c
    CALL wincore_winrun.cpp_createMutex_FUN_005f3fe0 ; 0050f482
        ;   XREF to: 005f3fe0 (UNCONDITIONAL_CALL)  ; HANDLE wincore_winrun.cpp_createMutex_FUN_005f3fe0()
    MOV [0x02f0d93c],EAX                ; 0050f487 | g_FileMutex
    MOV EBP,dword ptr [0x02f0d93c]      ; 0050f48c | g_FileMutex
        ;   Label: LAB_0050f48c
    PUSH EBP                            ; 0050f492
    CALL wincore_winrun.cpp_waitForMutex_FUN_005f3ff0 ; 0050f493
        ;   XREF to: 005f3ff0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_waitForMutex_FUN_005f3ff0(HANDLE mutex_handle)
    ADD ESP,0x4                         ; 0050f498
    PUSH EDI                            ; 0050f49b
        ;   Label: LAB_0050f49b
    PUSH ESI                            ; 0050f49c
    PUSH EBX                            ; 0050f49d
    PUSH 0x6360c2                       ; 0050f49e | = "debugFree(%08X, %s, %d)"
    CALL shape_memdbg.cpp_traceMemory_FUN_0050f150 ; 0050f4a3
        ;   XREF to: 0050f150 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_traceMemory_FUN_0050f150(char * format)
    ADD ESP,0x10                        ; 0050f4a8
    TEST EBX,EBX                        ; 0050f4ab
    JNZ 0x0050f4d3                      ; 0050f4ad
        ;   XREF to: 0050f4d3 (CONDITIONAL_JUMP)  ; LAB_0050f4d3
    PUSH EDI                            ; 0050f4af
    PUSH ESI                            ; 0050f4b0
    MOV EAX,0x6360da                    ; 0050f4b1 | = "..\\shape\\memdbg.cpp"
    MOV EDX,0x168                       ; 0050f4b6
    PUSH 0x6360ee                       ; 0050f4bb | = "Tried to free NULL pointer at %s line %d"
    MOV [0x02f0ca48],EAX                ; 0050f4c0 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 0050f4c5 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0050f4cb
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0xc                         ; 0050f4d0
    MOV EBP,EBX                         ; 0050f4d3
        ;   Label: LAB_0050f4d3
    TEST EBX,EBX                        ; 0050f4d5
    JZ 0x0050f50d                       ; 0050f4d7
        ;   XREF to: 0050f50d (CONDITIONAL_JUMP)  ; LAB_0050f50d
    PUSH EDI                            ; 0050f4d9
        ;   Label: LAB_0050f4d9
    PUSH ESI                            ; 0050f4da
    LEA EBX,[EBP + -0x28]               ; 0050f4db
    PUSH EBX                            ; 0050f4de
    CALL shape_memdbg.cpp_SMemHead_checkMemory_FUN_0050f020 ; 0050f4df
        ;   XREF to: 0050f020 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_SMemHead_checkMemory_FUN_0050f020(SMemHead * header, char * filename, int line_number)
    ADD ESP,0xc                         ; 0050f4e4
    PUSH EBX                            ; 0050f4e7
    CALL shape_memdbg.cpp_SMemHead_remove_FUN_0050ef20 ; 0050f4e8
        ;   XREF to: 0050ef20 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_SMemHead_remove_FUN_0050ef20(SMemHead * header)
    ADD ESP,0x4                         ; 0050f4ed
    PUSH EBX                            ; 0050f4f0
    CALL crt_memory.c_free_FUN_00601cd0 ; 0050f4f1
        ;   XREF to: 00601cd0 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_00601cd0(void * ptr)
    ADD ESP,0x4                         ; 0050f4f6
    MOV ESI,dword ptr [0x02f0d93c]      ; 0050f4f9 | g_FileMutex
    PUSH ESI                            ; 0050f4ff
    CALL wincore_winrun.cpp_releaseMutex_FUN_005f4050 ; 0050f500
        ;   XREF to: 005f4050 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_releaseMutex_FUN_005f4050(HANDLE mutex_handle)
    ADD ESP,0x4                         ; 0050f505
    POP EBP                             ; 0050f508
    POP EDI                             ; 0050f509
    POP ESI                             ; 0050f50a
    POP EBX                             ; 0050f50b
    RET                                 ; 0050f50c
    MOV ECX,0x635e2f                    ; 0050f50d | = "..\\shape\\memdbg.cpp"
        ;   Label: LAB_0050f50d
    MOV EBX,0x99                        ; 0050f512
    PUSH 0x635e43                       ; 0050f517 | = "headFromPtr - NULL ptr"
    MOV dword ptr [0x02f0ca48],ECX      ; 0050f51c | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 0050f522 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0050f528
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0050f52d
    JMP 0x0050f4d9                      ; 0050f530
        ;   XREF to: 0050f4d9 (UNCONDITIONAL_JUMP)  ; LAB_0050f4d9

