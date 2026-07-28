; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ulong __cdecl crt_heap_c_GetBlockSize_FUN_0056afc0(void *ptr)
;
; Parameters:
; void *           Stack[0x4]:4   ptr
;
; XREF[1]:
;   crt_unknown.c_realloc__FUN_00564a88 at 00564abb
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0056afc0
        ;   Label: crt_heap.c_GetBlockSize_FUN_0056afc0
    SUB EAX,0x4                         ; 0056afc4
    MOV EAX,dword ptr [EAX]             ; 0056afc7
    AND AL,0xfe                         ; 0056afc9
    SUB EAX,0x4                         ; 0056afcb
    RET                                 ; 0056afce

