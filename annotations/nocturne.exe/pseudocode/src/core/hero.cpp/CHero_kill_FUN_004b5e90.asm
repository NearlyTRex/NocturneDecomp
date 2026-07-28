; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_hero_cpp_CHero_kill_FUN_004b5e90(CCharacter *param_1,int param_2,CVector3f *param_3,float param_4)
;
;
; Called Functions:
;   core_charactr.cpp_CCharacter_kill_FUN_00424f40
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004b5e90
        ;   Label: core_hero.cpp_CHero_kill_FUN_004b5e90
    MOV EDX,dword ptr [ESP + 0xc]       ; 004b5e94
    PUSH dword ptr [ESP + 0x10]         ; 004b5e98
    PUSH EDX                            ; 004b5e9c
    MOV ECX,dword ptr [ESP + 0x10]      ; 004b5e9d
    PUSH ECX                            ; 004b5ea1
    PUSH EAX                            ; 004b5ea2
    MOV dword ptr [EAX + 0xbc8c],0x0    ; 004b5ea3
    CALL core_charactr.cpp_CCharacter_kill_FUN_00424f40 ; 004b5ead
        ;   XREF to: 00424f40 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_kill_FUN_00424f40(CCharacter * this_ptr, int damage_type, CVector3f * damage_direction, float impact_force)
    ADD ESP,0x10                        ; 004b5eb2
    RET                                 ; 004b5eb5

