; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_door_cpp_CDoor_allowBulletHoles_FUN_00460330(CDoor *this_ptr)
;
; Parameters:
; CDoor *          Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00460330
        ;   Label: core_door.cpp_CDoor_allowBulletHoles_FUN_00460330
    MOV EAX,dword ptr [EAX + 0xb38]     ; 00460334
    RET                                 ; 0046033a

