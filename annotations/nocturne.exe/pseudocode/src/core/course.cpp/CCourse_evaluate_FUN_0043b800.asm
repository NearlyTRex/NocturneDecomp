; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_course_cpp_CCourse_evaluate_FUN_0043b800(CCourse *this_ptr,float time,CVector3f *out_pos,CVector3f *out_euler)
;
; Parameters:
; CCourse *        Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   time
; CVector3f *      Stack[0xc]:4   out_pos
; CVector3f *      Stack[0x10]:4   out_euler
; Local Variables:
; undefined        Stack[-0x88]:1  local_88
; undefined        Stack[-0x58]:1  local_58
; undefined        Stack[-0x28]:1  local_28
; undefined        Stack[-0x18]:1  local_18
;
; XREF[7]:
;   core_bat.cpp_CBat_updateCoursePosition_FUN_00411f20 at 00411fbf
;   core_frankgen.cpp_CFrankenstienMachine_setCourseFrame_FUN_00495340 at 004953be
;   core_marquee.cpp_CMarquee_computeBoundingBox_FUN_004cc1b0 at 004cc224
;   core_marquee.cpp_CMarquee_renderTransparent_FUN_004cc5d0 at 004cc682
;   core_moon.cpp_CMoon_render_FUN_004dec50 at 004dedb6
;   core_platfrm.cpp_CPlatform_evaluatePosition_FUN_004f5ff0 at 004f612d
;   core_vehicle.cpp_CVehicle_process_FUN_0054eae0 at 0054eb37
;
; Called Functions:
;   core_course.cpp_CCourse_interpolate_FUN_0043b890
;   core_xform.cpp_matrixToEulerAngles_FUN_0055b180
;   core_xform.cpp_quaternionToMatrix3x4_FUN_0055ced0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043b800
        ;   Label: core_course.cpp_CCourse_evaluate_FUN_0043b800
    PUSH ESI                            ; 0043b801
    PUSH EDI                            ; 0043b802
    SUB ESP,0x7c                        ; 0043b803
    MOV EBX,dword ptr [ESP + 0x98]      ; 0043b806
    LEA EAX,[ESP + 0x60]                ; 0043b80d
    PUSH EAX                            ; 0043b811
    MOV EDX,dword ptr [ESP + 0x98]      ; 0043b812
    PUSH EDX                            ; 0043b819
    MOV ECX,dword ptr [ESP + 0x94]      ; 0043b81a
    PUSH dword ptr [ESP + 0x98]         ; 0043b821
    PUSH ECX                            ; 0043b828
    CALL core_course.cpp_CCourse_interpolate_FUN_0043b890 ; 0043b829
        ;   XREF to: 0043b890 (UNCONDITIONAL_CALL)  ; void core_course.cpp_CCourse_interpolate_FUN_0043b890(CCourse * this_ptr, float time, CVector3f * out_pos, CQuaternion4f * out_orient)
    ADD ESP,0x10                        ; 0043b82e
    LEA EAX,[ESP + 0x70]                ; 0043b831
    PUSH EAX                            ; 0043b835
    LEA EAX,[ESP + 0x64]                ; 0043b836
    PUSH EAX                            ; 0043b83a
    LEA ESI,[ESP + 0x38]                ; 0043b83b
    LEA EDI,[ESP + 0x8]                 ; 0043b83f
    CALL core_xform.cpp_quaternionToMatrix3x4_FUN_0055ced0 ; 0043b843
        ;   XREF to: 0055ced0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionToMatrix3x4_FUN_0055ced0()
    MOV ECX,0xc                         ; 0043b848
    ADD ESP,0x4                         ; 0043b84d
    LEA EAX,[ESP + 0x4]                 ; 0043b850
    LEA ESI,[ESP + 0x34]                ; 0043b854
    PUSH EAX                            ; 0043b858
    MOVSD.REP ES:EDI,ESI                ; 0043b859
    CALL core_xform.cpp_matrixToEulerAngles_FUN_0055b180 ; 0043b85b
        ;   XREF to: 0055b180 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_matrixToEulerAngles_FUN_0055b180(CMatrix3x4f * matrix_in, CVector3f * euler_out)
    ADD ESP,0x8                         ; 0043b860
    CMP EBX,EAX                         ; 0043b863
    JNZ 0x0043b86e                      ; 0043b865
        ;   XREF to: 0043b86e (CONDITIONAL_JUMP)  ; LAB_0043b86e
    ADD ESP,0x7c                        ; 0043b867
    POP EDI                             ; 0043b86a
    POP ESI                             ; 0043b86b
    POP EBX                             ; 0043b86c
    RET                                 ; 0043b86d
    MOV EDX,dword ptr [EAX]             ; 0043b86e
        ;   Label: LAB_0043b86e
    MOV dword ptr [EBX],EDX             ; 0043b870
    MOV EDX,dword ptr [EAX + 0x4]       ; 0043b872
    MOV dword ptr [EBX + 0x4],EDX       ; 0043b875
    MOV EDX,dword ptr [EAX + 0x8]       ; 0043b878
    MOV dword ptr [EBX + 0x8],EDX       ; 0043b87b
    ADD ESP,0x7c                        ; 0043b87e
    POP EDI                             ; 0043b881
    POP ESI                             ; 0043b882
    POP EBX                             ; 0043b883
    RET                                 ; 0043b884

