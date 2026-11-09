; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDrone * __cdecl core_drone_cpp_CDrone_ctor_FUN_0046d750(CDrone *this_ptr)
;
; Parameters:
; CDrone *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_drone.cpp_factoryFuncDrone_FUN_0046d720 at 0046d733
;
; Referenced Globals:
;   undefined4 DAT_005f596c
;   undefined4 DAT_005f5970
;
; Called Functions:
;   core_enemy.cpp_CEnemy_ctor_FUN_00487db0
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046d750
        ;   Label: core_drone.cpp_CDrone_ctor_FUN_0046d750
    MOV EDX,dword ptr [ESP + 0x8]       ; 0046d751
    PUSH EDX                            ; 0046d755
    CALL core_enemy.cpp_CEnemy_ctor_FUN_00487db0 ; 0046d756
        ;   XREF to: 00487db0 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_00487db0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0046d75b
    PUSH 0x5d1820                       ; 0046d75e
    MOV EBX,EAX                         ; 0046d763
    ADD EAX,0x2b4                       ; 0046d765
    PUSH EAX                            ; 0046d76a
    MOV dword ptr [EAX + -0x4],0x5f5984 ; 0046d76b
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0 ; 0046d772
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0(CDeformableModelInstance * this_ptr, char * model_name)
    MOV dword ptr [EBX + 0x3430],0x3f400000 ; 0046d777
    FLD float ptr [0x005f596c]          ; 0046d781 | DAT_005f596c
    MOV dword ptr [EBX + 0x3434],0x3fc00000 ; 0046d787
    FLD float ptr [0x005f5970]          ; 0046d791 | DAT_005f5970
    MOV dword ptr [EBX + 0x280c],0x1    ; 0046d797
    ADD ESP,0x8                         ; 0046d7a1
    MOV dword ptr [EBX + 0x25a8],0x42960000 ; 0046d7a4
    MOV EAX,EBX                         ; 0046d7ae
    FXCH                                ; 0046d7b0
    FSTP float ptr [EBX + 0x3438]       ; 0046d7b2
    FSTP float ptr [EBX + 0x343c]       ; 0046d7b8
    POP EBX                             ; 0046d7be
    RET                                 ; 0046d7bf

