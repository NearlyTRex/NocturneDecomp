; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_0044e6a0(CKeyFramedModel *this_ptr,int frame_index,CKeyFramedModelInstance *instance,int render_flags)
;
; Parameters:
; CKeyFramedModel * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   frame_index
; CKeyFramedModelInstance * Stack[0xc]:4   instance
; int              Stack[0x10]:4   render_flags
;
; XREF[6]:
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0 at 0044fce9
;   core_fire.cpp_FUN_004966a0 at 00496739
;   core_fire.cpp_FUN_004968d0 at 0049697f
;   core_fire.cpp_FUN_00497350 at 0049763b
;   core_fire.cpp_FUN_0049b6f0 at 0049b7cd
;   core_set.cpp_FUN_0052d0e0 at 0052d1ef
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_rotateAndLightVertices_FUN_0044e720
;   core_dmodel.cpp_CKeyFramedModel_submitToRenderer_FUN_0044e7d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044e6a0
        ;   Label: core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_0044e6a0
    PUSH EBP                            ; 0044e6a1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0044e6a2
    CMP dword ptr [EBX + 0x110],0x1     ; 0044e6a6
    JGE 0x0044e6b2                      ; 0044e6ad
        ;   XREF to: 0044e6b2 (CONDITIONAL_JUMP)  ; LAB_0044e6b2
    POP EBP                             ; 0044e6af
    POP EBX                             ; 0044e6b0
    RET                                 ; 0044e6b1
    PUSH EDI                            ; 0044e6b2
        ;   Label: LAB_0044e6b2
    PUSH ESI                            ; 0044e6b3
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0044e6b4
    PUSH ECX                            ; 0044e6b8
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0044e6b9
    PUSH ESI                            ; 0044e6bd
    PUSH EBX                            ; 0044e6be
    CALL core_dmodel.cpp_CKeyFramedModel_rotateAndLightVertices_FUN_0044e720 ; 0044e6bf
        ;   XREF to: 0044e720 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_rotateAndLightVertices_FUN_0044e720(CKeyFramedModel * this_ptr, int frame_index, CKeyFramedModelInstance * instance)
    ADD ESP,0xc                         ; 0044e6c4
    MOV EDI,dword ptr [ESP + 0x20]      ; 0044e6c7
    PUSH EDI                            ; 0044e6cb
    MOV EBP,dword ptr [ESP + 0x20]      ; 0044e6cc
    PUSH EBP                            ; 0044e6d0
    PUSH EBX                            ; 0044e6d1
    CALL core_dmodel.cpp_CKeyFramedModel_submitToRenderer_FUN_0044e7d0 ; 0044e6d2
        ;   XREF to: 0044e7d0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_submitToRenderer_FUN_0044e7d0(CKeyFramedModel * this_ptr, CKeyFramedModelInstance * instance, int render_flags)
    ADD ESP,0xc                         ; 0044e6d7
    POP ESI                             ; 0044e6da
    POP EDI                             ; 0044e6db
    POP EBP                             ; 0044e6dc
    POP EBX                             ; 0044e6dd
    RET                                 ; 0044e6de

