; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CCourse * __cdecl core_course_cpp_CCourse_dtor_FUN_00438a70(CCourse *this_ptr,uint flags)
;
; Parameters:
; CCourse *        Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[7]:
;   core_bat.cpp_CBat_dtor_FUN_004115c0 at 004115d5
;   core_conveyor.cpp_CConveyor_dtor_FUN_004388b0 at 004388c5
;   core_conveyor.cpp_CPlatform_dtor_FUN_00438920 at 00438935
;   core_frankgen.cpp_CFrankenstienMachine_dtor_FUN_004ad050 at 004ad065
;   core_marquee.cpp_CMarquee_dtor_FUN_004e85b0 at 004e85c5
;   core_minecar.cpp_CMineCar_dtor_FUN_004f2120 at 004f2135
;   core_vehicle.cpp_CVehicle_dtor_FUN_00584de0 at 00584df5
;
; Called Functions:
;   core_course.cpp_FUN_00438c20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00438a70
        ;   Label: core_course.cpp_CCourse_dtor_FUN_00438a70
    MOV EBX,dword ptr [ESP + 0x8]       ; 00438a71
    PUSH EBX                            ; 00438a75
    CALL core_course.cpp_FUN_00438c20   ; 00438a76
        ;   XREF to: 00438c20 (UNCONDITIONAL_CALL)  ; undefined core_course.cpp_FUN_00438c20()
    ADD ESP,0x4                         ; 00438a7b
    MOV EAX,EBX                         ; 00438a7e
    POP EBX                             ; 00438a80
    RET                                 ; 00438a81

