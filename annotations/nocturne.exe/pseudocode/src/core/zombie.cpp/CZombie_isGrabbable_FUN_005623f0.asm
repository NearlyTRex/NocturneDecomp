; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_zombie_cpp_CZombie_isGrabbable_FUN_005623f0(undefined4 param_1,undefined4 param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_CTentacle_0059899e
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040d7e0
;   core_charactr.cpp_CCharacter_isGrabbable_FUN_004280a0
;
; *****************************************************************************

section .text

    PUSH 0x59899e                       ; 005623f0 | = "CTentacle"
        ;   Label: core_zombie.cpp_CZombie_isGrabbable_FUN_005623f0
    MOV EDX,dword ptr [ESP + 0xc]       ; 005623f5
    PUSH EDX                            ; 005623f9
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 005623fa
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_isOfClass_FUN_0040d7e0()
    ADD ESP,0x8                         ; 005623ff
    TEST EAX,EAX                        ; 00562402
    JZ 0x0056240c                       ; 00562404
        ;   XREF to: 0056240c (CONDITIONAL_JUMP)  ; LAB_0056240c
    MOV EAX,0x1                         ; 00562406
    RET                                 ; 0056240b
    PUSH EBX                            ; 0056240c
        ;   Label: LAB_0056240c
    MOV ECX,dword ptr [ESP + 0xc]       ; 0056240d
    PUSH ECX                            ; 00562411
    MOV EBX,dword ptr [ESP + 0xc]       ; 00562412
    PUSH EBX                            ; 00562416
    CALL core_charactr.cpp_CCharacter_isGrabbable_FUN_004280a0 ; 00562417
        ;   XREF to: 004280a0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_isGrabbable_FUN_004280a0()
    ADD ESP,0x8                         ; 0056241c
    POP EBX                             ; 0056241f
    RET                                 ; 00562420

