; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_zombie_cpp_CZombie_canPickupWithHand_FUN_00561880(int param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_00561010 at 00561208
;
; Called Functions:
;   core_zombie.cpp_CZombie_getPickupHandIndex_FUN_005617e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00561880
        ;   Label: core_zombie.cpp_CZombie_canPickupWithHand_FUN_00561880
    MOV EBX,dword ptr [ESP + 0x8]       ; 00561881
    MOV EDX,dword ptr [ESP + 0xc]       ; 00561885
    PUSH EDX                            ; 00561889
    PUSH EBX                            ; 0056188a
    CALL core_zombie.cpp_CZombie_getPickupHandIndex_FUN_005617e0 ; 0056188b
        ;   XREF to: 005617e0 (UNCONDITIONAL_CALL)  ; undefined core_zombie.cpp_CZombie_getPickupHandIndex_FUN_005617e0()
    ADD ESP,0x8                         ; 00561890
    TEST EAX,EAX                        ; 00561893
    JL 0x005618b2                       ; 00561895
        ;   XREF to: 005618b2 (CONDITIONAL_JUMP)  ; LAB_005618b2
    MOV EDX,EAX                         ; 00561897
    SHL EAX,0x4                         ; 00561899
    ADD EAX,EDX                         ; 0056189c
    MOV EAX,dword ptr [EBX + EAX*0x4 + 0x24a8] ; 0056189e
    TEST EAX,EAX                        ; 005618a5
    JL 0x005618b2                       ; 005618a7
        ;   XREF to: 005618b2 (CONDITIONAL_JUMP)  ; LAB_005618b2
    MOV EAX,dword ptr [EBX + EAX*0x4 + 0x2290] ; 005618a9
    POP EBX                             ; 005618b0
    RET                                 ; 005618b1
    XOR EAX,EAX                         ; 005618b2
        ;   Label: LAB_005618b2
    POP EBX                             ; 005618b4
    RET                                 ; 005618b5

