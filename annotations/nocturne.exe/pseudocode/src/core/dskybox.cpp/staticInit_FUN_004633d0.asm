; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dskybox_cpp_staticInit_FUN_004633d0(void)
;
;
; Referenced Globals:
;   CVector3f g_CVector3f_01b7b728
;   undefined4 g_CVector3f_01b7b728.y
;   undefined4 g_CVector3f_01b7b728.z
;
; Called Functions:
;   core_dskybox.cpp_initializeSkyboxTexture_FUN_00463400
;
; *****************************************************************************

section .text

    PUSH 0x1b7b4e8                      ; 004633d0
        ;   Label: core_dskybox.cpp_staticInit_FUN_004633d0
    CALL core_dskybox.cpp_initializeSkyboxTexture_FUN_00463400 ; 004633d5
        ;   XREF to: 00463400 (UNCONDITIONAL_CALL)  ; SMRGLSkyTexture * core_dskybox.cpp_initializeSkyboxTexture_FUN_00463400(SMRGLSkyTexture * texture)
    XOR EDX,EDX                         ; 004633da
    ADD ESP,0x4                         ; 004633dc
    MOV dword ptr [0x01b7b728],EDX      ; 004633df | g_CVector3f_01b7b728
    MOV dword ptr [0x01b7b72c],EDX      ; 004633e5 | g_CVector3f_01b7b728.y
    MOV dword ptr [0x01b7b730],EDX      ; 004633eb | g_CVector3f_01b7b728.z
    RET                                 ; 004633f1

