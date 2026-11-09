; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CImp * __cdecl core_imp_cpp_CImp_ctor_FUN_004d65f0(CImp *this_ptr)
;
; Parameters:
; CImp *           Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_imp.cpp_factoryFuncImp_FUN_004d65c0 at 004d65d3
;
; Referenced Globals:
;   undefined4 DAT_005f8d60
;   undefined4 DAT_005f8d64
;
; Called Functions:
;   core_enemy.cpp_CEnemy_ctor_FUN_00487db0
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d65f0
        ;   Label: core_imp.cpp_CImp_ctor_FUN_004d65f0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004d65f1
    PUSH EDX                            ; 004d65f5
    CALL core_enemy.cpp_CEnemy_ctor_FUN_00487db0 ; 004d65f6
        ;   XREF to: 00487db0 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_00487db0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 004d65fb
    PUSH 0x5da92e                       ; 004d65fe
    MOV EBX,EAX                         ; 004d6603
    ADD EAX,0x2b4                       ; 004d6605
    PUSH EAX                            ; 004d660a
    MOV dword ptr [EAX + -0x4],0x5f8d74 ; 004d660b
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0 ; 004d6612
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0(CDeformableModelInstance * this_ptr, char * model_name)
    FLD float ptr [0x005f8d60]          ; 004d6617 | DAT_005f8d60
    MOV dword ptr [EBX + 0x3430],0x3f19999a ; 004d661d
    FLD float ptr [0x005f8d64]          ; 004d6627 | DAT_005f8d64
    MOV dword ptr [EBX + 0x3434],0x3f000000 ; 004d662d
    ADD ESP,0x8                         ; 004d6637
    MOV dword ptr [EBX + 0x282c],0x0    ; 004d663a
    MOV EAX,EBX                         ; 004d6644
    FXCH                                ; 004d6646
    FSTP float ptr [EBX + 0x3438]       ; 004d6648
    FSTP float ptr [EBX + 0x343c]       ; 004d664e
    POP EBX                             ; 004d6654
    RET                                 ; 004d6655

