; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void crt_heap.c_ValidateHeapIntegrity_FUN_00601ce0(void * ptr)
;
; Parameters:
; void *           Stack[0x4]:4   ptr
;
; XREF[5]:
;   crt_heap.c_AllocateNewHeapBlock_FUN_00609668 at 00609706
;   crt_heap.c_ResizeBlockInPlace_FUN_006097b8 at 00609960
;   crt_memory.c_free_FUN_00601cd0 at 00601cd5
;   crt_memory.c_realloc_implementation_FUN_00601e08 at 00601e81
;   crt_process.c_spawnvp_FUN_0060f39c at 0060f82d
;
; Referenced Globals:
;   Heap* g_MainHeap = 00000000
;   Heap* g_SecondaryHeap = 00000000
;   undefined4 DAT_00684edc
;   void* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684f00 = 00602434
;   void* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684f08 = 00602434
;   undefined4 DAT_03f9b210
;   undefined1 DAT_03f9b850
;
; Called Functions:
;   crt_heap.c_CoalesceAndAddFreeBlock_FUN_006094c0
;   crt_sync.c_CriticalSectionStub_FUN_00602434
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00601ce0
        ;   Label: crt_heap.c_ValidateHeapIntegrity_FUN_00601ce0
    PUSH ESI                            ; 00601ce1
    PUSH EDI                            ; 00601ce2
    MOV EDI,dword ptr [ESP + 0x10]      ; 00601ce3
    TEST EDI,EDI                        ; 00601ce7
    JZ 0x00601de2                       ; 00601ce9 | LAB_00601de2
        ;   XREF to: 00601de2 (CONDITIONAL_JUMP)
    CALL dword ptr [0x00684f00]         ; 00601cef | void * PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684f00
    MOV ESI,dword ptr [0x03f9b210]      ; 00601cf5 | undefined4 DAT_03f9b210
    TEST ESI,ESI                        ; 00601cfb
    JZ 0x00601d3f                       ; 00601cfd | LAB_00601d3f
        ;   XREF to: 00601d3f (CONDITIONAL_JUMP)
    CMP ESI,EDI                         ; 00601cff
    JA 0x00601d0f                       ; 00601d01 | LAB_00601d0f
        ;   XREF to: 00601d0f (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESI]             ; 00601d03
    ADD EAX,ESI                         ; 00601d05
    CMP EAX,EDI                         ; 00601d07
    JA 0x00601d9c                       ; 00601d09 | LAB_00601d9c
        ;   XREF to: 00601d9c (CONDITIONAL_JUMP)
    MOV EDX,ESI                         ; 00601d0f
        ;   Label: LAB_00601d0f
    MOV ESI,dword ptr [ESI + 0x4]       ; 00601d11
    TEST ESI,ESI                        ; 00601d14
    JZ 0x00601d28                       ; 00601d16 | LAB_00601d28
        ;   XREF to: 00601d28 (CONDITIONAL_JUMP)
    CMP ESI,EDI                         ; 00601d18
    JA 0x00601d28                       ; 00601d1a | LAB_00601d28
        ;   XREF to: 00601d28 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESI]             ; 00601d1c
    ADD EAX,ESI                         ; 00601d1e
    CMP EAX,EDI                         ; 00601d20
    JA 0x00601d9c                       ; 00601d22 | LAB_00601d9c
        ;   XREF to: 00601d9c (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [EDX + 0x8]       ; 00601d28
        ;   Label: LAB_00601d28
    TEST ESI,ESI                        ; 00601d2b
    JZ 0x00601d3f                       ; 00601d2d | LAB_00601d3f
        ;   XREF to: 00601d3f (CONDITIONAL_JUMP)
    CMP ESI,EDI                         ; 00601d2f
    JA 0x00601d3f                       ; 00601d31 | LAB_00601d3f
        ;   XREF to: 00601d3f (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESI]             ; 00601d33
    ADD EAX,ESI                         ; 00601d35
    CMP EAX,EDI                         ; 00601d37
    JA 0x00601d9c                       ; 00601d39 | LAB_00601d9c
        ;   XREF to: 00601d9c (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [0x00684ed8]      ; 00601d3f | Heap * g_SecondaryHeap
        ;   Label: LAB_00601d3f
    TEST ESI,ESI                        ; 00601d45
    JZ 0x00601d7d                       ; 00601d47 | LAB_00601d7d
        ;   XREF to: 00601d7d (CONDITIONAL_JUMP)
    CMP ESI,EDI                         ; 00601d49
    JA 0x00601d55                       ; 00601d4b | LAB_00601d55
        ;   XREF to: 00601d55 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESI]             ; 00601d4d
    ADD EAX,ESI                         ; 00601d4f
    CMP EAX,EDI                         ; 00601d51
    JA 0x00601d9c                       ; 00601d53 | LAB_00601d9c
        ;   XREF to: 00601d9c (CONDITIONAL_JUMP)
    MOV EDX,ESI                         ; 00601d55
        ;   Label: LAB_00601d55
    MOV ESI,dword ptr [ESI + 0x4]       ; 00601d57
    TEST ESI,ESI                        ; 00601d5a
    JZ 0x00601d6a                       ; 00601d5c | LAB_00601d6a
        ;   XREF to: 00601d6a (CONDITIONAL_JUMP)
    CMP ESI,EDI                         ; 00601d5e
    JA 0x00601d6a                       ; 00601d60 | LAB_00601d6a
        ;   XREF to: 00601d6a (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESI]             ; 00601d62
    ADD EAX,ESI                         ; 00601d64
    CMP EAX,EDI                         ; 00601d66
    JA 0x00601d9c                       ; 00601d68 | LAB_00601d9c
        ;   XREF to: 00601d9c (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [EDX + 0x8]       ; 00601d6a
        ;   Label: LAB_00601d6a
    TEST ESI,ESI                        ; 00601d6d
    JZ 0x00601d7d                       ; 00601d6f | LAB_00601d7d
        ;   XREF to: 00601d7d (CONDITIONAL_JUMP)
    CMP ESI,EDI                         ; 00601d71
    JA 0x00601d7d                       ; 00601d73 | LAB_00601d7d
        ;   XREF to: 00601d7d (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESI]             ; 00601d75
    ADD EAX,ESI                         ; 00601d77
    CMP EAX,EDI                         ; 00601d79
    JA 0x00601d9c                       ; 00601d7b | LAB_00601d9c
        ;   XREF to: 00601d9c (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [0x00684ed4]      ; 00601d7d | Heap * g_MainHeap
        ;   Label: LAB_00601d7d
    TEST ESI,ESI                        ; 00601d83
    JZ 0x00601ddc                       ; 00601d85 | LAB_00601ddc
        ;   XREF to: 00601ddc (CONDITIONAL_JUMP)
    CMP ESI,EDI                         ; 00601d87
        ;   Label: LAB_00601d87
    JA 0x00601d93                       ; 00601d89 | LAB_00601d93
        ;   XREF to: 00601d93 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESI]             ; 00601d8b
    ADD EAX,ESI                         ; 00601d8d
    CMP EAX,EDI                         ; 00601d8f
    JA 0x00601d9c                       ; 00601d91 | LAB_00601d9c
        ;   XREF to: 00601d9c (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [ESI + 0x8]       ; 00601d93
        ;   Label: LAB_00601d93
    TEST ESI,ESI                        ; 00601d96
    JNZ 0x00601d87                      ; 00601d98 | LAB_00601d87
        ;   XREF to: 00601d87 (CONDITIONAL_JUMP)
    JMP 0x00601ddc                      ; 00601d9a | LAB_00601ddc
        ;   XREF to: 00601ddc (UNCONDITIONAL_JUMP)
    MOV EAX,0x684ed4                    ; 00601d9c | Heap * g_MainHeap
        ;   Label: LAB_00601d9c
    MOV DX,DS                           ; 00601da1
    AND EDX,0xffff                      ; 00601da3
    MOV EBX,ESI                         ; 00601da9
    MOV EAX,EDI                         ; 00601dab
    CALL crt_heap.c_CoalesceAndAddFreeBlock_FUN_006094c0 ; 00601dad | void crt_heap.c_CoalesceAndAddFreeBlock_FUN_006094c0(void * ptr, HeapBlock * heap_block, ushort segment)
        ;   XREF to: 006094c0 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [0x00684ed8]      ; 00601db2 | Heap * g_SecondaryHeap
    MOV dword ptr [0x03f9b210],ESI      ; 00601db8 | undefined4 DAT_03f9b210
    CMP ESI,EDX                         ; 00601dbe
    JNC 0x00601dd4                      ; 00601dc0 | LAB_00601dd4
        ;   XREF to: 00601dd4 (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [0x00684edc]      ; 00601dc2 | undefined4 DAT_00684edc
    MOV EAX,dword ptr [ESI + 0x14]      ; 00601dc8
    CMP EAX,EBX                         ; 00601dcb
    JBE 0x00601dd4                      ; 00601dcd | LAB_00601dd4
        ;   XREF to: 00601dd4 (CONDITIONAL_JUMP)
    MOV [0x00684edc],EAX                ; 00601dcf | undefined4 DAT_00684edc
    XOR AH,AH                           ; 00601dd4
        ;   Label: LAB_00601dd4
    MOV byte ptr [0x03f9b850],AH        ; 00601dd6 | undefined1 DAT_03f9b850
    CALL dword ptr [0x00684f08]         ; 00601ddc | void * PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684f08
        ;   Label: LAB_00601ddc
    POP EDI                             ; 00601de2
        ;   Label: LAB_00601de2
    POP ESI                             ; 00601de3
    POP EBX                             ; 00601de4
    RET                                 ; 00601de5

