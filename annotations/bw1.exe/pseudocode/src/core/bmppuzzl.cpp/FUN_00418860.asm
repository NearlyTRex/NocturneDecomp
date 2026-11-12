; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_bmppuzzl_cpp_FUN_00418860(CAlphaBitmap *param_1)
;
;
; Called Functions:
;   engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d0c0
;
; *****************************************************************************

section .text

    PUSH 0x0                            ; 00418860
        ;   Label: core_bmppuzzl.cpp_FUN_00418860
    MOV EDX,dword ptr [ESP + 0x8]       ; 00418862
    PUSH EDX                            ; 00418866
    CALL engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d0c0 ; 00418867
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d0c0(CAlphaBitmap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0041886c
    RET                                 ; 0041886f

