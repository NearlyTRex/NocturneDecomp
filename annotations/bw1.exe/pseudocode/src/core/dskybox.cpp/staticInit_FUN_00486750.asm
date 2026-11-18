; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dskybox_cpp_staticInit_FUN_00486750(void)
;
;
; Referenced Globals:
;   CVector3f g_SkyDomeCenter
;   undefined4 g_SkyDomeCenter.y
;   undefined4 g_SkyDomeCenter.z
;
; Called Functions:
;   core_dskybox.cpp_initializeSkyboxTexture_FUN_00486780
;
; *****************************************************************************

section .text

    PUSH 0x1beefbc                      ; 00486750
        ;   Label: core_dskybox.cpp_staticInit_FUN_00486750
    CALL core_dskybox.cpp_initializeSkyboxTexture_FUN_00486780 ; 00486755
        ;   XREF to: 00486780 (UNCONDITIONAL_CALL)  ; SMRGLSkyTexture * core_dskybox.cpp_initializeSkyboxTexture_FUN_00486780(SMRGLSkyTexture * texture)
    XOR EDX,EDX                         ; 0048675a
    ADD ESP,0x4                         ; 0048675c
    MOV dword ptr [0x01bef1fc],EDX      ; 0048675f | g_SkyDomeCenter
    MOV dword ptr [0x01bef200],EDX      ; 00486765 | g_SkyDomeCenter.y
    MOV dword ptr [0x01bef204],EDX      ; 0048676b | g_SkyDomeCenter.z
    RET                                 ; 00486771

