; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540(CKeyFramedModelInstance *this_ptr,float animation_frame,int render_flags)
;
; Parameters:
; CKeyFramedModelInstance * Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   animation_frame
; int              Stack[0xc]:4   render_flags
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[43]:
;   core_ammo.cpp_CAmmo_renderOpaque_FUN_0040df20 at 0040dfa4
;   core_ammobox.cpp_CAmmoBox_renderOpaque_FUN_0040e810 at 0040e893
;   core_bat.cpp_CBat_renderOpaque_FUN_0040f200 at 0040f269
;   core_battery.cpp_CBattery_renderOpaque_FUN_0040f590 at 0040f61a
;   core_bodypart.cpp_CBodyPart_renderOpaque_FUN_00414bd0 at 00414cb7
;   core_boxactor.cpp_CBoxActor_renderOpaque_FUN_0041f8e0 at 0041f9a1
;   core_boxactor.cpp_CBoxActor_renderTransparent_FUN_0041f9f0 at 0041fae0
;   core_bugs.cpp_CBugs_renderOpaque_FUN_004215f0 at 0042175d
;   core_charactr.cpp_CCharacter_renderAttachedModels_FUN_0042e3a0 at 0042e48e
;   core_crate.cpp_CCrate_renderOpaque_FUN_00445fa0 at 0044602c
;   ... and 33 more
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00460f20
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0
;   crt_math.c_round_FUN_005a3120
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 00462540
        ;   Label: core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540
    MOV EAX,dword ptr [ESP + 0x8]       ; 00462543
    MOV EDX,dword ptr [ESP + 0x10]      ; 00462547
    FLD float ptr [ESP + 0xc]           ; 0046254b
    PUSH EDX                            ; 0046254f
    CALL crt_math.c_round_FUN_005a3120  ; 00462550
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    PUSH EAX                            ; 00462555
    FISTP dword ptr [ESP + 0x8]         ; 00462556
    MOV ECX,dword ptr [ESP + 0x8]       ; 0046255a
    PUSH ECX                            ; 0046255e
    PUSH EAX                            ; 0046255f
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0 ; 00462560
        ;   XREF to: 004625a0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00462565
    PUSH EAX                            ; 00462568
    CALL core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00460f20 ; 00462569
        ;   XREF to: 00460f20 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00460f20(CKeyFramedModel * this_ptr, int frame_index, CKeyFramedModelInstance * instance, int render_flags)
    ADD ESP,0x10                        ; 0046256e
    ADD ESP,0x4                         ; 00462571
    RET                                 ; 00462574

