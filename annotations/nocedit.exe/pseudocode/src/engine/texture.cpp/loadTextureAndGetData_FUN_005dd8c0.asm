; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_texture_cpp_loadTextureAndGetData_FUN_005dd8c0(SMRGLTextureBasic *texture_info)
;
; Parameters:
; SMRGLTextureBasic * Stack[0x4]:4   texture_info
;
; XREF[1]:
;   engine_3d.c_renderPolygonEngineAPIPremiumMultiState_FUN_004070c0 at 004071d0
;
; Called Functions:
;   engine_texture.cpp_ensureTextureLoaded_FUN_005dd800
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005dd8c0
        ;   Label: engine_texture.cpp_loadTextureAndGetData_FUN_005dd8c0
    PUSH EDX                            ; 005dd8c4
    CALL engine_texture.cpp_ensureTextureLoaded_FUN_005dd800 ; 005dd8c5
        ;   XREF to: 005dd800 (UNCONDITIONAL_CALL)  ; SMRGLHeaderExtended * engine_texture.cpp_ensureTextureLoaded_FUN_005dd800(SMRGLTextureBasic * texture)
    ADD ESP,0x4                         ; 005dd8ca
    MOV EAX,dword ptr [ESP + 0x4]       ; 005dd8cd
    ADD EAX,0x48                        ; 005dd8d1
    RET                                 ; 005dd8d4

