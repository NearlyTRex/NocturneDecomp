; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * __cdecl crt_heap_c__heap_alloc_FUN_10008890(size_t size)
;
; Parameters:
; size_t           Stack[0x4]:4   size
;
; XREF[1]:
;   crt_heap.c__nh_malloc_FUN_10008850 at 1000886e
;
; Referenced Globals:
;   undefined4 DAT_10241974
;   void* PTR_HeapAlloc_10242238 = 002425fe
;
; Called Functions:
;   HeapAlloc
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 10008890
        ;   Label: crt_heap.c__heap_alloc_FUN_10008890
    MOV ECX,dword ptr [0x10241974]      ; 10008894 | DAT_10241974
    PUSH EAX                            ; 1000889a
    PUSH 0x0                            ; 1000889b
    PUSH ECX                            ; 1000889d
    CALL dword ptr [0x10242238]         ; 1000889e | PTR_HeapAlloc_10242238
    RET                                 ; 100088a4

