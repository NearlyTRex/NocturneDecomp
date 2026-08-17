; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_selectTexture_FUN_00532380(SMRGLTextureBasic *texture_info)
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
;   APIDLL_selectTexture* g_APIDLL_selectTexture
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c02594],0x0      ; 00532380 | g_UseExternalRenderer
        ;   Label: engine_special.cpp_selectTexture_FUN_00532380
    JNZ 0x0053238c                      ; 00532387
        ;   XREF to: 0053238c (CONDITIONAL_JUMP)  ; LAB_0053238c
    XOR EAX,EAX                         ; 00532389
    RET                                 ; 0053238b
    PUSH EDI                            ; 0053238c
        ;   Label: LAB_0053238c
    PUSH ESI                            ; 0053238d
    PUSH EBX                            ; 0053238e
    MOV ECX,dword ptr [0x01c02584]      ; 0053238f | g_CurrentTextureOpacityData
    PUSH ECX                            ; 00532395
    PUSH 0x1c00648                      ; 00532396 | g_SourcePaletteData
    MOV EBX,dword ptr [0x01c02580]      ; 0053239b | g_CurrentTextureData
    PUSH EBX                            ; 005323a1
    MOV ESI,dword ptr [0x005b762c]      ; 005323a2 | g_CurrentTextureDimension
    PUSH ESI                            ; 005323a8
    MOV EDI,dword ptr [ESP + 0x20]      ; 005323a9
    PUSH EDI                            ; 005323ad
    CALL dword ptr [0x02dc9d9c]         ; 005323ae | g_APIDLL_selectTexture
    ADD ESP,0x14                        ; 005323b4
    POP EBX                             ; 005323b7
    POP ESI                             ; 005323b8
    POP EDI                             ; 005323b9
    RET                                 ; 005323ba

