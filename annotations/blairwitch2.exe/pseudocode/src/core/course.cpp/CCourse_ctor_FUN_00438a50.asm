; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CCourse * __cdecl core_course_cpp_CCourse_ctor_FUN_00438a50(CCourse *this_ptr)
;
; Parameters:
; CCourse *        Stack[0x4]:4   this_ptr
;
; XREF[5]:
;   core_bat.cpp_CBat_ctor_FUN_00410fd0 at 00410fe6
;   core_frankgen.cpp_CFrankenstienMachine_ctor_FUN_004ac1a0 at 004ac1c1
;   core_marquee.cpp_CMarquee_ctor_FUN_004e7c80 at 004e7c95
;   core_platfrm.cpp_CPlatform_ctor_FUN_005180b0 at 005180d7
;   core_vehicle.cpp_CVehicle_ctor_FUN_005839f0 at 00583a3e
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00438a50
        ;   Label: core_course.cpp_CCourse_ctor_FUN_00438a50
    MOV dword ptr [EAX + 0x4],0x0       ; 00438a54
    MOV dword ptr [EAX + 0x8],0x1       ; 00438a5b
    MOV dword ptr [EAX],0x0             ; 00438a62
    RET                                 ; 00438a68

