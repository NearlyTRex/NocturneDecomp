; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_door_cpp_CDoor_setSwingRange_FUN_00465060(CDoor *this_ptr,float swing_range)
;
; Parameters:
; CDoor *          Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   swing_range
;
; XREF[2]:
;   core_carved.cpp_FUN_00425da0 at 004267c9
;   core_demnfolk.cpp_FUN_00455080 at 00455acc
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00465060
        ;   Label: core_door.cpp_CDoor_setSwingRange_FUN_00465060
    MOV EAX,dword ptr [ESP + 0x8]       ; 00465064
    MOV dword ptr [EDX + 0x9cc],EAX     ; 00465068
    RET                                 ; 0046506e

