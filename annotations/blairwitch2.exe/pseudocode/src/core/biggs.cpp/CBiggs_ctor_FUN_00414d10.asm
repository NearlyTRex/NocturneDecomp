; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBiggs * __cdecl core_biggs_cpp_CBiggs_ctor_FUN_00414d10(CBiggs *this_ptr)
;
; Parameters:
; CBiggs *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_biggs.cpp_factoryFuncBiggs_FUN_00414ce0 at 00414cf3
;
; Referenced Globals:
;   undefined4 DAT_005f3508
;   undefined4 DAT_005f350c
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
;   core_enemy.cpp_CEnemy_ctor_FUN_00487db0
;   core_morph.cpp_CMorph_ctor_FUN_005b6e60
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00414d10
        ;   Label: core_biggs.cpp_CBiggs_ctor_FUN_00414d10
    PUSH ESI                            ; 00414d11
    PUSH EDI                            ; 00414d12
    MOV EBX,dword ptr [ESP + 0x10]      ; 00414d13
    PUSH EBX                            ; 00414d17
    CALL core_enemy.cpp_CEnemy_ctor_FUN_00487db0 ; 00414d18
        ;   XREF to: 00487db0 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_00487db0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 00414d1d
    ADD EAX,0x10af8                     ; 00414d20
    PUSH EAX                            ; 00414d25
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80 ; 00414d26
        ;   XREF to: 0044fc80 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00414d2b
    ADD EAX,0x184                       ; 00414d2e
    PUSH EAX                            ; 00414d33
    CALL core_morph.cpp_CMorph_ctor_FUN_005b6e60 ; 00414d34
        ;   XREF to: 005b6e60 (UNCONDITIONAL_CALL)  ; CMorph * core_morph.cpp_CMorph_ctor_FUN_005b6e60(CMorph * this_ptr)
    ADD ESP,0x4                         ; 00414d39
    LEA EBX,[EAX + 0xfffef384]          ; 00414d3c
    PUSH 0x5cbc8c                       ; 00414d42
    LEA EAX,[EBX + 0x2b4]               ; 00414d47
    PUSH EAX                            ; 00414d4d
    MOV dword ptr [EBX + 0x2b0],0x5f3524 ; 00414d4e
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0 ; 00414d58
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 00414d5d
    PUSH 0x5cbc96                       ; 00414d60
    LEA EAX,[EBX + 0x10af8]             ; 00414d65
    PUSH EAX                            ; 00414d6b
    MOV ESI,0x5cbca3                    ; 00414d6c
    LEA EDI,[EBX + 0x118a8]             ; 00414d71
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70 ; 00414d77
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70(CKeyFramedModelInstance * this_ptr, char * filename)
    FLD float ptr [0x005f3508]          ; 00414d7c | DAT_005f3508
    MOV dword ptr [EBX + 0x3430],0x3f19999a ; 00414d82
    FLD float ptr [0x005f350c]          ; 00414d8c | DAT_005f350c
    MOV dword ptr [EBX + 0x3434],0x3f666666 ; 00414d92
    ADD ESP,0x8                         ; 00414d9c
    FXCH                                ; 00414d9f
    FSTP float ptr [EBX + 0x3438]       ; 00414da1
    FSTP float ptr [EBX + 0x343c]       ; 00414da7
    PUSH EDI                            ; 00414dad
    MOV AL,byte ptr [ESI]               ; 00414dae
        ;   Label: LAB_00414dae
    MOV byte ptr [EDI],AL               ; 00414db0
    CMP AL,0x0                          ; 00414db2
    JZ 0x00414dc6                       ; 00414db4
        ;   XREF to: 00414dc6 (CONDITIONAL_JUMP)  ; LAB_00414dc6
    MOV AL,byte ptr [ESI + 0x1]         ; 00414db6
    ADD ESI,0x2                         ; 00414db9
    MOV byte ptr [EDI + 0x1],AL         ; 00414dbc
    ADD EDI,0x2                         ; 00414dbf
    CMP AL,0x0                          ; 00414dc2
    JNZ 0x00414dae                      ; 00414dc4
        ;   XREF to: 00414dae (CONDITIONAL_JUMP)  ; LAB_00414dae
    POP EDI                             ; 00414dc6
        ;   Label: LAB_00414dc6
    MOV EAX,EBX                         ; 00414dc7
    POP EDI                             ; 00414dc9
    POP ESI                             ; 00414dca
    POP EBX                             ; 00414dcb
    RET                                 ; 00414dcc

