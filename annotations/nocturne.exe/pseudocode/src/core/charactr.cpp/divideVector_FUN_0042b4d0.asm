; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_charactr_cpp_divideVector_FUN_0042b4d0(CVector3f *src,CVector3f *dst,float *scalar)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   src
; CVector3f *      Stack[0x8]:4   dst
; float *          Stack[0xc]:4   scalar
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0042b4d0
        ;   Label: core_charactr.cpp_divideVector_FUN_0042b4d0
    MOV EAX,dword ptr [ESP + 0x8]       ; 0042b4d4
    MOV ECX,dword ptr [ESP + 0xc]       ; 0042b4d8
    FLD float ptr [EDX]                 ; 0042b4dc
    FDIV float ptr [ECX]                ; 0042b4de
    FSTP float ptr [EAX]                ; 0042b4e0
    FLD float ptr [EDX + 0x4]           ; 0042b4e2
    FDIV float ptr [ECX]                ; 0042b4e5
    FSTP float ptr [EAX + 0x4]          ; 0042b4e7
    FLD float ptr [EDX + 0x8]           ; 0042b4ea
    FDIV float ptr [ECX]                ; 0042b4ed
    FSTP float ptr [EAX + 0x8]          ; 0042b4ef
    RET                                 ; 0042b4f2

