; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dskybox_cpp_staticInit_FUN_0046f2d0(void)
;
;
; Referenced Globals:
;   CVector3f g_SkyDomeCenter
;   undefined4 g_SkyDomeCenter.y
;   undefined4 g_SkyDomeCenter.z
;
; Called Functions:
;   core_dskybox.cpp_initializeSkyboxTexture_FUN_0046f300
;
; *****************************************************************************

section .text

    PUSH 0x1c0b558                      ; 0046f2d0
        ;   Label: core_dskybox.cpp_staticInit_FUN_0046f2d0
    CALL core_dskybox.cpp_initializeSkyboxTexture_FUN_0046f300 ; 0046f2d5
        ;   XREF to: 0046f300 (UNCONDITIONAL_CALL)  ; SMRGLSkyTexture * core_dskybox.cpp_initializeSkyboxTexture_FUN_0046f300(SMRGLSkyTexture * texture)
    XOR EDX,EDX                         ; 0046f2da
    ADD ESP,0x4                         ; 0046f2dc
    MOV dword ptr [0x01c0b798],EDX      ; 0046f2df | g_SkyDomeCenter
    MOV dword ptr [0x01c0b79c],EDX      ; 0046f2e5 | g_SkyDomeCenter.y
    MOV dword ptr [0x01c0b7a0],EDX      ; 0046f2eb | g_SkyDomeCenter.z
    RET                                 ; 0046f2f1

