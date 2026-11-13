; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_staticInit_FUN_0046b0d0(void)
;
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_ctor_FUN_0046b0e0
;
; *****************************************************************************

section .text

    PUSH 0x1bdd7e4                      ; 0046b0d0
        ;   Label: engine_drender.cpp_staticInit_FUN_0046b0d0
    CALL engine_drender.cpp_CDemonRenderer_ctor_FUN_0046b0e0 ; 0046b0d5
        ;   XREF to: 0046b0e0 (UNCONDITIONAL_CALL)  ; CDemonRenderer * engine_drender.cpp_CDemonRenderer_ctor_FUN_0046b0e0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0046b0da
    RET                                 ; 0046b0dd

