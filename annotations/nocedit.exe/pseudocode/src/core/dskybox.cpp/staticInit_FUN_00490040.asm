; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dskybox_cpp_staticInit_FUN_00490040(void)
;
;
; Referenced Globals:
;   SMRGLTextureBasic g_SkyDomeTextureData
;   CVector3i CVector3i_02ca0388
;   undefined4 CVector3i_02ca0388.y
;   undefined4 CVector3i_02ca0388.z
;
; Called Functions:
;   core_dskybox.cpp_initializeSkyboxTexture_FUN_00490070
;
; *****************************************************************************

section .text

    PUSH 0x2ca0148                      ; 00490040 | g_SkyDomeTextureData
        ;   Label: core_dskybox.cpp_staticInit_FUN_00490040
    CALL core_dskybox.cpp_initializeSkyboxTexture_FUN_00490070 ; 00490045
        ;   XREF to: 00490070 (UNCONDITIONAL_CALL)  ; SMRGLTextureBasic * core_dskybox.cpp_initializeSkyboxTexture_FUN_00490070(SMRGLTextureBasic * texture)
    XOR EDX,EDX                         ; 0049004a
    ADD ESP,0x4                         ; 0049004c
    MOV dword ptr [0x02ca0388],EDX      ; 0049004f | CVector3i_02ca0388
    MOV dword ptr [0x02ca038c],EDX      ; 00490055 | CVector3i_02ca0388.y
    MOV dword ptr [0x02ca0390],EDX      ; 0049005b | CVector3i_02ca0388.z
    RET                                 ; 00490061

