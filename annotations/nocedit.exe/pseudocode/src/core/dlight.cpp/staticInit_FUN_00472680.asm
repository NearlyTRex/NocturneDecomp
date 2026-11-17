; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dlight_cpp_staticInit_FUN_00472680(void)
;
;
; Referenced Globals:
;   CVector3f g_CoronaGeometryOrigin
;   undefined4 g_CoronaGeometryOrigin.y
;   undefined4 g_CoronaGeometryOrigin.z
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 00472680
        ;   Label: core_dlight.cpp_staticInit_FUN_00472680
    MOV dword ptr [0x026a72dc],EDX      ; 00472682 | g_CoronaGeometryOrigin.y
    MOV dword ptr [0x026a72e0],EDX      ; 00472688 | g_CoronaGeometryOrigin.z
    MOV dword ptr [0x026a72d8],EDX      ; 0047268e | g_CoronaGeometryOrigin
    RET                                 ; 00472694

