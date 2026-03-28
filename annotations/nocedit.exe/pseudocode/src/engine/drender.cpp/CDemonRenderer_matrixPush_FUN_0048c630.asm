; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_matrixPush_FUN_0048c630(CDemonRenderer *this_ptr)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_isBoundingBoxVisible_FUN_00452180 at 004521ad
;
; Called Functions:
;   engine_matrix.c_matrixPush_FUN_0050d620
;
; *****************************************************************************

section .text

    CALL engine_matrix.c_matrixPush_FUN_0050d620 ; 0048c630
        ;   XREF to: 0050d620 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_matrixPush_FUN_0050d620()
        ;   Label: engine_drender.cpp_CDemonRenderer_matrixPush_FUN_0048c630

