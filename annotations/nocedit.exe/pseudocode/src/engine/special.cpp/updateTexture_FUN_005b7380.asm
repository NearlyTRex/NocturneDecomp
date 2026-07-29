; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_updateTexture_FUN_005b7380(SMRGLTextureBasic *tex,SRGBColorPalette *palette_data)
;
; Parameters:
; SMRGLTextureBasic * Stack[0x4]:4   tex
; SRGBColorPalette * Stack[0x8]:4   palette_data
;
; XREF[3]:
;   engine_texture.cpp_ensureTextureLoaded_FUN_005dd800 at 005dd89e
;   engine_texture.cpp_loadAndUpdateTexture_FUN_005dd930 at 005dd948
;   engine_texture.cpp_updateTextureWithPalette_FUN_005dd900 at 005dd91a
;
; Referenced Globals:
;   int g_CurrentTextureDimension = 0x100
;   uchar* g_CurrentTextureData
;   uchar* g_CurrentTextureOpacityData
;   int g_UseExternalRenderer
;   APIDLL_updateTexture* g_APIDLL_updateTexture
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005b7380
        ;   Label: engine_special.cpp_updateTexture_FUN_005b7380
    CMP dword ptr [0x02d03e94],0x0      ; 005b7381 | g_UseExternalRenderer
    JNZ 0x005b738e                      ; 005b7388
        ;   XREF to: 005b738e (CONDITIONAL_JUMP)  ; LAB_005b738e
    XOR EAX,EAX                         ; 005b738a
    POP EBP                             ; 005b738c
    RET                                 ; 005b738d
    PUSH EDI                            ; 005b738e
        ;   Label: LAB_005b738e
    PUSH ESI                            ; 005b738f
    PUSH EBX                            ; 005b7390
    MOV ECX,dword ptr [0x02d03e84]      ; 005b7391 | g_CurrentTextureOpacityData
    PUSH ECX                            ; 005b7397
    MOV EBX,dword ptr [ESP + 0x1c]      ; 005b7398
    PUSH EBX                            ; 005b739c
    MOV ESI,dword ptr [0x02d03e80]      ; 005b739d | g_CurrentTextureData
    PUSH ESI                            ; 005b73a3
    MOV EDI,dword ptr [0x006793a4]      ; 005b73a4 | g_CurrentTextureDimension
    PUSH EDI                            ; 005b73aa
    MOV EBP,dword ptr [ESP + 0x24]      ; 005b73ab
    PUSH EBP                            ; 005b73af
    CALL dword ptr [0x03f6b8b8]         ; 005b73b0 | g_APIDLL_updateTexture
    ADD ESP,0x14                        ; 005b73b6
    POP EBX                             ; 005b73b9
    POP ESI                             ; 005b73ba
    POP EDI                             ; 005b73bb
    POP EBP                             ; 005b73bc
    RET                                 ; 005b73bd

