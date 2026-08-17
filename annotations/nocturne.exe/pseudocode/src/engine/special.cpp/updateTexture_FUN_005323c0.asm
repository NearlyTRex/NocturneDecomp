; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_updateTexture_FUN_005323c0(SMRGLTextureBasic *texture_info)
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

    CMP dword ptr [0x01c02594],0x0      ; 005323c0 | g_UseExternalRenderer
        ;   Label: engine_special.cpp_updateTexture_FUN_005323c0
    JNZ 0x005323cc                      ; 005323c7
        ;   XREF to: 005323cc (CONDITIONAL_JUMP)  ; LAB_005323cc
    XOR EAX,EAX                         ; 005323c9
    RET                                 ; 005323cb
    PUSH EDI                            ; 005323cc
        ;   Label: LAB_005323cc
    PUSH ESI                            ; 005323cd
    PUSH EBX                            ; 005323ce
    MOV ECX,dword ptr [0x01c02584]      ; 005323cf | g_CurrentTextureOpacityData
    PUSH ECX                            ; 005323d5
    PUSH 0x1c00648                      ; 005323d6 | g_SourcePaletteData
    MOV EBX,dword ptr [0x01c02580]      ; 005323db | g_CurrentTextureData
    PUSH EBX                            ; 005323e1
    MOV ESI,dword ptr [0x005b762c]      ; 005323e2 | g_CurrentTextureDimension
    PUSH ESI                            ; 005323e8
    MOV EDI,dword ptr [ESP + 0x20]      ; 005323e9
    PUSH EDI                            ; 005323ed
    CALL dword ptr [0x02dc9da0]         ; 005323ee | g_APIDLL_updateTexture
    ADD ESP,0x14                        ; 005323f4
    POP EBX                             ; 005323f7
    POP ESI                             ; 005323f8
    POP EDI                             ; 005323f9
    RET                                 ; 005323fa

