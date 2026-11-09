; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool unkafter_demnfolk_cpp_FUN_00458f00(undefined4 param_1,undefined4 param_2,int param_3)
;
;
; *****************************************************************************

section .text

    CMP dword ptr [ESP + 0xc],0x1       ; 00458f00
        ;   Label: unkafter_demnfolk.cpp_FUN_00458f00
    SETZ AL                             ; 00458f05
    AND EAX,0xff                        ; 00458f08
    RET                                 ; 00458f0d

