; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_superopt_cpp_FUN_00414470(CAlphaBitmap *param_1)
;
;
; Called Functions:
;   engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d300
;
; *****************************************************************************

section .text

    PUSH 0x0                            ; 00414470
        ;   Label: unkafter_superopt.cpp_FUN_00414470
    MOV EDX,dword ptr [ESP + 0x8]       ; 00414472
    PUSH EDX                            ; 00414476
    CALL engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d300 ; 00414477
        ;   XREF to: 0040d300 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d300(CAlphaBitmap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0041447c
    RET                                 ; 0041447f

