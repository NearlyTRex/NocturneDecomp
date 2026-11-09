; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_gabriela_cpp_FUN_004cb730(int param_1,int param_2)
;
;
; *****************************************************************************

section .text

    CMP dword ptr [ESP + 0x8],0x0       ; 004cb730
        ;   Label: core_gabriela.cpp_FUN_004cb730
    JZ 0x004cb747                       ; 004cb735
        ;   XREF to: 004cb747 (CONDITIONAL_JUMP)  ; LAB_004cb747
    MOV EAX,0x3                         ; 004cb737
    MOV EDX,dword ptr [ESP + 0x4]       ; 004cb73c
    MOV dword ptr [EDX + 0x1ffac],EAX   ; 004cb740
    RET                                 ; 004cb746
    XOR EAX,EAX                         ; 004cb747
        ;   Label: LAB_004cb747
    MOV EDX,dword ptr [ESP + 0x4]       ; 004cb749
    MOV dword ptr [EDX + 0x1ffac],EAX   ; 004cb74d
    RET                                 ; 004cb753

