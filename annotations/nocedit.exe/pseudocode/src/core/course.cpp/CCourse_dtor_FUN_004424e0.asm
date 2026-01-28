; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CCourse * __cdecl core_course_cpp_CCourse_dtor_FUN_004424e0(CCourse *this_ptr)
;
; Parameters:
; CCourse *        Stack[0x4]:4   this_ptr
;
; XREF[9]:
;   core_bat.cpp_CBat_dtor_FUN_00414fe0 at 00414ff5
;   core_conveyor.cpp_CPlatform_dtor_FUN_00442380 at 00442395
;   core_conveyor.cpp_dtor_FUN_00442310 at 00442325
;   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 at 0047e38e
;   core_frankgen.cpp_CFrankenstienMachine_dtor_FUN_004d28a0 at 004d28b5
;   core_main.c_showDeveloperToolsMenu_FUN_005073a0 at 0050785c
;   core_marquee.cpp_CMarquee_dtor_FUN_0050c4c0 at 0050c4d5
;   core_minecar.cpp_FUN_00520f40 at 00520f55
;   core_vehicle.cpp_CVehicle_dtor_FUN_005e8d20 at 005e8d35
;
; Called Functions:
;   core_course.cpp_CCourse_free_FUN_004426c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004424e0
        ;   Label: core_course.cpp_CCourse_dtor_FUN_004424e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004424e1
    PUSH EBX                            ; 004424e5
    CALL core_course.cpp_CCourse_free_FUN_004426c0 ; 004424e6
        ;   XREF to: 004426c0 (UNCONDITIONAL_CALL)  ; void core_course.cpp_CCourse_free_FUN_004426c0(CCourse * this_ptr)
    ADD ESP,0x4                         ; 004424eb
    MOV EAX,EBX                         ; 004424ee
    POP EBX                             ; 004424f0
    RET                                 ; 004424f1

