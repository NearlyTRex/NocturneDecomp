; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_biggs_cpp_CBiggs_ctor_FUN_00415370(undefined4 param_1)
;
;
; XREF[1]:
;   core_biggs.cpp_FUN_00415340 at 00415353
;
; Referenced Globals:
;   TerminatedCString s_biggs_dfm_00578dcd
;   TerminatedCString s_question_kfm_00578dd7
;   TerminatedCString s_bigAlien_00578de4
;   undefined4 s_igAlien_00578de4+1
;   undefined4 s_gAlien_00578de4+2
;   undefined4 s_Alien_00578de4+3
;   float FLOAT_0059a598 = 50
;   float FLOAT_0059a59c = 100
;   undefined1* PTR_core_biggs.cpp_FUN_00415430_0059a5b4 = 00415430
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
;   core_enemy.cpp_CEnemy_ctor_FUN_00479560
;   core_morph.cpp_CMorph_ctor_FUN_004e0050
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00415370
        ;   Label: core_biggs.cpp_CBiggs_ctor_FUN_00415370
    PUSH ESI                            ; 00415371
    PUSH EDI                            ; 00415372
    MOV EBX,dword ptr [ESP + 0x10]      ; 00415373
    PUSH EBX                            ; 00415377
    CALL core_enemy.cpp_CEnemy_ctor_FUN_00479560 ; 00415378
        ;   XREF to: 00479560 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_CEnemy_ctor_FUN_00479560()
    ADD ESP,0x4                         ; 0041537d
    ADD EAX,0xbd24                      ; 00415380
    PUSH EAX                            ; 00415385
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490 ; 00415386
        ;   XREF to: 00454490 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490()
    ADD ESP,0x4                         ; 0041538b
    ADD EAX,0x184                       ; 0041538e
    PUSH EAX                            ; 00415393
    CALL core_morph.cpp_CMorph_ctor_FUN_004e0050 ; 00415394
        ;   XREF to: 004e0050 (UNCONDITIONAL_CALL)  ; undefined core_morph.cpp_CMorph_ctor_FUN_004e0050()
    ADD ESP,0x4                         ; 00415399
    LEA EBX,[EAX + 0xffff4158]          ; 0041539c
    PUSH 0x578dcd                       ; 004153a2 | = "biggs.dfm"
    LEA EAX,[EBX + 0x150]               ; 004153a7
    PUSH EAX                            ; 004153ad
    MOV dword ptr [EBX + 0x14c],0x59a5b4 ; 004153ae | PTR_core_biggs.cpp_FUN_00415430_0059a5b4
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0 ; 004153b8
        ;   XREF to: 0051e0c0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0()
    ADD ESP,0x8                         ; 004153bd
    PUSH 0x578dd7                       ; 004153c0 | = "question.kfm"
    LEA EAX,[EBX + 0xbd24]              ; 004153c5
    PUSH EAX                            ; 004153cb
    MOV ESI,0x578de4                    ; 004153cc | = "bigAlien"
    LEA EDI,[EBX + 0xcad4]              ; 004153d1
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580 ; 004153d7
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580()
    FLD float ptr [0x0059a598]          ; 004153dc | FLOAT_0059a598
    MOV dword ptr [EBX + 0x2dd4],0x3f19999a ; 004153e2
    FLD float ptr [0x0059a59c]          ; 004153ec | FLOAT_0059a59c
    MOV dword ptr [EBX + 0x2dd8],0x3f666666 ; 004153f2
    ADD ESP,0x8                         ; 004153fc
    FXCH                                ; 004153ff
    FSTP float ptr [EBX + 0x2ddc]       ; 00415401
    FSTP float ptr [EBX + 0x2de0]       ; 00415407
    PUSH EDI                            ; 0041540d
    MOV AL,byte ptr [ESI]               ; 0041540e | = "bigAlien" | s_gAlien_00578de4+2
        ;   Label: LAB_0041540e
    MOV byte ptr [EDI],AL               ; 00415410
    CMP AL,0x0                          ; 00415412
    JZ 0x00415426                       ; 00415414
        ;   XREF to: 00415426 (CONDITIONAL_JUMP)  ; LAB_00415426
    MOV AL,byte ptr [ESI + 0x1]         ; 00415416 | s_igAlien_00578de4+1 | s_Alien_00578de4+3
    ADD ESI,0x2                         ; 00415419
    MOV byte ptr [EDI + 0x1],AL         ; 0041541c
    ADD EDI,0x2                         ; 0041541f
    CMP AL,0x0                          ; 00415422
    JNZ 0x0041540e                      ; 00415424
        ;   XREF to: 0041540e (CONDITIONAL_JUMP)  ; LAB_0041540e
    POP EDI                             ; 00415426
        ;   Label: LAB_00415426
    MOV EAX,EBX                         ; 00415427
    POP EDI                             ; 00415429
    POP ESI                             ; 0041542a
    POP EBX                             ; 0041542b
    RET                                 ; 0041542c

