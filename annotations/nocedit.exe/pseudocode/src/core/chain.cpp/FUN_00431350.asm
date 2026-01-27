; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_chain.cpp_FUN_00431350()
;
;
; Referenced Globals:
;   int INT_02d7a7b8
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00431350
        ;   Label: core_chain.cpp_FUN_00431350
    MOV EDX,dword ptr [0x02d7a7b8]      ; 00431354 | INT_02d7a7b8
    SAR EAX,0x1                         ; 0043135a
    ADD EAX,EDX                         ; 0043135c
    RET                                 ; 0043135e

