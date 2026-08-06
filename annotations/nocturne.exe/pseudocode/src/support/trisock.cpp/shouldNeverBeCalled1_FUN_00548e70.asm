; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_trisock_cpp_shouldNeverBeCalled1_FUN_00548e70(int unknown1,int unknown2)
;
; Parameters:
; int              Stack[0x4]:4   unknown1
; int              Stack[0x8]:4   unknown2
;
; Referenced Globals:
;   TerminatedCString s_support_trisock_cpp_00596c67
;   TerminatedCString s_Should_never_be_called_00596c7e
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;
; *****************************************************************************

section .text

    MOV EDX,0x596c67                    ; 00548e70 | = "..\\support\\trisock.cpp"
        ;   Label: support_trisock.cpp_shouldNeverBeCalled1_FUN_00548e70
    MOV ECX,0xd0                        ; 00548e75
    PUSH 0x596c7e                       ; 00548e7a | = "Should never be called!"
    MOV dword ptr [0x01cc4800],EDX      ; 00548e7f | g_CurrentFilename
    MOV dword ptr [0x01cc4804],ECX      ; 00548e85 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 00548e8b
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 00548e90
    MOV EAX,dword ptr [ESP + 0x4]       ; 00548e93
    RET                                 ; 00548e97

