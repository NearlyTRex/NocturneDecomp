; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CCourse * __cdecl core_course_cpp_CCourse_dtor_FUN_00447d30(CCourse *this_ptr,uint flags)
;
; Parameters:
; CCourse *        Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[7]:
;   core_bat.cpp_CBat_dtor_FUN_00411140 at 00411155
;   core_conveyor.cpp_CConveyor_dtor_FUN_00447b70 at 00447b85
;   core_conveyor.cpp_CPlatform_dtor_FUN_00447be0 at 00447bf5
;   core_frankgen.cpp_CFrankenstienMachine_dtor_FUN_004c6000 at 004c6015
;   core_marquee.cpp_CMarquee_dtor_FUN_00507250 at 00507265
;   core_minecar.cpp_CMineCar_dtor_FUN_00510eb0 at 00510ec5
;   core_vehicle.cpp_CVehicle_dtor_FUN_005a8a10 at 005a8a25
;
; Called Functions:
;   core_course.cpp_FUN_00447ee0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00447d30
        ;   Label: core_course.cpp_CCourse_dtor_FUN_00447d30
    MOV EBX,dword ptr [ESP + 0x8]       ; 00447d31
    PUSH EBX                            ; 00447d35
    CALL core_course.cpp_FUN_00447ee0   ; 00447d36
        ;   XREF to: 00447ee0 (UNCONDITIONAL_CALL)  ; undefined core_course.cpp_FUN_00447ee0()
    ADD ESP,0x4                         ; 00447d3b
    MOV EAX,EBX                         ; 00447d3e
    POP EBX                             ; 00447d40
    RET                                 ; 00447d41

