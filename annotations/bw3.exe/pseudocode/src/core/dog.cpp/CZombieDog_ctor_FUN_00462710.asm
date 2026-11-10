; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CZombieDog * __cdecl core_dog_cpp_CZombieDog_ctor_FUN_00462710(CZombieDog *this_ptr)
;
; Parameters:
; CZombieDog *     Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   core_dog.cpp_CDemonDog_ctor_FUN_00463710 at 00463716
;   core_dog.cpp_CDogForest_ctor_FUN_00463680 at 00463686
;   core_dog.cpp_CEtherealDog_ctor_FUN_004637b0 at 004637b6
;   core_dog.cpp_factoryFuncZombieDog_FUN_004626e0 at 004626f3
;
; Referenced Globals:
;   undefined4 DAT_005de5bc
;   undefined4 DAT_005de5c0
;
; Called Functions:
;   core_enemy.cpp_CEnemy_ctor_FUN_00488fd0
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00462710
        ;   Label: core_dog.cpp_CZombieDog_ctor_FUN_00462710
    MOV EDX,dword ptr [ESP + 0x8]       ; 00462711
    PUSH EDX                            ; 00462715
    CALL core_enemy.cpp_CEnemy_ctor_FUN_00488fd0 ; 00462716
        ;   XREF to: 00488fd0 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_00488fd0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0046271b
    PUSH 0x5bbbc2                       ; 0046271e
    MOV EBX,EAX                         ; 00462723
    ADD EAX,0x158                       ; 00462725
    PUSH EAX                            ; 0046272a
    MOV dword ptr [EAX + -0x4],0x5de5d4 ; 0046272b
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0 ; 00462732
        ;   XREF to: 0054eae0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0(CDeformableModelInstance * this_ptr, char * model_name)
    MOV dword ptr [EBX + 0x326c],0x3f400000 ; 00462737
    FLD float ptr [0x005de5bc]          ; 00462741 | DAT_005de5bc
    MOV dword ptr [EBX + 0x3270],0x3fc00000 ; 00462747
    FLD float ptr [0x005de5c0]          ; 00462751 | DAT_005de5c0
    MOV dword ptr [EBX + 0xd05c],0x0    ; 00462757
    ADD ESP,0x8                         ; 00462761
    MOV dword ptr [EBX + 0xd060],0x0    ; 00462764
    MOV EAX,EBX                         ; 0046276e
    FXCH                                ; 00462770
    FSTP float ptr [EBX + 0x3274]       ; 00462772
    FSTP float ptr [EBX + 0x3278]       ; 00462778
    POP EBX                             ; 0046277e
    RET                                 ; 0046277f

