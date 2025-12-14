; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void * shape_memdbg.cpp_debugRealloc_FUN_0050f540(void * ptr, int new_size, char * filename, int line_number)
;
; Parameters:
; void *           Stack[0x4]:4   ptr
; int              Stack[0x8]:4   new_size
; char *           Stack[0xc]:4   filename
; int              Stack[0x10]:4   line_number
;
; XREF[35]:
;   cockpit_ckptutil.c_traceConnectedEdges_FUN_00434af0 at 00435529
;   cockpit_pkbitmap.cpp_CPackedBitmap_load_FUN_0054b190 at 0054b2c2
;   core_bodypart.cpp_CBodyPart_setCounts_FUN_004191d0 at 00419242
;   core_dtrace.cpp_CDemonRaytrace_savePVS_FUN_00498fb0 at 00499000
;   core_morph.cpp_CMorphModel_FUN_0052a710 at 0052a78c
;   core_morph.cpp_CMorphModel_addPart_FUN_0052a580 at 0052a625
;   core_script.cpp_CScript_LoadingScriptFile_FUN_0055a370 at 0055a3e4
;   core_script.cpp_CScript_ReallocSomething_FUN_00567510 at 00567539
;   core_script.cpp_CScript_dbLoad_FUN_005603c0 at 005605dc
;   core_script.cpp_CScript_editorAction_FUN_00564820 at 00564ad7
;   ... and 25 more
;
; Referenced Globals:
;   TerminatedCString s_shape_memdbg_cpp_00635e2f
;   TerminatedCString s_headFromPtr_NULL_ptr_00635e43
;   TerminatedCString s_debugRealloc_08X_d_s_d_00636117
;   TerminatedCString s_FAILED_00636136
;   TerminatedCString s_Returns_08X_00636144
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   BOOL g_RecursiveCallFlag
;   HANDLE g_FileMutex
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_memory.c_realloc_FUN_00601df0
;   shape_memdbg.cpp_debugFree_FUN_0050f460
;   shape_memdbg.cpp_debugMalloc_FUN_0050f250
;   shape_memdbg.cpp_SMemHead_add_FUN_0050eef0
;   shape_memdbg.cpp_SMemHead_checkMemory_FUN_0050f020
;   shape_memdbg.cpp_SMemHead_recordSourceFile_FUN_0050eea0
;   shape_memdbg.cpp_SMemHead_remove_FUN_0050ef20
;   shape_memdbg.cpp_traceMemory_FUN_0050f150
;   wincore_winrun.cpp_createMutex_FUN_005f3fe0
;   wincore_winrun.cpp_releaseMutex_FUN_005f4050
;   wincore_winrun.cpp_waitForMutex_FUN_005f3ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050f540
        ;   Label: shape_memdbg.cpp_debugRealloc_FUN_0050f540
    PUSH ESI                            ; 0050f541
    PUSH EDI                            ; 0050f542
    PUSH EBP                            ; 0050f543
    MOV ESI,dword ptr [ESP + 0x14]      ; 0050f544
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0050f548
    MOV EBP,dword ptr [ESP + 0x20]      ; 0050f54c
    CMP dword ptr [0x02f0ca50],0x0      ; 0050f550 | g_RecursiveCallFlag
    JNZ 0x0050f57b                      ; 0050f557
        ;   XREF to: 0050f57b (CONDITIONAL_JUMP)  ; LAB_0050f57b
    CMP dword ptr [0x02f0d93c],0x0      ; 0050f559 | g_FileMutex
    JNZ 0x0050f56c                      ; 0050f560
        ;   XREF to: 0050f56c (CONDITIONAL_JUMP)  ; LAB_0050f56c
    CALL wincore_winrun.cpp_createMutex_FUN_005f3fe0 ; 0050f562
        ;   XREF to: 005f3fe0 (UNCONDITIONAL_CALL)  ; HANDLE wincore_winrun.cpp_createMutex_FUN_005f3fe0()
    MOV [0x02f0d93c],EAX                ; 0050f567 | g_FileMutex
    MOV EBX,dword ptr [0x02f0d93c]      ; 0050f56c | g_FileMutex
        ;   Label: LAB_0050f56c
    PUSH EBX                            ; 0050f572
    CALL wincore_winrun.cpp_waitForMutex_FUN_005f3ff0 ; 0050f573
        ;   XREF to: 005f3ff0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_waitForMutex_FUN_005f3ff0(HANDLE mutex_handle)
    ADD ESP,0x4                         ; 0050f578
    PUSH EBP                            ; 0050f57b
        ;   Label: LAB_0050f57b
    PUSH EDI                            ; 0050f57c
    MOV EAX,dword ptr [ESP + 0x20]      ; 0050f57d
    PUSH EAX                            ; 0050f581
    PUSH ESI                            ; 0050f582
    PUSH 0x636117                       ; 0050f583 | = "debugRealloc(%08X, %d, %s, %d)"
    CALL shape_memdbg.cpp_traceMemory_FUN_0050f150 ; 0050f588
        ;   XREF to: 0050f150 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_traceMemory_FUN_0050f150(char * format)
    ADD ESP,0x14                        ; 0050f58d
    TEST ESI,ESI                        ; 0050f590
    JZ 0x0050f626                       ; 0050f592
        ;   XREF to: 0050f626 (CONDITIONAL_JUMP)  ; LAB_0050f626
    CMP dword ptr [ESP + 0x18],0x0      ; 0050f598
    JZ 0x0050f649                       ; 0050f59d
        ;   XREF to: 0050f649 (CONDITIONAL_JUMP)  ; LAB_0050f649
    MOV EBX,ESI                         ; 0050f5a3
    TEST ESI,ESI                        ; 0050f5a5
    JNZ 0x0050f5cc                      ; 0050f5a7
        ;   XREF to: 0050f5cc (CONDITIONAL_JUMP)  ; LAB_0050f5cc
    MOV ECX,0x635e2f                    ; 0050f5a9 | = "..\\shape\\memdbg.cpp"
    MOV ESI,0x99                        ; 0050f5ae
    PUSH 0x635e43                       ; 0050f5b3 | = "headFromPtr - NULL ptr"
    MOV dword ptr [0x02f0ca48],ECX      ; 0050f5b8 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 0050f5be | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0050f5c4
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0050f5c9
    PUSH EBP                            ; 0050f5cc
        ;   Label: LAB_0050f5cc
    PUSH EDI                            ; 0050f5cd
    LEA ESI,[EBX + -0x28]               ; 0050f5ce
    PUSH ESI                            ; 0050f5d1
    CALL shape_memdbg.cpp_SMemHead_checkMemory_FUN_0050f020 ; 0050f5d2
        ;   XREF to: 0050f020 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_SMemHead_checkMemory_FUN_0050f020(SMemHead * header, char * filename, int line_number)
    ADD ESP,0xc                         ; 0050f5d7
    PUSH ESI                            ; 0050f5da
    CALL shape_memdbg.cpp_SMemHead_remove_FUN_0050ef20 ; 0050f5db
        ;   XREF to: 0050ef20 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_SMemHead_remove_FUN_0050ef20(SMemHead * header)
    ADD ESP,0x4                         ; 0050f5e0
    MOV EAX,dword ptr [ESP + 0x18]      ; 0050f5e3
    ADD EAX,0x2c                        ; 0050f5e7
    PUSH EAX                            ; 0050f5ea
    PUSH ESI                            ; 0050f5eb
    CALL crt_memory.c_realloc_FUN_00601df0 ; 0050f5ec
        ;   XREF to: 00601df0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_00601df0(void * ptr, ulong new_size)
    MOV EBX,EAX                         ; 0050f5f1
    ADD ESP,0x8                         ; 0050f5f3
    TEST EAX,EAX                        ; 0050f5f6
    JNZ 0x0050f65c                      ; 0050f5f8
        ;   XREF to: 0050f65c (CONDITIONAL_JUMP)  ; LAB_0050f65c
    PUSH ESI                            ; 0050f5fa
    CALL shape_memdbg.cpp_SMemHead_add_FUN_0050eef0 ; 0050f5fb
        ;   XREF to: 0050eef0 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_SMemHead_add_FUN_0050eef0(SMemHead * header)
    ADD ESP,0x4                         ; 0050f600
    PUSH 0x636136                       ; 0050f603 | = "   !!FAILED!!"
    CALL shape_memdbg.cpp_traceMemory_FUN_0050f150 ; 0050f608
        ;   XREF to: 0050f150 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_traceMemory_FUN_0050f150(char * format)
    ADD ESP,0x4                         ; 0050f60d
    MOV EBP,dword ptr [0x02f0d93c]      ; 0050f610 | g_FileMutex
    PUSH EBP                            ; 0050f616
    CALL wincore_winrun.cpp_releaseMutex_FUN_005f4050 ; 0050f617
        ;   XREF to: 005f4050 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_releaseMutex_FUN_005f4050(HANDLE mutex_handle)
        ;   Label: LAB_0050f617
    ADD ESP,0x4                         ; 0050f61c
    XOR EAX,EAX                         ; 0050f61f
    POP EBP                             ; 0050f621
    POP EDI                             ; 0050f622
    POP ESI                             ; 0050f623
    POP EBX                             ; 0050f624
    RET                                 ; 0050f625
    MOV EDX,dword ptr [0x02f0d93c]      ; 0050f626 | g_FileMutex
        ;   Label: LAB_0050f626
    PUSH EDX                            ; 0050f62c
    CALL wincore_winrun.cpp_releaseMutex_FUN_005f4050 ; 0050f62d
        ;   XREF to: 005f4050 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_releaseMutex_FUN_005f4050(HANDLE mutex_handle)
    ADD ESP,0x4                         ; 0050f632
    PUSH EBP                            ; 0050f635
    PUSH EDI                            ; 0050f636
    MOV ECX,dword ptr [ESP + 0x20]      ; 0050f637
    PUSH ECX                            ; 0050f63b
    CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250 ; 0050f63c
        ;   XREF to: 0050f250 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugMalloc_FUN_0050f250(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 0050f641
    POP EBP                             ; 0050f644
    POP EDI                             ; 0050f645
    POP ESI                             ; 0050f646
    POP EBX                             ; 0050f647
    RET                                 ; 0050f648
    PUSH EBP                            ; 0050f649
        ;   Label: LAB_0050f649
    PUSH EDI                            ; 0050f64a
    PUSH ESI                            ; 0050f64b
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 0050f64c
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 0050f651
    MOV EAX,[0x02f0d93c]                ; 0050f654 | g_FileMutex
    PUSH EAX                            ; 0050f659
    JMP 0x0050f617                      ; 0050f65a
        ;   XREF to: 0050f617 (UNCONDITIONAL_JUMP)  ; LAB_0050f617
    PUSH EDI                            ; 0050f65c
        ;   Label: LAB_0050f65c
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0050f65d
    PUSH EBX                            ; 0050f661
    MOV dword ptr [EBX + 0x8],EAX       ; 0050f662
    CALL shape_memdbg.cpp_SMemHead_recordSourceFile_FUN_0050eea0 ; 0050f665
        ;   XREF to: 0050eea0 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_SMemHead_recordSourceFile_FUN_0050eea0(SMemHead * header, char * source_filename)
    ADD ESP,0x8                         ; 0050f66a
    MOV dword ptr [EBX + 0x24],0xdeadbeef ; 0050f66d
    LEA ESI,[EBX + 0x28]                ; 0050f674
    MOV EAX,dword ptr [EBX + 0x8]       ; 0050f677
    MOV dword ptr [EBX + 0x20],EBP      ; 0050f67a
    PUSH EBX                            ; 0050f67d
    MOV dword ptr [ESI + EAX*0x1],0xbeefdead ; 0050f67e
    CALL shape_memdbg.cpp_SMemHead_add_FUN_0050eef0 ; 0050f685
        ;   XREF to: 0050eef0 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_SMemHead_add_FUN_0050eef0(SMemHead * header)
    ADD ESP,0x4                         ; 0050f68a
    PUSH ESI                            ; 0050f68d
    PUSH 0x636144                       ; 0050f68e | = "   Returns %08X"
    CALL shape_memdbg.cpp_traceMemory_FUN_0050f150 ; 0050f693
        ;   XREF to: 0050f150 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_traceMemory_FUN_0050f150(char * format)
    ADD ESP,0x8                         ; 0050f698
    MOV EDI,dword ptr [0x02f0d93c]      ; 0050f69b | g_FileMutex
    PUSH EDI                            ; 0050f6a1
    CALL wincore_winrun.cpp_releaseMutex_FUN_005f4050 ; 0050f6a2
        ;   XREF to: 005f4050 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_releaseMutex_FUN_005f4050(HANDLE mutex_handle)
    ADD ESP,0x4                         ; 0050f6a7
    MOV EAX,ESI                         ; 0050f6aa
    POP EBP                             ; 0050f6ac
    POP EDI                             ; 0050f6ad
    POP ESI                             ; 0050f6ae
    POP EBX                             ; 0050f6af
    RET                                 ; 0050f6b0

