; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00594060(float param_1,float *param_2)
;
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00546f40 at 00547052
;
; Referenced Globals:
;   undefined4 DAT_005eedb6
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00594060
        ;   Label: FUN_00594060
    SUB ESP,0x1c                        ; 00594061
    MOV ECX,dword ptr [ESP + 0x28]      ; 00594064
    MOV EDX,ESI                         ; 00594068
    FLD float ptr [ESP + 0x24]          ; 0059406a
    FMUL float ptr [0x005eedb6]         ; 0059406e | DAT_005eedb6
    FLD ST0                             ; 00594074
    FSIN                                ; 00594076
    FXCH                                ; 00594078
    FCOS                                ; 0059407a
    FLD ST1                             ; 0059407c
    FMUL float ptr [ECX]                ; 0059407e
    FLD ST2                             ; 00594080
    FMUL float ptr [ECX + 0x4]          ; 00594082
    FXCH ST3                            ; 00594085
    FMUL float ptr [ECX + 0x8]          ; 00594087
    MOV EDI,ESI                         ; 0059408a
    MOV ESI,ESP                         ; 0059408c
    FXCH ST2                            ; 0059408e
    FSTP float ptr [ESP]                ; 00594090
    FSTP float ptr [ESP + 0x4]          ; 00594093
    FXCH                                ; 00594097
    FSTP float ptr [ESP + 0x8]          ; 00594099
    FSTP float ptr [ESP + 0xc]          ; 0059409d
    MOVSD ES:EDI,ESI                    ; 005940a1
    MOVSD ES:EDI,ESI                    ; 005940a2
    MOVSD ES:EDI,ESI                    ; 005940a3
    MOVSD ES:EDI,ESI                    ; 005940a4
    MOV EAX,EDX                         ; 005940a5
    ADD ESP,0x1c                        ; 005940a7
    POP EDI                             ; 005940aa
    RET                                 ; 005940ab

