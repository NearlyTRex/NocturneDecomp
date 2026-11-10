; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CAlphaBitmap * __cdecl engine_ncursfx_cpp_CAlphaBitmap_arrdtor15_FUN_005315f0(CAlphaBitmap *this_ptr,uint flags)
;
; Parameters:
; CAlphaBitmap *   Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   engine_ncursfx.cpp_CMouse_dtor_FUN_00531280 at 0053128c
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005c1066
;
; *****************************************************************************

section .text

    PUSH 0x5fca10                       ; 005315f0
        ;   Label: engine_ncursfx.cpp_CAlphaBitmap_arrdtor15_FUN_005315f0
    PUSH 0xf                            ; 005315f5
    MOV EDX,dword ptr [ESP + 0xc]       ; 005315f7
    PUSH EDX                            ; 005315fb
    CALL crt_memory.c___arrfini_FUN_005c1066 ; 005315fc
        ;   XREF to: 005c1066 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrfini_FUN_005c1066()
    ADD ESP,0xc                         ; 00531601
    RET                                 ; 00531604

