; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_useDefaultTexture_FUN_004f3a50(void)
;
;
; Called Functions:
;   engine_mini3d.cpp_useTexture_FUN_004ed980
;
; *****************************************************************************

section .text

    PUSH 0x6004c8                       ; 004f3a50
        ;   Label: engine_mini3d.cpp_useDefaultTexture_FUN_004f3a50
    CALL engine_mini3d.cpp_useTexture_FUN_004ed980 ; 004f3a55
        ;   XREF to: 004ed980 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_useTexture_FUN_004ed980(int texture)
    ADD ESP,0x4                         ; 004f3a5a
    RET                                 ; 004f3a5d

