; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CZombieCow * __cdecl core_cow_cpp_CZombieCow_ctor_FUN_0043bbe0(CZombieCow *this_ptr)
;
; Parameters:
; CZombieCow *     Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_cow.cpp_factoryFuncZombieCow_FUN_0043bbb0 at 0043bbc3
;
; Referenced Globals:
;   TerminatedCString s_cow_dfm_0057b2d5
;   float FLOAT_0059b88c = 50
;   float FLOAT_0059b890 = 100
;   CEnemy_full_vtable g_CZombieCowVTable
;
; Called Functions:
;   core_enemy.cpp_CEnemy_ctor_FUN_00479560
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043bbe0
        ;   Label: core_cow.cpp_CZombieCow_ctor_FUN_0043bbe0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0043bbe1
    PUSH EDX                            ; 0043bbe5
    CALL core_enemy.cpp_CEnemy_ctor_FUN_00479560 ; 0043bbe6
        ;   XREF to: 00479560 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_00479560(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0043bbeb
    PUSH 0x57b2d5                       ; 0043bbee | = "cow.dfm"
    MOV EBX,EAX                         ; 0043bbf3
    ADD EAX,0x150                       ; 0043bbf5
    PUSH EAX                            ; 0043bbfa
    MOV dword ptr [EAX + -0x4],0x59b8a4 ; 0043bbfb | g_CZombieCowVTable
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0 ; 0043bc02
        ;   XREF to: 0051e0c0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0(CDeformableModelInstance * this_ptr, char * model_name)
    FLD float ptr [0x0059b88c]          ; 0043bc07 | FLOAT_0059b88c
    MOV dword ptr [EBX + 0x2dd4],0x3fe00000 ; 0043bc0d
    FLD float ptr [0x0059b890]          ; 0043bc17 | FLOAT_0059b890
    MOV dword ptr [EBX + 0x2dd8],0x40600000 ; 0043bc1d
    ADD ESP,0x8                         ; 0043bc27
    MOV dword ptr [EBX + 0xbd2c],0x0    ; 0043bc2a
    MOV EAX,EBX                         ; 0043bc34
    FXCH                                ; 0043bc36
    FSTP float ptr [EBX + 0x2ddc]       ; 0043bc38
    FSTP float ptr [EBX + 0x2de0]       ; 0043bc3e
    POP EBX                             ; 0043bc44
    RET                                 ; 0043bc45

