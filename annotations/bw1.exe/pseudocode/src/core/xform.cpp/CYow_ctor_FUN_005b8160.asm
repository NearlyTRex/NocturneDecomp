; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CYow * core_xform_cpp_CYow_ctor_FUN_005b8160(CYow *this_ptr)
;
; Parameters:
; CYow *           Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_yow.cpp_factoryFuncYow_FUN_005b8130 at 005b8143
;
; Referenced Globals:
;   undefined4 DAT_00608210
;   undefined4 DAT_00608214
;
; Called Functions:
;   core_enemy.cpp_CEnemy_ctor_FUN_004a0410
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b8160
        ;   Label: core_xform.cpp_CYow_ctor_FUN_005b8160
    MOV EDX,dword ptr [ESP + 0x8]       ; 005b8161
    PUSH EDX                            ; 005b8165
    CALL core_enemy.cpp_CEnemy_ctor_FUN_004a0410 ; 005b8166
        ;   XREF to: 004a0410 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_004a0410(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 005b816b
    PUSH 0x5fa1c9                       ; 005b816e
    MOV EBX,EAX                         ; 005b8173
    ADD EAX,0x158                       ; 005b8175
    PUSH EAX                            ; 005b817a
    MOV dword ptr [EAX + -0x4],0x608224 ; 005b817b
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50 ; 005b8182
        ;   XREF to: 00569f50 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50(CDeformableModelInstance * this_ptr, char * model_name)
    FLD float ptr [0x00608210]          ; 005b8187 | DAT_00608210
    MOV dword ptr [EBX + 0x2fec],0x3f400000 ; 005b818d
    FLD float ptr [0x00608214]          ; 005b8197 | DAT_00608214
    MOV dword ptr [EBX + 0x2ff0],0x3fc00000 ; 005b819d
    ADD ESP,0x8                         ; 005b81a7
    MOV dword ptr [EBX + 0xc2b0],0x0    ; 005b81aa
    MOV EAX,EBX                         ; 005b81b4
    FXCH                                ; 005b81b6
    FSTP float ptr [EBX + 0x2ff4]       ; 005b81b8
    FSTP float ptr [EBX + 0x2ff8]       ; 005b81be
    POP EBX                             ; 005b81c4
    RET                                 ; 005b81c5

