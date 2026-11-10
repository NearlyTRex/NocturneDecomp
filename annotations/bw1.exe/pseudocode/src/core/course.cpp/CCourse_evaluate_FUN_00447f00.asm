; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_course_cpp_CCourse_evaluate_FUN_00447f00(CCourse *this_ptr,float time,CVector3f *out_pos,CVector3f *out_euler)
;
; Parameters:
; CCourse *        Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   time
; CVector3f *      Stack[0xc]:4   out_pos
; CVector3f *      Stack[0x10]:4   out_euler
; Local Variables:
; undefined        Stack[-0x94]:1  local_94
; undefined        Stack[-0x64]:1  local_64
; undefined        Stack[-0x34]:1  local_34
; undefined        Stack[-0x24]:1  local_24
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[6]:
;   core_bat.cpp_CBat_updateCoursePosition_FUN_00411060 at 004110ff
;   core_frankgen.cpp_CFrankenstienMachine_setCourseFrame_FUN_004c5f10 at 004c5f8e
;   core_marquee.cpp_CMarquee_computeBoundingBox_FUN_005069f0 at 00506a64
;   core_marquee.cpp_CMarquee_renderTransparent_FUN_00506e20 at 00506ee0
;   core_platfrm.cpp_CPlatform_evaluatePosition_FUN_00539660 at 005397d8
;   core_vehicle.cpp_CVehicle_process_FUN_005a7b50 at 005a7ba7
;
; Called Functions:
;   core_course.cpp_FUN_00447fb0
;   core_xform.cpp_matrixToEulerAngles_FUN_005b5930
;   core_xform.cpp_quaternionToMatrix3x4_FUN_005b7560
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00447f00
        ;   Label: core_course.cpp_CCourse_evaluate_FUN_00447f00
    PUSH ESI                            ; 00447f01
    PUSH EDI                            ; 00447f02
    SUB ESP,0x88                        ; 00447f03
    MOV EBX,dword ptr [ESP + 0xa4]      ; 00447f09
    LEA EAX,[ESP + 0x60]                ; 00447f10
    PUSH EAX                            ; 00447f14
    MOV EDX,dword ptr [ESP + 0xa4]      ; 00447f15
    PUSH EDX                            ; 00447f1c
    MOV ECX,dword ptr [ESP + 0xa0]      ; 00447f1d
    PUSH dword ptr [ESP + 0xa4]         ; 00447f24
    PUSH ECX                            ; 00447f2b
    CALL core_course.cpp_FUN_00447fb0   ; 00447f2c
        ;   XREF to: 00447fb0 (UNCONDITIONAL_CALL)  ; void core_course.cpp_FUN_00447fb0(CCourse * this_ptr, float time, CVector3f * out_pos, CQuaternion4f * out_orient)
    ADD ESP,0x10                        ; 00447f31
    LEA EAX,[ESP + 0x60]                ; 00447f34
    PUSH EAX                            ; 00447f38
    LEA ESI,[ESP + 0x4]                 ; 00447f39
    LEA EDI,[ESP + 0x34]                ; 00447f3d
    CALL core_xform.cpp_quaternionToMatrix3x4_FUN_005b7560 ; 00447f41
        ;   XREF to: 005b7560 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionToMatrix3x4_FUN_005b7560()
    MOV ECX,0xc                         ; 00447f46
    LEA ESI,[ESP + 0x4]                 ; 00447f4b
    ADD ESP,0x4                         ; 00447f4f
    LEA EAX,[ESP + 0x30]                ; 00447f52
    MOVSD.REP ES:EDI,ESI                ; 00447f56
    PUSH EAX                            ; 00447f58
    LEA ESI,[ESP + 0x74]                ; 00447f59
    LEA EDI,[ESP + 0x80]                ; 00447f5d
    CALL core_xform.cpp_matrixToEulerAngles_FUN_005b5930 ; 00447f64
        ;   XREF to: 005b5930 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_matrixToEulerAngles_FUN_005b5930()
    LEA ESI,[ESP + 0x74]                ; 00447f69
    ADD ESP,0x4                         ; 00447f6d
    LEA EAX,[ESP + 0x7c]                ; 00447f70
    MOVSD ES:EDI,ESI                    ; 00447f74
    MOVSD ES:EDI,ESI                    ; 00447f75
    MOVSD ES:EDI,ESI                    ; 00447f76
    CMP EBX,EAX                         ; 00447f77
    JNZ 0x00447f85                      ; 00447f79
        ;   XREF to: 00447f85 (CONDITIONAL_JUMP)  ; LAB_00447f85
    ADD ESP,0x88                        ; 00447f7b
    POP EDI                             ; 00447f81
    POP ESI                             ; 00447f82
    POP EBX                             ; 00447f83
    RET                                 ; 00447f84
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00447f85
        ;   Label: LAB_00447f85
    MOV dword ptr [EBX],EAX             ; 00447f89
    MOV EAX,dword ptr [ESP + 0x80]      ; 00447f8b
    MOV dword ptr [EBX + 0x4],EAX       ; 00447f92
    MOV EAX,dword ptr [ESP + 0x84]      ; 00447f95
    MOV dword ptr [EBX + 0x8],EAX       ; 00447f9c
    ADD ESP,0x88                        ; 00447f9f
    POP EDI                             ; 00447fa5
    POP ESI                             ; 00447fa6
    POP EBX                             ; 00447fa7
    RET                                 ; 00447fa8

