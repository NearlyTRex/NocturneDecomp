; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dcube.cpp_CDemonCube_freeMemory_FUN_004569b0(CDemonCube * this_ptr)
;
; Parameters:
; CDemonCube *     Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_dcube.cpp_CDemonCube_dtor_FUN_00456790 at 00456796
;
; Referenced Globals:
;   TerminatedCString s_core_dcube_cpp_0061a75d
;   TerminatedCString s_core_dcube_cpp_0061a76f
;   TerminatedCString s_core_dcube_cpp_0061a781
;   TerminatedCString s_core_dcube_cpp_0061a793
;   TerminatedCString s_core_dcube_cpp_0061a7a5
;   char* g_CurrentDebugFilename = 0067d200
;   int g_CurrentDebugLine
;
; Called Functions:
;   crt_memory.c_free_FUN_005fe659
;   shape_memdbg.cpp_debugFree_FUN_0050f460
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004569b0
        ;   Label: core_dcube.cpp_CDemonCube_freeMemory_FUN_004569b0
    PUSH EDI                            ; 004569b1
    PUSH EBP                            ; 004569b2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004569b3
    MOV EDX,dword ptr [EBX + 0x24]      ; 004569b7
    TEST EDX,EDX                        ; 004569ba
    JNZ 0x00456a39                      ; 004569bc | LAB_00456a39
        ;   XREF to: 00456a39 (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [EBX + 0x2c]      ; 004569c2
        ;   Label: LAB_004569c2
    TEST EDI,EDI                        ; 004569c5
    JZ 0x004569ee                       ; 004569c7 | LAB_004569ee
        ;   XREF to: 004569ee (CONDITIONAL_JUMP)
    MOV EBP,0x61a76f                    ; 004569c9 | = "..\\core\\dcube.cpp" | s_core_dcube_cpp_0061a76f = ..\core\dcube.cpp
    MOV EAX,0x618                       ; 004569ce
    PUSH EDI                            ; 004569d3
    MOV dword ptr [0x0067d20c],EBP      ; 004569d4 | char * g_CurrentDebugFilename
    MOV [0x02f0d944],EAX                ; 004569da | int g_CurrentDebugLine
    CALL crt_memory.c_free_FUN_005fe659 ; 004569df | void crt_memory.c_free_FUN_005fe659(void * ptr)
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004569e4
    MOV dword ptr [EBX + 0x2c],0x0      ; 004569e7
    MOV ECX,dword ptr [EBX + 0x30]      ; 004569ee
        ;   Label: LAB_004569ee
    TEST ECX,ECX                        ; 004569f1
    JZ 0x00456a0f                       ; 004569f3 | LAB_00456a0f
        ;   XREF to: 00456a0f (CONDITIONAL_JUMP)
    PUSH 0x61c                          ; 004569f5
    PUSH 0x61a781                       ; 004569fa | = "..\\core\\dcube.cpp" | s_core_dcube_cpp_0061a781 = ..\core\dcube.cpp
    PUSH ECX                            ; 004569ff
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 00456a00 | void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00456a05
    MOV dword ptr [EBX + 0x30],0x0      ; 00456a08
    MOV EDI,dword ptr [EBX]             ; 00456a0f
        ;   Label: LAB_00456a0f
    TEST EDI,EDI                        ; 00456a11
    JZ 0x00456a2e                       ; 00456a13 | LAB_00456a2e
        ;   XREF to: 00456a2e (CONDITIONAL_JUMP)
    PUSH 0x620                          ; 00456a15
    PUSH 0x61a793                       ; 00456a1a | = "..\\core\\dcube.cpp" | s_core_dcube_cpp_0061a793 = ..\core\dcube.cpp
    PUSH EDI                            ; 00456a1f
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 00456a20 | void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00456a25
    MOV dword ptr [EBX],0x0             ; 00456a28
    MOV EAX,dword ptr [EBX + 0x4]       ; 00456a2e
        ;   Label: LAB_00456a2e
    TEST EAX,EAX                        ; 00456a31
    JNZ 0x00456a6d                      ; 00456a33 | LAB_00456a6d
        ;   XREF to: 00456a6d (CONDITIONAL_JUMP)
    POP EBP                             ; 00456a35
    POP EDI                             ; 00456a36
    POP EBX                             ; 00456a37
    RET                                 ; 00456a38
    PUSH ESI                            ; 00456a39
        ;   Label: LAB_00456a39
    MOV ESI,0x614                       ; 00456a3a
    MOV ECX,0x61a75d                    ; 00456a3f | = "..\\core\\dcube.cpp" | s_core_dcube_cpp_0061a75d = ..\core\dcube.cpp
    MOV EAX,EDX                         ; 00456a44
    MOV dword ptr [0x02f0d944],ESI      ; 00456a46 | int g_CurrentDebugLine
    MOV dword ptr [0x0067d20c],ECX      ; 00456a4c | char * g_CurrentDebugFilename
    JZ 0x00456a60                       ; 00456a52 | LAB_00456a60
        ;   XREF to: 00456a60 (CONDITIONAL_JUMP)
    LEA EAX,[EDX + -0x4]                ; 00456a54
    PUSH EAX                            ; 00456a57
    CALL crt_memory.c_free_FUN_005fe659 ; 00456a58 | void crt_memory.c_free_FUN_005fe659(void * ptr)
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00456a5d
    MOV dword ptr [EBX + 0x24],0x0      ; 00456a60
        ;   Label: LAB_00456a60
    POP ESI                             ; 00456a67
    JMP 0x004569c2                      ; 00456a68 | LAB_004569c2
        ;   XREF to: 004569c2 (UNCONDITIONAL_JUMP)
    PUSH 0x624                          ; 00456a6d
        ;   Label: LAB_00456a6d
    PUSH 0x61a7a5                       ; 00456a72 | = "..\\core\\dcube.cpp" | s_core_dcube_cpp_0061a7a5 = ..\core\dcube.cpp
    PUSH EAX                            ; 00456a77
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 00456a78 | void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00456a7d
    MOV dword ptr [EBX + 0x4],0x0       ; 00456a80
    POP EBP                             ; 00456a87
    POP EDI                             ; 00456a88
    POP EBX                             ; 00456a89
    RET                                 ; 00456a8a

