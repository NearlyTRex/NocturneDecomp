; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl engine_texture_cpp_updateTextureWithPalette_FUN_005dd900(SMRGLTextureBasic *texture_to_load,SMRGLTextureBasic *texture_to_update)
;
; Parameters:
; SMRGLTextureBasic * Stack[0x4]:4   texture_to_load
; SMRGLTextureBasic * Stack[0x8]:4   texture_to_update
;
; XREF[1]:
;   engine_drender.cpp_CDemonRenderer_updateTextureWithPalette_FUN_0048dc20 at 0048dc25
;
; Referenced Globals:
;   byte* g_CurrentPalette
;
; Called Functions:
;   engine_texture.cpp_ensureTextureLoaded_FUN_005dd800
;   wincore_windll.cpp_updateTexture_FUN_005b7380
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005dd900
        ;   Label: engine_texture.cpp_updateTextureWithPalette_FUN_005dd900
    MOV EDX,dword ptr [ESP + 0x8]       ; 005dd901
    PUSH EDX                            ; 005dd905
    CALL engine_texture.cpp_ensureTextureLoaded_FUN_005dd800 ; 005dd906
        ;   XREF to: 005dd800 (UNCONDITIONAL_CALL)  ; SMRGLHeaderExtended * engine_texture.cpp_ensureTextureLoaded_FUN_005dd800(SMRGLTextureBasic * texture)
    ADD ESP,0x4                         ; 005dd90b
    MOV ECX,dword ptr [0x02d01920]      ; 005dd90e | g_CurrentPalette
    PUSH ECX                            ; 005dd914
    MOV EBX,dword ptr [ESP + 0xc]       ; 005dd915
    PUSH EBX                            ; 005dd919
    CALL wincore_windll.cpp_updateTexture_FUN_005b7380 ; 005dd91a
        ;   XREF to: 005b7380 (UNCONDITIONAL_CALL)  ; int wincore_windll.cpp_updateTexture_FUN_005b7380(SMRGLTextureBasic * tex, SRGBColorPalette * palette_data)
    ADD ESP,0x8                         ; 005dd91f
    POP EBX                             ; 005dd922
    RET                                 ; 005dd923

