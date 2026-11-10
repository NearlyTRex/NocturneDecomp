; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_biggs_cpp_CBiggs_setup_FUN_00414ab0(CBiggs *this_ptr)
;
; Parameters:
; CBiggs *         Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0
;   core_enemy.cpp_CEnemy_setup_FUN_004a0510
;   core_morph.cpp_CMorph_getReady_FUN_00523310
;   core_morph.cpp_CMorph_setupModelFromDeformable_FUN_005230c0
;   core_morph.cpp_CMorph_setupModelFromKeyframed_FUN_00523100
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00569b20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00414ab0
        ;   Label: core_biggs.cpp_CBiggs_setup_FUN_00414ab0
    PUSH ESI                            ; 00414ab1
    PUSH EDI                            ; 00414ab2
    MOV EBX,dword ptr [ESP + 0x10]      ; 00414ab3
    PUSH EBX                            ; 00414ab7
    CALL core_enemy.cpp_CEnemy_setup_FUN_004a0510 ; 00414ab8
        ;   XREF to: 004a0510 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_004a0510(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 00414abd
    LEA ESI,[EBX + 0x158]               ; 00414ac0
    PUSH ESI                            ; 00414ac6
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00569b20 ; 00414ac7
        ;   XREF to: 00569b20 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00569b20(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00414acc
    LEA EDI,[EBX + 0xc268]              ; 00414acf
    PUSH EDI                            ; 00414ad5
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0 ; 00414ad6
        ;   XREF to: 004688e0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00414adb
    PUSH ESI                            ; 00414ade
    PUSH 0x0                            ; 00414adf
    LEA ESI,[EBX + 0xc3ec]              ; 00414ae1
    PUSH ESI                            ; 00414ae7
    CALL core_morph.cpp_CMorph_setupModelFromDeformable_FUN_005230c0 ; 00414ae8
        ;   XREF to: 005230c0 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_setupModelFromDeformable_FUN_005230c0(CMorph * this_ptr, int model_index, CDeformableModelInstance * model_ptr)
    ADD ESP,0xc                         ; 00414aed
    PUSH 0x0                            ; 00414af0
    PUSH EDI                            ; 00414af2
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900 ; 00414af3
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00414af8
    PUSH EAX                            ; 00414afb
    PUSH 0x1                            ; 00414afc
    PUSH ESI                            ; 00414afe
    CALL core_morph.cpp_CMorph_setupModelFromKeyframed_FUN_00523100 ; 00414aff
        ;   XREF to: 00523100 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_setupModelFromKeyframed_FUN_00523100(CMorph * this_ptr, int model_index, CKeyFramedModel * model_ptr, int frame_index)
    ADD ESP,0x10                        ; 00414b04
    PUSH ESI                            ; 00414b07
    CALL core_morph.cpp_CMorph_getReady_FUN_00523310 ; 00414b08
        ;   XREF to: 00523310 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_getReady_FUN_00523310(CMorph * this_ptr)
    MOV dword ptr [EBX + 0xc3e4],0x0    ; 00414b0d
    ADD ESP,0x4                         ; 00414b17
    MOV dword ptr [EBX + 0xc3e8],0x0    ; 00414b1a
    POP EDI                             ; 00414b24
    POP ESI                             ; 00414b25
    POP EBX                             ; 00414b26
    RET                                 ; 00414b27

