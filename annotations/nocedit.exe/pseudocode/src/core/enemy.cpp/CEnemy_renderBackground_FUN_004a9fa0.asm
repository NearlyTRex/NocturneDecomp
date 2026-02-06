; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_enemy_cpp_CEnemy_renderBackground_FUN_004a9fa0(CEnemy *this_ptr,int layer_flag)
;
; Parameters:
; CEnemy *         Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   layer_flag
;
; XREF[1]:
;   core_ghoul.cpp_CGhoul_renderBackground_FUN_004e8190 at 004e81ae
;
; Called Functions:
;   core_charactr.cpp_CCharacter_renderBackground_FUN_0042a390
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004a9fa0
        ;   Label: core_enemy.cpp_CEnemy_renderBackground_FUN_004a9fa0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004a9fa4
    CMP dword ptr [EAX + 0xbe28],0x0    ; 004a9fa8
    JZ 0x004a9fc9                       ; 004a9faf
        ;   XREF to: 004a9fc9 (CONDITIONAL_JUMP)  ; LAB_004a9fc9
    TEST EDX,EDX                        ; 004a9fb1
    JZ 0x004a9fbf                       ; 004a9fb3
        ;   XREF to: 004a9fbf (CONDITIONAL_JUMP)  ; LAB_004a9fbf
    MOV dword ptr [EAX + 0x240c],0x1    ; 004a9fb5
    PUSH EDX                            ; 004a9fbf
        ;   Label: LAB_004a9fbf
    PUSH EAX                            ; 004a9fc0
    CALL core_charactr.cpp_CCharacter_renderBackground_FUN_0042a390 ; 004a9fc1
        ;   XREF to: 0042a390 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_renderBackground_FUN_0042a390(CCharacter * this_ptr, int layer_flag)
    ADD ESP,0x8                         ; 004a9fc6
    RET                                 ; 004a9fc9
        ;   Label: LAB_004a9fc9

