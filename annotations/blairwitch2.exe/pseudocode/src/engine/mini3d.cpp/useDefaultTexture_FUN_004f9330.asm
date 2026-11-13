; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_useDefaultTexture_FUN_004f9330(void)
;
;
; Called Functions:
;   engine_mini3d.cpp_useTexture_FUN_004f3380
;
; *****************************************************************************

section .text

    PUSH 0x618100                       ; 004f9330
        ;   Label: engine_mini3d.cpp_useDefaultTexture_FUN_004f9330
    CALL engine_mini3d.cpp_useTexture_FUN_004f3380 ; 004f9335
        ;   XREF to: 004f3380 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_useTexture_FUN_004f3380(int texture)
    ADD ESP,0x4                         ; 004f933a
    RET                                 ; 004f933d

