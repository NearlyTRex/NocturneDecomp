; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CAlphaBitmap * __cdecl core_moon_cpp_CAlphaBitmap_arrdtor_FUN_004df1f0(CAlphaBitmap *this_ptr,uint flags)
;
; Parameters:
; CAlphaBitmap *   Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x59df00                       ; 004df1f0
        ;   Label: core_moon.cpp_CAlphaBitmap_arrdtor_FUN_004df1f0
    PUSH 0x1e                           ; 004df1f5
    MOV EDX,dword ptr [ESP + 0xc]       ; 004df1f7
    PUSH EDX                            ; 004df1fb
    CALL crt_memory.c___arrfini_FUN_0056494f ; 004df1fc
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_0056494f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004df201
    RET                                 ; 004df204

