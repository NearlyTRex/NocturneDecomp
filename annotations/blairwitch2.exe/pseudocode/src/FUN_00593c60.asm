; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00593c60(float *param_1,float *param_2)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[16]:
;   FUN_00429b40 at 00429bbe
;   FUN_00450c60 at 0045176e
;   FUN_00455d10 at 00455e06
;   FUN_004562a0 at 00456375
;   FUN_004afa20 at 004afbfe
;   FUN_00520140 at 00520287
;   FUN_00544f80 at 005454f0
;   FUN_00545a60 at 0054610b
;   FUN_005461c0 at 005465d8
;   FUN_00546da0 at 00546ed5
;   ... and 6 more
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00593c60
        ;   Label: FUN_00593c60
    SUB ESP,0x10                        ; 00593c61
    MOV EAX,dword ptr [ESP + 0x18]      ; 00593c64
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00593c68
    MOV ECX,ESI                         ; 00593c6c
    FLD float ptr [EDX + 0x4]           ; 00593c6e
    FMUL float ptr [EAX + 0x4]          ; 00593c71
    FLD float ptr [EDX]                 ; 00593c74
    FMUL float ptr [EAX + 0x4]          ; 00593c76
    FLD float ptr [EDX]                 ; 00593c79
    FMUL float ptr [EAX + 0x8]          ; 00593c7b
    FLD float ptr [EDX]                 ; 00593c7e
    FMUL float ptr [EAX + 0xc]          ; 00593c80
    FLD float ptr [EDX + 0x8]           ; 00593c83
    FMUL float ptr [EAX + 0x8]          ; 00593c86
    FLD float ptr [EAX]                 ; 00593c89
    FXCH                                ; 00593c8b
    FADDP ST5,ST0                       ; 00593c8d
    FMUL float ptr [EDX + 0x4]          ; 00593c8f
    FLD float ptr [EDX + 0xc]           ; 00593c92
    FMUL float ptr [EAX + 0xc]          ; 00593c95
    FLD float ptr [EAX]                 ; 00593c98
    FMUL float ptr [EDX + 0x8]          ; 00593c9a
    FXCH                                ; 00593c9d
    FADDP ST6,ST0                       ; 00593c9f
    FLD float ptr [EAX]                 ; 00593ca1
    FXCH ST2                            ; 00593ca3
    FADDP ST5,ST0                       ; 00593ca5
    FXCH                                ; 00593ca7
    FMUL float ptr [EDX + 0xc]          ; 00593ca9
    FLD float ptr [EDX + 0x8]           ; 00593cac
    FMUL float ptr [EAX + 0xc]          ; 00593caf
    FXCH ST2                            ; 00593cb2
    FADDP ST4,ST0                       ; 00593cb4
    FXCH                                ; 00593cb6
    FADDP ST4,ST0                       ; 00593cb8
    FLD float ptr [EDX]                 ; 00593cba
    FMUL float ptr [EAX]                ; 00593cbc
    FLD float ptr [EDX + 0xc]           ; 00593cbe
    FMUL float ptr [EAX + 0x4]          ; 00593cc1
    FXCH ST2                            ; 00593cc4
    FADDP ST3,ST0                       ; 00593cc6
    FXCH                                ; 00593cc8
    FADDP ST3,ST0                       ; 00593cca
    FLD float ptr [EDX + 0xc]           ; 00593ccc
    FMUL float ptr [EAX + 0x8]          ; 00593ccf
    FLD float ptr [EDX + 0x4]           ; 00593cd2
    FMUL float ptr [EAX + 0x8]          ; 00593cd5
    FADDP ST3,ST0                       ; 00593cd8
    FXCH                                ; 00593cda
    FSUBRP ST5,ST0                      ; 00593cdc
    FLD float ptr [EDX + 0x4]           ; 00593cde
    FMUL float ptr [EAX + 0xc]          ; 00593ce1
    FLD float ptr [EDX + 0x8]           ; 00593ce4
    FMUL float ptr [EAX + 0x4]          ; 00593ce7
    MOV EDI,ESI                         ; 00593cea
    MOV ESI,ESP                         ; 00593cec
    FXCH ST2                            ; 00593cee
    FSUBP ST5,ST0                       ; 00593cf0
    FSUBP ST3,ST0                       ; 00593cf2
    FSUBP                               ; 00593cf4
    FXCH ST2                            ; 00593cf6
    FSTP float ptr [ESP + 0x4]          ; 00593cf8
    FSTP float ptr [ESP + 0x8]          ; 00593cfc
    FSTP float ptr [ESP + 0xc]          ; 00593d00
    FSTP float ptr [ESP]                ; 00593d04
    MOVSD ES:EDI,ESI                    ; 00593d07
    MOVSD ES:EDI,ESI                    ; 00593d08
    MOVSD ES:EDI,ESI                    ; 00593d09
    MOVSD ES:EDI,ESI                    ; 00593d0a
    MOV EAX,ECX                         ; 00593d0b
    ADD ESP,0x10                        ; 00593d0d
    POP EDI                             ; 00593d10
    RET                                 ; 00593d11

