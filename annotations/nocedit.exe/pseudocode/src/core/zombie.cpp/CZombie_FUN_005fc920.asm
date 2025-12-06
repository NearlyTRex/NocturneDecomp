; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_zombie.cpp_CZombie_FUN_005fc920()
;
;
; Referenced Globals:
;   undefined4 s_CTentacle_00658a3d
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040c6d0
;   core_charactr.cpp_CCharacter_FUN_0042bf30
;
; *****************************************************************************

section .text

    PUSH 0x658a3d                       ; 005fc920 | s_CTentacle_00658a3d
        ;   Label: core_zombie.cpp_CZombie_FUN_005fc920
    MOV EDX,dword ptr [ESP + 0xc]       ; 005fc925
    PUSH EDX                            ; 005fc929
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 005fc92a | int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005fc92f
    TEST EAX,EAX                        ; 005fc932
    JZ 0x005fc93c                       ; 005fc934 | LAB_005fc93c
        ;   XREF to: 005fc93c (CONDITIONAL_JUMP)
    MOV EAX,0x1                         ; 005fc936
    RET                                 ; 005fc93b
    PUSH EBX                            ; 005fc93c
        ;   Label: LAB_005fc93c
    MOV ECX,dword ptr [ESP + 0xc]       ; 005fc93d
    PUSH ECX                            ; 005fc941
    MOV EBX,dword ptr [ESP + 0xc]       ; 005fc942
    PUSH EBX                            ; 005fc946
    CALL core_charactr.cpp_CCharacter_FUN_0042bf30 ; 005fc947 | int core_charactr.cpp_CCharacter_FUN_0042bf30(CCharacter * this_ptr)
        ;   XREF to: 0042bf30 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005fc94c
    POP EBX                             ; 005fc94f
    RET                                 ; 005fc950

