; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_updateTexture_FUN_0046e690(CDemonRenderer *this_ptr,SMRGLTextureBasic *texture,SRGBColorPalette *palette)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLTextureBasic * Stack[0x8]:4   texture
; SRGBColorPalette * Stack[0xc]:4   palette
;
; XREF[2]:
;   core_dcamera.cpp_CDemonCamera_loadImage_FUN_0044c130 at 0044c80e
;   core_dcamera.cpp_CDemonCamera_uploadBackdropTexture_FUN_0044c060 at 0044c122
;
; Called Functions:
;   engine_texture.cpp_FUN_0056ac80
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0xc]       ; 0046e690
        ;   Label: engine_drender.cpp_CDemonRenderer_updateTexture_FUN_0046e690
    PUSH EDX                            ; 0046e694
    MOV ECX,dword ptr [ESP + 0xc]       ; 0046e695
    PUSH ECX                            ; 0046e699
    CALL engine_texture.cpp_FUN_0056ac80 ; 0046e69a
        ;   XREF to: 0056ac80 (UNCONDITIONAL_CALL)  ; void engine_texture.cpp_FUN_0056ac80(SMRGLTextureBasic * texture, SRGBColorPalette * palette)
    ADD ESP,0x8                         ; 0046e69f
    RET                                 ; 0046e6a2

