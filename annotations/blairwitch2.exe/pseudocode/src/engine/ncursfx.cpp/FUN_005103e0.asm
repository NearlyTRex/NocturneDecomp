; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CAlphaBitmap * __cdecl engine_ncursfx_cpp_FUN_005103e0(CAlphaBitmap *this_ptr,uint flags)
;
; Parameters:
; CAlphaBitmap *   Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   engine_ncursfx.cpp_CMouse_dtor_FUN_00510070 at 0051007c
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005b854f
;
; *****************************************************************************

section .text

    PUSH 0x5f6f60                       ; 005103e0
        ;   Label: engine_ncursfx.cpp_FUN_005103e0
    PUSH 0xf                            ; 005103e5
    MOV EDX,dword ptr [ESP + 0xc]       ; 005103e7
    PUSH EDX                            ; 005103eb
    CALL crt_memory.c___arrfini_FUN_005b854f ; 005103ec
        ;   XREF to: 005b854f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrfini_FUN_005b854f()
    ADD ESP,0xc                         ; 005103f1
    RET                                 ; 005103f4

