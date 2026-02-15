; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CQuaternion4f * __stack2_esi core_xform_cpp_quaternionFromAxisAngle_FUN_005f7a70(float angle_radians,CVector3f *axis_ptr,CQuaternion4f *quat_out)
;
; Parameters:
; float            Stack[0x4]:4   angle_radians
; CVector3f *      Stack[0x8]:4   axis_ptr
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0059ff20 at 005a0032
;
; Referenced Globals:
;   double g_QuaternionHalfAngleFactor4 = 0.5
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 005f7a70
        ;   Label: core_xform.cpp_quaternionFromAxisAngle_FUN_005f7a70
    SUB ESP,0x20                        ; 005f7a71
    MOV ECX,dword ptr [ESP + 0x2c]      ; 005f7a74
    MOV EDX,ESI                         ; 005f7a78
    FLD float ptr [ESP + 0x28]          ; 005f7a7a
    FMUL double ptr [0x0065841d]        ; 005f7a7e | g_QuaternionHalfAngleFactor4
    FLD ST0                             ; 005f7a84
    FSIN                                ; 005f7a86
    FXCH                                ; 005f7a88
    FCOS                                ; 005f7a8a
    FLD float ptr [ECX]                 ; 005f7a8c
    FMUL ST2                            ; 005f7a8e
    FLD float ptr [ECX + 0x4]           ; 005f7a90
    FMUL ST3                            ; 005f7a93
    FLD float ptr [ECX + 0x8]           ; 005f7a95
    FMULP ST4                           ; 005f7a98
    MOV EDI,ESI                         ; 005f7a9a
    MOV ESI,ESP                         ; 005f7a9c
    FXCH ST2                            ; 005f7a9e
    FSTP float ptr [ESP]                ; 005f7aa0
    FSTP float ptr [ESP + 0x4]          ; 005f7aa3
    FSTP float ptr [ESP + 0x8]          ; 005f7aa7
    FSTP float ptr [ESP + 0xc]          ; 005f7aab
    MOVSD ES:EDI,ESI                    ; 005f7aaf
    MOVSD ES:EDI,ESI                    ; 005f7ab0
    MOVSD ES:EDI,ESI                    ; 005f7ab1
    MOVSD ES:EDI,ESI                    ; 005f7ab2
    MOV EAX,EDX                         ; 005f7ab3
    ADD ESP,0x20                        ; 005f7ab5
    POP EDI                             ; 005f7ab8
    RET                                 ; 005f7ab9

