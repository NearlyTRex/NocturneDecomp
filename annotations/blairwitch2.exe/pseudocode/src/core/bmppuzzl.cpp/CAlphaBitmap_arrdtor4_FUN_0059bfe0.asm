; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CAlphaBitmap * core_bmppuzzl_cpp_CAlphaBitmap_arrdtor4_FUN_0059bfe0(CAlphaBitmap *this_ptr,uint flags)
;
; Parameters:
; CAlphaBitmap *   Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005b854f
;
; *****************************************************************************

section .text

    PUSH 0x5f6f60                       ; 0059bfe0
        ;   Label: core_bmppuzzl.cpp_CAlphaBitmap_arrdtor4_FUN_0059bfe0
    PUSH 0x4                            ; 0059bfe5
    MOV EDX,dword ptr [ESP + 0xc]       ; 0059bfe7
    PUSH EDX                            ; 0059bfeb
    CALL crt_memory.c___arrfini_FUN_005b854f ; 0059bfec
        ;   XREF to: 005b854f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005b854f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0059bff1
    RET                                 ; 0059bff4

