; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_djien_cpp_staticInit_FUN_00462450(void)
;
;
; Referenced Globals:
;   CVector3f g_CVector3f_01b2ee3c
;   undefined4 g_CVector3f_01b2ee3c.y
;   undefined4 g_CVector3f_01b2ee3c.z
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 00462450
        ;   Label: core_djien.cpp_staticInit_FUN_00462450
    MOV dword ptr [0x01b2ee40],EDX      ; 00462452 | g_CVector3f_01b2ee3c.y
    MOV dword ptr [0x01b2ee44],EDX      ; 00462458 | g_CVector3f_01b2ee3c.z
    MOV dword ptr [0x01b2ee3c],EDX      ; 0046245e | g_CVector3f_01b2ee3c
    RET                                 ; 00462464

