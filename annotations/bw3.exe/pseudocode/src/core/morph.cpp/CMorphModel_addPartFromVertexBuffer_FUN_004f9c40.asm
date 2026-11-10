; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_CMorphModel_addPartFromVertexBuffer_FUN_004f9c40(CMorphModel *this_ptr,int vertex_count,CVector3i *skinned_vertices,int tri_count,SInputFace *tri_data,STextureSet *texture_sets,int *index_data)
;
; Parameters:
; CMorphModel *    Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   vertex_count
; CVector3i *      Stack[0xc]:4   skinned_vertices
; int              Stack[0x10]:4   tri_count
; SInputFace *     Stack[0x14]:4   tri_data
; STextureSet *    Stack[0x18]:4   texture_sets
; int *            Stack[0x1c]:4   index_data
;
; XREF[1]:
;   core_morph.cpp_CMorphModel_addPartFromDeformableModel_FUN_004f9d90 at 004f9ddf
;
; Referenced Globals:
;   TerminatedCString s_core_morph_cpp_005c946a
;   TerminatedCString s_CMorphModel_addPart_too_005c947c
;   TerminatedCString s_core_morph_cpp_005c94a3
;   TerminatedCString s_CMorphModel_setup_out_of_005c94b5
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   core_morph.cpp_CMorphModel_animateFromVertexBuffer_FUN_004f9e40
;   core_morph.cpp_CMorphModel_setFaceListFromTriangles_FUN_004fa1c0
;   crt_memory.c_realloc_FUN_005a3e50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f9c40
        ;   Label: core_morph.cpp_CMorphModel_addPartFromVertexBuffer_FUN_004f9c40
    PUSH ESI                            ; 004f9c41
    PUSH EDI                            ; 004f9c42
    PUSH EBP                            ; 004f9c43
    MOV EBX,dword ptr [ESP + 0x14]      ; 004f9c44
    CMP dword ptr [EBX],0x5             ; 004f9c48
    JGE 0x004f9d30                      ; 004f9c4b
        ;   XREF to: 004f9d30 (CONDITIONAL_JUMP)  ; LAB_004f9d30
    MOV EAX,dword ptr [EBX]             ; 004f9c51
        ;   Label: LAB_004f9c51
    SHL EAX,0x4                         ; 004f9c53
    LEA EDX,[EBX + EAX*0x1]             ; 004f9c56
    MOV EAX,dword ptr [EBX + 0x54]      ; 004f9c59
    MOV dword ptr [EDX + 0xc],EAX       ; 004f9c5c
    MOV EAX,dword ptr [EBX]             ; 004f9c5f
    SHL EAX,0x4                         ; 004f9c61
    MOV EDX,dword ptr [ESP + 0x18]      ; 004f9c64
    MOV dword ptr [EBX + EAX*0x1 + 0x4],EDX ; 004f9c68
    MOV EAX,dword ptr [EBX]             ; 004f9c6c
    SHL EAX,0x4                         ; 004f9c6e
    LEA EDX,[EBX + EAX*0x1]             ; 004f9c71
    MOV EAX,dword ptr [EBX + 0x5c]      ; 004f9c74
    MOV dword ptr [EDX + 0x10],EAX      ; 004f9c77
    MOV EAX,dword ptr [EBX]             ; 004f9c7a
    SHL EAX,0x4                         ; 004f9c7c
    MOV EDX,dword ptr [ESP + 0x20]      ; 004f9c7f
    MOV dword ptr [EBX + EAX*0x1 + 0x8],EDX ; 004f9c83
    MOV EAX,dword ptr [EBX]             ; 004f9c87
    SHL EAX,0x4                         ; 004f9c89
    MOV EDI,dword ptr [EBX + 0x54]      ; 004f9c8c
    ADD EDI,dword ptr [EBX + EAX*0x1 + 0x4] ; 004f9c8f
    MOV EAX,dword ptr [EBX]             ; 004f9c93
    MOV dword ptr [EBX + 0x54],EDI      ; 004f9c95
    SHL EAX,0x4                         ; 004f9c98
    MOV EBP,dword ptr [EBX + 0x5c]      ; 004f9c9b
    ADD EBP,dword ptr [EBX + EAX*0x1 + 0x8] ; 004f9c9e
    MOV EAX,dword ptr [EBX + 0x54]      ; 004f9ca2
    SHL EAX,0x4                         ; 004f9ca5
    PUSH EAX                            ; 004f9ca8
    MOV EAX,dword ptr [EBX + 0x58]      ; 004f9ca9
    PUSH EAX                            ; 004f9cac
    MOV dword ptr [EBX + 0x5c],EBP      ; 004f9cad
    CALL crt_memory.c_realloc_FUN_005a3e50 ; 004f9cb0
        ;   XREF to: 005a3e50 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_005a3e50(void * ptr, ulong new_size)
    MOV dword ptr [EBX + 0x58],EAX      ; 004f9cb5
    MOV EAX,dword ptr [EBX + 0x5c]      ; 004f9cb8
    SHL EAX,0x2                         ; 004f9cbb
    MOV EDX,EAX                         ; 004f9cbe
    SHL EAX,0x4                         ; 004f9cc0
    ADD ESP,0x8                         ; 004f9cc3
    SUB EAX,EDX                         ; 004f9cc6
    PUSH EAX                            ; 004f9cc8
    MOV EDX,dword ptr [EBX + 0x60]      ; 004f9cc9
    PUSH EDX                            ; 004f9ccc
    CALL crt_memory.c_realloc_FUN_005a3e50 ; 004f9ccd
        ;   XREF to: 005a3e50 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_005a3e50(void * ptr, ulong new_size)
    ADD ESP,0x8                         ; 004f9cd2
    MOV ECX,dword ptr [EBX]             ; 004f9cd5
    MOV dword ptr [EBX + 0x60],EAX      ; 004f9cd7
    INC ECX                             ; 004f9cda
    MOV ESI,dword ptr [EBX + 0x58]      ; 004f9cdb
    MOV dword ptr [EBX],ECX             ; 004f9cde
    TEST ESI,ESI                        ; 004f9ce0
    JNZ 0x004f9d58                      ; 004f9ce2
        ;   XREF to: 004f9d58 (CONDITIONAL_JUMP)  ; LAB_004f9d58
    MOV EBP,0x5c94a3                    ; 004f9ce4 | = "..\\core\\morph.cpp"
        ;   Label: LAB_004f9ce4
    MOV EAX,0xc5                        ; 004f9ce9
    PUSH 0x5c94b5                       ; 004f9cee | = "CMorphModel::setup - out of memory!"
    MOV dword ptr [0x01d71de0],EBP      ; 004f9cf3 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 004f9cf9 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004f9cfe
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004f9d03
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004f9d06
        ;   Label: LAB_004f9d06
    TEST EDX,EDX                        ; 004f9d0a
    JZ 0x004f9d23                       ; 004f9d0c
        ;   XREF to: 004f9d23 (CONDITIONAL_JUMP)  ; LAB_004f9d23
    MOV ECX,dword ptr [ESP + 0x18]      ; 004f9d0e
    PUSH ECX                            ; 004f9d12
    PUSH 0x0                            ; 004f9d13
    MOV EAX,dword ptr [EBX]             ; 004f9d15
    PUSH EDX                            ; 004f9d17
    DEC EAX                             ; 004f9d18
    PUSH EAX                            ; 004f9d19
    PUSH EBX                            ; 004f9d1a
    CALL core_morph.cpp_CMorphModel_animateFromVertexBuffer_FUN_004f9e40 ; 004f9d1b
        ;   XREF to: 004f9e40 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_animateFromVertexBuffer_FUN_004f9e40(CMorphModel * this_ptr, int part_index, CVector3i * vertex_buffer, int start_offset, ...)
    ADD ESP,0x14                        ; 004f9d20
    MOV EDI,dword ptr [ESP + 0x24]      ; 004f9d23
        ;   Label: LAB_004f9d23
    TEST EDI,EDI                        ; 004f9d27
    JNZ 0x004f9d60                      ; 004f9d29
        ;   XREF to: 004f9d60 (CONDITIONAL_JUMP)  ; LAB_004f9d60
    POP EBP                             ; 004f9d2b
    POP EDI                             ; 004f9d2c
    POP ESI                             ; 004f9d2d
    POP EBX                             ; 004f9d2e
    RET                                 ; 004f9d2f
    MOV ECX,0x5c946a                    ; 004f9d30 | = "..\\core\\morph.cpp"
        ;   Label: LAB_004f9d30
    MOV ESI,0xac                        ; 004f9d35
    PUSH 0x5c947c                       ; 004f9d3a | = "CMorphModel::addPart - too many parts!"
    MOV dword ptr [0x01d71de0],ECX      ; 004f9d3f | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 004f9d45 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004f9d4b
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004f9d50
    JMP 0x004f9c51                      ; 004f9d53
        ;   XREF to: 004f9c51 (UNCONDITIONAL_JUMP)  ; LAB_004f9c51
    CMP dword ptr [EBX + 0x60],0x0      ; 004f9d58
        ;   Label: LAB_004f9d58
    JZ 0x004f9ce4                       ; 004f9d5c
        ;   XREF to: 004f9ce4 (CONDITIONAL_JUMP)  ; LAB_004f9ce4
    JMP 0x004f9d06                      ; 004f9d5e
        ;   XREF to: 004f9d06 (UNCONDITIONAL_JUMP)  ; LAB_004f9d06
    MOV EBP,dword ptr [ESP + 0x20]      ; 004f9d60
        ;   Label: LAB_004f9d60
    PUSH EBP                            ; 004f9d64
    PUSH 0x0                            ; 004f9d65
    MOV EAX,dword ptr [ESP + 0x34]      ; 004f9d67
    PUSH EAX                            ; 004f9d6b
    MOV EDX,dword ptr [ESP + 0x34]      ; 004f9d6c
    PUSH EDX                            ; 004f9d70
    MOV EAX,dword ptr [EBX]             ; 004f9d71
    PUSH EDI                            ; 004f9d73
    DEC EAX                             ; 004f9d74
    PUSH EAX                            ; 004f9d75
    PUSH EBX                            ; 004f9d76
    CALL core_morph.cpp_CMorphModel_setFaceListFromTriangles_FUN_004fa1c0 ; 004f9d77
        ;   XREF to: 004fa1c0 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_setFaceListFromTriangles_FUN_004fa1c0(CMorphModel * this_ptr, int part_index, SInputFace * face_data, STextureSet * texture_sets, ...)
    ADD ESP,0x1c                        ; 004f9d7c
    POP EBP                             ; 004f9d7f
    POP EDI                             ; 004f9d80
    POP ESI                             ; 004f9d81
    POP EBX                             ; 004f9d82
    RET                                 ; 004f9d83

