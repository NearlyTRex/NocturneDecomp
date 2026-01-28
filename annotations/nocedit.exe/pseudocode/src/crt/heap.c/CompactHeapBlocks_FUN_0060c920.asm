; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl crt_heap_c_CompactHeapBlocks_FUN_0060c920(void)
;
;
; XREF[2]:
;   crt_heap.c_SystemAllocWrapper_FUN_00609718 at 00609718
;   crt_unknown.c_staticFinal_FUN_0060a4cc at 0060a510
;
; Referenced Globals:
;   Heap* g_MainHeap = 00000000
;   void* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684f00 = 00602434
;   void* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684f08 = 00602434
;
; Called Functions:
;   crt_heap.c_UnlinkAndFreeBlock_FUN_0060c9bc
;   crt_sync.c_CriticalSectionStub_FUN_00602434
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060c920
        ;   Label: crt_heap.c_CompactHeapBlocks_FUN_0060c920
    PUSH ESI                            ; 0060c921
    CALL dword ptr [0x00684f00]         ; 0060c922 | PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684f00
    MOV EAX,[0x00684ed4]                ; 0060c928 | g_MainHeap
    TEST EAX,EAX                        ; 0060c92d
    JZ 0x0060c951                       ; 0060c92f
        ;   XREF to: 0060c951 (CONDITIONAL_JUMP)  ; LAB_0060c951
    MOV EDX,dword ptr [EAX]             ; 0060c931
        ;   Label: LAB_0060c931
    MOV ECX,dword ptr [EAX + 0x24]      ; 0060c933
    SUB EDX,0x2c                        ; 0060c936
    MOV ESI,dword ptr [ECX]             ; 0060c939
    MOV EBX,dword ptr [EAX + 0x8]       ; 0060c93b
    CMP EDX,ESI                         ; 0060c93e
    JNZ 0x0060c94b                      ; 0060c940
        ;   XREF to: 0060c94b (CONDITIONAL_JUMP)  ; LAB_0060c94b
    PUSH EAX                            ; 0060c942
    CALL crt_heap.c_UnlinkAndFreeBlock_FUN_0060c9bc ; 0060c943
        ;   XREF to: 0060c9bc (UNCONDITIONAL_CALL)  ; void crt_heap.c_UnlinkAndFreeBlock_FUN_0060c9bc(HeapBlock * block)
    ADD ESP,0x4                         ; 0060c948
    MOV EAX,EBX                         ; 0060c94b
        ;   Label: LAB_0060c94b
    TEST EBX,EBX                        ; 0060c94d
    JNZ 0x0060c931                      ; 0060c94f
        ;   XREF to: 0060c931 (CONDITIONAL_JUMP)  ; LAB_0060c931
    CALL dword ptr [0x00684f08]         ; 0060c951 | PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684f08
        ;   Label: LAB_0060c951
    XOR EAX,EAX                         ; 0060c957
    POP ESI                             ; 0060c959
    POP EBX                             ; 0060c95a
    RET                                 ; 0060c95b

