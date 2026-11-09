; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3i * __cdecl core_bugs_cpp_convertVector_FUN_00424230(CVector3f *dest,CVector3i *src)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   dest
; CVector3i *      Stack[0x8]:4   src
;
; Referenced Globals:
;   undefined4 DAT_005dcbb8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00424230
        ;   Label: core_bugs.cpp_convertVector_FUN_00424230
    MOV EAX,dword ptr [ESP + 0xc]       ; 00424231
    MOV EBX,dword ptr [ESP + 0x8]       ; 00424235
    FILD dword ptr [EAX]                ; 00424239
    FMUL float ptr [0x005dcbb8]         ; 0042423b | DAT_005dcbb8
    FSTP float ptr [EBX]                ; 00424241
    FILD dword ptr [EAX + 0x4]          ; 00424243
    FMUL float ptr [0x005dcbb8]         ; 00424246 | DAT_005dcbb8
    FSTP float ptr [EBX + 0x4]          ; 0042424c
    FILD dword ptr [EAX + 0x8]          ; 0042424f
    FMUL float ptr [0x005dcbb8]         ; 00424252 | DAT_005dcbb8
    FSTP float ptr [EBX + 0x8]          ; 00424258
    POP EBX                             ; 0042425b
    RET                                 ; 0042425c

