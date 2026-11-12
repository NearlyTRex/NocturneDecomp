; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dskybox_cpp_staticInit_FUN_0046f2d0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01c0b798
;   undefined4 DAT_01c0b79c
;   undefined4 DAT_01c0b7a0
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
    MOV dword ptr [0x01c0b798],EDX      ; 0046f2df | DAT_01c0b798
    MOV dword ptr [0x01c0b79c],EDX      ; 0046f2e5 | DAT_01c0b79c
    MOV dword ptr [0x01c0b7a0],EDX      ; 0046f2eb | DAT_01c0b7a0
    RET                                 ; 0046f2f1

