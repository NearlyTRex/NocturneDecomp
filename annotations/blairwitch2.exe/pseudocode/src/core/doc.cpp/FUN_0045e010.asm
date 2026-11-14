; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_doc_cpp_FUN_0045e010(float *param_1,float *param_2)
;
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 0045e010
        ;   Label: core_doc.cpp_FUN_0045e010
    MOV EDX,dword ptr [ESP + 0x8]       ; 0045e013
    MOV EAX,dword ptr [ESP + 0xc]       ; 0045e017
    FLD float ptr [EDX + 0x4]           ; 0045e01b
    FMUL float ptr [EAX + 0x4]          ; 0045e01e
    FLD float ptr [EDX]                 ; 0045e021
    FMUL float ptr [EAX]                ; 0045e023
    FADDP                               ; 0045e025
    FLD float ptr [EDX + 0x8]           ; 0045e027
    FMUL float ptr [EAX + 0x8]          ; 0045e02a
    FADDP                               ; 0045e02d
    FSTP float ptr [ESP]                ; 0045e02f
    MOV EAX,dword ptr [ESP]             ; 0045e032
    ADD ESP,0x4                         ; 0045e035
    RET                                 ; 0045e038

