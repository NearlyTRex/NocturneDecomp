; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CAlphaBitmap * core_moon_cpp_CAlphaBitmap_arrdtor30_FUN_005220d0(CAlphaBitmap *this_ptr,uint flags)
;
; Parameters:
; CAlphaBitmap *   Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005c1066
;
; *****************************************************************************

section .text

    PUSH 0x5fca10                       ; 005220d0
        ;   Label: core_moon.cpp_CAlphaBitmap_arrdtor30_FUN_005220d0
    PUSH 0x1e                           ; 005220d5
    MOV EDX,dword ptr [ESP + 0xc]       ; 005220d7
    PUSH EDX                            ; 005220db
    CALL crt_memory.c___arrfini_FUN_005c1066 ; 005220dc
        ;   XREF to: 005c1066 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrfini_FUN_005c1066()
    ADD ESP,0xc                         ; 005220e1
    RET                                 ; 005220e4

