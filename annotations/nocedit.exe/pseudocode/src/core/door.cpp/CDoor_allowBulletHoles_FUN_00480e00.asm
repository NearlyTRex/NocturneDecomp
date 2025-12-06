; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_door.cpp_CDoor_allowBulletHoles_FUN_00480e00(CDoor * this_ptr)
;
; Parameters:
; CDoor *          Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00480e00
        ;   Label: core_door.cpp_CDoor_allowBulletHoles_FUN_00480e00
    MOV EAX,dword ptr [EAX + 0x9dc]     ; 00480e04
    RET                                 ; 00480e0a

