; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_bugs_cpp_scaleVector_FUN_004279d0(CVector3f *dest,CVector3f *src)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   dest
; CVector3f *      Stack[0x8]:4   src
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004279d0
        ;   Label: core_bugs.cpp_scaleVector_FUN_004279d0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004279d4
    FLD float ptr [EDX]                 ; 004279d8
    FMUL float ptr [EAX]                ; 004279da
    FSTP float ptr [EAX]                ; 004279dc
    FLD float ptr [EDX]                 ; 004279de
    FMUL float ptr [EAX + 0x4]          ; 004279e0
    FSTP float ptr [EAX + 0x4]          ; 004279e3
    FLD float ptr [EDX]                 ; 004279e6
    FMUL float ptr [EAX + 0x8]          ; 004279e8
    FSTP float ptr [EAX + 0x8]          ; 004279eb
    RET                                 ; 004279ee

