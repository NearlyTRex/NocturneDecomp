; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bugs_cpp_CBugs_initializeSwarmGraph_FUN_00425970(CBugs *this_ptr,int tri_count,SInputFace *triangles)
;
; Parameters:
; CBugs *          Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   tri_count
; SInputFace *     Stack[0xc]:4   triangles
;
; XREF[1]:
;   core_bugs.cpp_CBugs_setSwarmTarget_FUN_00427b40 at 00427c59
;
; Called Functions:
;   core_bugs.cpp_CBugs_addSwarmGraphEdge_FUN_00425a50
;   crt_memory.c_memset_FUN_005bfb70
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00425970
        ;   Label: core_bugs.cpp_CBugs_initializeSwarmGraph_FUN_00425970
    PUSH EDI                            ; 00425971
    PUSH EBP                            ; 00425972
    MOV EDI,dword ptr [ESP + 0x10]      ; 00425973
    MOV EBP,dword ptr [ESP + 0x14]      ; 00425977
    PUSH 0x6d60                         ; 0042597b
    PUSH 0x0                            ; 00425980
    LEA EAX,[EDI + 0x12ee4]             ; 00425982
    PUSH EAX                            ; 00425988
    MOV dword ptr [EDI + 0x12ee0],0x0   ; 00425989
    XOR ESI,ESI                         ; 00425993
    CALL crt_memory.c_memset_FUN_005bfb70 ; 00425995
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0042599a
    TEST EBP,EBP                        ; 0042599d
    JLE 0x00425a43                      ; 0042599f
        ;   XREF to: 00425a43 (CONDITIONAL_JUMP)  ; LAB_00425a43
    PUSH EBX                            ; 004259a5
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004259a6
    XOR EAX,EAX                         ; 004259aa
        ;   Label: LAB_004259aa
    PUSH ESI                            ; 004259ac
    MOV AX,word ptr [EBX + 0x2]         ; 004259ad
    PUSH EAX                            ; 004259b1
    XOR EAX,EAX                         ; 004259b2
    MOV AX,word ptr [EBX]               ; 004259b4
    PUSH EAX                            ; 004259b7
    PUSH EDI                            ; 004259b8
    CALL core_bugs.cpp_CBugs_addSwarmGraphEdge_FUN_00425a50 ; 004259b9
        ;   XREF to: 00425a50 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_CBugs_addSwarmGraphEdge_FUN_00425a50(CBugs * this_ptr, int vertex_index, int neighbor_index, int first_edge_data)
    ADD ESP,0x10                        ; 004259be
    XOR EAX,EAX                         ; 004259c1
    PUSH ESI                            ; 004259c3
    MOV AX,word ptr [EBX + 0x4]         ; 004259c4
    PUSH EAX                            ; 004259c8
    XOR EAX,EAX                         ; 004259c9
    MOV AX,word ptr [EBX + 0x2]         ; 004259cb
    PUSH EAX                            ; 004259cf
    PUSH EDI                            ; 004259d0
    CALL core_bugs.cpp_CBugs_addSwarmGraphEdge_FUN_00425a50 ; 004259d1
        ;   XREF to: 00425a50 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_CBugs_addSwarmGraphEdge_FUN_00425a50(CBugs * this_ptr, int vertex_index, int neighbor_index, int first_edge_data)
    ADD ESP,0x10                        ; 004259d6
    XOR EAX,EAX                         ; 004259d9
    PUSH ESI                            ; 004259db
    MOV AX,word ptr [EBX]               ; 004259dc
    PUSH EAX                            ; 004259df
    XOR EAX,EAX                         ; 004259e0
    MOV AX,word ptr [EBX + 0x4]         ; 004259e2
    PUSH EAX                            ; 004259e6
    PUSH EDI                            ; 004259e7
    CALL core_bugs.cpp_CBugs_addSwarmGraphEdge_FUN_00425a50 ; 004259e8
        ;   XREF to: 00425a50 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_CBugs_addSwarmGraphEdge_FUN_00425a50(CBugs * this_ptr, int vertex_index, int neighbor_index, int first_edge_data)
    ADD ESP,0x10                        ; 004259ed
    XOR EAX,EAX                         ; 004259f0
    PUSH ESI                            ; 004259f2
    MOV AX,word ptr [EBX]               ; 004259f3
    PUSH EAX                            ; 004259f6
    XOR EAX,EAX                         ; 004259f7
    MOV AX,word ptr [EBX + 0x2]         ; 004259f9
    PUSH EAX                            ; 004259fd
    PUSH EDI                            ; 004259fe
    CALL core_bugs.cpp_CBugs_addSwarmGraphEdge_FUN_00425a50 ; 004259ff
        ;   XREF to: 00425a50 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_CBugs_addSwarmGraphEdge_FUN_00425a50(CBugs * this_ptr, int vertex_index, int neighbor_index, int first_edge_data)
    ADD ESP,0x10                        ; 00425a04
    XOR EAX,EAX                         ; 00425a07
    PUSH ESI                            ; 00425a09
    MOV AX,word ptr [EBX + 0x2]         ; 00425a0a
    PUSH EAX                            ; 00425a0e
    XOR EAX,EAX                         ; 00425a0f
    MOV AX,word ptr [EBX + 0x4]         ; 00425a11
    PUSH EAX                            ; 00425a15
    PUSH EDI                            ; 00425a16
    CALL core_bugs.cpp_CBugs_addSwarmGraphEdge_FUN_00425a50 ; 00425a17
        ;   XREF to: 00425a50 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_CBugs_addSwarmGraphEdge_FUN_00425a50(CBugs * this_ptr, int vertex_index, int neighbor_index, int first_edge_data)
    ADD ESP,0x10                        ; 00425a1c
    XOR EAX,EAX                         ; 00425a1f
    PUSH ESI                            ; 00425a21
    MOV AX,word ptr [EBX + 0x4]         ; 00425a22
    PUSH EAX                            ; 00425a26
    XOR EAX,EAX                         ; 00425a27
    MOV AX,word ptr [EBX]               ; 00425a29
    PUSH EAX                            ; 00425a2c
    PUSH EDI                            ; 00425a2d
    ADD EBX,0x12                        ; 00425a2e
    INC ESI                             ; 00425a31
    CALL core_bugs.cpp_CBugs_addSwarmGraphEdge_FUN_00425a50 ; 00425a32
        ;   XREF to: 00425a50 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_CBugs_addSwarmGraphEdge_FUN_00425a50(CBugs * this_ptr, int vertex_index, int neighbor_index, int first_edge_data)
    ADD ESP,0x10                        ; 00425a37
    CMP ESI,EBP                         ; 00425a3a
    JL 0x004259aa                       ; 00425a3c
        ;   XREF to: 004259aa (CONDITIONAL_JUMP)  ; LAB_004259aa
    POP EBX                             ; 00425a42
    POP EBP                             ; 00425a43
        ;   Label: LAB_00425a43
    POP EDI                             ; 00425a44
    POP ESI                             ; 00425a45
    RET                                 ; 00425a46

