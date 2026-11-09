; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_baron_cpp_CBaronWeapon_process_FUN_004104e0(CBaronWeapon *this_ptr,float delta_time)
;
; Parameters:
; CBaronWeapon *   Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Called Functions:
;   core_baron.cpp_FUN_00410640
;   core_weapon.cpp_CWeapon_process_FUN_005ad770
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004104e0
        ;   Label: core_baron.cpp_CBaronWeapon_process_FUN_004104e0
    PUSH EDX                            ; 004104e4
    CALL core_baron.cpp_FUN_00410640    ; 004104e5
        ;   XREF to: 00410640 (UNCONDITIONAL_CALL)  ; void core_baron.cpp_FUN_00410640(CBaronWeapon * this_ptr)
    ADD ESP,0x4                         ; 004104ea
    MOV ECX,dword ptr [ESP + 0x4]       ; 004104ed
    PUSH dword ptr [ESP + 0x8]          ; 004104f1
    PUSH ECX                            ; 004104f5
    CALL core_weapon.cpp_CWeapon_process_FUN_005ad770 ; 004104f6
        ;   XREF to: 005ad770 (UNCONDITIONAL_CALL)  ; void core_weapon.cpp_CWeapon_process_FUN_005ad770(CWeapon * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004104fb
    RET                                 ; 004104fe

