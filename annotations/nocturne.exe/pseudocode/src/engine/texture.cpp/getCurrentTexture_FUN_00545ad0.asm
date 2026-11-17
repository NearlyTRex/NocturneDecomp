; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLTextureBasic * __cdecl engine_texture_cpp_getCurrentTexture_FUN_00545ad0(void)
;
;
; XREF[2]:
;   engine_3d.c_renderPolygonFullEffectsBufferedOp65_FUN_00408880 at 004089f5
;   engine_3d.c_renderPolygonFullEffectsDirectOp66_FUN_00408a60 at 00408b62
;
; Referenced Globals:
;   int g_CurrentTextureIndex
;   CTextureCache* g_TextureCacheInstance
;   SMRGLTextureModel g_CurrentTexture
;   undefined4 g_CurrentTexture.base.count
;   undefined4 g_CurrentTexture.texture_name[0]
;   undefined4 g_CurrentTexture.texture_name[1]
;   undefined4 g_CurrentTexture.texture_name[2]
;   undefined4 g_CurrentTexture.texture_name[3]
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00545ad0
        ;   Label: engine_texture.cpp_getCurrentTexture_FUN_00545ad0
    PUSH EDI                            ; 00545ad1
    MOV EDX,0xd                         ; 00545ad2
    MOV ESI,dword ptr [0x02dd0f80]      ; 00545ad7 | g_CurrentTextureIndex
    MOV EAX,[0x02dd0f80]                ; 00545add | g_CurrentTextureIndex
    MOV dword ptr [0x02dd0f8c],ESI      ; 00545ae2 | g_CurrentTexture.base.count
    MOV ESI,dword ptr [0x02dd0f84]      ; 00545ae8 | g_TextureCacheInstance
    SHL EAX,0x6                         ; 00545aee
    ADD ESI,0x3008                      ; 00545af1
    MOV EDI,0x2dd0f90                   ; 00545af7
    ADD ESI,EAX                         ; 00545afc
    MOV dword ptr [0x02dd0f88],EDX      ; 00545afe | g_CurrentTexture
    PUSH EDI                            ; 00545b04
    MOV AL,byte ptr [ESI]               ; 00545b05
        ;   Label: LAB_00545b05
    MOV byte ptr [EDI],AL               ; 00545b07 | g_CurrentTexture.texture_name[0] | g_CurrentTexture.texture_name[2]
    CMP AL,0x0                          ; 00545b09
    JZ 0x00545b1d                       ; 00545b0b
        ;   XREF to: 00545b1d (CONDITIONAL_JUMP)  ; LAB_00545b1d
    MOV AL,byte ptr [ESI + 0x1]         ; 00545b0d
    ADD ESI,0x2                         ; 00545b10
    MOV byte ptr [EDI + 0x1],AL         ; 00545b13 | g_CurrentTexture.texture_name[1] | g_CurrentTexture.texture_name[3]
    ADD EDI,0x2                         ; 00545b16
    CMP AL,0x0                          ; 00545b19
    JNZ 0x00545b05                      ; 00545b1b
        ;   XREF to: 00545b05 (CONDITIONAL_JUMP)  ; LAB_00545b05
    POP EDI                             ; 00545b1d
        ;   Label: LAB_00545b1d
    MOV EAX,0x2dd0f88                   ; 00545b1e | g_CurrentTexture
    POP EDI                             ; 00545b23
    POP ESI                             ; 00545b24
    RET                                 ; 00545b25

