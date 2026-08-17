; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_matrixPush_FUN_00460be0(CDemonRenderer *this_ptr)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_isBoundingBoxVisible_FUN_00445fe0 at 0044600d
;
; Called Functions:
;   engine_matrix.c_matrixPush_FUN_004cdac0
;
; *****************************************************************************

section .text

    CALL engine_matrix.c_matrixPush_FUN_004cdac0 ; 00460be0
        ;   XREF to: 004cdac0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_matrixPush_FUN_004cdac0()
        ;   Label: engine_drender.cpp_CDemonRenderer_matrixPush_FUN_00460be0
    RET                                 ; 00460be5

