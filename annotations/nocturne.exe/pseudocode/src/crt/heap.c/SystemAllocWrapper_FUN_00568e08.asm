; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * __cdecl crt_heap_c_SystemAllocWrapper_FUN_00568e08(ulong size)
;
; Parameters:
; ulong            Stack[0x4]:4   size
;
; XREF[1]:
;   crt_unknown.c_InternalHeapAlloc_FUN_005635c0 at 00563682
;
; Called Functions:
;   crt_heap.c_AllocateNewHeapBlock_FUN_00568d58
;   crt_unknown.c_FUN_0056f2d0
;
; *****************************************************************************

section .text

    CALL crt_unknown.c_FUN_0056f2d0     ; 00568e08
        ;   XREF to: 0056f2d0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056f2d0()
        ;   Label: crt_heap.c_SystemAllocWrapper_FUN_00568e08
    MOV EDX,dword ptr [ESP + 0x4]       ; 00568e0d
    PUSH EDX                            ; 00568e11
    CALL crt_heap.c_AllocateNewHeapBlock_FUN_00568d58 ; 00568e12
        ;   XREF to: 00568d58 (UNCONDITIONAL_CALL)  ; int crt_heap.c_AllocateNewHeapBlock_FUN_00568d58(uint size)
    ADD ESP,0x4                         ; 00568e17
    RET                                 ; 00568e1a

