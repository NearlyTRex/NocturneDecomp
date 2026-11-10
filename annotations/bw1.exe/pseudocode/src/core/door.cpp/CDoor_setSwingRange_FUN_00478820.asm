; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_door_cpp_CDoor_setSwingRange_FUN_00478820(CDoor *this_ptr,float swing_range)
;
; Parameters:
; CDoor *          Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   swing_range
;
; XREF[3]:
;   core_carved.cpp_CCarved_process_FUN_00428ae0 at 004294f9
;   core_hostage.cpp_CHostage_process_FUN_004ed890 at 004edbad
;   core_zombie.cpp_CZombie_process_FUN_005bafb0 at 005bb9c7
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00478820
        ;   Label: core_door.cpp_CDoor_setSwingRange_FUN_00478820
    MOV EAX,dword ptr [ESP + 0x8]       ; 00478824
    MOV dword ptr [EDX + 0x9cc],EAX     ; 00478828
    RET                                 ; 0047882e

