; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_selectTexture_FUN_005b7340(SMRGLTextureBasic *tex,SRGBColorPalette *palette_data)
;
; Parameters:
; SMRGLTextureBasic * Stack[0x4]:4   tex
; SRGBColorPalette * Stack[0x8]:4   palette_data
;
; XREF[1]:
;   engine_texture.cpp_ensureTextureLoaded_FUN_005dd800 at 005dd887
;
; Referenced Globals:
;   int g_CurrentTextureDimension = 0x100
;   uchar* g_CurrentTextureData
;   uchar* g_CurrentTextureOpacityData
;   int g_UseExternalRenderer
;   APIDLL_selectTexture* g_APIDLL_selectTexture
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005b7340
        ;   Label: engine_special.cpp_selectTexture_FUN_005b7340
    CMP dword ptr [0x02d03e94],0x0      ; 005b7341 | g_UseExternalRenderer
    JNZ 0x005b734e                      ; 005b7348
        ;   XREF to: 005b734e (CONDITIONAL_JUMP)  ; LAB_005b734e
    XOR EAX,EAX                         ; 005b734a
    POP EBP                             ; 005b734c
    RET                                 ; 005b734d
    PUSH EDI                            ; 005b734e
        ;   Label: LAB_005b734e
    PUSH ESI                            ; 005b734f
    PUSH EBX                            ; 005b7350
    MOV ECX,dword ptr [0x02d03e84]      ; 005b7351 | g_CurrentTextureOpacityData
    PUSH ECX                            ; 005b7357
    MOV EBX,dword ptr [ESP + 0x1c]      ; 005b7358
    PUSH EBX                            ; 005b735c
    MOV ESI,dword ptr [0x02d03e80]      ; 005b735d | g_CurrentTextureData
    PUSH ESI                            ; 005b7363
    MOV EDI,dword ptr [0x006793a4]      ; 005b7364 | g_CurrentTextureDimension
    PUSH EDI                            ; 005b736a
    MOV EBP,dword ptr [ESP + 0x24]      ; 005b736b
    PUSH EBP                            ; 005b736f
    CALL dword ptr [0x03f6b8b4]         ; 005b7370 | g_APIDLL_selectTexture
    ADD ESP,0x14                        ; 005b7376
    POP EBX                             ; 005b7379
    POP ESI                             ; 005b737a
    POP EDI                             ; 005b737b
    POP EBP                             ; 005b737c
    RET                                 ; 005b737d

