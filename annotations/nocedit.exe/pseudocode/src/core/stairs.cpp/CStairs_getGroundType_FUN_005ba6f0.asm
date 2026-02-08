; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_stairs_cpp_CStairs_getGroundType_FUN_005ba6f0(CStairs *this_ptr)
;
; Parameters:
; CStairs *        Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005ba6f0
        ;   Label: core_stairs.cpp_CStairs_getGroundType_FUN_005ba6f0
    MOV EAX,dword ptr [EAX + 0xa30]     ; 005ba6f4
    RET                                 ; 005ba6fa

