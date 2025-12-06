; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_texture.cpp_loadAndUpdateTexture_FUN_005dd930(SMRGLTextureBasic * tex_to_load, SMRGLTextureBasic * tex_to_update, SRGBColorPalette * palette_data)
;
; Parameters:
; SMRGLTextureBasic * Stack[0x4]:4   tex_to_load
; SMRGLTextureBasic * Stack[0x8]:4   tex_to_update
; SRGBColorPalette * Stack[0xc]:4   palette_data
;
; XREF[1]:
;   engine_drender.cpp_CDemonRenderer_updateTexture_FUN_0048dc30 at 0048dc3a
;
; Called Functions:
;   engine_texture.cpp_ensureTextureLoaded_FUN_005dd800
;   wincore_windll.cpp_updateTexture_FUN_005b7380
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005dd930
        ;   Label: engine_texture.cpp_loadAndUpdateTexture_FUN_005dd930
    MOV EDX,dword ptr [ESP + 0x8]       ; 005dd931
    PUSH EDX                            ; 005dd935
    CALL engine_texture.cpp_ensureTextureLoaded_FUN_005dd800 ; 005dd936 | SMRGLHeaderExtended * engine_texture.cpp_ensureTextureLoaded_FUN_005dd800(SMRGLTextureBasic * texture)
        ;   XREF to: 005dd800 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005dd93b
    MOV ECX,dword ptr [ESP + 0xc]       ; 005dd93e
    PUSH ECX                            ; 005dd942
    MOV EBX,dword ptr [ESP + 0xc]       ; 005dd943
    PUSH EBX                            ; 005dd947
    CALL wincore_windll.cpp_updateTexture_FUN_005b7380 ; 005dd948 | int wincore_windll.cpp_updateTexture_FUN_005b7380(SMRGLTextureBasic * tex, SRGBColorPalette * palette_data)
        ;   XREF to: 005b7380 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005dd94d
    POP EBX                             ; 005dd950
    RET                                 ; 005dd951

