; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_door_cpp_CDoor_getBlockVirtualDirectorFlag_FUN_00465070(CDoor *this_ptr)
;
; Parameters:
; CDoor *          Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00465070
        ;   Label: core_door.cpp_CDoor_getBlockVirtualDirectorFlag_FUN_00465070
    MOV EAX,dword ptr [EAX + 0x9d0]     ; 00465074
    RET                                 ; 0046507a

