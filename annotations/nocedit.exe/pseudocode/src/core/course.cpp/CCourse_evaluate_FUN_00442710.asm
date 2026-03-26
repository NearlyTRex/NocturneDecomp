; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_course_cpp_CCourse_evaluate_FUN_00442710(CCourse *this_ptr,float time,CVector3f *out_pos,CVector3f *out_euler)
;
; Parameters:
; CCourse *        Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   time
; CVector3f *      Stack[0xc]:4   out_pos
; CVector3f *      Stack[0x10]:4   out_euler
; Local Variables:
; CMatrix3x3f      Stack[-0x88]:36  local_88
; CMatrix3x4f      Stack[-0x58]:48  local_58
; CQuaternion4f    Stack[-0x28]:16  local_28
; CVector3f        Stack[-0x18]:12  local_18
;
; XREF[9]:
;   core_bat.cpp_CBat_updateCoursePosition_FUN_00414ce0 at 00414d7f
;   core_course.cpp_CCourse_preview_FUN_00443bc0 at 00443c86
;   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 at 0047e268
;   core_frankgen.cpp_CFrankenstienMachine_setCourseFrame_FUN_004d2430 at 004d24ae
;   core_marquee.cpp_CMarquee_computeBoundingBox_FUN_0050bc30 at 0050bca4
;   core_marquee.cpp_CMarquee_renderTransparent_FUN_0050c050 at 0050c102
;   core_moon.cpp_CMoon_render_FUN_00529ed0 at 0052a036
;   core_platfrm.cpp_CPlatform_evaluatePosition_FUN_0054cab0 at 0054cbed
;   core_vehicle.cpp_CVehicle_process_FUN_005e7e80 at 005e7f48
;
; Called Functions:
;   core_course.cpp_CCourse_interpolate_FUN_004427a0
;   core_xform.cpp_matrixToEulerAngles_FUN_005f5690
;   core_xform.cpp_quaternionToMatrix3x4_FUN_005f73e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00442710
        ;   Label: core_course.cpp_CCourse_evaluate_FUN_00442710
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
    CALL core_course.cpp_CCourse_interpolate_FUN_004427a0 ; 00442739
        ;   XREF to: 004427a0 (UNCONDITIONAL_CALL)  ; void core_course.cpp_CCourse_interpolate_FUN_004427a0(CCourse * this_ptr, float time, CVector3f * out_pos, CQuaternion4f * out_orient)
    ADD ESP,0x10                        ; 0044273e
    LEA EAX,[ESP + 0x70]                ; 00442741
    PUSH EAX                            ; 00442745
    LEA EAX,[ESP + 0x64]                ; 00442746
    PUSH EAX                            ; 0044274a
    LEA ESI,[ESP + 0x38]                ; 0044274b
    LEA EDI,[ESP + 0x8]                 ; 0044274f
    CALL core_xform.cpp_quaternionToMatrix3x4_FUN_005f73e0 ; 00442753
        ;   XREF to: 005f73e0 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_quaternionToMatrix3x4_FUN_005f73e0(CQuaternion4f * quat_in, CMatrix3x4f * matrix_out)
    JMP 0x03fc45a3                      ; 00442758
        ;   XREF to: 03fc45a3 (UNCONDITIONAL_JUMP)  ; LAB_03fc45a3
    CALL core_xform.cpp_matrixToEulerAngles_FUN_005f5690 ; 0044276b
        ;   XREF to: 005f5690 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_matrixToEulerAngles_FUN_005f5690(CMatrix3x3f * matrix_in, CVector3f * euler_out)
        ;   Label: LAB_0044276b
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
    MOV ECX,0xc                         ; 03fc45a3
        ;   Label: LAB_03fc45a3
    ADD ESP,0x4                         ; 03fc45a8
    LEA EAX,[ESP + 0x4]                 ; 03fc45ab
    LEA ESI,[ESP + 0x34]                ; 03fc45af
    PUSH EAX                            ; 03fc45b3
    MOV ECX,dword ptr [ESI]             ; 03fc45b4
    MOV dword ptr [EDI],ECX             ; 03fc45b6
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc45b8
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc45bb
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc45be
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc45c1
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc45c4
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc45c7
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc45ca
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc45cd
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc45d0
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc45d3
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc45d6
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc45d9
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc45dc
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc45df
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc45e2
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc45e5
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc45e8
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc45eb
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc45ee
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc45f1
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc45f4
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc45f7
    ADD ESI,0x30                        ; 03fc45fa
    ADD EDI,0x30                        ; 03fc45fd
    XOR ECX,ECX                         ; 03fc4600
    JMP 0x0044276b                      ; 03fc4602
        ;   XREF to: 0044276b (UNCONDITIONAL_JUMP)  ; LAB_0044276b

