; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CAlphaBitmap * __cdecl engine_ncursfx_cpp_FUN_00508ec0(CAlphaBitmap *this_ptr,uint flags)
;
; Parameters:
; CAlphaBitmap *   Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   engine_ncursfx.cpp_CMouse_dtor_FUN_00508b50 at 00508b5c
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005a3de6
;
; *****************************************************************************

section .text

    PUSH 0x5dbf20                       ; 00508ec0
        ;   Label: engine_ncursfx.cpp_FUN_00508ec0
    PUSH 0xf                            ; 00508ec5
    MOV EDX,dword ptr [ESP + 0xc]       ; 00508ec7
    PUSH EDX                            ; 00508ecb
    CALL crt_memory.c___arrfini_FUN_005a3de6 ; 00508ecc
        ;   XREF to: 005a3de6 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrfini_FUN_005a3de6()
    ADD ESP,0xc                         ; 00508ed1
    RET                                 ; 00508ed4

