; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CCourse * __cdecl core_course_cpp_CCourse_ctor_FUN_00447d10(CCourse *this_ptr)
;
; Parameters:
; CCourse *        Stack[0x4]:4   this_ptr
;
; XREF[5]:
;   core_bat.cpp_CBat_ctor_FUN_00410b50 at 00410b66
;   core_frankgen.cpp_CFrankenstienMachine_ctor_FUN_004c5150 at 004c5171
;   core_marquee.cpp_CMarquee_ctor_FUN_00506920 at 00506935
;   core_platfrm.cpp_CPlatform_ctor_FUN_00539400 at 00539427
;   core_vehicle.cpp_CVehicle_ctor_FUN_005a7620 at 005a766e
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00447d10
        ;   Label: core_course.cpp_CCourse_ctor_FUN_00447d10
    MOV dword ptr [EAX + 0x4],0x0       ; 00447d14
    MOV dword ptr [EAX + 0x8],0x1       ; 00447d1b
    MOV dword ptr [EAX],0x0             ; 00447d22
    RET                                 ; 00447d28

