; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * __watcallStack crt_iostream_cpp_streambuf_allocBuffer_FUN_0060d790(uint size)
;
; Parameters:
; uint             Stack[0x4]:4   size
;
; XREF[1]:
;   crt_iostream.cpp_doallocate_FUN_0060d677 at 0060d67c
;
; Called Functions:
;   crt_memory.c_malloc_FUN_00601bb0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0060d790
        ;   Label: crt_iostream.cpp_streambuf_allocBuffer_FUN_0060d790
    PUSH EDX                            ; 0060d794
    CALL crt_memory.c_malloc_FUN_00601bb0 ; 0060d795
        ;   XREF to: 00601bb0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_00601bb0(ulong size)
    ADD ESP,0x4                         ; 0060d79a
    RET                                 ; 0060d79d

