; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int support_trisock.cpp_shouldNeverBeCalled_FUN_005e1ab0(int unknown1, int unknown2)
;
; Parameters:
; int              Stack[0x4]:4   unknown1
; int              Stack[0x8]:4   unknown2
;
; Referenced Globals:
;   TerminatedCString s_support_trisock_cpp_00656561
;   TerminatedCString s_Should_never_be_called_00656578
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    MOV EDX,0x656561                    ; 005e1ab0 | = "..\\support\\trisock.cpp" | s_support_trisock_cpp_00656561 = ..\support\trisock.cpp
        ;   Label: support_trisock.cpp_shouldNeverBeCalled_FUN_005e1ab0
    MOV ECX,0xd1                        ; 005e1ab5
    PUSH 0x656578                       ; 005e1aba | = "Should never be called!" | s_Should_never_be_called_00656578 = Should never be called!
    MOV dword ptr [0x02f0ca48],EDX      ; 005e1abf | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 005e1ac5 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005e1acb | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005e1ad0
    MOV EAX,dword ptr [ESP + 0x4]       ; 005e1ad3
    RET                                 ; 005e1ad7

