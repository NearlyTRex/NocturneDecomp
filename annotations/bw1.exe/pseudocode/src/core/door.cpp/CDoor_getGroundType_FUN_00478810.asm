; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; EGroundType __cdecl core_door_cpp_CDoor_getGroundType_FUN_00478810(CDoor *this_ptr)
;
; Parameters:
; CDoor *          Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00478810
        ;   Label: core_door.cpp_CDoor_getGroundType_FUN_00478810
    MOV EAX,dword ptr [EAX + 0x2d4]     ; 00478814
    RET                                 ; 0047881a

