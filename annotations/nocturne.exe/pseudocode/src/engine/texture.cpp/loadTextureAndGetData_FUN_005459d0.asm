; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_texture_cpp_loadTextureAndGetData_FUN_005459d0(SMRGLTextureBasic *texture_info)
;
; Parameters:
; SMRGLTextureBasic * Stack[0x4]:4   texture_info
;
; Called Functions:
;   engine_texture.cpp_ensureTextureLoaded_FUN_00545920
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005459d0
        ;   Label: engine_texture.cpp_loadTextureAndGetData_FUN_005459d0
    PUSH EDX                            ; 005459d4
    CALL engine_texture.cpp_ensureTextureLoaded_FUN_00545920 ; 005459d5
        ;   XREF to: 00545920 (UNCONDITIONAL_CALL)  ; SMRGLHeaderExtended * engine_texture.cpp_ensureTextureLoaded_FUN_00545920(SMRGLTextureBasic * texture)
    ADD ESP,0x4                         ; 005459da
    MOV EAX,dword ptr [ESP + 0x4]       ; 005459dd
    ADD EAX,0x48                        ; 005459e1
    RET                                 ; 005459e4

