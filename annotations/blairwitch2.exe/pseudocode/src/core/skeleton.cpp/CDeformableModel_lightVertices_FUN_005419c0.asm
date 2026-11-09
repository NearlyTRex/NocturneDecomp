; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModel_lightVertices_FUN_005419c0(CDeformableModel *this_ptr,int lod_index,CVector3i *skinned_vertices)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   lod_index
; CVector3i *      Stack[0xc]:4   skinned_vertices
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModelInstance_skinAndLightVertices_FUN_005472d0 at 005472fa
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_set.cpp_CDemonSet_lightVerticies_FUN_00532190
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005419c0
        ;   Label: core_skeleton.cpp_CDeformableModel_lightVertices_FUN_005419c0
    PUSH ESI                            ; 005419c1
    PUSH EDI                            ; 005419c2
    PUSH EBP                            ; 005419c3
    PUSH 0x0                            ; 005419c4
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005419c6
    MOV ECX,dword ptr [ESP + 0x18]      ; 005419ca
    PUSH -0x3                           ; 005419ce
    SHL EAX,0x2                         ; 005419d0
    MOV EDX,dword ptr [ESP + 0x24]      ; 005419d3
    ADD EAX,ECX                         ; 005419d7
    PUSH EDX                            ; 005419d9
    MOV EBX,dword ptr [EAX + 0x7c]      ; 005419da
    PUSH EBX                            ; 005419dd
    MOV ESI,dword ptr [EAX + 0x54]      ; 005419de
    PUSH ESI                            ; 005419e1
    MOV EDI,dword ptr [EAX + 0x2c]      ; 005419e2
    PUSH EDI                            ; 005419e5
    MOV EBP,dword ptr [0x0061b5a8]      ; 005419e6 | g_CDemonSetPtr
    PUSH EBP                            ; 005419ec | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_lightVerticies_FUN_00532190 ; 005419ed
        ;   XREF to: 00532190 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_lightVerticies_FUN_00532190(CDemonSet * this_ptr, int vertex_count, int tri_count, void * face_data, ...)
    ADD ESP,0x1c                        ; 005419f2
    POP EBP                             ; 005419f5
    POP EDI                             ; 005419f6
    POP ESI                             ; 005419f7
    POP EBX                             ; 005419f8
    RET                                 ; 005419f9

