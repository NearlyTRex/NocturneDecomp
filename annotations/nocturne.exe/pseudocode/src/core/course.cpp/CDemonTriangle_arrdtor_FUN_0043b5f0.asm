; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonTriangle * __cdecl core_course_cpp_CDemonTriangle_arrdtor_FUN_0043b5f0(CDemonTriangle *objs,uint flags)
;
; Parameters:
; CDemonTriangle * Stack[0x4]:4   objs
; uint             Stack[0x8]:4   flags
;
; XREF[7]:
;   core_bat.cpp_CStairs_dtor_FUN_00412000 at 00412015
;   core_conveyor.cpp_CConveyor_dtor_FUN_0043b420 at 0043b435
;   core_conveyor.cpp_CPlatform_dtor_FUN_0043b490 at 0043b4a5
;   core_frankgen.cpp_CFrankenstienMachine_dtor_FUN_00495430 at 00495445
;   core_marquee.cpp_CMarquee_dtor_FUN_004cc960 at 004cc975
;   core_minecar.cpp_CMineCar_dtor_FUN_004d60d0 at 004d60e5
;   core_vehicle.cpp_CVehicle_dtor_FUN_0054f7f0 at 0054f805
;
; Called Functions:
;   core_course.cpp_CCourse_free_FUN_0043b7c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043b5f0
        ;   Label: core_course.cpp_CDemonTriangle_arrdtor_FUN_0043b5f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0043b5f1
    PUSH EBX                            ; 0043b5f5
    CALL core_course.cpp_CCourse_free_FUN_0043b7c0 ; 0043b5f6
        ;   XREF to: 0043b7c0 (UNCONDITIONAL_CALL)  ; void core_course.cpp_CCourse_free_FUN_0043b7c0(CCourse * this_ptr)
    ADD ESP,0x4                         ; 0043b5fb
    MOV EAX,EBX                         ; 0043b5fe
    POP EBX                             ; 0043b600
    RET                                 ; 0043b601

