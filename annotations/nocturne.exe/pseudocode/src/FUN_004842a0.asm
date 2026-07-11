; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004842a0(void)
;
; Local Variables:
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x48]:4  local_48
; undefined        Stack[-0x40]:1  local_40
; undefined        Stack[-0x18]:1  local_18
;
; XREF[1]:
;   FUN_0048a650 at 0048a6b7
;
; Referenced Globals:
;   undefined4 DAT_0058110c
;   undefined4 DAT_005ae704
;   undefined4 DAT_007f7370
;   undefined4 DAT_01b4d738
;   undefined4 DAT_01c08d08
;   undefined4 DAT_01c08d0c
;   undefined4 DAT_01c08d10
;   undefined4 DAT_01c08d14
;   undefined4 DAT_01c08d18
;   undefined4 DAT_01c08d1c
;   undefined4 DAT_01c08d24
;   undefined4 DAT_01c08d28
;   undefined4 DAT_01c08d2c
;   undefined4 DAT_01c08d30
;   undefined4 DAT_01c08d34
;   ... and 4 more
;
; Called Functions:
;   FUN_00460d90
;   FUN_00563a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004842a0
        ;   Label: FUN_004842a0
    PUSH ESI                            ; 004842a1
    PUSH EDI                            ; 004842a2
    SUB ESP,0x5c                        ; 004842a3
    MOV EDX,0x4                         ; 004842a6
    MOV EAX,0x1                         ; 004842ab
    LEA ESI,[ESP + 0x50]                ; 004842b0
    MOV EBX,dword ptr [0x005ae704]      ; 004842b4 | DAT_005ae704
    MOV EDI,0x1c08d08                   ; 004842ba
    XOR ECX,ECX                         ; 004842bf
    MOV dword ptr [0x01c08d24],EDX      ; 004842c1 | DAT_01c08d24
    MOV dword ptr [0x01c08d28],ECX      ; 004842c7 | DAT_01c08d28
    MOV dword ptr [0x01c08d2c],ECX      ; 004842cd | DAT_01c08d2c
    MOV dword ptr [0x01c08d30],ECX      ; 004842d3 | DAT_01c08d30
    MOV dword ptr [0x01c08d34],ECX      ; 004842d9 | DAT_01c08d34
    MOV dword ptr [0x01c08d38],ECX      ; 004842df | DAT_01c08d38
    MOV [0x01c08d3c],EAX                ; 004842e5 | DAT_01c08d3c
    PUSH EBX                            ; 004842ea | DAT_01b4d738
    MOV EDX,0x2                         ; 004842eb
    MOV ECX,0x3                         ; 004842f0
    MOV dword ptr [0x01c08d40],EDX      ; 004842f5 | DAT_01c08d40
    MOV dword ptr [0x01c08d44],ECX      ; 004842fb | DAT_01c08d44
    CALL FUN_00460d90                   ; 00484301
        ;   XREF to: 00460d90 (UNCONDITIONAL_CALL)  ; undefined FUN_00460d90()
    LEA ESI,[ESP + 0x54]                ; 00484306
    ADD ESP,0x4                         ; 0048430a
    MOVSD ES:EDI,ESI                    ; 0048430d | DAT_01c08d08
    MOVSD ES:EDI,ESI                    ; 0048430e | DAT_01c08d0c
    MOVSD ES:EDI,ESI                    ; 0048430f | DAT_01c08d10
    XOR ESI,ESI                         ; 00484310
    MOV dword ptr [0x01c08d0c],ESI      ; 00484312 | DAT_01c08d0c
    MOV ESI,dword ptr [0x007f7370]      ; 00484318 | DAT_007f7370
    MOV ECX,0xa                         ; 0048431e
    LEA EDI,[ESP + 0x28]                ; 00484323
    LEA ESI,[ESI + 0x110]               ; 00484327
    MOVSD.REP ES:EDI,ESI                ; 0048432d
    MOV ECX,0xa                         ; 0048432f
    MOV EDI,ESP                         ; 00484334
    LEA ESI,[ESP + 0x28]                ; 00484336
    MOVSD.REP ES:EDI,ESI                ; 0048433a
    FLD double ptr [0x0058110c]         ; 0048433c | DAT_0058110c
    FLD float ptr [ESP + 0x8]           ; 00484342
    FMUL ST1                            ; 00484346
    FLD float ptr [ESP + 0x14]          ; 00484348
    FMUL ST2                            ; 0048434c
    FLD float ptr [ESP + 0x20]          ; 0048434e
    FMULP ST3                           ; 00484352
    FXCH                                ; 00484354
    CALL FUN_00563a30                   ; 00484356
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined FUN_00563a30()
    FXCH                                ; 0048435b
    CALL FUN_00563a30                   ; 0048435d
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined FUN_00563a30()
    FXCH ST2                            ; 00484362
    CALL FUN_00563a30                   ; 00484364
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined FUN_00563a30()
    FXCH                                ; 00484369
    FISTP dword ptr [0x01c08d14]        ; 0048436b | DAT_01c08d14
    FXCH                                ; 00484371
    FISTP dword ptr [0x01c08d18]        ; 00484373 | DAT_01c08d18
    FISTP dword ptr [0x01c08d1c]        ; 00484379 | DAT_01c08d1c
    ADD ESP,0x5c                        ; 0048437f
    POP EDI                             ; 00484382
    POP ESI                             ; 00484383
    POP EBX                             ; 00484384
    RET                                 ; 00484385

