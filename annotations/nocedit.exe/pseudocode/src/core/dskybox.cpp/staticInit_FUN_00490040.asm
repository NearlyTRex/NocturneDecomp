; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dskybox_cpp_staticInit_FUN_00490040(void)
;
;
; Referenced Globals:
;   SMRGLSkyTexture[24] g_SkyDomeTextureData
;   CVector3f g_SkyDomeCenter
;   undefined4 g_SkyDomeCenter.y
;   undefined4 g_SkyDomeCenter.z
;
; Called Functions:
;   core_dskybox.cpp_initializeSkyboxTexture_FUN_00490070
;
; *****************************************************************************

section .text

    PUSH 0x2ca0148                      ; 00490040 | g_SkyDomeTextureData
        ;   Label: core_dskybox.cpp_staticInit_FUN_00490040
    CALL core_dskybox.cpp_initializeSkyboxTexture_FUN_00490070 ; 00490045
        ;   XREF to: 00490070 (UNCONDITIONAL_CALL)  ; SMRGLSkyTexture * core_dskybox.cpp_initializeSkyboxTexture_FUN_00490070(SMRGLSkyTexture * texture)
    XOR EDX,EDX                         ; 0049004a
    ADD ESP,0x4                         ; 0049004c
    MOV dword ptr [0x02ca0388],EDX      ; 0049004f | g_SkyDomeCenter
    MOV dword ptr [0x02ca038c],EDX      ; 00490055 | g_SkyDomeCenter.y
    MOV dword ptr [0x02ca0390],EDX      ; 0049005b | g_SkyDomeCenter.z
    RET                                 ; 00490061

