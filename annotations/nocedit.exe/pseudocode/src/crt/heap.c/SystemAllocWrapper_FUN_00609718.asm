; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * __cdecl crt_heap_c_SystemAllocWrapper_FUN_00609718(ulong size)
;
; Parameters:
; ulong            Stack[0x4]:4   size
;
; XREF[1]:
;   crt_heap.c_InternalHeapAlloc_FUN_00601bc0 at 00601c82
;
; Referenced Globals:
;   undefined4 SUB_0060c920
;
; Called Functions:
;   crt_heap.c_AllocateNewHeapBlock_FUN_00609668
;
; *****************************************************************************

section .text

    CALL 0x0060c920                     ; 00609718
        ;   XREF to: 0060c920 (UNCONDITIONAL_CALL)  ; SUB_0060c920
        ;   Label: crt_heap.c_SystemAllocWrapper_FUN_00609718
    MOV EDX,dword ptr [ESP + 0x4]       ; 0060971d
    PUSH EDX                            ; 00609721
    CALL crt_heap.c_AllocateNewHeapBlock_FUN_00609668 ; 00609722
        ;   XREF to: 00609668 (UNCONDITIONAL_CALL)  ; int crt_heap.c_AllocateNewHeapBlock_FUN_00609668(uint size)
    ADD ESP,0x4                         ; 00609727
    RET                                 ; 0060972a

