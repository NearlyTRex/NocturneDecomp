; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_door_cpp_CDoor_getBlockVirtualDirectorFlag_FUN_00456230(CDoor *this_ptr)
;
; Parameters:
; CDoor *          Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00456230
        ;   Label: core_door.cpp_CDoor_getBlockVirtualDirectorFlag_FUN_00456230
    MOV EAX,dword ptr [EAX + 0x9c8]     ; 00456234
    RET                                 ; 0045623a

