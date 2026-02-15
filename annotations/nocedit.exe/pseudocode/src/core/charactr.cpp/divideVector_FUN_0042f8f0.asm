; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_charactr_cpp_divideVector_FUN_0042f8f0(CVector3f *src,CVector3f *dst,float *scalar)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   src
; CVector3f *      Stack[0x8]:4   dst
; float *          Stack[0xc]:4   scalar
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0042f8f0
        ;   Label: core_charactr.cpp_divideVector_FUN_0042f8f0
    MOV EAX,dword ptr [ESP + 0x8]       ; 0042f8f4
    MOV ECX,dword ptr [ESP + 0xc]       ; 0042f8f8
    FLD float ptr [EDX]                 ; 0042f8fc
    FDIV float ptr [ECX]                ; 0042f8fe
    FSTP float ptr [EAX]                ; 0042f900
    FLD float ptr [EDX + 0x4]           ; 0042f902
    FDIV float ptr [ECX]                ; 0042f905
    FSTP float ptr [EAX + 0x4]          ; 0042f907
    FLD float ptr [EDX + 0x8]           ; 0042f90a
    FDIV float ptr [ECX]                ; 0042f90d
    FSTP float ptr [EAX + 0x8]          ; 0042f90f
    RET                                 ; 0042f912

