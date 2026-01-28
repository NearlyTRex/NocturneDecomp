; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_meshlod_cpp_CLodMesh_recordEdgeCollapse_FUN_0051d4a0(CLodMesh *this_ptr,CLodEdge *edge_data)
;
; Parameters:
; CLodMesh *       Stack[0x4]:4   this_ptr
; CLodEdge *       Stack[0x8]:4   edge_data
;
; XREF[1]:
;   shape_meshlod.cpp_CLodMesh_generateLOD_FUN_00516ba0 at 00516ce4
;
; Referenced Globals:
;   TerminatedCString s_shape_meshlod_cpp_00638207
;   TerminatedCString s_shape_meshlod_cpp_0063821c
;   TerminatedCString s_out_of_memory_00638231
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   shape_memdbg.cpp_debugRealloc_FUN_0050f540
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051d4a0
        ;   Label: shape_meshlod.cpp_CLodMesh_recordEdgeCollapse_FUN_0051d4a0
    PUSH ESI                            ; 0051d4a1
    PUSH EDI                            ; 0051d4a2
    PUSH EBP                            ; 0051d4a3
    MOV EBX,dword ptr [ESP + 0x14]      ; 0051d4a4
    MOV EDX,dword ptr [EBX + 0x4c]      ; 0051d4a8
    INC EDX                             ; 0051d4ab
    MOV dword ptr [EBX + 0x4c],EDX      ; 0051d4ac
    SHL EDX,0x4                         ; 0051d4af
    MOV EAX,EDX                         ; 0051d4b2
    PUSH 0x14a4                         ; 0051d4b4
    SHL EAX,0x4                         ; 0051d4b9
    PUSH 0x638207                       ; 0051d4bc | = "..\\shape\\meshlod.cpp"
    SUB EAX,EDX                         ; 0051d4c1
    PUSH EAX                            ; 0051d4c3
    MOV ECX,dword ptr [EBX + 0x50]      ; 0051d4c4
    PUSH ECX                            ; 0051d4c7
    CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540 ; 0051d4c8
        ;   XREF to: 0050f540 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugRealloc_FUN_0050f540(void * ptr, int new_size, char * filename, int line_number)
    ADD ESP,0x10                        ; 0051d4cd
    MOV dword ptr [EBX + 0x50],EAX      ; 0051d4d0
    TEST EAX,EAX                        ; 0051d4d3
    JZ 0x0051d4fa                       ; 0051d4d5
        ;   XREF to: 0051d4fa (CONDITIONAL_JUMP)  ; LAB_0051d4fa
    MOV EAX,dword ptr [EBX + 0x4c]      ; 0051d4d7
        ;   Label: LAB_0051d4d7
    DEC EAX                             ; 0051d4da
    SHL EAX,0x4                         ; 0051d4db
    MOV ECX,0x3c                        ; 0051d4de
    MOV EDX,EAX                         ; 0051d4e3
    SHL EAX,0x4                         ; 0051d4e5
    MOV EDI,dword ptr [EBX + 0x50]      ; 0051d4e8
    SUB EAX,EDX                         ; 0051d4eb
    MOV ESI,dword ptr [ESP + 0x18]      ; 0051d4ed
    ADD EDI,EAX                         ; 0051d4f1
    MOVSD.REP ES:EDI,ESI                ; 0051d4f3
    POP EBP                             ; 0051d4f5
    POP EDI                             ; 0051d4f6
    POP ESI                             ; 0051d4f7
    POP EBX                             ; 0051d4f8
    RET                                 ; 0051d4f9
    MOV EDI,0x63821c                    ; 0051d4fa | = "..\\shape\\meshlod.cpp"
        ;   Label: LAB_0051d4fa
    MOV EBP,0x14a5                      ; 0051d4ff
    PUSH 0x638231                       ; 0051d504 | = "out of memory"
    MOV dword ptr [0x02f0ca48],EDI      ; 0051d509 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBP      ; 0051d50f | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0051d515
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0051d51a
    JMP 0x0051d4d7                      ; 0051d51d
        ;   XREF to: 0051d4d7 (UNCONDITIONAL_JUMP)  ; LAB_0051d4d7

