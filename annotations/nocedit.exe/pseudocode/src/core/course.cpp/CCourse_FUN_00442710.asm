; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_course_cpp_CCourse_FUN_00442710(CCourse *this_ptr)
;
; Parameters:
; CCourse *        Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x88]:1  local_88
; undefined1       Stack[-0x58]:1  local_58
; undefined1       Stack[-0x28]:1  local_28
; undefined1       Stack[-0x18]:1  local_18
;
; XREF[9]:
;   core_bat.cpp_CBat_FUN_00414ce0 at 00414d7f
;   core_course.cpp_FUN_00443bc0 at 00443c86
;   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 at 0047e268
;   core_frankgen.cpp_CFrankenstienMachine_setCourseFrame_FUN_004d2430 at 004d24ae
;   core_marquee.cpp_CMarquee_FUN_0050bc30 at 0050bca4
;   core_marquee.cpp_CMarquee_renderTransparent_FUN_0050c050 at 0050c102
;   core_moon.cpp_CMoon_render_FUN_00529ed0 at 0052a036
;   core_platfrm.cpp_CPlatform_FUN_0054cab0 at 0054cbed
;   core_vehicle.cpp_CVehicle_process_FUN_005e7e80 at 005e7f48
;
; Called Functions:
;   core_course.cpp_CCourse_FUN_004427a0
;   core_xform.cpp_matrixToEulerAngles_FUN_005f5690
;   core_xform.cpp_quaternionToMatrix3x4_FUN_005f73e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00442710
        ;   Label: core_course.cpp_CCourse_FUN_00442710
    PUSH ESI                            ; 00442711
    PUSH EDI                            ; 00442712
    SUB ESP,0x7c                        ; 00442713
    MOV EBX,dword ptr [ESP + 0x98]      ; 00442716
    LEA EAX,[ESP + 0x60]                ; 0044271d
    PUSH EAX                            ; 00442721
    MOV EDX,dword ptr [ESP + 0x98]      ; 00442722
    PUSH EDX                            ; 00442729
    MOV ECX,dword ptr [ESP + 0x94]      ; 0044272a
    PUSH dword ptr [ESP + 0x98]         ; 00442731
    PUSH ECX                            ; 00442738
    CALL core_course.cpp_CCourse_FUN_004427a0 ; 00442739
        ;   XREF to: 004427a0 (UNCONDITIONAL_CALL)  ; void core_course.cpp_CCourse_FUN_004427a0()
    ADD ESP,0x10                        ; 0044273e
    LEA EAX,[ESP + 0x70]                ; 00442741
    PUSH EAX                            ; 00442745
    LEA EAX,[ESP + 0x64]                ; 00442746
    PUSH EAX                            ; 0044274a
    LEA ESI,[ESP + 0x38]                ; 0044274b
    LEA EDI,[ESP + 0x8]                 ; 0044274f
    CALL core_xform.cpp_quaternionToMatrix3x4_FUN_005f73e0 ; 00442753
        ;   XREF to: 005f73e0 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_quaternionToMatrix3x4_FUN_005f73e0(CQuaternion4f * quat_in, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 00442758
    ADD ESP,0x4                         ; 0044275d
    LEA EAX,[ESP + 0x4]                 ; 00442760
    LEA ESI,[ESP + 0x34]                ; 00442764
    PUSH EAX                            ; 00442768
    MOVSD.REP ES:EDI,ESI                ; 00442769
    CALL core_xform.cpp_matrixToEulerAngles_FUN_005f5690 ; 0044276b
        ;   XREF to: 005f5690 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_matrixToEulerAngles_FUN_005f5690(CMatrix3x3f * matrix_in, CVector3f * euler_out)
    ADD ESP,0x8                         ; 00442770
    CMP EBX,EAX                         ; 00442773
    JNZ 0x0044277e                      ; 00442775
        ;   XREF to: 0044277e (CONDITIONAL_JUMP)  ; LAB_0044277e
    ADD ESP,0x7c                        ; 00442777
    POP EDI                             ; 0044277a
    POP ESI                             ; 0044277b
    POP EBX                             ; 0044277c
    RET                                 ; 0044277d
    MOV EDX,dword ptr [EAX]             ; 0044277e
        ;   Label: LAB_0044277e
    MOV dword ptr [EBX],EDX             ; 00442780
    MOV EDX,dword ptr [EAX + 0x4]       ; 00442782
    MOV dword ptr [EBX + 0x4],EDX       ; 00442785
    MOV EDX,dword ptr [EAX + 0x8]       ; 00442788
    MOV dword ptr [EBX + 0x8],EDX       ; 0044278b
    ADD ESP,0x7c                        ; 0044278e
    POP EDI                             ; 00442791
    POP ESI                             ; 00442792
    POP EBX                             ; 00442793
    RET                                 ; 00442794

