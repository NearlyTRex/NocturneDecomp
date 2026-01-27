; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CBride * core_bride.cpp_CBride_ctor_FUN_004237a0(CBride * this_ptr)
;
; Parameters:
; CBride *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_bride.cpp_factoryFunc_FUN_00423760 at 0042377a
;
; Referenced Globals:
;   TerminatedCString s_bride_dfm_00616ab6
;   float FLOAT_0065b410 = 50
;   float FLOAT_0065b414 = 100
;   CDemonActor_vtable g_CBrideVTable
;
; Called Functions:
;   core_enemy.cpp_CEnemy_ctor_FUN_004a9500
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004237a0
        ;   Label: core_bride.cpp_CBride_ctor_FUN_004237a0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004237a1
    PUSH EDX                            ; 004237a5
    CALL core_enemy.cpp_CEnemy_ctor_FUN_004a9500 ; 004237a6
        ;   XREF to: 004a9500 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_004a9500(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 004237ab
    PUSH 0x616ab6                       ; 004237ae | = "bride.dfm"
    MOV EBX,EAX                         ; 004237b3
    ADD EAX,0x158                       ; 004237b5
    PUSH EAX                            ; 004237ba
    MOV dword ptr [EAX + -0x4],0x65b424 ; 004237bb | g_CBrideVTable
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840 ; 004237c2
        ;   XREF to: 005a0840 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840(CDeformableModelInstance * this_ptr, char * model_name)
    FLD float ptr [0x0065b410]          ; 004237c7 | FLOAT_0065b410
    MOV dword ptr [EBX + 0x2ddc],0x3f400000 ; 004237cd
    FLD float ptr [0x0065b414]          ; 004237d7 | FLOAT_0065b414
    MOV dword ptr [EBX + 0x2de0],0x3fc00000 ; 004237dd
    ADD ESP,0x8                         ; 004237e7
    MOV dword ptr [EBX + 0xbee0],0x0    ; 004237ea
    MOV EAX,EBX                         ; 004237f4
    FXCH                                ; 004237f6
    FSTP float ptr [EBX + 0x2de4]       ; 004237f8
    FSTP float ptr [EBX + 0x2de8]       ; 004237fe
    POP EBX                             ; 00423804
    RET                                 ; 00423805

