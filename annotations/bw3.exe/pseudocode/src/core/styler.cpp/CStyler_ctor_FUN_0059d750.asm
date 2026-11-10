; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CStyler * core_styler_cpp_CStyler_ctor_FUN_0059d750(CStyler *this_ptr)
;
; Parameters:
; CStyler *        Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_styler.cpp_factoryFuncStyler_FUN_0059d720 at 0059d733
;
; Referenced Globals:
;   undefined4 DAT_005e8348
;   undefined4 DAT_005e834c
;
; Called Functions:
;   core_cloth.cpp_CCloth_ctor_FUN_0043c220
;   core_enemy.cpp_CEnemy_ctor_FUN_00488fd0
;   core_morph.cpp_CMorph_ctor_FUN_004fa8a0
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059d750
        ;   Label: core_styler.cpp_CStyler_ctor_FUN_0059d750
    MOV EBX,dword ptr [ESP + 0x8]       ; 0059d751
    PUSH EBX                            ; 0059d755
    CALL core_enemy.cpp_CEnemy_ctor_FUN_00488fd0 ; 0059d756
        ;   XREF to: 00488fd0 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_00488fd0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0059d75b
    ADD EAX,0xd054                      ; 0059d75e
    PUSH EAX                            ; 0059d763
    CALL core_cloth.cpp_CCloth_ctor_FUN_0043c220 ; 0059d764
        ;   XREF to: 0043c220 (UNCONDITIONAL_CALL)  ; CCloth * core_cloth.cpp_CCloth_ctor_FUN_0043c220(CCloth * this_ptr)
    ADD ESP,0x4                         ; 0059d769
    ADD EAX,0x3ab44                     ; 0059d76c
    PUSH EAX                            ; 0059d771
    CALL core_morph.cpp_CMorph_ctor_FUN_004fa8a0 ; 0059d772
        ;   XREF to: 004fa8a0 (UNCONDITIONAL_CALL)  ; CMorph * core_morph.cpp_CMorph_ctor_FUN_004fa8a0(CMorph * this_ptr)
    ADD ESP,0x4                         ; 0059d777
    LEA EBX,[EAX + 0xfffb8468]          ; 0059d77a
    PUSH 0x5d9ea1                       ; 0059d780
    LEA EAX,[EBX + 0x158]               ; 0059d785
    PUSH EAX                            ; 0059d78b
    MOV dword ptr [EBX + 0x154],0x5e8354 ; 0059d78c
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0 ; 0059d796
        ;   XREF to: 0054eae0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0(CDeformableModelInstance * this_ptr, char * model_name)
    MOV dword ptr [EBX + 0x326c],0x3f400000 ; 0059d79b
    MOV dword ptr [EBX + 0x3270],0x3fc00000 ; 0059d7a5
    FLD float ptr [0x005e8348]          ; 0059d7af | DAT_005e8348
    MOV dword ptr [EBX + 0x47b8c],0x0   ; 0059d7b5
    FLD float ptr [0x005e834c]          ; 0059d7bf | DAT_005e834c
    MOV dword ptr [EBX + 0x47b94],0x0   ; 0059d7c5
    ADD ESP,0x8                         ; 0059d7cf
    MOV dword ptr [EBX + 0x47b90],0x0   ; 0059d7d2
    MOV EAX,EBX                         ; 0059d7dc
    FXCH                                ; 0059d7de
    FSTP float ptr [EBX + 0x3274]       ; 0059d7e0
    FSTP float ptr [EBX + 0x3278]       ; 0059d7e6
    POP EBX                             ; 0059d7ec
    RET                                 ; 0059d7ed

