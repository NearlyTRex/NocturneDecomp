; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_bugs_cpp_getBugState_FUN_00427b60(SBug *bug_data)
;
; Parameters:
; SBug *           Stack[0x4]:4   bug_data
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00427b60
        ;   Label: core_bugs.cpp_getBugState_FUN_00427b60
    MOV EAX,dword ptr [EAX]             ; 00427b64
    RET                                 ; 00427b66

