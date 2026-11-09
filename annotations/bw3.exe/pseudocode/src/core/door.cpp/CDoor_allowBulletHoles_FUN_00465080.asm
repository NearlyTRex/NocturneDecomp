; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_door_cpp_CDoor_allowBulletHoles_FUN_00465080(CDoor *this_ptr)
;
; Parameters:
; CDoor *          Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00465080
        ;   Label: core_door.cpp_CDoor_allowBulletHoles_FUN_00465080
    MOV EAX,dword ptr [EAX + 0x9dc]     ; 00465084
    RET                                 ; 0046508a

