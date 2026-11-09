; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_hero_cpp_FUN_004ec540(CCharacter *param_1,int param_2,CVector3f *param_3,float param_4)
;
;
; Called Functions:
;   core_charactr.cpp_FUN_0042d5f0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004ec540
        ;   Label: core_hero.cpp_FUN_004ec540
    MOV EDX,dword ptr [ESP + 0xc]       ; 004ec544
    PUSH dword ptr [ESP + 0x10]         ; 004ec548
    PUSH EDX                            ; 004ec54c
    MOV ECX,dword ptr [ESP + 0x10]      ; 004ec54d
    PUSH ECX                            ; 004ec551
    PUSH EAX                            ; 004ec552
    MOV dword ptr [EAX + 0xc1d0],0x0    ; 004ec553
    CALL core_charactr.cpp_FUN_0042d5f0 ; 004ec55d
        ;   XREF to: 0042d5f0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042d5f0(CCharacter * this_ptr, int damage_type, CVector3f * damage_direction, float impact_force)
    ADD ESP,0x10                        ; 004ec562
    RET                                 ; 004ec565

