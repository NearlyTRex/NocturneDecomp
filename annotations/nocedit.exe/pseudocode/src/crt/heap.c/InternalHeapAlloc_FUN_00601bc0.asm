; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * __cdecl crt_heap_c_InternalHeapAlloc_FUN_00601bc0(ulong size)
;
; Parameters:
; ulong            Stack[0x4]:4   size
; Local Variables:
; Heap *           Stack[-0x24]:4  local_24
;
; XREF[4]:
;   crt_memory.c_malloc_FUN_00601bb0 at 00601bb5
;   crt_memory.c_realloc__FUN_00601e08 at 00601e56
;   crt_process.c_build_cmdline_FUN_00610258 at 006102c8
;   crt_process.c_spawnvp_FUN_0060f39c at 0060f4f3
;
; Referenced Globals:
;   Heap* g_MainHeap = 00000000
;   Heap* g_SecondaryHeap = 00000000
;   int INT_00684edc = 0x0
;   void* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684f00 = 00602434
;   void* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684f08 = 00602434
;   char[16] CHAR_ARRAY_03f9b850
;
; Called Functions:
;   crt_heap.c_AllocateFromFreeList_FUN_00609410
;   crt_heap.c_AllocatorFallbackStub_FUN_00609780
;   crt_heap.c_SystemAllocWrapper_FUN_00609718
;   crt_sync.c_CriticalSectionStub_FUN_00602434
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00601bc0
        ;   Label: crt_heap.c_InternalHeapAlloc_FUN_00601bc0
    PUSH ESI                            ; 00601bc1
    PUSH EDI                            ; 00601bc2
    PUSH ES                             ; 00601bc3
    PUSH FS                             ; 00601bc4
    PUSH GS                             ; 00601bc6
    PUSH EBP                            ; 00601bc8
    SUB ESP,0xc                         ; 00601bc9
    MOV EBP,dword ptr [ESP + 0x2c]      ; 00601bcc
    TEST EBP,EBP                        ; 00601bd0
    JZ 0x00601bd9                       ; 00601bd2
        ;   XREF to: 00601bd9 (CONDITIONAL_JUMP)  ; LAB_00601bd9
    CMP EBP,-0x2c                       ; 00601bd4
    JBE 0x00601be0                      ; 00601bd7
        ;   XREF to: 00601be0 (CONDITIONAL_JUMP)  ; LAB_00601be0
    XOR EAX,EAX                         ; 00601bd9
        ;   Label: LAB_00601bd9
    JMP 0x00601cc1                      ; 00601bdb
        ;   XREF to: 00601cc1 (UNCONDITIONAL_JUMP)  ; LAB_00601cc1
    LEA EAX,[EBP + 0xb]                 ; 00601be0
        ;   Label: LAB_00601be0
    AND AL,0xf8                         ; 00601be3
    MOV dword ptr [ESP + 0x4],EAX       ; 00601be5
    CMP EAX,0x10                        ; 00601be9
    JNC 0x00601bf6                      ; 00601bec
        ;   XREF to: 00601bf6 (CONDITIONAL_JUMP)  ; LAB_00601bf6
    MOV dword ptr [ESP + 0x4],0x10      ; 00601bee
    CALL dword ptr [0x00684f00]         ; 00601bf6 | PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684f00
        ;   Label: LAB_00601bf6
    XOR ECX,ECX                         ; 00601bfc
    XOR AH,AH                           ; 00601bfe
    MOV dword ptr [ESP],ECX             ; 00601c00
    MOV byte ptr [ESP + 0x8],AH         ; 00601c03
    MOV EAX,dword ptr [ESP + 0x4]       ; 00601c07
        ;   Label: LAB_00601c07
    CMP EAX,dword ptr [0x00684edc]      ; 00601c0b | INT_00684edc
    JBE 0x00601c2b                      ; 00601c11
        ;   XREF to: 00601c2b (CONDITIONAL_JUMP)  ; LAB_00601c2b
    MOV ESI,dword ptr [0x00684ed8]      ; 00601c13 | g_SecondaryHeap
    TEST ESI,ESI                        ; 00601c19
    JNZ 0x00601c39                      ; 00601c1b
        ;   XREF to: 00601c39 (CONDITIONAL_JUMP)  ; LAB_00601c39
    MOV dword ptr [0x00684edc],ESI      ; 00601c1d | INT_00684edc
    MOV ESI,dword ptr [0x00684ed4]      ; 00601c23 | g_MainHeap
    JMP 0x00601c39                      ; 00601c29
        ;   XREF to: 00601c39 (UNCONDITIONAL_JUMP)  ; LAB_00601c39
    XOR EDI,EDI                         ; 00601c2b
        ;   Label: LAB_00601c2b
    MOV ESI,dword ptr [0x00684ed4]      ; 00601c2d | g_MainHeap
    MOV dword ptr [0x00684edc],EDI      ; 00601c33 | INT_00684edc
    TEST ESI,ESI                        ; 00601c39
        ;   Label: LAB_00601c39
    JZ 0x00601c7a                       ; 00601c3b
        ;   XREF to: 00601c7a (CONDITIONAL_JUMP)  ; LAB_00601c7a
    MOV EDI,dword ptr [ESI + 0x14]      ; 00601c3d
    MOV dword ptr [0x00684ed8],ESI      ; 00601c40 | g_SecondaryHeap
    CMP EDI,EBP                         ; 00601c46
    JC 0x00601c67                       ; 00601c48
        ;   XREF to: 00601c67 (CONDITIONAL_JUMP)  ; LAB_00601c67
    MOV EAX,0x684ed4                    ; 00601c4a | g_MainHeap
    MOV DX,DS                           ; 00601c4f
    AND EDX,0xffff                      ; 00601c51
    MOV EBX,ESI                         ; 00601c57
    MOV EAX,EBP                         ; 00601c59
    CALL crt_heap.c_AllocateFromFreeList_FUN_00609410 ; 00601c5b
        ;   XREF to: 00609410 (UNCONDITIONAL_CALL)  ; void * crt_heap.c_AllocateFromFreeList_FUN_00609410(ulong size, HeapBlock * free_block, ushort ds_segment)
    MOV dword ptr [ESP],EAX             ; 00601c60
    TEST EAX,EAX                        ; 00601c63
    JNZ 0x00601cb0                      ; 00601c65
        ;   XREF to: 00601cb0 (CONDITIONAL_JUMP)  ; LAB_00601cb0
    CMP EDI,dword ptr [0x00684edc]      ; 00601c67 | INT_00684edc
        ;   Label: LAB_00601c67
    JBE 0x00601c75                      ; 00601c6d
        ;   XREF to: 00601c75 (CONDITIONAL_JUMP)  ; LAB_00601c75
    MOV dword ptr [0x00684edc],EDI      ; 00601c6f | INT_00684edc
    MOV ESI,dword ptr [ESI + 0x8]       ; 00601c75
        ;   Label: LAB_00601c75
    JMP 0x00601c39                      ; 00601c78
        ;   XREF to: 00601c39 (UNCONDITIONAL_JUMP)  ; LAB_00601c39
    CMP byte ptr [ESP + 0x8],0x0        ; 00601c7a
        ;   Label: LAB_00601c7a
    JNZ 0x00601c8e                      ; 00601c7f
        ;   XREF to: 00601c8e (CONDITIONAL_JUMP)  ; LAB_00601c8e
    PUSH EBP                            ; 00601c81
    CALL crt_heap.c_SystemAllocWrapper_FUN_00609718 ; 00601c82
        ;   XREF to: 00609718 (UNCONDITIONAL_CALL)  ; void * crt_heap.c_SystemAllocWrapper_FUN_00609718(ulong size)
    ADD ESP,0x4                         ; 00601c87
    TEST EAX,EAX                        ; 00601c8a
    JNZ 0x00601ca6                      ; 00601c8c
        ;   XREF to: 00601ca6 (CONDITIONAL_JUMP)  ; LAB_00601ca6
    PUSH EBP                            ; 00601c8e
        ;   Label: LAB_00601c8e
    CALL crt_heap.c_AllocatorFallbackStub_FUN_00609780 ; 00601c8f
        ;   XREF to: 00609780 (UNCONDITIONAL_CALL)  ; int crt_heap.c_AllocatorFallbackStub_FUN_00609780(uint size)
    ADD ESP,0x4                         ; 00601c94
    TEST EAX,EAX                        ; 00601c97
    JZ 0x00601cb0                       ; 00601c99
        ;   XREF to: 00601cb0 (CONDITIONAL_JUMP)  ; LAB_00601cb0
    XOR BL,BL                           ; 00601c9b
    MOV byte ptr [ESP + 0x8],BL         ; 00601c9d
    JMP 0x00601c07                      ; 00601ca1
        ;   XREF to: 00601c07 (UNCONDITIONAL_JUMP)  ; LAB_00601c07
    MOV byte ptr [ESP + 0x8],0x1        ; 00601ca6
        ;   Label: LAB_00601ca6
    JMP 0x00601c07                      ; 00601cab
        ;   XREF to: 00601c07 (UNCONDITIONAL_JUMP)  ; LAB_00601c07
    XOR BH,BH                           ; 00601cb0
        ;   Label: LAB_00601cb0
    MOV byte ptr [0x03f9b850],BH        ; 00601cb2 | CHAR_ARRAY_03f9b850
    CALL dword ptr [0x00684f08]         ; 00601cb8 | PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684f08
    MOV EAX,dword ptr [ESP]             ; 00601cbe
    ADD ESP,0xc                         ; 00601cc1
        ;   Label: LAB_00601cc1
    POP EBP                             ; 00601cc4
    POP GS                              ; 00601cc5
    POP FS                              ; 00601cc7
    POP ES                              ; 00601cc9
    POP EDI                             ; 00601cca
    POP ESI                             ; 00601ccb
    POP EBX                             ; 00601ccc
    RET                                 ; 00601ccd

