; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_FUN_00484fb0(CDemonRenderer *this_ptr,SMRGLTextureBasic *texture,SRGBColorPalette *palette)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLTextureBasic * Stack[0x8]:4   texture
; SRGBColorPalette * Stack[0xc]:4   palette
;
; XREF[2]:
;   core_dcamera.cpp_CDemonCamera_loadImage_FUN_0044fff0 at 004506ce
;   core_dcamera.cpp_CDemonCamera_uploadBackdropTexture_FUN_0044ff20 at 0044ffe2
;
; Called Functions:
;   engine_texture.cpp_FUN_00597c90
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0xc]       ; 00484fb0
        ;   Label: engine_drender.cpp_FUN_00484fb0
    PUSH EDX                            ; 00484fb4
    MOV ECX,dword ptr [ESP + 0xc]       ; 00484fb5
    PUSH ECX                            ; 00484fb9
    CALL engine_texture.cpp_FUN_00597c90 ; 00484fba
        ;   XREF to: 00597c90 (UNCONDITIONAL_CALL)  ; void engine_texture.cpp_FUN_00597c90(SMRGLTextureBasic * texture, SRGBColorPalette * palette)
    ADD ESP,0x8                         ; 00484fbf
    RET                                 ; 00484fc2

