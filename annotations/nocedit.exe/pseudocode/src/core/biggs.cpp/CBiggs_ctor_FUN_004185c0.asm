; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CBiggs * core_biggs.cpp_CBiggs_ctor_FUN_004185c0(CBiggs * this_ptr)
;
; Parameters:
; CBiggs *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_biggs.cpp_constructor_FUN_00418580 at 0041859a
;
; Referenced Globals:
;   TerminatedCString s_biggs_dfm_00615aba
;   TerminatedCString s_question_kfm_00615ac4
;   TerminatedCString s_bigAlien_00615ad1
;   undefined4 s_igAlien_00615ad2
;   undefined4 s_gAlien_00615ad3
;   undefined4 s_Alien_00615ad4
;   float FLOAT_0065ac08 = 50
;   float FLOAT_0065ac0c = 100
;   CDemonActor_vtable g_CBiggsVTable
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
;   core_enemy.cpp_CEnemy_ctor_FUN_004a9500
;   core_morph.cpp_FUN_0052b310
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004185c0
        ;   Label: core_biggs.cpp_CBiggs_ctor_FUN_004185c0
    PUSH ESI                            ; 004185c1
    PUSH EDI                            ; 004185c2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004185c3
    PUSH EBX                            ; 004185c7
    CALL core_enemy.cpp_CEnemy_ctor_FUN_004a9500 ; 004185c8
        ;   XREF to: 004a9500 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_004a9500(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 004185cd
    ADD EAX,0xbebc                      ; 004185d0
    PUSH EAX                            ; 004185d5
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0 ; 004185d6
        ;   XREF to: 00478ce0 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004185db
    ADD EAX,0x184                       ; 004185de
    PUSH EAX                            ; 004185e3
    CALL core_morph.cpp_FUN_0052b310    ; 004185e4
        ;   XREF to: 0052b310 (UNCONDITIONAL_CALL)  ; undefined core_morph.cpp_FUN_0052b310()
    ADD ESP,0x4                         ; 004185e9
    LEA EBX,[EAX + 0xffff3fc0]          ; 004185ec
    PUSH 0x615aba                       ; 004185f2 | = "biggs.dfm"
    LEA EAX,[EBX + 0x158]               ; 004185f7
    PUSH EAX                            ; 004185fd
    MOV dword ptr [EBX + 0x154],0x65ac24 ; 004185fe | g_CBiggsVTable
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840 ; 00418608
        ;   XREF to: 005a0840 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 0041860d
    PUSH 0x615ac4                       ; 00418610 | = "question.kfm"
    LEA EAX,[EBX + 0xbebc]              ; 00418615
    PUSH EAX                            ; 0041861b
    MOV ESI,0x615ad1                    ; 0041861c | = "bigAlien"
    LEA EDI,[EBX + 0xcc6c]              ; 00418621
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 00418627
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
    FLD float ptr [0x0065ac08]          ; 0041862c | FLOAT_0065ac08
    MOV dword ptr [EBX + 0x2ddc],0x3f19999a ; 00418632
    FLD float ptr [0x0065ac0c]          ; 0041863c | FLOAT_0065ac0c
    MOV dword ptr [EBX + 0x2de0],0x3f666666 ; 00418642
    ADD ESP,0x8                         ; 0041864c
    FXCH                                ; 0041864f
    FSTP float ptr [EBX + 0x2de4]       ; 00418651
    FSTP float ptr [EBX + 0x2de8]       ; 00418657
    PUSH EDI                            ; 0041865d
    MOV AL,byte ptr [ESI]               ; 0041865e | = "bigAlien" | s_gAlien_00615ad3
        ;   Label: LAB_0041865e
    MOV byte ptr [EDI],AL               ; 00418660
    CMP AL,0x0                          ; 00418662
    JZ 0x00418676                       ; 00418664
        ;   XREF to: 00418676 (CONDITIONAL_JUMP)  ; LAB_00418676
    MOV AL,byte ptr [ESI + 0x1]         ; 00418666 | s_igAlien_00615ad2 | s_Alien_00615ad4
    ADD ESI,0x2                         ; 00418669
    MOV byte ptr [EDI + 0x1],AL         ; 0041866c
    ADD EDI,0x2                         ; 0041866f
    CMP AL,0x0                          ; 00418672
    JNZ 0x0041865e                      ; 00418674
        ;   XREF to: 0041865e (CONDITIONAL_JUMP)  ; LAB_0041865e
    POP EDI                             ; 00418676
        ;   Label: LAB_00418676
    MOV EAX,EBX                         ; 00418677
    POP EDI                             ; 00418679
    POP ESI                             ; 0041867a
    POP EBX                             ; 0041867b
    RET                                 ; 0041867c

