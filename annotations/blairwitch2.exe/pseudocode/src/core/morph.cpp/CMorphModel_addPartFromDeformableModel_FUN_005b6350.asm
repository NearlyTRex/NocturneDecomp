; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_CMorphModel_addPartFromDeformableModel_FUN_005b6350(CMorphModel *this_ptr,CDeformableModelInstance *model_ptr)
;
; Parameters:
; CMorphModel *    Stack[0x4]:4   this_ptr
; CDeformableModelInstance * Stack[0x8]:4   model_ptr
;
; XREF[1]:
;   core_morph.cpp_CMorph_setupModelFromDeformable_FUN_005b6f80 at 005b6fab
;
; Called Functions:
;   core_morph.cpp_CMorphModel_addPartFromVertexBuffer_FUN_005b6200
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810
;   core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005471f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b6350
        ;   Label: core_morph.cpp_CMorphModel_addPartFromDeformableModel_FUN_005b6350
    PUSH ESI                            ; 005b6351
    PUSH EDI                            ; 005b6352
    PUSH EBP                            ; 005b6353
    MOV EBX,dword ptr [ESP + 0x18]      ; 005b6354
    PUSH 0x0                            ; 005b6358
    PUSH EBX                            ; 005b635a
    CALL core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005471f0 ; 005b635b
        ;   XREF to: 005471f0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005471f0(CDeformableModelInstance * this_ptr, int lod_index)
    ADD ESP,0x8                         ; 005b6360
    PUSH EBX                            ; 005b6363
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810 ; 005b6364
        ;   XREF to: 00547810 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810(CDeformableModelInstance * this_ptr)
    MOV EDX,EAX                         ; 005b6369
    MOV EAX,dword ptr [EBX + 0x2230]    ; 005b636b
    SHL EAX,0x2                         ; 005b6371
    ADD EAX,EDX                         ; 005b6374
    ADD ESP,0x4                         ; 005b6376
    MOV ECX,dword ptr [EAX + 0x90]      ; 005b6379
    PUSH ECX                            ; 005b637f
    ADD EDX,0xc0                        ; 005b6380
    PUSH EDX                            ; 005b6386
    MOV ESI,dword ptr [EAX + 0x7c]      ; 005b6387
    PUSH ESI                            ; 005b638a
    MOV EDI,dword ptr [EAX + 0x54]      ; 005b638b
    PUSH EDI                            ; 005b638e
    MOV EBP,dword ptr [EBX + 0x2234]    ; 005b638f
    PUSH EBP                            ; 005b6395
    MOV EDX,dword ptr [EAX + 0x2c]      ; 005b6396
    PUSH EDX                            ; 005b6399
    MOV ECX,dword ptr [ESP + 0x2c]      ; 005b639a
    PUSH ECX                            ; 005b639e
    CALL core_morph.cpp_CMorphModel_addPartFromVertexBuffer_FUN_005b6200 ; 005b639f
        ;   XREF to: 005b6200 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_addPartFromVertexBuffer_FUN_005b6200(CMorphModel * this_ptr, int vertex_count, CVector3i * skinned_vertices, int tri_count, ...)
    ADD ESP,0x1c                        ; 005b63a4
    POP EBP                             ; 005b63a7
    POP EDI                             ; 005b63a8
    POP ESI                             ; 005b63a9
    POP EBX                             ; 005b63aa
    RET                                 ; 005b63ab

