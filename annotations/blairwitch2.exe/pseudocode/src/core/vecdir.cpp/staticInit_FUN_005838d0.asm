; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_vecdir_cpp_staticInit_FUN_005838d0(void)
;
;
; Referenced Globals:
;   CVector3f g_CVector3f_0265370c
;   undefined4 g_CVector3f_0265370c.y
;   undefined4 g_CVector3f_0265370c.z
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 005838d0
        ;   Label: core_vecdir.cpp_staticInit_FUN_005838d0
    MOV dword ptr [0x02653710],EDX      ; 005838d2 | g_CVector3f_0265370c.y
    MOV dword ptr [0x02653714],EDX      ; 005838d8 | g_CVector3f_0265370c.z
    MOV dword ptr [0x0265370c],EDX      ; 005838de | g_CVector3f_0265370c
    RET                                 ; 005838e4

