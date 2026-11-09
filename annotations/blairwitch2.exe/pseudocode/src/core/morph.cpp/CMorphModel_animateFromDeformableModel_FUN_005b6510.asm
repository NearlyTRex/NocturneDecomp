; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_CMorphModel_animateFromDeformableModel_FUN_005b6510(CMorphModel *this_ptr,int part_index,CDeformableModelInstance *model_ptr)
;
; Parameters:
; CMorphModel *    Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   part_index
; CDeformableModelInstance * Stack[0xc]:4   model_ptr
;
; XREF[1]:
;   core_morph.cpp_CMorph_updateModelFromDeformable_FUN_005b7150 at 005b7177
;
; Called Functions:
;   core_morph.cpp_CMorphModel_animateFromVertexBuffer_FUN_005b6400
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810
;   core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005471f0
;   core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00544ee0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b6510
        ;   Label: core_morph.cpp_CMorphModel_animateFromDeformableModel_FUN_005b6510
    PUSH ESI                            ; 005b6511
    MOV EBX,dword ptr [ESP + 0x14]      ; 005b6512
    PUSH EBX                            ; 005b6516
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00544ee0 ; 005b6517
        ;   XREF to: 00544ee0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00544ee0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005b651c
    PUSH 0x0                            ; 005b651f
    PUSH EBX                            ; 005b6521
    CALL core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005471f0 ; 005b6522
        ;   XREF to: 005471f0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005471f0(CDeformableModelInstance * this_ptr, int lod_index)
    ADD ESP,0x8                         ; 005b6527
    PUSH EBX                            ; 005b652a
    MOV ESI,dword ptr [EBX + 0x2230]    ; 005b652b
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810 ; 005b6531
        ;   XREF to: 00547810 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005b6536
    MOV EDX,dword ptr [EAX + ESI*0x4 + 0x2c] ; 005b6539
    PUSH EDX                            ; 005b653d
    PUSH 0x0                            ; 005b653e
    MOV ECX,dword ptr [EBX + 0x2234]    ; 005b6540
    PUSH ECX                            ; 005b6546
    MOV EBX,dword ptr [ESP + 0x1c]      ; 005b6547
    PUSH EBX                            ; 005b654b
    MOV ESI,dword ptr [ESP + 0x1c]      ; 005b654c
    PUSH ESI                            ; 005b6550
    CALL core_morph.cpp_CMorphModel_animateFromVertexBuffer_FUN_005b6400 ; 005b6551
        ;   XREF to: 005b6400 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_animateFromVertexBuffer_FUN_005b6400(CMorphModel * this_ptr, int part_index, CVector3i * vertex_buffer, int start_offset, ...)
    ADD ESP,0x14                        ; 005b6556
    POP ESI                             ; 005b6559
    POP EBX                             ; 005b655a
    RET                                 ; 005b655b

