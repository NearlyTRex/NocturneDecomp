; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_enemy_cpp_CEnemy_renderBackground_FUN_0047a000(CEnemy *this_ptr,int layer_flag)
;
; Parameters:
; CEnemy *         Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   layer_flag
;
; XREF[1]:
;   core_ghoul.cpp_CGhoul_renderBackground_FUN_004aae00 at 004aae1e
;
; Called Functions:
;   core_charactr.cpp_CCharacter_renderBackground_FUN_00426510
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0047a000
        ;   Label: core_enemy.cpp_CEnemy_renderBackground_FUN_0047a000
    MOV EDX,dword ptr [ESP + 0x8]       ; 0047a004
    CMP dword ptr [EAX + 0xbc90],0x0    ; 0047a008
    JZ 0x0047a029                       ; 0047a00f
        ;   XREF to: 0047a029 (CONDITIONAL_JUMP)  ; LAB_0047a029
    TEST EDX,EDX                        ; 0047a011
    JZ 0x0047a01f                       ; 0047a013
        ;   XREF to: 0047a01f (CONDITIONAL_JUMP)  ; LAB_0047a01f
    MOV dword ptr [EAX + 0x2404],0x1    ; 0047a015
    PUSH EDX                            ; 0047a01f
        ;   Label: LAB_0047a01f
    PUSH EAX                            ; 0047a020
    CALL core_charactr.cpp_CCharacter_renderBackground_FUN_00426510 ; 0047a021
        ;   XREF to: 00426510 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_renderBackground_FUN_00426510(CCharacter * this_ptr, int layer_flag)
    ADD ESP,0x8                         ; 0047a026
    RET                                 ; 0047a029
        ;   Label: LAB_0047a029

