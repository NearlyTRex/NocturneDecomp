; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CStylerDemon * __cdecl core_styldemo_cpp_CStylerDemon_ctor_FUN_0059e070(CStylerDemon *this_ptr)
;
; Parameters:
; CStylerDemon *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_styldemo.cpp_factoryFuncStylerDemon_FUN_0059e040 at 0059e053
;
; Referenced Globals:
;   undefined4 DAT_005e84e0
;   undefined4 DAT_005e84e4
;
; Called Functions:
;   core_enemy.cpp_CEnemy_ctor_FUN_00488fd0
;   core_morph.cpp_CMorph_ctor_FUN_004fa8a0
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059e070
        ;   Label: core_styldemo.cpp_CStylerDemon_ctor_FUN_0059e070
    MOV EBX,dword ptr [ESP + 0x8]       ; 0059e071
    PUSH EBX                            ; 0059e075
    CALL core_enemy.cpp_CEnemy_ctor_FUN_00488fd0 ; 0059e076
        ;   XREF to: 00488fd0 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_00488fd0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0059e07b
    ADD EAX,0xd064                      ; 0059e07e
    PUSH EAX                            ; 0059e083
    CALL core_morph.cpp_CMorph_ctor_FUN_004fa8a0 ; 0059e084
        ;   XREF to: 004fa8a0 (UNCONDITIONAL_CALL)  ; CMorph * core_morph.cpp_CMorph_ctor_FUN_004fa8a0(CMorph * this_ptr)
    ADD ESP,0x4                         ; 0059e089
    LEA EBX,[EAX + 0xffff2f9c]          ; 0059e08c
    PUSH 0x5d9f6b                       ; 0059e092
    LEA EAX,[EBX + 0x158]               ; 0059e097
    PUSH EAX                            ; 0059e09d
    MOV dword ptr [EBX + 0x154],0x5e84f4 ; 0059e09e
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0 ; 0059e0a8
        ;   XREF to: 0054eae0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0(CDeformableModelInstance * this_ptr, char * model_name)
    MOV dword ptr [EBX + 0x326c],0x3f19999a ; 0059e0ad
    MOV dword ptr [EBX + 0x3270],0x3f666666 ; 0059e0b7
    MOV dword ptr [EBX + 0xce60],0x41c80000 ; 0059e0c1
    MOV dword ptr [EBX + 0xdc90],0x0    ; 0059e0cb
    MOV dword ptr [EBX + 0xdc94],0x0    ; 0059e0d5
    MOV dword ptr [EBX + 0xdc9c],0x0    ; 0059e0df
    FLD float ptr [0x005e84e0]          ; 0059e0e9 | DAT_005e84e0
    MOV dword ptr [EBX + 0xd060],0x0    ; 0059e0ef
    FLD float ptr [0x005e84e4]          ; 0059e0f9 | DAT_005e84e4
    MOV dword ptr [EBX + 0xd05c],0x0    ; 0059e0ff
    ADD ESP,0x8                         ; 0059e109
    MOV dword ptr [EBX + 0xdca0],0x0    ; 0059e10c
    MOV EAX,EBX                         ; 0059e116
    FXCH                                ; 0059e118
    FSTP float ptr [EBX + 0x3274]       ; 0059e11a
    FSTP float ptr [EBX + 0x3278]       ; 0059e120
    POP EBX                             ; 0059e126
    RET                                 ; 0059e127

