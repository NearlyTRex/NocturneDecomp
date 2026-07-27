; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float * core_dtrace_cpp_FUN_0046b7b0(void)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0046b7b0
        ;   Label: core_dtrace.cpp_FUN_0046b7b0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0046b7b4
    MOV ECX,dword ptr [ESP + 0xc]       ; 0046b7b8
    FILD dword ptr [ECX]                ; 0046b7bc
    FMUL float ptr [EAX + 0x34]         ; 0046b7be
    FADD float ptr [EAX + 0x10]         ; 0046b7c1
    FSTP float ptr [EDX]                ; 0046b7c4
    FILD dword ptr [ECX + 0x4]          ; 0046b7c6
    FMUL float ptr [EAX + 0x38]         ; 0046b7c9
    FADD float ptr [EAX + 0x14]         ; 0046b7cc
    FSTP float ptr [EDX + 0x4]          ; 0046b7cf
    FILD dword ptr [ECX + 0x8]          ; 0046b7d2
    FMUL float ptr [EAX + 0x3c]         ; 0046b7d5
    FADD float ptr [EAX + 0x18]         ; 0046b7d8
    MOV EAX,EDX                         ; 0046b7db
    FSTP float ptr [EDX + 0x8]          ; 0046b7dd
    RET                                 ; 0046b7e0

