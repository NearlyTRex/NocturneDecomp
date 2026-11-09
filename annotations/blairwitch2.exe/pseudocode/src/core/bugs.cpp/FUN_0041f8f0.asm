; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_bugs_cpp_FUN_0041f8f0(int param_1)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0041f8f0
        ;   Label: core_bugs.cpp_FUN_0041f8f0
    MOV EDX,dword ptr [EAX + 0x70]      ; 0041f8f4
    CMP EDX,0x2                         ; 0041f8f7
    JZ 0x0041f90b                       ; 0041f8fa
        ;   XREF to: 0041f90b (CONDITIONAL_JUMP)  ; LAB_0041f90b
    CMP dword ptr [EAX + 0x10af8],0x3   ; 0041f8fc
    JNZ 0x0041f8e0                      ; 0041f903
        ;   XREF to: 0041f8e0 (CONDITIONAL_JUMP)
    MOV EAX,0x2                         ; 0041f905
    RET                                 ; 0041f90a
    MOV EAX,EDX                         ; 0041f90b
        ;   Label: LAB_0041f90b
    RET                                 ; 0041f90d

