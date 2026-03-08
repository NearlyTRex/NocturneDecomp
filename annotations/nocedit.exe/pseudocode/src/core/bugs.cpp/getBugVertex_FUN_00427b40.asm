; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_bugs_cpp_getBugVertex_FUN_00427b40(SBug *bug_data,int bug_index)
;
; Parameters:
; SBug *           Stack[0x4]:4   bug_data
; int              Stack[0x8]:4   bug_index
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 00427b40
        ;   Label: core_bugs.cpp_getBugVertex_FUN_00427b40
    MOV EDX,dword ptr [ESP + 0x4]       ; 00427b44
    SHL EAX,0x2                         ; 00427b48
    ADD EAX,EDX                         ; 00427b4b
    MOV EAX,dword ptr [EAX + 0x2c]      ; 00427b4d
    RET                                 ; 00427b50

