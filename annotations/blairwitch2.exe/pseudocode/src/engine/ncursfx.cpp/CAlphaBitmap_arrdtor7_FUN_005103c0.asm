; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CAlphaBitmap * __cdecl engine_ncursfx_cpp_CAlphaBitmap_arrdtor7_FUN_005103c0(CAlphaBitmap *this_ptr,uint flags)
;
; Parameters:
; CAlphaBitmap *   Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   engine_ncursfx.cpp_CMouse_dtor_FUN_00510070 at 0051008c
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005b854f
;
; *****************************************************************************

section .text

    PUSH 0x5f6f60                       ; 005103c0
        ;   Label: engine_ncursfx.cpp_CAlphaBitmap_arrdtor7_FUN_005103c0
    PUSH 0x7                            ; 005103c5
    MOV EDX,dword ptr [ESP + 0xc]       ; 005103c7
    PUSH EDX                            ; 005103cb
    CALL crt_memory.c___arrfini_FUN_005b854f ; 005103cc
        ;   XREF to: 005b854f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrfini_FUN_005b854f()
    ADD ESP,0xc                         ; 005103d1
    RET                                 ; 005103d4

