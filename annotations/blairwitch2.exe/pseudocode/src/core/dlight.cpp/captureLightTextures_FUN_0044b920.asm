; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dlight_cpp_captureLightTextures_FUN_0044b920(void)
;
;
; XREF[1]:
;   core_set.cpp_CDemonSet_loadAssets_FUN_005332a0 at 005332a0
;
; Referenced Globals:
;   undefined4 DAT_0060afe0
;   undefined4 DAT_0060aff8
;   undefined4 DAT_0060b028
;   undefined4 DAT_0060b1a8
;   undefined4 DAT_0060b280
;   undefined4 DAT_01ba5c50
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044b920
        ;   Label: core_dlight.cpp_captureLightTextures_FUN_0044b920
    PUSH ESI                            ; 0044b921
    PUSH 0x60afe0                       ; 0044b922 | DAT_0060afe0
    MOV EDX,dword ptr [0x0060b280]      ; 0044b927 | DAT_0060b280
    PUSH EDX                            ; 0044b92d | DAT_01ba5c50
    MOV EBX,0x60aff8                    ; 0044b92e | DAT_0060aff8
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00 ; 0044b933
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    LEA ESI,[EBX + 0x1b0]               ; 0044b938 | DAT_0060b1a8
    ADD ESP,0x8                         ; 0044b93e
    PUSH EBX                            ; 0044b941 | DAT_0060aff8 | DAT_0060b028
        ;   Label: LAB_0044b941
    MOV ECX,dword ptr [0x0060b280]      ; 0044b942 | DAT_0060b280
    PUSH ECX                            ; 0044b948 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00 ; 0044b949
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD EBX,0x30                        ; 0044b94e
    ADD ESP,0x8                         ; 0044b951
    CMP EBX,ESI                         ; 0044b954
    JNZ 0x0044b941                      ; 0044b956
        ;   XREF to: 0044b941 (CONDITIONAL_JUMP)  ; LAB_0044b941
    POP ESI                             ; 0044b958
    POP EBX                             ; 0044b959
    RET                                 ; 0044b95a

