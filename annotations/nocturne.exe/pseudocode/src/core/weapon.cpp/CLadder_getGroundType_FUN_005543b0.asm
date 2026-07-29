; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; EGroundType __cdecl core_weapon_cpp_CLadder_getGroundType_FUN_005543b0(CLadder *this_ptr)
;
; Parameters:
; CLadder *        Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005543b0
        ;   Label: core_weapon.cpp_CLadder_getGroundType_FUN_005543b0
    MOV EAX,dword ptr [EAX + 0x2fc]     ; 005543b4
    RET                                 ; 005543ba

