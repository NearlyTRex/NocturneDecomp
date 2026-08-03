; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; EGroundType __cdecl core_stairs_cpp_CStairs_getGroundType_FUN_00534ac0(CStairs *this_ptr)
;
; Parameters:
; CStairs *        Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00534ac0
        ;   Label: core_stairs.cpp_CStairs_getGroundType_FUN_00534ac0
    MOV EAX,dword ptr [EAX + 0xa28]     ; 00534ac4
    RET                                 ; 00534aca

