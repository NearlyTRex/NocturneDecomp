; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0041afe0(float *param_1,float *param_2)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   FUN_00544460 at 0054a0f3
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 0041afe0
        ;   Label: FUN_0041afe0
    SUB ESP,0xc                         ; 0041afe1
    MOV ECX,dword ptr [ESP + 0x14]      ; 0041afe4
    MOV EDX,dword ptr [ESP + 0x18]      ; 0041afe8
    MOV EAX,ESI                         ; 0041afec
    FLD float ptr [ECX]                 ; 0041afee
    FLD float ptr [ECX + 0x4]           ; 0041aff0
    FLD float ptr [ECX + 0x8]           ; 0041aff3
    MOV EDI,ESI                         ; 0041aff6
    MOV ESI,ESP                         ; 0041aff8
    FXCH ST2                            ; 0041affa
    FSUB float ptr [EDX]                ; 0041affc
    FXCH                                ; 0041affe
    FSUB float ptr [EDX + 0x4]          ; 0041b000
    FXCH ST2                            ; 0041b003
    FSUB float ptr [EDX + 0x8]          ; 0041b005
    FXCH ST2                            ; 0041b008
    FSTP float ptr [ESP + 0x4]          ; 0041b00a
    FXCH                                ; 0041b00e
    FSTP float ptr [ESP + 0x8]          ; 0041b010
    FSTP float ptr [ESP]                ; 0041b014
    MOVSD ES:EDI,ESI                    ; 0041b017
    MOVSD ES:EDI,ESI                    ; 0041b018
    MOVSD ES:EDI,ESI                    ; 0041b019
    ADD ESP,0xc                         ; 0041b01a
    POP EDI                             ; 0041b01d
    RET                                 ; 0041b01e

