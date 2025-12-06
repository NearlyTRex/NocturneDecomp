; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_drender.cpp_staticInit_FUN_0048a6b0(void)
;
;
; Referenced Globals:
;   CDemonRenderer g_CDemonRendererInstance
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_ctor_FUN_0048a6c0
;
; *****************************************************************************

section .text

    PUSH 0x2c6d578                      ; 0048a6b0 | CDemonRenderer g_CDemonRendererInstance
        ;   Label: engine_drender.cpp_staticInit_FUN_0048a6b0
    CALL engine_drender.cpp_CDemonRenderer_ctor_FUN_0048a6c0 ; 0048a6b5 | void engine_drender.cpp_CDemonRenderer_ctor_FUN_0048a6c0(CDemonRenderer * this_ptr)
        ;   XREF to: 0048a6c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0048a6ba
    RET                                 ; 0048a6bd

