; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CQuaternion4f * __stack_esi core_xform_cpp_quaternionFromAngleZ_FUN_005f7a30(float angle_radians,CQuaternion4f *quat_out)
;
; Parameters:
; float            Stack[0x4]:4   angle_radians
;
; XREF[3]:
;   core_gabriela.cpp_CGabriella_updateWeaponAndAimAnimation_FUN_004d4d80 at 004d522f
;   core_scat.cpp_CScat_blendAimBones_FUN_005584a0 at 00558585
;   core_stranger.cpp_CStranger_applyArmAimRotation_FUN_005c02b0 at 005c0311
;
; Referenced Globals:
;   double g_QuaternionHalfAngleFactor3 = 0.5
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 005f7a30
        ;   Label: core_xform.cpp_quaternionFromAngleZ_FUN_005f7a30
    SUB ESP,0x18                        ; 005f7a31
    MOV EDX,ESI                         ; 005f7a34
    FLD float ptr [ESP + 0x20]          ; 005f7a36
    FMUL double ptr [0x00658415]        ; 005f7a3a | g_QuaternionHalfAngleFactor3
    FLD ST0                             ; 005f7a40
    FCOS                                ; 005f7a42
    FXCH                                ; 005f7a44
    FSIN                                ; 005f7a46
    MOV EDI,ESI                         ; 005f7a48
    XOR ECX,ECX                         ; 005f7a4a
    MOV ESI,ESP                         ; 005f7a4c
    MOV dword ptr [ESP + 0x4],ECX       ; 005f7a4e
    MOV dword ptr [ESP + 0x8],ECX       ; 005f7a52
    FXCH                                ; 005f7a56
    FSTP float ptr [ESP]                ; 005f7a58
    FSTP float ptr [ESP + 0xc]          ; 005f7a5b
    JMP 0x00604cea                      ; 005f7a5f
        ;   XREF to: 00604cea (UNCONDITIONAL_JUMP)  ; LAB_00604cea
    ADD ESP,0x18                        ; 005f7a65
        ;   Label: LAB_005f7a65
    POP EDI                             ; 005f7a68
    RET                                 ; 005f7a69
    MOV ECX,dword ptr [ESI]             ; 00604cea
        ;   Label: LAB_00604cea
    MOV dword ptr [EDI],ECX             ; 00604cec
    MOV ECX,dword ptr [ESI + 0x4]       ; 00604cee
    MOV dword ptr [EDI + 0x4],ECX       ; 00604cf1
    MOV ECX,dword ptr [ESI + 0x8]       ; 00604cf4
    MOV dword ptr [EDI + 0x8],ECX       ; 00604cf7
    MOV ECX,dword ptr [ESI + 0xc]       ; 00604cfa
    MOV dword ptr [EDI + 0xc],ECX       ; 00604cfd
    ADD ESI,0x10                        ; 00604d00
    ADD EDI,0x10                        ; 00604d03
    MOV EAX,EDX                         ; 00604d06
    JMP 0x005f7a65                      ; 00604d08
        ;   XREF to: 005f7a65 (UNCONDITIONAL_JUMP)  ; LAB_005f7a65

