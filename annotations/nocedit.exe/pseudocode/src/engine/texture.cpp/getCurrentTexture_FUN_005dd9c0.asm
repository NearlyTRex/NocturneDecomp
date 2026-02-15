; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLTextureBasic * __cdecl engine_texture_cpp_getCurrentTexture_FUN_005dd9c0(void)
;
;
; XREF[2]:
;   engine_3d.c_renderPolygonEngineAPIPremiumMultiState_FUN_00407290 at 00407405
;   engine_3d.c_renderPolygonEngineAPIPremiumMultiState_FUN_00407470 at 00407572
;
; Referenced Globals:
;   int g_CurrentTextureIndex
;   CTextureCache* g_TextureCacheInstance
;   SMRGLTextureBasic g_CurrentTexture
;   undefined4 g_CurrentTextureInfo.texture_index
;   undefined4 DAT_03f87364
;   undefined4 DAT_03f87365
;   undefined4 DAT_03f87366
;   undefined4 g_CurrentTextureInfo.texture_name[3]
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005dd9c0
        ;   Label: engine_texture.cpp_getCurrentTexture_FUN_005dd9c0
    PUSH EDI                            ; 005dd9c1
    MOV EDX,0xd                         ; 005dd9c2
    MOV ESI,dword ptr [0x03f87354]      ; 005dd9c7 | g_CurrentTextureIndex
    MOV EAX,[0x03f87354]                ; 005dd9cd | g_CurrentTextureIndex
    MOV dword ptr [0x03f87360],ESI      ; 005dd9d2 | g_CurrentTextureInfo.texture_index
    MOV ESI,dword ptr [0x03f87358]      ; 005dd9d8 | g_TextureCacheInstance
    SHL EAX,0x6                         ; 005dd9de
    ADD ESI,0x3008                      ; 005dd9e1
    MOV EDI,0x3f87364                   ; 005dd9e7 | DAT_03f87364
    ADD ESI,EAX                         ; 005dd9ec
    MOV dword ptr [0x03f8735c],EDX      ; 005dd9ee | g_CurrentTexture
    PUSH EDI                            ; 005dd9f4 | DAT_03f87364
    MOV AL,byte ptr [ESI]               ; 005dd9f5
        ;   Label: LAB_005dd9f5
    MOV byte ptr [EDI],AL               ; 005dd9f7 | DAT_03f87364 | DAT_03f87366
    CMP AL,0x0                          ; 005dd9f9
    JZ 0x005dda0d                       ; 005dd9fb
        ;   XREF to: 005dda0d (CONDITIONAL_JUMP)  ; LAB_005dda0d
    MOV AL,byte ptr [ESI + 0x1]         ; 005dd9fd
    ADD ESI,0x2                         ; 005dda00
    MOV byte ptr [EDI + 0x1],AL         ; 005dda03 | DAT_03f87365 | g_CurrentTextureInfo.texture_name[3]
    ADD EDI,0x2                         ; 005dda06
    CMP AL,0x0                          ; 005dda09
    JNZ 0x005dd9f5                      ; 005dda0b
        ;   XREF to: 005dd9f5 (CONDITIONAL_JUMP)  ; LAB_005dd9f5
    POP EDI                             ; 005dda0d
        ;   Label: LAB_005dda0d
    MOV EAX,0x3f8735c                   ; 005dda0e | g_CurrentTexture
    POP EDI                             ; 005dda13
    POP ESI                             ; 005dda14
    RET                                 ; 005dda15

