; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_skeleton.cpp_CDeformableModelInstance_skinAndLightVertices_FUN_005a02a0(CDeformableModelInstance * this_ptr, int lod_index)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   lod_index
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150 at 005a01b6
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModel_lightVertices_FUN_0059ab50
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
;   core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a02a0
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_skinAndLightVertices_FUN_005a02a0
    PUSH ESI                            ; 005a02a1
    MOV EBX,dword ptr [ESP + 0xc]       ; 005a02a2
    MOV EAX,dword ptr [ESP + 0x10]      ; 005a02a6
    CMP EAX,dword ptr [EBX + 0x2230]    ; 005a02aa
    JNZ 0x005a02d5                      ; 005a02b0
        ;   XREF to: 005a02d5 (CONDITIONAL_JUMP)  ; LAB_005a02d5
    MOV ECX,dword ptr [EBX + 0x2234]    ; 005a02b2
        ;   Label: LAB_005a02b2
    PUSH ECX                            ; 005a02b8
    MOV ESI,dword ptr [EBX + 0x2230]    ; 005a02b9
    PUSH ESI                            ; 005a02bf
    PUSH EBX                            ; 005a02c0
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0 ; 005a02c1
        ;   XREF to: 005a07a0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005a02c6
    PUSH EAX                            ; 005a02c9
    CALL core_skeleton.cpp_CDeformableModel_lightVertices_FUN_0059ab50 ; 005a02ca
        ;   XREF to: 0059ab50 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_lightVertices_FUN_0059ab50(CDeformableModel * this_ptr, int lod_index, int render_flags)
    ADD ESP,0xc                         ; 005a02cf
    POP ESI                             ; 005a02d2
    POP EBX                             ; 005a02d3
    RET                                 ; 005a02d4
    PUSH EAX                            ; 005a02d5
        ;   Label: LAB_005a02d5
    PUSH EBX                            ; 005a02d6
    CALL core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0 ; 005a02d7
        ;   XREF to: 005a01d0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0(CDeformableModelInstance * this_ptr, int lod_index)
    ADD ESP,0x8                         ; 005a02dc
    JMP 0x005a02b2                      ; 005a02df
        ;   XREF to: 005a02b2 (UNCONDITIONAL_JUMP)  ; LAB_005a02b2

