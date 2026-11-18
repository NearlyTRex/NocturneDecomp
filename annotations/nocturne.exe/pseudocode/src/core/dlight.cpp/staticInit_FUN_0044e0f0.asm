; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dlight_cpp_staticInit_FUN_0044e0f0(void)
;
;
; Referenced Globals:
;   CVector3f g_CoronaGeometryOrigin
;   undefined4 g_CoronaGeometryOrigin.y
;   undefined4 g_CoronaGeometryOrigin.z
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 0044e0f0
        ;   Label: core_dlight.cpp_staticInit_FUN_0044e0f0
    MOV dword ptr [0x01abb4bc],EDX      ; 0044e0f2 | g_CoronaGeometryOrigin.y
    MOV dword ptr [0x01abb4c0],EDX      ; 0044e0f8 | g_CoronaGeometryOrigin.z
    MOV dword ptr [0x01abb4b8],EDX      ; 0044e0fe | g_CoronaGeometryOrigin
    RET                                 ; 0044e104

