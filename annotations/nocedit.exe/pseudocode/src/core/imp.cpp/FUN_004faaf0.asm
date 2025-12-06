; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_imp.cpp_FUN_004faaf0()
;
;
; *****************************************************************************

section .text

    CMP dword ptr [ESP + 0x8],0x0       ; 004faaf0
        ;   Label: core_imp.cpp_FUN_004faaf0
    SETNZ AL                            ; 004faaf5
    AND EAX,0xff                        ; 004faaf8
    RET                                 ; 004faafd

