; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_drender_cpp_staticInit_FUN_00469500(void)
;
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_ctor_FUN_00469510
;
; *****************************************************************************

section .text

    PUSH 0x1ba5c50                      ; 00469500
        ;   Label: engine_drender.cpp_staticInit_FUN_00469500
    CALL engine_drender.cpp_CDemonRenderer_ctor_FUN_00469510 ; 00469505
        ;   XREF to: 00469510 (UNCONDITIONAL_CALL)  ; CDemonRenderer * engine_drender.cpp_CDemonRenderer_ctor_FUN_00469510(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0046950a
    RET                                 ; 0046950d

