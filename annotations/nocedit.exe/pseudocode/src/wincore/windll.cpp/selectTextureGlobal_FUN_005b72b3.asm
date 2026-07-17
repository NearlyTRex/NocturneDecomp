; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl wincore_windll_cpp_selectTextureGlobal_FUN_005b72b3(SMRGLTextureBasic *texture_info)
;
; Parameters:
; SMRGLTextureBasic * Stack[0x4]:4   texture_info
;
; Referenced Globals:
;   int g_CurrentTextureDimension = 0x100
;   uchar[768] g_SourcePaletteData
;   void* g_CurrentTextureData
;   void* g_CurrentTextureOpacityData
;   int g_UseExternalRenderer
;   APIDLL_selectTexture* g_APIDLL_selectTexture
;
; *****************************************************************************

section .text

    LEA EAX,[EAX]                       ; 005b72b3
        ;   Label: wincore_windll.cpp_selectTextureGlobal_FUN_005b72b3
    LEA EDX,[EDX]                       ; 005b72b9
    NOP                                 ; 005b72bf
    CMP dword ptr [0x02d03e94],0x0      ; 005b72c0 | g_UseExternalRenderer
    JNZ 0x005b72cc                      ; 005b72c7
        ;   XREF to: 005b72cc (CONDITIONAL_JUMP)  ; LAB_005b72cc
    XOR EAX,EAX                         ; 005b72c9
    RET                                 ; 005b72cb
    PUSH EDI                            ; 005b72cc
        ;   Label: LAB_005b72cc
    PUSH ESI                            ; 005b72cd
    PUSH EBX                            ; 005b72ce
    MOV ECX,dword ptr [0x02d03e84]      ; 005b72cf | g_CurrentTextureOpacityData
    PUSH ECX                            ; 005b72d5
    PUSH 0x2d01f48                      ; 005b72d6 | g_SourcePaletteData
    MOV EBX,dword ptr [0x02d03e80]      ; 005b72db | g_CurrentTextureData
    PUSH EBX                            ; 005b72e1
    MOV ESI,dword ptr [0x006793a4]      ; 005b72e2 | g_CurrentTextureDimension
    PUSH ESI                            ; 005b72e8
    MOV EDI,dword ptr [ESP + 0x20]      ; 005b72e9
    PUSH EDI                            ; 005b72ed
    CALL dword ptr [0x03f6b8b4]         ; 005b72ee | g_APIDLL_selectTexture
    ADD ESP,0x14                        ; 005b72f4
    POP EBX                             ; 005b72f7
    POP ESI                             ; 005b72f8
    POP EDI                             ; 005b72f9
    RET                                 ; 005b72fa

