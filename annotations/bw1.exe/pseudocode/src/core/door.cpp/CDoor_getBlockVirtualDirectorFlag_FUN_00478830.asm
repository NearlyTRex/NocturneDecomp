; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_door_cpp_CDoor_getBlockVirtualDirectorFlag_FUN_00478830(CDoor *this_ptr)
;
; Parameters:
; CDoor *          Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00478830
        ;   Label: core_door.cpp_CDoor_getBlockVirtualDirectorFlag_FUN_00478830
    MOV EAX,dword ptr [EAX + 0x9d0]     ; 00478834
    RET                                 ; 0047883a

