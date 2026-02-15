; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_updateTextureWithPalette_FUN_0048dc20(CDemonRenderer *this_ptr,SMRGLTextureBasic *texture_to_load,SMRGLTextureBasic *texture_to_update)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLTextureBasic * Stack[0x8]:4   texture_to_load
; SMRGLTextureBasic * Stack[0xc]:4   texture_to_update
;
; Called Functions:
;   engine_texture.cpp_updateTextureWithPalette_FUN_005dd900
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 0048dc20
        ;   Label: engine_drender.cpp_CDemonRenderer_updateTextureWithPalette_FUN_0048dc20
    PUSH EDX                            ; 0048dc24
    CALL engine_texture.cpp_updateTextureWithPalette_FUN_005dd900 ; 0048dc25
        ;   XREF to: 005dd900 (UNCONDITIONAL_CALL)  ; void engine_texture.cpp_updateTextureWithPalette_FUN_005dd900(SMRGLTextureBasic * texture_to_load, SMRGLTextureBasic * texture_to_update)
    ADD ESP,0x4                         ; 0048dc2a
    RET                                 ; 0048dc2d

