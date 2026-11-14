; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bugs_cpp_CBugs_initializeSwarmGraph_FUN_0041f940(CBugs *this_ptr,int tri_count,SInputFace *triangles)
;
; Parameters:
; CBugs *          Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   tri_count
; SInputFace *     Stack[0xc]:4   triangles
;
; XREF[1]:
;   core_bugs.cpp_CBugs_setSwarmTarget_FUN_00421b10 at 00421c29
;
; Called Functions:
;   core_bugs.cpp_CBugs_addSwarmGraphEdge_FUN_0041fa20
;   crt_memory.c_memset_FUN_005b77c0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0041f940
        ;   Label: core_bugs.cpp_CBugs_initializeSwarmGraph_FUN_0041f940
    PUSH EDI                            ; 0041f941
    PUSH EBP                            ; 0041f942
    MOV EDI,dword ptr [ESP + 0x10]      ; 0041f943
    MOV EBP,dword ptr [ESP + 0x14]      ; 0041f947
    PUSH 0x6d60                         ; 0041f94b
    PUSH 0x0                            ; 0041f950
    LEA EAX,[EDI + 0x17774]             ; 0041f952
    PUSH EAX                            ; 0041f958
    MOV dword ptr [EDI + 0x17770],0x0   ; 0041f959
    XOR ESI,ESI                         ; 0041f963
    CALL crt_memory.c_memset_FUN_005b77c0 ; 0041f965
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0041f96a
    TEST EBP,EBP                        ; 0041f96d
    JLE 0x0041fa13                      ; 0041f96f
        ;   XREF to: 0041fa13 (CONDITIONAL_JUMP)  ; LAB_0041fa13
    PUSH EBX                            ; 0041f975
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0041f976
    XOR EAX,EAX                         ; 0041f97a
        ;   Label: LAB_0041f97a
    PUSH ESI                            ; 0041f97c
    MOV AX,word ptr [EBX + 0x2]         ; 0041f97d
    PUSH EAX                            ; 0041f981
    XOR EAX,EAX                         ; 0041f982
    MOV AX,word ptr [EBX]               ; 0041f984
    PUSH EAX                            ; 0041f987
    PUSH EDI                            ; 0041f988
    CALL core_bugs.cpp_CBugs_addSwarmGraphEdge_FUN_0041fa20 ; 0041f989
        ;   XREF to: 0041fa20 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_CBugs_addSwarmGraphEdge_FUN_0041fa20(CBugs * this_ptr, int vertex_index, int neighbor_index, int first_edge_data)
    ADD ESP,0x10                        ; 0041f98e
    XOR EAX,EAX                         ; 0041f991
    PUSH ESI                            ; 0041f993
    MOV AX,word ptr [EBX + 0x4]         ; 0041f994
    PUSH EAX                            ; 0041f998
    XOR EAX,EAX                         ; 0041f999
    MOV AX,word ptr [EBX + 0x2]         ; 0041f99b
    PUSH EAX                            ; 0041f99f
    PUSH EDI                            ; 0041f9a0
    CALL core_bugs.cpp_CBugs_addSwarmGraphEdge_FUN_0041fa20 ; 0041f9a1
        ;   XREF to: 0041fa20 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_CBugs_addSwarmGraphEdge_FUN_0041fa20(CBugs * this_ptr, int vertex_index, int neighbor_index, int first_edge_data)
    ADD ESP,0x10                        ; 0041f9a6
    XOR EAX,EAX                         ; 0041f9a9
    PUSH ESI                            ; 0041f9ab
    MOV AX,word ptr [EBX]               ; 0041f9ac
    PUSH EAX                            ; 0041f9af
    XOR EAX,EAX                         ; 0041f9b0
    MOV AX,word ptr [EBX + 0x4]         ; 0041f9b2
    PUSH EAX                            ; 0041f9b6
    PUSH EDI                            ; 0041f9b7
    CALL core_bugs.cpp_CBugs_addSwarmGraphEdge_FUN_0041fa20 ; 0041f9b8
        ;   XREF to: 0041fa20 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_CBugs_addSwarmGraphEdge_FUN_0041fa20(CBugs * this_ptr, int vertex_index, int neighbor_index, int first_edge_data)
    ADD ESP,0x10                        ; 0041f9bd
    XOR EAX,EAX                         ; 0041f9c0
    PUSH ESI                            ; 0041f9c2
    MOV AX,word ptr [EBX]               ; 0041f9c3
    PUSH EAX                            ; 0041f9c6
    XOR EAX,EAX                         ; 0041f9c7
    MOV AX,word ptr [EBX + 0x2]         ; 0041f9c9
    PUSH EAX                            ; 0041f9cd
    PUSH EDI                            ; 0041f9ce
    CALL core_bugs.cpp_CBugs_addSwarmGraphEdge_FUN_0041fa20 ; 0041f9cf
        ;   XREF to: 0041fa20 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_CBugs_addSwarmGraphEdge_FUN_0041fa20(CBugs * this_ptr, int vertex_index, int neighbor_index, int first_edge_data)
    ADD ESP,0x10                        ; 0041f9d4
    XOR EAX,EAX                         ; 0041f9d7
    PUSH ESI                            ; 0041f9d9
    MOV AX,word ptr [EBX + 0x2]         ; 0041f9da
    PUSH EAX                            ; 0041f9de
    XOR EAX,EAX                         ; 0041f9df
    MOV AX,word ptr [EBX + 0x4]         ; 0041f9e1
    PUSH EAX                            ; 0041f9e5
    PUSH EDI                            ; 0041f9e6
    CALL core_bugs.cpp_CBugs_addSwarmGraphEdge_FUN_0041fa20 ; 0041f9e7
        ;   XREF to: 0041fa20 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_CBugs_addSwarmGraphEdge_FUN_0041fa20(CBugs * this_ptr, int vertex_index, int neighbor_index, int first_edge_data)
    ADD ESP,0x10                        ; 0041f9ec
    XOR EAX,EAX                         ; 0041f9ef
    PUSH ESI                            ; 0041f9f1
    MOV AX,word ptr [EBX + 0x4]         ; 0041f9f2
    PUSH EAX                            ; 0041f9f6
    XOR EAX,EAX                         ; 0041f9f7
    MOV AX,word ptr [EBX]               ; 0041f9f9
    PUSH EAX                            ; 0041f9fc
    PUSH EDI                            ; 0041f9fd
    ADD EBX,0x12                        ; 0041f9fe
    INC ESI                             ; 0041fa01
    CALL core_bugs.cpp_CBugs_addSwarmGraphEdge_FUN_0041fa20 ; 0041fa02
        ;   XREF to: 0041fa20 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_CBugs_addSwarmGraphEdge_FUN_0041fa20(CBugs * this_ptr, int vertex_index, int neighbor_index, int first_edge_data)
    ADD ESP,0x10                        ; 0041fa07
    CMP ESI,EBP                         ; 0041fa0a
    JL 0x0041f97a                       ; 0041fa0c
        ;   XREF to: 0041f97a (CONDITIONAL_JUMP)  ; LAB_0041f97a
    POP EBX                             ; 0041fa12
    POP EBP                             ; 0041fa13
        ;   Label: LAB_0041fa13
    POP EDI                             ; 0041fa14
    POP ESI                             ; 0041fa15
    RET                                 ; 0041fa16

