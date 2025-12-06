; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl ulong crt_heap.c_GetBlockSize_FUN_00609790(void * ptr)
;
; Parameters:
; void *           Stack[0x4]:4   ptr
;
; XREF[1]:
;   crt_memory.c_realloc_implementation_FUN_00601e08 at 00601e3b
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00609790
        ;   Label: crt_heap.c_GetBlockSize_FUN_00609790
    SUB EAX,0x4                         ; 00609794
    MOV EAX,dword ptr [EAX]             ; 00609797
    AND AL,0xfe                         ; 00609799
    SUB EAX,0x4                         ; 0060979b
    RET                                 ; 0060979e

