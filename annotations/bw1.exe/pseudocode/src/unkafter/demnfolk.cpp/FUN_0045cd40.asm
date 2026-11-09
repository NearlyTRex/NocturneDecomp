; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool unkafter_demnfolk_cpp_FUN_0045cd40(undefined4 param_1,undefined4 param_2,int param_3)
;
;
; *****************************************************************************

section .text

    CMP dword ptr [ESP + 0xc],0x1       ; 0045cd40
        ;   Label: unkafter_demnfolk.cpp_FUN_0045cd40
    SETZ AL                             ; 0045cd45
    AND EAX,0xff                        ; 0045cd48
    RET                                 ; 0045cd4d

