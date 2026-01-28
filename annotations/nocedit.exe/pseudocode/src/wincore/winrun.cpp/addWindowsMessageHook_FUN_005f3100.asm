; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void wincore_winrun_cpp_addWindowsMessageHook_FUN_005f3100 (undefined4 param_1,undefined4 param_2,undefined4 unaff_EBX,undefined4 param_4, WNDPROC param_5)
;
;
; Referenced Globals:
;   TerminatedCString s_wincore_winrun_cpp_00657f4c
;   TerminatedCString s_addWindowsMessageHook_to_00657f62
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   int g_NumWindowMessageHandlers
;   WNDPROC[4] g_WindowMessageHandlers
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005f3100
        ;   Label: wincore_winrun.cpp_addWindowsMessageHook_FUN_005f3100
    CMP dword ptr [0x03f98ddc],0x3      ; 005f3101 | g_NumWindowMessageHandlers
    JGE 0x005f3125                      ; 005f3108
        ;   XREF to: 005f3125 (CONDITIONAL_JUMP)  ; LAB_005f3125
    MOV EAX,[0x03f98ddc]                ; 005f310a | g_NumWindowMessageHandlers
        ;   Label: LAB_005f310a
    MOV EDX,dword ptr [ESP + 0x8]       ; 005f310f
    LEA ESI,[EAX + 0x1]                 ; 005f3113
    MOV dword ptr [EAX*0x4 + 0x3f98de0],EDX ; 005f3116 | g_WindowMessageHandlers
    MOV dword ptr [0x03f98ddc],ESI      ; 005f311d | g_NumWindowMessageHandlers
    POP ESI                             ; 005f3123
    RET                                 ; 005f3124
    PUSH EBX                            ; 005f3125
        ;   Label: LAB_005f3125
    MOV ECX,0x657f4c                    ; 005f3126 | = "..\\wincore\\winrun.cpp"
    MOV EBX,0x62                        ; 005f312b
    PUSH 0x657f62                       ; 005f3130 | = "addWindowsMessageHook - too many!"
    MOV dword ptr [0x02f0ca48],ECX      ; 005f3135 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 005f313b | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005f3141
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005f3146
    POP EBX                             ; 005f3149
    JMP 0x005f310a                      ; 005f314a
        ;   XREF to: 005f310a (UNCONDITIONAL_JUMP)  ; LAB_005f310a

