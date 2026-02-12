; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_meshlod_cpp_CLodMesh_createNextLOD_FUN_00516f50(CLodMesh *this_ptr)
;
; Parameters:
; CLodMesh *       Stack[0x8]:4   this_ptr
;
; XREF[2]:
;   shape_meshlod.cpp_CLodMesh_initializeLodGeneration_FUN_00516d50 at 00516d9d
;   shape_meshlod.cpp_CLodMesh_initializeLodGeneration_FUN_0051b8a0 at 0051b8ce
;
; Referenced Globals:
;   TerminatedCString s_shape_meshlod_cpp_00637675
;   TerminatedCString s_shape_meshlod_cpp_0063768a
;   TerminatedCString s_shape_meshlod_cpp_0063769f
;   TerminatedCString s_Out_of_memory_006376b4
;   char* g_CurrentDebugFilename = 0067d200
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   int g_CurrentDebugLine
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;   shape_meshlod.cpp_CLodMesh_copyFrom_FUN_0051a8c0
;   shape_meshlod.cpp_CLodMesh_ctor_FUN_00515840
;   shape_meshlod.cpp_CLodMesh_dtor_FUN_00515950
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00516f50
        ;   Label: shape_meshlod.cpp_CLodMesh_createNextLOD_FUN_00516f50
    PUSH EBP                            ; 00516f51
    MOV EBX,dword ptr [ESP + 0xc]       ; 00516f52
    MOV ECX,0x55f                       ; 00516f56
    MOV EDX,0x637675                    ; 00516f5b | = "..\\shape\\meshlod.cpp"
    MOV EAX,dword ptr [EBX + 0x34]      ; 00516f60
    MOV dword ptr [0x02f0d944],ECX      ; 00516f63 | g_CurrentDebugLine
    MOV dword ptr [0x0067d20c],EDX      ; 00516f69 | g_CurrentDebugFilename
    TEST EAX,EAX                        ; 00516f6f
    JNZ 0x00516fab                      ; 00516f71
        ;   XREF to: 00516fab (CONDITIONAL_JUMP)  ; LAB_00516fab
    PUSH 0x560                          ; 00516f73
        ;   Label: LAB_00516f73
    PUSH 0x63768a                       ; 00516f78 | = "..\\shape\\meshlod.cpp"
    PUSH 0x74                           ; 00516f7d
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 00516f7f
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 00516f84
    TEST EAX,EAX                        ; 00516f87
    JZ 0x00516f94                       ; 00516f89
        ;   XREF to: 00516f94 (CONDITIONAL_JUMP)  ; LAB_00516f94
    PUSH EAX                            ; 00516f8b
    CALL shape_meshlod.cpp_CLodMesh_ctor_FUN_00515840 ; 00516f8c
        ;   XREF to: 00515840 (UNCONDITIONAL_CALL)  ; CLodMesh * shape_meshlod.cpp_CLodMesh_ctor_FUN_00515840(CLodMesh * this_ptr)
    ADD ESP,0x4                         ; 00516f91
    MOV dword ptr [EBX + 0x34],EAX      ; 00516f94
        ;   Label: LAB_00516f94
    TEST EAX,EAX                        ; 00516f97
    JZ 0x00516fc1                       ; 00516f99
        ;   XREF to: 00516fc1 (CONDITIONAL_JUMP)  ; LAB_00516fc1
    PUSH EBX                            ; 00516f9b
    MOV EAX,dword ptr [EBX + 0x34]      ; 00516f9c
    PUSH EAX                            ; 00516f9f
    CALL shape_meshlod.cpp_CLodMesh_copyFrom_FUN_0051a8c0 ; 00516fa0
        ;   XREF to: 0051a8c0 (UNCONDITIONAL_CALL)  ; CLodMesh * shape_meshlod.cpp_CLodMesh_copyFrom_FUN_0051a8c0(CLodMesh * this_ptr, CLodMesh * source_mesh)
    ADD ESP,0x8                         ; 00516fa5
    POP EBP                             ; 00516fa8
    POP EBX                             ; 00516fa9
    RET                                 ; 00516faa
    PUSH 0x0                            ; 00516fab
        ;   Label: LAB_00516fab
    PUSH EAX                            ; 00516fad
    CALL shape_meshlod.cpp_CLodMesh_dtor_FUN_00515950 ; 00516fae
        ;   XREF to: 00515950 (UNCONDITIONAL_CALL)  ; CLodMesh * shape_meshlod.cpp_CLodMesh_dtor_FUN_00515950(CLodMesh * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00516fb3
    PUSH EAX                            ; 00516fb6
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 00516fb7
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 00516fbc
    JMP 0x00516f73                      ; 00516fbf
        ;   XREF to: 00516f73 (UNCONDITIONAL_JUMP)  ; LAB_00516f73
    PUSH EDI                            ; 00516fc1
        ;   Label: LAB_00516fc1
    MOV EDI,0x63769f                    ; 00516fc2 | = "..\\shape\\meshlod.cpp"
    MOV EBP,0x561                       ; 00516fc7
    PUSH 0x6376b4                       ; 00516fcc | = "Out of memory!"
    MOV dword ptr [0x02f0ca48],EDI      ; 00516fd1 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBP      ; 00516fd7 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00516fdd
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00516fe2
    POP EDI                             ; 00516fe5
    PUSH EBX                            ; 00516fe6
    MOV EAX,dword ptr [EBX + 0x34]      ; 00516fe7
    PUSH EAX                            ; 00516fea
    CALL shape_meshlod.cpp_CLodMesh_copyFrom_FUN_0051a8c0 ; 00516feb
        ;   XREF to: 0051a8c0 (UNCONDITIONAL_CALL)  ; CLodMesh * shape_meshlod.cpp_CLodMesh_copyFrom_FUN_0051a8c0(CLodMesh * this_ptr, CLodMesh * source_mesh)
    ADD ESP,0x8                         ; 00516ff0
    POP EBP                             ; 00516ff3
    POP EBX                             ; 00516ff4
    RET                                 ; 00516ff5

