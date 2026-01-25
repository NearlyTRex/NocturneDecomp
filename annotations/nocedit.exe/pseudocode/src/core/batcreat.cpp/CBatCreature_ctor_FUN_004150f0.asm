; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CBatCreature * core_batcreat.cpp_CBatCreature_ctor_FUN_004150f0(CBatCreature * this_ptr)
;
; Parameters:
; CBatCreature *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_batcreat.cpp_constructor_FUN_004150b0 at 004150ca
;
; Referenced Globals:
;   TerminatedCString s_batcreat_dfm_0061546b
;   float FLOAT_0065a5b0 = 50
;   float FLOAT_0065a5b4 = 100
;   CDemonActor_vtable g_CBatCreatureVTable
;
; Called Functions:
;   core_enemy.cpp_CEnemy_ctor_FUN_004a9500
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004150f0
        ;   Label: core_batcreat.cpp_CBatCreature_ctor_FUN_004150f0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004150f1
    PUSH EDX                            ; 004150f5
    CALL core_enemy.cpp_CEnemy_ctor_FUN_004a9500 ; 004150f6
        ;   XREF to: 004a9500 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_004a9500(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 004150fb
    PUSH 0x61546b                       ; 004150fe | = "batcreat.dfm"
    MOV EBX,EAX                         ; 00415103
    ADD EAX,0x158                       ; 00415105
    PUSH EAX                            ; 0041510a
    MOV dword ptr [EAX + -0x4],0x65a5c4 ; 0041510b | g_CBatCreatureVTable
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840 ; 00415112
        ;   XREF to: 005a0840 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840(CDeformableModelInstance * this_ptr, char * model_name)
    FLD float ptr [0x0065a5b0]          ; 00415117 | FLOAT_0065a5b0
    FLD float ptr [0x0065a5b4]          ; 0041511d | FLOAT_0065a5b4
    MOV dword ptr [EBX + 0x2ddc],0x3f19999a ; 00415123
    ADD ESP,0x8                         ; 0041512d
    MOV dword ptr [EBX + 0x2de0],0x3fc00000 ; 00415130
    MOV EAX,EBX                         ; 0041513a
    FXCH                                ; 0041513c
    FSTP float ptr [EBX + 0x2de4]       ; 0041513e
    FSTP float ptr [EBX + 0x2de8]       ; 00415144
    POP EBX                             ; 0041514a
    RET                                 ; 0041514b

