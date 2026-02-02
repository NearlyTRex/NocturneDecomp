; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __stack_esi CQuaternion4f * __stack_esi core_xform_cpp_quaternionFromAngleZ_FUN_005f7a30(float angle_radians,CQuaternion4f *quat_out)
;
; Parameters:
; float            Stack[0x4]:4   angle_radians
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[3]:
;   core_gabriela.cpp_FUN_004d4d80 at 004d522f
;   core_scat.cpp_CScat_FUN_005584a0 at 00558585
;   core_stranger.cpp_CStranger_FUN_005c02b0 at 005c0311
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
    MOVSD ES:EDI,ESI                    ; 005f7a5f
    MOVSD ES:EDI,ESI                    ; 005f7a60
    MOVSD ES:EDI,ESI                    ; 005f7a61
    MOVSD ES:EDI,ESI                    ; 005f7a62
    MOV EAX,EDX                         ; 005f7a63
    ADD ESP,0x18                        ; 005f7a65
    POP EDI                             ; 005f7a68
    RET                                 ; 005f7a69

