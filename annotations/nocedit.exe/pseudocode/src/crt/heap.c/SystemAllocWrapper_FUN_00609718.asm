; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void * crt_heap.c_SystemAllocWrapper_FUN_00609718(ulong size)
;
; Parameters:
; ulong            Stack[0x4]:4   size
;
; XREF[1]:
;   crt_heap.c_InternalHeapAlloc_FUN_00601bc0 at 00601c82
;
; Called Functions:
;   crt_heap.c_AllocateNewHeapBlock_FUN_00609668
;   crt_heap.c_CompactHeapBlocks_FUN_0060c920
;
; *****************************************************************************

section .text

    CALL crt_heap.c_CompactHeapBlocks_FUN_0060c920 ; 00609718
        ;   XREF to: 0060c920 (UNCONDITIONAL_CALL)  ; void crt_heap.c_CompactHeapBlocks_FUN_0060c920()
        ;   Label: crt_heap.c_SystemAllocWrapper_FUN_00609718
    MOV EDX,dword ptr [ESP + 0x4]       ; 0060971d
    PUSH EDX                            ; 00609721
    CALL crt_heap.c_AllocateNewHeapBlock_FUN_00609668 ; 00609722
        ;   XREF to: 00609668 (UNCONDITIONAL_CALL)  ; int crt_heap.c_AllocateNewHeapBlock_FUN_00609668(uint size)
    ADD ESP,0x4                         ; 00609727
    RET                                 ; 0060972a

