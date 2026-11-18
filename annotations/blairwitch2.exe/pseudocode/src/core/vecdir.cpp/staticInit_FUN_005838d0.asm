; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_vecdir_cpp_staticInit_FUN_005838d0(void)
;
;
; Referenced Globals:
;   CVector3f g_ZeroVector
;   undefined4 g_ZeroVector.y
;   undefined4 g_ZeroVector.z
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 005838d0
        ;   Label: core_vecdir.cpp_staticInit_FUN_005838d0
    MOV dword ptr [0x02653710],EDX      ; 005838d2 | g_ZeroVector.y
    MOV dword ptr [0x02653714],EDX      ; 005838d8 | g_ZeroVector.z
    MOV dword ptr [0x0265370c],EDX      ; 005838de | g_ZeroVector
    RET                                 ; 005838e4

