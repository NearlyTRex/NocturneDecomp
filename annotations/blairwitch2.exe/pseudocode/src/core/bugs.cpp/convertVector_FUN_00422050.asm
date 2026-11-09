; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3i * __cdecl core_bugs_cpp_convertVector_FUN_00422050(CVector3f *dest,CVector3i *src)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   dest
; CVector3i *      Stack[0x8]:4   src
;
; Referenced Globals:
;   undefined4 DAT_005f3e18
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00422050
        ;   Label: core_bugs.cpp_convertVector_FUN_00422050
    MOV EAX,dword ptr [ESP + 0xc]       ; 00422051
    MOV EBX,dword ptr [ESP + 0x8]       ; 00422055
    FILD dword ptr [EAX]                ; 00422059
    FMUL float ptr [0x005f3e18]         ; 0042205b | DAT_005f3e18
    FSTP float ptr [EBX]                ; 00422061
    FILD dword ptr [EAX + 0x4]          ; 00422063
    FMUL float ptr [0x005f3e18]         ; 00422066 | DAT_005f3e18
    FSTP float ptr [EBX + 0x4]          ; 0042206c
    FILD dword ptr [EAX + 0x8]          ; 0042206f
    FMUL float ptr [0x005f3e18]         ; 00422072 | DAT_005f3e18
    FSTP float ptr [EBX + 0x8]          ; 00422078
    POP EBX                             ; 0042207b
    RET                                 ; 0042207c

