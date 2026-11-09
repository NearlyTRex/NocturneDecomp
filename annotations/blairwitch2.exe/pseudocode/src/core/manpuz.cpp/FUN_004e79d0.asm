; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_manpuz_cpp_FUN_004e79d0(int param_1,undefined4 param_2)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004e79d0
        ;   Label: core_manpuz.cpp_FUN_004e79d0
    CMP dword ptr [EAX + 0x430],0x0     ; 004e79d4
    JZ 0x004e79e0                       ; 004e79db
        ;   XREF to: 004e79e0 (CONDITIONAL_JUMP)  ; LAB_004e79e0
    XOR EAX,EAX                         ; 004e79dd
    RET                                 ; 004e79df
    MOV EDX,dword ptr [ESP + 0x8]       ; 004e79e0
        ;   Label: LAB_004e79e0
    MOV dword ptr [EAX + 0x430],EDX     ; 004e79e4
    MOV EAX,0x1                         ; 004e79ea
    RET                                 ; 004e79ef

