; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_zombie_cpp_CZombie_FUN_005fbda0(CZombie *this_ptr)
;
; Parameters:
; CZombie *        Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_zombie.cpp_CZombie_FUN_005fb530 at 005fb728
;
; Called Functions:
;   core_zombie.cpp_CZombie_FUN_005fbd00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005fbda0
        ;   Label: core_zombie.cpp_CZombie_FUN_005fbda0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005fbda1
    MOV EDX,dword ptr [ESP + 0xc]       ; 005fbda5
    PUSH EDX                            ; 005fbda9
    PUSH EBX                            ; 005fbdaa
    CALL core_zombie.cpp_CZombie_FUN_005fbd00 ; 005fbdab
        ;   XREF to: 005fbd00 (UNCONDITIONAL_CALL)  ; int core_zombie.cpp_CZombie_FUN_005fbd00(CZombie * this_ptr)
    ADD ESP,0x8                         ; 005fbdb0
    TEST EAX,EAX                        ; 005fbdb3
    JL 0x005fbdd2                       ; 005fbdb5
        ;   XREF to: 005fbdd2 (CONDITIONAL_JUMP)  ; LAB_005fbdd2
    MOV EDX,EAX                         ; 005fbdb7
    SHL EAX,0x4                         ; 005fbdb9
    ADD EAX,EDX                         ; 005fbdbc
    MOV EAX,dword ptr [EBX + EAX*0x4 + 0x24b0] ; 005fbdbe
    TEST EAX,EAX                        ; 005fbdc5
    JL 0x005fbdd2                       ; 005fbdc7
        ;   XREF to: 005fbdd2 (CONDITIONAL_JUMP)  ; LAB_005fbdd2
    MOV EAX,dword ptr [EBX + EAX*0x4 + 0x2298] ; 005fbdc9
    POP EBX                             ; 005fbdd0
    RET                                 ; 005fbdd1
    XOR EAX,EAX                         ; 005fbdd2
        ;   Label: LAB_005fbdd2
    POP EBX                             ; 005fbdd4
    RET                                 ; 005fbdd5

