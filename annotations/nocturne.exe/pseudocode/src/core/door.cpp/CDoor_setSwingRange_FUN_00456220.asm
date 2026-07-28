; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_door_cpp_CDoor_setSwingRange_FUN_00456220(CDoor *this_ptr,float swing_range)
;
; Parameters:
; CDoor *          Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   swing_range
;
; XREF[2]:
;   core_hostage.cpp_FUN_004b6d80 at 004b7034
;   core_zombie.cpp_FUN_0055ef50 at 0055f7ba
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00456220
        ;   Label: core_door.cpp_CDoor_setSwingRange_FUN_00456220
    MOV EAX,dword ptr [ESP + 0x8]       ; 00456224
    MOV dword ptr [EDX + 0x9c4],EAX     ; 00456228
    RET                                 ; 0045622e

