; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtrace_cpp_CDemonRaytrace_allocNewCubeList_FUN_00494380(CDemonRaytrace *this_ptr)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_dtrace.cpp_CDemonRaytrace_crunch_FUN_00495310 at 004953e2
;   core_dtrace.cpp_CDemonRaytrace_loadBinary_FUN_004947a0 at 004948c5
;
; Referenced Globals:
;   TerminatedCString s_core_dtrace_cpp_00622605
;   TerminatedCString s_core_dtrace_cpp_00622618
;   TerminatedCString s_CDemonRaytrace_allocNewC_0062262b
;   WatcomTypeInfo g_CDemonCubeTypeInfo
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_memory.c___vec_new_FUN_00601272
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00494380
        ;   Label: core_dtrace.cpp_CDemonRaytrace_allocNewCubeList_FUN_00494380
    MOV EBX,dword ptr [ESP + 0x8]       ; 00494381
    MOV EAX,dword ptr [EBX + 0x40]      ; 00494385
    IMUL EAX,dword ptr [EBX + 0x44]     ; 00494388
    MOV EDX,dword ptr [EBX + 0x48]      ; 0049438c
    IMUL EDX,EAX                        ; 0049438f
    PUSH 0x65d290                       ; 00494392 | g_CDemonCubeTypeInfo
    PUSH EDX                            ; 00494397
    LEA EAX,[EDX*0x4 + 0x0]             ; 00494398
    SUB EAX,EDX                         ; 0049439f
    SHL EAX,0x2                         ; 004943a1
    ADD EAX,EDX                         ; 004943a4
    PUSH 0xad                           ; 004943a6
    SHL EAX,0x2                         ; 004943ab
    PUSH 0x622605                       ; 004943ae | = "..\\core\\dtrace.cpp"
    ADD EAX,0x4                         ; 004943b3
    PUSH EAX                            ; 004943b6
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0 ; 004943b7
        ;   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1f0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 004943bc
    PUSH EAX                            ; 004943bf
    CALL crt_memory.c___vec_new_FUN_00601272 ; 004943c0
        ;   XREF to: 00601272 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_new_FUN_00601272(void * array_memory, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004943c5
    TEST EAX,EAX                        ; 004943c8
    MOV dword ptr [EBX + 0x50],EAX      ; 004943ca
    JZ 0x004943d1                       ; 004943cd
        ;   XREF to: 004943d1 (CONDITIONAL_JUMP)  ; LAB_004943d1
    POP EBX                             ; 004943cf
    RET                                 ; 004943d0
    PUSH ESI                            ; 004943d1
        ;   Label: LAB_004943d1
    MOV EBX,0x622618                    ; 004943d2 | = "..\\core\\dtrace.cpp"
    MOV ESI,0xae                        ; 004943d7
    PUSH 0x62262b                       ; 004943dc | = "CDemonRaytrace::allocNewCubeList - Ou..."
    MOV dword ptr [0x02f0ca48],EBX      ; 004943e1 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 004943e7 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004943ed
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004943f2
    POP ESI                             ; 004943f5
    POP EBX                             ; 004943f6
    RET                                 ; 004943f7

