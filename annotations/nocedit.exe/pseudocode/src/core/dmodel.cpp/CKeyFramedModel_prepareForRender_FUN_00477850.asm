; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00477850(CKeyFramedModel * this_ptr, CKeyFramedModelInstance * instance, int frame_index, int render_flags)
;
; Parameters:
; CKeyFramedModel * Stack[0x4]:4   this_ptr
; CKeyFramedModelInstance * Stack[0x8]:4   instance
; int              Stack[0xc]:4   frame_index
; int              Stack[0x10]:4   render_flags
;
; XREF[11]:
;   core_course.cpp_FUN_00443bc0 at 00443f18
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20 at 00478d49
;   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 at 0047cddb
;   core_fire.cpp_CBulletTrail_render_FUN_004c21f0 at 004c23ed
;   core_fire.cpp_CRock_render_FUN_004c1870 at 004c192b
;   core_fire.cpp_CShell_render_FUN_004c6200 at 004c62dd
;   core_level.cpp_CLevelLoader_update_FUN_00504160 at 00504580
;   core_moon.cpp_CMoon_renderJoystickCalibration_FUN_0052a2c0 at 0052a3c2
;   core_moon.cpp_CMoon_render_FUN_00529ed0 at 00529fbf
;   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190 at 0056a29f
;   ... and 1 more
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_rotateAndLightVertices_FUN_004778d0
;   core_dmodel.cpp_CKeyFramedModel_submitToRenderer_FUN_00477980
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00477850
        ;   Label: core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00477850
    PUSH EBP                            ; 00477851
    MOV EBX,dword ptr [ESP + 0xc]       ; 00477852
    CMP dword ptr [EBX + 0x110],0x1     ; 00477856
    JGE 0x00477862                      ; 0047785d
        ;   XREF to: 00477862 (CONDITIONAL_JUMP)  ; LAB_00477862
    POP EBP                             ; 0047785f
    POP EBX                             ; 00477860
    RET                                 ; 00477861
    PUSH EDI                            ; 00477862
        ;   Label: LAB_00477862
    PUSH ESI                            ; 00477863
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00477864
    PUSH ECX                            ; 00477868
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00477869
    PUSH ESI                            ; 0047786d
    PUSH EBX                            ; 0047786e
    CALL core_dmodel.cpp_CKeyFramedModel_rotateAndLightVertices_FUN_004778d0 ; 0047786f
        ;   XREF to: 004778d0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_rotateAndLightVertices_FUN_004778d0(CKeyFramedModel * this_ptr, CKeyFramedModelInstance * instance, int frame_index)
    ADD ESP,0xc                         ; 00477874
    MOV EDI,dword ptr [ESP + 0x20]      ; 00477877
    PUSH EDI                            ; 0047787b
    MOV EBP,dword ptr [ESP + 0x20]      ; 0047787c
    PUSH EBP                            ; 00477880
    PUSH EBX                            ; 00477881
    CALL core_dmodel.cpp_CKeyFramedModel_submitToRenderer_FUN_00477980 ; 00477882
        ;   XREF to: 00477980 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_submitToRenderer_FUN_00477980(CKeyFramedModel * this_ptr, int frame_index, int render_flags, CKeyFramedModelInstance * instance)
    ADD ESP,0xc                         ; 00477887
    POP ESI                             ; 0047788a
    POP EDI                             ; 0047788b
    POP EBP                             ; 0047788c
    POP EBX                             ; 0047788d
    RET                                 ; 0047788e

