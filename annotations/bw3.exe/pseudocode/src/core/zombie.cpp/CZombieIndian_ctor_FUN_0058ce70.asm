; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CZombieIndian * core_zombie_cpp_CZombieIndian_ctor_FUN_0058ce70(CZombieIndian *this_ptr)
;
; Parameters:
; CZombieIndian *  Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_zombie.cpp_FUN_0058ce40 at 0058ce53
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0
;   core_zombie.cpp_CZombie_ctor_FUN_005888d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0058ce70
        ;   Label: core_zombie.cpp_CZombieIndian_ctor_FUN_0058ce70
    MOV EDX,dword ptr [ESP + 0x8]       ; 0058ce71
    PUSH EDX                            ; 0058ce75
    CALL core_zombie.cpp_CZombie_ctor_FUN_005888d0 ; 0058ce76
        ;   XREF to: 005888d0 (UNCONDITIONAL_CALL)  ; CZombie * core_zombie.cpp_CZombie_ctor_FUN_005888d0(CZombie * this_ptr)
    ADD ESP,0x4                         ; 0058ce7b
    PUSH 0x5d89b7                       ; 0058ce7e
    MOV EBX,EAX                         ; 0058ce83
    ADD EAX,0x158                       ; 0058ce85
    PUSH EAX                            ; 0058ce8a
    MOV dword ptr [EAX + -0x4],0x5e6cd4 ; 0058ce8b
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0 ; 0058ce92
        ;   XREF to: 0054eae0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0(CDeformableModelInstance * this_ptr, char * model_name)
    MOV dword ptr [EBX + 0xd140],0x4    ; 0058ce97
    MOV dword ptr [EBX + 0x2538],0x42200000 ; 0058cea1
    ADD ESP,0x8                         ; 0058ceab
    MOV dword ptr [EBX + 0xce5c],0x41700000 ; 0058ceae
    MOV EAX,EBX                         ; 0058ceb8
    MOV dword ptr [EBX + 0xce60],0x41700000 ; 0058ceba
    POP EBX                             ; 0058cec4
    RET                                 ; 0058cec5

