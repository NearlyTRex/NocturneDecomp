; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00416c10(float *param_1,float *param_2)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   FUN_00529a70 at 0052f7da
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00416c10
        ;   Label: FUN_00416c10
    SUB ESP,0xc                         ; 00416c11
    MOV ECX,dword ptr [ESP + 0x14]      ; 00416c14
    MOV EDX,dword ptr [ESP + 0x18]      ; 00416c18
    MOV EAX,ESI                         ; 00416c1c
    FLD float ptr [ECX]                 ; 00416c1e
    FLD float ptr [ECX + 0x4]           ; 00416c20
    FLD float ptr [ECX + 0x8]           ; 00416c23
    MOV EDI,ESI                         ; 00416c26
    MOV ESI,ESP                         ; 00416c28
    FXCH ST2                            ; 00416c2a
    FSUB float ptr [EDX]                ; 00416c2c
    FXCH                                ; 00416c2e
    FSUB float ptr [EDX + 0x4]          ; 00416c30
    FXCH ST2                            ; 00416c33
    FSUB float ptr [EDX + 0x8]          ; 00416c35
    FXCH ST2                            ; 00416c38
    FSTP float ptr [ESP + 0x4]          ; 00416c3a
    FXCH                                ; 00416c3e
    FSTP float ptr [ESP + 0x8]          ; 00416c40
    FSTP float ptr [ESP]                ; 00416c44
    MOVSD ES:EDI,ESI                    ; 00416c47
    MOVSD ES:EDI,ESI                    ; 00416c48
    MOVSD ES:EDI,ESI                    ; 00416c49
    ADD ESP,0xc                         ; 00416c4a
    POP EDI                             ; 00416c4d
    RET                                 ; 00416c4e

