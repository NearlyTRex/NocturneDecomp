; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_skinAndInitWRecip_FUN_00547320(CDeformableModelInstance *this_ptr,int lod_index)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   lod_index
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_00547170 at 005471e2
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModel_initVertexWRecip_FUN_00541a00
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810
;   core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005471f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00547320
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_skinAndInitWRecip_FUN_00547320
    PUSH ESI                            ; 00547321
    MOV EBX,dword ptr [ESP + 0xc]       ; 00547322
    MOV EAX,dword ptr [ESP + 0x10]      ; 00547326
    CMP EAX,dword ptr [EBX + 0x2230]    ; 0054732a
    JNZ 0x00547355                      ; 00547330
        ;   XREF to: 00547355 (CONDITIONAL_JUMP)  ; LAB_00547355
    MOV ECX,dword ptr [EBX + 0x2234]    ; 00547332
        ;   Label: LAB_00547332
    PUSH ECX                            ; 00547338
    MOV ESI,dword ptr [EBX + 0x2230]    ; 00547339
    PUSH ESI                            ; 0054733f
    PUSH EBX                            ; 00547340
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810 ; 00547341
        ;   XREF to: 00547810 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00547346
    PUSH EAX                            ; 00547349
    CALL core_skeleton.cpp_CDeformableModel_initVertexWRecip_FUN_00541a00 ; 0054734a
        ;   XREF to: 00541a00 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_initVertexWRecip_FUN_00541a00(CDeformableModel * this_ptr, int lod_index, CVector3i * lod_vertices)
    ADD ESP,0xc                         ; 0054734f
    POP ESI                             ; 00547352
    POP EBX                             ; 00547353
    RET                                 ; 00547354
    PUSH EAX                            ; 00547355
        ;   Label: LAB_00547355
    PUSH EBX                            ; 00547356
    CALL core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005471f0 ; 00547357
        ;   XREF to: 005471f0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005471f0(CDeformableModelInstance * this_ptr, int lod_index)
    ADD ESP,0x8                         ; 0054735c
    JMP 0x00547332                      ; 0054735f
        ;   XREF to: 00547332 (UNCONDITIONAL_JUMP)  ; LAB_00547332

