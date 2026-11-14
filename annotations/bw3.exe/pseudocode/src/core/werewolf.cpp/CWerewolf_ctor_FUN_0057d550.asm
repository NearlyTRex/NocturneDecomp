; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CWerewolf * __cdecl core_werewolf_cpp_CWerewolf_ctor_FUN_0057d550(CWerewolf *this_ptr)
;
; Parameters:
; CWerewolf *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_werewolf.cpp_factoryFuncWerewolf_FUN_0057d520 at 0057d533
;
; Referenced Globals:
;   undefined4 DAT_005e63a0
;   undefined4 DAT_005e63a4
;   undefined4 DAT_005e63a8
;
; Called Functions:
;   core_enemy.cpp_CEnemy_ctor_FUN_00488fd0
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057d550
        ;   Label: core_werewolf.cpp_CWerewolf_ctor_FUN_0057d550
    MOV EDX,dword ptr [ESP + 0x8]       ; 0057d551
    PUSH EDX                            ; 0057d555
    CALL core_enemy.cpp_CEnemy_ctor_FUN_00488fd0 ; 0057d556
        ;   XREF to: 00488fd0 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_00488fd0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0057d55b
    PUSH 0x5d79f5                       ; 0057d55e
    MOV EBX,EAX                         ; 0057d563
    ADD EAX,0x158                       ; 0057d565
    PUSH EAX                            ; 0057d56a
    MOV dword ptr [EAX + -0x4],0x5e63c4 ; 0057d56b
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0 ; 0057d572
        ;   XREF to: 0054eae0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0(CDeformableModelInstance * this_ptr, char * model_name)
    MOV dword ptr [EBX + 0x326c],0x3f800000 ; 0057d577
    MOV dword ptr [EBX + 0x3270],0x40000000 ; 0057d581
    MOV dword ptr [EBX + 0xd054],0x0    ; 0057d58b
    MOV dword ptr [EBX + 0xd06c],0x1    ; 0057d595
    MOV dword ptr [EBX + 0xd080],0x0    ; 0057d59f
    FLD float ptr [0x005e63a0]          ; 0057d5a9 | DAT_005e63a0
    MOV dword ptr [EBX + 0xd084],0x40a00000 ; 0057d5af
    FLD float ptr [0x005e63a4]          ; 0057d5b9 | DAT_005e63a4
    MOV dword ptr [EBX + 0xd088],0x0    ; 0057d5bf
    FLD float ptr [0x005e63a8]          ; 0057d5c9 | DAT_005e63a8
    MOV dword ptr [EBX + 0xd08c],0x0    ; 0057d5cf
    ADD ESP,0x8                         ; 0057d5d9
    MOV dword ptr [EBX + 0xd090],0x0    ; 0057d5dc
    MOV EAX,EBX                         ; 0057d5e6
    FXCH ST2                            ; 0057d5e8
    FSTP float ptr [EBX + 0x3274]       ; 0057d5ea
    FSTP float ptr [EBX + 0x3278]       ; 0057d5f0
    FSTP float ptr [EBX + 0xd094]       ; 0057d5f6
    POP EBX                             ; 0057d5fc
    RET                                 ; 0057d5fd

