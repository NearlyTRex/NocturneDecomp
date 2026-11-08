; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005b6e10(float param_1)
;
; Local Variables:
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[5]:
;   FUN_00430440 at 004306d5
;   FUN_0046f740 at 0046f861
;   FUN_004c91b0 at 004c92a0
;   FUN_004cb1e0 at 004cb539
;   FUN_0058afe0 at 0058b105
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 005b6e10
        ;   Label: FUN_005b6e10
    SUB ESP,0x40                        ; 005b6e11
    MOV EDX,ESI                         ; 005b6e14
    FLD float ptr [ESP + 0x48]          ; 005b6e16
    FLD ST0                             ; 005b6e1a
    FSIN                                ; 005b6e1c
    FXCH                                ; 005b6e1e
    FCOS                                ; 005b6e20
    XOR ECX,ECX                         ; 005b6e22
    MOV EDI,0x3f800000                  ; 005b6e24
    MOV dword ptr [ESP + 0x4],ECX       ; 005b6e29
    MOV dword ptr [ESP + 0xc],ECX       ; 005b6e2d
    MOV dword ptr [ESP + 0x10],ECX      ; 005b6e31
    MOV dword ptr [ESP + 0x14],EDI      ; 005b6e35
    MOV dword ptr [ESP + 0x18],ECX      ; 005b6e39
    MOV dword ptr [ESP + 0x1c],ECX      ; 005b6e3d
    MOV dword ptr [ESP + 0x24],ECX      ; 005b6e41
    MOV dword ptr [ESP + 0x2c],ECX      ; 005b6e45
    MOV ECX,0xc                         ; 005b6e49
    MOV EDI,ESI                         ; 005b6e4e
    MOV ESI,ESP                         ; 005b6e50
    FSTP float ptr [ESP + 0x38]         ; 005b6e52
    MOV EAX,dword ptr [ESP + 0x38]      ; 005b6e56
    FSTP float ptr [ESP + 0x3c]         ; 005b6e5a
    MOV dword ptr [ESP],EAX             ; 005b6e5e
    MOV EAX,dword ptr [ESP + 0x3c]      ; 005b6e61
    FLD float ptr [ESP + 0x3c]          ; 005b6e65
    MOV dword ptr [ESP + 0x8],EAX       ; 005b6e69
    MOV EAX,dword ptr [ESP + 0x38]      ; 005b6e6d
    FCHS                                ; 005b6e71
    MOV dword ptr [ESP + 0x28],EAX      ; 005b6e73
    FSTP float ptr [ESP + 0x20]         ; 005b6e77
    MOVSD.REP ES:EDI,ESI                ; 005b6e7b
    MOV EAX,EDX                         ; 005b6e7d
    ADD ESP,0x40                        ; 005b6e7f
    POP EDI                             ; 005b6e82
    RET                                 ; 005b6e83

