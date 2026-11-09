; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_chain_cpp_fastSqrt_FUN_0042ab10(float value)
;
; Parameters:
; float            Stack[0x4]:4   value
;
; Referenced Globals:
;   undefined4 DAT_01d1a0a4
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0042ab10
        ;   Label: core_chain.cpp_fastSqrt_FUN_0042ab10
    MOV EDX,dword ptr [0x01d1a0a4]      ; 0042ab14 | DAT_01d1a0a4
    SAR EAX,0x1                         ; 0042ab1a
    ADD EAX,EDX                         ; 0042ab1c
    RET                                 ; 0042ab1e

