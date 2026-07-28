; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_CMorphModel_addPartFromDeformableModel_FUN_004df5b0(CMorphModel *this_ptr,CDeformableModelInstance *model_ptr)
;
; Parameters:
; CMorphModel *    Stack[0x4]:4   this_ptr
; CDeformableModelInstance * Stack[0x8]:4   model_ptr
;
; XREF[2]:
;   core_morph.cpp_CMorph_addPartFromDeformableModel_FUN_004e0290 at 004e02b1
;   core_morph.cpp_CMorph_setupModelFromDeformable_FUN_004e0170 at 004e019b
;
; Called Functions:
;   core_morph.cpp_CMorphModel_addPartFromVertexBuffer_FUN_004df460
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020
;   core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_0051da50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004df5b0
        ;   Label: core_morph.cpp_CMorphModel_addPartFromDeformableModel_FUN_004df5b0
    PUSH ESI                            ; 004df5b1
    PUSH EDI                            ; 004df5b2
    PUSH EBP                            ; 004df5b3
    MOV EBX,dword ptr [ESP + 0x18]      ; 004df5b4
    PUSH 0x0                            ; 004df5b8
    PUSH EBX                            ; 004df5ba
    CALL core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_0051da50 ; 004df5bb
        ;   XREF to: 0051da50 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_0051da50(CDeformableModelInstance * this_ptr, int lod_index)
    ADD ESP,0x8                         ; 004df5c0
    PUSH EBX                            ; 004df5c3
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020 ; 004df5c4
        ;   XREF to: 0051e020 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(CDeformableModelInstance * this_ptr)
    MOV EDX,EAX                         ; 004df5c9
    MOV EAX,dword ptr [EBX + 0x2230]    ; 004df5cb
    SHL EAX,0x2                         ; 004df5d1
    ADD EAX,EDX                         ; 004df5d4
    ADD ESP,0x4                         ; 004df5d6
    MOV ECX,dword ptr [EAX + 0x90]      ; 004df5d9
    PUSH ECX                            ; 004df5df
    ADD EDX,0xc0                        ; 004df5e0
    PUSH EDX                            ; 004df5e6
    MOV ESI,dword ptr [EAX + 0x7c]      ; 004df5e7
    PUSH ESI                            ; 004df5ea
    MOV EDI,dword ptr [EAX + 0x54]      ; 004df5eb
    PUSH EDI                            ; 004df5ee
    MOV EBP,dword ptr [EBX + 0x2234]    ; 004df5ef
    PUSH EBP                            ; 004df5f5
    MOV EDX,dword ptr [EAX + 0x2c]      ; 004df5f6
    PUSH EDX                            ; 004df5f9
    MOV ECX,dword ptr [ESP + 0x2c]      ; 004df5fa
    PUSH ECX                            ; 004df5fe
    CALL core_morph.cpp_CMorphModel_addPartFromVertexBuffer_FUN_004df460 ; 004df5ff
        ;   XREF to: 004df460 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_addPartFromVertexBuffer_FUN_004df460(CMorphModel * this_ptr, int vertex_count, CVector3i * skinned_vertices, int tri_count, ...)
    ADD ESP,0x1c                        ; 004df604
    POP EBP                             ; 004df607
    POP EDI                             ; 004df608
    POP ESI                             ; 004df609
    POP EBX                             ; 004df60a
    RET                                 ; 004df60b

