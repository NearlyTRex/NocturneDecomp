; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; EGroundType __cdecl core_door_cpp_CDoor_getGroundType_FUN_00456210(CDoor *this_ptr)
;
; Parameters:
; CDoor *          Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00456210
        ;   Label: core_door.cpp_CDoor_getGroundType_FUN_00456210
    MOV EAX,dword ptr [EAX + 0x2cc]     ; 00456214
    RET                                 ; 0045621a

