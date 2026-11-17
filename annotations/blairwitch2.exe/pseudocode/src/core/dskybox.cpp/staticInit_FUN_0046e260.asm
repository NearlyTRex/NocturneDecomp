; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dskybox_cpp_staticInit_FUN_0046e260(void)
;
;
; Referenced Globals:
;   CVector3f g_CVector3f_01bd3c40
;   undefined4 g_CVector3f_01bd3c40.y
;   undefined4 g_CVector3f_01bd3c40.z
;
; Called Functions:
;   core_dskybox.cpp_initializeSkyboxTexture_FUN_0046e290
;
; *****************************************************************************

section .text

    PUSH 0x1bd3a00                      ; 0046e260
        ;   Label: core_dskybox.cpp_staticInit_FUN_0046e260
    CALL core_dskybox.cpp_initializeSkyboxTexture_FUN_0046e290 ; 0046e265
        ;   XREF to: 0046e290 (UNCONDITIONAL_CALL)  ; SMRGLSkyTexture * core_dskybox.cpp_initializeSkyboxTexture_FUN_0046e290(SMRGLSkyTexture * texture)
    XOR EDX,EDX                         ; 0046e26a
    ADD ESP,0x4                         ; 0046e26c
    MOV dword ptr [0x01bd3c40],EDX      ; 0046e26f | g_CVector3f_01bd3c40
    MOV dword ptr [0x01bd3c44],EDX      ; 0046e275 | g_CVector3f_01bd3c40.y
    MOV dword ptr [0x01bd3c48],EDX      ; 0046e27b | g_CVector3f_01bd3c40.z
    RET                                 ; 0046e281

