; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CZombieCow * __cdecl core_cow_cpp_CZombieCow_ctor_FUN_00444140(CZombieCow *this_ptr)
;
; Parameters:
; CZombieCow *     Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_cow.cpp_factoryFunc_FUN_00444100 at 0044411a
;
; Referenced Globals:
;   TerminatedCString s_cow_dfm_00619470
;   float FLOAT_0065c09c = 50
;   float FLOAT_0065c0a0 = 100
;   CEnemy_full_vtable g_CZombieCowVTable
;
; Called Functions:
;   core_enemy.cpp_CEnemy_ctor_FUN_004a9500
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00444140
        ;   Label: core_cow.cpp_CZombieCow_ctor_FUN_00444140
    MOV EDX,dword ptr [ESP + 0x8]       ; 00444141
    PUSH EDX                            ; 00444145
    CALL core_enemy.cpp_CEnemy_ctor_FUN_004a9500 ; 00444146
        ;   XREF to: 004a9500 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_004a9500(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0044414b
    PUSH 0x619470                       ; 0044414e | = "cow.dfm"
    MOV EBX,EAX                         ; 00444153
    ADD EAX,0x158                       ; 00444155
    PUSH EAX                            ; 0044415a
    MOV dword ptr [EAX + -0x4],0x65c0b4 ; 0044415b | g_CZombieCowVTable
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840 ; 00444162
        ;   XREF to: 005a0840 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840(CDeformableModelInstance * this_ptr, char * model_name)
    FLD float ptr [0x0065c09c]          ; 00444167 | FLOAT_0065c09c
    MOV dword ptr [EBX + 0x2ddc],0x3fe00000 ; 0044416d
    FLD float ptr [0x0065c0a0]          ; 00444177 | FLOAT_0065c0a0
    MOV dword ptr [EBX + 0x2de0],0x40600000 ; 0044417d
    ADD ESP,0x8                         ; 00444187
    MOV dword ptr [EBX + 0xbec4],0x0    ; 0044418a
    MOV EAX,EBX                         ; 00444194
    FXCH                                ; 00444196
    FSTP float ptr [EBX + 0x2de4]       ; 00444198
    FSTP float ptr [EBX + 0x2de8]       ; 0044419e
    POP EBX                             ; 004441a4
    RET                                 ; 004441a5

