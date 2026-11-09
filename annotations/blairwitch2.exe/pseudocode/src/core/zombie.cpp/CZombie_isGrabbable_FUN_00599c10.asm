; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_zombie_cpp_CZombie_isGrabbable_FUN_00599c10(CZombie *this_ptr,CDemonActor *grabber)
;
; Parameters:
; CZombie *        Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   grabber
;
; Referenced Globals:
;   undefined4 s_CTentacle_005ef3e1+1
;
; Called Functions:
;   core_actor.cpp_FUN_0040c840
;   core_charactr.cpp_FUN_00427a00
;
; *****************************************************************************

section .text

    PUSH 0x5ef3e2                       ; 00599c10 | s_CTentacle_005ef3e1+1
        ;   Label: core_zombie.cpp_CZombie_isGrabbable_FUN_00599c10
    MOV EDX,dword ptr [ESP + 0xc]       ; 00599c15
    PUSH EDX                            ; 00599c19
    CALL core_actor.cpp_FUN_0040c840    ; 00599c1a
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 00599c1f
    TEST EAX,EAX                        ; 00599c22
    JZ 0x00599c2c                       ; 00599c24
        ;   XREF to: 00599c2c (CONDITIONAL_JUMP)  ; LAB_00599c2c
    MOV EAX,0x1                         ; 00599c26
    RET                                 ; 00599c2b
    PUSH EBX                            ; 00599c2c
        ;   Label: LAB_00599c2c
    MOV ECX,dword ptr [ESP + 0xc]       ; 00599c2d
    PUSH ECX                            ; 00599c31
    MOV EBX,dword ptr [ESP + 0xc]       ; 00599c32
    PUSH EBX                            ; 00599c36
    CALL core_charactr.cpp_FUN_00427a00 ; 00599c37
        ;   XREF to: 00427a00 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_FUN_00427a00(CCharacter * this_ptr, CDemonActor * grabber)
    ADD ESP,0x8                         ; 00599c3c
    POP EBX                             ; 00599c3f
    RET                                 ; 00599c40

