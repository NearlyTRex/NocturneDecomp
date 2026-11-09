; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_drender_cpp_staticInit_FUN_00481a10(void)
;
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_ctor_FUN_00481a20
;
; *****************************************************************************

section .text

    PUSH 0x1bc120c                      ; 00481a10
        ;   Label: engine_drender.cpp_staticInit_FUN_00481a10
    CALL engine_drender.cpp_CDemonRenderer_ctor_FUN_00481a20 ; 00481a15
        ;   XREF to: 00481a20 (UNCONDITIONAL_CALL)  ; CDemonRenderer * engine_drender.cpp_CDemonRenderer_ctor_FUN_00481a20(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00481a1a
    RET                                 ; 00481a1d

