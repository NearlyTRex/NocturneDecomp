; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_dtrace_cpp_CDemonRaytrace_freeTriList_FUN_00494690(CDemonRaytrace *this_ptr)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   core_dtrace.cpp_CDemonRaytrace_consolidateTriList_FUN_00494450 at 00494470
;   core_dtrace.cpp_CDemonRaytrace_crunch_FUN_00495310 at 00495837
;   core_dtrace.cpp_CDemonRaytrace_dtor_FUN_00494240 at 0049424f
;   core_dtrace.cpp_CDemonRaytrace_loadBinary_FUN_004947a0 at 00494d8a
;
; Referenced Globals:
;   TerminatedCString s_core_dtrace_cpp_00622727
;   TerminatedCString s_core_dtrace_cpp_0062273a
;   char* g_CurrentDebugFilename = 0067d200
;   int g_CurrentDebugLine
;
; Called Functions:
;   crt_memory.c_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00494690
        ;   Label: core_dtrace.cpp_CDemonRaytrace_freeTriList_FUN_00494690
    PUSH ESI                            ; 00494691
    PUSH EDI                            ; 00494692
    PUSH EBP                            ; 00494693
    MOV EBX,dword ptr [ESP + 0x14]      ; 00494694
    MOV EDX,dword ptr [EBX + 0x8]       ; 00494698
    TEST EDX,EDX                        ; 0049469b
    JNZ 0x004946c0                      ; 0049469d
        ;   XREF to: 004946c0 (CONDITIONAL_JUMP)  ; LAB_004946c0
    MOV EDI,dword ptr [EBX + 0xc]       ; 0049469f
        ;   Label: LAB_0049469f
    TEST EDI,EDI                        ; 004946a2
    JNZ 0x004946e8                      ; 004946a4
        ;   XREF to: 004946e8 (CONDITIONAL_JUMP)  ; LAB_004946e8
    MOV dword ptr [EBX + 0xc],0x0       ; 004946a6
        ;   Label: LAB_004946a6
    MOV dword ptr [EBX + 0x4],0x0       ; 004946ad
    MOV dword ptr [EBX + 0x8],0x0       ; 004946b4
    POP EBP                             ; 004946bb
    POP EDI                             ; 004946bc
    POP ESI                             ; 004946bd
    POP EBX                             ; 004946be
    RET                                 ; 004946bf
    MOV ESI,0x104                       ; 004946c0
        ;   Label: LAB_004946c0
    MOV ECX,0x622727                    ; 004946c5 | = "..\\core\\dtrace.cpp"
    MOV EAX,EDX                         ; 004946ca
    MOV dword ptr [0x02f0d944],ESI      ; 004946cc | g_CurrentDebugLine
    MOV dword ptr [0x0067d20c],ECX      ; 004946d2 | g_CurrentDebugFilename
    JZ 0x0049469f                       ; 004946d8
        ;   XREF to: 0049469f (CONDITIONAL_JUMP)  ; LAB_0049469f
    LEA EAX,[EDX + -0x4]                ; 004946da
    PUSH EAX                            ; 004946dd
    CALL crt_memory.c_free_FUN_005fe659 ; 004946de
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 004946e3
    JMP 0x0049469f                      ; 004946e6
        ;   XREF to: 0049469f (UNCONDITIONAL_JUMP)  ; LAB_0049469f
    MOV EBP,0x62273a                    ; 004946e8 | = "..\\core\\dtrace.cpp"
        ;   Label: LAB_004946e8
    MOV EAX,0x107                       ; 004946ed
    PUSH EDI                            ; 004946f2
    MOV dword ptr [0x0067d20c],EBP      ; 004946f3 | g_CurrentDebugFilename
    MOV [0x02f0d944],EAX                ; 004946f9 | g_CurrentDebugLine
    CALL crt_memory.c_free_FUN_005fe659 ; 004946fe
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 00494703
    JMP 0x004946a6                      ; 00494706
        ;   XREF to: 004946a6 (UNCONDITIONAL_JUMP)  ; LAB_004946a6

