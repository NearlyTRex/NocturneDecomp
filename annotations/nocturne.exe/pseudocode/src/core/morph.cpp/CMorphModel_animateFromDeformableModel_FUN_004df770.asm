; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_CMorphModel_animateFromDeformableModel_FUN_004df770(CMorphModel *this_ptr,int part_index,CDeformableModelInstance *model_ptr)
;
; Parameters:
; CMorphModel *    Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   part_index
; CDeformableModelInstance * Stack[0xc]:4   model_ptr
;
; XREF[1]:
;   core_morph.cpp_CMorph_updateModelFromDeformable_FUN_004e0340 at 004e0367
;
; Called Functions:
;   core_morph.cpp_CMorphModel_animateFromVertexBuffer_FUN_004df660
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020
;   core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_0051da50
;   core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004df770
        ;   Label: core_morph.cpp_CMorphModel_animateFromDeformableModel_FUN_004df770
    PUSH ESI                            ; 004df771
    MOV EBX,dword ptr [ESP + 0x14]      ; 004df772
    PUSH EBX                            ; 004df776
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880 ; 004df777
        ;   XREF to: 0051b880 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004df77c
    PUSH 0x0                            ; 004df77f
    PUSH EBX                            ; 004df781
    CALL core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_0051da50 ; 004df782
        ;   XREF to: 0051da50 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_0051da50(CDeformableModelInstance * this_ptr, int lod_index)
    ADD ESP,0x8                         ; 004df787
    PUSH EBX                            ; 004df78a
    MOV ESI,dword ptr [EBX + 0x2230]    ; 004df78b
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020 ; 004df791
        ;   XREF to: 0051e020 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004df796
    MOV EDX,dword ptr [EAX + ESI*0x4 + 0x2c] ; 004df799
    PUSH EDX                            ; 004df79d
    PUSH 0x0                            ; 004df79e
    MOV ECX,dword ptr [EBX + 0x2234]    ; 004df7a0
    PUSH ECX                            ; 004df7a6
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004df7a7
    PUSH EBX                            ; 004df7ab
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004df7ac
    PUSH ESI                            ; 004df7b0
    CALL core_morph.cpp_CMorphModel_animateFromVertexBuffer_FUN_004df660 ; 004df7b1
        ;   XREF to: 004df660 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_animateFromVertexBuffer_FUN_004df660(CMorphModel * this_ptr, int part_index, CVector3i * vertex_buffer, int start_offset, ...)
    ADD ESP,0x14                        ; 004df7b6
    POP ESI                             ; 004df7b9
    POP EBX                             ; 004df7ba
    RET                                 ; 004df7bb

