; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_hero_cpp_FUN_004d02b0(CCharacter *param_1,int param_2,CVector3f *param_3,float param_4)
;
;
; Called Functions:
;   core_charactr.cpp_FUN_00423900
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004d02b0
        ;   Label: core_hero.cpp_FUN_004d02b0
    MOV EDX,dword ptr [ESP + 0xc]       ; 004d02b4
    PUSH dword ptr [ESP + 0x10]         ; 004d02b8
    PUSH EDX                            ; 004d02bc
    MOV ECX,dword ptr [ESP + 0x10]      ; 004d02bd
    PUSH ECX                            ; 004d02c1
    PUSH EAX                            ; 004d02c2
    MOV dword ptr [EAX + 0x10a60],0x0   ; 004d02c3
    CALL core_charactr.cpp_FUN_00423900 ; 004d02cd
        ;   XREF to: 00423900 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00423900(CCharacter * this_ptr, int damage_type, CVector3f * damage_direction, float impact_force)
    ADD ESP,0x10                        ; 004d02d2
    RET                                 ; 004d02d5

