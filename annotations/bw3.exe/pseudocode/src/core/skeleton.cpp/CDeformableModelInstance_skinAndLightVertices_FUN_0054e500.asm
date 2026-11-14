; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_skinAndLightVertices_FUN_0054e500(CDeformableModelInstance *this_ptr,int lod_index)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   lod_index
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_0054e3a0 at 0054e406
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModel_lightVertices_FUN_00548bd0
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40
;   core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_0054e420
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054e500
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_skinAndLightVertices_FUN_0054e500
    PUSH ESI                            ; 0054e501
    MOV EBX,dword ptr [ESP + 0xc]       ; 0054e502
    MOV EAX,dword ptr [ESP + 0x10]      ; 0054e506
    CMP EAX,dword ptr [EBX + 0x2320]    ; 0054e50a
    JNZ 0x0054e535                      ; 0054e510
        ;   XREF to: 0054e535 (CONDITIONAL_JUMP)  ; LAB_0054e535
    MOV ECX,dword ptr [EBX + 0x2324]    ; 0054e512
        ;   Label: LAB_0054e512
    PUSH ECX                            ; 0054e518
    MOV ESI,dword ptr [EBX + 0x2320]    ; 0054e519
    PUSH ESI                            ; 0054e51f
    PUSH EBX                            ; 0054e520
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40 ; 0054e521
        ;   XREF to: 0054ea40 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0054e526
    PUSH EAX                            ; 0054e529
    CALL core_skeleton.cpp_CDeformableModel_lightVertices_FUN_00548bd0 ; 0054e52a
        ;   XREF to: 00548bd0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_lightVertices_FUN_00548bd0(CDeformableModel * this_ptr, int lod_index, CVector3i * skinned_vertices)
    ADD ESP,0xc                         ; 0054e52f
    POP ESI                             ; 0054e532
    POP EBX                             ; 0054e533
    RET                                 ; 0054e534
    PUSH EAX                            ; 0054e535
        ;   Label: LAB_0054e535
    PUSH EBX                            ; 0054e536
    CALL core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_0054e420 ; 0054e537
        ;   XREF to: 0054e420 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_0054e420(CDeformableModelInstance * this_ptr, int lod_index)
    ADD ESP,0x8                         ; 0054e53c
    JMP 0x0054e512                      ; 0054e53f
        ;   XREF to: 0054e512 (UNCONDITIONAL_JUMP)  ; LAB_0054e512

