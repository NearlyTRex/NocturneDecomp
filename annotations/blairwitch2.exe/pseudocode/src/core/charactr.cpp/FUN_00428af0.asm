; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool core_charactr_cpp_FUN_00428af0(int param_1)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00428af0
        ;   Label: core_charactr.cpp_FUN_00428af0
    CMP dword ptr [EAX + 0x27b0],0x0    ; 00428af4
    SETZ AL                             ; 00428afb
    AND EAX,0xff                        ; 00428afe
    RET                                 ; 00428b03

