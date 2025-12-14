; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void * crt_heap.c_TryResizeInPlace_FUN_00609974(void * ptr, ulong new_size)
;
; Parameters:
; void *           Stack[0x4]:4   ptr
; ulong            Stack[0x8]:4   new_size
;
; XREF[1]:
;   crt_memory.c_realloc_implementation_FUN_00601e08 at 00601e47
;
; Referenced Globals:
;   Heap* g_MainHeap = 00000000
;   void* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684f00 = 00602434
;   void* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684f08 = 00602434
;
; Called Functions:
;   crt_heap.c_ResizeBlockInPlace_FUN_006097b8
;   crt_sync.c_CriticalSectionStub_FUN_00602434
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00609974
        ;   Label: crt_heap.c_TryResizeInPlace_FUN_00609974
    SUB ESP,0x4                         ; 00609975
    CALL dword ptr [0x00684f00]         ; 00609978 | PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684f00
    MOV EAX,ESP                         ; 0060997e
    PUSH EAX                            ; 00609980
    MOV EDX,dword ptr [ESP + 0x14]      ; 00609981
    PUSH EDX                            ; 00609985
    MOV EBX,dword ptr [ESP + 0x14]      ; 00609986
    PUSH EBX                            ; 0060998a
    MOV EAX,0x684ed4                    ; 0060998b | g_MainHeap
    MOV DX,DS                           ; 00609990
    XOR EAX,EAX                         ; 00609992
    MOV AX,DX                           ; 00609994
    PUSH EAX                            ; 00609997
    CALL crt_heap.c_ResizeBlockInPlace_FUN_006097b8 ; 00609998
        ;   XREF to: 006097b8 (UNCONDITIONAL_CALL)  ; int crt_heap.c_ResizeBlockInPlace_FUN_006097b8(ushort segment, void * ptr, ulong new_size, ulong * pExtraNeeded)
    ADD ESP,0x10                        ; 0060999d
    TEST EAX,EAX                        ; 006099a0
    JNZ 0x006099b1                      ; 006099a2
        ;   XREF to: 006099b1 (CONDITIONAL_JUMP)  ; LAB_006099b1
    CALL dword ptr [0x00684f08]         ; 006099a4 | PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684f08
    MOV EAX,EBX                         ; 006099aa
    ADD ESP,0x4                         ; 006099ac
    POP EBX                             ; 006099af
    RET                                 ; 006099b0
    CALL dword ptr [0x00684f08]         ; 006099b1 | PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684f08
        ;   Label: LAB_006099b1
    XOR EAX,EAX                         ; 006099b7
    ADD ESP,0x4                         ; 006099b9
    POP EBX                             ; 006099bc
    RET                                 ; 006099bd

