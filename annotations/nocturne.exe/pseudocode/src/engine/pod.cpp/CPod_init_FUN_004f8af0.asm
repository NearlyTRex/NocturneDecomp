; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_pod_cpp_CPod_init_FUN_004f8af0(CPod *this_ptr)
;
; Parameters:
; CPod *           Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_main.c_FUN_004c85f0 at 004c86d2
;
; Referenced Globals:
;   TerminatedCString s_engine_pod_cpp_0058dc31
;   TerminatedCString s_CPod_init_No_POD_to_init_0058dc43
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f8af0
        ;   Label: engine_pod.cpp_CPod_init_FUN_004f8af0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004f8af1
    TEST EBX,EBX                        ; 004f8af5
    JZ 0x004f8b00                       ; 004f8af7
        ;   XREF to: 004f8b00 (CONDITIONAL_JUMP)  ; LAB_004f8b00
    CMP dword ptr [EBX],0x0             ; 004f8af9
    JZ 0x004f8b2a                       ; 004f8afc
        ;   XREF to: 004f8b2a (CONDITIONAL_JUMP)  ; LAB_004f8b2a
    POP EBX                             ; 004f8afe
    RET                                 ; 004f8aff
    MOV EDX,0x58dc31                    ; 004f8b00 | = "..\\engine\\pod.cpp"
        ;   Label: LAB_004f8b00
    MOV ECX,0x2be                       ; 004f8b05
    PUSH 0x58dc43                       ; 004f8b0a | = "CPod::init - No .POD to init!"
    MOV dword ptr [0x01cc4800],EDX      ; 004f8b0f | g_CurrentFilename
    MOV dword ptr [0x01cc4804],ECX      ; 004f8b15 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 004f8b1b
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 004f8b20
    CMP dword ptr [EBX],0x0             ; 004f8b23
    JZ 0x004f8b2a                       ; 004f8b26
        ;   XREF to: 004f8b2a (CONDITIONAL_JUMP)  ; LAB_004f8b2a
    POP EBX                             ; 004f8b28
    RET                                 ; 004f8b29
    PUSH EBX                            ; 004f8b2a
        ;   Label: LAB_004f8b2a
    MOV EAX,dword ptr [EBX + 0x194]     ; 004f8b2b
    CALL dword ptr [EAX + 0x4]          ; 004f8b31
    ADD ESP,0x4                         ; 004f8b34
    POP EBX                             ; 004f8b37
    RET                                 ; 004f8b38

