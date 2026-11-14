; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_chain_cpp_fastSqrt_FUN_00436eb0(float value)
;
; Parameters:
; float            Stack[0x4]:4   value
;
; Referenced Globals:
;   undefined4 DAT_01cc804c
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00436eb0
        ;   Label: core_chain.cpp_fastSqrt_FUN_00436eb0
    MOV EDX,dword ptr [0x01cc804c]      ; 00436eb4 | DAT_01cc804c
    SAR EAX,0x1                         ; 00436eba
    ADD EAX,EDX                         ; 00436ebc
    RET                                 ; 00436ebe

