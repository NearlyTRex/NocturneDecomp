; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_skinAndRotateVertices_FUN_005a0250(CDeformableModelInstance *this_ptr,int lod_index)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   lod_index
;
; XREF[3]:
;   core_charactr.cpp_CCharacter_renderEthereal_FUN_0042af60 at 0042b04f
;   core_morph.cpp_FUN_0052bcb0 at 0052c066
;   core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150 at 005a0163
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModel_rotateVertices_FUN_0059ab20
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
;   core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a0250
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_skinAndRotateVertices_FUN_005a0250
    PUSH ESI                            ; 005a0251
    MOV EBX,dword ptr [ESP + 0xc]       ; 005a0252
    MOV EAX,dword ptr [ESP + 0x10]      ; 005a0256
    CMP EAX,dword ptr [EBX + 0x2230]    ; 005a025a
    JNZ 0x005a0285                      ; 005a0260
        ;   XREF to: 005a0285 (CONDITIONAL_JUMP)  ; LAB_005a0285
    MOV ECX,dword ptr [EBX + 0x2234]    ; 005a0262
        ;   Label: LAB_005a0262
    PUSH ECX                            ; 005a0268
    MOV ESI,dword ptr [EBX + 0x2230]    ; 005a0269
    PUSH ESI                            ; 005a026f
    PUSH EBX                            ; 005a0270
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0 ; 005a0271
        ;   XREF to: 005a07a0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005a0276
    PUSH EAX                            ; 005a0279
    CALL core_skeleton.cpp_CDeformableModel_rotateVertices_FUN_0059ab20 ; 005a027a
        ;   XREF to: 0059ab20 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_rotateVertices_FUN_0059ab20(CDeformableModel * this_ptr, int lod_index, int * input_vertices)
    ADD ESP,0xc                         ; 005a027f
    POP ESI                             ; 005a0282
    POP EBX                             ; 005a0283
    RET                                 ; 005a0284
    PUSH EAX                            ; 005a0285
        ;   Label: LAB_005a0285
    PUSH EBX                            ; 005a0286
    CALL core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0 ; 005a0287
        ;   XREF to: 005a01d0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0(CDeformableModelInstance * this_ptr, int lod_index)
    ADD ESP,0x8                         ; 005a028c
    JMP 0x005a0262                      ; 005a028f
        ;   XREF to: 005a0262 (UNCONDITIONAL_JUMP)  ; LAB_005a0262

