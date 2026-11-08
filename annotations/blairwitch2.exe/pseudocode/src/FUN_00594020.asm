; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00594020(float param_1)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[9]:
;   FUN_00450c60 at 004516f9
;   FUN_00455d10 at 00455de7
;   FUN_004562a0 at 00456301
;   FUN_004afa20 at 004afed3
;   FUN_00520140 at 005201a9
;   FUN_00567fd0 at 00568031
;   FUN_0059c680 at 0059c74e
;   FUN_005a0bd0 at 005a0d20
;   FUN_005a61f0 at 005a63b7
;
; Referenced Globals:
;   undefined4 DAT_005eedb2
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00594020
        ;   Label: FUN_00594020
    SUB ESP,0x18                        ; 00594021
    MOV EDX,ESI                         ; 00594024
    FLD float ptr [ESP + 0x20]          ; 00594026
    FMUL float ptr [0x005eedb2]         ; 0059402a | DAT_005eedb2
    FLD ST0                             ; 00594030
    FCOS                                ; 00594032
    FXCH                                ; 00594034
    FSIN                                ; 00594036
    MOV EDI,ESI                         ; 00594038
    XOR ECX,ECX                         ; 0059403a
    MOV ESI,ESP                         ; 0059403c
    MOV dword ptr [ESP + 0x4],ECX       ; 0059403e
    MOV dword ptr [ESP + 0x8],ECX       ; 00594042
    FXCH                                ; 00594046
    FSTP float ptr [ESP]                ; 00594048
    FSTP float ptr [ESP + 0xc]          ; 0059404b
    MOVSD ES:EDI,ESI                    ; 0059404f
    MOVSD ES:EDI,ESI                    ; 00594050
    MOVSD ES:EDI,ESI                    ; 00594051
    MOVSD ES:EDI,ESI                    ; 00594052
    MOV EAX,EDX                         ; 00594053
    ADD ESP,0x18                        ; 00594055
    POP EDI                             ; 00594058
    RET                                 ; 00594059

