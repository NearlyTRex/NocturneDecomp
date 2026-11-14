; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_bodypart_cpp_FUN_00417b60(float *param_1,float *param_2)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_00522350 at 00528dd6
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00417b60
        ;   Label: core_bodypart.cpp_FUN_00417b60
    SUB ESP,0xc                         ; 00417b61
    MOV ECX,dword ptr [ESP + 0x14]      ; 00417b64
    MOV EDX,dword ptr [ESP + 0x18]      ; 00417b68
    MOV EAX,ESI                         ; 00417b6c
    FLD float ptr [ECX]                 ; 00417b6e
    FLD float ptr [ECX + 0x4]           ; 00417b70
    FLD float ptr [ECX + 0x8]           ; 00417b73
    MOV EDI,ESI                         ; 00417b76
    MOV ESI,ESP                         ; 00417b78
    FXCH ST2                            ; 00417b7a
    FSUB float ptr [EDX]                ; 00417b7c
    FXCH                                ; 00417b7e
    FSUB float ptr [EDX + 0x4]          ; 00417b80
    FXCH ST2                            ; 00417b83
    FSUB float ptr [EDX + 0x8]          ; 00417b85
    FXCH ST2                            ; 00417b88
    FSTP float ptr [ESP + 0x4]          ; 00417b8a
    FXCH                                ; 00417b8e
    FSTP float ptr [ESP + 0x8]          ; 00417b90
    FSTP float ptr [ESP]                ; 00417b94
    MOVSD ES:EDI,ESI                    ; 00417b97
    MOVSD ES:EDI,ESI                    ; 00417b98
    MOVSD ES:EDI,ESI                    ; 00417b99
    ADD ESP,0xc                         ; 00417b9a
    POP EDI                             ; 00417b9d
    RET                                 ; 00417b9e

