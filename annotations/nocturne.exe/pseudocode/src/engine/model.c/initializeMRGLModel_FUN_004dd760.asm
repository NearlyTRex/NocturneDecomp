; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_model_c_initializeMRGLModel_FUN_004dd760(void)
;
;
; Called Functions:
;   engine_keyframe.c_loadAndInterpolateKeyframes_FUN_004c3aa0
;   engine_model.c_loadMRGLTextures_FUN_004dd690
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dd760
        ;   Label: engine_model.c_initializeMRGLModel_FUN_004dd760
    MOV EBX,dword ptr [ESP + 0x8]       ; 004dd761
    CMP dword ptr [EBX],0x20            ; 004dd765
    JNZ 0x004dd781                      ; 004dd768
        ;   XREF to: 004dd781 (CONDITIONAL_JUMP)  ; LAB_004dd781
    PUSH EBX                            ; 004dd76a
    CALL engine_keyframe.c_loadAndInterpolateKeyframes_FUN_004c3aa0 ; 004dd76b
        ;   XREF to: 004c3aa0 (UNCONDITIONAL_CALL)  ; void engine_keyframe.c_loadAndInterpolateKeyframes_FUN_004c3aa0(SMRGLKeyframeModel * keyframe_model)
    ADD ESP,0x4                         ; 004dd770
    MOV ECX,dword ptr [EBX + 0x14]      ; 004dd773
    PUSH ECX                            ; 004dd776
    CALL engine_model.c_loadMRGLTextures_FUN_004dd690 ; 004dd777
        ;   XREF to: 004dd690 (UNCONDITIONAL_CALL)  ; void engine_model.c_loadMRGLTextures_FUN_004dd690(SMRGLHeaderExtended * mrgl)
    ADD ESP,0x4                         ; 004dd77c
    POP EBX                             ; 004dd77f
    RET                                 ; 004dd780
    PUSH EBX                            ; 004dd781
        ;   Label: LAB_004dd781
    CALL engine_model.c_loadMRGLTextures_FUN_004dd690 ; 004dd782
        ;   XREF to: 004dd690 (UNCONDITIONAL_CALL)  ; void engine_model.c_loadMRGLTextures_FUN_004dd690(SMRGLHeaderExtended * mrgl)
    ADD ESP,0x4                         ; 004dd787
    POP EBX                             ; 004dd78a
    RET                                 ; 004dd78b

