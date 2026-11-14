; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CAlphaBitmap * __cdecl core_fldnotes_cpp_CAlphaBitmap_arrdtor6_FUN_004a6710(CAlphaBitmap *this_ptr,uint flags)
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

    PUSH 0x5f6f60                       ; 004a6710
        ;   Label: core_fldnotes.cpp_CAlphaBitmap_arrdtor6_FUN_004a6710
    PUSH 0x6                            ; 004a6715
    MOV EDX,dword ptr [ESP + 0xc]       ; 004a6717
    PUSH EDX                            ; 004a671b
    CALL crt_memory.c___arrfini_FUN_005b854f ; 004a671c
        ;   XREF to: 005b854f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005b854f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004a6721
    RET                                 ; 004a6724

