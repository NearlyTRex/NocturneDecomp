; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_model_c_initializeMRGLModel_FUN_00528940(SMRGLHeaderExtended *mrgl)
;
; Parameters:
; SMRGLHeaderExtended * Stack[0x4]:4   mrgl
;
; Called Functions:
;   engine_keyframe.c_loadAndInterpolateKeyframes_FUN_00501d40
;   engine_model.c_loadMRGLTextures_FUN_00528870
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00528940
        ;   Label: engine_model.c_initializeMRGLModel_FUN_00528940
    MOV EBX,dword ptr [ESP + 0x8]       ; 00528941
    CMP dword ptr [EBX],0x20            ; 00528945
    JNZ 0x00528961                      ; 00528948
        ;   XREF to: 00528961 (CONDITIONAL_JUMP)  ; LAB_00528961
    PUSH EBX                            ; 0052894a
    CALL engine_keyframe.c_loadAndInterpolateKeyframes_FUN_00501d40 ; 0052894b
        ;   XREF to: 00501d40 (UNCONDITIONAL_CALL)  ; void engine_keyframe.c_loadAndInterpolateKeyframes_FUN_00501d40(SMRGLKeyframeModel * keyframe_model)
    ADD ESP,0x4                         ; 00528950
    MOV ECX,dword ptr [EBX + 0x14]      ; 00528953
    PUSH ECX                            ; 00528956
    CALL engine_model.c_loadMRGLTextures_FUN_00528870 ; 00528957
        ;   XREF to: 00528870 (UNCONDITIONAL_CALL)  ; void engine_model.c_loadMRGLTextures_FUN_00528870(SMRGLHeaderExtended * block)
    ADD ESP,0x4                         ; 0052895c
    POP EBX                             ; 0052895f
    RET                                 ; 00528960
    PUSH EBX                            ; 00528961
        ;   Label: LAB_00528961
    CALL engine_model.c_loadMRGLTextures_FUN_00528870 ; 00528962
        ;   XREF to: 00528870 (UNCONDITIONAL_CALL)  ; void engine_model.c_loadMRGLTextures_FUN_00528870(SMRGLHeaderExtended * block)
    ADD ESP,0x4                         ; 00528967
    POP EBX                             ; 0052896a
    RET                                 ; 0052896b

