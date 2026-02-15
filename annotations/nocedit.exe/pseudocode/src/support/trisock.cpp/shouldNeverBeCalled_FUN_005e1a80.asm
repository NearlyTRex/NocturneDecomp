; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_trisock_cpp_shouldNeverBeCalled_FUN_005e1a80(int unknown1,int unknown2)
;
; Parameters:
; int              Stack[0x4]:4   unknown1
; int              Stack[0x8]:4   unknown2
;
; Referenced Globals:
;   TerminatedCString s_support_trisock_cpp_00656532
;   TerminatedCString s_Should_never_be_called_00656549
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    MOV EDX,0x656532                    ; 005e1a80 | = "..\\support\\trisock.cpp"
        ;   Label: support_trisock.cpp_shouldNeverBeCalled_FUN_005e1a80
    MOV ECX,0xd0                        ; 005e1a85
    PUSH 0x656549                       ; 005e1a8a | = "Should never be called!"
    MOV dword ptr [0x02f0ca48],EDX      ; 005e1a8f | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 005e1a95 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005e1a9b
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005e1aa0
    MOV EAX,dword ptr [ESP + 0x4]       ; 005e1aa3
    RET                                 ; 005e1aa7

