; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLTextureBasic * __cdecl engine_texture_cpp_getCurrentTexture_FUN_0056acf0(void)
;
;
; XREF[2]:
;   engine_3d.c_renderPolygonFullEffectsBufferedOp65_FUN_00407100 at 00407297
;   engine_3d.c_renderPolygonFullEffectsDirectOp66_FUN_00407300 at 00407402
;
; Referenced Globals:
;   int g_INT_02cfd0cc
;   CTextureCache* g_CTextureCache_PTR_02cfd0d0
;   SMRGLTextureModel g_SMRGLTextureModel_02cfd714
;   undefined4 g_SMRGLTextureModel_02cfd714.base.count
;   undefined4 g_SMRGLTextureModel_02cfd714.texture_name[0]
;   undefined4 g_SMRGLTextureModel_02cfd714.texture_name[1]
;   undefined4 g_SMRGLTextureModel_02cfd714.texture_name[2]
;   undefined4 g_SMRGLTextureModel_02cfd714.texture_name[3]
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0056acf0
        ;   Label: engine_texture.cpp_getCurrentTexture_FUN_0056acf0
    PUSH EDI                            ; 0056acf1
    MOV EDX,0xd                         ; 0056acf2
    MOV EAX,[0x02cfd0cc]                ; 0056acf7 | g_INT_02cfd0cc
    MOV dword ptr [0x02cfd714],EDX      ; 0056acfc | g_SMRGLTextureModel_02cfd714
    MOV [0x02cfd718],EAX                ; 0056ad02 | g_SMRGLTextureModel_02cfd714.base.count
    MOV EDX,EAX                         ; 0056ad07
    SHL EAX,0x2                         ; 0056ad09
    MOV ESI,dword ptr [0x02cfd0d0]      ; 0056ad0c | g_CTextureCache_PTR_02cfd0d0
    SUB EAX,EDX                         ; 0056ad12
    ADD ESI,0x4                         ; 0056ad14
    SHL EAX,0x5                         ; 0056ad17
    ADD ESI,EAX                         ; 0056ad1a
    MOV EDI,0x2cfd71c                   ; 0056ad1c
    ADD ESI,0x4                         ; 0056ad21
    PUSH EDI                            ; 0056ad24
    MOV AL,byte ptr [ESI]               ; 0056ad25
        ;   Label: LAB_0056ad25
    MOV byte ptr [EDI],AL               ; 0056ad27 | g_SMRGLTextureModel_02cfd714.texture_name[0] | g_SMRGLTextureModel_02cfd714.texture_name[2]
    CMP AL,0x0                          ; 0056ad29
    JZ 0x0056ad3d                       ; 0056ad2b
        ;   XREF to: 0056ad3d (CONDITIONAL_JUMP)  ; LAB_0056ad3d
    MOV AL,byte ptr [ESI + 0x1]         ; 0056ad2d
    ADD ESI,0x2                         ; 0056ad30
    MOV byte ptr [EDI + 0x1],AL         ; 0056ad33 | g_SMRGLTextureModel_02cfd714.texture_name[1] | g_SMRGLTextureModel_02cfd714.texture_name[3]
    ADD EDI,0x2                         ; 0056ad36
    CMP AL,0x0                          ; 0056ad39
    JNZ 0x0056ad25                      ; 0056ad3b
        ;   XREF to: 0056ad25 (CONDITIONAL_JUMP)  ; LAB_0056ad25
    POP EDI                             ; 0056ad3d
        ;   Label: LAB_0056ad3d
    MOV EAX,0x2cfd714                   ; 0056ad3e | g_SMRGLTextureModel_02cfd714
    POP EDI                             ; 0056ad43
    POP ESI                             ; 0056ad44
    RET                                 ; 0056ad45

