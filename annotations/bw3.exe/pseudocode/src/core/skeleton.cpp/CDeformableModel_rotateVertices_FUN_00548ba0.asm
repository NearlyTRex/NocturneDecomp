; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModel_rotateVertices_FUN_00548ba0(CDeformableModel *this_ptr,int lod_index,int *input_vertices)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   lod_index
; int *            Stack[0xc]:4   input_vertices
;
; XREF[1]:
;   core_skeleton.cpp_FUN_0054e4b0 at 0054e4da
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_set.cpp_CDemonSet_rotateVerticies_FUN_00538ad0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00548ba0
        ;   Label: core_skeleton.cpp_CDeformableModel_rotateVertices_FUN_00548ba0
    PUSH ESI                            ; 00548ba1
    MOV EAX,dword ptr [ESP + 0x10]      ; 00548ba2
    MOV ECX,dword ptr [ESP + 0xc]       ; 00548ba6
    SHL EAX,0x2                         ; 00548baa
    MOV EDX,dword ptr [ESP + 0x14]      ; 00548bad
    ADD EAX,ECX                         ; 00548bb1
    PUSH EDX                            ; 00548bb3
    MOV EBX,dword ptr [EAX + 0x2c]      ; 00548bb4
    PUSH EBX                            ; 00548bb7
    MOV ESI,dword ptr [0x00603b28]      ; 00548bb8 | g_CDemonSetPtr
    PUSH ESI                            ; 00548bbe | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_rotateVerticies_FUN_00538ad0 ; 00548bbf
        ;   XREF to: 00538ad0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_rotateVerticies_FUN_00538ad0(CDemonSet * this_ptr, int vertex_count, CVector3i * input_vertices)
    ADD ESP,0xc                         ; 00548bc4
    POP ESI                             ; 00548bc7
    POP EBX                             ; 00548bc8
    RET                                 ; 00548bc9

