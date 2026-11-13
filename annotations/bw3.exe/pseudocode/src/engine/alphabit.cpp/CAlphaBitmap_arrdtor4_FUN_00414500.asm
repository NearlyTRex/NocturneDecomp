; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CAlphaBitmap * __cdecl engine_alphabit_cpp_CAlphaBitmap_arrdtor4_FUN_00414500(CAlphaBitmap *this_ptr,uint flags)
;
; Parameters:
; CAlphaBitmap *   Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005a3de6
;
; *****************************************************************************

section .text

    PUSH 0x5dbf20                       ; 00414500
        ;   Label: engine_alphabit.cpp_CAlphaBitmap_arrdtor4_FUN_00414500
    PUSH 0x4                            ; 00414505
    MOV EDX,dword ptr [ESP + 0xc]       ; 00414507
    PUSH EDX                            ; 0041450b
    CALL crt_memory.c___arrfini_FUN_005a3de6 ; 0041450c
        ;   XREF to: 005a3de6 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005a3de6(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00414511
    RET                                 ; 00414514

