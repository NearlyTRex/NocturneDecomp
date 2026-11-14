; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_CMorphModel_addPartFromDeformableModel_FUN_00522490(CMorphModel *this_ptr,CDeformableModelInstance *model_ptr)
;
; Parameters:
; CMorphModel *    Stack[0x4]:4   this_ptr
; CDeformableModelInstance * Stack[0x8]:4   model_ptr
;
; XREF[1]:
;   core_morph.cpp_CMorph_setupModelFromDeformable_FUN_005230c0 at 005230eb
;
; Called Functions:
;   core_morph.cpp_CMorphModel_addPartFromVertexBuffer_FUN_00522340
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0
;   core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_00569890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00522490
        ;   Label: core_morph.cpp_CMorphModel_addPartFromDeformableModel_FUN_00522490
    PUSH ESI                            ; 00522491
    PUSH EDI                            ; 00522492
    PUSH EBP                            ; 00522493
    MOV EBX,dword ptr [ESP + 0x18]      ; 00522494
    PUSH 0x0                            ; 00522498
    PUSH EBX                            ; 0052249a
    CALL core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_00569890 ; 0052249b
        ;   XREF to: 00569890 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_00569890(CDeformableModelInstance * this_ptr, int lod_index)
    ADD ESP,0x8                         ; 005224a0
    PUSH EBX                            ; 005224a3
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0 ; 005224a4
        ;   XREF to: 00569eb0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0(CDeformableModelInstance * this_ptr)
    MOV EDX,EAX                         ; 005224a9
    MOV EAX,dword ptr [EBX + 0x2320]    ; 005224ab
    SHL EAX,0x2                         ; 005224b1
    ADD EAX,EDX                         ; 005224b4
    ADD ESP,0x4                         ; 005224b6
    MOV ECX,dword ptr [EAX + 0x90]      ; 005224b9
    PUSH ECX                            ; 005224bf
    ADD EDX,0xc0                        ; 005224c0
    PUSH EDX                            ; 005224c6
    MOV ESI,dword ptr [EAX + 0x7c]      ; 005224c7
    PUSH ESI                            ; 005224ca
    MOV EDI,dword ptr [EAX + 0x54]      ; 005224cb
    PUSH EDI                            ; 005224ce
    MOV EBP,dword ptr [EBX + 0x2324]    ; 005224cf
    PUSH EBP                            ; 005224d5
    MOV EDX,dword ptr [EAX + 0x2c]      ; 005224d6
    PUSH EDX                            ; 005224d9
    MOV ECX,dword ptr [ESP + 0x2c]      ; 005224da
    PUSH ECX                            ; 005224de
    CALL core_morph.cpp_CMorphModel_addPartFromVertexBuffer_FUN_00522340 ; 005224df
        ;   XREF to: 00522340 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_addPartFromVertexBuffer_FUN_00522340(CMorphModel * this_ptr, int vertex_count, CVector3i * skinned_vertices, int tri_count, ...)
    ADD ESP,0x1c                        ; 005224e4
    POP EBP                             ; 005224e7
    POP EDI                             ; 005224e8
    POP ESI                             ; 005224e9
    POP EBX                             ; 005224ea
    RET                                 ; 005224eb

