; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bugs_cpp_FUN_00421b00(CBugs *this_ptr,int tri_count,SInputFace *triangles)
;
; Parameters:
; CBugs *          Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   tri_count
; SInputFace *     Stack[0xc]:4   triangles
;
; XREF[1]:
;   core_bugs.cpp_FUN_00423cd0 at 00423e05
;
; Called Functions:
;   core_bugs.cpp_CBugs_addSwarmGraphEdge_FUN_00421be0
;   crt_memory.c_memset_FUN_005a28f0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00421b00
        ;   Label: core_bugs.cpp_FUN_00421b00
    PUSH EDI                            ; 00421b01
    PUSH EBP                            ; 00421b02
    MOV EDI,dword ptr [ESP + 0x10]      ; 00421b03
    MOV EBP,dword ptr [ESP + 0x14]      ; 00421b07
    PUSH 0x84d0                         ; 00421b0b
    PUSH 0x0                            ; 00421b10
    LEA EAX,[EDI + 0x1385c]             ; 00421b12
    PUSH EAX                            ; 00421b18
    MOV dword ptr [EDI + 0x13858],0x0   ; 00421b19
    XOR ESI,ESI                         ; 00421b23
    CALL crt_memory.c_memset_FUN_005a28f0 ; 00421b25
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00421b2a
    TEST EBP,EBP                        ; 00421b2d
    JLE 0x00421bd3                      ; 00421b2f
        ;   XREF to: 00421bd3 (CONDITIONAL_JUMP)  ; LAB_00421bd3
    PUSH EBX                            ; 00421b35
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00421b36
    XOR EAX,EAX                         ; 00421b3a
        ;   Label: LAB_00421b3a
    PUSH ESI                            ; 00421b3c
    MOV AX,word ptr [EBX + 0x2]         ; 00421b3d
    PUSH EAX                            ; 00421b41
    XOR EAX,EAX                         ; 00421b42
    MOV AX,word ptr [EBX]               ; 00421b44
    PUSH EAX                            ; 00421b47
    PUSH EDI                            ; 00421b48
    CALL core_bugs.cpp_CBugs_addSwarmGraphEdge_FUN_00421be0 ; 00421b49
        ;   XREF to: 00421be0 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_CBugs_addSwarmGraphEdge_FUN_00421be0(CBugs * this_ptr, int vertex_index, int neighbor_index, int first_edge_data)
    ADD ESP,0x10                        ; 00421b4e
    XOR EAX,EAX                         ; 00421b51
    PUSH ESI                            ; 00421b53
    MOV AX,word ptr [EBX + 0x4]         ; 00421b54
    PUSH EAX                            ; 00421b58
    XOR EAX,EAX                         ; 00421b59
    MOV AX,word ptr [EBX + 0x2]         ; 00421b5b
    PUSH EAX                            ; 00421b5f
    PUSH EDI                            ; 00421b60
    CALL core_bugs.cpp_CBugs_addSwarmGraphEdge_FUN_00421be0 ; 00421b61
        ;   XREF to: 00421be0 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_CBugs_addSwarmGraphEdge_FUN_00421be0(CBugs * this_ptr, int vertex_index, int neighbor_index, int first_edge_data)
    ADD ESP,0x10                        ; 00421b66
    XOR EAX,EAX                         ; 00421b69
    PUSH ESI                            ; 00421b6b
    MOV AX,word ptr [EBX]               ; 00421b6c
    PUSH EAX                            ; 00421b6f
    XOR EAX,EAX                         ; 00421b70
    MOV AX,word ptr [EBX + 0x4]         ; 00421b72
    PUSH EAX                            ; 00421b76
    PUSH EDI                            ; 00421b77
    CALL core_bugs.cpp_CBugs_addSwarmGraphEdge_FUN_00421be0 ; 00421b78
        ;   XREF to: 00421be0 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_CBugs_addSwarmGraphEdge_FUN_00421be0(CBugs * this_ptr, int vertex_index, int neighbor_index, int first_edge_data)
    ADD ESP,0x10                        ; 00421b7d
    XOR EAX,EAX                         ; 00421b80
    PUSH ESI                            ; 00421b82
    MOV AX,word ptr [EBX]               ; 00421b83
    PUSH EAX                            ; 00421b86
    XOR EAX,EAX                         ; 00421b87
    MOV AX,word ptr [EBX + 0x2]         ; 00421b89
    PUSH EAX                            ; 00421b8d
    PUSH EDI                            ; 00421b8e
    CALL core_bugs.cpp_CBugs_addSwarmGraphEdge_FUN_00421be0 ; 00421b8f
        ;   XREF to: 00421be0 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_CBugs_addSwarmGraphEdge_FUN_00421be0(CBugs * this_ptr, int vertex_index, int neighbor_index, int first_edge_data)
    ADD ESP,0x10                        ; 00421b94
    XOR EAX,EAX                         ; 00421b97
    PUSH ESI                            ; 00421b99
    MOV AX,word ptr [EBX + 0x2]         ; 00421b9a
    PUSH EAX                            ; 00421b9e
    XOR EAX,EAX                         ; 00421b9f
    MOV AX,word ptr [EBX + 0x4]         ; 00421ba1
    PUSH EAX                            ; 00421ba5
    PUSH EDI                            ; 00421ba6
    CALL core_bugs.cpp_CBugs_addSwarmGraphEdge_FUN_00421be0 ; 00421ba7
        ;   XREF to: 00421be0 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_CBugs_addSwarmGraphEdge_FUN_00421be0(CBugs * this_ptr, int vertex_index, int neighbor_index, int first_edge_data)
    ADD ESP,0x10                        ; 00421bac
    XOR EAX,EAX                         ; 00421baf
    PUSH ESI                            ; 00421bb1
    MOV AX,word ptr [EBX + 0x4]         ; 00421bb2
    PUSH EAX                            ; 00421bb6
    XOR EAX,EAX                         ; 00421bb7
    MOV AX,word ptr [EBX]               ; 00421bb9
    PUSH EAX                            ; 00421bbc
    PUSH EDI                            ; 00421bbd
    ADD EBX,0x12                        ; 00421bbe
    INC ESI                             ; 00421bc1
    CALL core_bugs.cpp_CBugs_addSwarmGraphEdge_FUN_00421be0 ; 00421bc2
        ;   XREF to: 00421be0 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_CBugs_addSwarmGraphEdge_FUN_00421be0(CBugs * this_ptr, int vertex_index, int neighbor_index, int first_edge_data)
    ADD ESP,0x10                        ; 00421bc7
    CMP ESI,EBP                         ; 00421bca
    JL 0x00421b3a                       ; 00421bcc
        ;   XREF to: 00421b3a (CONDITIONAL_JUMP)  ; LAB_00421b3a
    POP EBX                             ; 00421bd2
    POP EBP                             ; 00421bd3
        ;   Label: LAB_00421bd3
    POP EDI                             ; 00421bd4
    POP ESI                             ; 00421bd5
    RET                                 ; 00421bd6

