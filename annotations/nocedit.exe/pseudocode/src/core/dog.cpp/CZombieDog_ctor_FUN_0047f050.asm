; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CZombieDog * core_dog.cpp_CZombieDog_ctor_FUN_0047f050(CZombieDog * this_ptr)
;
; Parameters:
; CZombieDog *     Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_dog.cpp_factoryFunc_FUN_0047f010 at 0047f02a
;
; Referenced Globals:
;   TerminatedCString s_dog_dfm_00620f9c
;   undefined4 DAT_0065ca2c
;   undefined4 PTR_core_bride.cpp_FUN_0065ca2d+3
;   CDemonActor_vtable PTR_core_dog.cpp_FUN_0065ca44
;
; Called Functions:
;   core_enemy.cpp_CEnemy_ctor_FUN_004a9500
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047f050
        ;   Label: core_dog.cpp_CZombieDog_ctor_FUN_0047f050
    MOV EDX,dword ptr [ESP + 0x8]       ; 0047f051
    PUSH EDX                            ; 0047f055
    CALL core_enemy.cpp_CEnemy_ctor_FUN_004a9500 ; 0047f056
        ;   XREF to: 004a9500 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_004a9500(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0047f05b
    PUSH 0x620f9c                       ; 0047f05e | = "dog.dfm"
    MOV EBX,EAX                         ; 0047f063
    ADD EAX,0x158                       ; 0047f065
    PUSH EAX                            ; 0047f06a
    MOV dword ptr [EAX + -0x4],0x65ca44 ; 0047f06b | PTR_core_dog.cpp_FUN_0065ca44
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840 ; 0047f072
        ;   XREF to: 005a0840 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840(CDeformableModelInstance * this_ptr, char * model_name)
    FLD float ptr [0x0065ca2c]          ; 0047f077 | DAT_0065ca2c
    MOV dword ptr [EBX + 0x2ddc],0x3f400000 ; 0047f07d
    FLD float ptr [0x0065ca30]          ; 0047f087 | PTR_core_bride.cpp_FUN_0065ca2d+3
    MOV dword ptr [EBX + 0x2de0],0x3fc00000 ; 0047f08d
    ADD ESP,0x8                         ; 0047f097
    MOV dword ptr [EBX + 0xbec4],0x0    ; 0047f09a
    MOV EAX,EBX                         ; 0047f0a4
    FXCH                                ; 0047f0a6
    FSTP float ptr [EBX + 0x2de4]       ; 0047f0a8
    FSTP float ptr [EBX + 0x2de8]       ; 0047f0ae
    POP EBX                             ; 0047f0b4
    RET                                 ; 0047f0b5

