; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float * __cdecl engine_mini3d_cpp_getTransformMatrix_FUN_004f4a60(void)
;
;
; Called Functions:
;   engine_mini3d.cpp_updateTransform_FUN_004f3740
;
; *****************************************************************************

section .text

    CALL engine_mini3d.cpp_updateTransform_FUN_004f3740 ; 004f4a60
        ;   XREF to: 004f3740 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_updateTransform_FUN_004f3740()
        ;   Label: engine_mini3d.cpp_getTransformMatrix_FUN_004f4a60
    MOV EAX,0x1d167ac                   ; 004f4a65
    RET                                 ; 004f4a6a

