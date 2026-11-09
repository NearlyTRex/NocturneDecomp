; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool core_fldnotes_cpp_FUN_004a1f60(int param_1)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004a1f60
        ;   Label: core_fldnotes.cpp_FUN_004a1f60
    CMP dword ptr [EAX + 0x10],0x0      ; 004a1f64
    SETNZ AL                            ; 004a1f68
    AND EAX,0xff                        ; 004a1f6b
    RET                                 ; 004a1f70

