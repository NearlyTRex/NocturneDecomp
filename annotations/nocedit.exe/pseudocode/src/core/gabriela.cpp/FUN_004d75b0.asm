; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_gabriela.cpp_FUN_004d75b0()
;
;
; *****************************************************************************

section .text

    CMP dword ptr [ESP + 0x8],0x0       ; 004d75b0
        ;   Label: core_gabriela.cpp_FUN_004d75b0
    JZ 0x004d75c7                       ; 004d75b5 | LAB_004d75c7
        ;   XREF to: 004d75c7 (CONDITIONAL_JUMP)
    MOV EAX,0x3                         ; 004d75b7
    MOV EDX,dword ptr [ESP + 0x4]       ; 004d75bc
    MOV dword ptr [EDX + 0x1fbd4],EAX   ; 004d75c0
    RET                                 ; 004d75c6
    XOR EAX,EAX                         ; 004d75c7
        ;   Label: LAB_004d75c7
    MOV EDX,dword ptr [ESP + 0x4]       ; 004d75c9
    MOV dword ptr [EDX + 0x1fbd4],EAX   ; 004d75cd
    RET                                 ; 004d75d3

