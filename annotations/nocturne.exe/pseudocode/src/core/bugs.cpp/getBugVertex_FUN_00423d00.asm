; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_bugs_cpp_getBugVertex_FUN_00423d00(SBug *bug_data,int bug_index)
;
; Parameters:
; SBug *           Stack[0x4]:4   bug_data
; int              Stack[0x8]:4   bug_index
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 00423d00
        ;   Label: core_bugs.cpp_getBugVertex_FUN_00423d00
    MOV EDX,dword ptr [ESP + 0x4]       ; 00423d04
    SHL EAX,0x2                         ; 00423d08
    ADD EAX,EDX                         ; 00423d0b
    MOV EAX,dword ptr [EAX + 0x2c]      ; 00423d0d
    RET                                 ; 00423d10

