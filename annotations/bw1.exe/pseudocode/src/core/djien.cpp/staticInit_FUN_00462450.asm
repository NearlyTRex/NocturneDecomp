; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_djien_cpp_staticInit_FUN_00462450(void)
;
;
; Referenced Globals:
;   CVector3f g_CoronaGeometryOrigin
;   undefined4 g_CoronaGeometryOrigin.y
;   undefined4 g_CoronaGeometryOrigin.z
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 00462450
        ;   Label: core_djien.cpp_staticInit_FUN_00462450
    MOV dword ptr [0x01b2ee40],EDX      ; 00462452 | g_CoronaGeometryOrigin.y
    MOV dword ptr [0x01b2ee44],EDX      ; 00462458 | g_CoronaGeometryOrigin.z
    MOV dword ptr [0x01b2ee3c],EDX      ; 0046245e | g_CoronaGeometryOrigin
    RET                                 ; 00462464

