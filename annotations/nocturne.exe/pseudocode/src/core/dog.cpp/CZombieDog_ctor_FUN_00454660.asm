; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CZombieDog * __cdecl core_dog_cpp_CZombieDog_ctor_FUN_00454660(CZombieDog *this_ptr)
;
; Parameters:
; CZombieDog *     Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_dog.cpp_factoryFunc_FUN_00454630 at 00454643
;
; Referenced Globals:
;   TerminatedCString s_dog_dfm_0057cf31
;   float FLOAT_0059c0dc = 50
;   float FLOAT_0059c0e0 = 100
;   CEnemy_full_vtable g_CZombieDogVTable
;
; Called Functions:
;   core_enemy.cpp_CEnemy_ctor_FUN_00479560
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00454660
        ;   Label: core_dog.cpp_CZombieDog_ctor_FUN_00454660
    MOV EDX,dword ptr [ESP + 0x8]       ; 00454661
    PUSH EDX                            ; 00454665
    CALL core_enemy.cpp_CEnemy_ctor_FUN_00479560 ; 00454666
        ;   XREF to: 00479560 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_00479560(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0045466b
    PUSH 0x57cf31                       ; 0045466e | = "dog.dfm"
    MOV EBX,EAX                         ; 00454673
    ADD EAX,0x150                       ; 00454675
    PUSH EAX                            ; 0045467a
    MOV dword ptr [EAX + -0x4],0x59c0f4 ; 0045467b | g_CZombieDogVTable
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0 ; 00454682
        ;   XREF to: 0051e0c0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0(CDeformableModelInstance * this_ptr, char * model_name)
    FLD float ptr [0x0059c0dc]          ; 00454687 | FLOAT_0059c0dc
    MOV dword ptr [EBX + 0x2dd4],0x3f400000 ; 0045468d
    FLD float ptr [0x0059c0e0]          ; 00454697 | FLOAT_0059c0e0
    MOV dword ptr [EBX + 0x2dd8],0x3fc00000 ; 0045469d
    ADD ESP,0x8                         ; 004546a7
    MOV dword ptr [EBX + 0xbd2c],0x0    ; 004546aa
    MOV EAX,EBX                         ; 004546b4
    FXCH                                ; 004546b6
    FSTP float ptr [EBX + 0x2ddc]       ; 004546b8
    FSTP float ptr [EBX + 0x2de0]       ; 004546be
    POP EBX                             ; 004546c4
    RET                                 ; 004546c5

