; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBeast * __cdecl core_beast_cpp_CBeast_ctor_FUN_00414a00(CBeast *this_ptr)
;
; Parameters:
; CBeast *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_beast.cpp_factoryFuncBeast_FUN_004149d0 at 004149e3
;
; Referenced Globals:
;   undefined4 DAT_005f3368
;   undefined4 DAT_005f336c
;
; Called Functions:
;   core_enemy.cpp_CEnemy_ctor_FUN_00487db0
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00414a00
        ;   Label: core_beast.cpp_CBeast_ctor_FUN_00414a00
    MOV EDX,dword ptr [ESP + 0x8]       ; 00414a01
    PUSH EDX                            ; 00414a05
    CALL core_enemy.cpp_CEnemy_ctor_FUN_00487db0 ; 00414a06
        ;   XREF to: 00487db0 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_00487db0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 00414a0b
    PUSH 0x5cbc5e                       ; 00414a0e
    MOV EBX,EAX                         ; 00414a13
    ADD EAX,0x2b4                       ; 00414a15
    PUSH EAX                            ; 00414a1a
    MOV dword ptr [EAX + -0x4],0x5f3374 ; 00414a1b
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0 ; 00414a22
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0(CDeformableModelInstance * this_ptr, char * model_name)
    FLD float ptr [0x005f3368]          ; 00414a27 | DAT_005f3368
    FLD float ptr [0x005f336c]          ; 00414a2d | DAT_005f336c
    MOV dword ptr [EBX + 0x3430],0x41200000 ; 00414a33
    ADD ESP,0x8                         ; 00414a3d
    MOV dword ptr [EBX + 0x3434],0x41200000 ; 00414a40
    MOV EAX,EBX                         ; 00414a4a
    FXCH                                ; 00414a4c
    FSTP float ptr [EBX + 0x3438]       ; 00414a4e
    FSTP float ptr [EBX + 0x343c]       ; 00414a54
    POP EBX                             ; 00414a5a
    RET                                 ; 00414a5b

