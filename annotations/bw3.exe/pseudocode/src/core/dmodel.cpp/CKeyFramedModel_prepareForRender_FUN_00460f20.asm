; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00460f20(CKeyFramedModel *this_ptr,int frame_index,CKeyFramedModelInstance *instance,int render_flags)
;
; Parameters:
; CKeyFramedModel * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   frame_index
; CKeyFramedModelInstance * Stack[0xc]:4   instance
; int              Stack[0x10]:4   render_flags
;
; XREF[6]:
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540 at 00462569
;   core_fire.cpp_CBulletTrail_render_FUN_0049ad20 at 0049b00b
;   core_fire.cpp_CLeaf_render_FUN_0049a2c0 at 0049a36f
;   core_fire.cpp_CShell_render_FUN_004a09f0 at 004a0acd
;   core_fire.cpp_FUN_0049a090 at 0049a129
;   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_00533b80 at 00533c8f
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_rotateAndLightVertices_FUN_00460fa0
;   core_dmodel.cpp_CKeyFramedModel_submitToRenderer_FUN_00461050
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00460f20
        ;   Label: core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00460f20
    PUSH EBP                            ; 00460f21
    MOV EBX,dword ptr [ESP + 0xc]       ; 00460f22
    CMP dword ptr [EBX + 0x110],0x1     ; 00460f26
    JGE 0x00460f32                      ; 00460f2d
        ;   XREF to: 00460f32 (CONDITIONAL_JUMP)  ; LAB_00460f32
    POP EBP                             ; 00460f2f
    POP EBX                             ; 00460f30
    RET                                 ; 00460f31
    PUSH EDI                            ; 00460f32
        ;   Label: LAB_00460f32
    PUSH ESI                            ; 00460f33
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00460f34
    PUSH ECX                            ; 00460f38
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00460f39
    PUSH ESI                            ; 00460f3d
    PUSH EBX                            ; 00460f3e
    CALL core_dmodel.cpp_CKeyFramedModel_rotateAndLightVertices_FUN_00460fa0 ; 00460f3f
        ;   XREF to: 00460fa0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_rotateAndLightVertices_FUN_00460fa0(CKeyFramedModel * this_ptr, int frame_index, CKeyFramedModelInstance * instance)
    ADD ESP,0xc                         ; 00460f44
    MOV EDI,dword ptr [ESP + 0x20]      ; 00460f47
    PUSH EDI                            ; 00460f4b
    MOV EBP,dword ptr [ESP + 0x20]      ; 00460f4c
    PUSH EBP                            ; 00460f50
    PUSH EBX                            ; 00460f51
    CALL core_dmodel.cpp_CKeyFramedModel_submitToRenderer_FUN_00461050 ; 00460f52
        ;   XREF to: 00461050 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_submitToRenderer_FUN_00461050(CKeyFramedModel * this_ptr, CKeyFramedModelInstance * instance, int render_flags)
    ADD ESP,0xc                         ; 00460f57
    POP ESI                             ; 00460f5a
    POP EDI                             ; 00460f5b
    POP EBP                             ; 00460f5c
    POP EBX                             ; 00460f5d
    RET                                 ; 00460f5e

