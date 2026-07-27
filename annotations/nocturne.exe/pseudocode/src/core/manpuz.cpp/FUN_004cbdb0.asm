; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_manpuz_cpp_FUN_004cbdb0(int param_1,int param_2)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004cbdb0
        ;   Label: core_manpuz.cpp_FUN_004cbdb0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004cbdb4
    CMP EDX,dword ptr [EAX + 0x2cc]     ; 004cbdb8
    JZ 0x004cbdc1                       ; 004cbdbe
        ;   XREF to: 004cbdc1 (CONDITIONAL_JUMP)  ; LAB_004cbdc1
    RET                                 ; 004cbdc0
    MOV dword ptr [EAX + 0x2cc],0x0     ; 004cbdc1
        ;   Label: LAB_004cbdc1
    RET                                 ; 004cbdcb

