; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CQuaternion4f * __stack2_esi core_xform_cpp_quaternionFromAxisAngle_FUN_005f7a70(float angle_radians,CVector3f *axis_ptr,CQuaternion4f *quat_out)
;
; Parameters:
; float            Stack[0x4]:4   angle_radians
; CVector3f *      Stack[0x8]:4   axis_ptr
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
    JMP 0x00604d0d                      ; 005f7aaf
        ;   XREF to: 00604d0d (UNCONDITIONAL_JUMP)  ; LAB_00604d0d
    ADD ESP,0x20                        ; 005f7ab5
        ;   Label: LAB_005f7ab5
    POP EDI                             ; 005f7ab8
    RET                                 ; 005f7ab9
    MOV ECX,dword ptr [ESI]             ; 00604d0d
        ;   Label: LAB_00604d0d
    MOV dword ptr [EDI],ECX             ; 00604d0f
    MOV ECX,dword ptr [ESI + 0x4]       ; 00604d11
    MOV dword ptr [EDI + 0x4],ECX       ; 00604d14
    MOV ECX,dword ptr [ESI + 0x8]       ; 00604d17
    MOV dword ptr [EDI + 0x8],ECX       ; 00604d1a
    MOV ECX,dword ptr [ESI + 0xc]       ; 00604d1d
    MOV dword ptr [EDI + 0xc],ECX       ; 00604d20
    ADD ESI,0x10                        ; 00604d23
    ADD EDI,0x10                        ; 00604d26
    MOV EAX,EDX                         ; 00604d29
    JMP 0x005f7ab5                      ; 00604d2b
        ;   XREF to: 005f7ab5 (UNCONDITIONAL_JUMP)  ; LAB_005f7ab5

