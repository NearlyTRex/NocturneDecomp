; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_chain_cpp_fastSqrt_FUN_00534c70(float value)
;
; Parameters:
; float            Stack[0x4]:4   value
;
; Referenced Globals:
;   undefined4 DAT_01caf5b4
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00534c70
        ;   Label: core_chain.cpp_fastSqrt_FUN_00534c70
    MOV EDX,dword ptr [0x01caf5b4]      ; 00534c74 | DAT_01caf5b4
    SAR EAX,0x1                         ; 00534c7a
    ADD EAX,EDX                         ; 00534c7c
    RET                                 ; 00534c7e

