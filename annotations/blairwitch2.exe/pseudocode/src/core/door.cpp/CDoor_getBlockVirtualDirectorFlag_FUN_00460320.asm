; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_door_cpp_CDoor_getBlockVirtualDirectorFlag_FUN_00460320(CDoor *this_ptr)
;
; Parameters:
; CDoor *          Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00460320
        ;   Label: core_door.cpp_CDoor_getBlockVirtualDirectorFlag_FUN_00460320
    MOV EAX,dword ptr [EAX + 0xb2c]     ; 00460324
    RET                                 ; 0046032a

