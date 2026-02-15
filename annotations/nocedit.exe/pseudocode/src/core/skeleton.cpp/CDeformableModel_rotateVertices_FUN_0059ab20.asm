; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModel_rotateVertices_FUN_0059ab20(CDeformableModel *this_ptr,int lod_index,int *input_vertices)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   lod_index
; int *            Stack[0xc]:4   input_vertices
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModelInstance_skinAndRotateVertices_FUN_005a0250 at 005a027a
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_set.cpp_CDemonSet_rotateVertices_FUN_0056e7c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059ab20
        ;   Label: core_skeleton.cpp_CDeformableModel_rotateVertices_FUN_0059ab20
    PUSH ESI                            ; 0059ab21
    MOV EAX,dword ptr [ESP + 0x10]      ; 0059ab22
    MOV ECX,dword ptr [ESP + 0xc]       ; 0059ab26
    SHL EAX,0x2                         ; 0059ab2a
    MOV EDX,dword ptr [ESP + 0x14]      ; 0059ab2d
    ADD EAX,ECX                         ; 0059ab31
    PUSH EDX                            ; 0059ab33
    MOV EBX,dword ptr [EAX + 0x2c]      ; 0059ab34
    PUSH EBX                            ; 0059ab37
    MOV ESI,dword ptr [0x006810c8]      ; 0059ab38 | g_CDemonSetPtr
    PUSH ESI                            ; 0059ab3e | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_rotateVertices_FUN_0056e7c0 ; 0059ab3f
        ;   XREF to: 0056e7c0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_rotateVertices_FUN_0056e7c0(CDemonSet * this_ptr, int vertex_count, int * input_vertices)
    ADD ESP,0xc                         ; 0059ab44
    POP ESI                             ; 0059ab47
    POP EBX                             ; 0059ab48
    RET                                 ; 0059ab49

