; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_xform_cpp_quaternionFromAngleZ_FUN_005b7b70(float param_1)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[4]:
;   core_doc.cpp_FUN_0046f200 at 0046f264
;   core_gabriela.cpp_CGabriella_updateWeaponAndAimAnimation_FUN_004c89c0 at 004c8e75
;   core_scat.cpp_CScat_blendAimBones_FUN_00542270 at 005422d9
;   core_stranger.cpp_CStranger_applyArmAimRotation_FUN_0058aab0 at 0058ab11
;
; Referenced Globals:
;   undefined4 DAT_005fa184
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 005b7b70
        ;   Label: core_xform.cpp_quaternionFromAngleZ_FUN_005b7b70
    SUB ESP,0x18                        ; 005b7b71
    MOV EDX,ESI                         ; 005b7b74
    FLD float ptr [ESP + 0x20]          ; 005b7b76
    FMUL float ptr [0x005fa184]         ; 005b7b7a | DAT_005fa184
    FLD ST0                             ; 005b7b80
    FCOS                                ; 005b7b82
    FXCH                                ; 005b7b84
    FSIN                                ; 005b7b86
    MOV EDI,ESI                         ; 005b7b88
    XOR ECX,ECX                         ; 005b7b8a
    MOV ESI,ESP                         ; 005b7b8c
    MOV dword ptr [ESP + 0x4],ECX       ; 005b7b8e
    MOV dword ptr [ESP + 0x8],ECX       ; 005b7b92
    FXCH                                ; 005b7b96
    FSTP float ptr [ESP]                ; 005b7b98
    FSTP float ptr [ESP + 0xc]          ; 005b7b9b
    MOVSD ES:EDI,ESI                    ; 005b7b9f
    MOVSD ES:EDI,ESI                    ; 005b7ba0
    MOVSD ES:EDI,ESI                    ; 005b7ba1
    MOVSD ES:EDI,ESI                    ; 005b7ba2
    MOV EAX,EDX                         ; 005b7ba3
    ADD ESP,0x18                        ; 005b7ba5
    POP EDI                             ; 005b7ba8
    RET                                 ; 005b7ba9

