; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_chain_cpp_fastSqrt_FUN_0042cd20(float value)
;
; Parameters:
; float            Stack[0x4]:4   value
;
; Referenced Globals:
;   int g_FastSqrtMagic
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0042cd20
        ;   Label: core_chain.cpp_fastSqrt_FUN_0042cd20
    MOV EDX,dword ptr [0x01c7070c]      ; 0042cd24 | g_FastSqrtMagic
    SAR EAX,0x1                         ; 0042cd2a
    ADD EAX,EDX                         ; 0042cd2c
    RET                                 ; 0042cd2e

