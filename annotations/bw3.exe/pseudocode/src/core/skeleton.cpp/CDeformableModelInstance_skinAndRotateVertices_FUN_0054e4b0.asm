; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_skinAndRotateVertices_FUN_0054e4b0(CDeformableModelInstance *this_ptr,int lod_index)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   lod_index
;
; XREF[2]:
;   core_charactr.cpp_FUN_0042f310 at 0042f437
;   core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_0054e3a0 at 0054e3b3
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModel_rotateVertices_FUN_00548ba0
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40
;   core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_0054e420
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054e4b0
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_skinAndRotateVertices_FUN_0054e4b0
    PUSH ESI                            ; 0054e4b1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0054e4b2
    MOV EAX,dword ptr [ESP + 0x10]      ; 0054e4b6
    CMP EAX,dword ptr [EBX + 0x2320]    ; 0054e4ba
    JNZ 0x0054e4e5                      ; 0054e4c0
        ;   XREF to: 0054e4e5 (CONDITIONAL_JUMP)  ; LAB_0054e4e5
    MOV ECX,dword ptr [EBX + 0x2324]    ; 0054e4c2
        ;   Label: LAB_0054e4c2
    PUSH ECX                            ; 0054e4c8
    MOV ESI,dword ptr [EBX + 0x2320]    ; 0054e4c9
    PUSH ESI                            ; 0054e4cf
    PUSH EBX                            ; 0054e4d0
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40 ; 0054e4d1
        ;   XREF to: 0054ea40 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0054e4d6
    PUSH EAX                            ; 0054e4d9
    CALL core_skeleton.cpp_CDeformableModel_rotateVertices_FUN_00548ba0 ; 0054e4da
        ;   XREF to: 00548ba0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_rotateVertices_FUN_00548ba0(CDeformableModel * this_ptr, int lod_index, int * input_vertices)
    ADD ESP,0xc                         ; 0054e4df
    POP ESI                             ; 0054e4e2
    POP EBX                             ; 0054e4e3
    RET                                 ; 0054e4e4
    PUSH EAX                            ; 0054e4e5
        ;   Label: LAB_0054e4e5
    PUSH EBX                            ; 0054e4e6
    CALL core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_0054e420 ; 0054e4e7
        ;   XREF to: 0054e420 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_0054e420(CDeformableModelInstance * this_ptr, int lod_index)
    ADD ESP,0x8                         ; 0054e4ec
    JMP 0x0054e4c2                      ; 0054e4ef
        ;   XREF to: 0054e4c2 (UNCONDITIONAL_JUMP)  ; LAB_0054e4c2

