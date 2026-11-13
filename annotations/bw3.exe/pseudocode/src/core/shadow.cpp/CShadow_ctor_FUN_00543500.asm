; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CShadow * __cdecl core_shadow_cpp_CShadow_ctor_FUN_00543500(CShadow *this_ptr)
;
; Parameters:
; CShadow *        Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   core_shadow.cpp_CDemonShadow_ctor_FUN_00545fc0 at 00545fc6
;   core_shadow.cpp_CShadowForest_ctor_FUN_00545ea0 at 00545ea6
;   core_shadow.cpp_CSpiritShadow_ctor_FUN_00545f30 at 00545f36
;   core_shadow.cpp_factoryFuncShadow_FUN_005434d0 at 005434e3
;
; Referenced Globals:
;   undefined4 DAT_005e3d54
;   undefined4 DAT_005e3d58
;   undefined4 DAT_005e3d5c
;   undefined4 DAT_005fba60
;
; Called Functions:
;   core_enemy.cpp_CEnemy_ctor_FUN_00488fd0
;   core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00543500
        ;   Label: core_shadow.cpp_CShadow_ctor_FUN_00543500
    PUSH ESI                            ; 00543501
    MOV ESI,dword ptr [ESP + 0xc]       ; 00543502
    PUSH ESI                            ; 00543506
    CALL core_enemy.cpp_CEnemy_ctor_FUN_00488fd0 ; 00543507
        ;   XREF to: 00488fd0 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_00488fd0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0054350c
    MOV EBX,EAX                         ; 0054350f
    PUSH 0x5d11a8                       ; 00543511
    MOV ESI,EAX                         ; 00543516
    ADD EAX,0x158                       ; 00543518
    PUSH EAX                            ; 0054351d
    MOV dword ptr [EAX + -0x4],0x5e3d74 ; 0054351e
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0 ; 00543525
        ;   XREF to: 0054eae0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0(CDeformableModelInstance * this_ptr, char * model_name)
    MOV dword ptr [EBX + 0x326c],0x3f800000 ; 0054352a
    MOV dword ptr [EBX + 0x3270],0x40000000 ; 00543534
    MOV dword ptr [EBX + 0xd0e0],0x1    ; 0054353e
    MOV dword ptr [EBX + 0xd054],0x0    ; 00543548
    MOV dword ptr [EBX + 0xd074],0x1    ; 00543552
    MOV dword ptr [EBX + 0xd088],0x0    ; 0054355c
    MOV dword ptr [EBX + 0xd08c],0x40a00000 ; 00543566
    MOV dword ptr [EBX + 0xd090],0x0    ; 00543570
    MOV dword ptr [EBX + 0xd094],0x0    ; 0054357a
    MOV dword ptr [EBX + 0xd09c],0x0    ; 00543584
    MOV dword ptr [EBX + 0xd0d4],0x3f800000 ; 0054358e
    MOV dword ptr [EBX + 0xd098],0x0    ; 00543598
    MOV dword ptr [EBX + 0xd0c4],0x0    ; 005435a2
    MOV dword ptr [EBX + 0xd0bc],0x0    ; 005435ac
    MOV dword ptr [EBX + 0xd0c0],0x0    ; 005435b6
    FLD float ptr [0x005e3d54]          ; 005435c0 | DAT_005e3d54
    MOV dword ptr [EBX + 0xd0cc],0x0    ; 005435c6
    FLD float ptr [0x005e3d58]          ; 005435d0 | DAT_005e3d58
    MOV dword ptr [EBX + 0xd0c8],0x41200000 ; 005435d6
    FLD float ptr [0x005e3d5c]          ; 005435e0 | DAT_005e3d5c
    MOV dword ptr [EBX + 0xd0d8],0x0    ; 005435e6
    MOV EDX,dword ptr [0x005fba60]      ; 005435f0 | DAT_005fba60
    MOV dword ptr [EBX + 0xd0dc],0x0    ; 005435f6
    ADD ESP,0x8                         ; 00543600
    FXCH ST2                            ; 00543603
    FSTP float ptr [EBX + 0x3274]       ; 00543605
    PUSH 0x5d11b8                       ; 0054360b
    FSTP float ptr [EBX + 0x3278]       ; 00543610
    PUSH EDX                            ; 00543616
    FSTP float ptr [EBX + 0xd0a0]       ; 00543617
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0 ; 0054361d
        ;   XREF to: 00491aa0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00543622
    TEST EAX,EAX                        ; 00543625
    JZ 0x00543660                       ; 00543627
        ;   XREF to: 00543660 (CONDITIONAL_JUMP)  ; LAB_00543660
    MOV dword ptr [EBX + 0xd0e4],0x3f800000 ; 00543629
    MOV dword ptr [ESI + 0x2538],0x42200000 ; 00543633
        ;   Label: LAB_00543633
    MOV dword ptr [ESI + 0xce5c],0x41700000 ; 0054363d
    MOV dword ptr [ESI + 0xce60],0x41a00000 ; 00543647
    MOV EAX,ESI                         ; 00543651
    MOV dword ptr [ESI + 0xd0a8],0x0    ; 00543653
    POP ESI                             ; 0054365d
    POP EBX                             ; 0054365e
    RET                                 ; 0054365f
    MOV dword ptr [EBX + 0xd0e4],0x3f400000 ; 00543660
        ;   Label: LAB_00543660
    JMP 0x00543633                      ; 0054366a
        ;   XREF to: 00543633 (UNCONDITIONAL_JUMP)  ; LAB_00543633

