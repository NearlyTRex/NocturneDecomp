; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModel_rotateVertices_FUN_00541990(CDeformableModel *this_ptr,int lod_index,int *input_vertices)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   lod_index
; int *            Stack[0xc]:4   input_vertices
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModelInstance_skinAndRotateVertices_FUN_00547280 at 005472aa
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_set.cpp_CDemonSet_rotateVerticies_FUN_00531e90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00541990
        ;   Label: core_skeleton.cpp_CDeformableModel_rotateVertices_FUN_00541990
    PUSH ESI                            ; 00541991
    MOV EAX,dword ptr [ESP + 0x10]      ; 00541992
    MOV ECX,dword ptr [ESP + 0xc]       ; 00541996
    SHL EAX,0x2                         ; 0054199a
    MOV EDX,dword ptr [ESP + 0x14]      ; 0054199d
    ADD EAX,ECX                         ; 005419a1
    PUSH EDX                            ; 005419a3
    MOV EBX,dword ptr [EAX + 0x2c]      ; 005419a4
    PUSH EBX                            ; 005419a7
    MOV ESI,dword ptr [0x0061b5a8]      ; 005419a8 | g_CDemonSetPtr
    PUSH ESI                            ; 005419ae | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_rotateVerticies_FUN_00531e90 ; 005419af
        ;   XREF to: 00531e90 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_rotateVerticies_FUN_00531e90(CDemonSet * this_ptr, int vertex_count, CVector3i * input_vertices)
    ADD ESP,0xc                         ; 005419b4
    POP ESI                             ; 005419b7
    POP EBX                             ; 005419b8
    RET                                 ; 005419b9

