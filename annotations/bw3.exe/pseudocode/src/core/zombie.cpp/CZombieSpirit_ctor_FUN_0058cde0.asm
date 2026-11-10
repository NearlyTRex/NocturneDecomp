; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CZombieSpirit * core_zombie_cpp_CZombieSpirit_ctor_FUN_0058cde0(CZombieSpirit *this_ptr)
;
; Parameters:
; CZombieSpirit *  Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_zombie.cpp_FUN_0058cdb0 at 0058cdc3
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0
;   core_zombie.cpp_CZombie_ctor_FUN_005888d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0058cde0
        ;   Label: core_zombie.cpp_CZombieSpirit_ctor_FUN_0058cde0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0058cde1
    PUSH EDX                            ; 0058cde5
    CALL core_zombie.cpp_CZombie_ctor_FUN_005888d0 ; 0058cde6
        ;   XREF to: 005888d0 (UNCONDITIONAL_CALL)  ; CZombie * core_zombie.cpp_CZombie_ctor_FUN_005888d0(CZombie * this_ptr)
    ADD ESP,0x4                         ; 0058cdeb
    PUSH 0x5d89a4                       ; 0058cdee
    MOV EBX,EAX                         ; 0058cdf3
    ADD EAX,0x158                       ; 0058cdf5
    PUSH EAX                            ; 0058cdfa
    MOV dword ptr [EAX + -0x4],0x5e6b84 ; 0058cdfb
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0 ; 0058ce02
        ;   XREF to: 0054eae0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0(CDeformableModelInstance * this_ptr, char * model_name)
    MOV dword ptr [EBX + 0xd140],0x3    ; 0058ce07
    MOV dword ptr [EBX + 0x2538],0x41f00000 ; 0058ce11
    ADD ESP,0x8                         ; 0058ce1b
    MOV dword ptr [EBX + 0xce5c],0x41700000 ; 0058ce1e
    MOV EAX,EBX                         ; 0058ce28
    MOV dword ptr [EBX + 0xce60],0x41200000 ; 0058ce2a
    POP EBX                             ; 0058ce34
    RET                                 ; 0058ce35

