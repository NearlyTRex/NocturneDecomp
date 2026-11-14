; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModel_lightVertices_FUN_00548bd0(CDeformableModel *this_ptr,int lod_index,CVector3i *skinned_vertices)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   lod_index
; CVector3i *      Stack[0xc]:4   skinned_vertices
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModelInstance_skinAndLightVertices_FUN_0054e500 at 0054e52a
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_set.cpp_CDemonSet_lightVerticies_FUN_00538dd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00548bd0
        ;   Label: core_skeleton.cpp_CDeformableModel_lightVertices_FUN_00548bd0
    PUSH ESI                            ; 00548bd1
    PUSH EDI                            ; 00548bd2
    PUSH EBP                            ; 00548bd3
    PUSH 0x0                            ; 00548bd4
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00548bd6
    MOV ECX,dword ptr [ESP + 0x18]      ; 00548bda
    PUSH -0x3                           ; 00548bde
    SHL EAX,0x2                         ; 00548be0
    MOV EDX,dword ptr [ESP + 0x24]      ; 00548be3
    ADD EAX,ECX                         ; 00548be7
    PUSH EDX                            ; 00548be9
    MOV EBX,dword ptr [EAX + 0x7c]      ; 00548bea
    PUSH EBX                            ; 00548bed
    MOV ESI,dword ptr [EAX + 0x54]      ; 00548bee
    PUSH ESI                            ; 00548bf1
    MOV EDI,dword ptr [EAX + 0x2c]      ; 00548bf2
    PUSH EDI                            ; 00548bf5
    MOV EBP,dword ptr [0x00603b28]      ; 00548bf6 | g_CDemonSetPtr
    PUSH EBP                            ; 00548bfc | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_lightVerticies_FUN_00538dd0 ; 00548bfd
        ;   XREF to: 00538dd0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_lightVerticies_FUN_00538dd0(CDemonSet * this_ptr, int vertex_count, int tri_count, void * face_data, ...)
    ADD ESP,0x1c                        ; 00548c02
    POP EBP                             ; 00548c05
    POP EDI                             ; 00548c06
    POP ESI                             ; 00548c07
    POP EBX                             ; 00548c08
    RET                                 ; 00548c09

