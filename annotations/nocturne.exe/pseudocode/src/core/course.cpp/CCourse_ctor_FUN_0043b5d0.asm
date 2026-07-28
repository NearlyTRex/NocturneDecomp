; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CCourse * __cdecl core_course_cpp_CCourse_ctor_FUN_0043b5d0(CCourse *this_ptr)
;
; Parameters:
; CCourse *        Stack[0x4]:4   this_ptr
;
; XREF[5]:
;   core_bat.cpp_FUN_00411a10 at 00411a26
;   core_frankgen.cpp_CFrankenstienMachine_ctor_FUN_00494630 at 00494651
;   core_marquee.cpp_CMarquee_ctor_FUN_004cc0e0 at 004cc0f5
;   core_platfrm.cpp_FUN_004f5d90 at 004f5db7
;   core_vehicle.cpp_CVehicle_ctor_FUN_0054e5a0 at 0054e5ee
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0043b5d0
        ;   Label: core_course.cpp_CCourse_ctor_FUN_0043b5d0
    MOV dword ptr [EAX + 0x4],0x0       ; 0043b5d4
    MOV dword ptr [EAX + 0x8],0x1       ; 0043b5db
    MOV dword ptr [EAX],0x0             ; 0043b5e2
    RET                                 ; 0043b5e8

