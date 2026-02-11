; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_morph_cpp_CMorphModel_FUN_0052aa30(CMorphModel *this_ptr)
;
; Parameters:
; CMorphModel *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_morph.cpp_FUN_0052b600 at 0052b627
;
; Called Functions:
;   core_morph.cpp_CMorphModel_animate_FUN_0052a920
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
;   core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0
;   core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052aa30
        ;   Label: core_morph.cpp_CMorphModel_FUN_0052aa30
    PUSH ESI                            ; 0052aa31
    MOV EBX,dword ptr [ESP + 0x14]      ; 0052aa32
    PUSH EBX                            ; 0052aa36
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000 ; 0052aa37
        ;   XREF to: 0059e000 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0052aa3c
    PUSH 0x0                            ; 0052aa3f
    PUSH EBX                            ; 0052aa41
    CALL core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0 ; 0052aa42
        ;   XREF to: 005a01d0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0(CDeformableModelInstance * this_ptr, int lod_index)
    ADD ESP,0x8                         ; 0052aa47
    PUSH EBX                            ; 0052aa4a
    MOV ESI,dword ptr [EBX + 0x2230]    ; 0052aa4b
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0 ; 0052aa51
        ;   XREF to: 005a07a0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0052aa56
    MOV EDX,dword ptr [EAX + ESI*0x4 + 0x2c] ; 0052aa59
    PUSH EDX                            ; 0052aa5d
    PUSH 0x0                            ; 0052aa5e
    MOV ECX,dword ptr [EBX + 0x2234]    ; 0052aa60
    PUSH ECX                            ; 0052aa66
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0052aa67
    PUSH EBX                            ; 0052aa6b
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0052aa6c
    PUSH ESI                            ; 0052aa70
    CALL core_morph.cpp_CMorphModel_animate_FUN_0052a920 ; 0052aa71
        ;   XREF to: 0052a920 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_animate_FUN_0052a920(CMorphModel * this_ptr)
    ADD ESP,0x14                        ; 0052aa76
    POP ESI                             ; 0052aa79
    POP EBX                             ; 0052aa7a
    RET                                 ; 0052aa7b

