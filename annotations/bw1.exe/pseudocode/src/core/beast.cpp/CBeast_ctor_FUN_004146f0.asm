; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBeast * __cdecl core_beast_cpp_CBeast_ctor_FUN_004146f0(CBeast *this_ptr)
;
; Parameters:
; CBeast *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_beast.cpp_factoryFuncBeast_FUN_004146c0 at 004146d3
;
; Referenced Globals:
;   undefined4 DAT_005fc428
;   undefined4 DAT_005fc42c
;
; Called Functions:
;   core_enemy.cpp_CEnemy_ctor_FUN_004a0410
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004146f0
        ;   Label: core_beast.cpp_CBeast_ctor_FUN_004146f0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004146f1
    PUSH EDX                            ; 004146f5
    CALL core_enemy.cpp_CEnemy_ctor_FUN_004a0410 ; 004146f6
        ;   XREF to: 004a0410 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_004a0410(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 004146fb
    PUSH 0x5d3bd9                       ; 004146fe
    MOV EBX,EAX                         ; 00414703
    ADD EAX,0x158                       ; 00414705
    PUSH EAX                            ; 0041470a
    MOV dword ptr [EAX + -0x4],0x5fc434 ; 0041470b
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50 ; 00414712
        ;   XREF to: 00569f50 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50(CDeformableModelInstance * this_ptr, char * model_name)
    FLD float ptr [0x005fc428]          ; 00414717 | DAT_005fc428
    FLD float ptr [0x005fc42c]          ; 0041471d | DAT_005fc42c
    MOV dword ptr [EBX + 0x2fec],0x41200000 ; 00414723
    ADD ESP,0x8                         ; 0041472d
    MOV dword ptr [EBX + 0x2ff0],0x41200000 ; 00414730
    MOV EAX,EBX                         ; 0041473a
    FXCH                                ; 0041473c
    FSTP float ptr [EBX + 0x2ff4]       ; 0041473e
    FSTP float ptr [EBX + 0x2ff8]       ; 00414744
    POP EBX                             ; 0041474a
    RET                                 ; 0041474b

