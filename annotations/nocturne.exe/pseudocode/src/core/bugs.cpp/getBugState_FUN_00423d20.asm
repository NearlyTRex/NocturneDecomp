; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_bugs_cpp_getBugState_FUN_00423d20(SBug *bug_data)
;
; Parameters:
; SBug *           Stack[0x4]:4   bug_data
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00423d20
        ;   Label: core_bugs.cpp_getBugState_FUN_00423d20
    MOV EAX,dword ptr [EAX]             ; 00423d24
    RET                                 ; 00423d26

