; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005b7bb0(float param_1,float *param_2)
;
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_005695e0 at 005696f2
;
; Referenced Globals:
;   undefined4 DAT_005fa188
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 005b7bb0
        ;   Label: FUN_005b7bb0
    SUB ESP,0x1c                        ; 005b7bb1
    MOV ECX,dword ptr [ESP + 0x28]      ; 005b7bb4
    MOV EDX,ESI                         ; 005b7bb8
    FLD float ptr [ESP + 0x24]          ; 005b7bba
    FMUL float ptr [0x005fa188]         ; 005b7bbe | DAT_005fa188
    FLD ST0                             ; 005b7bc4
    FSIN                                ; 005b7bc6
    FXCH                                ; 005b7bc8
    FCOS                                ; 005b7bca
    FLD ST1                             ; 005b7bcc
    FMUL float ptr [ECX]                ; 005b7bce
    FLD ST2                             ; 005b7bd0
    FMUL float ptr [ECX + 0x4]          ; 005b7bd2
    FXCH ST3                            ; 005b7bd5
    FMUL float ptr [ECX + 0x8]          ; 005b7bd7
    MOV EDI,ESI                         ; 005b7bda
    MOV ESI,ESP                         ; 005b7bdc
    FXCH ST2                            ; 005b7bde
    FSTP float ptr [ESP]                ; 005b7be0
    FSTP float ptr [ESP + 0x4]          ; 005b7be3
    FXCH                                ; 005b7be7
    FSTP float ptr [ESP + 0x8]          ; 005b7be9
    FSTP float ptr [ESP + 0xc]          ; 005b7bed
    MOVSD ES:EDI,ESI                    ; 005b7bf1
    MOVSD ES:EDI,ESI                    ; 005b7bf2
    MOVSD ES:EDI,ESI                    ; 005b7bf3
    MOVSD ES:EDI,ESI                    ; 005b7bf4
    MOV EAX,EDX                         ; 005b7bf5
    ADD ESP,0x1c                        ; 005b7bf7
    POP EDI                             ; 005b7bfa
    RET                                 ; 005b7bfb

