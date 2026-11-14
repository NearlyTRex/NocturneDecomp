; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModel_rotateVertices_FUN_00564000(CDeformableModel *this_ptr,int lod_index,int *input_vertices)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   lod_index
; int *            Stack[0xc]:4   input_vertices
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModelInstance_skinAndRotateVertices_FUN_00569920 at 0056994a
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_set.cpp_CDemonSet_rotateVerticies_FUN_00553140
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00564000
        ;   Label: core_skeleton.cpp_CDeformableModel_rotateVertices_FUN_00564000
    PUSH ESI                            ; 00564001
    MOV EAX,dword ptr [ESP + 0x10]      ; 00564002
    MOV ECX,dword ptr [ESP + 0xc]       ; 00564006
    SHL EAX,0x2                         ; 0056400a
    MOV EDX,dword ptr [ESP + 0x14]      ; 0056400d
    ADD EAX,ECX                         ; 00564011
    PUSH EDX                            ; 00564013
    MOV EBX,dword ptr [EAX + 0x2c]      ; 00564014
    PUSH EBX                            ; 00564017
    MOV ESI,dword ptr [0x00622c18]      ; 00564018 | g_CDemonSetPtr
    PUSH ESI                            ; 0056401e | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_rotateVerticies_FUN_00553140 ; 0056401f
        ;   XREF to: 00553140 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_rotateVerticies_FUN_00553140(CDemonSet * this_ptr, int vertex_count, CVector3i * input_vertices)
    ADD ESP,0xc                         ; 00564024
    POP ESI                             ; 00564027
    POP EBX                             ; 00564028
    RET                                 ; 00564029

