; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_door_cpp_CDoor_setSwingRange_FUN_00480de0(CDoor *this_ptr,float swing_range)
;
; Parameters:
; CDoor *          Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   swing_range
;
; XREF[2]:
;   core_hostage.cpp_CHostage_process_FUN_004f4bd0 at 004f4e84
;   core_zombie.cpp_CZombie_process_FUN_005f9470 at 005f9cda
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00480de0
        ;   Label: core_door.cpp_CDoor_setSwingRange_FUN_00480de0
    MOV EAX,dword ptr [ESP + 0x8]       ; 00480de4
    MOV dword ptr [EDX + 0x9cc],EAX     ; 00480de8
    RET                                 ; 00480dee

