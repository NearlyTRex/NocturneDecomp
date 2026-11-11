; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkaddr_0059d350_cpp_FUN_0059d610(int param_1)
;
;
; XREF[1]:
;   unkafter_basicene.cpp_CBasicEnemy_ctor_FUN_0059e3b0 at 0059e3c9
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0059d610
        ;   Label: unkaddr_0059d350.cpp_FUN_0059d610
    MOV dword ptr [EAX + 0x838],0x0     ; 0059d614
    MOV dword ptr [EAX + 0x840],0x0     ; 0059d61e
    MOV dword ptr [EAX + 0x83c],0x0     ; 0059d628
    MOV dword ptr [EAX + 0x848],0x0     ; 0059d632
    MOV dword ptr [EAX + 0x834],0x0     ; 0059d63c
    RET                                 ; 0059d646

