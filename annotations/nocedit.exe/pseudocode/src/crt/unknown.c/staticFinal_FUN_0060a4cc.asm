; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void crt_unknown.c_staticFinal_FUN_0060a4cc(void)
;
;
; Referenced Globals:
;   void* PTR_crt_sync.c_ResetCriticalSection_FUN_006853ec = 00609f20
;   ReentrantCriticalSection g_GlobalSystemCriticalSection
;   ReentrantCriticalSection g_GlobalThreadCriticalSection
;   void* g_TlsDataBase
;   undefined4 DAT_03f9b8d0
;   ReentrantCriticalSection g_GlobalMemoryCriticalSection
;   LPCRITICAL_SECTION g_GlobalInitLock
;   ReentrantCriticalSection g_GlobalIoCriticalSection
;   ReentrantCriticalSection g_GlobalRuntimeCriticalSection
;
; Called Functions:
;   crt_heap.c_CompactHeapBlocks_FUN_0060c920
;   crt_sync.c_criticalSectionStub_FUN_00609f20
;   crt_unknown.c_DeleteCritcalSectionsMaybe_FUN_00609ff4
;   crt_unknown.c_FUN_00609fc8
;   crt_unknown.c_FUN_0060a394
;   crt_unknown.c_FUN_0060ccb4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060a4cc
        ;   Label: crt_unknown.c_staticFinal_FUN_0060a4cc
    PUSH ESI                            ; 0060a4cd
    PUSH 0x3f9b8a0                      ; 0060a4ce | g_GlobalSystemCriticalSection
    MOV EBX,0x3f9b8c0                   ; 0060a4d3 | g_TlsDataBase
    CALL dword ptr [0x006853ec]         ; 0060a4d8 | PTR_crt_sync.c_ResetCriticalSection_FUN_006853ec
    ADD ESP,0x4                         ; 0060a4de
    LEA ESI,[EBX + 0x100]               ; 0060a4e1 | g_GlobalMemoryCriticalSection
    PUSH EBX                            ; 0060a4e7 | g_TlsDataBase | DAT_03f9b8d0
        ;   Label: LAB_0060a4e7
    CALL dword ptr [0x006853ec]         ; 0060a4e8 | PTR_crt_sync.c_ResetCriticalSection_FUN_006853ec
    ADD EBX,0x10                        ; 0060a4ee | DAT_03f9b8d0
    ADD ESP,0x4                         ; 0060a4f1
    CMP EBX,ESI                         ; 0060a4f4
    JNZ 0x0060a4e7                      ; 0060a4f6
        ;   XREF to: 0060a4e7 (CONDITIONAL_JUMP)  ; LAB_0060a4e7
    PUSH 0x3f9bff0                      ; 0060a4f8 | g_GlobalRuntimeCriticalSection
    CALL dword ptr [0x006853ec]         ; 0060a4fd | PTR_crt_sync.c_ResetCriticalSection_FUN_006853ec
    ADD ESP,0x4                         ; 0060a503
    CALL crt_unknown.c_DeleteCritcalSectionsMaybe_FUN_00609ff4 ; 0060a506
        ;   XREF to: 00609ff4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_DeleteCritcalSectionsMaybe_FUN_00609ff4()
    CALL crt_unknown.c_FUN_0060ccb4     ; 0060a50b
        ;   XREF to: 0060cd20 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0060ccb4()
    CALL crt_heap.c_CompactHeapBlocks_FUN_0060c920 ; 0060a510
        ;   XREF to: 0060c920 (UNCONDITIONAL_CALL)  ; void crt_heap.c_CompactHeapBlocks_FUN_0060c920()
    PUSH 0x3f9b9c0                      ; 0060a515 | g_GlobalMemoryCriticalSection
    CALL dword ptr [0x006853ec]         ; 0060a51a | PTR_crt_sync.c_ResetCriticalSection_FUN_006853ec
    ADD ESP,0x4                         ; 0060a520
    PUSH 0x3f9b8b0                      ; 0060a523 | g_GlobalThreadCriticalSection
    CALL dword ptr [0x006853ec]         ; 0060a528 | PTR_crt_sync.c_ResetCriticalSection_FUN_006853ec
    ADD ESP,0x4                         ; 0060a52e
    PUSH 0x3f9bfe0                      ; 0060a531 | g_GlobalIoCriticalSection
    CALL dword ptr [0x006853ec]         ; 0060a536 | PTR_crt_sync.c_ResetCriticalSection_FUN_006853ec
    ADD ESP,0x4                         ; 0060a53c
    PUSH 0x3f9bfd0                      ; 0060a53f | g_GlobalInitLock
    CALL dword ptr [0x006853ec]         ; 0060a544 | PTR_crt_sync.c_ResetCriticalSection_FUN_006853ec
    ADD ESP,0x4                         ; 0060a54a
    CALL crt_unknown.c_FUN_00609fc8     ; 0060a54d
        ;   XREF to: 00609fc8 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00609fc8()
    CALL crt_unknown.c_FUN_0060a394     ; 0060a552
        ;   XREF to: 0060a394 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0060a394()
    POP ESI                             ; 0060a557
    POP EBX                             ; 0060a558
    RET                                 ; 0060a559

