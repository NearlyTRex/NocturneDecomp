; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_pod.cpp_CPod_init_FUN_00550c30(CPod * this_ptr)
;
; Parameters:
; CPod *           Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_main.c_initializeGameSystems_FUN_00507a60 at 00507b58
;
; Referenced Globals:
;   TerminatedCString s_engine_pod_cpp_00640746
;   TerminatedCString s_CPod_init_No_POD_to_init_00640758
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00550c30
        ;   Label: engine_pod.cpp_CPod_init_FUN_00550c30
    MOV EBX,dword ptr [ESP + 0x8]       ; 00550c31
    TEST EBX,EBX                        ; 00550c35
    JZ 0x00550c40                       ; 00550c37
        ;   XREF to: 00550c40 (CONDITIONAL_JUMP)  ; LAB_00550c40
    CMP dword ptr [EBX],0x0             ; 00550c39
    JZ 0x00550c6a                       ; 00550c3c
        ;   XREF to: 00550c6a (CONDITIONAL_JUMP)  ; LAB_00550c6a
    POP EBX                             ; 00550c3e
    RET                                 ; 00550c3f
    MOV EDX,0x640746                    ; 00550c40 | = "..\\engine\\pod.cpp"
        ;   Label: LAB_00550c40
    MOV ECX,0x3e1                       ; 00550c45
    PUSH 0x640758                       ; 00550c4a | = "CPod::init - No .POD to init!"
    MOV dword ptr [0x02f0ca48],EDX      ; 00550c4f | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 00550c55 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00550c5b
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00550c60
    CMP dword ptr [EBX],0x0             ; 00550c63
    JZ 0x00550c6a                       ; 00550c66
        ;   XREF to: 00550c6a (CONDITIONAL_JUMP)  ; LAB_00550c6a
    POP EBX                             ; 00550c68
    RET                                 ; 00550c69
    PUSH EBX                            ; 00550c6a
        ;   Label: LAB_00550c6a
    MOV EAX,dword ptr [EBX + 0x194]     ; 00550c6b
    CALL dword ptr [EAX + 0x4]          ; 00550c71
    ADD ESP,0x4                         ; 00550c74
    POP EBX                             ; 00550c77
    RET                                 ; 00550c78

