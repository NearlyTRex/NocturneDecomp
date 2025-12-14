; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int shape_meshlod.cpp_CLodMesh_findOrCreateEdge_FUN_00515ec0(CLodMesh * this_ptr, int vertex_idx_1, int vertex_idx_2, int create_if_missing)
;
; Parameters:
; CLodMesh *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   vertex_idx_1
; int              Stack[0xc]:4   vertex_idx_2
; int              Stack[0x10]:4   create_if_missing
;
; XREF[3]:
;   shape_meshlod.cpp_CLodMesh_buildEdges_FUN_00515ba0 at 00515c2d
;   shape_meshlod.cpp_CLodMesh_collapseEdge_FUN_00517630 at 00517655
;   shape_meshlod.cpp_CLodMesh_validateEdgeCollapse_FUN_00518490 at 005184ac
;
; Referenced Globals:
;   TerminatedCString s_shape_meshlod_cpp_006374e0
;   TerminatedCString s_shape_meshlod_cpp_006374f5
;   TerminatedCString s_Out_of_memory_0063750a
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   shape_memdbg.cpp_debugRealloc_FUN_0050f540
;   shape_meshlod.cpp_CLodVert_addAdjacentEdge_FUN_00515d90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00515ec0
        ;   Label: shape_meshlod.cpp_CLodMesh_findOrCreateEdge_FUN_00515ec0
    PUSH ESI                            ; 00515ec1
    PUSH EDI                            ; 00515ec2
    PUSH EBP                            ; 00515ec3
    MOV EBX,dword ptr [ESP + 0x14]      ; 00515ec4
    MOV ESI,dword ptr [ESP + 0x18]      ; 00515ec8
    MOV EDI,dword ptr [ESP + 0x1c]      ; 00515ecc
    CMP ESI,EDI                         ; 00515ed0
    JLE 0x00515eda                      ; 00515ed2
        ;   XREF to: 00515eda (CONDITIONAL_JUMP)  ; LAB_00515eda
    MOV EAX,ESI                         ; 00515ed4
    MOV ESI,EDI                         ; 00515ed6
    MOV EDI,EAX                         ; 00515ed8
    MOV ECX,dword ptr [EBX + 0x44]      ; 00515eda
        ;   Label: LAB_00515eda
    XOR EDX,EDX                         ; 00515edd
    TEST ECX,ECX                        ; 00515edf
    JLE 0x00515ef9                      ; 00515ee1
        ;   XREF to: 00515ef9 (CONDITIONAL_JUMP)  ; LAB_00515ef9
    MOV EAX,dword ptr [EBX + 0x48]      ; 00515ee3
    CMP dword ptr [EAX + 0x14],0x0      ; 00515ee6
        ;   Label: LAB_00515ee6
    JZ 0x00515f0a                       ; 00515eea
        ;   XREF to: 00515f0a (CONDITIONAL_JUMP)  ; LAB_00515f0a
    INC EDX                             ; 00515eec
        ;   Label: LAB_00515eec
    MOV EBP,dword ptr [EBX + 0x44]      ; 00515eed
    ADD EAX,0xf0                        ; 00515ef0
    CMP EDX,EBP                         ; 00515ef5
    JL 0x00515ee6                       ; 00515ef7
        ;   XREF to: 00515ee6 (CONDITIONAL_JUMP)  ; LAB_00515ee6
    CMP dword ptr [ESP + 0x20],0x0      ; 00515ef9
        ;   Label: LAB_00515ef9
    JNZ 0x00515f1a                      ; 00515efe
        ;   XREF to: 00515f1a (CONDITIONAL_JUMP)  ; LAB_00515f1a
    MOV EAX,0xffffffff                  ; 00515f00
    POP EBP                             ; 00515f05
    POP EDI                             ; 00515f06
    POP ESI                             ; 00515f07
    POP EBX                             ; 00515f08
    RET                                 ; 00515f09
    CMP ESI,dword ptr [EAX]             ; 00515f0a
        ;   Label: LAB_00515f0a
    JNZ 0x00515eec                      ; 00515f0c
        ;   XREF to: 00515eec (CONDITIONAL_JUMP)  ; LAB_00515eec
    CMP EDI,dword ptr [EAX + 0x4]       ; 00515f0e
    JNZ 0x00515eec                      ; 00515f11
        ;   XREF to: 00515eec (CONDITIONAL_JUMP)  ; LAB_00515eec
    MOV EAX,EDX                         ; 00515f13
    POP EBP                             ; 00515f15
    POP EDI                             ; 00515f16
    POP ESI                             ; 00515f17
    POP EBX                             ; 00515f18
    RET                                 ; 00515f19
    MOV EAX,dword ptr [EBX + 0x44]      ; 00515f1a
        ;   Label: LAB_00515f1a
    INC EAX                             ; 00515f1d
    SHL EAX,0x4                         ; 00515f1e
    PUSH 0x325                          ; 00515f21
    MOV EDX,EAX                         ; 00515f26
    SHL EAX,0x4                         ; 00515f28
    PUSH 0x6374e0                       ; 00515f2b | = "..\\shape\\meshlod.cpp"
    SUB EAX,EDX                         ; 00515f30
    PUSH EAX                            ; 00515f32
    MOV EDX,dword ptr [EBX + 0x48]      ; 00515f33
    PUSH EDX                            ; 00515f36
    CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540 ; 00515f37
        ;   XREF to: 0050f540 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugRealloc_FUN_0050f540(void * ptr, int new_size, char * filename, int line_number)
    ADD ESP,0x10                        ; 00515f3c
    MOV dword ptr [EBX + 0x48],EAX      ; 00515f3f
    TEST EAX,EAX                        ; 00515f42
    JNZ 0x00515f68                      ; 00515f44
        ;   XREF to: 00515f68 (CONDITIONAL_JUMP)  ; LAB_00515f68
    MOV EBP,0x6374f5                    ; 00515f46 | = "..\\shape\\meshlod.cpp"
    MOV EAX,0x326                       ; 00515f4b
    PUSH 0x63750a                       ; 00515f50 | = "Out of memory"
    MOV dword ptr [0x02f0ca48],EBP      ; 00515f55 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 00515f5b | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00515f60
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00515f65
    MOV EAX,dword ptr [EBX + 0x44]      ; 00515f68
        ;   Label: LAB_00515f68
    SHL EAX,0x4                         ; 00515f6b
    MOV EDX,EAX                         ; 00515f6e
    SHL EAX,0x4                         ; 00515f70
    SUB EAX,EDX                         ; 00515f73
    MOV EDX,dword ptr [EBX + 0x48]      ; 00515f75
    MOV dword ptr [EDX + EAX*0x1],ESI   ; 00515f78
    IMUL ESI,ESI,0x4c4                  ; 00515f7b
    MOV EAX,dword ptr [EBX + 0x44]      ; 00515f81
    SHL EAX,0x4                         ; 00515f84
    MOV EDX,EAX                         ; 00515f87
    SHL EAX,0x4                         ; 00515f89
    SUB EAX,EDX                         ; 00515f8c
    MOV EDX,dword ptr [EBX + 0x48]      ; 00515f8e
    MOV dword ptr [EDX + EAX*0x1 + 0x4],EDI ; 00515f91
    IMUL EDI,EDI,0x4c4                  ; 00515f95
    MOV EAX,dword ptr [EBX + 0x44]      ; 00515f9b
    SHL EAX,0x4                         ; 00515f9e
    MOV EDX,EAX                         ; 00515fa1
    SHL EAX,0x4                         ; 00515fa3
    SUB EAX,EDX                         ; 00515fa6
    MOV EDX,EAX                         ; 00515fa8
    MOV EAX,dword ptr [EBX + 0x48]      ; 00515faa
    MOV dword ptr [EDX + EAX*0x1 + 0x14],0x0 ; 00515fad
    MOV EAX,dword ptr [EBX + 0x44]      ; 00515fb5
    SHL EAX,0x4                         ; 00515fb8
    MOV EDX,EAX                         ; 00515fbb
    SHL EAX,0x4                         ; 00515fbd
    SUB EAX,EDX                         ; 00515fc0
    MOV EDX,dword ptr [EBX + 0x48]      ; 00515fc2
    MOV dword ptr [EDX + EAX*0x1 + 0x24],0x0 ; 00515fc5
    MOV EDX,dword ptr [EBX + 0x44]      ; 00515fcd
    MOV EAX,dword ptr [EBX + 0x4]       ; 00515fd0
    PUSH EDX                            ; 00515fd3
    ADD EAX,ESI                         ; 00515fd4
    PUSH EAX                            ; 00515fd6
    CALL shape_meshlod.cpp_CLodVert_addAdjacentEdge_FUN_00515d90 ; 00515fd7
        ;   XREF to: 00515d90 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodVert_addAdjacentEdge_FUN_00515d90(CLodVert * this_ptr, int edge_index)
    ADD ESP,0x8                         ; 00515fdc
    MOV ECX,dword ptr [EBX + 0x44]      ; 00515fdf
    MOV EAX,dword ptr [EBX + 0x4]       ; 00515fe2
    PUSH ECX                            ; 00515fe5
    ADD EAX,EDI                         ; 00515fe6
    PUSH EAX                            ; 00515fe8
    CALL shape_meshlod.cpp_CLodVert_addAdjacentEdge_FUN_00515d90 ; 00515fe9
        ;   XREF to: 00515d90 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodVert_addAdjacentEdge_FUN_00515d90(CLodVert * this_ptr, int edge_index)
    MOV EAX,dword ptr [EBX + 0x44]      ; 00515fee
    LEA EDX,[EAX + 0x1]                 ; 00515ff1
    ADD ESP,0x8                         ; 00515ff4
    MOV dword ptr [EBX + 0x44],EDX      ; 00515ff7
    POP EBP                             ; 00515ffa
    POP EDI                             ; 00515ffb
    POP ESI                             ; 00515ffc
    POP EBX                             ; 00515ffd
    RET                                 ; 00515ffe

