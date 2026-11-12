; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CAlphaBitmap * core_moon_cpp_CAlphaBitmap_arrdtor75_FUN_00502720(CAlphaBitmap *this_ptr,uint flags)
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

    PUSH 0x5f6f60                       ; 00502720
        ;   Label: core_moon.cpp_CAlphaBitmap_arrdtor75_FUN_00502720
    PUSH 0x4b                           ; 00502725
    MOV EDX,dword ptr [ESP + 0xc]       ; 00502727
    PUSH EDX                            ; 0050272b
    CALL crt_memory.c___arrfini_FUN_005b854f ; 0050272c
        ;   XREF to: 005b854f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005b854f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00502731
    RET                                 ; 00502734

