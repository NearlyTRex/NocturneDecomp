; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_xform_cpp_quaternionFromAngleZ_FUN_00585d50(float param_1)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[3]:
;   core_charactr.cpp_FUN_0042cd70 at 0042cf5b
;   core_prye.cpp_FUN_0051c1c0 at 0051e012
;   core_prye.cpp_FUN_0051ee10 at 0051ee77
;
; Referenced Globals:
;   undefined4 DAT_005d81af
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00585d50
        ;   Label: core_xform.cpp_quaternionFromAngleZ_FUN_00585d50
    SUB ESP,0x18                        ; 00585d51
    MOV EDX,ESI                         ; 00585d54
    FLD float ptr [ESP + 0x20]          ; 00585d56
    FMUL float ptr [0x005d81af]         ; 00585d5a | DAT_005d81af
    FLD ST0                             ; 00585d60
    FCOS                                ; 00585d62
    FXCH                                ; 00585d64
    FSIN                                ; 00585d66
    MOV EDI,ESI                         ; 00585d68
    XOR ECX,ECX                         ; 00585d6a
    MOV ESI,ESP                         ; 00585d6c
    MOV dword ptr [ESP + 0x4],ECX       ; 00585d6e
    MOV dword ptr [ESP + 0x8],ECX       ; 00585d72
    FXCH                                ; 00585d76
    FSTP float ptr [ESP]                ; 00585d78
    FSTP float ptr [ESP + 0xc]          ; 00585d7b
    MOVSD ES:EDI,ESI                    ; 00585d7f
    MOVSD ES:EDI,ESI                    ; 00585d80
    MOVSD ES:EDI,ESI                    ; 00585d81
    MOVSD ES:EDI,ESI                    ; 00585d82
    MOV EAX,EDX                         ; 00585d83
    ADD ESP,0x18                        ; 00585d85
    POP EDI                             ; 00585d88
    RET                                 ; 00585d89

