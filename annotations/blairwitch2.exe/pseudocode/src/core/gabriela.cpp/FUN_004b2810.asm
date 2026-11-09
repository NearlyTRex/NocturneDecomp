; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_gabriela_cpp_FUN_004b2810(int param_1,int param_2)
;
;
; *****************************************************************************

section .text

    CMP dword ptr [ESP + 0x8],0x0       ; 004b2810
        ;   Label: core_gabriela.cpp_FUN_004b2810
    JZ 0x004b2827                       ; 004b2815
        ;   XREF to: 004b2827 (CONDITIONAL_JUMP)  ; LAB_004b2827
    MOV EAX,0x3                         ; 004b2817
    MOV EDX,dword ptr [ESP + 0x4]       ; 004b281c
    MOV dword ptr [EDX + 0x25640],EAX   ; 004b2820
    RET                                 ; 004b2826
    XOR EAX,EAX                         ; 004b2827
        ;   Label: LAB_004b2827
    MOV EDX,dword ptr [ESP + 0x4]       ; 004b2829
    MOV dword ptr [EDX + 0x25640],EAX   ; 004b282d
    RET                                 ; 004b2833

