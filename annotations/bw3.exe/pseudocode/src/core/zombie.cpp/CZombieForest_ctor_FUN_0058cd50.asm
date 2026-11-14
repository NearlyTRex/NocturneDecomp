; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CZombieForest * __cdecl core_zombie_cpp_CZombieForest_ctor_FUN_0058cd50(CZombieForest *this_ptr)
;
; Parameters:
; CZombieForest *  Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_zombie.cpp_FUN_0058cd20 at 0058cd33
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0
;   core_zombie.cpp_CZombie_ctor_FUN_005888d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0058cd50
        ;   Label: core_zombie.cpp_CZombieForest_ctor_FUN_0058cd50
    MOV EDX,dword ptr [ESP + 0x8]       ; 0058cd51
    PUSH EDX                            ; 0058cd55
    CALL core_zombie.cpp_CZombie_ctor_FUN_005888d0 ; 0058cd56
        ;   XREF to: 005888d0 (UNCONDITIONAL_CALL)  ; CZombie * core_zombie.cpp_CZombie_ctor_FUN_005888d0(CZombie * this_ptr)
    ADD ESP,0x4                         ; 0058cd5b
    PUSH 0x5d8992                       ; 0058cd5e
    MOV EBX,EAX                         ; 0058cd63
    ADD EAX,0x158                       ; 0058cd65
    PUSH EAX                            ; 0058cd6a
    MOV dword ptr [EAX + -0x4],0x5e6a34 ; 0058cd6b
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0 ; 0058cd72
        ;   XREF to: 0054eae0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0(CDeformableModelInstance * this_ptr, char * model_name)
    MOV dword ptr [EBX + 0xd140],0x2    ; 0058cd77
    MOV dword ptr [EBX + 0x2538],0x41c80000 ; 0058cd81
    ADD ESP,0x8                         ; 0058cd8b
    MOV dword ptr [EBX + 0xce5c],0x41200000 ; 0058cd8e
    MOV EAX,EBX                         ; 0058cd98
    MOV dword ptr [EBX + 0xce60],0x41200000 ; 0058cd9a
    POP EBX                             ; 0058cda4
    RET                                 ; 0058cda5

