; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; EGroundType __cdecl core_stairs_cpp_CStairs_getGroundType_FUN_00562230(CStairs *this_ptr)
;
; Parameters:
; CStairs *        Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00562230
        ;   Label: core_stairs.cpp_CStairs_getGroundType_FUN_00562230
    MOV EAX,dword ptr [EAX + 0xb8c]     ; 00562234
    RET                                 ; 0056223a

