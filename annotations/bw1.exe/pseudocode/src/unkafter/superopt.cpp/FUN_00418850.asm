; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_superopt_cpp_FUN_00418850(CAlphaBitmap *param_1)
;
;
; Called Functions:
;   engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d0a0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00418850
        ;   Label: unkafter_superopt.cpp_FUN_00418850
    PUSH EDX                            ; 00418854
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d0a0 ; 00418855
        ;   XREF to: 0040d0a0 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d0a0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 0041885a
    RET                                 ; 0041885d

