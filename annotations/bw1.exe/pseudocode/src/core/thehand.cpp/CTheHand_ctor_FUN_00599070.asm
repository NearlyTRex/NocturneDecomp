; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTheHand * __cdecl core_thehand_cpp_CTheHand_ctor_FUN_00599070(CTheHand *this_ptr)
;
; Parameters:
; CTheHand *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_thehand.cpp_factoryFuncTheHand_FUN_00599040 at 00599053
;
; Called Functions:
;   core_enemy.cpp_CEnemy_ctor_FUN_004a0410
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00599070
        ;   Label: core_thehand.cpp_CTheHand_ctor_FUN_00599070
    MOV EDX,dword ptr [ESP + 0x8]       ; 00599071
    PUSH EDX                            ; 00599075
    CALL core_enemy.cpp_CEnemy_ctor_FUN_004a0410 ; 00599076
        ;   XREF to: 004a0410 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_004a0410(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0059907b
    PUSH 0x5f7f55                       ; 0059907e
    MOV EBX,EAX                         ; 00599083
    ADD EAX,0x158                       ; 00599085
    PUSH EAX                            ; 0059908a
    MOV dword ptr [EAX + -0x4],0x606e04 ; 0059908b
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50 ; 00599092
        ;   XREF to: 00569f50 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50(CDeformableModelInstance * this_ptr, char * model_name)
    MOV dword ptr [EBX + 0x2ff4],0x42480000 ; 00599097
    MOV dword ptr [EBX + 0x2ff8],0x42c80000 ; 005990a1
    ADD ESP,0x8                         ; 005990ab
    MOV dword ptr [EBX + 0xc268],0x0    ; 005990ae
    MOV EAX,EBX                         ; 005990b8
    MOV dword ptr [EBX + 0xc26c],0x0    ; 005990ba
    POP EBX                             ; 005990c4
    RET                                 ; 005990c5

