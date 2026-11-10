; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_enemy_cpp_CEnemy_renderBackground_FUN_00488940(CEnemy *this_ptr,int layer_flag)
;
; Parameters:
; CEnemy *         Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   layer_flag
;
; XREF[1]:
;   core_ghoul.cpp_CGhoul_renderBackground_FUN_004c3980 at 004c399e
;
; Called Functions:
;   core_charactr.cpp_CCharacter_renderBackground_FUN_00425a00
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00488940
        ;   Label: core_enemy.cpp_CEnemy_renderBackground_FUN_00488940
    MOV EDX,dword ptr [ESP + 0x8]       ; 00488944
    CMP dword ptr [EAX + 0x10a64],0x0   ; 00488948
    JZ 0x00488969                       ; 0048894f
        ;   XREF to: 00488969 (CONDITIONAL_JUMP)  ; LAB_00488969
    TEST EDX,EDX                        ; 00488951
    JZ 0x0048895f                       ; 00488953
        ;   XREF to: 0048895f (CONDITIONAL_JUMP)  ; LAB_0048895f
    MOV dword ptr [EAX + 0x2568],0x1    ; 00488955
    PUSH EDX                            ; 0048895f
        ;   Label: LAB_0048895f
    PUSH EAX                            ; 00488960
    CALL core_charactr.cpp_CCharacter_renderBackground_FUN_00425a00 ; 00488961
        ;   XREF to: 00425a00 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_renderBackground_FUN_00425a00(CCharacter * this_ptr, int layer_flag)
    ADD ESP,0x8                         ; 00488966
    RET                                 ; 00488969
        ;   Label: LAB_00488969

