; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CZombieCow * core_cow_cpp_CZombieCow_ctor_FUN_00444f60(CZombieCow *this_ptr)
;
; Parameters:
; CZombieCow *     Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_cow.cpp_factoryFuncZombieCow_FUN_00444f30 at 00444f43
;
; Referenced Globals:
;   undefined4 DAT_005ddbac
;   undefined4 DAT_005ddbb0
;
; Called Functions:
;   core_enemy.cpp_CEnemy_ctor_FUN_00488fd0
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00444f60
        ;   Label: core_cow.cpp_CZombieCow_ctor_FUN_00444f60
    MOV EDX,dword ptr [ESP + 0x8]       ; 00444f61
    PUSH EDX                            ; 00444f65
    CALL core_enemy.cpp_CEnemy_ctor_FUN_00488fd0 ; 00444f66
        ;   XREF to: 00488fd0 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_00488fd0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 00444f6b
    PUSH 0x5b98b0                       ; 00444f6e
    MOV EBX,EAX                         ; 00444f73
    ADD EAX,0x158                       ; 00444f75
    PUSH EAX                            ; 00444f7a
    MOV dword ptr [EAX + -0x4],0x5ddbc4 ; 00444f7b
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0 ; 00444f82
        ;   XREF to: 0054eae0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0(CDeformableModelInstance * this_ptr, char * model_name)
    MOV dword ptr [EBX + 0x326c],0x3fe00000 ; 00444f87
    FLD float ptr [0x005ddbac]          ; 00444f91 | DAT_005ddbac
    MOV dword ptr [EBX + 0x3270],0x40600000 ; 00444f97
    FLD float ptr [0x005ddbb0]          ; 00444fa1 | DAT_005ddbb0
    MOV dword ptr [EBX + 0xd05c],0x0    ; 00444fa7
    ADD ESP,0x8                         ; 00444fb1
    MOV dword ptr [EBX + 0x252c],0x3f490fdb ; 00444fb4
    MOV EAX,EBX                         ; 00444fbe
    FXCH                                ; 00444fc0
    FSTP float ptr [EBX + 0x3274]       ; 00444fc2
    FSTP float ptr [EBX + 0x3278]       ; 00444fc8
    POP EBX                             ; 00444fce
    RET                                 ; 00444fcf

