; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_skinAndLightVertices_FUN_0051db20(int param_1,int param_2)
;
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_0051d9d0 at 0051da36
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModel_lightVertices_FUN_00518470
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020
;   core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_0051da50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051db20
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_skinAndLightVertices_FUN_0051db20
    PUSH ESI                            ; 0051db21
    MOV EBX,dword ptr [ESP + 0xc]       ; 0051db22
    MOV EAX,dword ptr [ESP + 0x10]      ; 0051db26
    CMP EAX,dword ptr [EBX + 0x2230]    ; 0051db2a
    JNZ 0x0051db55                      ; 0051db30
        ;   XREF to: 0051db55 (CONDITIONAL_JUMP)  ; LAB_0051db55
    MOV ECX,dword ptr [EBX + 0x2234]    ; 0051db32
        ;   Label: LAB_0051db32
    PUSH ECX                            ; 0051db38
    MOV ESI,dword ptr [EBX + 0x2230]    ; 0051db39
    PUSH ESI                            ; 0051db3f
    PUSH EBX                            ; 0051db40
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020 ; 0051db41
        ;   XREF to: 0051e020 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020()
    ADD ESP,0x4                         ; 0051db46
    PUSH EAX                            ; 0051db49
    CALL core_skeleton.cpp_CDeformableModel_lightVertices_FUN_00518470 ; 0051db4a
        ;   XREF to: 00518470 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModel_lightVertices_FUN_00518470()
    ADD ESP,0xc                         ; 0051db4f
    POP ESI                             ; 0051db52
    POP EBX                             ; 0051db53
    RET                                 ; 0051db54
    PUSH EAX                            ; 0051db55
        ;   Label: LAB_0051db55
    PUSH EBX                            ; 0051db56
    CALL core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_0051da50 ; 0051db57
        ;   XREF to: 0051da50 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_0051da50()
    ADD ESP,0x8                         ; 0051db5c
    JMP 0x0051db32                      ; 0051db5f
        ;   XREF to: 0051db32 (UNCONDITIONAL_JUMP)  ; LAB_0051db32

