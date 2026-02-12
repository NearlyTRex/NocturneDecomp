; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_biggs_cpp_CBiggs_setup_FUN_00418680(CBiggs *this_ptr)
;
; Parameters:
; CBiggs *         Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
;   core_enemy.cpp_CEnemy_setup_FUN_004a9650
;   core_morph.cpp_CMorph_FUN_0052b430
;   core_morph.cpp_CMorph_FUN_0052b470
;   core_morph.cpp_CMorph_getReady_FUN_0052b680
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00418680
        ;   Label: core_biggs.cpp_CBiggs_setup_FUN_00418680
    PUSH ESI                            ; 00418681
    PUSH EDI                            ; 00418682
    MOV EBX,dword ptr [ESP + 0x10]      ; 00418683
    PUSH EBX                            ; 00418687
    CALL core_enemy.cpp_CEnemy_setup_FUN_004a9650 ; 00418688
        ;   XREF to: 004a9650 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_004a9650(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0041868d
    LEA ESI,[EBX + 0x158]               ; 00418690
    PUSH ESI                            ; 00418696
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450 ; 00418697
        ;   XREF to: 005a0450 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0041869c
    LEA EDI,[EBX + 0xbebc]              ; 0041869f
    PUSH EDI                            ; 004186a5
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60 ; 004186a6
        ;   XREF to: 00478d60 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004186ab
    PUSH ESI                            ; 004186ae
    PUSH 0x0                            ; 004186af
    LEA ESI,[EBX + 0xc040]              ; 004186b1
    PUSH ESI                            ; 004186b7
    CALL core_morph.cpp_CMorph_FUN_0052b430 ; 004186b8
        ;   XREF to: 0052b430 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_FUN_0052b430(CMorph * this_ptr, int model_index)
    ADD ESP,0xc                         ; 004186bd
    PUSH 0x0                            ; 004186c0
    PUSH EDI                            ; 004186c2
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 004186c3
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004186c8
    PUSH EAX                            ; 004186cb
    PUSH 0x1                            ; 004186cc
    PUSH ESI                            ; 004186ce
    CALL core_morph.cpp_CMorph_FUN_0052b470 ; 004186cf
        ;   XREF to: 0052b470 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_FUN_0052b470(CMorph * this_ptr, int model_index, CKeyFramedModel * model_ptr, int frame_index)
    ADD ESP,0x10                        ; 004186d4
    PUSH ESI                            ; 004186d7
    CALL core_morph.cpp_CMorph_getReady_FUN_0052b680 ; 004186d8
        ;   XREF to: 0052b680 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorph_getReady_FUN_0052b680(CMorph * this_ptr)
    MOV dword ptr [EBX + 0xc038],0x0    ; 004186dd
    ADD ESP,0x4                         ; 004186e7
    MOV dword ptr [EBX + 0xc03c],0x0    ; 004186ea
    POP EDI                             ; 004186f4
    POP ESI                             ; 004186f5
    POP EBX                             ; 004186f6
    RET                                 ; 004186f7

