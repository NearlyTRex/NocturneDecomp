; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CZombieCow * __cdecl core_cow_cpp_CZombieCow_ctor_FUN_004483a0(CZombieCow *this_ptr)
;
; Parameters:
; CZombieCow *     Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_cow.cpp_factoryFuncZombieCow_FUN_00448370 at 00448383
;
; Referenced Globals:
;   undefined4 DAT_005fe0ac
;   undefined4 DAT_005fe0b0
;
; Called Functions:
;   core_enemy.cpp_CEnemy_ctor_FUN_004a0410
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004483a0
        ;   Label: core_cow.cpp_CZombieCow_ctor_FUN_004483a0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004483a1
    PUSH EDX                            ; 004483a5
    CALL core_enemy.cpp_CEnemy_ctor_FUN_004a0410 ; 004483a6
        ;   XREF to: 004a0410 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_004a0410(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 004483ab
    PUSH 0x5d71f9                       ; 004483ae
    MOV EBX,EAX                         ; 004483b3
    ADD EAX,0x158                       ; 004483b5
    PUSH EAX                            ; 004483ba
    MOV dword ptr [EAX + -0x4],0x5fe0c4 ; 004483bb
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50 ; 004483c2
        ;   XREF to: 00569f50 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50(CDeformableModelInstance * this_ptr, char * model_name)
    MOV dword ptr [EBX + 0x2fec],0x3fe00000 ; 004483c7
    FLD float ptr [0x005fe0ac]          ; 004483d1 | DAT_005fe0ac
    MOV dword ptr [EBX + 0x2ff0],0x40600000 ; 004483d7
    FLD float ptr [0x005fe0b0]          ; 004483e1 | DAT_005fe0b0
    MOV dword ptr [EBX + 0xc270],0x0    ; 004483e7
    ADD ESP,0x8                         ; 004483f1
    MOV dword ptr [EBX + 0x252c],0x3f490fdb ; 004483f4
    MOV EAX,EBX                         ; 004483fe
    FXCH                                ; 00448400
    FSTP float ptr [EBX + 0x2ff4]       ; 00448402
    FSTP float ptr [EBX + 0x2ff8]       ; 00448408
    POP EBX                             ; 0044840e
    RET                                 ; 0044840f

