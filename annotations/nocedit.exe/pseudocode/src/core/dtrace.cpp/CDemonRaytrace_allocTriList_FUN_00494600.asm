; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dtrace.cpp_CDemonRaytrace_allocTriList_FUN_00494600(CDemonRaytrace * this_ptr)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_dtrace.cpp_CDemonRaytrace_allocTris_FUN_004950b0 at 004950bd
;   core_dtrace.cpp_CDemonRaytrace_consolidateTriList_FUN_00494450 at 004944a9
;   core_dtrace.cpp_CDemonRaytrace_loadBinary_FUN_004947a0 at 00494c75
;
; Referenced Globals:
;   TerminatedCString s_core_dtrace_cpp_006226c0
;   TerminatedCString s_core_dtrace_cpp_006226d3
;   TerminatedCString s_core_dtrace_cpp_006226e6
;   TerminatedCString s_CDemonRaytrace_allocTriL_006226f9
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00494600
        ;   Label: core_dtrace.cpp_CDemonRaytrace_allocTriList_FUN_00494600
    PUSH ESI                            ; 00494601
    PUSH EBP                            ; 00494602
    MOV EBX,dword ptr [ESP + 0x10]      ; 00494603
    MOV ESI,dword ptr [EBX + 0x4]       ; 00494607
    LEA EAX,[ESI*0x8 + 0x0]             ; 0049460a
    MOV EDX,EAX                         ; 00494611
    SHL EAX,0x3                         ; 00494613
    PUSH 0xf7                           ; 00494616
    SUB EAX,EDX                         ; 0049461b
    PUSH 0x6226c0                       ; 0049461d | = "..\\core\\dtrace.cpp"
    ADD EAX,0x4                         ; 00494622
    PUSH EAX                            ; 00494625
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0 ; 00494626
        ;   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1f0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 0049462b
    TEST EAX,EAX                        ; 0049462e
    JNZ 0x0049465d                      ; 00494630
        ;   XREF to: 0049465d (CONDITIONAL_JUMP)  ; LAB_0049465d
    PUSH 0xf8                           ; 00494632
        ;   Label: LAB_00494632
    PUSH 0x6226d3                       ; 00494637 | = "..\\core\\dtrace.cpp"
    MOV EDX,dword ptr [EBX + 0x4]       ; 0049463c
    PUSH EDX                            ; 0049463f
    MOV dword ptr [EBX + 0x8],EAX       ; 00494640
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0 ; 00494643
        ;   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1f0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 00494648
    MOV ECX,dword ptr [EBX + 0x8]       ; 0049464b
    MOV dword ptr [EBX + 0xc],EAX       ; 0049464e
    TEST ECX,ECX                        ; 00494651
    JZ 0x00494665                       ; 00494653
        ;   XREF to: 00494665 (CONDITIONAL_JUMP)  ; LAB_00494665
    TEST EAX,EAX                        ; 00494655
    JZ 0x00494665                       ; 00494657
        ;   XREF to: 00494665 (CONDITIONAL_JUMP)  ; LAB_00494665
    POP EBP                             ; 00494659
    POP ESI                             ; 0049465a
    POP EBX                             ; 0049465b
    RET                                 ; 0049465c
    ADD EAX,0x4                         ; 0049465d
        ;   Label: LAB_0049465d
    MOV dword ptr [EAX + -0x4],ESI      ; 00494660
    JMP 0x00494632                      ; 00494663
        ;   XREF to: 00494632 (UNCONDITIONAL_JUMP)  ; LAB_00494632
    PUSH EDI                            ; 00494665
        ;   Label: LAB_00494665
    MOV EDI,0x6226e6                    ; 00494666 | = "..\\core\\dtrace.cpp"
    MOV EBP,0xf9                        ; 0049466b
    PUSH 0x6226f9                       ; 00494670 | = "CDemonRaytrace::allocTriList - Out of..."
    MOV dword ptr [0x02f0ca48],EDI      ; 00494675 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBP      ; 0049467b | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00494681
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00494686
    POP EDI                             ; 00494689
    POP EBP                             ; 0049468a
    POP ESI                             ; 0049468b
    POP EBX                             ; 0049468c
    RET                                 ; 0049468d

