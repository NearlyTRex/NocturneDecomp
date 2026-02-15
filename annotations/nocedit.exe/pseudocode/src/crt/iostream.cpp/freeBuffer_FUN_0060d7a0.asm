; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __watcallStack crt_iostream_cpp_freeBuffer_FUN_0060d7a0(void *buffer)
;
; Parameters:
; void *           Stack[0x4]:4   buffer
;
; XREF[3]:
;   crt_iostream.cpp_ios_freeBufferChain_FUN_0060bdc0 at 0060bdd1
;   crt_iostream.cpp_setBuffer_FUN_0060d6a8 at 0060d6e7
;   crt_iostream.cpp_streambuf_destructor_FUN_0060d64f at 0060d66b
;
; Called Functions:
;   crt_memory.c_free_FUN_00601cd0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0060d7a0
        ;   Label: crt_iostream.cpp_freeBuffer_FUN_0060d7a0
    PUSH EDX                            ; 0060d7a4
    CALL crt_memory.c_free_FUN_00601cd0 ; 0060d7a5
        ;   XREF to: 00601cd0 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_00601cd0(void * ptr)
    ADD ESP,0x4                         ; 0060d7aa
    RET                                 ; 0060d7ad

