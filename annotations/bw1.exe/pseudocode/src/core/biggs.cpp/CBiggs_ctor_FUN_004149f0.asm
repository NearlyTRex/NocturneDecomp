; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBiggs * __cdecl core_biggs_cpp_CBiggs_ctor_FUN_004149f0(CBiggs *this_ptr)
;
; Parameters:
; CBiggs *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_biggs.cpp_factoryFuncBiggs_FUN_004149c0 at 004149d3
;
; Referenced Globals:
;   undefined4 DAT_005fc5b8
;   undefined4 DAT_005fc5bc
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
;   core_enemy.cpp_CEnemy_ctor_FUN_004a0410
;   core_morph.cpp_CMorph_ctor_FUN_00522fa0
;   core_skeleton.cpp_FUN_00569f50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004149f0
        ;   Label: core_biggs.cpp_CBiggs_ctor_FUN_004149f0
    PUSH ESI                            ; 004149f1
    PUSH EDI                            ; 004149f2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004149f3
    PUSH EBX                            ; 004149f7
    CALL core_enemy.cpp_CEnemy_ctor_FUN_004a0410 ; 004149f8
        ;   XREF to: 004a0410 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_004a0410(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 004149fd
    ADD EAX,0xc268                      ; 00414a00
    PUSH EAX                            ; 00414a05
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860 ; 00414a06
        ;   XREF to: 00468860 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00414a0b
    ADD EAX,0x184                       ; 00414a0e
    PUSH EAX                            ; 00414a13
    CALL core_morph.cpp_CMorph_ctor_FUN_00522fa0 ; 00414a14
        ;   XREF to: 00522fa0 (UNCONDITIONAL_CALL)  ; CMorph * core_morph.cpp_CMorph_ctor_FUN_00522fa0(CMorph * this_ptr)
    ADD ESP,0x4                         ; 00414a19
    LEA EBX,[EAX + 0xffff3c14]          ; 00414a1c
    PUSH 0x5d3c07                       ; 00414a22
    LEA EAX,[EBX + 0x158]               ; 00414a27
    PUSH EAX                            ; 00414a2d
    MOV dword ptr [EBX + 0x154],0x5fc5d4 ; 00414a2e
    CALL core_skeleton.cpp_FUN_00569f50 ; 00414a38
        ;   XREF to: 00569f50 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569f50()
    ADD ESP,0x8                         ; 00414a3d
    PUSH 0x5d3c11                       ; 00414a40
    LEA EAX,[EBX + 0xc268]              ; 00414a45
    PUSH EAX                            ; 00414a4b
    MOV ESI,0x5d3c1e                    ; 00414a4c
    LEA EDI,[EBX + 0xd018]              ; 00414a51
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950 ; 00414a57
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00468950(CKeyFramedModelInstance * this_ptr, char * filename)
    FLD float ptr [0x005fc5b8]          ; 00414a5c | DAT_005fc5b8
    MOV dword ptr [EBX + 0x2fec],0x3f19999a ; 00414a62
    FLD float ptr [0x005fc5bc]          ; 00414a6c | DAT_005fc5bc
    MOV dword ptr [EBX + 0x2ff0],0x3f666666 ; 00414a72
    ADD ESP,0x8                         ; 00414a7c
    FXCH                                ; 00414a7f
    FSTP float ptr [EBX + 0x2ff4]       ; 00414a81
    FSTP float ptr [EBX + 0x2ff8]       ; 00414a87
    PUSH EDI                            ; 00414a8d
    MOV AL,byte ptr [ESI]               ; 00414a8e
        ;   Label: LAB_00414a8e
    MOV byte ptr [EDI],AL               ; 00414a90
    CMP AL,0x0                          ; 00414a92
    JZ 0x00414aa6                       ; 00414a94
        ;   XREF to: 00414aa6 (CONDITIONAL_JUMP)  ; LAB_00414aa6
    MOV AL,byte ptr [ESI + 0x1]         ; 00414a96
    ADD ESI,0x2                         ; 00414a99
    MOV byte ptr [EDI + 0x1],AL         ; 00414a9c
    ADD EDI,0x2                         ; 00414a9f
    CMP AL,0x0                          ; 00414aa2
    JNZ 0x00414a8e                      ; 00414aa4
        ;   XREF to: 00414a8e (CONDITIONAL_JUMP)  ; LAB_00414a8e
    POP EDI                             ; 00414aa6
        ;   Label: LAB_00414aa6
    MOV EAX,EBX                         ; 00414aa7
    POP EDI                             ; 00414aa9
    POP ESI                             ; 00414aaa
    POP EBX                             ; 00414aab
    RET                                 ; 00414aac

