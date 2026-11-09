; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_skinAndRotateVertices_FUN_00547280(CDeformableModelInstance *this_ptr,int lod_index)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   lod_index
;
; XREF[2]:
;   core_charactr.cpp_FUN_00426730 at 0042681f
;   core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_00547170 at 00547183
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModel_rotateVertices_FUN_00541990
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810
;   core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005471f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00547280
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_skinAndRotateVertices_FUN_00547280
    PUSH ESI                            ; 00547281
    MOV EBX,dword ptr [ESP + 0xc]       ; 00547282
    MOV EAX,dword ptr [ESP + 0x10]      ; 00547286
    CMP EAX,dword ptr [EBX + 0x2230]    ; 0054728a
    JNZ 0x005472b5                      ; 00547290
        ;   XREF to: 005472b5 (CONDITIONAL_JUMP)  ; LAB_005472b5
    MOV ECX,dword ptr [EBX + 0x2234]    ; 00547292
        ;   Label: LAB_00547292
    PUSH ECX                            ; 00547298
    MOV ESI,dword ptr [EBX + 0x2230]    ; 00547299
    PUSH ESI                            ; 0054729f
    PUSH EBX                            ; 005472a0
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810 ; 005472a1
        ;   XREF to: 00547810 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005472a6
    PUSH EAX                            ; 005472a9
    CALL core_skeleton.cpp_CDeformableModel_rotateVertices_FUN_00541990 ; 005472aa
        ;   XREF to: 00541990 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_rotateVertices_FUN_00541990(CDeformableModel * this_ptr, int lod_index, int * input_vertices)
    ADD ESP,0xc                         ; 005472af
    POP ESI                             ; 005472b2
    POP EBX                             ; 005472b3
    RET                                 ; 005472b4
    PUSH EAX                            ; 005472b5
        ;   Label: LAB_005472b5
    PUSH EBX                            ; 005472b6
    CALL core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005471f0 ; 005472b7
        ;   XREF to: 005471f0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005471f0(CDeformableModelInstance * this_ptr, int lod_index)
    ADD ESP,0x8                         ; 005472bc
    JMP 0x00547292                      ; 005472bf
        ;   XREF to: 00547292 (UNCONDITIONAL_JUMP)  ; LAB_00547292

