; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_CMorphModel_animateFromDeformableModel_FUN_004f9f50(CMorphModel *this_ptr,int part_index,CDeformableModelInstance *model_ptr)
;
; Parameters:
; CMorphModel *    Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   part_index
; CDeformableModelInstance * Stack[0xc]:4   model_ptr
;
; XREF[1]:
;   core_morph.cpp_CMorph_updateModelFromDeformable_FUN_004fab90 at 004fabb7
;
; Called Functions:
;   core_morph.cpp_CMorphModel_animateFromVertexBuffer_FUN_004f9e40
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40
;   core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_0054e420
;   core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0054c110
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f9f50
        ;   Label: core_morph.cpp_CMorphModel_animateFromDeformableModel_FUN_004f9f50
    PUSH ESI                            ; 004f9f51
    MOV EBX,dword ptr [ESP + 0x14]      ; 004f9f52
    PUSH EBX                            ; 004f9f56
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0054c110 ; 004f9f57
        ;   XREF to: 0054c110 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0054c110(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004f9f5c
    PUSH 0x0                            ; 004f9f5f
    PUSH EBX                            ; 004f9f61
    CALL core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_0054e420 ; 004f9f62
        ;   XREF to: 0054e420 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_0054e420(CDeformableModelInstance * this_ptr, int lod_index)
    ADD ESP,0x8                         ; 004f9f67
    PUSH EBX                            ; 004f9f6a
    MOV ESI,dword ptr [EBX + 0x2320]    ; 004f9f6b
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40 ; 004f9f71
        ;   XREF to: 0054ea40 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004f9f76
    MOV EDX,dword ptr [EAX + ESI*0x4 + 0x2c] ; 004f9f79
    PUSH EDX                            ; 004f9f7d
    PUSH 0x0                            ; 004f9f7e
    MOV ECX,dword ptr [EBX + 0x2324]    ; 004f9f80
    PUSH ECX                            ; 004f9f86
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004f9f87
    PUSH EBX                            ; 004f9f8b
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004f9f8c
    PUSH ESI                            ; 004f9f90
    CALL core_morph.cpp_CMorphModel_animateFromVertexBuffer_FUN_004f9e40 ; 004f9f91
        ;   XREF to: 004f9e40 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_animateFromVertexBuffer_FUN_004f9e40(CMorphModel * this_ptr, int part_index, CVector3i * vertex_buffer, int start_offset, ...)
    ADD ESP,0x14                        ; 004f9f96
    POP ESI                             ; 004f9f99
    POP EBX                             ; 004f9f9a
    RET                                 ; 004f9f9b

