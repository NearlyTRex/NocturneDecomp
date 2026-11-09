; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CZombieDog * __cdecl core_dog_cpp_CZombieDog_ctor_FUN_0045e270(CZombieDog *this_ptr)
;
; Parameters:
; CZombieDog *     Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_dog.cpp_factoryFuncZombieDog_FUN_0045e240 at 0045e253
;
; Referenced Globals:
;   undefined4 DAT_005f532c
;   undefined4 DAT_005f5330
;
; Called Functions:
;   core_enemy.cpp_CEnemy_ctor_FUN_00487db0
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045e270
        ;   Label: core_dog.cpp_CZombieDog_ctor_FUN_0045e270
    MOV EDX,dword ptr [ESP + 0x8]       ; 0045e271
    PUSH EDX                            ; 0045e275
    CALL core_enemy.cpp_CEnemy_ctor_FUN_00487db0 ; 0045e276
        ;   XREF to: 00487db0 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_00487db0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0045e27b
    PUSH 0x5d0887                       ; 0045e27e
    MOV EBX,EAX                         ; 0045e283
    ADD EAX,0x2b4                       ; 0045e285
    PUSH EAX                            ; 0045e28a
    MOV dword ptr [EAX + -0x4],0x5f5344 ; 0045e28b
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0 ; 0045e292
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0(CDeformableModelInstance * this_ptr, char * model_name)
    FLD float ptr [0x005f532c]          ; 0045e297 | DAT_005f532c
    MOV dword ptr [EBX + 0x3430],0x3f400000 ; 0045e29d
    FLD float ptr [0x005f5330]          ; 0045e2a7 | DAT_005f5330
    MOV dword ptr [EBX + 0x3434],0x3fc00000 ; 0045e2ad
    ADD ESP,0x8                         ; 0045e2b7
    MOV dword ptr [EBX + 0x10b00],0x0   ; 0045e2ba
    MOV EAX,EBX                         ; 0045e2c4
    FXCH                                ; 0045e2c6
    FSTP float ptr [EBX + 0x3438]       ; 0045e2c8
    FSTP float ptr [EBX + 0x343c]       ; 0045e2ce
    POP EBX                             ; 0045e2d4
    RET                                 ; 0045e2d5

