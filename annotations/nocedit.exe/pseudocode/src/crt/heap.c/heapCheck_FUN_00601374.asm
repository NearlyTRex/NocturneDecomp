; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl crt_heap_c_heapCheck_FUN_00601374(void *heap_state_ptr)
;
; Parameters:
; void *           Stack[0x4]:4   heap_state_ptr
;
; XREF[1]:
;   crt_heap.c__heapwalk_FUN_006012c0 at 006012c5
;
; Referenced Globals:
;   Heap* g_MainHeap = 00000000
;   void* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684f00 = 00602434
;   void* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684f08 = 00602434
;
; Called Functions:
;   crt_heap.c_heapWalk_FUN_006012d0
;   crt_sync.c_CriticalSectionStub_FUN_00602434
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00601374
        ;   Label: crt_heap.c_heapCheck_FUN_00601374
    CALL dword ptr [0x00684f00]         ; 00601375 | PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684f00
    MOV EDX,dword ptr [0x00684ed4]      ; 0060137b | g_MainHeap
    PUSH EDX                            ; 00601381
    MOV EBX,dword ptr [ESP + 0xc]       ; 00601382
    PUSH EBX                            ; 00601386
    CALL crt_heap.c_heapWalk_FUN_006012d0 ; 00601387
        ;   XREF to: 006012d0 (UNCONDITIONAL_CALL)  ; int crt_heap.c_heapWalk_FUN_006012d0(HeapState * heap_state_ptr, Heap * heap_ptr)
    ADD ESP,0x8                         ; 0060138c
    MOV EBX,EAX                         ; 0060138f
    CALL dword ptr [0x00684f08]         ; 00601391 | PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684f08
    MOV EAX,EBX                         ; 00601397
    POP EBX                             ; 00601399
    RET                                 ; 0060139a

