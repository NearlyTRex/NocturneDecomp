; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004f9330(void)
;
;
; Called Functions:
;   engine_mini3d.cpp_FUN_004f3380
;
; *****************************************************************************

section .text

    PUSH 0x618100                       ; 004f9330
        ;   Label: engine_mini3d.cpp_FUN_004f9330
    CALL engine_mini3d.cpp_FUN_004f3380 ; 004f9335
        ;   XREF to: 004f3380 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f3380()
    ADD ESP,0x4                         ; 004f933a
    RET                                 ; 004f933d

