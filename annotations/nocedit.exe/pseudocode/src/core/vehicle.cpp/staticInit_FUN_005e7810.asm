; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_vehicle.cpp_staticInit_FUN_005e7810()
;
;
; Referenced Globals:
;   CVector3f g_ZeroVector
;   undefined4 g_ZeroVector.y
;   undefined4 g_ZeroVector.z
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 005e7810
        ;   Label: core_vehicle.cpp_staticInit_FUN_005e7810
    MOV dword ptr [0x03f8755c],EDX      ; 005e7812 | g_ZeroVector.y
    MOV dword ptr [0x03f87560],EDX      ; 005e7818 | g_ZeroVector.z
    MOV dword ptr [0x03f87558],EDX      ; 005e781e | g_ZeroVector
    RET                                 ; 005e7824

