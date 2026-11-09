; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBaronWeapon * __cdecl core_baron_cpp_CBaronWeapon_ctor_FUN_004108e0(CBaronWeapon *this_ptr)
;
; Parameters:
; CBaronWeapon *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_baron.cpp_FUN_004108b0 at 004108c3
;
; Called Functions:
;   core_weapon.cpp_CWeapon_ctor_FUN_005899d0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004108e0
        ;   Label: core_baron.cpp_CBaronWeapon_ctor_FUN_004108e0
    PUSH EDX                            ; 004108e4
    CALL core_weapon.cpp_CWeapon_ctor_FUN_005899d0 ; 004108e5
        ;   XREF to: 005899d0 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_ctor_FUN_005899d0(CWeapon * this_ptr)
    MOV dword ptr [EAX + 0x2b0],0x5f2b14 ; 004108ea
    MOV dword ptr [EAX + 0x43c],0x9     ; 004108f4
    MOV dword ptr [EAX + 0x440],0x0     ; 004108fe
    MOV dword ptr [EAX + 0x444],0x43480000 ; 00410908
    MOV dword ptr [EAX + 0x448],0x0     ; 00410912
    MOV dword ptr [EAX + 0x44c],0x0     ; 0041091c
    ADD ESP,0x4                         ; 00410926
    MOV dword ptr [EAX + 0x6d4],0x0     ; 00410929
    RET                                 ; 00410933

