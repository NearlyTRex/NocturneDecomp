; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_door_cpp_CDoor_allowBulletHoles_FUN_00456240(CDoor *this_ptr)
;
; Parameters:
; CDoor *          Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00456240
        ;   Label: core_door.cpp_CDoor_allowBulletHoles_FUN_00456240
    MOV EAX,dword ptr [EAX + 0x9d4]     ; 00456244
    RET                                 ; 0045624a

