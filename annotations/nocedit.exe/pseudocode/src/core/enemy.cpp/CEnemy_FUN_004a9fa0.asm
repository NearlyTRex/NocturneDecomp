; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_enemy.cpp_CEnemy_FUN_004a9fa0(CEnemy * this_ptr)
;
; Parameters:
; CEnemy *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_ghoul.cpp_FUN_004e8190 at 004e81ae
;
; Called Functions:
;   core_charactr.cpp_CCharacter_FUN_0042a390
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004a9fa0
        ;   Label: core_enemy.cpp_CEnemy_FUN_004a9fa0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004a9fa4
    CMP dword ptr [EAX + 0xbe28],0x0    ; 004a9fa8
    JZ 0x004a9fc9                       ; 004a9faf | LAB_004a9fc9
        ;   XREF to: 004a9fc9 (CONDITIONAL_JUMP)
    TEST EDX,EDX                        ; 004a9fb1
    JZ 0x004a9fbf                       ; 004a9fb3 | LAB_004a9fbf
        ;   XREF to: 004a9fbf (CONDITIONAL_JUMP)
    MOV dword ptr [EAX + 0x240c],0x1    ; 004a9fb5
    PUSH EDX                            ; 004a9fbf
        ;   Label: LAB_004a9fbf
    PUSH EAX                            ; 004a9fc0
    CALL core_charactr.cpp_CCharacter_FUN_0042a390 ; 004a9fc1 | void core_charactr.cpp_CCharacter_FUN_0042a390(CCharacter * this_ptr)
        ;   XREF to: 0042a390 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004a9fc6
    RET                                 ; 004a9fc9
        ;   Label: LAB_004a9fc9

