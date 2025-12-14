; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dtrace.cpp_CDemonRaytrace_allocCubeList_FUN_00494270(CDemonRaytrace * this_ptr)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_dtrace.cpp_CDemonRaytrace_loadBinary_FUN_004947a0 at 00494927
;
; Referenced Globals:
;   TerminatedCString s_core_dtrace_cpp_0062258a
;   TerminatedCString s_core_dtrace_cpp_0062259d
;   TerminatedCString s_CDemonRaytrace_allocCube_006225b0
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   shape_memdbg.cpp_debugCalloc_FUN_0050f350
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00494270
        ;   Label: core_dtrace.cpp_CDemonRaytrace_allocCubeList_FUN_00494270
    PUSH EBP                            ; 00494271
    MOV EBX,dword ptr [ESP + 0xc]       ; 00494272
    MOV EAX,dword ptr [EBX + 0x40]      ; 00494276
    IMUL EAX,dword ptr [EBX + 0x44]     ; 00494279
    IMUL EAX,dword ptr [EBX + 0x48]     ; 0049427d
    PUSH 0x87                           ; 00494281
    PUSH 0x62258a                       ; 00494286 | = "..\\core\\dtrace.cpp"
    PUSH EAX                            ; 0049428b
    PUSH 0x58                           ; 0049428c
    CALL shape_memdbg.cpp_debugCalloc_FUN_0050f350 ; 0049428e
        ;   XREF to: 0050f350 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugCalloc_FUN_0050f350(SIZE_T count, SIZE_T size, char * filename, int line_number)
    ADD ESP,0x10                        ; 00494293
    MOV dword ptr [EBX + 0x4c],EAX      ; 00494296
    TEST EAX,EAX                        ; 00494299
    JZ 0x004942a0                       ; 0049429b
        ;   XREF to: 004942a0 (CONDITIONAL_JUMP)  ; LAB_004942a0
    POP EBP                             ; 0049429d
    POP EBX                             ; 0049429e
    RET                                 ; 0049429f
    PUSH EDI                            ; 004942a0
        ;   Label: LAB_004942a0
    MOV EDI,0x62259d                    ; 004942a1 | = "..\\core\\dtrace.cpp"
    MOV EBP,0x88                        ; 004942a6
    PUSH 0x6225b0                       ; 004942ab | = "CDemonRaytrace::allocCubeList - Out o..."
    MOV dword ptr [0x02f0ca48],EDI      ; 004942b0 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBP      ; 004942b6 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004942bc
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004942c1
    POP EDI                             ; 004942c4
    POP EBP                             ; 004942c5
    POP EBX                             ; 004942c6
    RET                                 ; 004942c7

