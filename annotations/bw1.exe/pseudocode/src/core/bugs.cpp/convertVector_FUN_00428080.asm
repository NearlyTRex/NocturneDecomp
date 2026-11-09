; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3i * __cdecl core_bugs_cpp_convertVector_FUN_00428080(CVector3f *dest,CVector3i *src)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   dest
; CVector3i *      Stack[0x8]:4   src
;
; Referenced Globals:
;   undefined4 DAT_005fd218
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00428080
        ;   Label: core_bugs.cpp_convertVector_FUN_00428080
    MOV EAX,dword ptr [ESP + 0xc]       ; 00428081
    MOV EBX,dword ptr [ESP + 0x8]       ; 00428085
    FILD dword ptr [EAX]                ; 00428089
    FMUL float ptr [0x005fd218]         ; 0042808b | DAT_005fd218
    FSTP float ptr [EBX]                ; 00428091
    FILD dword ptr [EAX + 0x4]          ; 00428093
    FMUL float ptr [0x005fd218]         ; 00428096 | DAT_005fd218
    FSTP float ptr [EBX + 0x4]          ; 0042809c
    FILD dword ptr [EAX + 0x8]          ; 0042809f
    FMUL float ptr [0x005fd218]         ; 004280a2 | DAT_005fd218
    FSTP float ptr [EBX + 0x8]          ; 004280a8
    POP EBX                             ; 004280ab
    RET                                 ; 004280ac

