; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_door_cpp_CDoor_setSwingRange_FUN_00460310(CDoor *this_ptr,float swing_range)
;
; Parameters:
; CDoor *          Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   swing_range
;
; XREF[2]:
;   core_hostage.cpp_CHostage_process_FUN_004d1660 at 004d197d
;   core_zombie.cpp_CZombie_process_FUN_00595f30 at 00596947
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00460310
        ;   Label: core_door.cpp_CDoor_setSwingRange_FUN_00460310
    MOV EAX,dword ptr [ESP + 0x8]       ; 00460314
    MOV dword ptr [EDX + 0xb28],EAX     ; 00460318
    RET                                 ; 0046031e

