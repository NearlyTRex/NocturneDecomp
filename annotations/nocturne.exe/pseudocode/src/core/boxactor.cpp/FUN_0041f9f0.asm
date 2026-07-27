; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool core_boxactor_cpp_FUN_0041f9f0(void)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0041f9f0
        ;   Label: core_boxactor.cpp_FUN_0041f9f0
    CMP dword ptr [EAX + 0x178],0x0     ; 0041f9f4
    SETNZ AL                            ; 0041f9fb
    AND EAX,0xff                        ; 0041f9fe
    RET                                 ; 0041fa03

