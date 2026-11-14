; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CYow * __cdecl core_yow_cpp_CYow_ctor_FUN_00586340(CYow *this_ptr)
;
; Parameters:
; CYow *           Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_yow.cpp_factoryFuncYow_FUN_00586310 at 00586323
;
; Referenced Globals:
;   undefined4 DAT_005e65e0
;   undefined4 DAT_005e65e4
;   undefined4 DAT_005fba60
;
; Called Functions:
;   core_enemy.cpp_CEnemy_ctor_FUN_00488fd0
;   core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00586340
        ;   Label: core_yow.cpp_CYow_ctor_FUN_00586340
    PUSH ESI                            ; 00586341
    MOV ESI,dword ptr [ESP + 0xc]       ; 00586342
    PUSH ESI                            ; 00586346
    CALL core_enemy.cpp_CEnemy_ctor_FUN_00488fd0 ; 00586347
        ;   XREF to: 00488fd0 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_00488fd0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0058634c
    MOV EBX,EAX                         ; 0058634f
    PUSH 0x5d81f4                       ; 00586351
    MOV ESI,EAX                         ; 00586356
    ADD EAX,0x158                       ; 00586358
    PUSH EAX                            ; 0058635d
    MOV dword ptr [EAX + -0x4],0x5e65f4 ; 0058635e
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0 ; 00586365
        ;   XREF to: 0054eae0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0(CDeformableModelInstance * this_ptr, char * model_name)
    FLD float ptr [0x005e65e0]          ; 0058636a | DAT_005e65e0
    FLD float ptr [0x005e65e4]          ; 00586370 | DAT_005e65e4
    MOV dword ptr [EBX + 0x326c],0x3f400000 ; 00586376
    ADD ESP,0x8                         ; 00586380
    MOV dword ptr [EBX + 0x3270],0x3fc00000 ; 00586383
    MOV EDX,dword ptr [0x005fba60]      ; 0058638d | DAT_005fba60
    MOV dword ptr [EBX + 0xd070],0x0    ; 00586393
    PUSH 0x5d8201                       ; 0058639d
    FXCH                                ; 005863a2
    FSTP float ptr [EBX + 0x3274]       ; 005863a4
    PUSH EDX                            ; 005863aa
    FSTP float ptr [EBX + 0x3278]       ; 005863ab
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0 ; 005863b1
        ;   XREF to: 00491aa0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 005863b6
    TEST EAX,EAX                        ; 005863b9
    JZ 0x005863cc                       ; 005863bb
        ;   XREF to: 005863cc (CONDITIONAL_JUMP)  ; LAB_005863cc
    MOV dword ptr [EBX + 0xd074],0x3f800000 ; 005863bd
    MOV EAX,ESI                         ; 005863c7
    POP ESI                             ; 005863c9
    POP EBX                             ; 005863ca
    RET                                 ; 005863cb
    MOV dword ptr [EBX + 0xd074],0x3f400000 ; 005863cc
        ;   Label: LAB_005863cc
    MOV EAX,ESI                         ; 005863d6
    POP ESI                             ; 005863d8
    POP EBX                             ; 005863d9
    RET                                 ; 005863da

