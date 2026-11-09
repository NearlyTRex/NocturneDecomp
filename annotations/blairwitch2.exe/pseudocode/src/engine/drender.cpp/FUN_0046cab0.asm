; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_FUN_0046cab0(CDemonRenderer *this_ptr,SMRGLTextureBasic *texture,SRGBColorPalette *palette)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLTextureBasic * Stack[0x8]:4   texture
; SRGBColorPalette * Stack[0xc]:4   palette
;
; XREF[2]:
;   core_dcamera.cpp_CDemonCamera_loadImage_FUN_0043e930 at 0043f00e
;   core_dcamera.cpp_CDemonCamera_uploadBackdropTexture_FUN_0043e860 at 0043e922
;
; Called Functions:
;   engine_texture.cpp_FUN_00575070
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0xc]       ; 0046cab0
        ;   Label: engine_drender.cpp_FUN_0046cab0
    PUSH EDX                            ; 0046cab4
    MOV ECX,dword ptr [ESP + 0xc]       ; 0046cab5
    PUSH ECX                            ; 0046cab9
    CALL engine_texture.cpp_FUN_00575070 ; 0046caba
        ;   XREF to: 00575070 (UNCONDITIONAL_CALL)  ; void engine_texture.cpp_FUN_00575070(SMRGLTextureBasic * texture, SRGBColorPalette * palette)
    ADD ESP,0x8                         ; 0046cabf
    RET                                 ; 0046cac2

