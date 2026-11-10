; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; EGroundType __cdecl core_door_cpp_CDoor_getGroundType_FUN_00460300(CDoor *this_ptr)
;
; Parameters:
; CDoor *          Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00460300
        ;   Label: core_door.cpp_CDoor_getGroundType_FUN_00460300
    MOV EAX,dword ptr [EAX + 0x430]     ; 00460304
    RET                                 ; 0046030a

