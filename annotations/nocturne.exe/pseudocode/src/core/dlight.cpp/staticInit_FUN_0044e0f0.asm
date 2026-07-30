; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dlight_cpp_staticInit_FUN_0044e0f0(void)
;
;
; Referenced Globals:
;   CVector3f CVector3f_01abb4b8
;   undefined4 CVector3f_01abb4b8.y
;   undefined4 CVector3f_01abb4b8.z
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 0044e0f0
        ;   Label: core_dlight.cpp_staticInit_FUN_0044e0f0
    MOV dword ptr [0x01abb4bc],EDX      ; 0044e0f2 | CVector3f_01abb4b8.y
    MOV dword ptr [0x01abb4c0],EDX      ; 0044e0f8 | CVector3f_01abb4b8.z
    MOV dword ptr [0x01abb4b8],EDX      ; 0044e0fe | CVector3f_01abb4b8
    RET                                 ; 0044e104

