; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_updateTexture_FUN_00461f60(CDemonRenderer *this_ptr,SMRGLTextureBasic *texture,SRGBColorPalette *palette)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLTextureBasic * Stack[0x8]:4   texture
; SRGBColorPalette * Stack[0xc]:4   palette
;
; XREF[2]:
;   core_dcamera.cpp_CDemonCamera_loadImage_FUN_00443250 at 0044392e
;   core_dcamera.cpp_CDemonCamera_uploadBackdropTexture_FUN_00443180 at 00443242
;
; Called Functions:
;   engine_texture.cpp_loadAndUpdateTexture_FUN_00545a40
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0xc]       ; 00461f60
        ;   Label: engine_drender.cpp_CDemonRenderer_updateTexture_FUN_00461f60
    PUSH EDX                            ; 00461f64
    MOV ECX,dword ptr [ESP + 0xc]       ; 00461f65
    PUSH ECX                            ; 00461f69
    CALL engine_texture.cpp_loadAndUpdateTexture_FUN_00545a40 ; 00461f6a
        ;   XREF to: 00545a40 (UNCONDITIONAL_CALL)  ; void engine_texture.cpp_loadAndUpdateTexture_FUN_00545a40(SMRGLTextureBasic * texture, SRGBColorPalette * palette)
    ADD ESP,0x8                         ; 00461f6f
    RET                                 ; 00461f72

