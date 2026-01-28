; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_dlight_cpp_staticInit_FUN_00472680(void)
;
;
; Referenced Globals:
;   float FLOAT_026a72d8
;   float FLOAT_026a72dc
;   float FLOAT_026a72e0
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 00472680
        ;   Label: core_dlight.cpp_staticInit_FUN_00472680
    MOV dword ptr [0x026a72dc],EDX      ; 00472682 | FLOAT_026a72dc
    MOV dword ptr [0x026a72e0],EDX      ; 00472688 | FLOAT_026a72e0
    MOV dword ptr [0x026a72d8],EDX      ; 0047268e | FLOAT_026a72d8
    RET                                 ; 00472694

