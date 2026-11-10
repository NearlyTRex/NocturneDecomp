; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CImp * __cdecl core_imp_cpp_CImp_ctor_FUN_004d6700(CImp *this_ptr)
;
; Parameters:
; CImp *           Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_imp.cpp_factoryFuncImp_FUN_004d66d0 at 004d66e3
;
; Referenced Globals:
;   undefined4 DAT_005e1ef0
;   undefined4 DAT_005e1ef4
;
; Called Functions:
;   core_enemy.cpp_CEnemy_ctor_FUN_00488fd0
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d6700
        ;   Label: core_imp.cpp_CImp_ctor_FUN_004d6700
    MOV EDX,dword ptr [ESP + 0x8]       ; 004d6701
    PUSH EDX                            ; 004d6705
    CALL core_enemy.cpp_CEnemy_ctor_FUN_00488fd0 ; 004d6706
        ;   XREF to: 00488fd0 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_00488fd0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 004d670b
    PUSH 0x5c5455                       ; 004d670e
    MOV EBX,EAX                         ; 004d6713
    ADD EAX,0x158                       ; 004d6715
    PUSH EAX                            ; 004d671a
    MOV dword ptr [EAX + -0x4],0x5e1f04 ; 004d671b
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0 ; 004d6722
        ;   XREF to: 0054eae0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0(CDeformableModelInstance * this_ptr, char * model_name)
    FLD float ptr [0x005e1ef0]          ; 004d6727 | DAT_005e1ef0
    MOV dword ptr [EBX + 0x326c],0x3f19999a ; 004d672d
    FLD float ptr [0x005e1ef4]          ; 004d6737 | DAT_005e1ef4
    MOV dword ptr [EBX + 0x3270],0x3f000000 ; 004d673d
    ADD ESP,0x8                         ; 004d6747
    MOV dword ptr [EBX + 0x27c0],0x0    ; 004d674a
    MOV EAX,EBX                         ; 004d6754
    FXCH                                ; 004d6756
    FSTP float ptr [EBX + 0x3274]       ; 004d6758
    FSTP float ptr [EBX + 0x3278]       ; 004d675e
    POP EBX                             ; 004d6764
    RET                                 ; 004d6765

