; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_manpuz_cpp_FUN_004e7a50(int param_1,int param_2)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004e7a50
        ;   Label: core_manpuz.cpp_FUN_004e7a50
    MOV EDX,dword ptr [ESP + 0x8]       ; 004e7a54
    CMP EDX,dword ptr [EAX + 0x430]     ; 004e7a58
    JZ 0x004e7a61                       ; 004e7a5e
        ;   XREF to: 004e7a61 (CONDITIONAL_JUMP)  ; LAB_004e7a61
    RET                                 ; 004e7a60
    MOV dword ptr [EAX + 0x430],0x0     ; 004e7a61
        ;   Label: LAB_004e7a61
    RET                                 ; 004e7a6b

