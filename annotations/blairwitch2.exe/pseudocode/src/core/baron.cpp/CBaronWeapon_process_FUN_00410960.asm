; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_baron_cpp_CBaronWeapon_process_FUN_00410960(CBaronWeapon *this_ptr,float delta_time)
;
; Parameters:
; CBaronWeapon *   Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Called Functions:
;   core_baron.cpp_FUN_00410ac0
;   core_weapon.cpp_FUN_00589c80
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00410960
        ;   Label: core_baron.cpp_CBaronWeapon_process_FUN_00410960
    PUSH EDX                            ; 00410964
    CALL core_baron.cpp_FUN_00410ac0    ; 00410965
        ;   XREF to: 00410ac0 (UNCONDITIONAL_CALL)  ; void core_baron.cpp_FUN_00410ac0(CBaronWeapon * this_ptr)
    ADD ESP,0x4                         ; 0041096a
    MOV ECX,dword ptr [ESP + 0x4]       ; 0041096d
    PUSH dword ptr [ESP + 0x8]          ; 00410971
    PUSH ECX                            ; 00410975
    CALL core_weapon.cpp_FUN_00589c80   ; 00410976
        ;   XREF to: 00589c80 (UNCONDITIONAL_CALL)  ; undefined core_weapon.cpp_FUN_00589c80()
    ADD ESP,0x8                         ; 0041097b
    RET                                 ; 0041097e

