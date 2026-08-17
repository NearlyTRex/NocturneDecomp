; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_updateTexture_FUN_005b7300(SMRGLTextureBasic *texture_info)
;
; Parameters:
; SMRGLTextureBasic * Stack[0x4]:4   texture_info
;
; Referenced Globals:
;   int g_CurrentTextureDimension = 0x100
;   uchar[768] g_SourcePaletteData
;   uchar* g_CurrentTextureData
;   uchar* g_CurrentTextureOpacityData
;   int g_UseExternalRenderer
;   APIDLL_updateTexture* g_APIDLL_updateTexture
;
; *****************************************************************************

section .text

    CMP dword ptr [0x02d03e94],0x0      ; 005b7300 | g_UseExternalRenderer
        ;   Label: engine_special.cpp_updateTexture_FUN_005b7300
    JNZ 0x005b730c                      ; 005b7307
        ;   XREF to: 005b730c (CONDITIONAL_JUMP)  ; LAB_005b730c
    XOR EAX,EAX                         ; 005b7309
    RET                                 ; 005b730b
    PUSH EDI                            ; 005b730c
        ;   Label: LAB_005b730c
    PUSH ESI                            ; 005b730d
    PUSH EBX                            ; 005b730e
    MOV ECX,dword ptr [0x02d03e84]      ; 005b730f | g_CurrentTextureOpacityData
    PUSH ECX                            ; 005b7315
    PUSH 0x2d01f48                      ; 005b7316 | g_SourcePaletteData
    MOV EBX,dword ptr [0x02d03e80]      ; 005b731b | g_CurrentTextureData
    PUSH EBX                            ; 005b7321
    MOV ESI,dword ptr [0x006793a4]      ; 005b7322 | g_CurrentTextureDimension
    PUSH ESI                            ; 005b7328
    MOV EDI,dword ptr [ESP + 0x20]      ; 005b7329
    PUSH EDI                            ; 005b732d
    CALL dword ptr [0x03f6b8b8]         ; 005b732e | g_APIDLL_updateTexture
    ADD ESP,0x14                        ; 005b7334
    POP EBX                             ; 005b7337
    POP ESI                             ; 005b7338
    POP EDI                             ; 005b7339
    RET                                 ; 005b733a

