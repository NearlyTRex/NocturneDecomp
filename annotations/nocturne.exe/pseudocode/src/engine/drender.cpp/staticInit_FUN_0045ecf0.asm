; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_staticInit_FUN_0045ecf0(void)
;
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_ctor_FUN_0045ed00
;
; *****************************************************************************

section .text

    PUSH 0x1b4d738                      ; 0045ecf0
        ;   Label: engine_drender.cpp_staticInit_FUN_0045ecf0
    CALL engine_drender.cpp_CDemonRenderer_ctor_FUN_0045ed00 ; 0045ecf5
        ;   XREF to: 0045ed00 (UNCONDITIONAL_CALL)  ; CDemonRenderer * engine_drender.cpp_CDemonRenderer_ctor_FUN_0045ed00(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0045ecfa
    RET                                 ; 0045ecfd

