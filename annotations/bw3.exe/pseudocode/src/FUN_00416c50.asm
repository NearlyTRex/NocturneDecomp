; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00416c50(float *param_1,float *param_2)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[5]:
;   FUN_00418930 at 00418b6a
;   FUN_00427bc0 at 00427e90
;   FUN_00457740 at 00457a0a
;   FUN_0058b3f0 at 0058b6ba
;   FUN_0058efb0 at 0058f21e
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00416c50
        ;   Label: FUN_00416c50
    SUB ESP,0xc                         ; 00416c51
    MOV ECX,dword ptr [ESP + 0x14]      ; 00416c54
    MOV EDX,dword ptr [ESP + 0x18]      ; 00416c58
    MOV EAX,ESI                         ; 00416c5c
    FLD float ptr [ECX]                 ; 00416c5e
    FLD float ptr [ECX + 0x4]           ; 00416c60
    FLD float ptr [ECX + 0x8]           ; 00416c63
    MOV EDI,ESI                         ; 00416c66
    MOV ESI,ESP                         ; 00416c68
    FXCH ST2                            ; 00416c6a
    FADD float ptr [EDX]                ; 00416c6c
    FXCH                                ; 00416c6e
    FADD float ptr [EDX + 0x4]          ; 00416c70
    FXCH ST2                            ; 00416c73
    FADD float ptr [EDX + 0x8]          ; 00416c75
    FXCH ST2                            ; 00416c78
    FSTP float ptr [ESP + 0x4]          ; 00416c7a
    FXCH                                ; 00416c7e
    FSTP float ptr [ESP + 0x8]          ; 00416c80
    FSTP float ptr [ESP]                ; 00416c84
    MOVSD ES:EDI,ESI                    ; 00416c87
    MOVSD ES:EDI,ESI                    ; 00416c88
    MOVSD ES:EDI,ESI                    ; 00416c89
    ADD ESP,0xc                         ; 00416c8a
    POP EDI                             ; 00416c8d
    RET                                 ; 00416c8e

