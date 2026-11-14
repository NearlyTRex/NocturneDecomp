; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_useDefaultTexture_FUN_00518280(void)
;
;
; Called Functions:
;   engine_mini3d.cpp_useTexture_FUN_005121b0
;
; *****************************************************************************

section .text

    PUSH 0x61f5e8                       ; 00518280
        ;   Label: engine_mini3d.cpp_useDefaultTexture_FUN_00518280
    CALL engine_mini3d.cpp_useTexture_FUN_005121b0 ; 00518285
        ;   XREF to: 005121b0 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_useTexture_FUN_005121b0(int texture)
    ADD ESP,0x4                         ; 0051828a
    RET                                 ; 0051828d

