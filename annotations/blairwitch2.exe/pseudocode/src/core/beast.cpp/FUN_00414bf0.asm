; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_beast_cpp_FUN_00414bf0(int param_1,int *param_2)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 00414bf0
        ;   Label: core_beast.cpp_FUN_00414bf0
    CMP dword ptr [EAX],0x1             ; 00414bf4
    JZ 0x00414bfc                       ; 00414bf7
        ;   XREF to: 00414bfc (CONDITIONAL_JUMP)  ; LAB_00414bfc
    XOR EAX,EAX                         ; 00414bf9
    RET                                 ; 00414bfb
    MOV EDX,dword ptr [ESP + 0x4]       ; 00414bfc
        ;   Label: LAB_00414bfc
    ADD EDX,0x2b4                       ; 00414c00
    MOV dword ptr [EAX + 0x20],EDX      ; 00414c06
    MOV EAX,0x1                         ; 00414c09
    RET                                 ; 00414c0e

