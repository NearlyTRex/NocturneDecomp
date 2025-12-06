; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void * crt_heap.c_InternalHeapAlloc_FUN_00601bc0(ulong size)
;
; Parameters:
; ulong            Stack[0x4]:4   size
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
;
; XREF[5]:
;   crt_memory.c_malloc_FUN_00601bb0 at 00601bb5
;   crt_memory.c_realloc_implementation_FUN_00601e08 at 00601e56
;   crt_process.c_build_cmdline_FUN_00610258 at 006102c8
;   crt_process.c_spawnvp_FUN_0060f39c at 0060f4f3
;   crt_unknown.c_staticInit_FUN_00608f20 at 00608f4d
;
; Referenced Globals:
;   Heap* g_MainHeap = 00000000
;   Heap* g_SecondaryHeap = 00000000
;   undefined4 DAT_00684edc
;   void* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684f00 = 00602434
;   void* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684f08 = 00602434
;   undefined1 DAT_03f9b850
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
    JZ 0x00601bd9                       ; 00601bd2 | LAB_00601bd9
        ;   XREF to: 00601bd9 (CONDITIONAL_JUMP)
    CMP EBP,-0x2c                       ; 00601bd4
    JBE 0x00601be0                      ; 00601bd7 | LAB_00601be0
        ;   XREF to: 00601be0 (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 00601bd9
        ;   Label: LAB_00601bd9
    JMP 0x00601cc1                      ; 00601bdb | LAB_00601cc1
        ;   XREF to: 00601cc1 (UNCONDITIONAL_JUMP)
    LEA EAX,[EBP + 0xb]                 ; 00601be0
        ;   Label: LAB_00601be0
    AND AL,0xf8                         ; 00601be3
    MOV dword ptr [ESP + 0x4],EAX       ; 00601be5
    CMP EAX,0x10                        ; 00601be9
    JNC 0x00601bf6                      ; 00601bec | LAB_00601bf6
        ;   XREF to: 00601bf6 (CONDITIONAL_JUMP)
    MOV dword ptr [ESP + 0x4],0x10      ; 00601bee
    CALL dword ptr [0x00684f00]         ; 00601bf6 | void * PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684f00
        ;   Label: LAB_00601bf6
    XOR ECX,ECX                         ; 00601bfc
    XOR AH,AH                           ; 00601bfe
    MOV dword ptr [ESP],ECX             ; 00601c00
    MOV byte ptr [ESP + 0x8],AH         ; 00601c03
    MOV EAX,dword ptr [ESP + 0x4]       ; 00601c07
        ;   Label: LAB_00601c07
    CMP EAX,dword ptr [0x00684edc]      ; 00601c0b | undefined4 DAT_00684edc
    JBE 0x00601c2b                      ; 00601c11 | LAB_00601c2b
        ;   XREF to: 00601c2b (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [0x00684ed8]      ; 00601c13 | Heap * g_SecondaryHeap
    TEST ESI,ESI                        ; 00601c19
    JNZ 0x00601c39                      ; 00601c1b | LAB_00601c39
        ;   XREF to: 00601c39 (CONDITIONAL_JUMP)
    MOV dword ptr [0x00684edc],ESI      ; 00601c1d | undefined4 DAT_00684edc
    MOV ESI,dword ptr [0x00684ed4]      ; 00601c23 | Heap * g_MainHeap
    JMP 0x00601c39                      ; 00601c29 | LAB_00601c39
        ;   XREF to: 00601c39 (UNCONDITIONAL_JUMP)
    XOR EDI,EDI                         ; 00601c2b
        ;   Label: LAB_00601c2b
    MOV ESI,dword ptr [0x00684ed4]      ; 00601c2d | Heap * g_MainHeap
    MOV dword ptr [0x00684edc],EDI      ; 00601c33 | undefined4 DAT_00684edc
    TEST ESI,ESI                        ; 00601c39
        ;   Label: LAB_00601c39
    JZ 0x00601c7a                       ; 00601c3b | LAB_00601c7a
        ;   XREF to: 00601c7a (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [ESI + 0x14]      ; 00601c3d
    MOV dword ptr [0x00684ed8],ESI      ; 00601c40 | Heap * g_SecondaryHeap
    CMP EDI,EBP                         ; 00601c46
    JC 0x00601c67                       ; 00601c48 | LAB_00601c67
        ;   XREF to: 00601c67 (CONDITIONAL_JUMP)
    MOV EAX,0x684ed4                    ; 00601c4a | Heap * g_MainHeap
    MOV DX,DS                           ; 00601c4f
    AND EDX,0xffff                      ; 00601c51
    MOV EBX,ESI                         ; 00601c57
    MOV EAX,EBP                         ; 00601c59
    CALL crt_heap.c_AllocateFromFreeList_FUN_00609410 ; 00601c5b | void * crt_heap.c_AllocateFromFreeList_FUN_00609410(ulong size, HeapBlock * free_block, ushort ds_segment)
        ;   XREF to: 00609410 (UNCONDITIONAL_CALL)
    MOV dword ptr [ESP],EAX             ; 00601c60
    TEST EAX,EAX                        ; 00601c63
    JNZ 0x00601cb0                      ; 00601c65 | LAB_00601cb0
        ;   XREF to: 00601cb0 (CONDITIONAL_JUMP)
    CMP EDI,dword ptr [0x00684edc]      ; 00601c67 | undefined4 DAT_00684edc
        ;   Label: LAB_00601c67
    JBE 0x00601c75                      ; 00601c6d | LAB_00601c75
        ;   XREF to: 00601c75 (CONDITIONAL_JUMP)
    MOV dword ptr [0x00684edc],EDI      ; 00601c6f | undefined4 DAT_00684edc
    MOV ESI,dword ptr [ESI + 0x8]       ; 00601c75
        ;   Label: LAB_00601c75
    JMP 0x00601c39                      ; 00601c78 | LAB_00601c39
        ;   XREF to: 00601c39 (UNCONDITIONAL_JUMP)
    CMP byte ptr [ESP + 0x8],0x0        ; 00601c7a
        ;   Label: LAB_00601c7a
    JNZ 0x00601c8e                      ; 00601c7f | LAB_00601c8e
        ;   XREF to: 00601c8e (CONDITIONAL_JUMP)
    PUSH EBP                            ; 00601c81
    CALL crt_heap.c_SystemAllocWrapper_FUN_00609718 ; 00601c82 | void * crt_heap.c_SystemAllocWrapper_FUN_00609718(ulong size)
        ;   XREF to: 00609718 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00601c87
    TEST EAX,EAX                        ; 00601c8a
    JNZ 0x00601ca6                      ; 00601c8c | LAB_00601ca6
        ;   XREF to: 00601ca6 (CONDITIONAL_JUMP)
    PUSH EBP                            ; 00601c8e
        ;   Label: LAB_00601c8e
    CALL crt_heap.c_AllocatorFallbackStub_FUN_00609780 ; 00601c8f | int crt_heap.c_AllocatorFallbackStub_FUN_00609780(uint size)
        ;   XREF to: 00609780 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00601c94
    TEST EAX,EAX                        ; 00601c97
    JZ 0x00601cb0                       ; 00601c99 | LAB_00601cb0
        ;   XREF to: 00601cb0 (CONDITIONAL_JUMP)
    XOR BL,BL                           ; 00601c9b
    MOV byte ptr [ESP + 0x8],BL         ; 00601c9d
    JMP 0x00601c07                      ; 00601ca1 | LAB_00601c07
        ;   XREF to: 00601c07 (UNCONDITIONAL_JUMP)
    MOV byte ptr [ESP + 0x8],0x1        ; 00601ca6
        ;   Label: LAB_00601ca6
    JMP 0x00601c07                      ; 00601cab | LAB_00601c07
        ;   XREF to: 00601c07 (UNCONDITIONAL_JUMP)
    XOR BH,BH                           ; 00601cb0
        ;   Label: LAB_00601cb0
    MOV byte ptr [0x03f9b850],BH        ; 00601cb2 | undefined1 DAT_03f9b850
    CALL dword ptr [0x00684f08]         ; 00601cb8 | void * PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684f08
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

