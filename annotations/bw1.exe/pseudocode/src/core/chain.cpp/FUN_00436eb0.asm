; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_chain_cpp_FUN_00436eb0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01cc804c
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00436eb0
        ;   Label: core_chain.cpp_FUN_00436eb0
    MOV EDX,dword ptr [0x01cc804c]      ; 00436eb4 | DAT_01cc804c
    SAR EAX,0x1                         ; 00436eba
    ADD EAX,EDX                         ; 00436ebc
    RET                                 ; 00436ebe

