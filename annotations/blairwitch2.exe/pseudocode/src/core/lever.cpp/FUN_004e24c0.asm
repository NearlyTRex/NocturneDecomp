; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool core_lever_cpp_FUN_004e24c0(int param_1)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004e24c0
        ;   Label: core_lever.cpp_FUN_004e24c0
    CMP dword ptr [EAX + 0x96c],0x0     ; 004e24c4
    SETNZ AL                            ; 004e24cb
    AND EAX,0xff                        ; 004e24ce
    RET                                 ; 004e24d3

