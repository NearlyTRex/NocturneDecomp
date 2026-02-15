; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_updateTexture_FUN_0048dc30(CDemonRenderer *this_ptr,SMRGLTextureBasic *texture,SRGBColorPalette *palette)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLTextureBasic * Stack[0x8]:4   texture
; SRGBColorPalette * Stack[0xc]:4   palette
;
; XREF[2]:
;   core_dcamera.cpp_CDemonCamera_loadImage_FUN_0044f3e0 at 0044face
;   core_dcamera.cpp_CDemonCamera_uploadBackdropTexture_FUN_0044f310 at 0044f3d2
;
; Called Functions:
;   engine_texture.cpp_loadAndUpdateTexture_FUN_005dd930
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0xc]       ; 0048dc30
        ;   Label: engine_drender.cpp_CDemonRenderer_updateTexture_FUN_0048dc30
    PUSH EDX                            ; 0048dc34
    MOV ECX,dword ptr [ESP + 0xc]       ; 0048dc35
    PUSH ECX                            ; 0048dc39
    CALL engine_texture.cpp_loadAndUpdateTexture_FUN_005dd930 ; 0048dc3a
        ;   XREF to: 005dd930 (UNCONDITIONAL_CALL)  ; void engine_texture.cpp_loadAndUpdateTexture_FUN_005dd930(SMRGLTextureBasic * tex_to_load, SMRGLTextureBasic * tex_to_update, SRGBColorPalette * palette_data)
    ADD ESP,0x8                         ; 0048dc3f
    RET                                 ; 0048dc42

