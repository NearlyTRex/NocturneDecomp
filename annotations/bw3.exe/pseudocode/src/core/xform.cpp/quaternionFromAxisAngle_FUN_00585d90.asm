; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_xform_cpp_quaternionFromAxisAngle_FUN_00585d90(float param_1,float *param_2)
;
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_0054e170 at 0054e282
;
; Referenced Globals:
;   undefined4 DAT_005d81b3
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00585d90
        ;   Label: core_xform.cpp_quaternionFromAxisAngle_FUN_00585d90
    SUB ESP,0x1c                        ; 00585d91
    MOV ECX,dword ptr [ESP + 0x28]      ; 00585d94
    MOV EDX,ESI                         ; 00585d98
    FLD float ptr [ESP + 0x24]          ; 00585d9a
    FMUL float ptr [0x005d81b3]         ; 00585d9e | DAT_005d81b3
    FLD ST0                             ; 00585da4
    FSIN                                ; 00585da6
    FXCH                                ; 00585da8
    FCOS                                ; 00585daa
    FLD ST1                             ; 00585dac
    FMUL float ptr [ECX]                ; 00585dae
    FLD ST2                             ; 00585db0
    FMUL float ptr [ECX + 0x4]          ; 00585db2
    FXCH ST3                            ; 00585db5
    FMUL float ptr [ECX + 0x8]          ; 00585db7
    MOV EDI,ESI                         ; 00585dba
    MOV ESI,ESP                         ; 00585dbc
    FXCH ST2                            ; 00585dbe
    FSTP float ptr [ESP]                ; 00585dc0
    FSTP float ptr [ESP + 0x4]          ; 00585dc3
    FXCH                                ; 00585dc7
    FSTP float ptr [ESP + 0x8]          ; 00585dc9
    FSTP float ptr [ESP + 0xc]          ; 00585dcd
    MOVSD ES:EDI,ESI                    ; 00585dd1
    MOVSD ES:EDI,ESI                    ; 00585dd2
    MOVSD ES:EDI,ESI                    ; 00585dd3
    MOVSD ES:EDI,ESI                    ; 00585dd4
    MOV EAX,EDX                         ; 00585dd5
    ADD ESP,0x1c                        ; 00585dd7
    POP EDI                             ; 00585dda
    RET                                 ; 00585ddb

