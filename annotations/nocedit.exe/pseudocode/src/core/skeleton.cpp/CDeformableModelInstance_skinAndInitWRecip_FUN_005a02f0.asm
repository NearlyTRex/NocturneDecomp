; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_skeleton_cpp_CDeformableModelInstance_skinAndInitWRecip_FUN_005a02f0(CDeformableModelInstance *this_ptr,int lod_index)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   lod_index
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150 at 005a01c2
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModel_initVertexWRecip_FUN_0059ab90
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
;   core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a02f0
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_skinAndInitWRecip_FUN_005a02f0
    PUSH ESI                            ; 005a02f1
    MOV EBX,dword ptr [ESP + 0xc]       ; 005a02f2
    MOV EAX,dword ptr [ESP + 0x10]      ; 005a02f6
    CMP EAX,dword ptr [EBX + 0x2230]    ; 005a02fa
    JNZ 0x005a0325                      ; 005a0300
        ;   XREF to: 005a0325 (CONDITIONAL_JUMP)  ; LAB_005a0325
    MOV ECX,dword ptr [EBX + 0x2234]    ; 005a0302
        ;   Label: LAB_005a0302
    PUSH ECX                            ; 005a0308
    MOV ESI,dword ptr [EBX + 0x2230]    ; 005a0309
    PUSH ESI                            ; 005a030f
    PUSH EBX                            ; 005a0310
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0 ; 005a0311
        ;   XREF to: 005a07a0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005a0316
    PUSH EAX                            ; 005a0319
    CALL core_skeleton.cpp_CDeformableModel_initVertexWRecip_FUN_0059ab90 ; 005a031a
        ;   XREF to: 0059ab90 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_initVertexWRecip_FUN_0059ab90(CDeformableModel * this_ptr, int lod_index)
    ADD ESP,0xc                         ; 005a031f
    POP ESI                             ; 005a0322
    POP EBX                             ; 005a0323
    RET                                 ; 005a0324
    PUSH EAX                            ; 005a0325
        ;   Label: LAB_005a0325
    PUSH EBX                            ; 005a0326
    CALL core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0 ; 005a0327
        ;   XREF to: 005a01d0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0(CDeformableModelInstance * this_ptr, int lod_index)
    ADD ESP,0x8                         ; 005a032c
    JMP 0x005a0302                      ; 005a032f
        ;   XREF to: 005a0302 (UNCONDITIONAL_JUMP)  ; LAB_005a0302

