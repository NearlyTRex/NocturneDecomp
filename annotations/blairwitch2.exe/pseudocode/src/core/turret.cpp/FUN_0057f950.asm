; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_turret_cpp_FUN_0057f950(int param_1,undefined4 param_2)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0057f950
        ;   Label: core_turret.cpp_FUN_0057f950
    CMP dword ptr [EAX + 0x9b8],0x0     ; 0057f954
    JZ 0x0057f960                       ; 0057f95b
        ;   XREF to: 0057f960 (CONDITIONAL_JUMP)  ; LAB_0057f960
    XOR EAX,EAX                         ; 0057f95d
    RET                                 ; 0057f95f
    MOV EDX,dword ptr [ESP + 0x8]       ; 0057f960
        ;   Label: LAB_0057f960
    MOV dword ptr [EAX + 0x9b8],EDX     ; 0057f964
    MOV EAX,0x1                         ; 0057f96a
    RET                                 ; 0057f96f

