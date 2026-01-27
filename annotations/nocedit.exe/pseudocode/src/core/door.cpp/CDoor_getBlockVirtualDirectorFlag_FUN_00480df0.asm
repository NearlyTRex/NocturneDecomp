; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_door.cpp_CDoor_getBlockVirtualDirectorFlag_FUN_00480df0(CDoor * this_ptr)
;
; Parameters:
; CDoor *          Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00480df0
        ;   Label: core_door.cpp_CDoor_getBlockVirtualDirectorFlag_FUN_00480df0
    MOV EAX,dword ptr [EAX + 0x9d0]     ; 00480df4
    RET                                 ; 00480dfa

