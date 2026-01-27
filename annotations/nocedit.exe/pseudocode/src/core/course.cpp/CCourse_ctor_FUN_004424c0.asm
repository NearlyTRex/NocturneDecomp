; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CCourse * core_course.cpp_CCourse_ctor_FUN_004424c0(CCourse * this_ptr)
;
; Parameters:
; CCourse *        Stack[0x4]:4   this_ptr
;
; XREF[7]:
;   core_bat.cpp_CBat_ctor_FUN_004147d0 at 004147e6
;   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 at 0047e23f
;   core_frankgen.cpp_CFrankenstienMachine_ctor_FUN_004d1720 at 004d1741
;   core_main.c_showDeveloperToolsMenu_FUN_005073a0 at 0050783a
;   core_marquee.cpp_CMarquee_ctor_FUN_0050bb60 at 0050bb75
;   core_platfrm.cpp_CPlatform_ctor_FUN_0054c850 at 0054c877
;   core_vehicle.cpp_CVehicle_ctor_FUN_005e7940 at 005e798e
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004424c0
        ;   Label: core_course.cpp_CCourse_ctor_FUN_004424c0
    MOV dword ptr [EAX + 0x4],0x0       ; 004424c4
    MOV dword ptr [EAX + 0x8],0x1       ; 004424cb
    MOV dword ptr [EAX],0x0             ; 004424d2
    RET                                 ; 004424d8

